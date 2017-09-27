/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dcarto/referencegrid.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_setRowCount_void_ev_int32_Callback)(_in const ev_int32 nRowCount);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_getRowCount_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_setColumnCount_void_ev_int32_Callback)(_in const ev_int32 nColumnCount);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_getColumnCount_ev_int32_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_getElementType_EVElementType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_setName_void_EVString_Callback)(_in char*& name);
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_getType_EVSquareGridType_Callback)();
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_getEnvelope_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_setEnvelope_void_IEnvelope_Callback)(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_setMapFrame_void_IMapFrame_Callback)(_in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_isSelected_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_setSelected_void_ev_bool_Callback)(_in ev_bool bSelected);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_isDrawGridline_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_setDrawGridline_void_ev_bool_Callback)(_in ev_bool bSelected);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_isActive_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_setActive_void_ev_bool_Callback)(_in ev_bool bActive);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_getGridlineSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_setGridlineSymbol_void_ISymbol_Callback)(_in EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_getTextSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_setTextSymbol_void_ISymbol_Callback)(_in EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_draw_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_drawOver_void_Callback)();
				typedef EarthView::World::Spatial::Carto::IElement*  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_clone_IElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_fromStream_void_CDataStream_Callback)(_in void* stream);
				class CReferenceGridProxy : public EarthView::World::Spatial::Carto::CReferenceGrid
				{
				private:
					EarthView_World_Spatial_Carto_CReferenceGrid_setRowCount_void_ev_int32_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_setRowCount_void_ev_int32_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_getRowCount_ev_int32_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_getRowCount_ev_int32_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_setColumnCount_void_ev_int32_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_setColumnCount_void_ev_int32_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_getColumnCount_ev_int32_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_getColumnCount_ev_int32_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_getElementType_EVElementType_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_getElementType_EVElementType_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_getName_EVString_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_getName_EVString_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_setName_void_EVString_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_setName_void_EVString_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_getType_EVSquareGridType_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_getType_EVSquareGridType_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_getEnvelope_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_getEnvelope_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_setEnvelope_void_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_setEnvelope_void_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_setMapFrame_void_IMapFrame_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_setMapFrame_void_IMapFrame_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_isSelected_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_setSelected_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_isDrawGridline_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_isDrawGridline_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_setDrawGridline_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_setDrawGridline_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_isActive_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_isActive_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_setActive_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_setActive_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_getGridlineSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_getGridlineSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_setGridlineSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_setGridlineSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_getTextSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_getTextSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_setTextSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_setTextSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_draw_void_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_draw_void_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_drawOver_void_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_drawOver_void_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_clone_IElement_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_clone_IElement_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_toXML_EVString_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_toXML_EVString_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_CReferenceGrid_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_CReferenceGrid_fromStream_void_CDataStream_Callback;
				public:
					CReferenceGridProxy(EarthView::World::Core::CNameValuePairList *pList) : CReferenceGrid(pList)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_setRowCount_void_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_getRowCount_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_setColumnCount_void_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_getColumnCount_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_getElementType_EVElementType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_getType_EVSquareGridType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_getEnvelope_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_setEnvelope_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_setMapFrame_void_IMapFrame_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_isSelected_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_setSelected_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_isDrawGridline_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_setDrawGridline_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_isActive_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_setActive_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_getGridlineSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_setGridlineSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_getTextSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_setTextSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_draw_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_drawOver_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_clone_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CReferenceGrid_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setRowCount_void_ev_int32(EarthView_World_Spatial_Carto_CReferenceGrid_setRowCount_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_setRowCount_void_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_getRowCount_ev_int32(EarthView_World_Spatial_Carto_CReferenceGrid_getRowCount_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_getRowCount_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setColumnCount_void_ev_int32(EarthView_World_Spatial_Carto_CReferenceGrid_setColumnCount_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_setColumnCount_void_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_getColumnCount_ev_int32(EarthView_World_Spatial_Carto_CReferenceGrid_getColumnCount_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_getColumnCount_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_getElementType_EVElementType(EarthView_World_Spatial_Carto_CReferenceGrid_getElementType_EVElementType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_getElementType_EVElementType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_getName_EVString(EarthView_World_Spatial_Carto_CReferenceGrid_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setName_void_EVString(EarthView_World_Spatial_Carto_CReferenceGrid_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_getType_EVSquareGridType(EarthView_World_Spatial_Carto_CReferenceGrid_getType_EVSquareGridType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_getType_EVSquareGridType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_getEnvelope_IEnvelope(EarthView_World_Spatial_Carto_CReferenceGrid_getEnvelope_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_getEnvelope_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setEnvelope_void_IEnvelope(EarthView_World_Spatial_Carto_CReferenceGrid_setEnvelope_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_setEnvelope_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setMapFrame_void_IMapFrame(EarthView_World_Spatial_Carto_CReferenceGrid_setMapFrame_void_IMapFrame_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_setMapFrame_void_IMapFrame_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_isSelected_ev_bool(EarthView_World_Spatial_Carto_CReferenceGrid_isSelected_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_isSelected_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setSelected_void_ev_bool(EarthView_World_Spatial_Carto_CReferenceGrid_setSelected_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_setSelected_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_isDrawGridline_ev_bool(EarthView_World_Spatial_Carto_CReferenceGrid_isDrawGridline_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_isDrawGridline_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setDrawGridline_void_ev_bool(EarthView_World_Spatial_Carto_CReferenceGrid_setDrawGridline_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_setDrawGridline_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_isActive_ev_bool(EarthView_World_Spatial_Carto_CReferenceGrid_isActive_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_isActive_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setActive_void_ev_bool(EarthView_World_Spatial_Carto_CReferenceGrid_setActive_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_setActive_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_getGridlineSymbol_ISymbol(EarthView_World_Spatial_Carto_CReferenceGrid_getGridlineSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_getGridlineSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setGridlineSymbol_void_ISymbol(EarthView_World_Spatial_Carto_CReferenceGrid_setGridlineSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_setGridlineSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_getTextSymbol_ISymbol(EarthView_World_Spatial_Carto_CReferenceGrid_getTextSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_getTextSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setTextSymbol_void_ISymbol(EarthView_World_Spatial_Carto_CReferenceGrid_setTextSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_setTextSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_drawPrepare_ev_bool_ISpatialDisplay(EarthView_World_Spatial_Carto_CReferenceGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_draw_void(EarthView_World_Spatial_Carto_CReferenceGrid_draw_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_draw_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_drawOver_void(EarthView_World_Spatial_Carto_CReferenceGrid_drawOver_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_drawOver_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_clone_IElement(EarthView_World_Spatial_Carto_CReferenceGrid_clone_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_clone_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_toStream_void_CDataStream(EarthView_World_Spatial_Carto_CReferenceGrid_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_toXML_EVString(EarthView_World_Spatial_Carto_CReferenceGrid_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Carto_CReferenceGrid_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_toXmlElement_CXmlElement(EarthView_World_Spatial_Carto_CReferenceGrid_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_fromStream_void_CDataStream(EarthView_World_Spatial_Carto_CReferenceGrid_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CReferenceGrid_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Carto::EVSquareGridType getType() const
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_getType_EVSquareGridType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::EVSquareGridType returnValue = (EarthView::World::Spatial::Carto::EVSquareGridType)m_EarthView_World_Spatial_Carto_CReferenceGrid_getType_EVSquareGridType_Callback();
							return returnValue;
						}
						else
							return this->CReferenceGrid::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_CReferenceGrid_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CReferenceGrid::getName();
					}
					virtual void setName(_in EVString name)
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Carto_CReferenceGrid_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CReferenceGrid::setName(name);
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_getEnvelope_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Carto_CReferenceGrid_getEnvelope_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CReferenceGrid::getEnvelope();
					}
					virtual void setEnvelope(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope)
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_setEnvelope_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CReferenceGrid_setEnvelope_void_IEnvelope_Callback(pEnvelope);
						}
						else
							return this->CReferenceGrid::setEnvelope(pEnvelope);
					}
					virtual void setMapFrame(_in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame)
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_setMapFrame_void_IMapFrame_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CReferenceGrid_setMapFrame_void_IMapFrame_Callback(pMapFrame);
						}
						else
							return this->CReferenceGrid::setMapFrame(pMapFrame);
					}
					virtual void setRowCount(_in const ev_int32 nRowCount)
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_setRowCount_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CReferenceGrid_setRowCount_void_ev_int32_Callback(nRowCount);
						}
						else
							return this->CReferenceGrid::setRowCount(nRowCount);
					}
					virtual ev_int32 getRowCount() const
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_getRowCount_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Carto_CReferenceGrid_getRowCount_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CReferenceGrid::getRowCount();
					}
					virtual void setColumnCount(_in const ev_int32 nColumnCount)
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_setColumnCount_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CReferenceGrid_setColumnCount_void_ev_int32_Callback(nColumnCount);
						}
						else
							return this->CReferenceGrid::setColumnCount(nColumnCount);
					}
					virtual ev_int32 getColumnCount() const
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_getColumnCount_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Carto_CReferenceGrid_getColumnCount_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CReferenceGrid::getColumnCount();
					}
					virtual ev_bool isSelected()
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CReferenceGrid_isSelected_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CReferenceGrid::isSelected();
					}
					virtual void setSelected(_in ev_bool bSelected)
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CReferenceGrid_setSelected_void_ev_bool_Callback(bSelected);
						}
						else
							return this->CReferenceGrid::setSelected(bSelected);
					}
					virtual ev_bool isDrawGridline()
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_isDrawGridline_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CReferenceGrid_isDrawGridline_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CReferenceGrid::isDrawGridline();
					}
					virtual void setDrawGridline(_in ev_bool bDraw)
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_setDrawGridline_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CReferenceGrid_setDrawGridline_void_ev_bool_Callback(bDraw);
						}
						else
							return this->CReferenceGrid::setDrawGridline(bDraw);
					}
					virtual ev_bool drawPrepare(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay)
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CReferenceGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback(pDisplay);
							return returnValue;
						}
						else
							return this->CReferenceGrid::drawPrepare(pDisplay);
					}
					virtual void draw()
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_draw_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CReferenceGrid_draw_void_Callback();
						}
						else
							return this->CReferenceGrid::draw();
					}
					virtual void drawOver()
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_drawOver_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CReferenceGrid_drawOver_void_Callback();
						}
						else
							return this->CReferenceGrid::drawOver();
					}
					virtual EarthView::World::Spatial::Carto::IElement* clone() const
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_clone_IElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::IElement* returnValue = m_EarthView_World_Spatial_Carto_CReferenceGrid_clone_IElement_Callback();
							return returnValue;
						}
						else
							return this->CReferenceGrid::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CReferenceGrid_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CReferenceGrid::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_CReferenceGrid_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CReferenceGrid::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CReferenceGrid_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CReferenceGrid::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Carto_CReferenceGrid_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CReferenceGrid::toXmlElement();
					}
					virtual void fromStream(_in EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CReferenceGrid_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CReferenceGrid::fromStream(stream);
					}
					virtual EarthView::World::Spatial::Carto::EVElementType getElementType() const
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_getElementType_EVElementType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::EVElementType returnValue = (EarthView::World::Spatial::Carto::EVElementType)m_EarthView_World_Spatial_Carto_CReferenceGrid_getElementType_EVElementType_Callback();
							return returnValue;
						}
						else
							return this->CReferenceGrid::getElementType();
					}
					virtual ev_bool isActive() const
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_isActive_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CReferenceGrid_isActive_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CReferenceGrid::isActive();
					}
					virtual void setActive(_in ev_bool bActive)
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_setActive_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CReferenceGrid_setActive_void_ev_bool_Callback(bActive);
						}
						else
							return this->CReferenceGrid::setActive(bActive);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getGridlineSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_getGridlineSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_CReferenceGrid_getGridlineSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CReferenceGrid::getGridlineSymbol();
					}
					virtual void setGridlineSymbol(_in EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_setGridlineSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CReferenceGrid_setGridlineSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->CReferenceGrid::setGridlineSymbol(symbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getTextSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_getTextSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_CReferenceGrid_getTextSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CReferenceGrid::getTextSymbol();
					}
					virtual void setTextSymbol(_in EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Carto_CReferenceGrid_setTextSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CReferenceGrid_setTextSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->CReferenceGrid::setTextSymbol(symbol);
					}
				};
				REGISTER_FACTORY_CLASS(CReferenceGridProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_getType_EVSquareGridType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					if (dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::EVSquareGridType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVSquareGridType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_getType_EVSquareGridType( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_getType_EVSquareGridType_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_getType_EVSquareGridType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_getType_EVSquareGridType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					EarthView::World::Spatial::Carto::EVSquareGridType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					if (dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_getName_EVString_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_setName_void_EVString(void *pObjectXXXX, _in char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					if (dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_setName_void_EVString_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_getEnvelope_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					if (dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::getEnvelope();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelope();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_getEnvelope_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_getEnvelope_IEnvelope_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_getEnvelope_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_getEnvelope_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::getEnvelope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_setEnvelope_void_IEnvelope(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					if (dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::setEnvelope(pEnvelope);
					else
						ptrNativeObject->setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setEnvelope_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_setEnvelope_void_IEnvelope_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setEnvelope_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_setEnvelope_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_setMapFrame_void_IMapFrame(void *pObjectXXXX, _in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					if (dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::setMapFrame(pMapFrame);
					else
						ptrNativeObject->setMapFrame(pMapFrame);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setMapFrame_void_IMapFrame( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_setMapFrame_void_IMapFrame_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setMapFrame_void_IMapFrame(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_setMapFrame_void_IMapFrame_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::setMapFrame(pMapFrame);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_getOptionColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getOptionColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_setOptionColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					ptrNativeObject->setOptionColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_setRowCount_void_ev_int32(void *pObjectXXXX, _in const ev_int32 nRowCount )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					if (dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::setRowCount(nRowCount);
					else
						ptrNativeObject->setRowCount(nRowCount);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setRowCount_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_setRowCount_void_ev_int32_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setRowCount_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_setRowCount_void_ev_int32_NoVirtual(void *pObjectXXXX, _in const ev_int32 nRowCount )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::setRowCount(nRowCount);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_getRowCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					if (dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::getRowCount();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getRowCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_getRowCount_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_getRowCount_ev_int32_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_getRowCount_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_getRowCount_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::getRowCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_setColumnCount_void_ev_int32(void *pObjectXXXX, _in const ev_int32 nColumnCount )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					if (dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::setColumnCount(nColumnCount);
					else
						ptrNativeObject->setColumnCount(nColumnCount);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setColumnCount_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_setColumnCount_void_ev_int32_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setColumnCount_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_setColumnCount_void_ev_int32_NoVirtual(void *pObjectXXXX, _in const ev_int32 nColumnCount )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::setColumnCount(nColumnCount);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_getColumnCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					if (dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::getColumnCount();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getColumnCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_getColumnCount_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_getColumnCount_ev_int32_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_getColumnCount_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_getColumnCount_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::getColumnCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_isSelected_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					if (dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::isSelected();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelected();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_isSelected_ev_bool_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_isSelected_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_isSelected_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::isSelected();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_setSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					if (dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::setSelected(bSelected);
					else
						ptrNativeObject->setSelected(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_setSelected_void_ev_bool_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setSelected_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_setSelected_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::setSelected(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_isDrawGridline_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					if (dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::isDrawGridline();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawGridline();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_isDrawGridline_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_isDrawGridline_ev_bool_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_isDrawGridline_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_isDrawGridline_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::isDrawGridline();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_setDrawGridline_void_ev_bool(void *pObjectXXXX, _in ev_bool bDraw )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					if (dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::setDrawGridline(bDraw);
					else
						ptrNativeObject->setDrawGridline(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setDrawGridline_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_setDrawGridline_void_ev_bool_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setDrawGridline_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_setDrawGridline_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bDraw )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::setDrawGridline(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_drawPrepare_ev_bool_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					if (dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::drawPrepare(pDisplay);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->drawPrepare(pDisplay);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_drawPrepare_ev_bool_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_drawPrepare_ev_bool_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_drawPrepare_ev_bool_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::drawPrepare(pDisplay);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_draw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					if (dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::draw();
					else
						ptrNativeObject->draw();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_draw_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_draw_void_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_draw_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_draw_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::draw();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_drawOver_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					if (dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::drawOver();
					else
						ptrNativeObject->drawOver();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_drawOver_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_drawOver_void_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_drawOver_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_drawOver_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::drawOver();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_clone_IElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					if (dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_clone_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_clone_IElement_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_clone_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_clone_IElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					if (dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_toStream_void_CDataStream_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					if (dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_toXML_EVString_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					if (dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					if (dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_fromStream_void_CDataStream(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					if (dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_fromStream_void_CDataStream_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CReferenceGrid_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::CReferenceGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CReferenceGrid::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_getElementType_EVElementType( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_getElementType_EVElementType_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_getElementType_EVElementType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_isActive_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_isActive_ev_bool_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_isActive_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setActive_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_setActive_void_ev_bool_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setActive_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_getGridlineSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_getGridlineSymbol_ISymbol_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_getGridlineSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setGridlineSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_setGridlineSymbol_void_ISymbol_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setGridlineSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_getTextSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_getTextSymbol_ISymbol_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_getTextSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setTextSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CReferenceGrid_setTextSymbol_void_ISymbol_Callback* pCallback )
				{
					CReferenceGridProxy* ptr = dynamic_cast<CReferenceGridProxy*>((EarthView::World::Spatial::Carto::CReferenceGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CReferenceGrid_setTextSymbol_void_ISymbol(pCallback);
					}
				}
			}
		}
	}
}
