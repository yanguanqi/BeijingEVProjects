/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dcarto/mapframe.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_getElementType_EVElementType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_setDescription_void_EVString_Callback)(_in char*& desc);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_getSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_setSymbol_void_ISymbol_Callback)(_in EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_getShadowColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_setShadowColor_void_IColor_Callback)(_in EarthView::World::Spatial::Display::IColor* pColor);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_getBackColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_setBackColor_void_IColor_Callback)(_in EarthView::World::Spatial::Display::IColor* pColor);
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_getEnvelope_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_setEnvelope_void_IEnvelope_Callback)(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_setMapExtent_void_IEnvelope_Callback)(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_getMapExtent_IEnvelope_Callback)();
				typedef EarthView::World::Spatial::Display::ISpatialDisplay*  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_getMapDisplay_ISpatialDisplay_Callback)();
				typedef EarthView::World::Spatial::Atlas::IMap*  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_getMap_IMap_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_setMap_void_IMap_Callback)(_in EarthView::World::Spatial::Atlas::IMap* pMap);
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_getMapCanvas_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_isSelected_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_setSelected_void_ev_bool_Callback)(_in ev_bool bSelected);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_isDrawShadow_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_setDrawShadow_void_ev_bool_Callback)(_in ev_bool bDrawed);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_isDrawFrame_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_setDrawFrame_void_ev_bool_Callback)(_in ev_bool bDrawed);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_isDrawBackground_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_setDrawBackground_void_ev_bool_Callback)(_in ev_bool bDrawed);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_isAccordingPageSize_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_setAccordingPageSize_void_ev_bool_Callback)(_in ev_bool bAccording);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_drawPrepare_ev_bool_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_draw_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_drawOver_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_drawBorder_void_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay);
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_getRenderingLayerCache_IBitmap_Callback)();
				typedef EarthView::World::Spatial::Carto::IElement*  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_clone_IElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CMapFrame_fromStream_void_CDataStream_Callback)(_in void* stream);
				class CMapFrameProxy : public EarthView::World::Spatial::Carto::CMapFrame
				{
				private:
					EarthView_World_Spatial_Carto_CMapFrame_getElementType_EVElementType_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_getElementType_EVElementType_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_getName_EVString_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_getName_EVString_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_setName_void_EVString_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_setName_void_EVString_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_getDescription_EVString_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_getDescription_EVString_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_setDescription_void_EVString_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_setDescription_void_EVString_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_getSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_getSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_setSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_setSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_getShadowColor_IColor_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_getShadowColor_IColor_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_setShadowColor_void_IColor_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_setShadowColor_void_IColor_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_getBackColor_IColor_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_getBackColor_IColor_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_setBackColor_void_IColor_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_setBackColor_void_IColor_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_getEnvelope_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_getEnvelope_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_setEnvelope_void_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_setEnvelope_void_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_setMapExtent_void_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_setMapExtent_void_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_getMapExtent_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_getMapExtent_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_getMapDisplay_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_getMapDisplay_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_getMap_IMap_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_getMap_IMap_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_setMap_void_IMap_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_setMap_void_IMap_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_getMapCanvas_IBitmap_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_getMapCanvas_IBitmap_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_isSelected_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_setSelected_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_isDrawShadow_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_isDrawShadow_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_setDrawShadow_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_setDrawShadow_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_isDrawFrame_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_isDrawFrame_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_setDrawFrame_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_setDrawFrame_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_isDrawBackground_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_isDrawBackground_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_setDrawBackground_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_setDrawBackground_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_isAccordingPageSize_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_isAccordingPageSize_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_setAccordingPageSize_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_setAccordingPageSize_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_drawPrepare_ev_bool_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_drawPrepare_ev_bool_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_draw_void_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_draw_void_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_drawOver_void_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_drawOver_void_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_drawBorder_void_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_drawBorder_void_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_getRenderingLayerCache_IBitmap_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_getRenderingLayerCache_IBitmap_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_clone_IElement_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_clone_IElement_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_toXML_EVString_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_toXML_EVString_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_CMapFrame_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_CMapFrame_fromStream_void_CDataStream_Callback;
				public:
					CMapFrameProxy(EarthView::World::Core::CNameValuePairList *pList) : CMapFrame(pList)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_getElementType_EVElementType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_getSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_setSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_getShadowColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_setShadowColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_getBackColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_setBackColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_getEnvelope_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_setEnvelope_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_setMapExtent_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_getMapExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_getMapDisplay_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_getMap_IMap_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_setMap_void_IMap_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_getMapCanvas_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_isSelected_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_setSelected_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_isDrawShadow_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_setDrawShadow_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_isDrawFrame_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_setDrawFrame_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_isDrawBackground_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_setDrawBackground_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_isAccordingPageSize_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_setAccordingPageSize_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_drawPrepare_ev_bool_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_draw_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_drawOver_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_drawBorder_void_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_getRenderingLayerCache_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_clone_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CMapFrame_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_getElementType_EVElementType(EarthView_World_Spatial_Carto_CMapFrame_getElementType_EVElementType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_getElementType_EVElementType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_getName_EVString(EarthView_World_Spatial_Carto_CMapFrame_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_setName_void_EVString(EarthView_World_Spatial_Carto_CMapFrame_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_getDescription_EVString(EarthView_World_Spatial_Carto_CMapFrame_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_setDescription_void_EVString(EarthView_World_Spatial_Carto_CMapFrame_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_getSymbol_ISymbol(EarthView_World_Spatial_Carto_CMapFrame_getSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_getSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_setSymbol_void_ISymbol(EarthView_World_Spatial_Carto_CMapFrame_setSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_setSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_getShadowColor_IColor(EarthView_World_Spatial_Carto_CMapFrame_getShadowColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_getShadowColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_setShadowColor_void_IColor(EarthView_World_Spatial_Carto_CMapFrame_setShadowColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_setShadowColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_getBackColor_IColor(EarthView_World_Spatial_Carto_CMapFrame_getBackColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_getBackColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_setBackColor_void_IColor(EarthView_World_Spatial_Carto_CMapFrame_setBackColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_setBackColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_getEnvelope_IEnvelope(EarthView_World_Spatial_Carto_CMapFrame_getEnvelope_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_getEnvelope_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_setEnvelope_void_IEnvelope(EarthView_World_Spatial_Carto_CMapFrame_setEnvelope_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_setEnvelope_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_setMapExtent_void_IEnvelope(EarthView_World_Spatial_Carto_CMapFrame_setMapExtent_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_setMapExtent_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_getMapExtent_IEnvelope(EarthView_World_Spatial_Carto_CMapFrame_getMapExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_getMapExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_getMapDisplay_ISpatialDisplay(EarthView_World_Spatial_Carto_CMapFrame_getMapDisplay_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_getMapDisplay_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_getMap_IMap(EarthView_World_Spatial_Carto_CMapFrame_getMap_IMap_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_getMap_IMap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_setMap_void_IMap(EarthView_World_Spatial_Carto_CMapFrame_setMap_void_IMap_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_setMap_void_IMap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_getMapCanvas_IBitmap(EarthView_World_Spatial_Carto_CMapFrame_getMapCanvas_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_getMapCanvas_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_isSelected_ev_bool(EarthView_World_Spatial_Carto_CMapFrame_isSelected_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_isSelected_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_setSelected_void_ev_bool(EarthView_World_Spatial_Carto_CMapFrame_setSelected_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_setSelected_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_isDrawShadow_ev_bool(EarthView_World_Spatial_Carto_CMapFrame_isDrawShadow_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_isDrawShadow_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_setDrawShadow_void_ev_bool(EarthView_World_Spatial_Carto_CMapFrame_setDrawShadow_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_setDrawShadow_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_isDrawFrame_ev_bool(EarthView_World_Spatial_Carto_CMapFrame_isDrawFrame_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_isDrawFrame_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_setDrawFrame_void_ev_bool(EarthView_World_Spatial_Carto_CMapFrame_setDrawFrame_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_setDrawFrame_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_isDrawBackground_ev_bool(EarthView_World_Spatial_Carto_CMapFrame_isDrawBackground_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_isDrawBackground_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_setDrawBackground_void_ev_bool(EarthView_World_Spatial_Carto_CMapFrame_setDrawBackground_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_setDrawBackground_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_isAccordingPageSize_ev_bool(EarthView_World_Spatial_Carto_CMapFrame_isAccordingPageSize_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_isAccordingPageSize_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_setAccordingPageSize_void_ev_bool(EarthView_World_Spatial_Carto_CMapFrame_setAccordingPageSize_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_setAccordingPageSize_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_drawPrepare_ev_bool_ISpatialDisplay(EarthView_World_Spatial_Carto_CMapFrame_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_drawPrepare_ev_bool_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_draw_void(EarthView_World_Spatial_Carto_CMapFrame_draw_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_draw_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_drawOver_void(EarthView_World_Spatial_Carto_CMapFrame_drawOver_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_drawOver_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_drawBorder_void_ISpatialDisplay(EarthView_World_Spatial_Carto_CMapFrame_drawBorder_void_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_drawBorder_void_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_getRenderingLayerCache_IBitmap(EarthView_World_Spatial_Carto_CMapFrame_getRenderingLayerCache_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_getRenderingLayerCache_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_clone_IElement(EarthView_World_Spatial_Carto_CMapFrame_clone_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_clone_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_toStream_void_CDataStream(EarthView_World_Spatial_Carto_CMapFrame_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_toXML_EVString(EarthView_World_Spatial_Carto_CMapFrame_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Carto_CMapFrame_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_toXmlElement_CXmlElement(EarthView_World_Spatial_Carto_CMapFrame_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CMapFrame_fromStream_void_CDataStream(EarthView_World_Spatial_Carto_CMapFrame_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CMapFrame_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Carto::EVElementType getElementType() const
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_getElementType_EVElementType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::EVElementType returnValue = (EarthView::World::Spatial::Carto::EVElementType)m_EarthView_World_Spatial_Carto_CMapFrame_getElementType_EVElementType_Callback();
							return returnValue;
						}
						else
							return this->CMapFrame::getElementType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_CMapFrame_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CMapFrame::getName();
					}
					virtual void setName(_in EVString name)
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Carto_CMapFrame_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CMapFrame::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_CMapFrame_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CMapFrame::getDescription();
					}
					virtual void setDescription(_in const EVString& desc)
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* desc_Char = desc.makeBuffer();
							m_EarthView_World_Spatial_Carto_CMapFrame_setDescription_void_EVString_Callback(desc_Char);
						}
						else
							return this->CMapFrame::setDescription(desc);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_getSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_CMapFrame_getSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CMapFrame::getSymbol();
					}
					virtual void setSymbol(_in EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_setSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CMapFrame_setSymbol_void_ISymbol_Callback(pSymbol);
						}
						else
							return this->CMapFrame::setSymbol(pSymbol);
					}
					virtual EarthView::World::Spatial::Display::IColor* getShadowColor() const
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_getShadowColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Carto_CMapFrame_getShadowColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CMapFrame::getShadowColor();
					}
					virtual void setShadowColor(_in EarthView::World::Spatial::Display::IColor* pColor)
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_setShadowColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CMapFrame_setShadowColor_void_IColor_Callback(pColor);
						}
						else
							return this->CMapFrame::setShadowColor(pColor);
					}
					virtual EarthView::World::Spatial::Display::IColor* getBackColor() const
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_getBackColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Carto_CMapFrame_getBackColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CMapFrame::getBackColor();
					}
					virtual void setBackColor(_in EarthView::World::Spatial::Display::IColor* pColor)
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_setBackColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CMapFrame_setBackColor_void_IColor_Callback(pColor);
						}
						else
							return this->CMapFrame::setBackColor(pColor);
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_getEnvelope_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Carto_CMapFrame_getEnvelope_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CMapFrame::getEnvelope();
					}
					virtual void setEnvelope(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope)
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_setEnvelope_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CMapFrame_setEnvelope_void_IEnvelope_Callback(pEnvelope);
						}
						else
							return this->CMapFrame::setEnvelope(pEnvelope);
					}
					virtual void setMapExtent(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope)
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_setMapExtent_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CMapFrame_setMapExtent_void_IEnvelope_Callback(pEnvelope);
						}
						else
							return this->CMapFrame::setMapExtent(pEnvelope);
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getMapExtent() const
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_getMapExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Carto_CMapFrame_getMapExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CMapFrame::getMapExtent();
					}
					virtual EarthView::World::Spatial::Display::ISpatialDisplay* getMapDisplay() const
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_getMapDisplay_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISpatialDisplay* returnValue = m_EarthView_World_Spatial_Carto_CMapFrame_getMapDisplay_ISpatialDisplay_Callback();
							return returnValue;
						}
						else
							return this->CMapFrame::getMapDisplay();
					}
					virtual EarthView::World::Spatial::Atlas::IMap* getMap() const
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_getMap_IMap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::IMap* returnValue = m_EarthView_World_Spatial_Carto_CMapFrame_getMap_IMap_Callback();
							return returnValue;
						}
						else
							return this->CMapFrame::getMap();
					}
					virtual void setMap(_in EarthView::World::Spatial::Atlas::IMap* pMap)
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_setMap_void_IMap_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CMapFrame_setMap_void_IMap_Callback(pMap);
						}
						else
							return this->CMapFrame::setMap(pMap);
					}
					virtual EarthView::World::Display::IBitmap* getMapCanvas() const
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_getMapCanvas_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial_Carto_CMapFrame_getMapCanvas_IBitmap_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CMapFrame::getMapCanvas();
					}
					virtual ev_bool isSelected()
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CMapFrame_isSelected_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMapFrame::isSelected();
					}
					virtual void setSelected(_in ev_bool bSelected)
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CMapFrame_setSelected_void_ev_bool_Callback(bSelected);
						}
						else
							return this->CMapFrame::setSelected(bSelected);
					}
					virtual ev_bool isDrawShadow()
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_isDrawShadow_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CMapFrame_isDrawShadow_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMapFrame::isDrawShadow();
					}
					virtual void setDrawShadow(_in ev_bool bDrawed)
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_setDrawShadow_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CMapFrame_setDrawShadow_void_ev_bool_Callback(bDrawed);
						}
						else
							return this->CMapFrame::setDrawShadow(bDrawed);
					}
					virtual ev_bool isDrawFrame()
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_isDrawFrame_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CMapFrame_isDrawFrame_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMapFrame::isDrawFrame();
					}
					virtual void setDrawFrame(_in ev_bool bDrawed)
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_setDrawFrame_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CMapFrame_setDrawFrame_void_ev_bool_Callback(bDrawed);
						}
						else
							return this->CMapFrame::setDrawFrame(bDrawed);
					}
					virtual ev_bool isDrawBackground()
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_isDrawBackground_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CMapFrame_isDrawBackground_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMapFrame::isDrawBackground();
					}
					virtual void setDrawBackground(_in ev_bool bDrawed)
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_setDrawBackground_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CMapFrame_setDrawBackground_void_ev_bool_Callback(bDrawed);
						}
						else
							return this->CMapFrame::setDrawBackground(bDrawed);
					}
					virtual ev_bool isAccordingPageSize()
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_isAccordingPageSize_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CMapFrame_isAccordingPageSize_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMapFrame::isAccordingPageSize();
					}
					virtual void setAccordingPageSize(_in ev_bool bAccording)
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_setAccordingPageSize_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CMapFrame_setAccordingPageSize_void_ev_bool_Callback(bAccording);
						}
						else
							return this->CMapFrame::setAccordingPageSize(bAccording);
					}
					virtual ev_bool drawPrepare(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay)
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_drawPrepare_ev_bool_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CMapFrame_drawPrepare_ev_bool_ISpatialDisplay_Callback(pDisplay);
							return returnValue;
						}
						else
							return this->CMapFrame::drawPrepare(pDisplay);
					}
					virtual void draw()
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_draw_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CMapFrame_draw_void_Callback();
						}
						else
							return this->CMapFrame::draw();
					}
					virtual void drawOver()
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_drawOver_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CMapFrame_drawOver_void_Callback();
						}
						else
							return this->CMapFrame::drawOver();
					}
					virtual void drawBorder(_in EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay)
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_drawBorder_void_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CMapFrame_drawBorder_void_ISpatialDisplay_Callback(pPageDisplay);
						}
						else
							return this->CMapFrame::drawBorder(pPageDisplay);
					}
					virtual EarthView::World::Display::IBitmap* getRenderingLayerCache()
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_getRenderingLayerCache_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial_Carto_CMapFrame_getRenderingLayerCache_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CMapFrame::getRenderingLayerCache();
					}
					virtual EarthView::World::Spatial::Carto::IElement* clone() const
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_clone_IElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::IElement* returnValue = m_EarthView_World_Spatial_Carto_CMapFrame_clone_IElement_Callback();
							return returnValue;
						}
						else
							return this->CMapFrame::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CMapFrame_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CMapFrame::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_CMapFrame_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CMapFrame::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CMapFrame_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CMapFrame::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Carto_CMapFrame_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CMapFrame::toXmlElement();
					}
					virtual void fromStream(_in EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Carto_CMapFrame_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CMapFrame_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CMapFrame::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(CMapFrameProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CMapFrame_getElementType_EVElementType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::getElementType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->getElementType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_getElementType_EVElementType( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_getElementType_EVElementType_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_getElementType_EVElementType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CMapFrame_getElementType_EVElementType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::getElementType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_getName_EVString_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_setName_void_EVString(void *pObjectXXXX, _in char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_setName_void_EVString_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::getDescription();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDescription();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_getDescription_EVString_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_getDescription_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_setDescription_void_EVString(void *pObjectXXXX, _in const char* desc )
				{
					EarthView::World::Core::ev_string desc1 = desc;
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::setDescription(desc1);
					else
						ptrNativeObject->setDescription(desc1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_setDescription_void_EVString_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_setDescription_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* desc )
				{
					EarthView::World::Core::ev_string desc1 = desc;
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::setDescription(desc1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_getSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::getSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_getSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_getSymbol_ISymbol_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_getSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_getSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::getSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_setSymbol_void_ISymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::setSymbol(pSymbol);
					else
						ptrNativeObject->setSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_setSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_setSymbol_void_ISymbol_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_setSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_setSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::setSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_getShadowColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::getShadowColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getShadowColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_getShadowColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_getShadowColor_IColor_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_getShadowColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_getShadowColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::getShadowColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_setShadowColor_void_IColor(void *pObjectXXXX, _in EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::setShadowColor(pColor);
					else
						ptrNativeObject->setShadowColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_setShadowColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_setShadowColor_void_IColor_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_setShadowColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_setShadowColor_void_IColor_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::setShadowColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_getBackColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::getBackColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getBackColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_getBackColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_getBackColor_IColor_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_getBackColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_getBackColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::getBackColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_setBackColor_void_IColor(void *pObjectXXXX, _in EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::setBackColor(pColor);
					else
						ptrNativeObject->setBackColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_setBackColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_setBackColor_void_IColor_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_setBackColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_setBackColor_void_IColor_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::setBackColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_getEnvelope_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::getEnvelope();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelope();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_getEnvelope_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_getEnvelope_IEnvelope_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_getEnvelope_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_getEnvelope_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::getEnvelope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_setEnvelope_void_IEnvelope(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::setEnvelope(pEnvelope);
					else
						ptrNativeObject->setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_setEnvelope_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_setEnvelope_void_IEnvelope_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_setEnvelope_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_setEnvelope_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_setMapExtent_void_IEnvelope(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::setMapExtent(pEnvelope);
					else
						ptrNativeObject->setMapExtent(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_setMapExtent_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_setMapExtent_void_IEnvelope_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_setMapExtent_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_setMapExtent_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::setMapExtent(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_getMapExtent_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::getMapExtent();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getMapExtent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_getMapExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_getMapExtent_IEnvelope_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_getMapExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_getMapExtent_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::getMapExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISpatialDisplay*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_getMapDisplay_ISpatialDisplay(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISpatialDisplay* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::getMapDisplay();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISpatialDisplay* objXXXX = ptrNativeObject->getMapDisplay();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_getMapDisplay_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_getMapDisplay_ISpatialDisplay_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_getMapDisplay_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISpatialDisplay*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_getMapDisplay_ISpatialDisplay_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISpatialDisplay* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::getMapDisplay();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_getMap_IMap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::getMap();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->getMap();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_getMap_IMap( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_getMap_IMap_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_getMap_IMap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_getMap_IMap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::getMap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_setMap_void_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* pMap )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::setMap(pMap);
					else
						ptrNativeObject->setMap(pMap);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_setMap_void_IMap( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_setMap_void_IMap_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_setMap_void_IMap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_setMap_void_IMap_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* pMap )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::setMap(pMap);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_getMapCanvas_IBitmap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::getMapCanvas();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_getMapCanvas_IBitmap( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_getMapCanvas_IBitmap_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_getMapCanvas_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_getMapCanvas_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::getMapCanvas();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CMapFrame_isSelected_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::isSelected();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelected();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_isSelected_ev_bool_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_isSelected_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CMapFrame_isSelected_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::isSelected();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_setSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::setSelected(bSelected);
					else
						ptrNativeObject->setSelected(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_setSelected_void_ev_bool_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_setSelected_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_setSelected_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::setSelected(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CMapFrame_isDrawShadow_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::isDrawShadow();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawShadow();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_isDrawShadow_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_isDrawShadow_ev_bool_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_isDrawShadow_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CMapFrame_isDrawShadow_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::isDrawShadow();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_setDrawShadow_void_ev_bool(void *pObjectXXXX, _in ev_bool bDrawed )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::setDrawShadow(bDrawed);
					else
						ptrNativeObject->setDrawShadow(bDrawed);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_setDrawShadow_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_setDrawShadow_void_ev_bool_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_setDrawShadow_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_setDrawShadow_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bDrawed )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::setDrawShadow(bDrawed);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CMapFrame_isDrawFrame_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::isDrawFrame();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawFrame();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_isDrawFrame_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_isDrawFrame_ev_bool_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_isDrawFrame_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CMapFrame_isDrawFrame_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::isDrawFrame();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_setDrawFrame_void_ev_bool(void *pObjectXXXX, _in ev_bool bDrawed )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::setDrawFrame(bDrawed);
					else
						ptrNativeObject->setDrawFrame(bDrawed);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_setDrawFrame_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_setDrawFrame_void_ev_bool_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_setDrawFrame_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_setDrawFrame_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bDrawed )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::setDrawFrame(bDrawed);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CMapFrame_isDrawBackground_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::isDrawBackground();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawBackground();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_isDrawBackground_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_isDrawBackground_ev_bool_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_isDrawBackground_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CMapFrame_isDrawBackground_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::isDrawBackground();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_setDrawBackground_void_ev_bool(void *pObjectXXXX, _in ev_bool bDrawed )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::setDrawBackground(bDrawed);
					else
						ptrNativeObject->setDrawBackground(bDrawed);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_setDrawBackground_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_setDrawBackground_void_ev_bool_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_setDrawBackground_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_setDrawBackground_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bDrawed )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::setDrawBackground(bDrawed);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CMapFrame_isAccordingPageSize_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::isAccordingPageSize();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isAccordingPageSize();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_isAccordingPageSize_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_isAccordingPageSize_ev_bool_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_isAccordingPageSize_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CMapFrame_isAccordingPageSize_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::isAccordingPageSize();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_setAccordingPageSize_void_ev_bool(void *pObjectXXXX, _in ev_bool bAccording )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::setAccordingPageSize(bAccording);
					else
						ptrNativeObject->setAccordingPageSize(bAccording);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_setAccordingPageSize_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_setAccordingPageSize_void_ev_bool_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_setAccordingPageSize_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_setAccordingPageSize_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bAccording )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::setAccordingPageSize(bAccording);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CMapFrame_drawPrepare_ev_bool_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::drawPrepare(pDisplay);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->drawPrepare(pDisplay);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_drawPrepare_ev_bool_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_drawPrepare_ev_bool_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CMapFrame_drawPrepare_ev_bool_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::drawPrepare(pDisplay);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_draw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::draw();
					else
						ptrNativeObject->draw();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_draw_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_draw_void_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_draw_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_draw_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::draw();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_drawOver_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::drawOver();
					else
						ptrNativeObject->drawOver();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_drawOver_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_drawOver_void_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_drawOver_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_drawOver_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::drawOver();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_drawBorder_void_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::drawBorder(pPageDisplay);
					else
						ptrNativeObject->drawBorder(pPageDisplay);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_drawBorder_void_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_drawBorder_void_ISpatialDisplay_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_drawBorder_void_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_drawBorder_void_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::drawBorder(pPageDisplay);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_getRenderingLayerCache_IBitmap(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::getRenderingLayerCache();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getRenderingLayerCache();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_getRenderingLayerCache_IBitmap( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_getRenderingLayerCache_IBitmap_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_getRenderingLayerCache_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_getRenderingLayerCache_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::getRenderingLayerCache();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_clone_IElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_clone_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_clone_IElement_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_clone_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_clone_IElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_toStream_void_CDataStream_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_toXML_EVString_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_CMapFrame_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_fromStream_void_CDataStream(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					if (dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CMapFrame_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_CMapFrame_fromStream_void_CDataStream_Callback* pCallback )
				{
					CMapFrameProxy* ptr = dynamic_cast<CMapFrameProxy*>((EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CMapFrame_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CMapFrame_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::CMapFrame* ptrNativeObject = (EarthView::World::Spatial::Carto::CMapFrame*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CMapFrame::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
			}
		}
	}
}
