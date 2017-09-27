/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "networkanalysis/routelayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Analyst
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelected_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelected_void_ev_bool_Callback)(_in ev_bool selected);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setDateset_void_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_isShowTip_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setShowTip_void_ev_bool_Callback)(_in ev_bool show);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_addStop_void_CPoint_Callback)(_in const void* pt);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_addBarriar_void_CPoint_Callback)(_in const void* pt);
				typedef int  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_attach_EVNAAttachType_CPoint_ev_real64_Callback)(_in const void* pt, _in ev_real64 threshold);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_CRectangle_Callback)(_in const void* rect);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_moveTo_void_CPoint_Callback)(_in const void* pt);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_remove_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_clear_void_Callback)();
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getLockedSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CPoint_ev_real64_Callback)(_in const void* pt, _in ev_real64 threshold);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CRectangle_Callback)(_in const void* rect);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_removeResult_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_solve_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setAnalystMethod_void_EVNAAnalystMethod_Callback)(_in int method);
				typedef int  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CRouteLayerProxy : public EarthView::World::Spatial2D::Analyst::CRouteLayer
				{
				private:
					EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelected_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelected_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelected_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_setDateset_void_IDataset_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDateset_void_IDataset_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_isShowTip_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isShowTip_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_setShowTip_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setShowTip_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_addStop_void_CPoint_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_addStop_void_CPoint_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_addBarriar_void_CPoint_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_addBarriar_void_CPoint_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_attach_EVNAAttachType_CPoint_ev_real64_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_attach_EVNAAttachType_CPoint_ev_real64_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_CRectangle_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_CRectangle_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_moveTo_void_CPoint_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_moveTo_void_CPoint_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_remove_void_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_remove_void_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_clear_void_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_clear_void_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_getLockedSymbol_ISymbol_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getLockedSymbol_ISymbol_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CPoint_ev_real64_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CPoint_ev_real64_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CRectangle_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CRectangle_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_removeResult_void_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_removeResult_void_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_solve_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_solve_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_setAnalystMethod_void_EVNAAnalystMethod_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setAnalystMethod_void_EVNAAnalystMethod_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_clearSelection_void_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_clearSelection_void_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_getName_EVString_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getName_EVString_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_clone_ILayer_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_clone_ILayer_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_toXML_EVString_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_toXML_EVString_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial2D_Analyst_CRouteLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Analyst_CRouteLayer_fromStream_void_CDataStream_Callback;
				public:
					CRouteLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRouteLayer(pList)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelected_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelected_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDateset_void_IDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isShowTip_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setShowTip_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_addStop_void_CPoint_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_addBarriar_void_CPoint_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_attach_EVNAAttachType_CPoint_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_CRectangle_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_moveTo_void_CPoint_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_remove_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_clear_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getLockedSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CPoint_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CRectangle_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_removeResult_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_solve_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setAnalystMethod_void_EVNAAnalystMethod_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CRouteLayerProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelected_ev_bool(EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelected_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelected_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelected_void_ev_bool(EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelected_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelected_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDateset_void_IDataset(EarthView_World_Spatial2D_Analyst_CRouteLayer_setDateset_void_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDateset_void_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isShowTip_ev_bool(EarthView_World_Spatial2D_Analyst_CRouteLayer_isShowTip_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isShowTip_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setShowTip_void_ev_bool(EarthView_World_Spatial2D_Analyst_CRouteLayer_setShowTip_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setShowTip_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_addStop_void_CPoint(EarthView_World_Spatial2D_Analyst_CRouteLayer_addStop_void_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_addStop_void_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_addBarriar_void_CPoint(EarthView_World_Spatial2D_Analyst_CRouteLayer_addBarriar_void_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_addBarriar_void_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_attach_EVNAAttachType_CPoint_ev_real64(EarthView_World_Spatial2D_Analyst_CRouteLayer_attach_EVNAAttachType_CPoint_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_attach_EVNAAttachType_CPoint_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_CRectangle(EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_CRectangle_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_CRectangle_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_moveTo_void_CPoint(EarthView_World_Spatial2D_Analyst_CRouteLayer_moveTo_void_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_moveTo_void_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_remove_void(EarthView_World_Spatial2D_Analyst_CRouteLayer_remove_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_remove_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_clear_void(EarthView_World_Spatial2D_Analyst_CRouteLayer_clear_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_clear_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getLockedSymbol_ISymbol(EarthView_World_Spatial2D_Analyst_CRouteLayer_getLockedSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getLockedSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CPoint_ev_real64(EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CPoint_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CPoint_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CRectangle(EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CRectangle_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CRectangle_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_removeResult_void(EarthView_World_Spatial2D_Analyst_CRouteLayer_removeResult_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_removeResult_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_solve_ev_bool(EarthView_World_Spatial2D_Analyst_CRouteLayer_solve_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_solve_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setAnalystMethod_void_EVNAAnalystMethod(EarthView_World_Spatial2D_Analyst_CRouteLayer_setAnalystMethod_void_EVNAAnalystMethod_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setAnalystMethod_void_EVNAAnalystMethod_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getType_EVLayerType(EarthView_World_Spatial2D_Analyst_CRouteLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataset_IDataset(EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDatasetName_EVString(EarthView_World_Spatial2D_Analyst_CRouteLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataSource_IDataSource(EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_clearSelection_void(EarthView_World_Spatial2D_Analyst_CRouteLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial2D_Analyst_CRouteLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial2D_Analyst_CRouteLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getName_EVString(EarthView_World_Spatial2D_Analyst_CRouteLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setName_void_EVString(EarthView_World_Spatial2D_Analyst_CRouteLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDescription_EVString(EarthView_World_Spatial2D_Analyst_CRouteLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDescription_void_EVString(EarthView_World_Spatial2D_Analyst_CRouteLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_canEdit_ev_bool(EarthView_World_Spatial2D_Analyst_CRouteLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial2D_Analyst_CRouteLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isEditing_ev_bool(EarthView_World_Spatial2D_Analyst_CRouteLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setEditing_void_ev_bool(EarthView_World_Spatial2D_Analyst_CRouteLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isVisible_ev_bool(EarthView_World_Spatial2D_Analyst_CRouteLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setVisible_void_ev_bool(EarthView_World_Spatial2D_Analyst_CRouteLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isValid_ev_bool(EarthView_World_Spatial2D_Analyst_CRouteLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelectable_ev_bool(EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelectable_void_ev_bool(EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_ignoreScale_ev_bool(EarthView_World_Spatial2D_Analyst_CRouteLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial2D_Analyst_CRouteLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial2D_Analyst_CRouteLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial2D_Analyst_CRouteLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial2D_Analyst_CRouteLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial2D_Analyst_CRouteLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getExtent_IEnvelope(EarthView_World_Spatial2D_Analyst_CRouteLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial2D_Analyst_CRouteLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_clone_ILayer(EarthView_World_Spatial2D_Analyst_CRouteLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_toStream_void_CDataStream(EarthView_World_Spatial2D_Analyst_CRouteLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_toXML_EVString(EarthView_World_Spatial2D_Analyst_CRouteLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial2D_Analyst_CRouteLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_toXmlElement_CXmlElement(EarthView_World_Spatial2D_Analyst_CRouteLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_fromStream_void_CDataStream(EarthView_World_Spatial2D_Analyst_CRouteLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRouteLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual ev_bool solve()
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_solve_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Analyst_CRouteLayer_solve_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRouteLayer::solve();
					}
					virtual void setAnalystMethod(_in EarthView::World::Spatial2D::Analyst::EVNAAnalystMethod method)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setAnalystMethod_void_EVNAAnalystMethod_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setAnalystMethod_void_EVNAAnalystMethod_Callback((int)method);
						}
						else
							return this->CRouteLayer::setAnalystMethod(method);
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CRouteLayer::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRouteLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CRouteLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRouteLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->CRouteLayer::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Analyst_CRouteLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRouteLayer::canEdit();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRouteLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->CRouteLayer::setEditing(editing);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRouteLayer::isVisible();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CRouteLayer::setVisible(visible);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRouteLayer::isValid();
					}
					virtual ev_bool isSelected() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelected_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRouteLayer::isSelected();
					}
					virtual void setSelected(_in ev_bool selected)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelected_void_ev_bool_Callback(selected);
						}
						else
							return this->CRouteLayer::setSelected(selected);
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Analyst_CRouteLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRouteLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->CRouteLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CRouteLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CRouteLayer::setDisplayMaxScale(scale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CRouteLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CRouteLayer::setDisplayMinScale(scale);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CRouteLayer::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CRouteLayer::setSpatialReference(ref_sr);
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CRouteLayer::getExtent();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Analyst_CRouteLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->CRouteLayer::draw(display, type);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Analyst_CRouteLayer_clone_ILayer_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CRouteLayer::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CRouteLayer::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Analyst_CRouteLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRouteLayer::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CRouteLayer::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial2D_Analyst_CRouteLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CRouteLayer::toXmlElement();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CRouteLayer::fromStream(stream);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CRouteLayer::getDataset();
					}
					virtual void setDateset(_in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDateset_void_IDataset_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDateset_void_IDataset_Callback(ref_dataset);
						}
						else
							return this->CRouteLayer::setDateset(ref_dataset);
					}
					virtual ev_bool isShowTip() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isShowTip_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isShowTip_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRouteLayer::isShowTip();
					}
					virtual void setShowTip(_in ev_bool show)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setShowTip_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setShowTip_void_ev_bool_Callback(show);
						}
						else
							return this->CRouteLayer::setShowTip(show);
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->CRouteLayer::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_clearSelection_void_Callback();
						}
						else
							return this->CRouteLayer::clearSelection();
					}
					virtual void addStop(_in const EarthView::World::Spatial::Geometry::CPoint& pt)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_addStop_void_CPoint_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_addStop_void_CPoint_Callback(&pt);
						}
						else
							return this->CRouteLayer::addStop(pt);
					}
					virtual void addBarriar(_in const EarthView::World::Spatial::Geometry::CPoint& pt)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_addBarriar_void_CPoint_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_addBarriar_void_CPoint_Callback(&pt);
						}
						else
							return this->CRouteLayer::addBarriar(pt);
					}
					virtual void moveTo(_in const EarthView::World::Spatial::Geometry::CPoint& pt)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_moveTo_void_CPoint_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_moveTo_void_CPoint_Callback(&pt);
						}
						else
							return this->CRouteLayer::moveTo(pt);
					}
					virtual void selectResult(_in const EarthView::World::Spatial::Geometry::CPoint& pt, _in ev_real64 threshold)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CPoint_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CPoint_ev_real64_Callback(&pt, threshold);
						}
						else
							return this->CRouteLayer::selectResult(pt, threshold);
					}
					virtual void selectResult(_in const EarthView::World::Spatial::Geometry::CRectangle& rect)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CRectangle_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CRectangle_Callback(&rect);
						}
						else
							return this->CRouteLayer::selectResult(rect);
					}
					virtual void removeResult()
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_removeResult_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_removeResult_void_Callback();
						}
						else
							return this->CRouteLayer::removeResult();
					}
					virtual void remove()
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_remove_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_remove_void_Callback();
						}
						else
							return this->CRouteLayer::remove();
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getLockedSymbol()
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getLockedSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getLockedSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CRouteLayer::getLockedSymbol();
					}
					virtual EarthView::World::Spatial2D::Analyst::EVNAAttachType attach(_in const EarthView::World::Spatial::Geometry::CPoint& pt, _in ev_real64 threshold)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_attach_EVNAAttachType_CPoint_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Analyst::EVNAAttachType returnValue = (EarthView::World::Spatial2D::Analyst::EVNAAttachType)m_EarthView_World_Spatial2D_Analyst_CRouteLayer_attach_EVNAAttachType_CPoint_ev_real64_Callback(&pt, threshold);
							return returnValue;
						}
						else
							return this->CRouteLayer::attach(pt, threshold);
					}
					virtual void clear()
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_clear_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_clear_void_Callback();
						}
						else
							return this->CRouteLayer::clear();
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->CRouteLayer::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CRouteLayer::getTransparentValue();
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRouteLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CRouteLayer::getDataSource();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->CRouteLayer::setLayerSelection(selection);
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial2D_Analyst_CRouteLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->CRouteLayer::getLayerSelection();
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->CRouteLayer::setCanEdit(can);
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRouteLayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selectable)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelectable_void_ev_bool_Callback(selectable);
						}
						else
							return this->CRouteLayer::setSelectable(selectable);
					}
				};
				REGISTER_FACTORY_CLASS(CRouteLayerProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_solve_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::solve();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->solve();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_solve_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_solve_ev_bool_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_solve_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_solve_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::solve();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setAnalystMethod_void_EVNAAnalystMethod(void *pObjectXXXX, _in int method )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::setAnalystMethod((EarthView::World::Spatial2D::Analyst::EVNAAnalystMethod)method);
					else
						ptrNativeObject->setAnalystMethod((EarthView::World::Spatial2D::Analyst::EVNAAnalystMethod)method);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setAnalystMethod_void_EVNAAnalystMethod( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_setAnalystMethod_void_EVNAAnalystMethod_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setAnalystMethod_void_EVNAAnalystMethod(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setAnalystMethod_void_EVNAAnalystMethod_NoVirtual(void *pObjectXXXX, _in int method )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::setAnalystMethod((EarthView::World::Spatial2D::Analyst::EVNAAnalystMethod)method);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_getType_EVLayerType_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_getName_EVString_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_setName_void_EVString_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::getDescription();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDescription();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_getDescription_EVString_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getDescription_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setDescription_void_EVString(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::setDescription(value1);
					else
						ptrNativeObject->setDescription(value1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_setDescription_void_EVString_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setDescription_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::setDescription(value1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_canEdit_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::canEdit();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEdit();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_canEdit_ev_bool_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::canEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_isEditing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::isEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_isEditing_ev_bool_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_isEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::isEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setEditing_void_ev_bool(void *pObjectXXXX, _in ev_bool editing )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::setEditing(editing);
					else
						ptrNativeObject->setEditing(editing);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setEditing_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool editing )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::setEditing(editing);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_isVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::isVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_isVisible_ev_bool_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::setVisible(visible);
					else
						ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_isValid_ev_bool_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelected_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::isSelected();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelected();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelected_ev_bool_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelected_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelected_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::isSelected();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool selected )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::setSelected(selected);
					else
						ptrNativeObject->setSelected(selected);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelected_void_ev_bool_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelected_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelected_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool selected )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::setSelected(selected);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_ignoreScale_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::ignoreScale();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->ignoreScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_ignoreScale_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::ignoreScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setIgnoreScale_void_ev_bool(void *pObjectXXXX, _in ev_bool bIgnore )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::setIgnoreScale(bIgnore);
					else
						ptrNativeObject->setIgnoreScale(bIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setIgnoreScale_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bIgnore )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::setIgnoreScale(bIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMaxScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::getDisplayMaxScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getDisplayMaxScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMaxScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::getDisplayMaxScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMaxScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::setDisplayMaxScale(scale);
					else
						ptrNativeObject->setDisplayMaxScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMaxScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::setDisplayMaxScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMinScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::getDisplayMinScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getDisplayMinScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMinScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::getDisplayMinScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMinScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::setDisplayMinScale(scale);
					else
						ptrNativeObject->setDisplayMinScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMinScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::setDisplayMinScale(scale);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::getSpatialReference();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::setSpatialReference(ref_sr);
					else
						ptrNativeObject->setSpatialReference(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setSpatialReference_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::setSpatialReference(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getExtent_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::getExtent();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getExtent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getExtent_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::getExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_clone_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::clone();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_clone_ILayer_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_clone_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_toXML_EVString_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataset_IDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::getDataset();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataset_IDataset_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataset_IDataset_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::getDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setDateset_void_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::setDateset(ref_dataset);
					else
						ptrNativeObject->setDateset(ref_dataset);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDateset_void_IDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_setDateset_void_IDataset_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDateset_void_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setDateset_void_IDataset_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::setDateset(ref_dataset);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_isShowTip_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::isShowTip();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isShowTip();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isShowTip_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_isShowTip_ev_bool_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isShowTip_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_isShowTip_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::isShowTip();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setShowTip_void_ev_bool(void *pObjectXXXX, _in ev_bool show )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::setShowTip(show);
					else
						ptrNativeObject->setShowTip(show);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setShowTip_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_setShowTip_void_ev_bool_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setShowTip_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_setShowTip_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool show )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::setShowTip(show);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_IQueryFilter_EVSelectionResultType(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
					else
						ptrNativeObject->select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_IQueryFilter_EVSelectionResultType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_clearSelection_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::clearSelection();
					else
						ptrNativeObject->clearSelection();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_clearSelection_void_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_clearSelection_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::clearSelection();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_addStop_void_CPoint(void *pObjectXXXX, _in const void* pt )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::addStop(*(EarthView::World::Spatial::Geometry::CPoint*)pt);
					else
						ptrNativeObject->addStop(*(EarthView::World::Spatial::Geometry::CPoint*)pt);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_addStop_void_CPoint( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_addStop_void_CPoint_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_addStop_void_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_addStop_void_CPoint_NoVirtual(void *pObjectXXXX, _in const void* pt )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::addStop(*(EarthView::World::Spatial::Geometry::CPoint*)pt);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_addBarriar_void_CPoint(void *pObjectXXXX, _in const void* pt )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::addBarriar(*(EarthView::World::Spatial::Geometry::CPoint*)pt);
					else
						ptrNativeObject->addBarriar(*(EarthView::World::Spatial::Geometry::CPoint*)pt);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_addBarriar_void_CPoint( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_addBarriar_void_CPoint_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_addBarriar_void_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_addBarriar_void_CPoint_NoVirtual(void *pObjectXXXX, _in const void* pt )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::addBarriar(*(EarthView::World::Spatial::Geometry::CPoint*)pt);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_moveTo_void_CPoint(void *pObjectXXXX, _in const void* pt )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::moveTo(*(EarthView::World::Spatial::Geometry::CPoint*)pt);
					else
						ptrNativeObject->moveTo(*(EarthView::World::Spatial::Geometry::CPoint*)pt);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_moveTo_void_CPoint( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_moveTo_void_CPoint_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_moveTo_void_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_moveTo_void_CPoint_NoVirtual(void *pObjectXXXX, _in const void* pt )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::moveTo(*(EarthView::World::Spatial::Geometry::CPoint*)pt);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CPoint_ev_real64(void *pObjectXXXX, _in const void* pt, _in ev_real64 threshold )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::selectResult(*(EarthView::World::Spatial::Geometry::CPoint*)pt, threshold);
					else
						ptrNativeObject->selectResult(*(EarthView::World::Spatial::Geometry::CPoint*)pt, threshold);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CPoint_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CPoint_ev_real64_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CPoint_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CPoint_ev_real64_NoVirtual(void *pObjectXXXX, _in const void* pt, _in ev_real64 threshold )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::selectResult(*(EarthView::World::Spatial::Geometry::CPoint*)pt, threshold);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CRectangle(void *pObjectXXXX, _in const void* rect )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::selectResult(*(EarthView::World::Spatial::Geometry::CRectangle*)rect);
					else
						ptrNativeObject->selectResult(*(EarthView::World::Spatial::Geometry::CRectangle*)rect);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CRectangle( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CRectangle_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CRectangle(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CRectangle_NoVirtual(void *pObjectXXXX, _in const void* rect )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::selectResult(*(EarthView::World::Spatial::Geometry::CRectangle*)rect);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_removeResult_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::removeResult();
					else
						ptrNativeObject->removeResult();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_removeResult_void( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_removeResult_void_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_removeResult_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_removeResult_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::removeResult();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_remove_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::remove();
					else
						ptrNativeObject->remove();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_remove_void( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_remove_void_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_remove_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_remove_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::remove();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getLockedSymbol_ISymbol(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::getLockedSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getLockedSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getLockedSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_getLockedSymbol_ISymbol_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getLockedSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getLockedSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRouteLayer::getLockedSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Analyst::CRouteResult*  _stdcall EarthView_World_Spatial2D_Analyst_CRouteLayer_getRouteResult_CRouteResult(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX;
					const EarthView::World::Spatial2D::Analyst::CRouteResult* objXXXX = ptrNativeObject->getRouteResult();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_attach_EVNAAttachType_CPoint_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_attach_EVNAAttachType_CPoint_ev_real64_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_attach_EVNAAttachType_CPoint_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_CRectangle( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_CRectangle_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_CRectangle(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_clear_void( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_clear_void_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_clear_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_getDatasetName_EVString_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRouteLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					CRouteLayerProxy* ptr = dynamic_cast<CRouteLayerProxy*>((EarthView::World::Spatial2D::Analyst::CRouteLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
			}
		}
	}
}
