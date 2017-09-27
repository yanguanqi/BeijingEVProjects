/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dcarto/kilometergrid.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setHorizontalGap_void_ev_real64_Callback)(_in const ev_real64 horizontalGap);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_getHorizontalGap_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setVerticalGap_void_ev_real64_Callback)(_in const ev_real64 verticalGap);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_getVerticalGap_ev_real64_Callback)();
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_getDivisionSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setDivisionSymbol_void_ISymbol_Callback)(_in EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_getElementType_EVElementType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setName_void_EVString_Callback)(_in char*& name);
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_getType_EVSquareGridType_Callback)();
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_getEnvelope_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setEnvelope_void_IEnvelope_Callback)(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setMapFrame_void_IMapFrame_Callback)(_in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_isSelected_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setSelected_void_ev_bool_Callback)(_in ev_bool bSelected);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_isDrawGridline_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setDrawGridline_void_ev_bool_Callback)(_in ev_bool bSelected);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_isActive_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setActive_void_ev_bool_Callback)(_in ev_bool bActive);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_getGridlineSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setGridlineSymbol_void_ISymbol_Callback)(_in EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_getTextSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setTextSymbol_void_ISymbol_Callback)(_in EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_draw_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_drawOver_void_Callback)();
				typedef EarthView::World::Spatial::Carto::IElement*  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_clone_IElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_fromStream_void_CDataStream_Callback)(_in void* stream);
				class CKilometerGridProxy : public EarthView::World::Spatial::Carto::CKilometerGrid
				{
				private:
					EarthView_World_Spatial_Carto_CKilometerGrid_setHorizontalGap_void_ev_real64_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_setHorizontalGap_void_ev_real64_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_getHorizontalGap_ev_real64_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_getHorizontalGap_ev_real64_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_setVerticalGap_void_ev_real64_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_setVerticalGap_void_ev_real64_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_getVerticalGap_ev_real64_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_getVerticalGap_ev_real64_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_getDivisionSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_getDivisionSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_setDivisionSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_setDivisionSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_getElementType_EVElementType_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_getElementType_EVElementType_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_getName_EVString_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_getName_EVString_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_setName_void_EVString_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_setName_void_EVString_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_getType_EVSquareGridType_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_getType_EVSquareGridType_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_getEnvelope_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_getEnvelope_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_setEnvelope_void_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_setEnvelope_void_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_setMapFrame_void_IMapFrame_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_setMapFrame_void_IMapFrame_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_isSelected_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_setSelected_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_isDrawGridline_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_isDrawGridline_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_setDrawGridline_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_setDrawGridline_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_isActive_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_isActive_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_setActive_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_setActive_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_getGridlineSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_getGridlineSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_setGridlineSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_setGridlineSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_getTextSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_getTextSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_setTextSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_setTextSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_draw_void_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_draw_void_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_drawOver_void_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_drawOver_void_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_clone_IElement_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_clone_IElement_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_toXML_EVString_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_toXML_EVString_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_CKilometerGrid_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_CKilometerGrid_fromStream_void_CDataStream_Callback;
				public:
					CKilometerGridProxy(EarthView::World::Core::CNameValuePairList *pList) : CKilometerGrid(pList)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_setHorizontalGap_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_getHorizontalGap_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_setVerticalGap_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_getVerticalGap_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_getDivisionSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_setDivisionSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_getElementType_EVElementType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_getType_EVSquareGridType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_getEnvelope_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_setEnvelope_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_setMapFrame_void_IMapFrame_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_isSelected_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_setSelected_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_isDrawGridline_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_setDrawGridline_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_isActive_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_setActive_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_getGridlineSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_setGridlineSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_getTextSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_setTextSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_draw_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_drawOver_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_clone_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CKilometerGrid_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setHorizontalGap_void_ev_real64(EarthView_World_Spatial_Carto_CKilometerGrid_setHorizontalGap_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_setHorizontalGap_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getHorizontalGap_ev_real64(EarthView_World_Spatial_Carto_CKilometerGrid_getHorizontalGap_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_getHorizontalGap_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setVerticalGap_void_ev_real64(EarthView_World_Spatial_Carto_CKilometerGrid_setVerticalGap_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_setVerticalGap_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getVerticalGap_ev_real64(EarthView_World_Spatial_Carto_CKilometerGrid_getVerticalGap_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_getVerticalGap_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getDivisionSymbol_ISymbol(EarthView_World_Spatial_Carto_CKilometerGrid_getDivisionSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_getDivisionSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setDivisionSymbol_void_ISymbol(EarthView_World_Spatial_Carto_CKilometerGrid_setDivisionSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_setDivisionSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getElementType_EVElementType(EarthView_World_Spatial_Carto_CKilometerGrid_getElementType_EVElementType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_getElementType_EVElementType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getName_EVString(EarthView_World_Spatial_Carto_CKilometerGrid_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setName_void_EVString(EarthView_World_Spatial_Carto_CKilometerGrid_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getType_EVSquareGridType(EarthView_World_Spatial_Carto_CKilometerGrid_getType_EVSquareGridType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_getType_EVSquareGridType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getEnvelope_IEnvelope(EarthView_World_Spatial_Carto_CKilometerGrid_getEnvelope_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_getEnvelope_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setEnvelope_void_IEnvelope(EarthView_World_Spatial_Carto_CKilometerGrid_setEnvelope_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_setEnvelope_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setMapFrame_void_IMapFrame(EarthView_World_Spatial_Carto_CKilometerGrid_setMapFrame_void_IMapFrame_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_setMapFrame_void_IMapFrame_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_isSelected_ev_bool(EarthView_World_Spatial_Carto_CKilometerGrid_isSelected_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_isSelected_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setSelected_void_ev_bool(EarthView_World_Spatial_Carto_CKilometerGrid_setSelected_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_setSelected_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_isDrawGridline_ev_bool(EarthView_World_Spatial_Carto_CKilometerGrid_isDrawGridline_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_isDrawGridline_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setDrawGridline_void_ev_bool(EarthView_World_Spatial_Carto_CKilometerGrid_setDrawGridline_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_setDrawGridline_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_isActive_ev_bool(EarthView_World_Spatial_Carto_CKilometerGrid_isActive_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_isActive_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setActive_void_ev_bool(EarthView_World_Spatial_Carto_CKilometerGrid_setActive_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_setActive_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getGridlineSymbol_ISymbol(EarthView_World_Spatial_Carto_CKilometerGrid_getGridlineSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_getGridlineSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setGridlineSymbol_void_ISymbol(EarthView_World_Spatial_Carto_CKilometerGrid_setGridlineSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_setGridlineSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getTextSymbol_ISymbol(EarthView_World_Spatial_Carto_CKilometerGrid_getTextSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_getTextSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setTextSymbol_void_ISymbol(EarthView_World_Spatial_Carto_CKilometerGrid_setTextSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_setTextSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_drawPrepare_ev_bool_ISpatialDisplay(EarthView_World_Spatial_Carto_CKilometerGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_draw_void(EarthView_World_Spatial_Carto_CKilometerGrid_draw_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_draw_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_drawOver_void(EarthView_World_Spatial_Carto_CKilometerGrid_drawOver_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_drawOver_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_clone_IElement(EarthView_World_Spatial_Carto_CKilometerGrid_clone_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_clone_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_toStream_void_CDataStream(EarthView_World_Spatial_Carto_CKilometerGrid_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_toXML_EVString(EarthView_World_Spatial_Carto_CKilometerGrid_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Carto_CKilometerGrid_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_toXmlElement_CXmlElement(EarthView_World_Spatial_Carto_CKilometerGrid_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_fromStream_void_CDataStream(EarthView_World_Spatial_Carto_CKilometerGrid_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CKilometerGrid_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Carto::EVSquareGridType getType() const
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_getType_EVSquareGridType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::EVSquareGridType returnValue = (EarthView::World::Spatial::Carto::EVSquareGridType)m_EarthView_World_Spatial_Carto_CKilometerGrid_getType_EVSquareGridType_Callback();
							return returnValue;
						}
						else
							return this->CKilometerGrid::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_CKilometerGrid_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CKilometerGrid::getName();
					}
					virtual void setName(_in EVString name)
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Carto_CKilometerGrid_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CKilometerGrid::setName(name);
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_getEnvelope_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Carto_CKilometerGrid_getEnvelope_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CKilometerGrid::getEnvelope();
					}
					virtual void setEnvelope(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope)
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_setEnvelope_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CKilometerGrid_setEnvelope_void_IEnvelope_Callback(pEnvelope);
						}
						else
							return this->CKilometerGrid::setEnvelope(pEnvelope);
					}
					virtual void setMapFrame(_in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame)
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_setMapFrame_void_IMapFrame_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CKilometerGrid_setMapFrame_void_IMapFrame_Callback(pMapFrame);
						}
						else
							return this->CKilometerGrid::setMapFrame(pMapFrame);
					}
					virtual void setHorizontalGap(_in const ev_real64 horizontalGap)
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_setHorizontalGap_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CKilometerGrid_setHorizontalGap_void_ev_real64_Callback(horizontalGap);
						}
						else
							return this->CKilometerGrid::setHorizontalGap(horizontalGap);
					}
					virtual ev_real64 getHorizontalGap() const
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_getHorizontalGap_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Carto_CKilometerGrid_getHorizontalGap_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CKilometerGrid::getHorizontalGap();
					}
					virtual void setVerticalGap(_in const ev_real64 verticalGap)
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_setVerticalGap_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CKilometerGrid_setVerticalGap_void_ev_real64_Callback(verticalGap);
						}
						else
							return this->CKilometerGrid::setVerticalGap(verticalGap);
					}
					virtual ev_real64 getVerticalGap() const
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_getVerticalGap_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Carto_CKilometerGrid_getVerticalGap_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CKilometerGrid::getVerticalGap();
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getDivisionSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_getDivisionSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_CKilometerGrid_getDivisionSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CKilometerGrid::getDivisionSymbol();
					}
					virtual void setDivisionSymbol(_in EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_setDivisionSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CKilometerGrid_setDivisionSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->CKilometerGrid::setDivisionSymbol(symbol);
					}
					virtual ev_bool isSelected()
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CKilometerGrid_isSelected_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKilometerGrid::isSelected();
					}
					virtual void setSelected(_in ev_bool bSelected)
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CKilometerGrid_setSelected_void_ev_bool_Callback(bSelected);
						}
						else
							return this->CKilometerGrid::setSelected(bSelected);
					}
					virtual ev_bool isDrawGridline()
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_isDrawGridline_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CKilometerGrid_isDrawGridline_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKilometerGrid::isDrawGridline();
					}
					virtual void setDrawGridline(_in ev_bool bDraw)
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_setDrawGridline_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CKilometerGrid_setDrawGridline_void_ev_bool_Callback(bDraw);
						}
						else
							return this->CKilometerGrid::setDrawGridline(bDraw);
					}
					virtual ev_bool drawPrepare(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay)
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CKilometerGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback(pDisplay);
							return returnValue;
						}
						else
							return this->CKilometerGrid::drawPrepare(pDisplay);
					}
					virtual void draw()
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_draw_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CKilometerGrid_draw_void_Callback();
						}
						else
							return this->CKilometerGrid::draw();
					}
					virtual void drawOver()
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_drawOver_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CKilometerGrid_drawOver_void_Callback();
						}
						else
							return this->CKilometerGrid::drawOver();
					}
					virtual EarthView::World::Spatial::Carto::IElement* clone() const
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_clone_IElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::IElement* returnValue = m_EarthView_World_Spatial_Carto_CKilometerGrid_clone_IElement_Callback();
							return returnValue;
						}
						else
							return this->CKilometerGrid::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CKilometerGrid_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CKilometerGrid::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_CKilometerGrid_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CKilometerGrid::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CKilometerGrid_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CKilometerGrid::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Carto_CKilometerGrid_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CKilometerGrid::toXmlElement();
					}
					virtual void fromStream(_in EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CKilometerGrid_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CKilometerGrid::fromStream(stream);
					}
					virtual EarthView::World::Spatial::Carto::EVElementType getElementType() const
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_getElementType_EVElementType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::EVElementType returnValue = (EarthView::World::Spatial::Carto::EVElementType)m_EarthView_World_Spatial_Carto_CKilometerGrid_getElementType_EVElementType_Callback();
							return returnValue;
						}
						else
							return this->CKilometerGrid::getElementType();
					}
					virtual ev_bool isActive() const
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_isActive_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CKilometerGrid_isActive_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKilometerGrid::isActive();
					}
					virtual void setActive(_in ev_bool bActive)
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_setActive_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CKilometerGrid_setActive_void_ev_bool_Callback(bActive);
						}
						else
							return this->CKilometerGrid::setActive(bActive);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getGridlineSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_getGridlineSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_CKilometerGrid_getGridlineSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CKilometerGrid::getGridlineSymbol();
					}
					virtual void setGridlineSymbol(_in EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_setGridlineSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CKilometerGrid_setGridlineSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->CKilometerGrid::setGridlineSymbol(symbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getTextSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_getTextSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_CKilometerGrid_getTextSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CKilometerGrid::getTextSymbol();
					}
					virtual void setTextSymbol(_in EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Carto_CKilometerGrid_setTextSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CKilometerGrid_setTextSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->CKilometerGrid::setTextSymbol(symbol);
					}
				};
				REGISTER_FACTORY_CLASS(CKilometerGridProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_getType_EVSquareGridType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					if (dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::EVSquareGridType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVSquareGridType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getType_EVSquareGridType( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_getType_EVSquareGridType_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getType_EVSquareGridType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_getType_EVSquareGridType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					EarthView::World::Spatial::Carto::EVSquareGridType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					if (dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_getName_EVString_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setName_void_EVString(void *pObjectXXXX, _in char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					if (dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_setName_void_EVString_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_getEnvelope_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					if (dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::getEnvelope();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelope();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getEnvelope_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_getEnvelope_IEnvelope_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getEnvelope_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_getEnvelope_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::getEnvelope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setEnvelope_void_IEnvelope(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					if (dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::setEnvelope(pEnvelope);
					else
						ptrNativeObject->setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setEnvelope_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_setEnvelope_void_IEnvelope_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setEnvelope_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setEnvelope_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setMapFrame_void_IMapFrame(void *pObjectXXXX, _in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					if (dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::setMapFrame(pMapFrame);
					else
						ptrNativeObject->setMapFrame(pMapFrame);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setMapFrame_void_IMapFrame( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_setMapFrame_void_IMapFrame_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setMapFrame_void_IMapFrame(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setMapFrame_void_IMapFrame_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::setMapFrame(pMapFrame);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setHorizontalGap_void_ev_real64(void *pObjectXXXX, _in const ev_real64 horizontalGap )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					if (dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::setHorizontalGap(horizontalGap);
					else
						ptrNativeObject->setHorizontalGap(horizontalGap);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setHorizontalGap_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_setHorizontalGap_void_ev_real64_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setHorizontalGap_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setHorizontalGap_void_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_real64 horizontalGap )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::setHorizontalGap(horizontalGap);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_getHorizontalGap_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					if (dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::getHorizontalGap();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getHorizontalGap();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getHorizontalGap_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_getHorizontalGap_ev_real64_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getHorizontalGap_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_getHorizontalGap_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::getHorizontalGap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setVerticalGap_void_ev_real64(void *pObjectXXXX, _in const ev_real64 verticalGap )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					if (dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::setVerticalGap(verticalGap);
					else
						ptrNativeObject->setVerticalGap(verticalGap);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setVerticalGap_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_setVerticalGap_void_ev_real64_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setVerticalGap_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setVerticalGap_void_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_real64 verticalGap )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::setVerticalGap(verticalGap);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_getVerticalGap_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					if (dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::getVerticalGap();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getVerticalGap();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getVerticalGap_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_getVerticalGap_ev_real64_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getVerticalGap_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_getVerticalGap_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::getVerticalGap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_getDivisionSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					if (dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::getDivisionSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getDivisionSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getDivisionSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_getDivisionSymbol_ISymbol_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getDivisionSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_getDivisionSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::getDivisionSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setDivisionSymbol_void_ISymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					if (dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::setDivisionSymbol(symbol);
					else
						ptrNativeObject->setDivisionSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setDivisionSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_setDivisionSymbol_void_ISymbol_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setDivisionSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setDivisionSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::setDivisionSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_isSelected_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					if (dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::isSelected();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelected();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_isSelected_ev_bool_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_isSelected_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_isSelected_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::isSelected();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					if (dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::setSelected(bSelected);
					else
						ptrNativeObject->setSelected(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_setSelected_void_ev_bool_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setSelected_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setSelected_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::setSelected(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_isDrawGridline_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					if (dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::isDrawGridline();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawGridline();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_isDrawGridline_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_isDrawGridline_ev_bool_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_isDrawGridline_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_isDrawGridline_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::isDrawGridline();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setDrawGridline_void_ev_bool(void *pObjectXXXX, _in ev_bool bDraw )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					if (dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::setDrawGridline(bDraw);
					else
						ptrNativeObject->setDrawGridline(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setDrawGridline_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_setDrawGridline_void_ev_bool_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setDrawGridline_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_setDrawGridline_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bDraw )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::setDrawGridline(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_drawPrepare_ev_bool_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					if (dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::drawPrepare(pDisplay);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->drawPrepare(pDisplay);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_drawPrepare_ev_bool_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_drawPrepare_ev_bool_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_drawPrepare_ev_bool_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::drawPrepare(pDisplay);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_draw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					if (dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::draw();
					else
						ptrNativeObject->draw();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_draw_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_draw_void_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_draw_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_draw_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::draw();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_drawOver_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					if (dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::drawOver();
					else
						ptrNativeObject->drawOver();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_drawOver_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_drawOver_void_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_drawOver_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_drawOver_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::drawOver();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_clone_IElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					if (dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_clone_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_clone_IElement_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_clone_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_clone_IElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					if (dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_toStream_void_CDataStream_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					if (dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_toXML_EVString_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					if (dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					if (dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_fromStream_void_CDataStream(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					if (dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_fromStream_void_CDataStream_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CKilometerGrid_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::CKilometerGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CKilometerGrid::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getElementType_EVElementType( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_getElementType_EVElementType_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getElementType_EVElementType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_isActive_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_isActive_ev_bool_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_isActive_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setActive_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_setActive_void_ev_bool_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setActive_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getGridlineSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_getGridlineSymbol_ISymbol_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getGridlineSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setGridlineSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_setGridlineSymbol_void_ISymbol_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setGridlineSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getTextSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_getTextSymbol_ISymbol_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_getTextSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setTextSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CKilometerGrid_setTextSymbol_void_ISymbol_Callback* pCallback )
				{
					CKilometerGridProxy* ptr = dynamic_cast<CKilometerGridProxy*>((EarthView::World::Spatial::Carto::CKilometerGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CKilometerGrid_setTextSymbol_void_ISymbol(pCallback);
					}
				}
			}
		}
	}
}
