/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ilegend.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ILegend_setBackgroundColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* pColor);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Carto_ILegend_getBackgroundColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ILegend_setDrawBackground_void_bool_Callback)(_in bool bDraw);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_ILegend_isDrawBackground_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ILegend_setShadowColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* pColor);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Carto_ILegend_getShadowColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ILegend_setDrawShadow_void_bool_Callback)(_in bool bDraw);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_ILegend_isDrawShadow_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ILegend_setDrawFrame_void_bool_Callback)(_in bool bDraw);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_ILegend_isDrawFrame_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ILegend_setFrameSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_ILegend_getFrameSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ILegend_setTitle_void_EVString_Callback)(_in char*& strTitle);
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_ILegend_getTitle_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ILegend_setTitleSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_ILegend_getTitleSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ILegend_setItemSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_ILegend_getItemSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ILegend_setTitleAlignment_void_LegendTitleAlignment_Callback)(_in int alignment);
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_ILegend_getTitleAlignment_LegendTitleAlignment_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ILegend_setRowGap_void_ev_real64_Callback)(_in ev_real64 rowGap);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Carto_ILegend_getRowGap_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ILegend_setColunmGap_void_ev_real64_Callback)(_in ev_real64 colunmGap);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Carto_ILegend_getColunmGap_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ILegend_setColumnCount_void_ev_int32_Callback)(_in const ev_int32 count);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Carto_ILegend_getColumnCount_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ILegend_setLegendItem_void_ILegendItemVector_Callback)(_in const EarthView::World::Spatial::Carto::ILegendItemVector* pItemVector);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ILegend_clearLegendItem_void_Callback)();
				typedef EarthView::World::Spatial::Carto::ILegendItemVector*  ( _stdcall EarthView_World_Spatial_Carto_ILegend_getLegendItems_ILegendItemVector_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_ILegend_getElementType_EVElementType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_ILegend_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ILegend_setName_void_EVString_Callback)(_in char*& name);
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Carto_ILegend_getEnvelope_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ILegend_setEnvelope_void_IEnvelope_Callback)(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_ILegend_isSelected_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ILegend_setSelected_void_ev_bool_Callback)(_in ev_bool bSelected);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_ILegend_drawPrepare_ev_bool_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ILegend_draw_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ILegend_drawOver_void_Callback)();
				typedef EarthView::World::Spatial::Carto::IElement*  ( _stdcall EarthView_World_Spatial_Carto_ILegend_clone_IElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ILegend_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_ILegend_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ILegend_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Carto_ILegend_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ILegend_fromStream_void_CDataStream_Callback)(_in void* stream);
				class ILegendProxy : public EarthView::World::Spatial::Carto::ILegend
				{
				private:
					EarthView_World_Spatial_Carto_ILegend_setBackgroundColor_void_IColor_Callback* m_EarthView_World_Spatial_Carto_ILegend_setBackgroundColor_void_IColor_Callback;
					EarthView_World_Spatial_Carto_ILegend_getBackgroundColor_IColor_Callback* m_EarthView_World_Spatial_Carto_ILegend_getBackgroundColor_IColor_Callback;
					EarthView_World_Spatial_Carto_ILegend_setDrawBackground_void_bool_Callback* m_EarthView_World_Spatial_Carto_ILegend_setDrawBackground_void_bool_Callback;
					EarthView_World_Spatial_Carto_ILegend_isDrawBackground_ev_bool_Callback* m_EarthView_World_Spatial_Carto_ILegend_isDrawBackground_ev_bool_Callback;
					EarthView_World_Spatial_Carto_ILegend_setShadowColor_void_IColor_Callback* m_EarthView_World_Spatial_Carto_ILegend_setShadowColor_void_IColor_Callback;
					EarthView_World_Spatial_Carto_ILegend_getShadowColor_IColor_Callback* m_EarthView_World_Spatial_Carto_ILegend_getShadowColor_IColor_Callback;
					EarthView_World_Spatial_Carto_ILegend_setDrawShadow_void_bool_Callback* m_EarthView_World_Spatial_Carto_ILegend_setDrawShadow_void_bool_Callback;
					EarthView_World_Spatial_Carto_ILegend_isDrawShadow_ev_bool_Callback* m_EarthView_World_Spatial_Carto_ILegend_isDrawShadow_ev_bool_Callback;
					EarthView_World_Spatial_Carto_ILegend_setDrawFrame_void_bool_Callback* m_EarthView_World_Spatial_Carto_ILegend_setDrawFrame_void_bool_Callback;
					EarthView_World_Spatial_Carto_ILegend_isDrawFrame_ev_bool_Callback* m_EarthView_World_Spatial_Carto_ILegend_isDrawFrame_ev_bool_Callback;
					EarthView_World_Spatial_Carto_ILegend_setFrameSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_ILegend_setFrameSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_ILegend_getFrameSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_ILegend_getFrameSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_ILegend_setTitle_void_EVString_Callback* m_EarthView_World_Spatial_Carto_ILegend_setTitle_void_EVString_Callback;
					EarthView_World_Spatial_Carto_ILegend_getTitle_EVString_Callback* m_EarthView_World_Spatial_Carto_ILegend_getTitle_EVString_Callback;
					EarthView_World_Spatial_Carto_ILegend_setTitleSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_ILegend_setTitleSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_ILegend_getTitleSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_ILegend_getTitleSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_ILegend_setItemSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_ILegend_setItemSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_ILegend_getItemSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_ILegend_getItemSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_ILegend_setTitleAlignment_void_LegendTitleAlignment_Callback* m_EarthView_World_Spatial_Carto_ILegend_setTitleAlignment_void_LegendTitleAlignment_Callback;
					EarthView_World_Spatial_Carto_ILegend_getTitleAlignment_LegendTitleAlignment_Callback* m_EarthView_World_Spatial_Carto_ILegend_getTitleAlignment_LegendTitleAlignment_Callback;
					EarthView_World_Spatial_Carto_ILegend_setRowGap_void_ev_real64_Callback* m_EarthView_World_Spatial_Carto_ILegend_setRowGap_void_ev_real64_Callback;
					EarthView_World_Spatial_Carto_ILegend_getRowGap_ev_real64_Callback* m_EarthView_World_Spatial_Carto_ILegend_getRowGap_ev_real64_Callback;
					EarthView_World_Spatial_Carto_ILegend_setColunmGap_void_ev_real64_Callback* m_EarthView_World_Spatial_Carto_ILegend_setColunmGap_void_ev_real64_Callback;
					EarthView_World_Spatial_Carto_ILegend_getColunmGap_ev_real64_Callback* m_EarthView_World_Spatial_Carto_ILegend_getColunmGap_ev_real64_Callback;
					EarthView_World_Spatial_Carto_ILegend_setColumnCount_void_ev_int32_Callback* m_EarthView_World_Spatial_Carto_ILegend_setColumnCount_void_ev_int32_Callback;
					EarthView_World_Spatial_Carto_ILegend_getColumnCount_ev_int32_Callback* m_EarthView_World_Spatial_Carto_ILegend_getColumnCount_ev_int32_Callback;
					EarthView_World_Spatial_Carto_ILegend_setLegendItem_void_ILegendItemVector_Callback* m_EarthView_World_Spatial_Carto_ILegend_setLegendItem_void_ILegendItemVector_Callback;
					EarthView_World_Spatial_Carto_ILegend_clearLegendItem_void_Callback* m_EarthView_World_Spatial_Carto_ILegend_clearLegendItem_void_Callback;
					EarthView_World_Spatial_Carto_ILegend_getLegendItems_ILegendItemVector_Callback* m_EarthView_World_Spatial_Carto_ILegend_getLegendItems_ILegendItemVector_Callback;
					EarthView_World_Spatial_Carto_ILegend_getElementType_EVElementType_Callback* m_EarthView_World_Spatial_Carto_ILegend_getElementType_EVElementType_Callback;
					EarthView_World_Spatial_Carto_ILegend_getName_EVString_Callback* m_EarthView_World_Spatial_Carto_ILegend_getName_EVString_Callback;
					EarthView_World_Spatial_Carto_ILegend_setName_void_EVString_Callback* m_EarthView_World_Spatial_Carto_ILegend_setName_void_EVString_Callback;
					EarthView_World_Spatial_Carto_ILegend_getEnvelope_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_ILegend_getEnvelope_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_ILegend_setEnvelope_void_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_ILegend_setEnvelope_void_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_ILegend_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_Carto_ILegend_isSelected_ev_bool_Callback;
					EarthView_World_Spatial_Carto_ILegend_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_ILegend_setSelected_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_ILegend_drawPrepare_ev_bool_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Carto_ILegend_drawPrepare_ev_bool_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Carto_ILegend_draw_void_Callback* m_EarthView_World_Spatial_Carto_ILegend_draw_void_Callback;
					EarthView_World_Spatial_Carto_ILegend_drawOver_void_Callback* m_EarthView_World_Spatial_Carto_ILegend_drawOver_void_Callback;
					EarthView_World_Spatial_Carto_ILegend_clone_IElement_Callback* m_EarthView_World_Spatial_Carto_ILegend_clone_IElement_Callback;
					EarthView_World_Spatial_Carto_ILegend_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_ILegend_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Carto_ILegend_toXML_EVString_Callback* m_EarthView_World_Spatial_Carto_ILegend_toXML_EVString_Callback;
					EarthView_World_Spatial_Carto_ILegend_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_ILegend_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_ILegend_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_ILegend_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_ILegend_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_ILegend_fromStream_void_CDataStream_Callback;
				public:
					ILegendProxy(EarthView::World::Core::CNameValuePairList *pList) : ILegend(pList)
					{
						m_EarthView_World_Spatial_Carto_ILegend_setBackgroundColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_getBackgroundColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_setDrawBackground_void_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_isDrawBackground_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_setShadowColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_getShadowColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_setDrawShadow_void_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_isDrawShadow_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_setDrawFrame_void_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_isDrawFrame_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_setFrameSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_getFrameSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_setTitle_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_getTitle_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_setTitleSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_getTitleSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_setItemSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_getItemSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_setTitleAlignment_void_LegendTitleAlignment_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_getTitleAlignment_LegendTitleAlignment_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_setRowGap_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_getRowGap_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_setColunmGap_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_getColunmGap_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_setColumnCount_void_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_getColumnCount_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_setLegendItem_void_ILegendItemVector_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_clearLegendItem_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_getLegendItems_ILegendItemVector_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_getElementType_EVElementType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_getEnvelope_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_setEnvelope_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_isSelected_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_setSelected_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_drawPrepare_ev_bool_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_draw_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_drawOver_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_clone_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ILegend_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_setBackgroundColor_void_IColor(EarthView_World_Spatial_Carto_ILegend_setBackgroundColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_setBackgroundColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_getBackgroundColor_IColor(EarthView_World_Spatial_Carto_ILegend_getBackgroundColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_getBackgroundColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_setDrawBackground_void_bool(EarthView_World_Spatial_Carto_ILegend_setDrawBackground_void_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_setDrawBackground_void_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_isDrawBackground_ev_bool(EarthView_World_Spatial_Carto_ILegend_isDrawBackground_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_isDrawBackground_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_setShadowColor_void_IColor(EarthView_World_Spatial_Carto_ILegend_setShadowColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_setShadowColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_getShadowColor_IColor(EarthView_World_Spatial_Carto_ILegend_getShadowColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_getShadowColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_setDrawShadow_void_bool(EarthView_World_Spatial_Carto_ILegend_setDrawShadow_void_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_setDrawShadow_void_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_isDrawShadow_ev_bool(EarthView_World_Spatial_Carto_ILegend_isDrawShadow_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_isDrawShadow_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_setDrawFrame_void_bool(EarthView_World_Spatial_Carto_ILegend_setDrawFrame_void_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_setDrawFrame_void_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_isDrawFrame_ev_bool(EarthView_World_Spatial_Carto_ILegend_isDrawFrame_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_isDrawFrame_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_setFrameSymbol_void_ISymbol(EarthView_World_Spatial_Carto_ILegend_setFrameSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_setFrameSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_getFrameSymbol_ISymbol(EarthView_World_Spatial_Carto_ILegend_getFrameSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_getFrameSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_setTitle_void_EVString(EarthView_World_Spatial_Carto_ILegend_setTitle_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_setTitle_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_getTitle_EVString(EarthView_World_Spatial_Carto_ILegend_getTitle_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_getTitle_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_setTitleSymbol_void_ISymbol(EarthView_World_Spatial_Carto_ILegend_setTitleSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_setTitleSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_getTitleSymbol_ISymbol(EarthView_World_Spatial_Carto_ILegend_getTitleSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_getTitleSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_setItemSymbol_void_ISymbol(EarthView_World_Spatial_Carto_ILegend_setItemSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_setItemSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_getItemSymbol_ISymbol(EarthView_World_Spatial_Carto_ILegend_getItemSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_getItemSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_setTitleAlignment_void_LegendTitleAlignment(EarthView_World_Spatial_Carto_ILegend_setTitleAlignment_void_LegendTitleAlignment_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_setTitleAlignment_void_LegendTitleAlignment_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_getTitleAlignment_LegendTitleAlignment(EarthView_World_Spatial_Carto_ILegend_getTitleAlignment_LegendTitleAlignment_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_getTitleAlignment_LegendTitleAlignment_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_setRowGap_void_ev_real64(EarthView_World_Spatial_Carto_ILegend_setRowGap_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_setRowGap_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_getRowGap_ev_real64(EarthView_World_Spatial_Carto_ILegend_getRowGap_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_getRowGap_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_setColunmGap_void_ev_real64(EarthView_World_Spatial_Carto_ILegend_setColunmGap_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_setColunmGap_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_getColunmGap_ev_real64(EarthView_World_Spatial_Carto_ILegend_getColunmGap_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_getColunmGap_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_setColumnCount_void_ev_int32(EarthView_World_Spatial_Carto_ILegend_setColumnCount_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_setColumnCount_void_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_getColumnCount_ev_int32(EarthView_World_Spatial_Carto_ILegend_getColumnCount_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_getColumnCount_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_setLegendItem_void_ILegendItemVector(EarthView_World_Spatial_Carto_ILegend_setLegendItem_void_ILegendItemVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_setLegendItem_void_ILegendItemVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_clearLegendItem_void(EarthView_World_Spatial_Carto_ILegend_clearLegendItem_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_clearLegendItem_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_getLegendItems_ILegendItemVector(EarthView_World_Spatial_Carto_ILegend_getLegendItems_ILegendItemVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_getLegendItems_ILegendItemVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_getElementType_EVElementType(EarthView_World_Spatial_Carto_ILegend_getElementType_EVElementType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_getElementType_EVElementType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_getName_EVString(EarthView_World_Spatial_Carto_ILegend_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_setName_void_EVString(EarthView_World_Spatial_Carto_ILegend_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_getEnvelope_IEnvelope(EarthView_World_Spatial_Carto_ILegend_getEnvelope_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_getEnvelope_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_setEnvelope_void_IEnvelope(EarthView_World_Spatial_Carto_ILegend_setEnvelope_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_setEnvelope_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_isSelected_ev_bool(EarthView_World_Spatial_Carto_ILegend_isSelected_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_isSelected_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_setSelected_void_ev_bool(EarthView_World_Spatial_Carto_ILegend_setSelected_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_setSelected_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_drawPrepare_ev_bool_ISpatialDisplay(EarthView_World_Spatial_Carto_ILegend_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_drawPrepare_ev_bool_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_draw_void(EarthView_World_Spatial_Carto_ILegend_draw_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_draw_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_drawOver_void(EarthView_World_Spatial_Carto_ILegend_drawOver_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_drawOver_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_clone_IElement(EarthView_World_Spatial_Carto_ILegend_clone_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_clone_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_toStream_void_CDataStream(EarthView_World_Spatial_Carto_ILegend_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_toXML_EVString(EarthView_World_Spatial_Carto_ILegend_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Carto_ILegend_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_toXmlElement_CXmlElement(EarthView_World_Spatial_Carto_ILegend_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ILegend_fromStream_void_CDataStream(EarthView_World_Spatial_Carto_ILegend_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ILegend_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Carto::EVElementType getElementType() const
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_getElementType_EVElementType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::EVElementType returnValue = (EarthView::World::Spatial::Carto::EVElementType)m_EarthView_World_Spatial_Carto_ILegend_getElementType_EVElementType_Callback();
							return returnValue;
						}
						else
							return this->ILegend::getElementType();
					}
					virtual void setBackgroundColor(_in const EarthView::World::Spatial::Display::IColor* pColor)
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_setBackgroundColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ILegend_setBackgroundColor_void_IColor_Callback(pColor);
						}
						else
							return this->ILegend::setBackgroundColor(pColor);
					}
					virtual EarthView::World::Spatial::Display::IColor* getBackgroundColor() const
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_getBackgroundColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Carto_ILegend_getBackgroundColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->ILegend::getBackgroundColor();
					}
					virtual void setDrawBackground(_in bool bDraw)
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_setDrawBackground_void_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ILegend_setDrawBackground_void_bool_Callback(bDraw);
						}
						else
							return this->ILegend::setDrawBackground(bDraw);
					}
					virtual ev_bool isDrawBackground() const
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_isDrawBackground_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_ILegend_isDrawBackground_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ILegend::isDrawBackground();
					}
					virtual void setShadowColor(_in const EarthView::World::Spatial::Display::IColor* pColor)
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_setShadowColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ILegend_setShadowColor_void_IColor_Callback(pColor);
						}
						else
							return this->ILegend::setShadowColor(pColor);
					}
					virtual EarthView::World::Spatial::Display::IColor* getShadowColor() const
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_getShadowColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Carto_ILegend_getShadowColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->ILegend::getShadowColor();
					}
					virtual void setDrawShadow(_in bool bDraw)
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_setDrawShadow_void_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ILegend_setDrawShadow_void_bool_Callback(bDraw);
						}
						else
							return this->ILegend::setDrawShadow(bDraw);
					}
					virtual ev_bool isDrawShadow() const
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_isDrawShadow_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_ILegend_isDrawShadow_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ILegend::isDrawShadow();
					}
					virtual void setDrawFrame(_in bool bDraw)
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_setDrawFrame_void_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ILegend_setDrawFrame_void_bool_Callback(bDraw);
						}
						else
							return this->ILegend::setDrawFrame(bDraw);
					}
					virtual ev_bool isDrawFrame() const
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_isDrawFrame_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_ILegend_isDrawFrame_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ILegend::isDrawFrame();
					}
					virtual void setFrameSymbol(_in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_setFrameSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ILegend_setFrameSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->ILegend::setFrameSymbol(symbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getFrameSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_getFrameSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_ILegend_getFrameSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->ILegend::getFrameSymbol();
					}
					virtual void setTitle(_in const EVString& strTitle)
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_setTitle_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* strTitle_Char = strTitle.makeBuffer();
							m_EarthView_World_Spatial_Carto_ILegend_setTitle_void_EVString_Callback(strTitle_Char);
						}
						else
							return this->ILegend::setTitle(strTitle);
					}
					virtual EVString getTitle() const
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_getTitle_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_ILegend_getTitle_EVString_Callback();
							return returnValue;
						}
						else
							return this->ILegend::getTitle();
					}
					virtual void setTitleSymbol(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_setTitleSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ILegend_setTitleSymbol_void_ISymbol_Callback(pSymbol);
						}
						else
							return this->ILegend::setTitleSymbol(pSymbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getTitleSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_getTitleSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_ILegend_getTitleSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->ILegend::getTitleSymbol();
					}
					virtual void setItemSymbol(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_setItemSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ILegend_setItemSymbol_void_ISymbol_Callback(pSymbol);
						}
						else
							return this->ILegend::setItemSymbol(pSymbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getItemSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_getItemSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_ILegend_getItemSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->ILegend::getItemSymbol();
					}
					virtual void setTitleAlignment(_in EarthView::World::Spatial::Carto::LegendTitleAlignment alignment)
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_setTitleAlignment_void_LegendTitleAlignment_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ILegend_setTitleAlignment_void_LegendTitleAlignment_Callback((int)alignment);
						}
						else
							return this->ILegend::setTitleAlignment(alignment);
					}
					virtual EarthView::World::Spatial::Carto::LegendTitleAlignment getTitleAlignment() const
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_getTitleAlignment_LegendTitleAlignment_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::LegendTitleAlignment returnValue = (EarthView::World::Spatial::Carto::LegendTitleAlignment)m_EarthView_World_Spatial_Carto_ILegend_getTitleAlignment_LegendTitleAlignment_Callback();
							return returnValue;
						}
						else
							return this->ILegend::getTitleAlignment();
					}
					virtual void setRowGap(_in ev_real64 rowGap)
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_setRowGap_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ILegend_setRowGap_void_ev_real64_Callback(rowGap);
						}
						else
							return this->ILegend::setRowGap(rowGap);
					}
					virtual ev_real64 getRowGap() const
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_getRowGap_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Carto_ILegend_getRowGap_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->ILegend::getRowGap();
					}
					virtual void setColunmGap(_in ev_real64 colunmGap)
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_setColunmGap_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ILegend_setColunmGap_void_ev_real64_Callback(colunmGap);
						}
						else
							return this->ILegend::setColunmGap(colunmGap);
					}
					virtual ev_real64 getColunmGap() const
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_getColunmGap_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Carto_ILegend_getColunmGap_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->ILegend::getColunmGap();
					}
					virtual void setColumnCount(_in const ev_int32 count)
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_setColumnCount_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ILegend_setColumnCount_void_ev_int32_Callback(count);
						}
						else
							return this->ILegend::setColumnCount(count);
					}
					virtual ev_int32 getColumnCount() const
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_getColumnCount_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Carto_ILegend_getColumnCount_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->ILegend::getColumnCount();
					}
					virtual void setLegendItem(_in const EarthView::World::Spatial::Carto::ILegendItemVector* pItemVector)
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_setLegendItem_void_ILegendItemVector_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ILegend_setLegendItem_void_ILegendItemVector_Callback(pItemVector);
						}
						else
							return this->ILegend::setLegendItem(pItemVector);
					}
					virtual void clearLegendItem()
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_clearLegendItem_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ILegend_clearLegendItem_void_Callback();
						}
						else
							return this->ILegend::clearLegendItem();
					}
					virtual EarthView::World::Spatial::Carto::ILegendItemVector* getLegendItems() const
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_getLegendItems_ILegendItemVector_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::ILegendItemVector* returnValue = m_EarthView_World_Spatial_Carto_ILegend_getLegendItems_ILegendItemVector_Callback();
							return returnValue;
						}
						else
							return this->ILegend::getLegendItems();
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_getEnvelope_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Carto_ILegend_getEnvelope_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->ILegend::getEnvelope();
					}
					virtual void setEnvelope(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope)
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_setEnvelope_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ILegend_setEnvelope_void_IEnvelope_Callback(pEnvelope);
						}
						else
							return this->ILegend::setEnvelope(pEnvelope);
					}
					virtual ev_bool isSelected()
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_ILegend_isSelected_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ILegend::isSelected();
					}
					virtual void setSelected(_in ev_bool b)
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ILegend_setSelected_void_ev_bool_Callback(b);
						}
						else
							return this->ILegend::setSelected(b);
					}
					virtual ev_bool drawPrepare(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay)
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_drawPrepare_ev_bool_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_ILegend_drawPrepare_ev_bool_ISpatialDisplay_Callback(pDisplay);
							return returnValue;
						}
						else
							return this->ILegend::drawPrepare(pDisplay);
					}
					virtual void draw()
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_draw_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ILegend_draw_void_Callback();
						}
						else
							return this->ILegend::draw();
					}
					virtual void drawOver()
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_drawOver_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ILegend_drawOver_void_Callback();
						}
						else
							return this->ILegend::drawOver();
					}
					virtual EarthView::World::Spatial::Carto::IElement* clone() const
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_clone_IElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::IElement* returnValue = m_EarthView_World_Spatial_Carto_ILegend_clone_IElement_Callback();
							return returnValue;
						}
						else
							return this->ILegend::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ILegend_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->ILegend::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_ILegend_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->ILegend::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ILegend_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->ILegend::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Carto_ILegend_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->ILegend::toXmlElement();
					}
					virtual void fromStream(_in EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ILegend_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->ILegend::fromStream(stream);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_ILegend_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->ILegend::getName();
					}
					virtual void setName(_in EVString name)
					{
						if(m_EarthView_World_Spatial_Carto_ILegend_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Carto_ILegend_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->ILegend::setName(name);
					}
				};
				REGISTER_FACTORY_CLASS(ILegendProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_ILegend_getElementType_EVElementType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::getElementType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->getElementType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_getElementType_EVElementType( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_getElementType_EVElementType_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_getElementType_EVElementType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_ILegend_getElementType_EVElementType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::getElementType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setBackgroundColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setBackgroundColor(pColor);
					else
						ptrNativeObject->setBackgroundColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_setBackgroundColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_setBackgroundColor_void_IColor_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_setBackgroundColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setBackgroundColor_void_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setBackgroundColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_ILegend_getBackgroundColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::getBackgroundColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getBackgroundColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_getBackgroundColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_getBackgroundColor_IColor_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_getBackgroundColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_ILegend_getBackgroundColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::getBackgroundColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setDrawBackground_void_bool(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setDrawBackground(bDraw);
					else
						ptrNativeObject->setDrawBackground(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_setDrawBackground_void_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_setDrawBackground_void_bool_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_setDrawBackground_void_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setDrawBackground_void_bool_NoVirtual(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setDrawBackground(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ILegend_isDrawBackground_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::isDrawBackground();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawBackground();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_isDrawBackground_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_isDrawBackground_ev_bool_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_isDrawBackground_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ILegend_isDrawBackground_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::isDrawBackground();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setShadowColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setShadowColor(pColor);
					else
						ptrNativeObject->setShadowColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_setShadowColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_setShadowColor_void_IColor_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_setShadowColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setShadowColor_void_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setShadowColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_ILegend_getShadowColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::getShadowColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getShadowColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_getShadowColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_getShadowColor_IColor_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_getShadowColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_ILegend_getShadowColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::getShadowColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setDrawShadow_void_bool(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setDrawShadow(bDraw);
					else
						ptrNativeObject->setDrawShadow(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_setDrawShadow_void_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_setDrawShadow_void_bool_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_setDrawShadow_void_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setDrawShadow_void_bool_NoVirtual(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setDrawShadow(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ILegend_isDrawShadow_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::isDrawShadow();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawShadow();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_isDrawShadow_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_isDrawShadow_ev_bool_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_isDrawShadow_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ILegend_isDrawShadow_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::isDrawShadow();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setDrawFrame_void_bool(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setDrawFrame(bDraw);
					else
						ptrNativeObject->setDrawFrame(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_setDrawFrame_void_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_setDrawFrame_void_bool_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_setDrawFrame_void_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setDrawFrame_void_bool_NoVirtual(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setDrawFrame(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ILegend_isDrawFrame_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::isDrawFrame();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawFrame();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_isDrawFrame_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_isDrawFrame_ev_bool_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_isDrawFrame_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ILegend_isDrawFrame_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::isDrawFrame();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setFrameSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setFrameSymbol(symbol);
					else
						ptrNativeObject->setFrameSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_setFrameSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_setFrameSymbol_void_ISymbol_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_setFrameSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setFrameSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setFrameSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_ILegend_getFrameSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::getFrameSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getFrameSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_getFrameSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_getFrameSymbol_ISymbol_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_getFrameSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_ILegend_getFrameSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::getFrameSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setTitle_void_EVString(void *pObjectXXXX, _in const char* strTitle )
				{
					EarthView::World::Core::ev_string strTitle1 = strTitle;
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setTitle(strTitle1);
					else
						ptrNativeObject->setTitle(strTitle1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_setTitle_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_setTitle_void_EVString_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_setTitle_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setTitle_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* strTitle )
				{
					EarthView::World::Core::ev_string strTitle1 = strTitle;
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setTitle(strTitle1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_ILegend_getTitle_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::getTitle();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getTitle();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_getTitle_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_getTitle_EVString_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_getTitle_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_ILegend_getTitle_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::getTitle();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setTitleSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setTitleSymbol(pSymbol);
					else
						ptrNativeObject->setTitleSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_setTitleSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_setTitleSymbol_void_ISymbol_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_setTitleSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setTitleSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setTitleSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_ILegend_getTitleSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::getTitleSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getTitleSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_getTitleSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_getTitleSymbol_ISymbol_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_getTitleSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_ILegend_getTitleSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::getTitleSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setItemSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setItemSymbol(pSymbol);
					else
						ptrNativeObject->setItemSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_setItemSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_setItemSymbol_void_ISymbol_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_setItemSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setItemSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setItemSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_ILegend_getItemSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::getItemSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getItemSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_getItemSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_getItemSymbol_ISymbol_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_getItemSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_ILegend_getItemSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::getItemSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setTitleAlignment_void_LegendTitleAlignment(void *pObjectXXXX, _in int alignment )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setTitleAlignment((EarthView::World::Spatial::Carto::LegendTitleAlignment)alignment);
					else
						ptrNativeObject->setTitleAlignment((EarthView::World::Spatial::Carto::LegendTitleAlignment)alignment);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_setTitleAlignment_void_LegendTitleAlignment( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_setTitleAlignment_void_LegendTitleAlignment_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_setTitleAlignment_void_LegendTitleAlignment(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setTitleAlignment_void_LegendTitleAlignment_NoVirtual(void *pObjectXXXX, _in int alignment )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setTitleAlignment((EarthView::World::Spatial::Carto::LegendTitleAlignment)alignment);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_ILegend_getTitleAlignment_LegendTitleAlignment(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::LegendTitleAlignment objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::getTitleAlignment();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::LegendTitleAlignment objXXXX = ptrNativeObject->getTitleAlignment();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_getTitleAlignment_LegendTitleAlignment( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_getTitleAlignment_LegendTitleAlignment_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_getTitleAlignment_LegendTitleAlignment(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_ILegend_getTitleAlignment_LegendTitleAlignment_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					EarthView::World::Spatial::Carto::LegendTitleAlignment objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::getTitleAlignment();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setRowGap_void_ev_real64(void *pObjectXXXX, _in ev_real64 rowGap )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setRowGap(rowGap);
					else
						ptrNativeObject->setRowGap(rowGap);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_setRowGap_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_setRowGap_void_ev_real64_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_setRowGap_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setRowGap_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 rowGap )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setRowGap(rowGap);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_ILegend_getRowGap_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::getRowGap();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getRowGap();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_getRowGap_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_getRowGap_ev_real64_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_getRowGap_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_ILegend_getRowGap_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::getRowGap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setColunmGap_void_ev_real64(void *pObjectXXXX, _in ev_real64 colunmGap )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setColunmGap(colunmGap);
					else
						ptrNativeObject->setColunmGap(colunmGap);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_setColunmGap_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_setColunmGap_void_ev_real64_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_setColunmGap_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setColunmGap_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 colunmGap )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setColunmGap(colunmGap);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_ILegend_getColunmGap_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::getColunmGap();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getColunmGap();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_getColunmGap_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_getColunmGap_ev_real64_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_getColunmGap_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_ILegend_getColunmGap_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::getColunmGap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setColumnCount_void_ev_int32(void *pObjectXXXX, _in const ev_int32 count )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setColumnCount(count);
					else
						ptrNativeObject->setColumnCount(count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_setColumnCount_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_setColumnCount_void_ev_int32_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_setColumnCount_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setColumnCount_void_ev_int32_NoVirtual(void *pObjectXXXX, _in const ev_int32 count )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setColumnCount(count);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_ILegend_getColumnCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::getColumnCount();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getColumnCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_getColumnCount_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_getColumnCount_ev_int32_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_getColumnCount_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_ILegend_getColumnCount_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::getColumnCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setLegendItem_void_ILegendItemVector(void *pObjectXXXX, _in const EarthView::World::Spatial::Carto::ILegendItemVector* pItemVector )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setLegendItem(pItemVector);
					else
						ptrNativeObject->setLegendItem(pItemVector);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_setLegendItem_void_ILegendItemVector( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_setLegendItem_void_ILegendItemVector_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_setLegendItem_void_ILegendItemVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setLegendItem_void_ILegendItemVector_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Carto::ILegendItemVector* pItemVector )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setLegendItem(pItemVector);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_clearLegendItem_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::clearLegendItem();
					else
						ptrNativeObject->clearLegendItem();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_clearLegendItem_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_clearLegendItem_void_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_clearLegendItem_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_clearLegendItem_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::clearLegendItem();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::ILegendItemVector*  _stdcall EarthView_World_Spatial_Carto_ILegend_getLegendItems_ILegendItemVector(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::ILegendItemVector* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::getLegendItems();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::ILegendItemVector* objXXXX = ptrNativeObject->getLegendItems();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_getLegendItems_ILegendItemVector( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_getLegendItems_ILegendItemVector_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_getLegendItems_ILegendItemVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::ILegendItemVector*  _stdcall EarthView_World_Spatial_Carto_ILegend_getLegendItems_ILegendItemVector_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					EarthView::World::Spatial::Carto::ILegendItemVector* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::getLegendItems();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_ILegend_getEnvelope_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::getEnvelope();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelope();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_getEnvelope_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_getEnvelope_IEnvelope_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_getEnvelope_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_ILegend_getEnvelope_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::getEnvelope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setEnvelope_void_IEnvelope(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setEnvelope(pEnvelope);
					else
						ptrNativeObject->setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_setEnvelope_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_setEnvelope_void_IEnvelope_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_setEnvelope_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setEnvelope_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ILegend_isSelected_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::isSelected();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelected();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_isSelected_ev_bool_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_isSelected_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ILegend_isSelected_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::isSelected();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool b )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setSelected(b);
					else
						ptrNativeObject->setSelected(b);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_setSelected_void_ev_bool_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_setSelected_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_setSelected_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool b )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::setSelected(b);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ILegend_drawPrepare_ev_bool_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::drawPrepare(pDisplay);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->drawPrepare(pDisplay);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_drawPrepare_ev_bool_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_drawPrepare_ev_bool_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ILegend_drawPrepare_ev_bool_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::drawPrepare(pDisplay);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_draw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::draw();
					else
						ptrNativeObject->draw();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_draw_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_draw_void_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_draw_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_draw_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::draw();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_drawOver_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::drawOver();
					else
						ptrNativeObject->drawOver();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_drawOver_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_drawOver_void_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_drawOver_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_drawOver_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::drawOver();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_ILegend_clone_IElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_clone_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_clone_IElement_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_clone_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_ILegend_clone_IElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_toStream_void_CDataStream_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_ILegend_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_toXML_EVString_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_ILegend_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_ILegend_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_toXmlElement_CXmlElement_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_ILegend_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_fromStream_void_CDataStream(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					if (dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_fromStream_void_CDataStream_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ILegend_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::ILegend* ptrNativeObject = (EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ILegend::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_getName_EVString_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ILegend_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_ILegend_setName_void_EVString_Callback* pCallback )
				{
					ILegendProxy* ptr = dynamic_cast<ILegendProxy*>((EarthView::World::Spatial::Carto::ILegend*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ILegend_setName_void_EVString(pCallback);
					}
				}
			}
		}
	}
}
