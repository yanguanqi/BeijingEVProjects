/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/imarkernortharrow.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setType_void_EVNorthArrowType_Callback)(_in const int type);
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getType_EVNorthArrowType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setMarkerSymbol_void_ISymbol_Callback)(_in EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getMarkerSymbol_ISymbol_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getMapAngle_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getCorrectionAngle_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setCorrectionAngle_void_ev_real64_Callback)(_in const ev_real64 dAngle);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setMapFrame_void_IMapFrame_Callback)(_in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setSize_void_ev_real64_Callback)(_in const ev_real64 size);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getSize_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* pColor);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getColor_IColor_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getPreviw_IBitmap_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setBackgroundColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* pColor);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getBackgroundColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawBackground_void_bool_Callback)(_in bool bDraw);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawBackground_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setShadowColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* pColor);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getShadowColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawShadow_void_bool_Callback)(_in bool bDraw);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawShadow_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setFrameSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getFrameSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawFrame_void_ev_bool_Callback)(_in const ev_bool bDraw);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawFrame_ev_bool_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getElementType_EVElementType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setName_void_EVString_Callback)(_in char*& name);
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getEnvelope_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setEnvelope_void_IEnvelope_Callback)(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_isSelected_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setSelected_void_ev_bool_Callback)(_in ev_bool bSelected);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_drawPrepare_ev_bool_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_draw_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_drawOver_void_Callback)();
				typedef EarthView::World::Spatial::Carto::IElement*  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_clone_IElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_fromStream_void_CDataStream_Callback)(_in void* stream);
				class IMarkNorthArrowProxy : public EarthView::World::Spatial::Carto::IMarkNorthArrow
				{
				private:
					EarthView_World_Spatial_Carto_IMarkNorthArrow_setType_void_EVNorthArrowType_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setType_void_EVNorthArrowType_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_getType_EVNorthArrowType_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getType_EVNorthArrowType_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_setMarkerSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setMarkerSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_getMarkerSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getMarkerSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_getMapAngle_ev_real64_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getMapAngle_ev_real64_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_getCorrectionAngle_ev_real64_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getCorrectionAngle_ev_real64_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_setCorrectionAngle_void_ev_real64_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setCorrectionAngle_void_ev_real64_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_setMapFrame_void_IMapFrame_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setMapFrame_void_IMapFrame_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_setSize_void_ev_real64_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setSize_void_ev_real64_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_getSize_ev_real64_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getSize_ev_real64_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_setColor_void_IColor_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setColor_void_IColor_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_getColor_IColor_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getColor_IColor_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_getPreviw_IBitmap_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getPreviw_IBitmap_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_setBackgroundColor_void_IColor_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setBackgroundColor_void_IColor_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_getBackgroundColor_IColor_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getBackgroundColor_IColor_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawBackground_void_bool_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawBackground_void_bool_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawBackground_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawBackground_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_setShadowColor_void_IColor_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setShadowColor_void_IColor_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_getShadowColor_IColor_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getShadowColor_IColor_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawShadow_void_bool_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawShadow_void_bool_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawShadow_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawShadow_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_setFrameSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setFrameSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_getFrameSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getFrameSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawFrame_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawFrame_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawFrame_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawFrame_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_getElementType_EVElementType_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getElementType_EVElementType_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_getName_EVString_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getName_EVString_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_setName_void_EVString_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setName_void_EVString_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_getEnvelope_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getEnvelope_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_setEnvelope_void_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setEnvelope_void_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_isSelected_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setSelected_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_drawPrepare_ev_bool_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_drawPrepare_ev_bool_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_draw_void_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_draw_void_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_drawOver_void_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_drawOver_void_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_clone_IElement_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_clone_IElement_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_toXML_EVString_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_toXML_EVString_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_IMarkNorthArrow_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_IMarkNorthArrow_fromStream_void_CDataStream_Callback;
				public:
					IMarkNorthArrowProxy(EarthView::World::Core::CNameValuePairList *pList) : IMarkNorthArrow(pList)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setType_void_EVNorthArrowType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getType_EVNorthArrowType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setMarkerSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getMarkerSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getMapAngle_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getCorrectionAngle_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setCorrectionAngle_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setMapFrame_void_IMapFrame_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setSize_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getSize_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getPreviw_IBitmap_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setBackgroundColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getBackgroundColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawBackground_void_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawBackground_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setShadowColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getShadowColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawShadow_void_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawShadow_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setFrameSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getFrameSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawFrame_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawFrame_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getElementType_EVElementType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getEnvelope_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setEnvelope_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_isSelected_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setSelected_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_drawPrepare_ev_bool_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_draw_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_drawOver_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_clone_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setType_void_EVNorthArrowType(EarthView_World_Spatial_Carto_IMarkNorthArrow_setType_void_EVNorthArrowType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setType_void_EVNorthArrowType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getType_EVNorthArrowType(EarthView_World_Spatial_Carto_IMarkNorthArrow_getType_EVNorthArrowType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getType_EVNorthArrowType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setMarkerSymbol_void_ISymbol(EarthView_World_Spatial_Carto_IMarkNorthArrow_setMarkerSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setMarkerSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getMarkerSymbol_ISymbol(EarthView_World_Spatial_Carto_IMarkNorthArrow_getMarkerSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getMarkerSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getMapAngle_ev_real64(EarthView_World_Spatial_Carto_IMarkNorthArrow_getMapAngle_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getMapAngle_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getCorrectionAngle_ev_real64(EarthView_World_Spatial_Carto_IMarkNorthArrow_getCorrectionAngle_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getCorrectionAngle_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setCorrectionAngle_void_ev_real64(EarthView_World_Spatial_Carto_IMarkNorthArrow_setCorrectionAngle_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setCorrectionAngle_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setMapFrame_void_IMapFrame(EarthView_World_Spatial_Carto_IMarkNorthArrow_setMapFrame_void_IMapFrame_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setMapFrame_void_IMapFrame_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setSize_void_ev_real64(EarthView_World_Spatial_Carto_IMarkNorthArrow_setSize_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setSize_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getSize_ev_real64(EarthView_World_Spatial_Carto_IMarkNorthArrow_getSize_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getSize_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setColor_void_IColor(EarthView_World_Spatial_Carto_IMarkNorthArrow_setColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getColor_IColor(EarthView_World_Spatial_Carto_IMarkNorthArrow_getColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getPreviw_IBitmap_ISpatialDisplay(EarthView_World_Spatial_Carto_IMarkNorthArrow_getPreviw_IBitmap_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getPreviw_IBitmap_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setBackgroundColor_void_IColor(EarthView_World_Spatial_Carto_IMarkNorthArrow_setBackgroundColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setBackgroundColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getBackgroundColor_IColor(EarthView_World_Spatial_Carto_IMarkNorthArrow_getBackgroundColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getBackgroundColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawBackground_void_bool(EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawBackground_void_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawBackground_void_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawBackground_ev_bool(EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawBackground_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawBackground_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setShadowColor_void_IColor(EarthView_World_Spatial_Carto_IMarkNorthArrow_setShadowColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setShadowColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getShadowColor_IColor(EarthView_World_Spatial_Carto_IMarkNorthArrow_getShadowColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getShadowColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawShadow_void_bool(EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawShadow_void_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawShadow_void_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawShadow_ev_bool(EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawShadow_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawShadow_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setFrameSymbol_void_ISymbol(EarthView_World_Spatial_Carto_IMarkNorthArrow_setFrameSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setFrameSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getFrameSymbol_ISymbol(EarthView_World_Spatial_Carto_IMarkNorthArrow_getFrameSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getFrameSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawFrame_void_ev_bool(EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawFrame_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawFrame_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawFrame_ev_bool(EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawFrame_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawFrame_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getElementType_EVElementType(EarthView_World_Spatial_Carto_IMarkNorthArrow_getElementType_EVElementType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getElementType_EVElementType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getName_EVString(EarthView_World_Spatial_Carto_IMarkNorthArrow_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setName_void_EVString(EarthView_World_Spatial_Carto_IMarkNorthArrow_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getEnvelope_IEnvelope(EarthView_World_Spatial_Carto_IMarkNorthArrow_getEnvelope_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getEnvelope_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setEnvelope_void_IEnvelope(EarthView_World_Spatial_Carto_IMarkNorthArrow_setEnvelope_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setEnvelope_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_isSelected_ev_bool(EarthView_World_Spatial_Carto_IMarkNorthArrow_isSelected_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_isSelected_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setSelected_void_ev_bool(EarthView_World_Spatial_Carto_IMarkNorthArrow_setSelected_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setSelected_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_drawPrepare_ev_bool_ISpatialDisplay(EarthView_World_Spatial_Carto_IMarkNorthArrow_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_drawPrepare_ev_bool_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_draw_void(EarthView_World_Spatial_Carto_IMarkNorthArrow_draw_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_draw_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_drawOver_void(EarthView_World_Spatial_Carto_IMarkNorthArrow_drawOver_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_drawOver_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_clone_IElement(EarthView_World_Spatial_Carto_IMarkNorthArrow_clone_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_clone_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_toStream_void_CDataStream(EarthView_World_Spatial_Carto_IMarkNorthArrow_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_toXML_EVString(EarthView_World_Spatial_Carto_IMarkNorthArrow_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Carto_IMarkNorthArrow_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_toXmlElement_CXmlElement(EarthView_World_Spatial_Carto_IMarkNorthArrow_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_fromStream_void_CDataStream(EarthView_World_Spatial_Carto_IMarkNorthArrow_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMarkNorthArrow_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Carto::EVElementType getElementType() const
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getElementType_EVElementType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::EVElementType returnValue = (EarthView::World::Spatial::Carto::EVElementType)m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getElementType_EVElementType_Callback();
							return returnValue;
						}
						else
							return this->IMarkNorthArrow::getElementType();
					}
					virtual void setType(_in const EarthView::World::Spatial::Carto::EVNorthArrowType type)
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setType_void_EVNorthArrowType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setType_void_EVNorthArrowType_Callback((int)type);
						}
						else
							return this->IMarkNorthArrow::setType(type);
					}
					virtual EarthView::World::Spatial::Carto::EVNorthArrowType getType() const
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getType_EVNorthArrowType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::EVNorthArrowType returnValue = (EarthView::World::Spatial::Carto::EVNorthArrowType)m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getType_EVNorthArrowType_Callback();
							return returnValue;
						}
						else
							return this->IMarkNorthArrow::getType();
					}
					virtual void setMarkerSymbol(_in EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setMarkerSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setMarkerSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->IMarkNorthArrow::setMarkerSymbol(symbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getMarkerSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getMarkerSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getMarkerSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->IMarkNorthArrow::getMarkerSymbol();
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getEnvelope_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getEnvelope_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->IMarkNorthArrow::getEnvelope();
					}
					virtual void setEnvelope(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope)
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setEnvelope_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setEnvelope_void_IEnvelope_Callback(pEnvelope);
						}
						else
							return this->IMarkNorthArrow::setEnvelope(pEnvelope);
					}
					virtual ev_real64 getMapAngle() const
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getMapAngle_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getMapAngle_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IMarkNorthArrow::getMapAngle();
					}
					virtual ev_real64 getCorrectionAngle() const
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getCorrectionAngle_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getCorrectionAngle_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IMarkNorthArrow::getCorrectionAngle();
					}
					virtual void setCorrectionAngle(_in const ev_real64 dAngle)
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setCorrectionAngle_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setCorrectionAngle_void_ev_real64_Callback(dAngle);
						}
						else
							return this->IMarkNorthArrow::setCorrectionAngle(dAngle);
					}
					virtual void setMapFrame(_in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame)
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setMapFrame_void_IMapFrame_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setMapFrame_void_IMapFrame_Callback(pMapFrame);
						}
						else
							return this->IMarkNorthArrow::setMapFrame(pMapFrame);
					}
					virtual void setSize(_in const ev_real64 size)
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setSize_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setSize_void_ev_real64_Callback(size);
						}
						else
							return this->IMarkNorthArrow::setSize(size);
					}
					virtual ev_real64 getSize() const
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getSize_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getSize_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IMarkNorthArrow::getSize();
					}
					virtual void setColor(_in const EarthView::World::Spatial::Display::IColor* pColor)
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setColor_void_IColor_Callback(pColor);
						}
						else
							return this->IMarkNorthArrow::setColor(pColor);
					}
					virtual EarthView::World::Spatial::Display::IColor* getColor() const
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->IMarkNorthArrow::getColor();
					}
					virtual EarthView::World::Display::IBitmap* getPreviw(_in EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay)
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getPreviw_IBitmap_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getPreviw_IBitmap_ISpatialDisplay_Callback(pPageDisplay);
							return returnValue;
						}
						else
							return this->IMarkNorthArrow::getPreviw(pPageDisplay);
					}
					virtual void setBackgroundColor(_in const EarthView::World::Spatial::Display::IColor* pColor)
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setBackgroundColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setBackgroundColor_void_IColor_Callback(pColor);
						}
						else
							return this->IMarkNorthArrow::setBackgroundColor(pColor);
					}
					virtual EarthView::World::Spatial::Display::IColor* getBackgroundColor() const
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getBackgroundColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getBackgroundColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->IMarkNorthArrow::getBackgroundColor();
					}
					virtual void setDrawBackground(_in bool bDraw)
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawBackground_void_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawBackground_void_bool_Callback(bDraw);
						}
						else
							return this->IMarkNorthArrow::setDrawBackground(bDraw);
					}
					virtual ev_bool isDrawBackground() const
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawBackground_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawBackground_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IMarkNorthArrow::isDrawBackground();
					}
					virtual void setShadowColor(_in const EarthView::World::Spatial::Display::IColor* pColor)
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setShadowColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setShadowColor_void_IColor_Callback(pColor);
						}
						else
							return this->IMarkNorthArrow::setShadowColor(pColor);
					}
					virtual EarthView::World::Spatial::Display::IColor* getShadowColor() const
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getShadowColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getShadowColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->IMarkNorthArrow::getShadowColor();
					}
					virtual void setDrawShadow(_in bool bDraw)
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawShadow_void_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawShadow_void_bool_Callback(bDraw);
						}
						else
							return this->IMarkNorthArrow::setDrawShadow(bDraw);
					}
					virtual ev_bool isDrawShadow() const
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawShadow_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawShadow_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IMarkNorthArrow::isDrawShadow();
					}
					virtual void setFrameSymbol(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setFrameSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setFrameSymbol_void_ISymbol_Callback(pSymbol);
						}
						else
							return this->IMarkNorthArrow::setFrameSymbol(pSymbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getFrameSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getFrameSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getFrameSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->IMarkNorthArrow::getFrameSymbol();
					}
					virtual void setDrawFrame(_in const ev_bool bDraw)
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawFrame_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawFrame_void_ev_bool_Callback(bDraw);
						}
						else
							return this->IMarkNorthArrow::setDrawFrame(bDraw);
					}
					virtual ev_bool isDrawFrame() const
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawFrame_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawFrame_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IMarkNorthArrow::isDrawFrame();
					}
					virtual ev_bool drawPrepare(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay)
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_drawPrepare_ev_bool_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IMarkNorthArrow_drawPrepare_ev_bool_ISpatialDisplay_Callback(pDisplay);
							return returnValue;
						}
						else
							return this->IMarkNorthArrow::drawPrepare(pDisplay);
					}
					virtual void draw()
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_draw_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMarkNorthArrow_draw_void_Callback();
						}
						else
							return this->IMarkNorthArrow::draw();
					}
					virtual void drawOver()
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_drawOver_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMarkNorthArrow_drawOver_void_Callback();
						}
						else
							return this->IMarkNorthArrow::drawOver();
					}
					virtual ev_bool isSelected()
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IMarkNorthArrow_isSelected_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IMarkNorthArrow::isSelected();
					}
					virtual void setSelected(_in ev_bool b)
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setSelected_void_ev_bool_Callback(b);
						}
						else
							return this->IMarkNorthArrow::setSelected(b);
					}
					virtual EarthView::World::Spatial::Carto::IElement* clone() const
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_clone_IElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::IElement* returnValue = m_EarthView_World_Spatial_Carto_IMarkNorthArrow_clone_IElement_Callback();
							return returnValue;
						}
						else
							return this->IMarkNorthArrow::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMarkNorthArrow_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IMarkNorthArrow::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_IMarkNorthArrow_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->IMarkNorthArrow::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMarkNorthArrow_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->IMarkNorthArrow::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Carto_IMarkNorthArrow_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->IMarkNorthArrow::toXmlElement();
					}
					virtual void fromStream(_in EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMarkNorthArrow_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IMarkNorthArrow::fromStream(stream);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_IMarkNorthArrow_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IMarkNorthArrow::getName();
					}
					virtual void setName(_in EVString name)
					{
						if(m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Carto_IMarkNorthArrow_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->IMarkNorthArrow::setName(name);
					}
				};
				REGISTER_FACTORY_CLASS(IMarkNorthArrowProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getElementType_EVElementType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::getElementType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->getElementType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getElementType_EVElementType( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_getElementType_EVElementType_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getElementType_EVElementType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getElementType_EVElementType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::getElementType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setType_void_EVNorthArrowType(void *pObjectXXXX, _in const int type )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setType((EarthView::World::Spatial::Carto::EVNorthArrowType)type);
					else
						ptrNativeObject->setType((EarthView::World::Spatial::Carto::EVNorthArrowType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setType_void_EVNorthArrowType( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_setType_void_EVNorthArrowType_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setType_void_EVNorthArrowType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setType_void_EVNorthArrowType_NoVirtual(void *pObjectXXXX, _in const int type )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setType((EarthView::World::Spatial::Carto::EVNorthArrowType)type);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getType_EVNorthArrowType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::EVNorthArrowType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVNorthArrowType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getType_EVNorthArrowType( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_getType_EVNorthArrowType_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getType_EVNorthArrowType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getType_EVNorthArrowType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					EarthView::World::Spatial::Carto::EVNorthArrowType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setMarkerSymbol_void_ISymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setMarkerSymbol(symbol);
					else
						ptrNativeObject->setMarkerSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setMarkerSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_setMarkerSymbol_void_ISymbol_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setMarkerSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setMarkerSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setMarkerSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getMarkerSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::getMarkerSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getMarkerSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getMarkerSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_getMarkerSymbol_ISymbol_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getMarkerSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getMarkerSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::getMarkerSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getEnvelope_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::getEnvelope();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelope();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getEnvelope_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_getEnvelope_IEnvelope_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getEnvelope_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getEnvelope_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::getEnvelope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setEnvelope_void_IEnvelope(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setEnvelope(pEnvelope);
					else
						ptrNativeObject->setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setEnvelope_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_setEnvelope_void_IEnvelope_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setEnvelope_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setEnvelope_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getMapAngle_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::getMapAngle();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMapAngle();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getMapAngle_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_getMapAngle_ev_real64_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getMapAngle_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getMapAngle_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::getMapAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getCorrectionAngle_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::getCorrectionAngle();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getCorrectionAngle();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getCorrectionAngle_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_getCorrectionAngle_ev_real64_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getCorrectionAngle_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getCorrectionAngle_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::getCorrectionAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setCorrectionAngle_void_ev_real64(void *pObjectXXXX, _in const ev_real64 dAngle )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setCorrectionAngle(dAngle);
					else
						ptrNativeObject->setCorrectionAngle(dAngle);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setCorrectionAngle_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_setCorrectionAngle_void_ev_real64_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setCorrectionAngle_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setCorrectionAngle_void_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_real64 dAngle )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setCorrectionAngle(dAngle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setMapFrame_void_IMapFrame(void *pObjectXXXX, _in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setMapFrame(pMapFrame);
					else
						ptrNativeObject->setMapFrame(pMapFrame);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setMapFrame_void_IMapFrame( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_setMapFrame_void_IMapFrame_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setMapFrame_void_IMapFrame(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setMapFrame_void_IMapFrame_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setMapFrame(pMapFrame);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setSize_void_ev_real64(void *pObjectXXXX, _in const ev_real64 size )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setSize(size);
					else
						ptrNativeObject->setSize(size);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setSize_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_setSize_void_ev_real64_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setSize_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setSize_void_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_real64 size )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setSize(size);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getSize_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::getSize();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getSize();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getSize_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_getSize_ev_real64_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getSize_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getSize_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::getSize();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setColor(pColor);
					else
						ptrNativeObject->setColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_setColor_void_IColor_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setColor_void_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::getColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_getColor_IColor_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::getColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getPreviw_IBitmap_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::getPreviw(pPageDisplay);
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getPreviw(pPageDisplay);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getPreviw_IBitmap_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_getPreviw_IBitmap_ISpatialDisplay_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getPreviw_IBitmap_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getPreviw_IBitmap_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::getPreviw(pPageDisplay);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setBackgroundColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setBackgroundColor(pColor);
					else
						ptrNativeObject->setBackgroundColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setBackgroundColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_setBackgroundColor_void_IColor_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setBackgroundColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setBackgroundColor_void_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setBackgroundColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getBackgroundColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::getBackgroundColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getBackgroundColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getBackgroundColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_getBackgroundColor_IColor_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getBackgroundColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getBackgroundColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::getBackgroundColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawBackground_void_bool(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setDrawBackground(bDraw);
					else
						ptrNativeObject->setDrawBackground(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawBackground_void_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawBackground_void_bool_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawBackground_void_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawBackground_void_bool_NoVirtual(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setDrawBackground(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawBackground_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::isDrawBackground();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawBackground();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawBackground_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawBackground_ev_bool_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawBackground_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawBackground_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::isDrawBackground();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setShadowColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setShadowColor(pColor);
					else
						ptrNativeObject->setShadowColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setShadowColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_setShadowColor_void_IColor_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setShadowColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setShadowColor_void_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setShadowColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getShadowColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::getShadowColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getShadowColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getShadowColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_getShadowColor_IColor_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getShadowColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getShadowColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::getShadowColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawShadow_void_bool(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setDrawShadow(bDraw);
					else
						ptrNativeObject->setDrawShadow(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawShadow_void_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawShadow_void_bool_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawShadow_void_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawShadow_void_bool_NoVirtual(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setDrawShadow(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawShadow_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::isDrawShadow();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawShadow();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawShadow_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawShadow_ev_bool_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawShadow_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawShadow_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::isDrawShadow();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setFrameSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setFrameSymbol(pSymbol);
					else
						ptrNativeObject->setFrameSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setFrameSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_setFrameSymbol_void_ISymbol_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setFrameSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setFrameSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setFrameSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getFrameSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::getFrameSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getFrameSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getFrameSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_getFrameSymbol_ISymbol_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getFrameSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_getFrameSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::getFrameSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawFrame_void_ev_bool(void *pObjectXXXX, _in const ev_bool bDraw )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setDrawFrame(bDraw);
					else
						ptrNativeObject->setDrawFrame(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawFrame_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawFrame_void_ev_bool_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawFrame_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setDrawFrame_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool bDraw )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setDrawFrame(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawFrame_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::isDrawFrame();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawFrame();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawFrame_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawFrame_ev_bool_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawFrame_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_isDrawFrame_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::isDrawFrame();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_drawPrepare_ev_bool_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::drawPrepare(pDisplay);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->drawPrepare(pDisplay);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_drawPrepare_ev_bool_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_drawPrepare_ev_bool_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_drawPrepare_ev_bool_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::drawPrepare(pDisplay);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_draw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::draw();
					else
						ptrNativeObject->draw();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_draw_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_draw_void_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_draw_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_draw_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::draw();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_drawOver_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::drawOver();
					else
						ptrNativeObject->drawOver();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_drawOver_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_drawOver_void_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_drawOver_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_drawOver_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::drawOver();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_isSelected_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::isSelected();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelected();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_isSelected_ev_bool_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_isSelected_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_isSelected_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::isSelected();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool b )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setSelected(b);
					else
						ptrNativeObject->setSelected(b);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_setSelected_void_ev_bool_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setSelected_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_setSelected_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool b )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::setSelected(b);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_clone_IElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_clone_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_clone_IElement_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_clone_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_clone_IElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_toStream_void_CDataStream_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_toXML_EVString_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_toXmlElement_CXmlElement_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_fromStream_void_CDataStream(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					if (dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_fromStream_void_CDataStream_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMarkNorthArrow_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::IMarkNorthArrow* ptrNativeObject = (EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMarkNorthArrow::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_getName_EVString_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMarkNorthArrow_setName_void_EVString_Callback* pCallback )
				{
					IMarkNorthArrowProxy* ptr = dynamic_cast<IMarkNorthArrowProxy*>((EarthView::World::Spatial::Carto::IMarkNorthArrow*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMarkNorthArrow_setName_void_EVString(pCallback);
					}
				}
			}
		}
	}
}
