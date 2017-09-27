/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dcarto/legend.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_CLegend_getElementType_EVElementType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegend_setBackgroundColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* pColor);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Carto_CLegend_getBackgroundColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegend_setDrawBackground_void_bool_Callback)(_in bool bDraw);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CLegend_isDrawBackground_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegend_setShadowColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* pColor);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Carto_CLegend_getShadowColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegend_setDrawShadow_void_bool_Callback)(_in bool bDraw);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CLegend_isDrawShadow_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegend_setDrawFrame_void_bool_Callback)(_in bool bDraw);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CLegend_isDrawFrame_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegend_setFrameSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_CLegend_getFrameSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegend_setTitle_void_EVString_Callback)(_in char*& strTitle);
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_CLegend_getTitle_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegend_setTitleSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_CLegend_getTitleSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegend_setItemSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_CLegend_getItemSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegend_setTitleAlignment_void_LegendTitleAlignment_Callback)(_in int alignment);
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_CLegend_getTitleAlignment_LegendTitleAlignment_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegend_setRowGap_void_ev_real64_Callback)(_in ev_real64 rowGap);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Carto_CLegend_getRowGap_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegend_setColunmGap_void_ev_real64_Callback)(_in ev_real64 colunmGap);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Carto_CLegend_getColunmGap_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegend_setColumnCount_void_ev_int32_Callback)(_in const ev_int32 count);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Carto_CLegend_getColumnCount_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegend_setLegendItem_void_ILegendItemVector_Callback)(_in const EarthView::World::Spatial::Carto::ILegendItemVector* pItemVector);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegend_clearLegendItem_void_Callback)();
				typedef EarthView::World::Spatial::Carto::ILegendItemVector*  ( _stdcall EarthView_World_Spatial_Carto_CLegend_getLegendItems_ILegendItemVector_Callback)();
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Carto_CLegend_getEnvelope_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegend_setEnvelope_void_IEnvelope_Callback)(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CLegend_isSelected_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegend_setSelected_void_ev_bool_Callback)(_in ev_bool b);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CLegend_drawPrepare_ev_bool_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegend_draw_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegend_drawOver_void_Callback)();
				typedef EarthView::World::Spatial::Carto::IElement*  ( _stdcall EarthView_World_Spatial_Carto_CLegend_clone_IElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegend_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_CLegend_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegend_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Carto_CLegend_toXmlElement_CXmlElement_Callback)();
				class CLegendProxy : public EarthView::World::Spatial::Carto::CLegend
				{
				private:
					EarthView_World_Spatial_Carto_CLegend_getElementType_EVElementType_Callback* m_EarthView_World_Spatial_Carto_CLegend_getElementType_EVElementType_Callback;
					EarthView_World_Spatial_Carto_CLegend_setBackgroundColor_void_IColor_Callback* m_EarthView_World_Spatial_Carto_CLegend_setBackgroundColor_void_IColor_Callback;
					EarthView_World_Spatial_Carto_CLegend_getBackgroundColor_IColor_Callback* m_EarthView_World_Spatial_Carto_CLegend_getBackgroundColor_IColor_Callback;
					EarthView_World_Spatial_Carto_CLegend_setDrawBackground_void_bool_Callback* m_EarthView_World_Spatial_Carto_CLegend_setDrawBackground_void_bool_Callback;
					EarthView_World_Spatial_Carto_CLegend_isDrawBackground_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CLegend_isDrawBackground_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CLegend_setShadowColor_void_IColor_Callback* m_EarthView_World_Spatial_Carto_CLegend_setShadowColor_void_IColor_Callback;
					EarthView_World_Spatial_Carto_CLegend_getShadowColor_IColor_Callback* m_EarthView_World_Spatial_Carto_CLegend_getShadowColor_IColor_Callback;
					EarthView_World_Spatial_Carto_CLegend_setDrawShadow_void_bool_Callback* m_EarthView_World_Spatial_Carto_CLegend_setDrawShadow_void_bool_Callback;
					EarthView_World_Spatial_Carto_CLegend_isDrawShadow_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CLegend_isDrawShadow_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CLegend_setDrawFrame_void_bool_Callback* m_EarthView_World_Spatial_Carto_CLegend_setDrawFrame_void_bool_Callback;
					EarthView_World_Spatial_Carto_CLegend_isDrawFrame_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CLegend_isDrawFrame_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CLegend_setFrameSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CLegend_setFrameSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CLegend_getFrameSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CLegend_getFrameSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CLegend_setTitle_void_EVString_Callback* m_EarthView_World_Spatial_Carto_CLegend_setTitle_void_EVString_Callback;
					EarthView_World_Spatial_Carto_CLegend_getTitle_EVString_Callback* m_EarthView_World_Spatial_Carto_CLegend_getTitle_EVString_Callback;
					EarthView_World_Spatial_Carto_CLegend_setTitleSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CLegend_setTitleSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CLegend_getTitleSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CLegend_getTitleSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CLegend_setItemSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CLegend_setItemSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CLegend_getItemSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CLegend_getItemSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CLegend_setTitleAlignment_void_LegendTitleAlignment_Callback* m_EarthView_World_Spatial_Carto_CLegend_setTitleAlignment_void_LegendTitleAlignment_Callback;
					EarthView_World_Spatial_Carto_CLegend_getTitleAlignment_LegendTitleAlignment_Callback* m_EarthView_World_Spatial_Carto_CLegend_getTitleAlignment_LegendTitleAlignment_Callback;
					EarthView_World_Spatial_Carto_CLegend_setRowGap_void_ev_real64_Callback* m_EarthView_World_Spatial_Carto_CLegend_setRowGap_void_ev_real64_Callback;
					EarthView_World_Spatial_Carto_CLegend_getRowGap_ev_real64_Callback* m_EarthView_World_Spatial_Carto_CLegend_getRowGap_ev_real64_Callback;
					EarthView_World_Spatial_Carto_CLegend_setColunmGap_void_ev_real64_Callback* m_EarthView_World_Spatial_Carto_CLegend_setColunmGap_void_ev_real64_Callback;
					EarthView_World_Spatial_Carto_CLegend_getColunmGap_ev_real64_Callback* m_EarthView_World_Spatial_Carto_CLegend_getColunmGap_ev_real64_Callback;
					EarthView_World_Spatial_Carto_CLegend_setColumnCount_void_ev_int32_Callback* m_EarthView_World_Spatial_Carto_CLegend_setColumnCount_void_ev_int32_Callback;
					EarthView_World_Spatial_Carto_CLegend_getColumnCount_ev_int32_Callback* m_EarthView_World_Spatial_Carto_CLegend_getColumnCount_ev_int32_Callback;
					EarthView_World_Spatial_Carto_CLegend_setLegendItem_void_ILegendItemVector_Callback* m_EarthView_World_Spatial_Carto_CLegend_setLegendItem_void_ILegendItemVector_Callback;
					EarthView_World_Spatial_Carto_CLegend_clearLegendItem_void_Callback* m_EarthView_World_Spatial_Carto_CLegend_clearLegendItem_void_Callback;
					EarthView_World_Spatial_Carto_CLegend_getLegendItems_ILegendItemVector_Callback* m_EarthView_World_Spatial_Carto_CLegend_getLegendItems_ILegendItemVector_Callback;
					EarthView_World_Spatial_Carto_CLegend_getEnvelope_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_CLegend_getEnvelope_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_CLegend_setEnvelope_void_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_CLegend_setEnvelope_void_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_CLegend_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CLegend_isSelected_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CLegend_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CLegend_setSelected_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CLegend_drawPrepare_ev_bool_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Carto_CLegend_drawPrepare_ev_bool_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Carto_CLegend_draw_void_Callback* m_EarthView_World_Spatial_Carto_CLegend_draw_void_Callback;
					EarthView_World_Spatial_Carto_CLegend_drawOver_void_Callback* m_EarthView_World_Spatial_Carto_CLegend_drawOver_void_Callback;
					EarthView_World_Spatial_Carto_CLegend_clone_IElement_Callback* m_EarthView_World_Spatial_Carto_CLegend_clone_IElement_Callback;
					EarthView_World_Spatial_Carto_CLegend_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_CLegend_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Carto_CLegend_toXML_EVString_Callback* m_EarthView_World_Spatial_Carto_CLegend_toXML_EVString_Callback;
					EarthView_World_Spatial_Carto_CLegend_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_CLegend_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_CLegend_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_CLegend_toXmlElement_CXmlElement_Callback;
				public:
					CLegendProxy(EarthView::World::Core::CNameValuePairList *pList) : CLegend(pList)
					{
						m_EarthView_World_Spatial_Carto_CLegend_getElementType_EVElementType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_setBackgroundColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_getBackgroundColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_setDrawBackground_void_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_isDrawBackground_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_setShadowColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_getShadowColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_setDrawShadow_void_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_isDrawShadow_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_setDrawFrame_void_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_isDrawFrame_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_setFrameSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_getFrameSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_setTitle_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_getTitle_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_setTitleSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_getTitleSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_setItemSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_getItemSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_setTitleAlignment_void_LegendTitleAlignment_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_getTitleAlignment_LegendTitleAlignment_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_setRowGap_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_getRowGap_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_setColunmGap_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_getColunmGap_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_setColumnCount_void_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_getColumnCount_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_setLegendItem_void_ILegendItemVector_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_clearLegendItem_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_getLegendItems_ILegendItemVector_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_getEnvelope_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_setEnvelope_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_isSelected_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_setSelected_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_drawPrepare_ev_bool_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_draw_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_drawOver_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_clone_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegend_toXmlElement_CXmlElement_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CLegendProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_getElementType_EVElementType(EarthView_World_Spatial_Carto_CLegend_getElementType_EVElementType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_getElementType_EVElementType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_setBackgroundColor_void_IColor(EarthView_World_Spatial_Carto_CLegend_setBackgroundColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_setBackgroundColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_getBackgroundColor_IColor(EarthView_World_Spatial_Carto_CLegend_getBackgroundColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_getBackgroundColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_setDrawBackground_void_bool(EarthView_World_Spatial_Carto_CLegend_setDrawBackground_void_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_setDrawBackground_void_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_isDrawBackground_ev_bool(EarthView_World_Spatial_Carto_CLegend_isDrawBackground_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_isDrawBackground_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_setShadowColor_void_IColor(EarthView_World_Spatial_Carto_CLegend_setShadowColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_setShadowColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_getShadowColor_IColor(EarthView_World_Spatial_Carto_CLegend_getShadowColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_getShadowColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_setDrawShadow_void_bool(EarthView_World_Spatial_Carto_CLegend_setDrawShadow_void_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_setDrawShadow_void_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_isDrawShadow_ev_bool(EarthView_World_Spatial_Carto_CLegend_isDrawShadow_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_isDrawShadow_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_setDrawFrame_void_bool(EarthView_World_Spatial_Carto_CLegend_setDrawFrame_void_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_setDrawFrame_void_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_isDrawFrame_ev_bool(EarthView_World_Spatial_Carto_CLegend_isDrawFrame_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_isDrawFrame_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_setFrameSymbol_void_ISymbol(EarthView_World_Spatial_Carto_CLegend_setFrameSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_setFrameSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_getFrameSymbol_ISymbol(EarthView_World_Spatial_Carto_CLegend_getFrameSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_getFrameSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_setTitle_void_EVString(EarthView_World_Spatial_Carto_CLegend_setTitle_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_setTitle_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_getTitle_EVString(EarthView_World_Spatial_Carto_CLegend_getTitle_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_getTitle_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_setTitleSymbol_void_ISymbol(EarthView_World_Spatial_Carto_CLegend_setTitleSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_setTitleSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_getTitleSymbol_ISymbol(EarthView_World_Spatial_Carto_CLegend_getTitleSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_getTitleSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_setItemSymbol_void_ISymbol(EarthView_World_Spatial_Carto_CLegend_setItemSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_setItemSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_getItemSymbol_ISymbol(EarthView_World_Spatial_Carto_CLegend_getItemSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_getItemSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_setTitleAlignment_void_LegendTitleAlignment(EarthView_World_Spatial_Carto_CLegend_setTitleAlignment_void_LegendTitleAlignment_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_setTitleAlignment_void_LegendTitleAlignment_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_getTitleAlignment_LegendTitleAlignment(EarthView_World_Spatial_Carto_CLegend_getTitleAlignment_LegendTitleAlignment_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_getTitleAlignment_LegendTitleAlignment_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_setRowGap_void_ev_real64(EarthView_World_Spatial_Carto_CLegend_setRowGap_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_setRowGap_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_getRowGap_ev_real64(EarthView_World_Spatial_Carto_CLegend_getRowGap_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_getRowGap_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_setColunmGap_void_ev_real64(EarthView_World_Spatial_Carto_CLegend_setColunmGap_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_setColunmGap_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_getColunmGap_ev_real64(EarthView_World_Spatial_Carto_CLegend_getColunmGap_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_getColunmGap_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_setColumnCount_void_ev_int32(EarthView_World_Spatial_Carto_CLegend_setColumnCount_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_setColumnCount_void_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_getColumnCount_ev_int32(EarthView_World_Spatial_Carto_CLegend_getColumnCount_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_getColumnCount_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_setLegendItem_void_ILegendItemVector(EarthView_World_Spatial_Carto_CLegend_setLegendItem_void_ILegendItemVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_setLegendItem_void_ILegendItemVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_clearLegendItem_void(EarthView_World_Spatial_Carto_CLegend_clearLegendItem_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_clearLegendItem_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_getLegendItems_ILegendItemVector(EarthView_World_Spatial_Carto_CLegend_getLegendItems_ILegendItemVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_getLegendItems_ILegendItemVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_getEnvelope_IEnvelope(EarthView_World_Spatial_Carto_CLegend_getEnvelope_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_getEnvelope_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_setEnvelope_void_IEnvelope(EarthView_World_Spatial_Carto_CLegend_setEnvelope_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_setEnvelope_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_isSelected_ev_bool(EarthView_World_Spatial_Carto_CLegend_isSelected_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_isSelected_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_setSelected_void_ev_bool(EarthView_World_Spatial_Carto_CLegend_setSelected_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_setSelected_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_drawPrepare_ev_bool_ISpatialDisplay(EarthView_World_Spatial_Carto_CLegend_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_drawPrepare_ev_bool_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_draw_void(EarthView_World_Spatial_Carto_CLegend_draw_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_draw_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_drawOver_void(EarthView_World_Spatial_Carto_CLegend_drawOver_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_drawOver_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_clone_IElement(EarthView_World_Spatial_Carto_CLegend_clone_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_clone_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_toStream_void_CDataStream(EarthView_World_Spatial_Carto_CLegend_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_toXML_EVString(EarthView_World_Spatial_Carto_CLegend_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Carto_CLegend_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegend_toXmlElement_CXmlElement(EarthView_World_Spatial_Carto_CLegend_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegend_toXmlElement_CXmlElement_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Carto::EVElementType getElementType() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_getElementType_EVElementType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::EVElementType returnValue = (EarthView::World::Spatial::Carto::EVElementType)m_EarthView_World_Spatial_Carto_CLegend_getElementType_EVElementType_Callback();
							return returnValue;
						}
						else
							return this->CLegend::getElementType();
					}
					virtual void setBackgroundColor(_in const EarthView::World::Spatial::Display::IColor* pColor)
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_setBackgroundColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegend_setBackgroundColor_void_IColor_Callback(pColor);
						}
						else
							return this->CLegend::setBackgroundColor(pColor);
					}
					virtual EarthView::World::Spatial::Display::IColor* getBackgroundColor() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_getBackgroundColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Carto_CLegend_getBackgroundColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CLegend::getBackgroundColor();
					}
					virtual void setDrawBackground(_in bool bDraw)
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_setDrawBackground_void_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegend_setDrawBackground_void_bool_Callback(bDraw);
						}
						else
							return this->CLegend::setDrawBackground(bDraw);
					}
					virtual ev_bool isDrawBackground() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_isDrawBackground_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CLegend_isDrawBackground_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLegend::isDrawBackground();
					}
					virtual void setShadowColor(_in const EarthView::World::Spatial::Display::IColor* pColor)
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_setShadowColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegend_setShadowColor_void_IColor_Callback(pColor);
						}
						else
							return this->CLegend::setShadowColor(pColor);
					}
					virtual EarthView::World::Spatial::Display::IColor* getShadowColor() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_getShadowColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Carto_CLegend_getShadowColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CLegend::getShadowColor();
					}
					virtual void setDrawShadow(_in bool bDraw)
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_setDrawShadow_void_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegend_setDrawShadow_void_bool_Callback(bDraw);
						}
						else
							return this->CLegend::setDrawShadow(bDraw);
					}
					virtual ev_bool isDrawShadow() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_isDrawShadow_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CLegend_isDrawShadow_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLegend::isDrawShadow();
					}
					virtual void setDrawFrame(_in bool bDraw)
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_setDrawFrame_void_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegend_setDrawFrame_void_bool_Callback(bDraw);
						}
						else
							return this->CLegend::setDrawFrame(bDraw);
					}
					virtual ev_bool isDrawFrame() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_isDrawFrame_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CLegend_isDrawFrame_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLegend::isDrawFrame();
					}
					virtual void setFrameSymbol(_in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_setFrameSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegend_setFrameSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->CLegend::setFrameSymbol(symbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getFrameSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_getFrameSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_CLegend_getFrameSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CLegend::getFrameSymbol();
					}
					virtual void setTitle(_in const EVString& strTitle)
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_setTitle_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* strTitle_Char = strTitle.makeBuffer();
							m_EarthView_World_Spatial_Carto_CLegend_setTitle_void_EVString_Callback(strTitle_Char);
						}
						else
							return this->CLegend::setTitle(strTitle);
					}
					virtual EVString getTitle() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_getTitle_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_CLegend_getTitle_EVString_Callback();
							return returnValue;
						}
						else
							return this->CLegend::getTitle();
					}
					virtual void setTitleSymbol(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_setTitleSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegend_setTitleSymbol_void_ISymbol_Callback(pSymbol);
						}
						else
							return this->CLegend::setTitleSymbol(pSymbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getTitleSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_getTitleSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_CLegend_getTitleSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CLegend::getTitleSymbol();
					}
					virtual void setItemSymbol(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_setItemSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegend_setItemSymbol_void_ISymbol_Callback(pSymbol);
						}
						else
							return this->CLegend::setItemSymbol(pSymbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getItemSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_getItemSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_CLegend_getItemSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CLegend::getItemSymbol();
					}
					virtual void setTitleAlignment(_in EarthView::World::Spatial::Carto::LegendTitleAlignment alignment)
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_setTitleAlignment_void_LegendTitleAlignment_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegend_setTitleAlignment_void_LegendTitleAlignment_Callback((int)alignment);
						}
						else
							return this->CLegend::setTitleAlignment(alignment);
					}
					virtual EarthView::World::Spatial::Carto::LegendTitleAlignment getTitleAlignment() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_getTitleAlignment_LegendTitleAlignment_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::LegendTitleAlignment returnValue = (EarthView::World::Spatial::Carto::LegendTitleAlignment)m_EarthView_World_Spatial_Carto_CLegend_getTitleAlignment_LegendTitleAlignment_Callback();
							return returnValue;
						}
						else
							return this->CLegend::getTitleAlignment();
					}
					virtual void setRowGap(_in ev_real64 rowGap)
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_setRowGap_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegend_setRowGap_void_ev_real64_Callback(rowGap);
						}
						else
							return this->CLegend::setRowGap(rowGap);
					}
					virtual ev_real64 getRowGap() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_getRowGap_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Carto_CLegend_getRowGap_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CLegend::getRowGap();
					}
					virtual void setColunmGap(_in ev_real64 colunmGap)
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_setColunmGap_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegend_setColunmGap_void_ev_real64_Callback(colunmGap);
						}
						else
							return this->CLegend::setColunmGap(colunmGap);
					}
					virtual ev_real64 getColunmGap() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_getColunmGap_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Carto_CLegend_getColunmGap_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CLegend::getColunmGap();
					}
					virtual void setColumnCount(_in const ev_int32 count)
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_setColumnCount_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegend_setColumnCount_void_ev_int32_Callback(count);
						}
						else
							return this->CLegend::setColumnCount(count);
					}
					virtual ev_int32 getColumnCount() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_getColumnCount_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Carto_CLegend_getColumnCount_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CLegend::getColumnCount();
					}
					virtual void setLegendItem(_in const EarthView::World::Spatial::Carto::ILegendItemVector* pItemVector)
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_setLegendItem_void_ILegendItemVector_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegend_setLegendItem_void_ILegendItemVector_Callback(pItemVector);
						}
						else
							return this->CLegend::setLegendItem(pItemVector);
					}
					virtual void clearLegendItem()
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_clearLegendItem_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegend_clearLegendItem_void_Callback();
						}
						else
							return this->CLegend::clearLegendItem();
					}
					virtual EarthView::World::Spatial::Carto::ILegendItemVector* getLegendItems() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_getLegendItems_ILegendItemVector_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::ILegendItemVector* returnValue = m_EarthView_World_Spatial_Carto_CLegend_getLegendItems_ILegendItemVector_Callback();
							return returnValue;
						}
						else
							return this->CLegend::getLegendItems();
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_getEnvelope_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Carto_CLegend_getEnvelope_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CLegend::getEnvelope();
					}
					virtual void setEnvelope(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope)
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_setEnvelope_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegend_setEnvelope_void_IEnvelope_Callback(pEnvelope);
						}
						else
							return this->CLegend::setEnvelope(pEnvelope);
					}
					virtual ev_bool isSelected()
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CLegend_isSelected_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLegend::isSelected();
					}
					virtual void setSelected(_in ev_bool b)
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegend_setSelected_void_ev_bool_Callback(b);
						}
						else
							return this->CLegend::setSelected(b);
					}
					virtual ev_bool drawPrepare(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay)
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_drawPrepare_ev_bool_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CLegend_drawPrepare_ev_bool_ISpatialDisplay_Callback(pDisplay);
							return returnValue;
						}
						else
							return this->CLegend::drawPrepare(pDisplay);
					}
					virtual void draw()
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_draw_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegend_draw_void_Callback();
						}
						else
							return this->CLegend::draw();
					}
					virtual void drawOver()
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_drawOver_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegend_drawOver_void_Callback();
						}
						else
							return this->CLegend::drawOver();
					}
					virtual EarthView::World::Spatial::Carto::IElement* clone() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_clone_IElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::IElement* returnValue = m_EarthView_World_Spatial_Carto_CLegend_clone_IElement_Callback();
							return returnValue;
						}
						else
							return this->CLegend::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegend_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CLegend::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_CLegend_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CLegend::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegend_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CLegend::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegend_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Carto_CLegend_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CLegend::toXmlElement();
					}
				};
				REGISTER_FACTORY_CLASS(CLegendProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CLegend_getElementType_EVElementType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::getElementType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->getElementType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_getElementType_EVElementType( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_getElementType_EVElementType_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_getElementType_EVElementType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CLegend_getElementType_EVElementType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::getElementType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setBackgroundColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setBackgroundColor(pColor);
					else
						ptrNativeObject->setBackgroundColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_setBackgroundColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_setBackgroundColor_void_IColor_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_setBackgroundColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setBackgroundColor_void_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setBackgroundColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_CLegend_getBackgroundColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::getBackgroundColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getBackgroundColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_getBackgroundColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_getBackgroundColor_IColor_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_getBackgroundColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_CLegend_getBackgroundColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::getBackgroundColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setDrawBackground_void_bool(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setDrawBackground(bDraw);
					else
						ptrNativeObject->setDrawBackground(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_setDrawBackground_void_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_setDrawBackground_void_bool_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_setDrawBackground_void_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setDrawBackground_void_bool_NoVirtual(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setDrawBackground(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CLegend_isDrawBackground_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::isDrawBackground();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawBackground();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_isDrawBackground_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_isDrawBackground_ev_bool_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_isDrawBackground_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CLegend_isDrawBackground_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::isDrawBackground();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setShadowColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setShadowColor(pColor);
					else
						ptrNativeObject->setShadowColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_setShadowColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_setShadowColor_void_IColor_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_setShadowColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setShadowColor_void_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setShadowColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_CLegend_getShadowColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::getShadowColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getShadowColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_getShadowColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_getShadowColor_IColor_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_getShadowColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_CLegend_getShadowColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::getShadowColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setDrawShadow_void_bool(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setDrawShadow(bDraw);
					else
						ptrNativeObject->setDrawShadow(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_setDrawShadow_void_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_setDrawShadow_void_bool_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_setDrawShadow_void_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setDrawShadow_void_bool_NoVirtual(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setDrawShadow(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CLegend_isDrawShadow_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::isDrawShadow();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawShadow();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_isDrawShadow_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_isDrawShadow_ev_bool_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_isDrawShadow_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CLegend_isDrawShadow_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::isDrawShadow();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setDrawFrame_void_bool(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setDrawFrame(bDraw);
					else
						ptrNativeObject->setDrawFrame(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_setDrawFrame_void_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_setDrawFrame_void_bool_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_setDrawFrame_void_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setDrawFrame_void_bool_NoVirtual(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setDrawFrame(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CLegend_isDrawFrame_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::isDrawFrame();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawFrame();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_isDrawFrame_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_isDrawFrame_ev_bool_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_isDrawFrame_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CLegend_isDrawFrame_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::isDrawFrame();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setFrameSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setFrameSymbol(symbol);
					else
						ptrNativeObject->setFrameSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_setFrameSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_setFrameSymbol_void_ISymbol_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_setFrameSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setFrameSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setFrameSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_CLegend_getFrameSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::getFrameSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getFrameSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_getFrameSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_getFrameSymbol_ISymbol_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_getFrameSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_CLegend_getFrameSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::getFrameSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setTitle_void_EVString(void *pObjectXXXX, _in const char* strTitle )
				{
					EarthView::World::Core::ev_string strTitle1 = strTitle;
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setTitle(strTitle1);
					else
						ptrNativeObject->setTitle(strTitle1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_setTitle_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_setTitle_void_EVString_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_setTitle_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setTitle_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* strTitle )
				{
					EarthView::World::Core::ev_string strTitle1 = strTitle;
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setTitle(strTitle1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CLegend_getTitle_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::getTitle();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getTitle();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_getTitle_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_getTitle_EVString_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_getTitle_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CLegend_getTitle_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::getTitle();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setTitleSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setTitleSymbol(pSymbol);
					else
						ptrNativeObject->setTitleSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_setTitleSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_setTitleSymbol_void_ISymbol_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_setTitleSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setTitleSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setTitleSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_CLegend_getTitleSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::getTitleSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getTitleSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_getTitleSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_getTitleSymbol_ISymbol_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_getTitleSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_CLegend_getTitleSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::getTitleSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setItemSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setItemSymbol(pSymbol);
					else
						ptrNativeObject->setItemSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_setItemSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_setItemSymbol_void_ISymbol_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_setItemSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setItemSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setItemSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_CLegend_getItemSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::getItemSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getItemSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_getItemSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_getItemSymbol_ISymbol_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_getItemSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_CLegend_getItemSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::getItemSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setTitleAlignment_void_LegendTitleAlignment(void *pObjectXXXX, _in int alignment )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setTitleAlignment((EarthView::World::Spatial::Carto::LegendTitleAlignment)alignment);
					else
						ptrNativeObject->setTitleAlignment((EarthView::World::Spatial::Carto::LegendTitleAlignment)alignment);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_setTitleAlignment_void_LegendTitleAlignment( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_setTitleAlignment_void_LegendTitleAlignment_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_setTitleAlignment_void_LegendTitleAlignment(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setTitleAlignment_void_LegendTitleAlignment_NoVirtual(void *pObjectXXXX, _in int alignment )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setTitleAlignment((EarthView::World::Spatial::Carto::LegendTitleAlignment)alignment);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CLegend_getTitleAlignment_LegendTitleAlignment(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::LegendTitleAlignment objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::getTitleAlignment();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::LegendTitleAlignment objXXXX = ptrNativeObject->getTitleAlignment();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_getTitleAlignment_LegendTitleAlignment( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_getTitleAlignment_LegendTitleAlignment_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_getTitleAlignment_LegendTitleAlignment(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CLegend_getTitleAlignment_LegendTitleAlignment_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					EarthView::World::Spatial::Carto::LegendTitleAlignment objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::getTitleAlignment();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setRowGap_void_ev_real64(void *pObjectXXXX, _in ev_real64 rowGap )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setRowGap(rowGap);
					else
						ptrNativeObject->setRowGap(rowGap);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_setRowGap_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_setRowGap_void_ev_real64_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_setRowGap_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setRowGap_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 rowGap )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setRowGap(rowGap);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_CLegend_getRowGap_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::getRowGap();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getRowGap();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_getRowGap_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_getRowGap_ev_real64_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_getRowGap_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_CLegend_getRowGap_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::getRowGap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setColunmGap_void_ev_real64(void *pObjectXXXX, _in ev_real64 colunmGap )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setColunmGap(colunmGap);
					else
						ptrNativeObject->setColunmGap(colunmGap);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_setColunmGap_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_setColunmGap_void_ev_real64_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_setColunmGap_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setColunmGap_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 colunmGap )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setColunmGap(colunmGap);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_CLegend_getColunmGap_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::getColunmGap();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getColunmGap();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_getColunmGap_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_getColunmGap_ev_real64_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_getColunmGap_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_CLegend_getColunmGap_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::getColunmGap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setColumnCount_void_ev_int32(void *pObjectXXXX, _in const ev_int32 count )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setColumnCount(count);
					else
						ptrNativeObject->setColumnCount(count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_setColumnCount_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_setColumnCount_void_ev_int32_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_setColumnCount_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setColumnCount_void_ev_int32_NoVirtual(void *pObjectXXXX, _in const ev_int32 count )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setColumnCount(count);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_CLegend_getColumnCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::getColumnCount();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getColumnCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_getColumnCount_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_getColumnCount_ev_int32_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_getColumnCount_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_CLegend_getColumnCount_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::getColumnCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setLegendItem_void_ILegendItemVector(void *pObjectXXXX, _in const EarthView::World::Spatial::Carto::ILegendItemVector* pItemVector )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setLegendItem(pItemVector);
					else
						ptrNativeObject->setLegendItem(pItemVector);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_setLegendItem_void_ILegendItemVector( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_setLegendItem_void_ILegendItemVector_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_setLegendItem_void_ILegendItemVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setLegendItem_void_ILegendItemVector_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Carto::ILegendItemVector* pItemVector )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setLegendItem(pItemVector);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_clearLegendItem_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::clearLegendItem();
					else
						ptrNativeObject->clearLegendItem();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_clearLegendItem_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_clearLegendItem_void_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_clearLegendItem_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_clearLegendItem_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::clearLegendItem();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::ILegendItemVector*  _stdcall EarthView_World_Spatial_Carto_CLegend_getLegendItems_ILegendItemVector(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::ILegendItemVector* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::getLegendItems();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::ILegendItemVector* objXXXX = ptrNativeObject->getLegendItems();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_getLegendItems_ILegendItemVector( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_getLegendItems_ILegendItemVector_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_getLegendItems_ILegendItemVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::ILegendItemVector*  _stdcall EarthView_World_Spatial_Carto_CLegend_getLegendItems_ILegendItemVector_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					EarthView::World::Spatial::Carto::ILegendItemVector* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::getLegendItems();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_CLegend_getEnvelope_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::getEnvelope();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelope();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_getEnvelope_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_getEnvelope_IEnvelope_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_getEnvelope_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_CLegend_getEnvelope_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::getEnvelope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setEnvelope_void_IEnvelope(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setEnvelope(pEnvelope);
					else
						ptrNativeObject->setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_setEnvelope_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_setEnvelope_void_IEnvelope_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_setEnvelope_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setEnvelope_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CLegend_isSelected_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::isSelected();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelected();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_isSelected_ev_bool_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_isSelected_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CLegend_isSelected_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::isSelected();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool b )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setSelected(b);
					else
						ptrNativeObject->setSelected(b);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_setSelected_void_ev_bool_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_setSelected_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_setSelected_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool b )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::setSelected(b);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CLegend_drawPrepare_ev_bool_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::drawPrepare(pDisplay);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->drawPrepare(pDisplay);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_drawPrepare_ev_bool_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_drawPrepare_ev_bool_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CLegend_drawPrepare_ev_bool_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::drawPrepare(pDisplay);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_draw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::draw();
					else
						ptrNativeObject->draw();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_draw_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_draw_void_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_draw_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_draw_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::draw();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_drawOver_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::drawOver();
					else
						ptrNativeObject->drawOver();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_drawOver_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_drawOver_void_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_drawOver_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_drawOver_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::drawOver();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_CLegend_clone_IElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_clone_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_clone_IElement_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_clone_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_CLegend_clone_IElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_toStream_void_CDataStream_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CLegend_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_toXML_EVString_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CLegend_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_CLegend_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					if (dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegend_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegend_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CLegendProxy* ptr = dynamic_cast<CLegendProxy*>((EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegend_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_CLegend_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegend::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegend_fromStream_void_CDataStream(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::CLegend* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegend*) pObjectXXXX;
					ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
			}
		}
	}
}
