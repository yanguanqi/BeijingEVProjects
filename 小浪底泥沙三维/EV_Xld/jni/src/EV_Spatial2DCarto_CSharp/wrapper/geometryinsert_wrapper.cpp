/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dcarto/geometryinsert.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_getElementType_EVElementType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_getName_EVString_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_getGeometry_IGeometry_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setGeometry_void_IGeometry_Callback)(_in EarthView::World::Spatial::Geometry::IGeometry* pGeometry);
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_getEnvelope_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setEnvelope_void_IEnvelope_Callback)(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_isSelected_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setSelected_void_ev_bool_Callback)(_in ev_bool bSelected);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setBackgroundColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* pColor);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_getBackgroundColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setDrawBackground_void_bool_Callback)(_in bool bDraw);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_isDrawBackground_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setShadowColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* pColor);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_getShadowColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setDrawShadow_void_bool_Callback)(_in bool bDraw);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_isDrawShadow_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setFrameSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_getFrameSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setDrawFrame_void_ev_bool_Callback)(_in const ev_bool bDraw);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_isDrawFrame_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_draw_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_drawOver_void_Callback)();
				typedef EarthView::World::Spatial::Carto::IElement*  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_clone_IElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_fromStream_void_CDataStream_Callback)(_in void* stream);
				class CGeometryInsertProxy : public EarthView::World::Spatial::Carto::CGeometryInsert
				{
				private:
					EarthView_World_Spatial_Carto_CGeometryInsert_getElementType_EVElementType_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_getElementType_EVElementType_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_getName_EVString_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_getName_EVString_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_getGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_getGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_setGeometry_void_IGeometry_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_setGeometry_void_IGeometry_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_getEnvelope_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_getEnvelope_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_setEnvelope_void_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_setEnvelope_void_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_isSelected_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_setSelected_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_setBackgroundColor_void_IColor_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_setBackgroundColor_void_IColor_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_getBackgroundColor_IColor_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_getBackgroundColor_IColor_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_setDrawBackground_void_bool_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_setDrawBackground_void_bool_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_isDrawBackground_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_isDrawBackground_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_setShadowColor_void_IColor_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_setShadowColor_void_IColor_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_getShadowColor_IColor_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_getShadowColor_IColor_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_setDrawShadow_void_bool_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_setDrawShadow_void_bool_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_isDrawShadow_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_isDrawShadow_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_setFrameSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_setFrameSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_getFrameSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_getFrameSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_setDrawFrame_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_setDrawFrame_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_isDrawFrame_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_isDrawFrame_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_draw_void_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_draw_void_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_drawOver_void_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_drawOver_void_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_clone_IElement_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_clone_IElement_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_toXML_EVString_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_toXML_EVString_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_CGeometryInsert_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_CGeometryInsert_fromStream_void_CDataStream_Callback;
				public:
					CGeometryInsertProxy(EarthView::World::Core::CNameValuePairList *pList) : CGeometryInsert(pList)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_getElementType_EVElementType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_getGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_setGeometry_void_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_getEnvelope_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_setEnvelope_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_isSelected_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_setSelected_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_setBackgroundColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_getBackgroundColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_setDrawBackground_void_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_isDrawBackground_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_setShadowColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_getShadowColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_setDrawShadow_void_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_isDrawShadow_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_setFrameSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_getFrameSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_setDrawFrame_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_isDrawFrame_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_draw_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_drawOver_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_clone_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CGeometryInsert_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_getElementType_EVElementType(EarthView_World_Spatial_Carto_CGeometryInsert_getElementType_EVElementType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_getElementType_EVElementType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_getName_EVString(EarthView_World_Spatial_Carto_CGeometryInsert_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_getGeometry_IGeometry(EarthView_World_Spatial_Carto_CGeometryInsert_getGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_getGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setGeometry_void_IGeometry(EarthView_World_Spatial_Carto_CGeometryInsert_setGeometry_void_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_setGeometry_void_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_getEnvelope_IEnvelope(EarthView_World_Spatial_Carto_CGeometryInsert_getEnvelope_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_getEnvelope_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setEnvelope_void_IEnvelope(EarthView_World_Spatial_Carto_CGeometryInsert_setEnvelope_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_setEnvelope_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_isSelected_ev_bool(EarthView_World_Spatial_Carto_CGeometryInsert_isSelected_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_isSelected_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setSelected_void_ev_bool(EarthView_World_Spatial_Carto_CGeometryInsert_setSelected_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_setSelected_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setBackgroundColor_void_IColor(EarthView_World_Spatial_Carto_CGeometryInsert_setBackgroundColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_setBackgroundColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_getBackgroundColor_IColor(EarthView_World_Spatial_Carto_CGeometryInsert_getBackgroundColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_getBackgroundColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setDrawBackground_void_bool(EarthView_World_Spatial_Carto_CGeometryInsert_setDrawBackground_void_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_setDrawBackground_void_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_isDrawBackground_ev_bool(EarthView_World_Spatial_Carto_CGeometryInsert_isDrawBackground_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_isDrawBackground_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setShadowColor_void_IColor(EarthView_World_Spatial_Carto_CGeometryInsert_setShadowColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_setShadowColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_getShadowColor_IColor(EarthView_World_Spatial_Carto_CGeometryInsert_getShadowColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_getShadowColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setDrawShadow_void_bool(EarthView_World_Spatial_Carto_CGeometryInsert_setDrawShadow_void_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_setDrawShadow_void_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_isDrawShadow_ev_bool(EarthView_World_Spatial_Carto_CGeometryInsert_isDrawShadow_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_isDrawShadow_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setFrameSymbol_void_ISymbol(EarthView_World_Spatial_Carto_CGeometryInsert_setFrameSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_setFrameSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_getFrameSymbol_ISymbol(EarthView_World_Spatial_Carto_CGeometryInsert_getFrameSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_getFrameSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setDrawFrame_void_ev_bool(EarthView_World_Spatial_Carto_CGeometryInsert_setDrawFrame_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_setDrawFrame_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_isDrawFrame_ev_bool(EarthView_World_Spatial_Carto_CGeometryInsert_isDrawFrame_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_isDrawFrame_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_drawPrepare_ev_bool_ISpatialDisplay(EarthView_World_Spatial_Carto_CGeometryInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_draw_void(EarthView_World_Spatial_Carto_CGeometryInsert_draw_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_draw_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_drawOver_void(EarthView_World_Spatial_Carto_CGeometryInsert_drawOver_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_drawOver_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_clone_IElement(EarthView_World_Spatial_Carto_CGeometryInsert_clone_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_clone_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_toStream_void_CDataStream(EarthView_World_Spatial_Carto_CGeometryInsert_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_toXML_EVString(EarthView_World_Spatial_Carto_CGeometryInsert_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Carto_CGeometryInsert_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_toXmlElement_CXmlElement(EarthView_World_Spatial_Carto_CGeometryInsert_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_fromStream_void_CDataStream(EarthView_World_Spatial_Carto_CGeometryInsert_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CGeometryInsert_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Carto::EVElementType getElementType() const
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_getElementType_EVElementType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::EVElementType returnValue = (EarthView::World::Spatial::Carto::EVElementType)m_EarthView_World_Spatial_Carto_CGeometryInsert_getElementType_EVElementType_Callback();
							return returnValue;
						}
						else
							return this->CGeometryInsert::getElementType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_CGeometryInsert_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CGeometryInsert::getName();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* getGeometry() const
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_getGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Carto_CGeometryInsert_getGeometry_IGeometry_Callback();
							return returnValue;
						}
						else
							return this->CGeometryInsert::getGeometry();
					}
					virtual void setGeometry(_in EarthView::World::Spatial::Geometry::IGeometry* pGeometry)
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_setGeometry_void_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGeometryInsert_setGeometry_void_IGeometry_Callback(pGeometry);
						}
						else
							return this->CGeometryInsert::setGeometry(pGeometry);
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_getEnvelope_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Carto_CGeometryInsert_getEnvelope_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CGeometryInsert::getEnvelope();
					}
					virtual void setEnvelope(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope)
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_setEnvelope_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGeometryInsert_setEnvelope_void_IEnvelope_Callback(pEnvelope);
						}
						else
							return this->CGeometryInsert::setEnvelope(pEnvelope);
					}
					virtual ev_bool isSelected()
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CGeometryInsert_isSelected_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGeometryInsert::isSelected();
					}
					virtual void setSelected(_in ev_bool bSelected)
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGeometryInsert_setSelected_void_ev_bool_Callback(bSelected);
						}
						else
							return this->CGeometryInsert::setSelected(bSelected);
					}
					virtual void setBackgroundColor(_in const EarthView::World::Spatial::Display::IColor* pColor)
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_setBackgroundColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGeometryInsert_setBackgroundColor_void_IColor_Callback(pColor);
						}
						else
							return this->CGeometryInsert::setBackgroundColor(pColor);
					}
					virtual EarthView::World::Spatial::Display::IColor* getBackgroundColor() const
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_getBackgroundColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Carto_CGeometryInsert_getBackgroundColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CGeometryInsert::getBackgroundColor();
					}
					virtual void setDrawBackground(_in bool bDraw)
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_setDrawBackground_void_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGeometryInsert_setDrawBackground_void_bool_Callback(bDraw);
						}
						else
							return this->CGeometryInsert::setDrawBackground(bDraw);
					}
					virtual ev_bool isDrawBackground() const
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_isDrawBackground_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CGeometryInsert_isDrawBackground_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGeometryInsert::isDrawBackground();
					}
					virtual void setShadowColor(_in const EarthView::World::Spatial::Display::IColor* pColor)
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_setShadowColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGeometryInsert_setShadowColor_void_IColor_Callback(pColor);
						}
						else
							return this->CGeometryInsert::setShadowColor(pColor);
					}
					virtual EarthView::World::Spatial::Display::IColor* getShadowColor() const
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_getShadowColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Carto_CGeometryInsert_getShadowColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CGeometryInsert::getShadowColor();
					}
					virtual void setDrawShadow(_in bool bDraw)
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_setDrawShadow_void_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGeometryInsert_setDrawShadow_void_bool_Callback(bDraw);
						}
						else
							return this->CGeometryInsert::setDrawShadow(bDraw);
					}
					virtual ev_bool isDrawShadow() const
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_isDrawShadow_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CGeometryInsert_isDrawShadow_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGeometryInsert::isDrawShadow();
					}
					virtual void setFrameSymbol(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_setFrameSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGeometryInsert_setFrameSymbol_void_ISymbol_Callback(pSymbol);
						}
						else
							return this->CGeometryInsert::setFrameSymbol(pSymbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getFrameSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_getFrameSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_CGeometryInsert_getFrameSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CGeometryInsert::getFrameSymbol();
					}
					virtual void setDrawFrame(_in const ev_bool bDraw)
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_setDrawFrame_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGeometryInsert_setDrawFrame_void_ev_bool_Callback(bDraw);
						}
						else
							return this->CGeometryInsert::setDrawFrame(bDraw);
					}
					virtual ev_bool isDrawFrame() const
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_isDrawFrame_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CGeometryInsert_isDrawFrame_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGeometryInsert::isDrawFrame();
					}
					virtual ev_bool drawPrepare(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay)
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CGeometryInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback(pDisplay);
							return returnValue;
						}
						else
							return this->CGeometryInsert::drawPrepare(pDisplay);
					}
					virtual void draw()
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_draw_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGeometryInsert_draw_void_Callback();
						}
						else
							return this->CGeometryInsert::draw();
					}
					virtual void drawOver()
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_drawOver_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGeometryInsert_drawOver_void_Callback();
						}
						else
							return this->CGeometryInsert::drawOver();
					}
					virtual EarthView::World::Spatial::Carto::IElement* clone() const
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_clone_IElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::IElement* returnValue = m_EarthView_World_Spatial_Carto_CGeometryInsert_clone_IElement_Callback();
							return returnValue;
						}
						else
							return this->CGeometryInsert::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGeometryInsert_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CGeometryInsert::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_CGeometryInsert_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CGeometryInsert::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGeometryInsert_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CGeometryInsert::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Carto_CGeometryInsert_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CGeometryInsert::toXmlElement();
					}
					virtual void fromStream(_in EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Carto_CGeometryInsert_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CGeometryInsert_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CGeometryInsert::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(CGeometryInsertProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_getElementType_EVElementType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::getElementType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->getElementType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_getElementType_EVElementType( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_getElementType_EVElementType_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_getElementType_EVElementType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_getElementType_EVElementType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::getElementType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_getName_EVString_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_getGeometry_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::getGeometry();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->getGeometry();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_getGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_getGeometry_IGeometry_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_getGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_getGeometry_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::getGeometry();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setGeometry_void_IGeometry(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IGeometry* pGeometry )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::setGeometry(pGeometry);
					else
						ptrNativeObject->setGeometry(pGeometry);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setGeometry_void_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_setGeometry_void_IGeometry_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setGeometry_void_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setGeometry_void_IGeometry_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IGeometry* pGeometry )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::setGeometry(pGeometry);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_getEnvelope_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::getEnvelope();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelope();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_getEnvelope_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_getEnvelope_IEnvelope_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_getEnvelope_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_getEnvelope_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::getEnvelope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setEnvelope_void_IEnvelope(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::setEnvelope(pEnvelope);
					else
						ptrNativeObject->setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setEnvelope_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_setEnvelope_void_IEnvelope_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setEnvelope_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setEnvelope_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_isSelected_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::isSelected();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelected();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_isSelected_ev_bool_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_isSelected_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_isSelected_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::isSelected();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::setSelected(bSelected);
					else
						ptrNativeObject->setSelected(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_setSelected_void_ev_bool_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setSelected_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setSelected_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::setSelected(bSelected);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setBackgroundColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::setBackgroundColor(pColor);
					else
						ptrNativeObject->setBackgroundColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setBackgroundColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_setBackgroundColor_void_IColor_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setBackgroundColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setBackgroundColor_void_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::setBackgroundColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_getBackgroundColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::getBackgroundColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getBackgroundColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_getBackgroundColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_getBackgroundColor_IColor_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_getBackgroundColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_getBackgroundColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::getBackgroundColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setDrawBackground_void_bool(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::setDrawBackground(bDraw);
					else
						ptrNativeObject->setDrawBackground(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setDrawBackground_void_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_setDrawBackground_void_bool_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setDrawBackground_void_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setDrawBackground_void_bool_NoVirtual(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::setDrawBackground(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_isDrawBackground_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::isDrawBackground();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawBackground();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_isDrawBackground_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_isDrawBackground_ev_bool_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_isDrawBackground_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_isDrawBackground_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::isDrawBackground();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setShadowColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::setShadowColor(pColor);
					else
						ptrNativeObject->setShadowColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setShadowColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_setShadowColor_void_IColor_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setShadowColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setShadowColor_void_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::setShadowColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_getShadowColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::getShadowColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getShadowColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_getShadowColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_getShadowColor_IColor_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_getShadowColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_getShadowColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::getShadowColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setDrawShadow_void_bool(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::setDrawShadow(bDraw);
					else
						ptrNativeObject->setDrawShadow(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setDrawShadow_void_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_setDrawShadow_void_bool_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setDrawShadow_void_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setDrawShadow_void_bool_NoVirtual(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::setDrawShadow(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_isDrawShadow_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::isDrawShadow();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawShadow();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_isDrawShadow_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_isDrawShadow_ev_bool_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_isDrawShadow_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_isDrawShadow_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::isDrawShadow();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setFrameSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::setFrameSymbol(pSymbol);
					else
						ptrNativeObject->setFrameSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setFrameSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_setFrameSymbol_void_ISymbol_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setFrameSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setFrameSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::setFrameSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_getFrameSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::getFrameSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getFrameSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_getFrameSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_getFrameSymbol_ISymbol_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_getFrameSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_getFrameSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::getFrameSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setDrawFrame_void_ev_bool(void *pObjectXXXX, _in const ev_bool bDraw )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::setDrawFrame(bDraw);
					else
						ptrNativeObject->setDrawFrame(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setDrawFrame_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_setDrawFrame_void_ev_bool_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_setDrawFrame_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_setDrawFrame_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool bDraw )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::setDrawFrame(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_isDrawFrame_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::isDrawFrame();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawFrame();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_isDrawFrame_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_isDrawFrame_ev_bool_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_isDrawFrame_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_isDrawFrame_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::isDrawFrame();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_drawPrepare_ev_bool_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::drawPrepare(pDisplay);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->drawPrepare(pDisplay);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_drawPrepare_ev_bool_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_drawPrepare_ev_bool_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_drawPrepare_ev_bool_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::drawPrepare(pDisplay);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_draw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::draw();
					else
						ptrNativeObject->draw();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_draw_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_draw_void_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_draw_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_draw_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::draw();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_drawOver_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::drawOver();
					else
						ptrNativeObject->drawOver();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_drawOver_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_drawOver_void_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_drawOver_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_drawOver_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::drawOver();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_clone_IElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_clone_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_clone_IElement_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_clone_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_clone_IElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_toStream_void_CDataStream_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_toXML_EVString_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_fromStream_void_CDataStream(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					if (dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CGeometryInsert_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_CGeometryInsert_fromStream_void_CDataStream_Callback* pCallback )
				{
					CGeometryInsertProxy* ptr = dynamic_cast<CGeometryInsertProxy*>((EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CGeometryInsert_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CGeometryInsert_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::CGeometryInsert* ptrNativeObject = (EarthView::World::Spatial::Carto::CGeometryInsert*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CGeometryInsert::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
			}
		}
	}
}
