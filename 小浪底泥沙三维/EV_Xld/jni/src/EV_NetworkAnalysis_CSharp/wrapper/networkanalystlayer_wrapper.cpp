/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "networkanalysis/networkanalystlayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Analyst
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall Get_EarthView_World_Spatial2D_Analyst_CNALocation_pt( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CNALocation* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNALocation*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->pt;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Analyst_CNALocation_pt( void *pObjectXXXX, EarthView::World::Spatial::Geometry::CPoint*  value )
				{
					((EarthView::World::Spatial2D::Analyst::CNALocation*)pObjectXXXX)->pt = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial2D_Analyst_CNALocation_id( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CNALocation* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNALocation*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->id;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Analyst_CNALocation_id( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial2D::Analyst::CNALocation*)pObjectXXXX)->id = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial2D_Analyst_CNALocation_bSelected( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CNALocation* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNALocation*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->bSelected;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Analyst_CNALocation_bSelected( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial2D::Analyst::CNALocation*)pObjectXXXX)->bSelected = value;
				}
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addStop_void_CPoint_Callback)(_in const void* pt);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addBarriar_void_CPoint_Callback)(_in const void* pt);
				typedef int  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_attach_EVNAAttachType_CPoint_ev_real64_Callback)(_in const void* pt, _in ev_real64 threshold);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_select_void_CRectangle_Callback)(_in const void* rect);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_moveTo_void_CPoint_Callback)(_in const void* pt);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_remove_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clear_void_Callback)();
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLockedSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CPoint_ev_real64_Callback)(_in const void* pt, _in ev_real64 threshold);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CRectangle_Callback)(_in const void* rect);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_removeResult_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_solve_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setAnalystMethod_void_EVNAAnalystMethod_Callback)(_in int method);
				typedef int  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CNetworkAnalystLayerProxy : public EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer
				{
				private:
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addStop_void_CPoint_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addStop_void_CPoint_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addBarriar_void_CPoint_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addBarriar_void_CPoint_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_attach_EVNAAttachType_CPoint_ev_real64_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_attach_EVNAAttachType_CPoint_ev_real64_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_select_void_CRectangle_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_select_void_CRectangle_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_moveTo_void_CPoint_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_moveTo_void_CPoint_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_remove_void_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_remove_void_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clear_void_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clear_void_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLockedSymbol_ISymbol_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLockedSymbol_ISymbol_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CPoint_ev_real64_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CPoint_ev_real64_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CRectangle_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CRectangle_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_removeResult_void_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_removeResult_void_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_solve_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_solve_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setAnalystMethod_void_EVNAAnalystMethod_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setAnalystMethod_void_EVNAAnalystMethod_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clearSelection_void_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clearSelection_void_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getName_EVString_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getName_EVString_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clone_ILayer_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clone_ILayer_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toXML_EVString_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toXML_EVString_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_fromStream_void_CDataStream_Callback;
				public:
					CNetworkAnalystLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CNetworkAnalystLayer(pList)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addStop_void_CPoint_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addBarriar_void_CPoint_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_attach_EVNAAttachType_CPoint_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_select_void_CRectangle_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_moveTo_void_CPoint_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_remove_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clear_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLockedSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CPoint_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CRectangle_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_removeResult_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_solve_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setAnalystMethod_void_EVNAAnalystMethod_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addStop_void_CPoint(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addStop_void_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addStop_void_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addBarriar_void_CPoint(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addBarriar_void_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addBarriar_void_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_attach_EVNAAttachType_CPoint_ev_real64(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_attach_EVNAAttachType_CPoint_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_attach_EVNAAttachType_CPoint_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_select_void_CRectangle(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_select_void_CRectangle_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_select_void_CRectangle_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_moveTo_void_CPoint(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_moveTo_void_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_moveTo_void_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_remove_void(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_remove_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_remove_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clear_void(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clear_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clear_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLockedSymbol_ISymbol(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLockedSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLockedSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CPoint_ev_real64(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CPoint_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CPoint_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CRectangle(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CRectangle_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CRectangle_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_removeResult_void(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_removeResult_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_removeResult_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_solve_ev_bool(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_solve_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_solve_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setAnalystMethod_void_EVNAAnalystMethod(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setAnalystMethod_void_EVNAAnalystMethod_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setAnalystMethod_void_EVNAAnalystMethod_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getType_EVLayerType(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDataset_IDataset(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDatasetName_EVString(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDataSource_IDataSource(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clearSelection_void(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getName_EVString(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setName_void_EVString(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDescription_EVString(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDescription_void_EVString(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_canEdit_ev_bool(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isEditing_ev_bool(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setEditing_void_ev_bool(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isVisible_ev_bool(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setVisible_void_ev_bool(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isValid_ev_bool(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isSelectable_ev_bool(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setSelectable_void_ev_bool(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_ignoreScale_ev_bool(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getExtent_IEnvelope(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clone_ILayer(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toStream_void_CDataStream(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toXML_EVString(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toXmlElement_CXmlElement(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_fromStream_void_CDataStream(EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual void addStop(_in const EarthView::World::Spatial::Geometry::CPoint& pt)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addStop_void_CPoint_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addStop_void_CPoint_Callback(&pt);
						}
						else
							return this->CNetworkAnalystLayer::addStop(pt);
					}
					virtual void addBarriar(_in const EarthView::World::Spatial::Geometry::CPoint& pt)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addBarriar_void_CPoint_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addBarriar_void_CPoint_Callback(&pt);
						}
						else
							return this->CNetworkAnalystLayer::addBarriar(pt);
					}
					virtual EarthView::World::Spatial2D::Analyst::EVNAAttachType attach(_in const EarthView::World::Spatial::Geometry::CPoint& pt, _in ev_real64 threshold)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_attach_EVNAAttachType_CPoint_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Analyst::EVNAAttachType returnValue = (EarthView::World::Spatial2D::Analyst::EVNAAttachType)m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_attach_EVNAAttachType_CPoint_ev_real64_Callback(&pt, threshold);
							return returnValue;
						}
						else
							return this->CNetworkAnalystLayer::attach(pt, threshold);
					}
					virtual void select(_in const EarthView::World::Spatial::Geometry::CRectangle& rect)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_select_void_CRectangle_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_select_void_CRectangle_Callback(&rect);
						}
						else
							return this->CNetworkAnalystLayer::select(rect);
					}
					virtual void moveTo(_in const EarthView::World::Spatial::Geometry::CPoint& pt)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_moveTo_void_CPoint_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_moveTo_void_CPoint_Callback(&pt);
						}
						else
							return this->CNetworkAnalystLayer::moveTo(pt);
					}
					virtual void remove()
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_remove_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_remove_void_Callback();
						}
						else
							return this->CNetworkAnalystLayer::remove();
					}
					virtual void clear()
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clear_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clear_void_Callback();
						}
						else
							return this->CNetworkAnalystLayer::clear();
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getLockedSymbol()
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLockedSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLockedSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CNetworkAnalystLayer::getLockedSymbol();
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->CNetworkAnalystLayer::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CNetworkAnalystLayer::getTransparentValue();
					}
					virtual void selectResult(_in const EarthView::World::Spatial::Geometry::CPoint& pt, _in ev_real64 threshold)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CPoint_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CPoint_ev_real64_Callback(&pt, threshold);
						}
						else
							return this->CNetworkAnalystLayer::selectResult(pt, threshold);
					}
					virtual void selectResult(_in const EarthView::World::Spatial::Geometry::CRectangle& rect)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CRectangle_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CRectangle_Callback(&rect);
						}
						else
							return this->CNetworkAnalystLayer::selectResult(rect);
					}
					virtual void removeResult()
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_removeResult_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_removeResult_void_Callback();
						}
						else
							return this->CNetworkAnalystLayer::removeResult();
					}
					virtual ev_bool solve()
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_solve_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_solve_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNetworkAnalystLayer::solve();
					}
					virtual void setAnalystMethod(_in EarthView::World::Spatial2D::Analyst::EVNAAnalystMethod method)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setAnalystMethod_void_EVNAAnalystMethod_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setAnalystMethod_void_EVNAAnalystMethod_Callback((int)method);
						}
						else
							return this->CNetworkAnalystLayer::setAnalystMethod(method);
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CNetworkAnalystLayer::getType();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CNetworkAnalystLayer::getDataset();
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CNetworkAnalystLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CNetworkAnalystLayer::getDataSource();
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clearSelection_void_Callback();
						}
						else
							return this->CNetworkAnalystLayer::clearSelection();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->CNetworkAnalystLayer::setLayerSelection(selection);
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->CNetworkAnalystLayer::getLayerSelection();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CNetworkAnalystLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CNetworkAnalystLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CNetworkAnalystLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->CNetworkAnalystLayer::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNetworkAnalystLayer::canEdit();
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->CNetworkAnalystLayer::setCanEdit(can);
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNetworkAnalystLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->CNetworkAnalystLayer::setEditing(editing);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNetworkAnalystLayer::isVisible();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CNetworkAnalystLayer::setVisible(visible);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNetworkAnalystLayer::isValid();
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNetworkAnalystLayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selectable)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setSelectable_void_ev_bool_Callback(selectable);
						}
						else
							return this->CNetworkAnalystLayer::setSelectable(selectable);
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNetworkAnalystLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->CNetworkAnalystLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CNetworkAnalystLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CNetworkAnalystLayer::setDisplayMaxScale(scale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CNetworkAnalystLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CNetworkAnalystLayer::setDisplayMinScale(scale);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CNetworkAnalystLayer::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CNetworkAnalystLayer::setSpatialReference(ref_sr);
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CNetworkAnalystLayer::getExtent();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->CNetworkAnalystLayer::draw(display, type);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clone_ILayer_Callback();
							return returnValue;
						}
						else
							return this->CNetworkAnalystLayer::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CNetworkAnalystLayer::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CNetworkAnalystLayer::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CNetworkAnalystLayer::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CNetworkAnalystLayer::toXmlElement();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CNetworkAnalystLayer::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(CNetworkAnalystLayerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addStop_void_CPoint(void *pObjectXXXX, _in const void* pt )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::addStop(*(EarthView::World::Spatial::Geometry::CPoint*)pt);
					else
						ptrNativeObject->addStop(*(EarthView::World::Spatial::Geometry::CPoint*)pt);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addStop_void_CPoint( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addStop_void_CPoint_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addStop_void_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addStop_void_CPoint_NoVirtual(void *pObjectXXXX, _in const void* pt )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::addStop(*(EarthView::World::Spatial::Geometry::CPoint*)pt);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addBarriar_void_CPoint(void *pObjectXXXX, _in const void* pt )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::addBarriar(*(EarthView::World::Spatial::Geometry::CPoint*)pt);
					else
						ptrNativeObject->addBarriar(*(EarthView::World::Spatial::Geometry::CPoint*)pt);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addBarriar_void_CPoint( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addBarriar_void_CPoint_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addBarriar_void_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addBarriar_void_CPoint_NoVirtual(void *pObjectXXXX, _in const void* pt )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::addBarriar(*(EarthView::World::Spatial::Geometry::CPoint*)pt);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_attach_EVNAAttachType_CPoint_ev_real64(void *pObjectXXXX, _in const void* pt, _in ev_real64 threshold )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::Analyst::EVNAAttachType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::attach(*(EarthView::World::Spatial::Geometry::CPoint*)pt, threshold);
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::Analyst::EVNAAttachType objXXXX = ptrNativeObject->attach(*(EarthView::World::Spatial::Geometry::CPoint*)pt, threshold);
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_attach_EVNAAttachType_CPoint_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_attach_EVNAAttachType_CPoint_ev_real64_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_attach_EVNAAttachType_CPoint_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_attach_EVNAAttachType_CPoint_ev_real64_NoVirtual(void *pObjectXXXX, _in const void* pt, _in ev_real64 threshold )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					EarthView::World::Spatial2D::Analyst::EVNAAttachType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::attach(*(EarthView::World::Spatial::Geometry::CPoint*)pt, threshold);
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_select_void_CRectangle(void *pObjectXXXX, _in const void* rect )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::select(*(EarthView::World::Spatial::Geometry::CRectangle*)rect);
					else
						ptrNativeObject->select(*(EarthView::World::Spatial::Geometry::CRectangle*)rect);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_select_void_CRectangle( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_select_void_CRectangle_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_select_void_CRectangle(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_select_void_CRectangle_NoVirtual(void *pObjectXXXX, _in const void* rect )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::select(*(EarthView::World::Spatial::Geometry::CRectangle*)rect);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_moveTo_void_CPoint(void *pObjectXXXX, _in const void* pt )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::moveTo(*(EarthView::World::Spatial::Geometry::CPoint*)pt);
					else
						ptrNativeObject->moveTo(*(EarthView::World::Spatial::Geometry::CPoint*)pt);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_moveTo_void_CPoint( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_moveTo_void_CPoint_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_moveTo_void_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_moveTo_void_CPoint_NoVirtual(void *pObjectXXXX, _in const void* pt )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::moveTo(*(EarthView::World::Spatial::Geometry::CPoint*)pt);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_remove_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::remove();
					else
						ptrNativeObject->remove();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_remove_void( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_remove_void_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_remove_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_remove_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::remove();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::clear();
					else
						ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clear_void( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clear_void_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clear_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clear_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::clear();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLockedSymbol_ISymbol(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::getLockedSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getLockedSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLockedSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLockedSymbol_ISymbol_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLockedSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLockedSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::getLockedSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getStopCount_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getStopCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getBarriarCount_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getBarriarCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setTransparentValue_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 transparent )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::setTransparentValue(transparent);
					else
						ptrNativeObject->setTransparentValue(transparent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setTransparentValue_void_ev_uint8_NoVirtual(void *pObjectXXXX, _in ev_uint8 transparent )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::setTransparentValue(transparent);
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getTransparentValue_ev_uint8(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*)ptrNativeObject) != NULL)
					{
						ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::getTransparentValue();
						return objXXXX;
					}
					else
					{
						ev_uint8 objXXXX = ptrNativeObject->getTransparentValue();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getTransparentValue_ev_uint8_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::getTransparentValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CPoint_ev_real64(void *pObjectXXXX, _in const void* pt, _in ev_real64 threshold )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::selectResult(*(EarthView::World::Spatial::Geometry::CPoint*)pt, threshold);
					else
						ptrNativeObject->selectResult(*(EarthView::World::Spatial::Geometry::CPoint*)pt, threshold);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CPoint_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CPoint_ev_real64_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CPoint_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CPoint_ev_real64_NoVirtual(void *pObjectXXXX, _in const void* pt, _in ev_real64 threshold )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::selectResult(*(EarthView::World::Spatial::Geometry::CPoint*)pt, threshold);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CRectangle(void *pObjectXXXX, _in const void* rect )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::selectResult(*(EarthView::World::Spatial::Geometry::CRectangle*)rect);
					else
						ptrNativeObject->selectResult(*(EarthView::World::Spatial::Geometry::CRectangle*)rect);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CRectangle( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CRectangle_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CRectangle(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CRectangle_NoVirtual(void *pObjectXXXX, _in const void* rect )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::selectResult(*(EarthView::World::Spatial::Geometry::CRectangle*)rect);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_removeResult_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::removeResult();
					else
						ptrNativeObject->removeResult();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_removeResult_void( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_removeResult_void_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_removeResult_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_removeResult_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::removeResult();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_solve_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::solve();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->solve();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_solve_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_solve_ev_bool_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_solve_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_solve_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::solve();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setAnalystMethod_void_EVNAAnalystMethod(void *pObjectXXXX, _in int method )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::setAnalystMethod((EarthView::World::Spatial2D::Analyst::EVNAAnalystMethod)method);
					else
						ptrNativeObject->setAnalystMethod((EarthView::World::Spatial2D::Analyst::EVNAAnalystMethod)method);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setAnalystMethod_void_EVNAAnalystMethod( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setAnalystMethod_void_EVNAAnalystMethod_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setAnalystMethod_void_EVNAAnalystMethod(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setAnalystMethod_void_EVNAAnalystMethod_NoVirtual(void *pObjectXXXX, _in int method )
				{
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer::setAnalystMethod((EarthView::World::Spatial2D::Analyst::EVNAAnalystMethod)method);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getCostAttributeName_CStringArray(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					EarthView::World::Core::CStringArray objXXXX = ptrNativeObject->getCostAttributeName();
					EarthView::World::Core::CStringArray *pXXXX = new EarthView::World::Core::CStringArray(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setCostAttribute_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					ptrNativeObject->setCostAttribute(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getCurrentCostAttribute_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getCurrentCostAttribute();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getType_EVLayerType_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDataset_IDataset_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDatasetName_EVString_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clearSelection_void_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getName_EVString_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setName_void_EVString_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDescription_EVString_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDescription_void_EVString_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_canEdit_ev_bool_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isEditing_ev_bool_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isVisible_ev_bool_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isValid_ev_bool_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clone_ILayer_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toXML_EVString_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					CNetworkAnalystLayerProxy* ptr = dynamic_cast<CNetworkAnalystLayerProxy*>((EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_fromStream_void_CDataStream(pCallback);
					}
				}
			}
		}
	}
}
