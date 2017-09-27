/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dcarto/graticales.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_setHorizontalGap_void_ev_real64_Callback)(_in const ev_real64 horizontalGap);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_getHorizontalGap_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_setVerticalGap_void_ev_real64_Callback)(_in const ev_real64 verticalGap);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_getVerticalGap_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_setLabelType_void_GraticalesLabelType_Callback)(_in int labelType);
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_getLabelType_GraticalesLabelType_Callback)();
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_getDivisionSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_setDivisionSymbol_void_ISymbol_Callback)(_in EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_getElementType_EVElementType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_setName_void_EVString_Callback)(_in char*& name);
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_getType_EVSquareGridType_Callback)();
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_getEnvelope_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_setEnvelope_void_IEnvelope_Callback)(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_setMapFrame_void_IMapFrame_Callback)(_in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_isSelected_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_setSelected_void_ev_bool_Callback)(_in ev_bool bSelected);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_isDrawGridline_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_setDrawGridline_void_ev_bool_Callback)(_in ev_bool bSelected);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_isActive_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_setActive_void_ev_bool_Callback)(_in ev_bool bActive);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_getGridlineSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_setGridlineSymbol_void_ISymbol_Callback)(_in EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_getTextSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_setTextSymbol_void_ISymbol_Callback)(_in EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_drawPrepare_ev_bool_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_draw_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_drawOver_void_Callback)();
				typedef EarthView::World::Spatial::Carto::IElement*  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_clone_IElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGraticales_fromStream_void_CDataStream_Callback)(_in void* stream);
				class CGraticalesProxy : public EarthView::World::Spatial::Carto::CGraticales
				{
				private:
					EarthView_World_Spatial_Carto_CGraticales_setHorizontalGap_void_ev_real64_Callback* m_EarthView_World_Spatial_Carto_CGraticales_setHorizontalGap_void_ev_real64_Callback;
					EarthView_World_Spatial_Carto_CGraticales_getHorizontalGap_ev_real64_Callback* m_EarthView_World_Spatial_Carto_CGraticales_getHorizontalGap_ev_real64_Callback;
					EarthView_World_Spatial_Carto_CGraticales_setVerticalGap_void_ev_real64_Callback* m_EarthView_World_Spatial_Carto_CGraticales_setVerticalGap_void_ev_real64_Callback;
					EarthView_World_Spatial_Carto_CGraticales_getVerticalGap_ev_real64_Callback* m_EarthView_World_Spatial_Carto_CGraticales_getVerticalGap_ev_real64_Callback;
					EarthView_World_Spatial_Carto_CGraticales_setLabelType_void_GraticalesLabelType_Callback* m_EarthView_World_Spatial_Carto_CGraticales_setLabelType_void_GraticalesLabelType_Callback;
					EarthView_World_Spatial_Carto_CGraticales_getLabelType_GraticalesLabelType_Callback* m_EarthView_World_Spatial_Carto_CGraticales_getLabelType_GraticalesLabelType_Callback;
					EarthView_World_Spatial_Carto_CGraticales_getDivisionSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CGraticales_getDivisionSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CGraticales_setDivisionSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CGraticales_setDivisionSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CGraticales_getElementType_EVElementType_Callback* m_EarthView_World_Spatial_Carto_CGraticales_getElementType_EVElementType_Callback;
					EarthView_World_Spatial_Carto_CGraticales_getName_EVString_Callback* m_EarthView_World_Spatial_Carto_CGraticales_getName_EVString_Callback;
					EarthView_World_Spatial_Carto_CGraticales_setName_void_EVString_Callback* m_EarthView_World_Spatial_Carto_CGraticales_setName_void_EVString_Callback;
					EarthView_World_Spatial_Carto_CGraticales_getType_EVSquareGridType_Callback* m_EarthView_World_Spatial_Carto_CGraticales_getType_EVSquareGridType_Callback;
					EarthView_World_Spatial_Carto_CGraticales_getEnvelope_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_CGraticales_getEnvelope_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_CGraticales_setEnvelope_void_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_CGraticales_setEnvelope_void_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_CGraticales_setMapFrame_void_IMapFrame_Callback* m_EarthView_World_Spatial_Carto_CGraticales_setMapFrame_void_IMapFrame_Callback;
					EarthView_World_Spatial_Carto_CGraticales_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CGraticales_isSelected_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CGraticales_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CGraticales_setSelected_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CGraticales_isDrawGridline_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CGraticales_isDrawGridline_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CGraticales_setDrawGridline_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CGraticales_setDrawGridline_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CGraticales_isActive_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CGraticales_isActive_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CGraticales_setActive_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CGraticales_setActive_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CGraticales_getGridlineSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CGraticales_getGridlineSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CGraticales_setGridlineSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CGraticales_setGridlineSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CGraticales_getTextSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CGraticales_getTextSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CGraticales_setTextSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CGraticales_setTextSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CGraticales_drawPrepare_ev_bool_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Carto_CGraticales_drawPrepare_ev_bool_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Carto_CGraticales_draw_void_Callback* m_EarthView_World_Spatial_Carto_CGraticales_draw_void_Callback;
					EarthView_World_Spatial_Carto_CGraticales_drawOver_void_Callback* m_EarthView_World_Spatial_Carto_CGraticales_drawOver_void_Callback;
					EarthView_World_Spatial_Carto_CGraticales_clone_IElement_Callback* m_EarthView_World_Spatial_Carto_CGraticales_clone_IElement_Callback;
					EarthView_World_Spatial_Carto_CGraticales_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_CGraticales_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Carto_CGraticales_toXML_EVString_Callback* m_EarthView_World_Spatial_Carto_CGraticales_toXML_EVString_Callback;
					EarthView_World_Spatial_Carto_CGraticales_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_CGraticales_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_CGraticales_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_CGraticales_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_CGraticales_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_CGraticales_fromStream_void_CDataStream_Callback;
				public:
					CGraticalesProxy(EarthView::World::Core::CNameValuePairList *pList) : CGraticales(pList)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_setHorizontalGap_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_getHorizontalGap_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_setVerticalGap_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_getVerticalGap_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_setLabelType_void_GraticalesLabelType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_getLabelType_GraticalesLabelType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_getDivisionSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_setDivisionSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_getElementType_EVElementType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_getType_EVSquareGridType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_getEnvelope_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_setEnvelope_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_setMapFrame_void_IMapFrame_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_isSelected_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_setSelected_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_isDrawGridline_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_setDrawGridline_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_isActive_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_setActive_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_getGridlineSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_setGridlineSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_getTextSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_setTextSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_drawPrepare_ev_bool_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_draw_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_drawOver_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_clone_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGraticales_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_setHorizontalGap_void_ev_real64(EarthView_World_Spatial_Carto_CGraticales_setHorizontalGap_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_setHorizontalGap_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_getHorizontalGap_ev_real64(EarthView_World_Spatial_Carto_CGraticales_getHorizontalGap_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_getHorizontalGap_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_setVerticalGap_void_ev_real64(EarthView_World_Spatial_Carto_CGraticales_setVerticalGap_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_setVerticalGap_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_getVerticalGap_ev_real64(EarthView_World_Spatial_Carto_CGraticales_getVerticalGap_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_getVerticalGap_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_setLabelType_void_GraticalesLabelType(EarthView_World_Spatial_Carto_CGraticales_setLabelType_void_GraticalesLabelType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_setLabelType_void_GraticalesLabelType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_getLabelType_GraticalesLabelType(EarthView_World_Spatial_Carto_CGraticales_getLabelType_GraticalesLabelType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_getLabelType_GraticalesLabelType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_getDivisionSymbol_ISymbol(EarthView_World_Spatial_Carto_CGraticales_getDivisionSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_getDivisionSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_setDivisionSymbol_void_ISymbol(EarthView_World_Spatial_Carto_CGraticales_setDivisionSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_setDivisionSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_getElementType_EVElementType(EarthView_World_Spatial_Carto_CGraticales_getElementType_EVElementType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_getElementType_EVElementType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_getName_EVString(EarthView_World_Spatial_Carto_CGraticales_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_setName_void_EVString(EarthView_World_Spatial_Carto_CGraticales_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_getType_EVSquareGridType(EarthView_World_Spatial_Carto_CGraticales_getType_EVSquareGridType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_getType_EVSquareGridType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_getEnvelope_IEnvelope(EarthView_World_Spatial_Carto_CGraticales_getEnvelope_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_getEnvelope_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_setEnvelope_void_IEnvelope(EarthView_World_Spatial_Carto_CGraticales_setEnvelope_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_setEnvelope_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_setMapFrame_void_IMapFrame(EarthView_World_Spatial_Carto_CGraticales_setMapFrame_void_IMapFrame_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_setMapFrame_void_IMapFrame_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_isSelected_ev_bool(EarthView_World_Spatial_Carto_CGraticales_isSelected_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_isSelected_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_setSelected_void_ev_bool(EarthView_World_Spatial_Carto_CGraticales_setSelected_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_setSelected_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_isDrawGridline_ev_bool(EarthView_World_Spatial_Carto_CGraticales_isDrawGridline_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_isDrawGridline_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_setDrawGridline_void_ev_bool(EarthView_World_Spatial_Carto_CGraticales_setDrawGridline_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_setDrawGridline_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_isActive_ev_bool(EarthView_World_Spatial_Carto_CGraticales_isActive_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_isActive_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_setActive_void_ev_bool(EarthView_World_Spatial_Carto_CGraticales_setActive_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_setActive_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_getGridlineSymbol_ISymbol(EarthView_World_Spatial_Carto_CGraticales_getGridlineSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_getGridlineSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_setGridlineSymbol_void_ISymbol(EarthView_World_Spatial_Carto_CGraticales_setGridlineSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_setGridlineSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_getTextSymbol_ISymbol(EarthView_World_Spatial_Carto_CGraticales_getTextSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_getTextSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_setTextSymbol_void_ISymbol(EarthView_World_Spatial_Carto_CGraticales_setTextSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_setTextSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_drawPrepare_ev_bool_ISpatialDisplay(EarthView_World_Spatial_Carto_CGraticales_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_drawPrepare_ev_bool_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_draw_void(EarthView_World_Spatial_Carto_CGraticales_draw_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_draw_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_drawOver_void(EarthView_World_Spatial_Carto_CGraticales_drawOver_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_drawOver_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_clone_IElement(EarthView_World_Spatial_Carto_CGraticales_clone_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_clone_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_toStream_void_CDataStream(EarthView_World_Spatial_Carto_CGraticales_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_toXML_EVString(EarthView_World_Spatial_Carto_CGraticales_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Carto_CGraticales_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_toXmlElement_CXmlElement(EarthView_World_Spatial_Carto_CGraticales_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGraticales_fromStream_void_CDataStream(EarthView_World_Spatial_Carto_CGraticales_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGraticales_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Carto::EVSquareGridType getType() const
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_getType_EVSquareGridType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::EVSquareGridType returnValue = (EarthView::World::Spatial::Carto::EVSquareGridType)m_EarthView_World_Spatial_Carto_CGraticales_getType_EVSquareGridType_Callback();
							return returnValue;
						}
						else
							return this->CGraticales::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_CGraticales_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CGraticales::getName();
					}
					virtual void setName(_in EVString name)
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Carto_CGraticales_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CGraticales::setName(name);
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_getEnvelope_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Carto_CGraticales_getEnvelope_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CGraticales::getEnvelope();
					}
					virtual void setEnvelope(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope)
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_setEnvelope_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGraticales_setEnvelope_void_IEnvelope_Callback(pEnvelope);
						}
						else
							return this->CGraticales::setEnvelope(pEnvelope);
					}
					virtual void setMapFrame(_in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame)
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_setMapFrame_void_IMapFrame_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGraticales_setMapFrame_void_IMapFrame_Callback(pMapFrame);
						}
						else
							return this->CGraticales::setMapFrame(pMapFrame);
					}
					virtual void setHorizontalGap(_in const ev_real64 horizontalGap)
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_setHorizontalGap_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGraticales_setHorizontalGap_void_ev_real64_Callback(horizontalGap);
						}
						else
							return this->CGraticales::setHorizontalGap(horizontalGap);
					}
					virtual ev_real64 getHorizontalGap() const
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_getHorizontalGap_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Carto_CGraticales_getHorizontalGap_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CGraticales::getHorizontalGap();
					}
					virtual void setVerticalGap(_in const ev_real64 verticalGap)
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_setVerticalGap_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGraticales_setVerticalGap_void_ev_real64_Callback(verticalGap);
						}
						else
							return this->CGraticales::setVerticalGap(verticalGap);
					}
					virtual ev_real64 getVerticalGap() const
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_getVerticalGap_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Carto_CGraticales_getVerticalGap_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CGraticales::getVerticalGap();
					}
					virtual void setLabelType(_in GraticalesLabelType labelType)
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_setLabelType_void_GraticalesLabelType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGraticales_setLabelType_void_GraticalesLabelType_Callback((int)labelType);
						}
						else
							return this->CGraticales::setLabelType(labelType);
					}
					virtual GraticalesLabelType getLabelType() const
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_getLabelType_GraticalesLabelType_Callback != NULL && this->isCustomExtend())
						{
							GraticalesLabelType returnValue = (GraticalesLabelType)m_EarthView_World_Spatial_Carto_CGraticales_getLabelType_GraticalesLabelType_Callback();
							return returnValue;
						}
						else
							return this->CGraticales::getLabelType();
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getDivisionSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_getDivisionSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_CGraticales_getDivisionSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CGraticales::getDivisionSymbol();
					}
					virtual void setDivisionSymbol(_in EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_setDivisionSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGraticales_setDivisionSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->CGraticales::setDivisionSymbol(symbol);
					}
					virtual ev_bool isSelected()
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CGraticales_isSelected_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGraticales::isSelected();
					}
					virtual void setSelected(_in ev_bool bSelected)
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGraticales_setSelected_void_ev_bool_Callback(bSelected);
						}
						else
							return this->CGraticales::setSelected(bSelected);
					}
					virtual ev_bool isDrawGridline()
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_isDrawGridline_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CGraticales_isDrawGridline_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGraticales::isDrawGridline();
					}
					virtual void setDrawGridline(_in ev_bool bSelected)
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_setDrawGridline_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGraticales_setDrawGridline_void_ev_bool_Callback(bSelected);
						}
						else
							return this->CGraticales::setDrawGridline(bSelected);
					}
					virtual ev_bool drawPrepare(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay)
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_drawPrepare_ev_bool_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CGraticales_drawPrepare_ev_bool_ISpatialDisplay_Callback(pDisplay);
							return returnValue;
						}
						else
							return this->CGraticales::drawPrepare(pDisplay);
					}
					virtual void draw()
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_draw_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGraticales_draw_void_Callback();
						}
						else
							return this->CGraticales::draw();
					}
					virtual void drawOver()
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_drawOver_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGraticales_drawOver_void_Callback();
						}
						else
							return this->CGraticales::drawOver();
					}
					virtual EarthView::World::Spatial::Carto::IElement* clone() const
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_clone_IElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::IElement* returnValue = m_EarthView_World_Spatial_Carto_CGraticales_clone_IElement_Callback();
							return returnValue;
						}
						else
							return this->CGraticales::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGraticales_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CGraticales::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_CGraticales_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CGraticales::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGraticales_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CGraticales::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Carto_CGraticales_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CGraticales::toXmlElement();
					}
					virtual void fromStream(_in EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGraticales_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CGraticales::fromStream(stream);
					}
					virtual EarthView::World::Spatial::Carto::EVElementType getElementType() const
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_getElementType_EVElementType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::EVElementType returnValue = (EarthView::World::Spatial::Carto::EVElementType)m_EarthView_World_Spatial_Carto_CGraticales_getElementType_EVElementType_Callback();
							return returnValue;
						}
						else
							return this->CGraticales::getElementType();
					}
					virtual ev_bool isActive() const
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_isActive_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CGraticales_isActive_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGraticales::isActive();
					}
					virtual void setActive(_in ev_bool bActive)
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_setActive_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGraticales_setActive_void_ev_bool_Callback(bActive);
						}
						else
							return this->CGraticales::setActive(bActive);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getGridlineSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_getGridlineSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_CGraticales_getGridlineSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CGraticales::getGridlineSymbol();
					}
					virtual void setGridlineSymbol(_in EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_setGridlineSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGraticales_setGridlineSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->CGraticales::setGridlineSymbol(symbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getTextSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_getTextSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_CGraticales_getTextSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CGraticales::getTextSymbol();
					}
					virtual void setTextSymbol(_in EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Carto_CGraticales_setTextSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGraticales_setTextSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->CGraticales::setTextSymbol(symbol);
					}
				};
				REGISTER_FACTORY_CLASS(CGraticalesProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CGraticales_getType_EVSquareGridType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::EVSquareGridType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVSquareGridType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_getType_EVSquareGridType( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_getType_EVSquareGridType_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_getType_EVSquareGridType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CGraticales_getType_EVSquareGridType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					EarthView::World::Spatial::Carto::EVSquareGridType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CGraticales_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_getName_EVString_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CGraticales_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_setName_void_EVString(void *pObjectXXXX, _in char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_setName_void_EVString_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_CGraticales_getEnvelope_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::getEnvelope();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelope();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_getEnvelope_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_getEnvelope_IEnvelope_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_getEnvelope_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_CGraticales_getEnvelope_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::getEnvelope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_setEnvelope_void_IEnvelope(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::setEnvelope(pEnvelope);
					else
						ptrNativeObject->setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_setEnvelope_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_setEnvelope_void_IEnvelope_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_setEnvelope_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_setEnvelope_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_setMapFrame_void_IMapFrame(void *pObjectXXXX, _in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::setMapFrame(pMapFrame);
					else
						ptrNativeObject->setMapFrame(pMapFrame);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_setMapFrame_void_IMapFrame( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_setMapFrame_void_IMapFrame_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_setMapFrame_void_IMapFrame(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_setMapFrame_void_IMapFrame_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::setMapFrame(pMapFrame);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_setHorizontalGap_void_ev_real64(void *pObjectXXXX, _in const ev_real64 horizontalGap )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::setHorizontalGap(horizontalGap);
					else
						ptrNativeObject->setHorizontalGap(horizontalGap);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_setHorizontalGap_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_setHorizontalGap_void_ev_real64_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_setHorizontalGap_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_setHorizontalGap_void_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_real64 horizontalGap )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::setHorizontalGap(horizontalGap);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_CGraticales_getHorizontalGap_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::getHorizontalGap();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getHorizontalGap();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_getHorizontalGap_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_getHorizontalGap_ev_real64_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_getHorizontalGap_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_CGraticales_getHorizontalGap_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::getHorizontalGap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_setVerticalGap_void_ev_real64(void *pObjectXXXX, _in const ev_real64 verticalGap )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::setVerticalGap(verticalGap);
					else
						ptrNativeObject->setVerticalGap(verticalGap);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_setVerticalGap_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_setVerticalGap_void_ev_real64_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_setVerticalGap_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_setVerticalGap_void_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_real64 verticalGap )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::setVerticalGap(verticalGap);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_CGraticales_getVerticalGap_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::getVerticalGap();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getVerticalGap();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_getVerticalGap_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_getVerticalGap_ev_real64_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_getVerticalGap_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_CGraticales_getVerticalGap_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::getVerticalGap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_setLabelType_void_GraticalesLabelType(void *pObjectXXXX, _in int labelType )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::setLabelType((GraticalesLabelType)labelType);
					else
						ptrNativeObject->setLabelType((GraticalesLabelType)labelType);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_setLabelType_void_GraticalesLabelType( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_setLabelType_void_GraticalesLabelType_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_setLabelType_void_GraticalesLabelType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_setLabelType_void_GraticalesLabelType_NoVirtual(void *pObjectXXXX, _in int labelType )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::setLabelType((GraticalesLabelType)labelType);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CGraticales_getLabelType_GraticalesLabelType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
					{
						GraticalesLabelType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::getLabelType();
						return (int)objXXXX;
					}
					else
					{
						GraticalesLabelType objXXXX = ptrNativeObject->getLabelType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_getLabelType_GraticalesLabelType( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_getLabelType_GraticalesLabelType_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_getLabelType_GraticalesLabelType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CGraticales_getLabelType_GraticalesLabelType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					GraticalesLabelType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::getLabelType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_CGraticales_getDivisionSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::getDivisionSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getDivisionSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_getDivisionSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_getDivisionSymbol_ISymbol_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_getDivisionSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_CGraticales_getDivisionSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::getDivisionSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_setDivisionSymbol_void_ISymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::setDivisionSymbol(symbol);
					else
						ptrNativeObject->setDivisionSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_setDivisionSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_setDivisionSymbol_void_ISymbol_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_setDivisionSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_setDivisionSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::setDivisionSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CGraticales_isSelected_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::isSelected();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelected();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_isSelected_ev_bool_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_isSelected_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CGraticales_isSelected_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::isSelected();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_setSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::setSelected(bSelected);
					else
						ptrNativeObject->setSelected(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_setSelected_void_ev_bool_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_setSelected_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_setSelected_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::setSelected(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CGraticales_isDrawGridline_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::isDrawGridline();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawGridline();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_isDrawGridline_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_isDrawGridline_ev_bool_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_isDrawGridline_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CGraticales_isDrawGridline_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::isDrawGridline();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_setDrawGridline_void_ev_bool(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::setDrawGridline(bSelected);
					else
						ptrNativeObject->setDrawGridline(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_setDrawGridline_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_setDrawGridline_void_ev_bool_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_setDrawGridline_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_setDrawGridline_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::setDrawGridline(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CGraticales_drawPrepare_ev_bool_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::drawPrepare(pDisplay);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->drawPrepare(pDisplay);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_drawPrepare_ev_bool_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_drawPrepare_ev_bool_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CGraticales_drawPrepare_ev_bool_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::drawPrepare(pDisplay);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_draw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::draw();
					else
						ptrNativeObject->draw();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_draw_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_draw_void_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_draw_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_draw_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::draw();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_drawOver_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::drawOver();
					else
						ptrNativeObject->drawOver();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_drawOver_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_drawOver_void_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_drawOver_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_drawOver_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::drawOver();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_CGraticales_clone_IElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_clone_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_clone_IElement_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_clone_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_CGraticales_clone_IElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_toStream_void_CDataStream_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CGraticales_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_toXML_EVString_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CGraticales_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_CGraticales_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_CGraticales_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_fromStream_void_CDataStream(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					if (dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_fromStream_void_CDataStream_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGraticales_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::CGraticales* ptrNativeObject = (EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGraticales::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_getElementType_EVElementType( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_getElementType_EVElementType_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_getElementType_EVElementType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_isActive_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_isActive_ev_bool_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_isActive_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_setActive_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_setActive_void_ev_bool_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_setActive_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_getGridlineSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_getGridlineSymbol_ISymbol_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_getGridlineSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_setGridlineSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_setGridlineSymbol_void_ISymbol_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_setGridlineSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_getTextSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_getTextSymbol_ISymbol_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_getTextSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGraticales_setTextSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGraticales_setTextSymbol_void_ISymbol_Callback* pCallback )
				{
					CGraticalesProxy* ptr = dynamic_cast<CGraticalesProxy*>((EarthView::World::Spatial::Carto::CGraticales*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGraticales_setTextSymbol_void_ISymbol(pCallback);
					}
				}
			}
		}
	}
}
