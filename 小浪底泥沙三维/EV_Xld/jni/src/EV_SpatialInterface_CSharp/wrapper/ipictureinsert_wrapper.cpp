/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ipictureinsert.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getPath_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setPath_void_EVString_Callback)(_in char*& strPath);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setBackgroundColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* pColor);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getBackgroundColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setDrawBackground_void_bool_Callback)(_in bool bDraw);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_isDrawBackground_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setShadowColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* pColor);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getShadowColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setDrawShadow_void_bool_Callback)(_in bool bDraw);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_isDrawShadow_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setFrameSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getFrameSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setIsDrawFrame_void_ev_bool_Callback)(_in const ev_bool bDraw);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_isDrawFrame_ev_bool_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getWidth_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setWidth_void_ev_real64_Callback)(_in const ev_real64 dWidth);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getHeight_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setHeight_void_ev_real64_Callback)(_in const ev_real64 nHeight);
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getPicture_IBitmap_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setPicture_void_IBitmap_Callback)(_in EarthView::World::Display::IBitmap* pBmp);
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getElementType_EVElementType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setName_void_EVString_Callback)(_in char*& name);
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getEnvelope_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setEnvelope_void_IEnvelope_Callback)(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_isSelected_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setSelected_void_ev_bool_Callback)(_in ev_bool bSelected);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_draw_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_drawOver_void_Callback)();
				typedef EarthView::World::Spatial::Carto::IElement*  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_clone_IElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPictureInsert_fromStream_void_CDataStream_Callback)(_in void* stream);
				class IPictureInsertProxy : public EarthView::World::Spatial::Carto::IPictureInsert
				{
				private:
					EarthView_World_Spatial_Carto_IPictureInsert_getPath_EVString_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_getPath_EVString_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_setPath_void_EVString_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_setPath_void_EVString_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_setBackgroundColor_void_IColor_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_setBackgroundColor_void_IColor_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_getBackgroundColor_IColor_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_getBackgroundColor_IColor_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_setDrawBackground_void_bool_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_setDrawBackground_void_bool_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_isDrawBackground_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_isDrawBackground_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_setShadowColor_void_IColor_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_setShadowColor_void_IColor_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_getShadowColor_IColor_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_getShadowColor_IColor_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_setDrawShadow_void_bool_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_setDrawShadow_void_bool_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_isDrawShadow_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_isDrawShadow_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_setFrameSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_setFrameSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_getFrameSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_getFrameSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_setIsDrawFrame_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_setIsDrawFrame_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_isDrawFrame_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_isDrawFrame_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_getWidth_ev_real64_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_getWidth_ev_real64_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_setWidth_void_ev_real64_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_setWidth_void_ev_real64_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_getHeight_ev_real64_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_getHeight_ev_real64_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_setHeight_void_ev_real64_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_setHeight_void_ev_real64_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_getPicture_IBitmap_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_getPicture_IBitmap_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_setPicture_void_IBitmap_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_setPicture_void_IBitmap_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_getElementType_EVElementType_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_getElementType_EVElementType_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_getName_EVString_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_getName_EVString_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_setName_void_EVString_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_setName_void_EVString_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_getEnvelope_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_getEnvelope_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_setEnvelope_void_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_setEnvelope_void_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_isSelected_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_setSelected_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_draw_void_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_draw_void_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_drawOver_void_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_drawOver_void_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_clone_IElement_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_clone_IElement_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_toXML_EVString_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_toXML_EVString_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_IPictureInsert_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_IPictureInsert_fromStream_void_CDataStream_Callback;
				public:
					IPictureInsertProxy(EarthView::World::Core::CNameValuePairList *pList) : IPictureInsert(pList)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_getPath_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_setPath_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_setBackgroundColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_getBackgroundColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_setDrawBackground_void_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_isDrawBackground_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_setShadowColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_getShadowColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_setDrawShadow_void_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_isDrawShadow_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_setFrameSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_getFrameSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_setIsDrawFrame_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_isDrawFrame_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_getWidth_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_setWidth_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_getHeight_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_setHeight_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_getPicture_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_setPicture_void_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_getElementType_EVElementType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_getEnvelope_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_setEnvelope_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_isSelected_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_setSelected_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_draw_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_drawOver_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_clone_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPictureInsert_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_getPath_EVString(EarthView_World_Spatial_Carto_IPictureInsert_getPath_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_getPath_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_setPath_void_EVString(EarthView_World_Spatial_Carto_IPictureInsert_setPath_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_setPath_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_setBackgroundColor_void_IColor(EarthView_World_Spatial_Carto_IPictureInsert_setBackgroundColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_setBackgroundColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_getBackgroundColor_IColor(EarthView_World_Spatial_Carto_IPictureInsert_getBackgroundColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_getBackgroundColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_setDrawBackground_void_bool(EarthView_World_Spatial_Carto_IPictureInsert_setDrawBackground_void_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_setDrawBackground_void_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_isDrawBackground_ev_bool(EarthView_World_Spatial_Carto_IPictureInsert_isDrawBackground_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_isDrawBackground_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_setShadowColor_void_IColor(EarthView_World_Spatial_Carto_IPictureInsert_setShadowColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_setShadowColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_getShadowColor_IColor(EarthView_World_Spatial_Carto_IPictureInsert_getShadowColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_getShadowColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_setDrawShadow_void_bool(EarthView_World_Spatial_Carto_IPictureInsert_setDrawShadow_void_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_setDrawShadow_void_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_isDrawShadow_ev_bool(EarthView_World_Spatial_Carto_IPictureInsert_isDrawShadow_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_isDrawShadow_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_setFrameSymbol_void_ISymbol(EarthView_World_Spatial_Carto_IPictureInsert_setFrameSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_setFrameSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_getFrameSymbol_ISymbol(EarthView_World_Spatial_Carto_IPictureInsert_getFrameSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_getFrameSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_setIsDrawFrame_void_ev_bool(EarthView_World_Spatial_Carto_IPictureInsert_setIsDrawFrame_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_setIsDrawFrame_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_isDrawFrame_ev_bool(EarthView_World_Spatial_Carto_IPictureInsert_isDrawFrame_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_isDrawFrame_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_getWidth_ev_real64(EarthView_World_Spatial_Carto_IPictureInsert_getWidth_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_getWidth_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_setWidth_void_ev_real64(EarthView_World_Spatial_Carto_IPictureInsert_setWidth_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_setWidth_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_getHeight_ev_real64(EarthView_World_Spatial_Carto_IPictureInsert_getHeight_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_getHeight_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_setHeight_void_ev_real64(EarthView_World_Spatial_Carto_IPictureInsert_setHeight_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_setHeight_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_getPicture_IBitmap(EarthView_World_Spatial_Carto_IPictureInsert_getPicture_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_getPicture_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_setPicture_void_IBitmap(EarthView_World_Spatial_Carto_IPictureInsert_setPicture_void_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_setPicture_void_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_getElementType_EVElementType(EarthView_World_Spatial_Carto_IPictureInsert_getElementType_EVElementType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_getElementType_EVElementType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_getName_EVString(EarthView_World_Spatial_Carto_IPictureInsert_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_setName_void_EVString(EarthView_World_Spatial_Carto_IPictureInsert_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_getEnvelope_IEnvelope(EarthView_World_Spatial_Carto_IPictureInsert_getEnvelope_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_getEnvelope_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_setEnvelope_void_IEnvelope(EarthView_World_Spatial_Carto_IPictureInsert_setEnvelope_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_setEnvelope_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_isSelected_ev_bool(EarthView_World_Spatial_Carto_IPictureInsert_isSelected_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_isSelected_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_setSelected_void_ev_bool(EarthView_World_Spatial_Carto_IPictureInsert_setSelected_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_setSelected_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_drawPrepare_ev_bool_ISpatialDisplay(EarthView_World_Spatial_Carto_IPictureInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_draw_void(EarthView_World_Spatial_Carto_IPictureInsert_draw_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_draw_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_drawOver_void(EarthView_World_Spatial_Carto_IPictureInsert_drawOver_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_drawOver_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_clone_IElement(EarthView_World_Spatial_Carto_IPictureInsert_clone_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_clone_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_toStream_void_CDataStream(EarthView_World_Spatial_Carto_IPictureInsert_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_toXML_EVString(EarthView_World_Spatial_Carto_IPictureInsert_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Carto_IPictureInsert_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_toXmlElement_CXmlElement(EarthView_World_Spatial_Carto_IPictureInsert_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_fromStream_void_CDataStream(EarthView_World_Spatial_Carto_IPictureInsert_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPictureInsert_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Carto::EVElementType getElementType() const
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_getElementType_EVElementType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::EVElementType returnValue = (EarthView::World::Spatial::Carto::EVElementType)m_EarthView_World_Spatial_Carto_IPictureInsert_getElementType_EVElementType_Callback();
							return returnValue;
						}
						else
							return this->IPictureInsert::getElementType();
					}
					virtual EVString getPath() const
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_getPath_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_IPictureInsert_getPath_EVString_Callback();
							return returnValue;
						}
						else
							return this->IPictureInsert::getPath();
					}
					virtual void setPath(_in EVString strPath)
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_setPath_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* strPath_Char = strPath.makeBuffer();
							m_EarthView_World_Spatial_Carto_IPictureInsert_setPath_void_EVString_Callback(strPath_Char);
						}
						else
							return this->IPictureInsert::setPath(strPath);
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_getEnvelope_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Carto_IPictureInsert_getEnvelope_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->IPictureInsert::getEnvelope();
					}
					virtual void setEnvelope(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope)
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_setEnvelope_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPictureInsert_setEnvelope_void_IEnvelope_Callback(pEnvelope);
						}
						else
							return this->IPictureInsert::setEnvelope(pEnvelope);
					}
					virtual void setBackgroundColor(_in const EarthView::World::Spatial::Display::IColor* pColor)
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_setBackgroundColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPictureInsert_setBackgroundColor_void_IColor_Callback(pColor);
						}
						else
							return this->IPictureInsert::setBackgroundColor(pColor);
					}
					virtual EarthView::World::Spatial::Display::IColor* getBackgroundColor() const
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_getBackgroundColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Carto_IPictureInsert_getBackgroundColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->IPictureInsert::getBackgroundColor();
					}
					virtual void setDrawBackground(_in bool bDraw)
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_setDrawBackground_void_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPictureInsert_setDrawBackground_void_bool_Callback(bDraw);
						}
						else
							return this->IPictureInsert::setDrawBackground(bDraw);
					}
					virtual ev_bool isDrawBackground() const
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_isDrawBackground_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IPictureInsert_isDrawBackground_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IPictureInsert::isDrawBackground();
					}
					virtual void setShadowColor(_in const EarthView::World::Spatial::Display::IColor* pColor)
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_setShadowColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPictureInsert_setShadowColor_void_IColor_Callback(pColor);
						}
						else
							return this->IPictureInsert::setShadowColor(pColor);
					}
					virtual EarthView::World::Spatial::Display::IColor* getShadowColor() const
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_getShadowColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Carto_IPictureInsert_getShadowColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->IPictureInsert::getShadowColor();
					}
					virtual void setDrawShadow(_in bool bDraw)
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_setDrawShadow_void_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPictureInsert_setDrawShadow_void_bool_Callback(bDraw);
						}
						else
							return this->IPictureInsert::setDrawShadow(bDraw);
					}
					virtual ev_bool isDrawShadow() const
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_isDrawShadow_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IPictureInsert_isDrawShadow_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IPictureInsert::isDrawShadow();
					}
					virtual void setFrameSymbol(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_setFrameSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPictureInsert_setFrameSymbol_void_ISymbol_Callback(pSymbol);
						}
						else
							return this->IPictureInsert::setFrameSymbol(pSymbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getFrameSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_getFrameSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_IPictureInsert_getFrameSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->IPictureInsert::getFrameSymbol();
					}
					virtual void setIsDrawFrame(_in const ev_bool bDraw)
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_setIsDrawFrame_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPictureInsert_setIsDrawFrame_void_ev_bool_Callback(bDraw);
						}
						else
							return this->IPictureInsert::setIsDrawFrame(bDraw);
					}
					virtual ev_bool isDrawFrame() const
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_isDrawFrame_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IPictureInsert_isDrawFrame_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IPictureInsert::isDrawFrame();
					}
					virtual ev_bool isSelected()
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IPictureInsert_isSelected_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IPictureInsert::isSelected();
					}
					virtual void setSelected(_in ev_bool bSelected)
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPictureInsert_setSelected_void_ev_bool_Callback(bSelected);
						}
						else
							return this->IPictureInsert::setSelected(bSelected);
					}
					virtual ev_real64 getWidth() const
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_getWidth_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Carto_IPictureInsert_getWidth_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IPictureInsert::getWidth();
					}
					virtual void setWidth(_in const ev_real64 dWidth)
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_setWidth_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPictureInsert_setWidth_void_ev_real64_Callback(dWidth);
						}
						else
							return this->IPictureInsert::setWidth(dWidth);
					}
					virtual ev_real64 getHeight() const
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_getHeight_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Carto_IPictureInsert_getHeight_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IPictureInsert::getHeight();
					}
					virtual void setHeight(_in const ev_real64 nHeight)
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_setHeight_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPictureInsert_setHeight_void_ev_real64_Callback(nHeight);
						}
						else
							return this->IPictureInsert::setHeight(nHeight);
					}
					virtual EarthView::World::Display::IBitmap* getPicture() const
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_getPicture_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial_Carto_IPictureInsert_getPicture_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->IPictureInsert::getPicture();
					}
					virtual void setPicture(_in EarthView::World::Display::IBitmap* pBmp)
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_setPicture_void_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPictureInsert_setPicture_void_IBitmap_Callback(pBmp);
						}
						else
							return this->IPictureInsert::setPicture(pBmp);
					}
					virtual ev_bool drawPrepare(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay)
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IPictureInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback(pDisplay);
							return returnValue;
						}
						else
							return this->IPictureInsert::drawPrepare(pDisplay);
					}
					virtual void draw()
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_draw_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPictureInsert_draw_void_Callback();
						}
						else
							return this->IPictureInsert::draw();
					}
					virtual void drawOver()
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_drawOver_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPictureInsert_drawOver_void_Callback();
						}
						else
							return this->IPictureInsert::drawOver();
					}
					virtual EarthView::World::Spatial::Carto::IElement* clone() const
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_clone_IElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::IElement* returnValue = m_EarthView_World_Spatial_Carto_IPictureInsert_clone_IElement_Callback();
							return returnValue;
						}
						else
							return this->IPictureInsert::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPictureInsert_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IPictureInsert::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_IPictureInsert_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->IPictureInsert::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPictureInsert_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->IPictureInsert::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Carto_IPictureInsert_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->IPictureInsert::toXmlElement();
					}
					virtual void fromStream(_in EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPictureInsert_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IPictureInsert::fromStream(stream);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_IPictureInsert_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IPictureInsert::getName();
					}
					virtual void setName(_in EVString name)
					{
						if(m_EarthView_World_Spatial_Carto_IPictureInsert_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Carto_IPictureInsert_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->IPictureInsert::setName(name);
					}
				};
				REGISTER_FACTORY_CLASS(IPictureInsertProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getElementType_EVElementType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::getElementType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->getElementType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_getElementType_EVElementType( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_getElementType_EVElementType_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_getElementType_EVElementType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getElementType_EVElementType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::getElementType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getPath_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::getPath();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getPath();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_getPath_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_getPath_EVString_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_getPath_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getPath_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::getPath();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setPath_void_EVString(void *pObjectXXXX, _in char* strPath )
				{
					EarthView::World::Core::ev_string strPath1 = strPath;
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::setPath(strPath1);
					else
						ptrNativeObject->setPath(strPath1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_setPath_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_setPath_void_EVString_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_setPath_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setPath_void_EVString_NoVirtual(void *pObjectXXXX, _in char* strPath )
				{
					EarthView::World::Core::ev_string strPath1 = strPath;
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::setPath(strPath1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getEnvelope_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::getEnvelope();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelope();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_getEnvelope_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_getEnvelope_IEnvelope_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_getEnvelope_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getEnvelope_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::getEnvelope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setEnvelope_void_IEnvelope(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::setEnvelope(pEnvelope);
					else
						ptrNativeObject->setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_setEnvelope_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_setEnvelope_void_IEnvelope_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_setEnvelope_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setEnvelope_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setBackgroundColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::setBackgroundColor(pColor);
					else
						ptrNativeObject->setBackgroundColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_setBackgroundColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_setBackgroundColor_void_IColor_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_setBackgroundColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setBackgroundColor_void_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::setBackgroundColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getBackgroundColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::getBackgroundColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getBackgroundColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_getBackgroundColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_getBackgroundColor_IColor_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_getBackgroundColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getBackgroundColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::getBackgroundColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setDrawBackground_void_bool(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::setDrawBackground(bDraw);
					else
						ptrNativeObject->setDrawBackground(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_setDrawBackground_void_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_setDrawBackground_void_bool_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_setDrawBackground_void_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setDrawBackground_void_bool_NoVirtual(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::setDrawBackground(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_isDrawBackground_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::isDrawBackground();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawBackground();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_isDrawBackground_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_isDrawBackground_ev_bool_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_isDrawBackground_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_isDrawBackground_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::isDrawBackground();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setShadowColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::setShadowColor(pColor);
					else
						ptrNativeObject->setShadowColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_setShadowColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_setShadowColor_void_IColor_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_setShadowColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setShadowColor_void_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::setShadowColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getShadowColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::getShadowColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getShadowColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_getShadowColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_getShadowColor_IColor_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_getShadowColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getShadowColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::getShadowColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setDrawShadow_void_bool(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::setDrawShadow(bDraw);
					else
						ptrNativeObject->setDrawShadow(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_setDrawShadow_void_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_setDrawShadow_void_bool_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_setDrawShadow_void_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setDrawShadow_void_bool_NoVirtual(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::setDrawShadow(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_isDrawShadow_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::isDrawShadow();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawShadow();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_isDrawShadow_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_isDrawShadow_ev_bool_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_isDrawShadow_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_isDrawShadow_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::isDrawShadow();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setFrameSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::setFrameSymbol(pSymbol);
					else
						ptrNativeObject->setFrameSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_setFrameSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_setFrameSymbol_void_ISymbol_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_setFrameSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setFrameSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::setFrameSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getFrameSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::getFrameSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getFrameSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_getFrameSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_getFrameSymbol_ISymbol_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_getFrameSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getFrameSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::getFrameSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setIsDrawFrame_void_ev_bool(void *pObjectXXXX, _in const ev_bool bDraw )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::setIsDrawFrame(bDraw);
					else
						ptrNativeObject->setIsDrawFrame(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_setIsDrawFrame_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_setIsDrawFrame_void_ev_bool_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_setIsDrawFrame_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setIsDrawFrame_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool bDraw )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::setIsDrawFrame(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_isDrawFrame_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::isDrawFrame();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawFrame();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_isDrawFrame_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_isDrawFrame_ev_bool_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_isDrawFrame_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_isDrawFrame_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::isDrawFrame();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_isSelected_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::isSelected();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelected();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_isSelected_ev_bool_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_isSelected_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_isSelected_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::isSelected();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::setSelected(bSelected);
					else
						ptrNativeObject->setSelected(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_setSelected_void_ev_bool_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_setSelected_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setSelected_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::setSelected(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getWidth_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::getWidth();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getWidth();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_getWidth_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_getWidth_ev_real64_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_getWidth_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getWidth_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::getWidth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setWidth_void_ev_real64(void *pObjectXXXX, _in const ev_real64 dWidth )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::setWidth(dWidth);
					else
						ptrNativeObject->setWidth(dWidth);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_setWidth_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_setWidth_void_ev_real64_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_setWidth_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setWidth_void_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_real64 dWidth )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::setWidth(dWidth);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getHeight_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::getHeight();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getHeight();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_getHeight_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_getHeight_ev_real64_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_getHeight_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getHeight_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::getHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setHeight_void_ev_real64(void *pObjectXXXX, _in const ev_real64 nHeight )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::setHeight(nHeight);
					else
						ptrNativeObject->setHeight(nHeight);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_setHeight_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_setHeight_void_ev_real64_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_setHeight_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setHeight_void_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_real64 nHeight )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::setHeight(nHeight);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getPicture_IBitmap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::getPicture();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getPicture();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_getPicture_IBitmap( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_getPicture_IBitmap_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_getPicture_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_getPicture_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::getPicture();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setPicture_void_IBitmap(void *pObjectXXXX, _in EarthView::World::Display::IBitmap* pBmp )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::setPicture(pBmp);
					else
						ptrNativeObject->setPicture(pBmp);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_setPicture_void_IBitmap( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_setPicture_void_IBitmap_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_setPicture_void_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_setPicture_void_IBitmap_NoVirtual(void *pObjectXXXX, _in EarthView::World::Display::IBitmap* pBmp )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::setPicture(pBmp);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_drawPrepare_ev_bool_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::drawPrepare(pDisplay);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->drawPrepare(pDisplay);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_drawPrepare_ev_bool_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_drawPrepare_ev_bool_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_drawPrepare_ev_bool_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::drawPrepare(pDisplay);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_draw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::draw();
					else
						ptrNativeObject->draw();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_draw_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_draw_void_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_draw_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_draw_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::draw();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_drawOver_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::drawOver();
					else
						ptrNativeObject->drawOver();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_drawOver_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_drawOver_void_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_drawOver_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_drawOver_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::drawOver();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_clone_IElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_clone_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_clone_IElement_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_clone_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_clone_IElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_toStream_void_CDataStream_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_toXML_EVString_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_toXmlElement_CXmlElement_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_fromStream_void_CDataStream(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					if (dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_fromStream_void_CDataStream_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPictureInsert_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::IPictureInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPictureInsert::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_getName_EVString_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPictureInsert_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPictureInsert_setName_void_EVString_Callback* pCallback )
				{
					IPictureInsertProxy* ptr = dynamic_cast<IPictureInsertProxy*>((EarthView::World::Spatial::Carto::IPictureInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPictureInsert_setName_void_EVString(pCallback);
					}
				}
			}
		}
	}
}
