/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/itextinsert.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_getText_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_setText_void_EVString_Callback)(_in char*& strText);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_setHorizontalGap_void_ev_real64_Callback)(_in const ev_real64 horizontalGap);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_getHorizontalGap_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_setVerticalGap_void_ev_real64_Callback)(_in const ev_real64 verticalGap);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_getVerticalGap_ev_real64_Callback)();
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_getTextSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_setTextSymbol_void_ISymbol_Callback)(_in EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_setBackgroundColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* pColor);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_getBackgroundColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_setDrawBackground_void_bool_Callback)(_in bool bDraw);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_isDrawBackground_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_setShadowColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* pColor);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_getShadowColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_setDrawShadow_void_bool_Callback)(_in bool bDraw);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_isDrawShadow_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_setFrameSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_getFrameSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_setDrawFrame_void_ev_bool_Callback)(_in const ev_bool bDraw);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_isDrawFrame_ev_bool_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_getElementType_EVElementType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_setName_void_EVString_Callback)(_in char*& name);
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_getEnvelope_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_setEnvelope_void_IEnvelope_Callback)(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_isSelected_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_setSelected_void_ev_bool_Callback)(_in ev_bool bSelected);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_draw_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_drawOver_void_Callback)();
				typedef EarthView::World::Spatial::Carto::IElement*  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_clone_IElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ITextInsert_fromStream_void_CDataStream_Callback)(_in void* stream);
				class ITextInsertProxy : public EarthView::World::Spatial::Carto::ITextInsert
				{
				private:
					EarthView_World_Spatial_Carto_ITextInsert_getText_EVString_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_getText_EVString_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_setText_void_EVString_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_setText_void_EVString_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_setHorizontalGap_void_ev_real64_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_setHorizontalGap_void_ev_real64_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_getHorizontalGap_ev_real64_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_getHorizontalGap_ev_real64_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_setVerticalGap_void_ev_real64_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_setVerticalGap_void_ev_real64_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_getVerticalGap_ev_real64_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_getVerticalGap_ev_real64_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_getTextSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_getTextSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_setTextSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_setTextSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_setBackgroundColor_void_IColor_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_setBackgroundColor_void_IColor_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_getBackgroundColor_IColor_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_getBackgroundColor_IColor_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_setDrawBackground_void_bool_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_setDrawBackground_void_bool_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_isDrawBackground_ev_bool_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_isDrawBackground_ev_bool_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_setShadowColor_void_IColor_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_setShadowColor_void_IColor_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_getShadowColor_IColor_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_getShadowColor_IColor_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_setDrawShadow_void_bool_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_setDrawShadow_void_bool_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_isDrawShadow_ev_bool_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_isDrawShadow_ev_bool_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_setFrameSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_setFrameSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_getFrameSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_getFrameSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_setDrawFrame_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_setDrawFrame_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_isDrawFrame_ev_bool_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_isDrawFrame_ev_bool_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_getElementType_EVElementType_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_getElementType_EVElementType_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_getName_EVString_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_getName_EVString_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_setName_void_EVString_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_setName_void_EVString_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_getEnvelope_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_getEnvelope_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_setEnvelope_void_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_setEnvelope_void_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_isSelected_ev_bool_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_setSelected_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_draw_void_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_draw_void_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_drawOver_void_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_drawOver_void_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_clone_IElement_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_clone_IElement_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_toXML_EVString_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_toXML_EVString_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_ITextInsert_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_ITextInsert_fromStream_void_CDataStream_Callback;
				public:
					ITextInsertProxy(EarthView::World::Core::CNameValuePairList *pList) : ITextInsert(pList)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_getText_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_setText_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_setHorizontalGap_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_getHorizontalGap_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_setVerticalGap_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_getVerticalGap_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_getTextSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_setTextSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_setBackgroundColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_getBackgroundColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_setDrawBackground_void_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_isDrawBackground_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_setShadowColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_getShadowColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_setDrawShadow_void_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_isDrawShadow_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_setFrameSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_getFrameSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_setDrawFrame_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_isDrawFrame_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_getElementType_EVElementType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_getEnvelope_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_setEnvelope_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_isSelected_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_setSelected_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_draw_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_drawOver_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_clone_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ITextInsert_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_getText_EVString(EarthView_World_Spatial_Carto_ITextInsert_getText_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_getText_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_setText_void_EVString(EarthView_World_Spatial_Carto_ITextInsert_setText_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_setText_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_setHorizontalGap_void_ev_real64(EarthView_World_Spatial_Carto_ITextInsert_setHorizontalGap_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_setHorizontalGap_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_getHorizontalGap_ev_real64(EarthView_World_Spatial_Carto_ITextInsert_getHorizontalGap_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_getHorizontalGap_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_setVerticalGap_void_ev_real64(EarthView_World_Spatial_Carto_ITextInsert_setVerticalGap_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_setVerticalGap_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_getVerticalGap_ev_real64(EarthView_World_Spatial_Carto_ITextInsert_getVerticalGap_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_getVerticalGap_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_getTextSymbol_ISymbol(EarthView_World_Spatial_Carto_ITextInsert_getTextSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_getTextSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_setTextSymbol_void_ISymbol(EarthView_World_Spatial_Carto_ITextInsert_setTextSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_setTextSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_setBackgroundColor_void_IColor(EarthView_World_Spatial_Carto_ITextInsert_setBackgroundColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_setBackgroundColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_getBackgroundColor_IColor(EarthView_World_Spatial_Carto_ITextInsert_getBackgroundColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_getBackgroundColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_setDrawBackground_void_bool(EarthView_World_Spatial_Carto_ITextInsert_setDrawBackground_void_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_setDrawBackground_void_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_isDrawBackground_ev_bool(EarthView_World_Spatial_Carto_ITextInsert_isDrawBackground_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_isDrawBackground_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_setShadowColor_void_IColor(EarthView_World_Spatial_Carto_ITextInsert_setShadowColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_setShadowColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_getShadowColor_IColor(EarthView_World_Spatial_Carto_ITextInsert_getShadowColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_getShadowColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_setDrawShadow_void_bool(EarthView_World_Spatial_Carto_ITextInsert_setDrawShadow_void_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_setDrawShadow_void_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_isDrawShadow_ev_bool(EarthView_World_Spatial_Carto_ITextInsert_isDrawShadow_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_isDrawShadow_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_setFrameSymbol_void_ISymbol(EarthView_World_Spatial_Carto_ITextInsert_setFrameSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_setFrameSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_getFrameSymbol_ISymbol(EarthView_World_Spatial_Carto_ITextInsert_getFrameSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_getFrameSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_setDrawFrame_void_ev_bool(EarthView_World_Spatial_Carto_ITextInsert_setDrawFrame_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_setDrawFrame_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_isDrawFrame_ev_bool(EarthView_World_Spatial_Carto_ITextInsert_isDrawFrame_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_isDrawFrame_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_getElementType_EVElementType(EarthView_World_Spatial_Carto_ITextInsert_getElementType_EVElementType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_getElementType_EVElementType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_getName_EVString(EarthView_World_Spatial_Carto_ITextInsert_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_setName_void_EVString(EarthView_World_Spatial_Carto_ITextInsert_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_getEnvelope_IEnvelope(EarthView_World_Spatial_Carto_ITextInsert_getEnvelope_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_getEnvelope_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_setEnvelope_void_IEnvelope(EarthView_World_Spatial_Carto_ITextInsert_setEnvelope_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_setEnvelope_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_isSelected_ev_bool(EarthView_World_Spatial_Carto_ITextInsert_isSelected_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_isSelected_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_setSelected_void_ev_bool(EarthView_World_Spatial_Carto_ITextInsert_setSelected_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_setSelected_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_drawPrepare_ev_bool_ISpatialDisplay(EarthView_World_Spatial_Carto_ITextInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_draw_void(EarthView_World_Spatial_Carto_ITextInsert_draw_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_draw_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_drawOver_void(EarthView_World_Spatial_Carto_ITextInsert_drawOver_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_drawOver_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_clone_IElement(EarthView_World_Spatial_Carto_ITextInsert_clone_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_clone_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_toStream_void_CDataStream(EarthView_World_Spatial_Carto_ITextInsert_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_toXML_EVString(EarthView_World_Spatial_Carto_ITextInsert_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Carto_ITextInsert_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_toXmlElement_CXmlElement(EarthView_World_Spatial_Carto_ITextInsert_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ITextInsert_fromStream_void_CDataStream(EarthView_World_Spatial_Carto_ITextInsert_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ITextInsert_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Carto::EVElementType getElementType() const
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_getElementType_EVElementType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::EVElementType returnValue = (EarthView::World::Spatial::Carto::EVElementType)m_EarthView_World_Spatial_Carto_ITextInsert_getElementType_EVElementType_Callback();
							return returnValue;
						}
						else
							return this->ITextInsert::getElementType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_ITextInsert_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->ITextInsert::getName();
					}
					virtual EVString getText() const
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_getText_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_ITextInsert_getText_EVString_Callback();
							return returnValue;
						}
						else
							return this->ITextInsert::getText();
					}
					virtual void setText(_in EVString strText)
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_setText_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* strText_Char = strText.makeBuffer();
							m_EarthView_World_Spatial_Carto_ITextInsert_setText_void_EVString_Callback(strText_Char);
						}
						else
							return this->ITextInsert::setText(strText);
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_getEnvelope_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Carto_ITextInsert_getEnvelope_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->ITextInsert::getEnvelope();
					}
					virtual void setEnvelope(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope)
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_setEnvelope_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ITextInsert_setEnvelope_void_IEnvelope_Callback(pEnvelope);
						}
						else
							return this->ITextInsert::setEnvelope(pEnvelope);
					}
					virtual ev_bool isSelected()
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_ITextInsert_isSelected_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ITextInsert::isSelected();
					}
					virtual void setSelected(_in ev_bool bSelected)
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ITextInsert_setSelected_void_ev_bool_Callback(bSelected);
						}
						else
							return this->ITextInsert::setSelected(bSelected);
					}
					virtual void setHorizontalGap(_in const ev_real64 horizontalGap)
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_setHorizontalGap_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ITextInsert_setHorizontalGap_void_ev_real64_Callback(horizontalGap);
						}
						else
							return this->ITextInsert::setHorizontalGap(horizontalGap);
					}
					virtual ev_real64 getHorizontalGap() const
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_getHorizontalGap_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Carto_ITextInsert_getHorizontalGap_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->ITextInsert::getHorizontalGap();
					}
					virtual void setVerticalGap(_in const ev_real64 verticalGap)
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_setVerticalGap_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ITextInsert_setVerticalGap_void_ev_real64_Callback(verticalGap);
						}
						else
							return this->ITextInsert::setVerticalGap(verticalGap);
					}
					virtual ev_real64 getVerticalGap() const
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_getVerticalGap_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Carto_ITextInsert_getVerticalGap_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->ITextInsert::getVerticalGap();
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getTextSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_getTextSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_ITextInsert_getTextSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->ITextInsert::getTextSymbol();
					}
					virtual void setTextSymbol(_in EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_setTextSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ITextInsert_setTextSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->ITextInsert::setTextSymbol(symbol);
					}
					virtual void setBackgroundColor(_in const EarthView::World::Spatial::Display::IColor* pColor)
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_setBackgroundColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ITextInsert_setBackgroundColor_void_IColor_Callback(pColor);
						}
						else
							return this->ITextInsert::setBackgroundColor(pColor);
					}
					virtual EarthView::World::Spatial::Display::IColor* getBackgroundColor() const
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_getBackgroundColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Carto_ITextInsert_getBackgroundColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->ITextInsert::getBackgroundColor();
					}
					virtual void setDrawBackground(_in bool bDraw)
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_setDrawBackground_void_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ITextInsert_setDrawBackground_void_bool_Callback(bDraw);
						}
						else
							return this->ITextInsert::setDrawBackground(bDraw);
					}
					virtual ev_bool isDrawBackground() const
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_isDrawBackground_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_ITextInsert_isDrawBackground_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ITextInsert::isDrawBackground();
					}
					virtual void setShadowColor(_in const EarthView::World::Spatial::Display::IColor* pColor)
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_setShadowColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ITextInsert_setShadowColor_void_IColor_Callback(pColor);
						}
						else
							return this->ITextInsert::setShadowColor(pColor);
					}
					virtual EarthView::World::Spatial::Display::IColor* getShadowColor() const
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_getShadowColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Carto_ITextInsert_getShadowColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->ITextInsert::getShadowColor();
					}
					virtual void setDrawShadow(_in bool bDraw)
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_setDrawShadow_void_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ITextInsert_setDrawShadow_void_bool_Callback(bDraw);
						}
						else
							return this->ITextInsert::setDrawShadow(bDraw);
					}
					virtual ev_bool isDrawShadow() const
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_isDrawShadow_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_ITextInsert_isDrawShadow_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ITextInsert::isDrawShadow();
					}
					virtual void setFrameSymbol(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_setFrameSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ITextInsert_setFrameSymbol_void_ISymbol_Callback(pSymbol);
						}
						else
							return this->ITextInsert::setFrameSymbol(pSymbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getFrameSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_getFrameSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_ITextInsert_getFrameSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->ITextInsert::getFrameSymbol();
					}
					virtual void setDrawFrame(_in const ev_bool bDraw)
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_setDrawFrame_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ITextInsert_setDrawFrame_void_ev_bool_Callback(bDraw);
						}
						else
							return this->ITextInsert::setDrawFrame(bDraw);
					}
					virtual ev_bool isDrawFrame() const
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_isDrawFrame_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_ITextInsert_isDrawFrame_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ITextInsert::isDrawFrame();
					}
					virtual ev_bool drawPrepare(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay)
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_ITextInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback(pDisplay);
							return returnValue;
						}
						else
							return this->ITextInsert::drawPrepare(pDisplay);
					}
					virtual void draw()
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_draw_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ITextInsert_draw_void_Callback();
						}
						else
							return this->ITextInsert::draw();
					}
					virtual void drawOver()
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_drawOver_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ITextInsert_drawOver_void_Callback();
						}
						else
							return this->ITextInsert::drawOver();
					}
					virtual EarthView::World::Spatial::Carto::IElement* clone() const
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_clone_IElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::IElement* returnValue = m_EarthView_World_Spatial_Carto_ITextInsert_clone_IElement_Callback();
							return returnValue;
						}
						else
							return this->ITextInsert::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ITextInsert_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->ITextInsert::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_ITextInsert_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->ITextInsert::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ITextInsert_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->ITextInsert::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Carto_ITextInsert_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->ITextInsert::toXmlElement();
					}
					virtual void fromStream(_in EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ITextInsert_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->ITextInsert::fromStream(stream);
					}
					virtual void setName(_in EVString name)
					{
						if(m_EarthView_World_Spatial_Carto_ITextInsert_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Carto_ITextInsert_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->ITextInsert::setName(name);
					}
				};
				REGISTER_FACTORY_CLASS(ITextInsertProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_ITextInsert_getElementType_EVElementType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::getElementType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->getElementType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_getElementType_EVElementType( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_getElementType_EVElementType_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_getElementType_EVElementType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_ITextInsert_getElementType_EVElementType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::getElementType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_ITextInsert_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_getName_EVString_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_ITextInsert_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_ITextInsert_getText_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::getText();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getText();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_getText_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_getText_EVString_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_getText_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_ITextInsert_getText_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::getText();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_setText_void_EVString(void *pObjectXXXX, _in char* strText )
				{
					EarthView::World::Core::ev_string strText1 = strText;
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::setText(strText1);
					else
						ptrNativeObject->setText(strText1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_setText_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_setText_void_EVString_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_setText_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_setText_void_EVString_NoVirtual(void *pObjectXXXX, _in char* strText )
				{
					EarthView::World::Core::ev_string strText1 = strText;
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::setText(strText1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_ITextInsert_getEnvelope_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::getEnvelope();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelope();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_getEnvelope_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_getEnvelope_IEnvelope_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_getEnvelope_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_ITextInsert_getEnvelope_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::getEnvelope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_setEnvelope_void_IEnvelope(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::setEnvelope(pEnvelope);
					else
						ptrNativeObject->setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_setEnvelope_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_setEnvelope_void_IEnvelope_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_setEnvelope_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_setEnvelope_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ITextInsert_isSelected_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::isSelected();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelected();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_isSelected_ev_bool_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_isSelected_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ITextInsert_isSelected_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::isSelected();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_setSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::setSelected(bSelected);
					else
						ptrNativeObject->setSelected(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_setSelected_void_ev_bool_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_setSelected_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_setSelected_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::setSelected(bSelected);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_setHorizontalGap_void_ev_real64(void *pObjectXXXX, _in const ev_real64 horizontalGap )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::setHorizontalGap(horizontalGap);
					else
						ptrNativeObject->setHorizontalGap(horizontalGap);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_setHorizontalGap_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_setHorizontalGap_void_ev_real64_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_setHorizontalGap_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_setHorizontalGap_void_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_real64 horizontalGap )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::setHorizontalGap(horizontalGap);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_ITextInsert_getHorizontalGap_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::getHorizontalGap();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getHorizontalGap();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_getHorizontalGap_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_getHorizontalGap_ev_real64_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_getHorizontalGap_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_ITextInsert_getHorizontalGap_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::getHorizontalGap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_setVerticalGap_void_ev_real64(void *pObjectXXXX, _in const ev_real64 verticalGap )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::setVerticalGap(verticalGap);
					else
						ptrNativeObject->setVerticalGap(verticalGap);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_setVerticalGap_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_setVerticalGap_void_ev_real64_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_setVerticalGap_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_setVerticalGap_void_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_real64 verticalGap )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::setVerticalGap(verticalGap);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_ITextInsert_getVerticalGap_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::getVerticalGap();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getVerticalGap();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_getVerticalGap_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_getVerticalGap_ev_real64_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_getVerticalGap_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_ITextInsert_getVerticalGap_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::getVerticalGap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_ITextInsert_getTextSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::getTextSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getTextSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_getTextSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_getTextSymbol_ISymbol_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_getTextSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_ITextInsert_getTextSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::getTextSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_setTextSymbol_void_ISymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::setTextSymbol(symbol);
					else
						ptrNativeObject->setTextSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_setTextSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_setTextSymbol_void_ISymbol_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_setTextSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_setTextSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::setTextSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_setBackgroundColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::setBackgroundColor(pColor);
					else
						ptrNativeObject->setBackgroundColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_setBackgroundColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_setBackgroundColor_void_IColor_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_setBackgroundColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_setBackgroundColor_void_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::setBackgroundColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_ITextInsert_getBackgroundColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::getBackgroundColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getBackgroundColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_getBackgroundColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_getBackgroundColor_IColor_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_getBackgroundColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_ITextInsert_getBackgroundColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::getBackgroundColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_setDrawBackground_void_bool(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::setDrawBackground(bDraw);
					else
						ptrNativeObject->setDrawBackground(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_setDrawBackground_void_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_setDrawBackground_void_bool_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_setDrawBackground_void_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_setDrawBackground_void_bool_NoVirtual(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::setDrawBackground(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ITextInsert_isDrawBackground_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::isDrawBackground();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawBackground();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_isDrawBackground_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_isDrawBackground_ev_bool_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_isDrawBackground_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ITextInsert_isDrawBackground_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::isDrawBackground();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_setShadowColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::setShadowColor(pColor);
					else
						ptrNativeObject->setShadowColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_setShadowColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_setShadowColor_void_IColor_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_setShadowColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_setShadowColor_void_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::setShadowColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_ITextInsert_getShadowColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::getShadowColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getShadowColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_getShadowColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_getShadowColor_IColor_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_getShadowColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_ITextInsert_getShadowColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::getShadowColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_setDrawShadow_void_bool(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::setDrawShadow(bDraw);
					else
						ptrNativeObject->setDrawShadow(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_setDrawShadow_void_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_setDrawShadow_void_bool_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_setDrawShadow_void_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_setDrawShadow_void_bool_NoVirtual(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::setDrawShadow(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ITextInsert_isDrawShadow_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::isDrawShadow();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawShadow();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_isDrawShadow_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_isDrawShadow_ev_bool_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_isDrawShadow_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ITextInsert_isDrawShadow_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::isDrawShadow();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_setFrameSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::setFrameSymbol(pSymbol);
					else
						ptrNativeObject->setFrameSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_setFrameSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_setFrameSymbol_void_ISymbol_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_setFrameSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_setFrameSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::setFrameSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_ITextInsert_getFrameSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::getFrameSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getFrameSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_getFrameSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_getFrameSymbol_ISymbol_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_getFrameSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_ITextInsert_getFrameSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::getFrameSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_setDrawFrame_void_ev_bool(void *pObjectXXXX, _in const ev_bool bDraw )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::setDrawFrame(bDraw);
					else
						ptrNativeObject->setDrawFrame(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_setDrawFrame_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_setDrawFrame_void_ev_bool_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_setDrawFrame_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_setDrawFrame_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool bDraw )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::setDrawFrame(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ITextInsert_isDrawFrame_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::isDrawFrame();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawFrame();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_isDrawFrame_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_isDrawFrame_ev_bool_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_isDrawFrame_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ITextInsert_isDrawFrame_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::isDrawFrame();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ITextInsert_drawPrepare_ev_bool_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::drawPrepare(pDisplay);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->drawPrepare(pDisplay);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_drawPrepare_ev_bool_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_drawPrepare_ev_bool_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ITextInsert_drawPrepare_ev_bool_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::drawPrepare(pDisplay);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_draw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::draw();
					else
						ptrNativeObject->draw();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_draw_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_draw_void_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_draw_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_draw_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::draw();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_drawOver_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::drawOver();
					else
						ptrNativeObject->drawOver();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_drawOver_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_drawOver_void_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_drawOver_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_drawOver_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::drawOver();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_ITextInsert_clone_IElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_clone_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_clone_IElement_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_clone_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_ITextInsert_clone_IElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_toStream_void_CDataStream_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_ITextInsert_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_toXML_EVString_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_ITextInsert_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_ITextInsert_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_toXmlElement_CXmlElement_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_ITextInsert_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_fromStream_void_CDataStream(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					if (dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_fromStream_void_CDataStream_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ITextInsert_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::ITextInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ITextInsert::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ITextInsert_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_ITextInsert_setName_void_EVString_Callback* pCallback )
				{
					ITextInsertProxy* ptr = dynamic_cast<ITextInsertProxy*>((EarthView::World::Spatial::Carto::ITextInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ITextInsert_setName_void_EVString(pCallback);
					}
				}
			}
		}
	}
}
