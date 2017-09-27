/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/iscaletext.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_getText_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_setText_void_EVString_Callback)(_in char*& strText);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_setHorizontalGap_void_ev_real64_Callback)(_in const ev_real64 horizontalGap);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_getHorizontalGap_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_setVerticalGap_void_ev_real64_Callback)(_in const ev_real64 verticalGap);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_getVerticalGap_ev_real64_Callback)();
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_getTextSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_setTextSymbol_void_ISymbol_Callback)(_in EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_setBackgroundColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* pColor);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_getBackgroundColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_setDrawBackground_void_bool_Callback)(_in bool bDraw);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_isDrawBackground_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_setShadowColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* pColor);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_getShadowColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_setDrawShadow_void_bool_Callback)(_in bool bDraw);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_isDrawShadow_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_setFrameSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_getFrameSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_setDrawFrame_void_ev_bool_Callback)(_in const ev_bool bDraw);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_isDrawFrame_ev_bool_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_to_1_N_Format_EVString_EVString_Callback)(_in char*& strText);
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_toKilobitSeparatedFormat_EVString_EVString_Callback)(_in char*& strText);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_setMapFrame_void_IMapFrame_Callback)(_in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame);
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_getPreviewScale_EVString_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay);
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_getElementType_EVElementType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_setName_void_EVString_Callback)(_in char*& name);
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_getEnvelope_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_setEnvelope_void_IEnvelope_Callback)(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_isSelected_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_setSelected_void_ev_bool_Callback)(_in ev_bool bSelected);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_drawPrepare_ev_bool_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_draw_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_drawOver_void_Callback)();
				typedef EarthView::World::Spatial::Carto::IElement*  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_clone_IElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleText_fromStream_void_CDataStream_Callback)(_in void* stream);
				class IScaleTextProxy : public EarthView::World::Spatial::Carto::IScaleText
				{
				private:
					EarthView_World_Spatial_Carto_IScaleText_getText_EVString_Callback* m_EarthView_World_Spatial_Carto_IScaleText_getText_EVString_Callback;
					EarthView_World_Spatial_Carto_IScaleText_setText_void_EVString_Callback* m_EarthView_World_Spatial_Carto_IScaleText_setText_void_EVString_Callback;
					EarthView_World_Spatial_Carto_IScaleText_setHorizontalGap_void_ev_real64_Callback* m_EarthView_World_Spatial_Carto_IScaleText_setHorizontalGap_void_ev_real64_Callback;
					EarthView_World_Spatial_Carto_IScaleText_getHorizontalGap_ev_real64_Callback* m_EarthView_World_Spatial_Carto_IScaleText_getHorizontalGap_ev_real64_Callback;
					EarthView_World_Spatial_Carto_IScaleText_setVerticalGap_void_ev_real64_Callback* m_EarthView_World_Spatial_Carto_IScaleText_setVerticalGap_void_ev_real64_Callback;
					EarthView_World_Spatial_Carto_IScaleText_getVerticalGap_ev_real64_Callback* m_EarthView_World_Spatial_Carto_IScaleText_getVerticalGap_ev_real64_Callback;
					EarthView_World_Spatial_Carto_IScaleText_getTextSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_IScaleText_getTextSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_IScaleText_setTextSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_IScaleText_setTextSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_IScaleText_setBackgroundColor_void_IColor_Callback* m_EarthView_World_Spatial_Carto_IScaleText_setBackgroundColor_void_IColor_Callback;
					EarthView_World_Spatial_Carto_IScaleText_getBackgroundColor_IColor_Callback* m_EarthView_World_Spatial_Carto_IScaleText_getBackgroundColor_IColor_Callback;
					EarthView_World_Spatial_Carto_IScaleText_setDrawBackground_void_bool_Callback* m_EarthView_World_Spatial_Carto_IScaleText_setDrawBackground_void_bool_Callback;
					EarthView_World_Spatial_Carto_IScaleText_isDrawBackground_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IScaleText_isDrawBackground_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IScaleText_setShadowColor_void_IColor_Callback* m_EarthView_World_Spatial_Carto_IScaleText_setShadowColor_void_IColor_Callback;
					EarthView_World_Spatial_Carto_IScaleText_getShadowColor_IColor_Callback* m_EarthView_World_Spatial_Carto_IScaleText_getShadowColor_IColor_Callback;
					EarthView_World_Spatial_Carto_IScaleText_setDrawShadow_void_bool_Callback* m_EarthView_World_Spatial_Carto_IScaleText_setDrawShadow_void_bool_Callback;
					EarthView_World_Spatial_Carto_IScaleText_isDrawShadow_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IScaleText_isDrawShadow_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IScaleText_setFrameSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_IScaleText_setFrameSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_IScaleText_getFrameSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_IScaleText_getFrameSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_IScaleText_setDrawFrame_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IScaleText_setDrawFrame_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IScaleText_isDrawFrame_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IScaleText_isDrawFrame_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IScaleText_to_1_N_Format_EVString_EVString_Callback* m_EarthView_World_Spatial_Carto_IScaleText_to_1_N_Format_EVString_EVString_Callback;
					EarthView_World_Spatial_Carto_IScaleText_toKilobitSeparatedFormat_EVString_EVString_Callback* m_EarthView_World_Spatial_Carto_IScaleText_toKilobitSeparatedFormat_EVString_EVString_Callback;
					EarthView_World_Spatial_Carto_IScaleText_setMapFrame_void_IMapFrame_Callback* m_EarthView_World_Spatial_Carto_IScaleText_setMapFrame_void_IMapFrame_Callback;
					EarthView_World_Spatial_Carto_IScaleText_getPreviewScale_EVString_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Carto_IScaleText_getPreviewScale_EVString_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Carto_IScaleText_getElementType_EVElementType_Callback* m_EarthView_World_Spatial_Carto_IScaleText_getElementType_EVElementType_Callback;
					EarthView_World_Spatial_Carto_IScaleText_getName_EVString_Callback* m_EarthView_World_Spatial_Carto_IScaleText_getName_EVString_Callback;
					EarthView_World_Spatial_Carto_IScaleText_setName_void_EVString_Callback* m_EarthView_World_Spatial_Carto_IScaleText_setName_void_EVString_Callback;
					EarthView_World_Spatial_Carto_IScaleText_getEnvelope_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_IScaleText_getEnvelope_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_IScaleText_setEnvelope_void_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_IScaleText_setEnvelope_void_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_IScaleText_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IScaleText_isSelected_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IScaleText_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IScaleText_setSelected_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IScaleText_drawPrepare_ev_bool_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Carto_IScaleText_drawPrepare_ev_bool_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Carto_IScaleText_draw_void_Callback* m_EarthView_World_Spatial_Carto_IScaleText_draw_void_Callback;
					EarthView_World_Spatial_Carto_IScaleText_drawOver_void_Callback* m_EarthView_World_Spatial_Carto_IScaleText_drawOver_void_Callback;
					EarthView_World_Spatial_Carto_IScaleText_clone_IElement_Callback* m_EarthView_World_Spatial_Carto_IScaleText_clone_IElement_Callback;
					EarthView_World_Spatial_Carto_IScaleText_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_IScaleText_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Carto_IScaleText_toXML_EVString_Callback* m_EarthView_World_Spatial_Carto_IScaleText_toXML_EVString_Callback;
					EarthView_World_Spatial_Carto_IScaleText_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_IScaleText_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_IScaleText_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_IScaleText_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_IScaleText_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_IScaleText_fromStream_void_CDataStream_Callback;
				public:
					IScaleTextProxy(EarthView::World::Core::CNameValuePairList *pList) : IScaleText(pList)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_getText_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_setText_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_setHorizontalGap_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_getHorizontalGap_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_setVerticalGap_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_getVerticalGap_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_getTextSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_setTextSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_setBackgroundColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_getBackgroundColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_setDrawBackground_void_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_isDrawBackground_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_setShadowColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_getShadowColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_setDrawShadow_void_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_isDrawShadow_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_setFrameSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_getFrameSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_setDrawFrame_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_isDrawFrame_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_to_1_N_Format_EVString_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_toKilobitSeparatedFormat_EVString_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_setMapFrame_void_IMapFrame_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_getPreviewScale_EVString_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_getElementType_EVElementType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_getEnvelope_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_setEnvelope_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_isSelected_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_setSelected_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_drawPrepare_ev_bool_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_draw_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_drawOver_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_clone_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleText_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_getText_EVString(EarthView_World_Spatial_Carto_IScaleText_getText_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_getText_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_setText_void_EVString(EarthView_World_Spatial_Carto_IScaleText_setText_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_setText_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_setHorizontalGap_void_ev_real64(EarthView_World_Spatial_Carto_IScaleText_setHorizontalGap_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_setHorizontalGap_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_getHorizontalGap_ev_real64(EarthView_World_Spatial_Carto_IScaleText_getHorizontalGap_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_getHorizontalGap_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_setVerticalGap_void_ev_real64(EarthView_World_Spatial_Carto_IScaleText_setVerticalGap_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_setVerticalGap_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_getVerticalGap_ev_real64(EarthView_World_Spatial_Carto_IScaleText_getVerticalGap_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_getVerticalGap_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_getTextSymbol_ISymbol(EarthView_World_Spatial_Carto_IScaleText_getTextSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_getTextSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_setTextSymbol_void_ISymbol(EarthView_World_Spatial_Carto_IScaleText_setTextSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_setTextSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_setBackgroundColor_void_IColor(EarthView_World_Spatial_Carto_IScaleText_setBackgroundColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_setBackgroundColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_getBackgroundColor_IColor(EarthView_World_Spatial_Carto_IScaleText_getBackgroundColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_getBackgroundColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_setDrawBackground_void_bool(EarthView_World_Spatial_Carto_IScaleText_setDrawBackground_void_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_setDrawBackground_void_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_isDrawBackground_ev_bool(EarthView_World_Spatial_Carto_IScaleText_isDrawBackground_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_isDrawBackground_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_setShadowColor_void_IColor(EarthView_World_Spatial_Carto_IScaleText_setShadowColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_setShadowColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_getShadowColor_IColor(EarthView_World_Spatial_Carto_IScaleText_getShadowColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_getShadowColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_setDrawShadow_void_bool(EarthView_World_Spatial_Carto_IScaleText_setDrawShadow_void_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_setDrawShadow_void_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_isDrawShadow_ev_bool(EarthView_World_Spatial_Carto_IScaleText_isDrawShadow_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_isDrawShadow_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_setFrameSymbol_void_ISymbol(EarthView_World_Spatial_Carto_IScaleText_setFrameSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_setFrameSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_getFrameSymbol_ISymbol(EarthView_World_Spatial_Carto_IScaleText_getFrameSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_getFrameSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_setDrawFrame_void_ev_bool(EarthView_World_Spatial_Carto_IScaleText_setDrawFrame_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_setDrawFrame_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_isDrawFrame_ev_bool(EarthView_World_Spatial_Carto_IScaleText_isDrawFrame_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_isDrawFrame_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_to_1_N_Format_EVString_EVString(EarthView_World_Spatial_Carto_IScaleText_to_1_N_Format_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_to_1_N_Format_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_toKilobitSeparatedFormat_EVString_EVString(EarthView_World_Spatial_Carto_IScaleText_toKilobitSeparatedFormat_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_toKilobitSeparatedFormat_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_setMapFrame_void_IMapFrame(EarthView_World_Spatial_Carto_IScaleText_setMapFrame_void_IMapFrame_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_setMapFrame_void_IMapFrame_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_getPreviewScale_EVString_ISpatialDisplay(EarthView_World_Spatial_Carto_IScaleText_getPreviewScale_EVString_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_getPreviewScale_EVString_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_getElementType_EVElementType(EarthView_World_Spatial_Carto_IScaleText_getElementType_EVElementType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_getElementType_EVElementType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_getName_EVString(EarthView_World_Spatial_Carto_IScaleText_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_setName_void_EVString(EarthView_World_Spatial_Carto_IScaleText_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_getEnvelope_IEnvelope(EarthView_World_Spatial_Carto_IScaleText_getEnvelope_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_getEnvelope_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_setEnvelope_void_IEnvelope(EarthView_World_Spatial_Carto_IScaleText_setEnvelope_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_setEnvelope_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_isSelected_ev_bool(EarthView_World_Spatial_Carto_IScaleText_isSelected_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_isSelected_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_setSelected_void_ev_bool(EarthView_World_Spatial_Carto_IScaleText_setSelected_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_setSelected_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_drawPrepare_ev_bool_ISpatialDisplay(EarthView_World_Spatial_Carto_IScaleText_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_drawPrepare_ev_bool_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_draw_void(EarthView_World_Spatial_Carto_IScaleText_draw_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_draw_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_drawOver_void(EarthView_World_Spatial_Carto_IScaleText_drawOver_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_drawOver_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_clone_IElement(EarthView_World_Spatial_Carto_IScaleText_clone_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_clone_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_toStream_void_CDataStream(EarthView_World_Spatial_Carto_IScaleText_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_toXML_EVString(EarthView_World_Spatial_Carto_IScaleText_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Carto_IScaleText_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_toXmlElement_CXmlElement(EarthView_World_Spatial_Carto_IScaleText_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleText_fromStream_void_CDataStream(EarthView_World_Spatial_Carto_IScaleText_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleText_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Carto::EVElementType getElementType() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_getElementType_EVElementType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::EVElementType returnValue = (EarthView::World::Spatial::Carto::EVElementType)m_EarthView_World_Spatial_Carto_IScaleText_getElementType_EVElementType_Callback();
							return returnValue;
						}
						else
							return this->IScaleText::getElementType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_IScaleText_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IScaleText::getName();
					}
					virtual EVString getText() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_getText_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_IScaleText_getText_EVString_Callback();
							return returnValue;
						}
						else
							return this->IScaleText::getText();
					}
					virtual void setText(_in EVString strText)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_setText_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* strText_Char = strText.makeBuffer();
							m_EarthView_World_Spatial_Carto_IScaleText_setText_void_EVString_Callback(strText_Char);
						}
						else
							return this->IScaleText::setText(strText);
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_getEnvelope_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Carto_IScaleText_getEnvelope_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->IScaleText::getEnvelope();
					}
					virtual void setEnvelope(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_setEnvelope_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleText_setEnvelope_void_IEnvelope_Callback(pEnvelope);
						}
						else
							return this->IScaleText::setEnvelope(pEnvelope);
					}
					virtual ev_bool isSelected()
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IScaleText_isSelected_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IScaleText::isSelected();
					}
					virtual void setSelected(_in ev_bool bSelected)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleText_setSelected_void_ev_bool_Callback(bSelected);
						}
						else
							return this->IScaleText::setSelected(bSelected);
					}
					virtual void setHorizontalGap(_in const ev_real64 horizontalGap)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_setHorizontalGap_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleText_setHorizontalGap_void_ev_real64_Callback(horizontalGap);
						}
						else
							return this->IScaleText::setHorizontalGap(horizontalGap);
					}
					virtual ev_real64 getHorizontalGap() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_getHorizontalGap_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Carto_IScaleText_getHorizontalGap_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IScaleText::getHorizontalGap();
					}
					virtual void setVerticalGap(_in const ev_real64 verticalGap)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_setVerticalGap_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleText_setVerticalGap_void_ev_real64_Callback(verticalGap);
						}
						else
							return this->IScaleText::setVerticalGap(verticalGap);
					}
					virtual ev_real64 getVerticalGap() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_getVerticalGap_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Carto_IScaleText_getVerticalGap_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IScaleText::getVerticalGap();
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getTextSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_getTextSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_IScaleText_getTextSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->IScaleText::getTextSymbol();
					}
					virtual void setTextSymbol(_in EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_setTextSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleText_setTextSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->IScaleText::setTextSymbol(symbol);
					}
					virtual void setBackgroundColor(_in const EarthView::World::Spatial::Display::IColor* pColor)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_setBackgroundColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleText_setBackgroundColor_void_IColor_Callback(pColor);
						}
						else
							return this->IScaleText::setBackgroundColor(pColor);
					}
					virtual EarthView::World::Spatial::Display::IColor* getBackgroundColor() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_getBackgroundColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Carto_IScaleText_getBackgroundColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->IScaleText::getBackgroundColor();
					}
					virtual void setDrawBackground(_in bool bDraw)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_setDrawBackground_void_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleText_setDrawBackground_void_bool_Callback(bDraw);
						}
						else
							return this->IScaleText::setDrawBackground(bDraw);
					}
					virtual ev_bool isDrawBackground() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_isDrawBackground_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IScaleText_isDrawBackground_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IScaleText::isDrawBackground();
					}
					virtual void setShadowColor(_in const EarthView::World::Spatial::Display::IColor* pColor)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_setShadowColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleText_setShadowColor_void_IColor_Callback(pColor);
						}
						else
							return this->IScaleText::setShadowColor(pColor);
					}
					virtual EarthView::World::Spatial::Display::IColor* getShadowColor() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_getShadowColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Carto_IScaleText_getShadowColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->IScaleText::getShadowColor();
					}
					virtual void setDrawShadow(_in bool bDraw)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_setDrawShadow_void_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleText_setDrawShadow_void_bool_Callback(bDraw);
						}
						else
							return this->IScaleText::setDrawShadow(bDraw);
					}
					virtual ev_bool isDrawShadow() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_isDrawShadow_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IScaleText_isDrawShadow_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IScaleText::isDrawShadow();
					}
					virtual void setFrameSymbol(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_setFrameSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleText_setFrameSymbol_void_ISymbol_Callback(pSymbol);
						}
						else
							return this->IScaleText::setFrameSymbol(pSymbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getFrameSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_getFrameSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_IScaleText_getFrameSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->IScaleText::getFrameSymbol();
					}
					virtual void setDrawFrame(_in const ev_bool bDraw)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_setDrawFrame_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleText_setDrawFrame_void_ev_bool_Callback(bDraw);
						}
						else
							return this->IScaleText::setDrawFrame(bDraw);
					}
					virtual ev_bool isDrawFrame() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_isDrawFrame_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IScaleText_isDrawFrame_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IScaleText::isDrawFrame();
					}
					virtual EVString to_1_N_Format(_in EVString strText)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_to_1_N_Format_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* strText_Char = strText.makeBuffer();
							EVString returnValue = m_EarthView_World_Spatial_Carto_IScaleText_to_1_N_Format_EVString_EVString_Callback(strText_Char);
							return returnValue;
						}
						else
							return this->IScaleText::to_1_N_Format(strText);
					}
					virtual EVString toKilobitSeparatedFormat(_in EVString strText)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_toKilobitSeparatedFormat_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* strText_Char = strText.makeBuffer();
							EVString returnValue = m_EarthView_World_Spatial_Carto_IScaleText_toKilobitSeparatedFormat_EVString_EVString_Callback(strText_Char);
							return returnValue;
						}
						else
							return this->IScaleText::toKilobitSeparatedFormat(strText);
					}
					virtual void setMapFrame(_in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_setMapFrame_void_IMapFrame_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleText_setMapFrame_void_IMapFrame_Callback(pMapFrame);
						}
						else
							return this->IScaleText::setMapFrame(pMapFrame);
					}
					virtual EVString getPreviewScale(_in EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_getPreviewScale_EVString_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_IScaleText_getPreviewScale_EVString_ISpatialDisplay_Callback(pPageDisplay);
							return returnValue;
						}
						else
							return this->IScaleText::getPreviewScale(pPageDisplay);
					}
					virtual ev_bool drawPrepare(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_drawPrepare_ev_bool_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IScaleText_drawPrepare_ev_bool_ISpatialDisplay_Callback(pDisplay);
							return returnValue;
						}
						else
							return this->IScaleText::drawPrepare(pDisplay);
					}
					virtual void draw()
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_draw_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleText_draw_void_Callback();
						}
						else
							return this->IScaleText::draw();
					}
					virtual void drawOver()
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_drawOver_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleText_drawOver_void_Callback();
						}
						else
							return this->IScaleText::drawOver();
					}
					virtual EarthView::World::Spatial::Carto::IElement* clone() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_clone_IElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::IElement* returnValue = m_EarthView_World_Spatial_Carto_IScaleText_clone_IElement_Callback();
							return returnValue;
						}
						else
							return this->IScaleText::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleText_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IScaleText::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_IScaleText_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->IScaleText::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleText_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->IScaleText::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Carto_IScaleText_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->IScaleText::toXmlElement();
					}
					virtual void fromStream(_in EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleText_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IScaleText::fromStream(stream);
					}
					virtual void setName(_in EVString name)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleText_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Carto_IScaleText_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->IScaleText::setName(name);
					}
				};
				REGISTER_FACTORY_CLASS(IScaleTextProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_IScaleText_getElementType_EVElementType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::getElementType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->getElementType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_getElementType_EVElementType( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_getElementType_EVElementType_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_getElementType_EVElementType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_IScaleText_getElementType_EVElementType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::getElementType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IScaleText_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_getName_EVString_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IScaleText_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IScaleText_getText_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::getText();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getText();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_getText_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_getText_EVString_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_getText_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IScaleText_getText_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::getText();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_setText_void_EVString(void *pObjectXXXX, _in char* strText )
				{
					EarthView::World::Core::ev_string strText1 = strText;
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::setText(strText1);
					else
						ptrNativeObject->setText(strText1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_setText_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_setText_void_EVString_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_setText_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_setText_void_EVString_NoVirtual(void *pObjectXXXX, _in char* strText )
				{
					EarthView::World::Core::ev_string strText1 = strText;
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::setText(strText1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_IScaleText_getEnvelope_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::getEnvelope();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelope();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_getEnvelope_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_getEnvelope_IEnvelope_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_getEnvelope_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_IScaleText_getEnvelope_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::getEnvelope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_setEnvelope_void_IEnvelope(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::setEnvelope(pEnvelope);
					else
						ptrNativeObject->setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_setEnvelope_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_setEnvelope_void_IEnvelope_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_setEnvelope_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_setEnvelope_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IScaleText_isSelected_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::isSelected();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelected();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_isSelected_ev_bool_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_isSelected_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IScaleText_isSelected_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::isSelected();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_setSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::setSelected(bSelected);
					else
						ptrNativeObject->setSelected(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_setSelected_void_ev_bool_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_setSelected_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_setSelected_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::setSelected(bSelected);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_setHorizontalGap_void_ev_real64(void *pObjectXXXX, _in const ev_real64 horizontalGap )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::setHorizontalGap(horizontalGap);
					else
						ptrNativeObject->setHorizontalGap(horizontalGap);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_setHorizontalGap_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_setHorizontalGap_void_ev_real64_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_setHorizontalGap_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_setHorizontalGap_void_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_real64 horizontalGap )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::setHorizontalGap(horizontalGap);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_IScaleText_getHorizontalGap_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::getHorizontalGap();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getHorizontalGap();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_getHorizontalGap_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_getHorizontalGap_ev_real64_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_getHorizontalGap_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_IScaleText_getHorizontalGap_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::getHorizontalGap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_setVerticalGap_void_ev_real64(void *pObjectXXXX, _in const ev_real64 verticalGap )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::setVerticalGap(verticalGap);
					else
						ptrNativeObject->setVerticalGap(verticalGap);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_setVerticalGap_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_setVerticalGap_void_ev_real64_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_setVerticalGap_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_setVerticalGap_void_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_real64 verticalGap )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::setVerticalGap(verticalGap);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_IScaleText_getVerticalGap_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::getVerticalGap();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getVerticalGap();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_getVerticalGap_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_getVerticalGap_ev_real64_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_getVerticalGap_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_IScaleText_getVerticalGap_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::getVerticalGap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_IScaleText_getTextSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::getTextSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getTextSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_getTextSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_getTextSymbol_ISymbol_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_getTextSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_IScaleText_getTextSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::getTextSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_setTextSymbol_void_ISymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::setTextSymbol(symbol);
					else
						ptrNativeObject->setTextSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_setTextSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_setTextSymbol_void_ISymbol_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_setTextSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_setTextSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::setTextSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_setBackgroundColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::setBackgroundColor(pColor);
					else
						ptrNativeObject->setBackgroundColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_setBackgroundColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_setBackgroundColor_void_IColor_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_setBackgroundColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_setBackgroundColor_void_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::setBackgroundColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_IScaleText_getBackgroundColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::getBackgroundColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getBackgroundColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_getBackgroundColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_getBackgroundColor_IColor_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_getBackgroundColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_IScaleText_getBackgroundColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::getBackgroundColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_setDrawBackground_void_bool(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::setDrawBackground(bDraw);
					else
						ptrNativeObject->setDrawBackground(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_setDrawBackground_void_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_setDrawBackground_void_bool_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_setDrawBackground_void_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_setDrawBackground_void_bool_NoVirtual(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::setDrawBackground(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IScaleText_isDrawBackground_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::isDrawBackground();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawBackground();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_isDrawBackground_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_isDrawBackground_ev_bool_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_isDrawBackground_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IScaleText_isDrawBackground_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::isDrawBackground();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_setShadowColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::setShadowColor(pColor);
					else
						ptrNativeObject->setShadowColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_setShadowColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_setShadowColor_void_IColor_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_setShadowColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_setShadowColor_void_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::setShadowColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_IScaleText_getShadowColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::getShadowColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getShadowColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_getShadowColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_getShadowColor_IColor_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_getShadowColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_IScaleText_getShadowColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::getShadowColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_setDrawShadow_void_bool(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::setDrawShadow(bDraw);
					else
						ptrNativeObject->setDrawShadow(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_setDrawShadow_void_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_setDrawShadow_void_bool_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_setDrawShadow_void_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_setDrawShadow_void_bool_NoVirtual(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::setDrawShadow(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IScaleText_isDrawShadow_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::isDrawShadow();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawShadow();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_isDrawShadow_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_isDrawShadow_ev_bool_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_isDrawShadow_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IScaleText_isDrawShadow_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::isDrawShadow();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_setFrameSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::setFrameSymbol(pSymbol);
					else
						ptrNativeObject->setFrameSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_setFrameSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_setFrameSymbol_void_ISymbol_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_setFrameSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_setFrameSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::setFrameSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_IScaleText_getFrameSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::getFrameSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getFrameSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_getFrameSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_getFrameSymbol_ISymbol_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_getFrameSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_IScaleText_getFrameSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::getFrameSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_setDrawFrame_void_ev_bool(void *pObjectXXXX, _in const ev_bool bDraw )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::setDrawFrame(bDraw);
					else
						ptrNativeObject->setDrawFrame(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_setDrawFrame_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_setDrawFrame_void_ev_bool_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_setDrawFrame_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_setDrawFrame_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool bDraw )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::setDrawFrame(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IScaleText_isDrawFrame_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::isDrawFrame();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawFrame();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_isDrawFrame_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_isDrawFrame_ev_bool_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_isDrawFrame_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IScaleText_isDrawFrame_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::isDrawFrame();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IScaleText_to_1_N_Format_EVString_EVString(void *pObjectXXXX, _in char* strText )
				{
					EarthView::World::Core::ev_string strText1 = strText;
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::to_1_N_Format(strText1);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->to_1_N_Format(strText1);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_to_1_N_Format_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_to_1_N_Format_EVString_EVString_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_to_1_N_Format_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IScaleText_to_1_N_Format_EVString_EVString_NoVirtual(void *pObjectXXXX, _in char* strText )
				{
					EarthView::World::Core::ev_string strText1 = strText;
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::to_1_N_Format(strText1);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IScaleText_toKilobitSeparatedFormat_EVString_EVString(void *pObjectXXXX, _in char* strText )
				{
					EarthView::World::Core::ev_string strText1 = strText;
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::toKilobitSeparatedFormat(strText1);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toKilobitSeparatedFormat(strText1);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_toKilobitSeparatedFormat_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_toKilobitSeparatedFormat_EVString_EVString_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_toKilobitSeparatedFormat_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IScaleText_toKilobitSeparatedFormat_EVString_EVString_NoVirtual(void *pObjectXXXX, _in char* strText )
				{
					EarthView::World::Core::ev_string strText1 = strText;
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::toKilobitSeparatedFormat(strText1);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_setMapFrame_void_IMapFrame(void *pObjectXXXX, _in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::setMapFrame(pMapFrame);
					else
						ptrNativeObject->setMapFrame(pMapFrame);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_setMapFrame_void_IMapFrame( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_setMapFrame_void_IMapFrame_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_setMapFrame_void_IMapFrame(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_setMapFrame_void_IMapFrame_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::setMapFrame(pMapFrame);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IScaleText_getPreviewScale_EVString_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::getPreviewScale(pPageDisplay);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getPreviewScale(pPageDisplay);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_getPreviewScale_EVString_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_getPreviewScale_EVString_ISpatialDisplay_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_getPreviewScale_EVString_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IScaleText_getPreviewScale_EVString_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::getPreviewScale(pPageDisplay);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IScaleText_drawPrepare_ev_bool_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::drawPrepare(pDisplay);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->drawPrepare(pDisplay);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_drawPrepare_ev_bool_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_drawPrepare_ev_bool_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IScaleText_drawPrepare_ev_bool_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::drawPrepare(pDisplay);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_draw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::draw();
					else
						ptrNativeObject->draw();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_draw_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_draw_void_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_draw_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_draw_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::draw();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_drawOver_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::drawOver();
					else
						ptrNativeObject->drawOver();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_drawOver_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_drawOver_void_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_drawOver_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_drawOver_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::drawOver();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_IScaleText_clone_IElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_clone_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_clone_IElement_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_clone_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_IScaleText_clone_IElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_toStream_void_CDataStream_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IScaleText_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_toXML_EVString_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IScaleText_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_IScaleText_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_toXmlElement_CXmlElement_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_IScaleText_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_fromStream_void_CDataStream(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					if (dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_fromStream_void_CDataStream_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleText_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::IScaleText* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleText::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleText_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleText_setName_void_EVString_Callback* pCallback )
				{
					IScaleTextProxy* ptr = dynamic_cast<IScaleTextProxy*>((EarthView::World::Spatial::Carto::IScaleText*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleText_setName_void_EVString(pCallback);
					}
				}
			}
		}
	}
}
