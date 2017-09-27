/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/imapframe.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_setDescription_void_EVString_Callback)(_in char*& desc);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_getSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_setSymbol_void_ISymbol_Callback)(_in EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_getShadowColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_setShadowColor_void_IColor_Callback)(_in EarthView::World::Spatial::Display::IColor* pColor);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_getBackColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_setBackColor_void_IColor_Callback)(_in EarthView::World::Spatial::Display::IColor* pColor);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_setMapExtent_void_IEnvelope_Callback)(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_getMapExtent_IEnvelope_Callback)();
				typedef EarthView::World::Spatial::Display::ISpatialDisplay*  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_getMapDisplay_ISpatialDisplay_Callback)();
				typedef EarthView::World::Spatial::Atlas::IMap*  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_getMap_IMap_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_getMapCanvas_IBitmap_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_setMap_void_IMap_Callback)(_in EarthView::World::Spatial::Atlas::IMap* pMap);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_isDrawShadow_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_setDrawShadow_void_ev_bool_Callback)(_in ev_bool bDrawed);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_isDrawFrame_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_setDrawFrame_void_ev_bool_Callback)(_in ev_bool bDrawed);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_isDrawBackground_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_setDrawBackground_void_ev_bool_Callback)(_in ev_bool bDrawed);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_isAccordingPageSize_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_setAccordingPageSize_void_ev_bool_Callback)(_in ev_bool bAccording);
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_getRenderingLayerCache_IBitmap_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_drawBorder_void_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay);
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_getElementType_EVElementType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_setName_void_EVString_Callback)(_in char*& name);
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_getEnvelope_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_setEnvelope_void_IEnvelope_Callback)(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_isSelected_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_setSelected_void_ev_bool_Callback)(_in ev_bool bSelected);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_drawPrepare_ev_bool_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_draw_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_drawOver_void_Callback)();
				typedef EarthView::World::Spatial::Carto::IElement*  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_clone_IElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IMapFrame_fromStream_void_CDataStream_Callback)(_in void* stream);
				class IMapFrameProxy : public EarthView::World::Spatial::Carto::IMapFrame
				{
				private:
					EarthView_World_Spatial_Carto_IMapFrame_getDescription_EVString_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_getDescription_EVString_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_setDescription_void_EVString_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_setDescription_void_EVString_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_getSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_getSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_setSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_setSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_getShadowColor_IColor_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_getShadowColor_IColor_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_setShadowColor_void_IColor_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_setShadowColor_void_IColor_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_getBackColor_IColor_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_getBackColor_IColor_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_setBackColor_void_IColor_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_setBackColor_void_IColor_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_setMapExtent_void_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_setMapExtent_void_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_getMapExtent_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_getMapExtent_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_getMapDisplay_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_getMapDisplay_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_getMap_IMap_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_getMap_IMap_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_getMapCanvas_IBitmap_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_getMapCanvas_IBitmap_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_setMap_void_IMap_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_setMap_void_IMap_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_isDrawShadow_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_isDrawShadow_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_setDrawShadow_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_setDrawShadow_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_isDrawFrame_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_isDrawFrame_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_setDrawFrame_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_setDrawFrame_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_isDrawBackground_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_isDrawBackground_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_setDrawBackground_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_setDrawBackground_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_isAccordingPageSize_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_isAccordingPageSize_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_setAccordingPageSize_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_setAccordingPageSize_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_getRenderingLayerCache_IBitmap_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_getRenderingLayerCache_IBitmap_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_drawBorder_void_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_drawBorder_void_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_getElementType_EVElementType_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_getElementType_EVElementType_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_getName_EVString_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_getName_EVString_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_setName_void_EVString_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_setName_void_EVString_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_getEnvelope_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_getEnvelope_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_setEnvelope_void_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_setEnvelope_void_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_isSelected_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_setSelected_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_drawPrepare_ev_bool_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_drawPrepare_ev_bool_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_draw_void_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_draw_void_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_drawOver_void_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_drawOver_void_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_clone_IElement_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_clone_IElement_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_toXML_EVString_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_toXML_EVString_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_IMapFrame_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_IMapFrame_fromStream_void_CDataStream_Callback;
				public:
					IMapFrameProxy(EarthView::World::Core::CNameValuePairList *pList) : IMapFrame(pList)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_getSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_setSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_getShadowColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_setShadowColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_getBackColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_setBackColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_setMapExtent_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_getMapExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_getMapDisplay_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_getMap_IMap_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_getMapCanvas_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_setMap_void_IMap_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_isDrawShadow_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_setDrawShadow_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_isDrawFrame_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_setDrawFrame_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_isDrawBackground_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_setDrawBackground_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_isAccordingPageSize_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_setAccordingPageSize_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_getRenderingLayerCache_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_drawBorder_void_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_getElementType_EVElementType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_getEnvelope_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_setEnvelope_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_isSelected_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_setSelected_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_drawPrepare_ev_bool_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_draw_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_drawOver_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_clone_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IMapFrame_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_getDescription_EVString(EarthView_World_Spatial_Carto_IMapFrame_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_setDescription_void_EVString(EarthView_World_Spatial_Carto_IMapFrame_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_getSymbol_ISymbol(EarthView_World_Spatial_Carto_IMapFrame_getSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_getSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_setSymbol_void_ISymbol(EarthView_World_Spatial_Carto_IMapFrame_setSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_setSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_getShadowColor_IColor(EarthView_World_Spatial_Carto_IMapFrame_getShadowColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_getShadowColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_setShadowColor_void_IColor(EarthView_World_Spatial_Carto_IMapFrame_setShadowColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_setShadowColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_getBackColor_IColor(EarthView_World_Spatial_Carto_IMapFrame_getBackColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_getBackColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_setBackColor_void_IColor(EarthView_World_Spatial_Carto_IMapFrame_setBackColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_setBackColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_setMapExtent_void_IEnvelope(EarthView_World_Spatial_Carto_IMapFrame_setMapExtent_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_setMapExtent_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_getMapExtent_IEnvelope(EarthView_World_Spatial_Carto_IMapFrame_getMapExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_getMapExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_getMapDisplay_ISpatialDisplay(EarthView_World_Spatial_Carto_IMapFrame_getMapDisplay_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_getMapDisplay_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_getMap_IMap(EarthView_World_Spatial_Carto_IMapFrame_getMap_IMap_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_getMap_IMap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_getMapCanvas_IBitmap(EarthView_World_Spatial_Carto_IMapFrame_getMapCanvas_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_getMapCanvas_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_setMap_void_IMap(EarthView_World_Spatial_Carto_IMapFrame_setMap_void_IMap_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_setMap_void_IMap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_isDrawShadow_ev_bool(EarthView_World_Spatial_Carto_IMapFrame_isDrawShadow_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_isDrawShadow_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_setDrawShadow_void_ev_bool(EarthView_World_Spatial_Carto_IMapFrame_setDrawShadow_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_setDrawShadow_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_isDrawFrame_ev_bool(EarthView_World_Spatial_Carto_IMapFrame_isDrawFrame_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_isDrawFrame_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_setDrawFrame_void_ev_bool(EarthView_World_Spatial_Carto_IMapFrame_setDrawFrame_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_setDrawFrame_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_isDrawBackground_ev_bool(EarthView_World_Spatial_Carto_IMapFrame_isDrawBackground_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_isDrawBackground_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_setDrawBackground_void_ev_bool(EarthView_World_Spatial_Carto_IMapFrame_setDrawBackground_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_setDrawBackground_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_isAccordingPageSize_ev_bool(EarthView_World_Spatial_Carto_IMapFrame_isAccordingPageSize_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_isAccordingPageSize_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_setAccordingPageSize_void_ev_bool(EarthView_World_Spatial_Carto_IMapFrame_setAccordingPageSize_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_setAccordingPageSize_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_getRenderingLayerCache_IBitmap(EarthView_World_Spatial_Carto_IMapFrame_getRenderingLayerCache_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_getRenderingLayerCache_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_drawBorder_void_ISpatialDisplay(EarthView_World_Spatial_Carto_IMapFrame_drawBorder_void_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_drawBorder_void_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_getElementType_EVElementType(EarthView_World_Spatial_Carto_IMapFrame_getElementType_EVElementType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_getElementType_EVElementType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_getName_EVString(EarthView_World_Spatial_Carto_IMapFrame_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_setName_void_EVString(EarthView_World_Spatial_Carto_IMapFrame_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_getEnvelope_IEnvelope(EarthView_World_Spatial_Carto_IMapFrame_getEnvelope_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_getEnvelope_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_setEnvelope_void_IEnvelope(EarthView_World_Spatial_Carto_IMapFrame_setEnvelope_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_setEnvelope_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_isSelected_ev_bool(EarthView_World_Spatial_Carto_IMapFrame_isSelected_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_isSelected_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_setSelected_void_ev_bool(EarthView_World_Spatial_Carto_IMapFrame_setSelected_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_setSelected_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_drawPrepare_ev_bool_ISpatialDisplay(EarthView_World_Spatial_Carto_IMapFrame_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_drawPrepare_ev_bool_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_draw_void(EarthView_World_Spatial_Carto_IMapFrame_draw_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_draw_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_drawOver_void(EarthView_World_Spatial_Carto_IMapFrame_drawOver_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_drawOver_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_clone_IElement(EarthView_World_Spatial_Carto_IMapFrame_clone_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_clone_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_toStream_void_CDataStream(EarthView_World_Spatial_Carto_IMapFrame_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_toXML_EVString(EarthView_World_Spatial_Carto_IMapFrame_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Carto_IMapFrame_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_toXmlElement_CXmlElement(EarthView_World_Spatial_Carto_IMapFrame_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IMapFrame_fromStream_void_CDataStream(EarthView_World_Spatial_Carto_IMapFrame_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IMapFrame_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Carto::EVElementType getElementType() const
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_getElementType_EVElementType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::EVElementType returnValue = (EarthView::World::Spatial::Carto::EVElementType)m_EarthView_World_Spatial_Carto_IMapFrame_getElementType_EVElementType_Callback();
							return returnValue;
						}
						else
							return this->IMapFrame::getElementType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_IMapFrame_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IMapFrame::getName();
					}
					virtual void setName(_in EVString name)
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Carto_IMapFrame_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->IMapFrame::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_IMapFrame_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->IMapFrame::getDescription();
					}
					virtual void setDescription(_in const EVString& desc)
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* desc_Char = desc.makeBuffer();
							m_EarthView_World_Spatial_Carto_IMapFrame_setDescription_void_EVString_Callback(desc_Char);
						}
						else
							return this->IMapFrame::setDescription(desc);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_getSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_IMapFrame_getSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->IMapFrame::getSymbol();
					}
					virtual void setSymbol(_in EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_setSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMapFrame_setSymbol_void_ISymbol_Callback(pSymbol);
						}
						else
							return this->IMapFrame::setSymbol(pSymbol);
					}
					virtual EarthView::World::Spatial::Display::IColor* getShadowColor() const
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_getShadowColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Carto_IMapFrame_getShadowColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->IMapFrame::getShadowColor();
					}
					virtual void setShadowColor(_in EarthView::World::Spatial::Display::IColor* pColor)
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_setShadowColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMapFrame_setShadowColor_void_IColor_Callback(pColor);
						}
						else
							return this->IMapFrame::setShadowColor(pColor);
					}
					virtual EarthView::World::Spatial::Display::IColor* getBackColor() const
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_getBackColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Carto_IMapFrame_getBackColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->IMapFrame::getBackColor();
					}
					virtual void setBackColor(_in EarthView::World::Spatial::Display::IColor* pColor)
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_setBackColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMapFrame_setBackColor_void_IColor_Callback(pColor);
						}
						else
							return this->IMapFrame::setBackColor(pColor);
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_getEnvelope_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Carto_IMapFrame_getEnvelope_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->IMapFrame::getEnvelope();
					}
					virtual void setEnvelope(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope)
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_setEnvelope_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMapFrame_setEnvelope_void_IEnvelope_Callback(pEnvelope);
						}
						else
							return this->IMapFrame::setEnvelope(pEnvelope);
					}
					virtual void setMapExtent(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope)
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_setMapExtent_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMapFrame_setMapExtent_void_IEnvelope_Callback(pEnvelope);
						}
						else
							return this->IMapFrame::setMapExtent(pEnvelope);
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getMapExtent() const
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_getMapExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Carto_IMapFrame_getMapExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->IMapFrame::getMapExtent();
					}
					virtual EarthView::World::Spatial::Display::ISpatialDisplay* getMapDisplay() const
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_getMapDisplay_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISpatialDisplay* returnValue = m_EarthView_World_Spatial_Carto_IMapFrame_getMapDisplay_ISpatialDisplay_Callback();
							return returnValue;
						}
						else
							return this->IMapFrame::getMapDisplay();
					}
					virtual EarthView::World::Spatial::Atlas::IMap* getMap() const
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_getMap_IMap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::IMap* returnValue = m_EarthView_World_Spatial_Carto_IMapFrame_getMap_IMap_Callback();
							return returnValue;
						}
						else
							return this->IMapFrame::getMap();
					}
					virtual EarthView::World::Display::IBitmap* getMapCanvas() const
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_getMapCanvas_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial_Carto_IMapFrame_getMapCanvas_IBitmap_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->IMapFrame::getMapCanvas();
					}
					virtual void setMap(_in EarthView::World::Spatial::Atlas::IMap* pMap)
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_setMap_void_IMap_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMapFrame_setMap_void_IMap_Callback(pMap);
						}
						else
							return this->IMapFrame::setMap(pMap);
					}
					virtual ev_bool isSelected()
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IMapFrame_isSelected_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IMapFrame::isSelected();
					}
					virtual void setSelected(_in ev_bool bSelected)
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMapFrame_setSelected_void_ev_bool_Callback(bSelected);
						}
						else
							return this->IMapFrame::setSelected(bSelected);
					}
					virtual ev_bool isDrawShadow()
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_isDrawShadow_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IMapFrame_isDrawShadow_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IMapFrame::isDrawShadow();
					}
					virtual void setDrawShadow(_in ev_bool bDrawed)
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_setDrawShadow_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMapFrame_setDrawShadow_void_ev_bool_Callback(bDrawed);
						}
						else
							return this->IMapFrame::setDrawShadow(bDrawed);
					}
					virtual ev_bool isDrawFrame()
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_isDrawFrame_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IMapFrame_isDrawFrame_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IMapFrame::isDrawFrame();
					}
					virtual void setDrawFrame(_in ev_bool bDrawed)
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_setDrawFrame_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMapFrame_setDrawFrame_void_ev_bool_Callback(bDrawed);
						}
						else
							return this->IMapFrame::setDrawFrame(bDrawed);
					}
					virtual ev_bool isDrawBackground()
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_isDrawBackground_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IMapFrame_isDrawBackground_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IMapFrame::isDrawBackground();
					}
					virtual void setDrawBackground(_in ev_bool bDrawed)
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_setDrawBackground_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMapFrame_setDrawBackground_void_ev_bool_Callback(bDrawed);
						}
						else
							return this->IMapFrame::setDrawBackground(bDrawed);
					}
					virtual ev_bool isAccordingPageSize()
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_isAccordingPageSize_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IMapFrame_isAccordingPageSize_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IMapFrame::isAccordingPageSize();
					}
					virtual void setAccordingPageSize(_in ev_bool bAccording)
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_setAccordingPageSize_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMapFrame_setAccordingPageSize_void_ev_bool_Callback(bAccording);
						}
						else
							return this->IMapFrame::setAccordingPageSize(bAccording);
					}
					virtual EarthView::World::Display::IBitmap* getRenderingLayerCache()
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_getRenderingLayerCache_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial_Carto_IMapFrame_getRenderingLayerCache_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->IMapFrame::getRenderingLayerCache();
					}
					virtual ev_bool drawPrepare(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay)
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_drawPrepare_ev_bool_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IMapFrame_drawPrepare_ev_bool_ISpatialDisplay_Callback(pDisplay);
							return returnValue;
						}
						else
							return this->IMapFrame::drawPrepare(pDisplay);
					}
					virtual void draw()
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_draw_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMapFrame_draw_void_Callback();
						}
						else
							return this->IMapFrame::draw();
					}
					virtual void drawOver()
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_drawOver_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMapFrame_drawOver_void_Callback();
						}
						else
							return this->IMapFrame::drawOver();
					}
					virtual void drawBorder(_in EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay)
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_drawBorder_void_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMapFrame_drawBorder_void_ISpatialDisplay_Callback(pPageDisplay);
						}
						else
							return this->IMapFrame::drawBorder(pPageDisplay);
					}
					virtual EarthView::World::Spatial::Carto::IElement* clone() const
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_clone_IElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::IElement* returnValue = m_EarthView_World_Spatial_Carto_IMapFrame_clone_IElement_Callback();
							return returnValue;
						}
						else
							return this->IMapFrame::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMapFrame_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IMapFrame::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_IMapFrame_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->IMapFrame::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMapFrame_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->IMapFrame::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Carto_IMapFrame_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->IMapFrame::toXmlElement();
					}
					virtual void fromStream(_in EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Carto_IMapFrame_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IMapFrame_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IMapFrame::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(IMapFrameProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_IMapFrame_getElementType_EVElementType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::getElementType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->getElementType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_getElementType_EVElementType( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_getElementType_EVElementType_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_getElementType_EVElementType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_IMapFrame_getElementType_EVElementType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::getElementType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_getName_EVString_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_setName_void_EVString(void *pObjectXXXX, _in char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_setName_void_EVString_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::getDescription();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDescription();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_getDescription_EVString_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_getDescription_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_setDescription_void_EVString(void *pObjectXXXX, _in const char* desc )
				{
					EarthView::World::Core::ev_string desc1 = desc;
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::setDescription(desc1);
					else
						ptrNativeObject->setDescription(desc1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_setDescription_void_EVString_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_setDescription_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* desc )
				{
					EarthView::World::Core::ev_string desc1 = desc;
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::setDescription(desc1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_getSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::getSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_getSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_getSymbol_ISymbol_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_getSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_getSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::getSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_setSymbol_void_ISymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::setSymbol(pSymbol);
					else
						ptrNativeObject->setSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_setSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_setSymbol_void_ISymbol_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_setSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_setSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::setSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_getShadowColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::getShadowColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getShadowColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_getShadowColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_getShadowColor_IColor_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_getShadowColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_getShadowColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::getShadowColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_setShadowColor_void_IColor(void *pObjectXXXX, _in EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::setShadowColor(pColor);
					else
						ptrNativeObject->setShadowColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_setShadowColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_setShadowColor_void_IColor_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_setShadowColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_setShadowColor_void_IColor_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::setShadowColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_getBackColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::getBackColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getBackColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_getBackColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_getBackColor_IColor_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_getBackColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_getBackColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::getBackColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_setBackColor_void_IColor(void *pObjectXXXX, _in EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::setBackColor(pColor);
					else
						ptrNativeObject->setBackColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_setBackColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_setBackColor_void_IColor_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_setBackColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_setBackColor_void_IColor_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::setBackColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_getEnvelope_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::getEnvelope();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelope();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_getEnvelope_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_getEnvelope_IEnvelope_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_getEnvelope_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_getEnvelope_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::getEnvelope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_setEnvelope_void_IEnvelope(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::setEnvelope(pEnvelope);
					else
						ptrNativeObject->setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_setEnvelope_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_setEnvelope_void_IEnvelope_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_setEnvelope_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_setEnvelope_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_setMapExtent_void_IEnvelope(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::setMapExtent(pEnvelope);
					else
						ptrNativeObject->setMapExtent(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_setMapExtent_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_setMapExtent_void_IEnvelope_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_setMapExtent_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_setMapExtent_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::setMapExtent(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_getMapExtent_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::getMapExtent();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getMapExtent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_getMapExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_getMapExtent_IEnvelope_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_getMapExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_getMapExtent_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::getMapExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISpatialDisplay*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_getMapDisplay_ISpatialDisplay(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISpatialDisplay* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::getMapDisplay();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISpatialDisplay* objXXXX = ptrNativeObject->getMapDisplay();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_getMapDisplay_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_getMapDisplay_ISpatialDisplay_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_getMapDisplay_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISpatialDisplay*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_getMapDisplay_ISpatialDisplay_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISpatialDisplay* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::getMapDisplay();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_getMap_IMap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::getMap();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->getMap();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_getMap_IMap( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_getMap_IMap_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_getMap_IMap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_getMap_IMap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::getMap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_getMapCanvas_IBitmap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::getMapCanvas();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getMapCanvas();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_getMapCanvas_IBitmap( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_getMapCanvas_IBitmap_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_getMapCanvas_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_getMapCanvas_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::getMapCanvas();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_setMap_void_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* pMap )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::setMap(pMap);
					else
						ptrNativeObject->setMap(pMap);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_setMap_void_IMap( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_setMap_void_IMap_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_setMap_void_IMap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_setMap_void_IMap_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* pMap )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::setMap(pMap);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IMapFrame_isSelected_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::isSelected();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelected();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_isSelected_ev_bool_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_isSelected_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IMapFrame_isSelected_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::isSelected();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_setSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::setSelected(bSelected);
					else
						ptrNativeObject->setSelected(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_setSelected_void_ev_bool_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_setSelected_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_setSelected_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::setSelected(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IMapFrame_isDrawShadow_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::isDrawShadow();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawShadow();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_isDrawShadow_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_isDrawShadow_ev_bool_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_isDrawShadow_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IMapFrame_isDrawShadow_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::isDrawShadow();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_setDrawShadow_void_ev_bool(void *pObjectXXXX, _in ev_bool bDrawed )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::setDrawShadow(bDrawed);
					else
						ptrNativeObject->setDrawShadow(bDrawed);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_setDrawShadow_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_setDrawShadow_void_ev_bool_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_setDrawShadow_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_setDrawShadow_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bDrawed )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::setDrawShadow(bDrawed);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IMapFrame_isDrawFrame_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::isDrawFrame();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawFrame();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_isDrawFrame_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_isDrawFrame_ev_bool_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_isDrawFrame_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IMapFrame_isDrawFrame_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::isDrawFrame();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_setDrawFrame_void_ev_bool(void *pObjectXXXX, _in ev_bool bDrawed )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::setDrawFrame(bDrawed);
					else
						ptrNativeObject->setDrawFrame(bDrawed);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_setDrawFrame_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_setDrawFrame_void_ev_bool_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_setDrawFrame_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_setDrawFrame_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bDrawed )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::setDrawFrame(bDrawed);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IMapFrame_isDrawBackground_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::isDrawBackground();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawBackground();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_isDrawBackground_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_isDrawBackground_ev_bool_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_isDrawBackground_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IMapFrame_isDrawBackground_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::isDrawBackground();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_setDrawBackground_void_ev_bool(void *pObjectXXXX, _in ev_bool bDrawed )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::setDrawBackground(bDrawed);
					else
						ptrNativeObject->setDrawBackground(bDrawed);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_setDrawBackground_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_setDrawBackground_void_ev_bool_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_setDrawBackground_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_setDrawBackground_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bDrawed )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::setDrawBackground(bDrawed);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IMapFrame_isAccordingPageSize_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::isAccordingPageSize();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isAccordingPageSize();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_isAccordingPageSize_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_isAccordingPageSize_ev_bool_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_isAccordingPageSize_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IMapFrame_isAccordingPageSize_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::isAccordingPageSize();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_setAccordingPageSize_void_ev_bool(void *pObjectXXXX, _in ev_bool bAccording )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::setAccordingPageSize(bAccording);
					else
						ptrNativeObject->setAccordingPageSize(bAccording);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_setAccordingPageSize_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_setAccordingPageSize_void_ev_bool_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_setAccordingPageSize_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_setAccordingPageSize_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bAccording )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::setAccordingPageSize(bAccording);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_getRenderingLayerCache_IBitmap(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::getRenderingLayerCache();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getRenderingLayerCache();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_getRenderingLayerCache_IBitmap( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_getRenderingLayerCache_IBitmap_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_getRenderingLayerCache_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_getRenderingLayerCache_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::getRenderingLayerCache();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IMapFrame_drawPrepare_ev_bool_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::drawPrepare(pDisplay);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->drawPrepare(pDisplay);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_drawPrepare_ev_bool_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_drawPrepare_ev_bool_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IMapFrame_drawPrepare_ev_bool_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::drawPrepare(pDisplay);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_draw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::draw();
					else
						ptrNativeObject->draw();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_draw_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_draw_void_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_draw_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_draw_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::draw();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_drawOver_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::drawOver();
					else
						ptrNativeObject->drawOver();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_drawOver_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_drawOver_void_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_drawOver_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_drawOver_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::drawOver();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_drawBorder_void_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::drawBorder(pPageDisplay);
					else
						ptrNativeObject->drawBorder(pPageDisplay);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_drawBorder_void_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_drawBorder_void_ISpatialDisplay_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_drawBorder_void_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_drawBorder_void_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::drawBorder(pPageDisplay);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_clone_IElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_clone_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_clone_IElement_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_clone_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_clone_IElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_toStream_void_CDataStream_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_toXML_EVString_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_toXmlElement_CXmlElement_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_IMapFrame_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_fromStream_void_CDataStream(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					if (dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IMapFrame_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_IMapFrame_fromStream_void_CDataStream_Callback* pCallback )
				{
					IMapFrameProxy* ptr = dynamic_cast<IMapFrameProxy*>((EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IMapFrame_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IMapFrame_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::IMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::IMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IMapFrame::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
			}
		}
	}
}
