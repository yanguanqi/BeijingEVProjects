/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/iscalebar.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_setScaleType_void_EVScaleType_Callback)(_in const int type);
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_getScaleType_EVScaleType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_setDataLabelPositon_void_DataLabelPosition_Callback)(_in const int pos);
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_getDataLabelPositon_DataLabelPosition_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_setBackgroundColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* pColor);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_getBackgroundColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_setDrawBackground_void_bool_Callback)(_in bool bDraw);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_isDrawBackground_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_setShadowColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* pColor);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_getShadowColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_setDrawShadow_void_bool_Callback)(_in bool bDraw);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_isDrawShadow_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_setFrameSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_getFrameSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_setIsDrawFrame_void_ev_bool_Callback)(_in const ev_bool bDraw);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_getIsDrawFrame_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_setMapFrame_void_IMapFrame_Callback)(_in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_setScaleUnit_void_EVMapUnits_Callback)(_in const int scaleUnit);
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_getScaleUnit_EVMapUnits_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_setScaleColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* color);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_getScaleColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_setDivisions_void_ev_int32_Callback)(_in const ev_int32 divisons);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_getDivisions_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_setDivisionLength_void_ev_real64_Callback)(_in const ev_real64 dDivLength);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_getDivisionLength_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_setSubDivisions_void_ev_int32_Callback)(_in const ev_int32 subdivisons);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_getSubDivisions_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_setHorizontalGap_void_ev_real64_Callback)(_in const ev_real64 horizontalGap);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_getHorizontalGap_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_setVerticalGap_void_ev_real64_Callback)(_in const ev_real64 verticalGap);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_getVerticalGap_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkHeight_void_ev_real64_Callback)(_in const ev_real64 divisionMarkHeight);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkHeight_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_setSubdivisionMarkHeight_void_ev_real64_Callback)(_in const ev_real64 subdivisionMarkHeight);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_getSubdivisionMarkHeight_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_setSubDivisionMarkSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_getSubDivisionMarkSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_setDataLabelSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_getDataLabelSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_setUnitLabelSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_getUnitLabelSymbol_ISymbol_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_getPreviw_IBitmap_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay);
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_getElementType_EVElementType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_setName_void_EVString_Callback)(_in char*& name);
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_getEnvelope_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_setEnvelope_void_IEnvelope_Callback)(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_isSelected_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_setSelected_void_ev_bool_Callback)(_in ev_bool bSelected);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_drawPrepare_ev_bool_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_draw_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_drawOver_void_Callback)();
				typedef EarthView::World::Spatial::Carto::IElement*  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_clone_IElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IScaleBar_fromStream_void_CDataStream_Callback)(_in void* stream);
				class IScaleBarProxy : public EarthView::World::Spatial::Carto::IScaleBar
				{
				private:
					EarthView_World_Spatial_Carto_IScaleBar_setScaleType_void_EVScaleType_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_setScaleType_void_EVScaleType_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_getScaleType_EVScaleType_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_getScaleType_EVScaleType_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_setDataLabelPositon_void_DataLabelPosition_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_setDataLabelPositon_void_DataLabelPosition_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_getDataLabelPositon_DataLabelPosition_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_getDataLabelPositon_DataLabelPosition_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_setBackgroundColor_void_IColor_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_setBackgroundColor_void_IColor_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_getBackgroundColor_IColor_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_getBackgroundColor_IColor_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_setDrawBackground_void_bool_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_setDrawBackground_void_bool_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_isDrawBackground_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_isDrawBackground_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_setShadowColor_void_IColor_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_setShadowColor_void_IColor_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_getShadowColor_IColor_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_getShadowColor_IColor_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_setDrawShadow_void_bool_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_setDrawShadow_void_bool_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_isDrawShadow_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_isDrawShadow_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_setFrameSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_setFrameSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_getFrameSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_getFrameSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_setIsDrawFrame_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_setIsDrawFrame_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_getIsDrawFrame_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_getIsDrawFrame_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_setMapFrame_void_IMapFrame_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_setMapFrame_void_IMapFrame_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_setScaleUnit_void_EVMapUnits_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_setScaleUnit_void_EVMapUnits_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_getScaleUnit_EVMapUnits_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_getScaleUnit_EVMapUnits_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_setScaleColor_void_IColor_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_setScaleColor_void_IColor_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_getScaleColor_IColor_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_getScaleColor_IColor_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_setDivisions_void_ev_int32_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_setDivisions_void_ev_int32_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_getDivisions_ev_int32_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_getDivisions_ev_int32_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_setDivisionLength_void_ev_real64_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_setDivisionLength_void_ev_real64_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_getDivisionLength_ev_real64_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_getDivisionLength_ev_real64_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_setSubDivisions_void_ev_int32_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_setSubDivisions_void_ev_int32_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_getSubDivisions_ev_int32_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_getSubDivisions_ev_int32_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_setHorizontalGap_void_ev_real64_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_setHorizontalGap_void_ev_real64_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_getHorizontalGap_ev_real64_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_getHorizontalGap_ev_real64_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_setVerticalGap_void_ev_real64_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_setVerticalGap_void_ev_real64_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_getVerticalGap_ev_real64_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_getVerticalGap_ev_real64_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkHeight_void_ev_real64_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkHeight_void_ev_real64_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkHeight_ev_real64_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkHeight_ev_real64_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_setSubdivisionMarkHeight_void_ev_real64_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_setSubdivisionMarkHeight_void_ev_real64_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_getSubdivisionMarkHeight_ev_real64_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_getSubdivisionMarkHeight_ev_real64_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_setSubDivisionMarkSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_setSubDivisionMarkSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_getSubDivisionMarkSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_getSubDivisionMarkSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_setDataLabelSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_setDataLabelSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_getDataLabelSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_getDataLabelSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_setUnitLabelSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_setUnitLabelSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_getUnitLabelSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_getUnitLabelSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_getPreviw_IBitmap_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_getPreviw_IBitmap_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_getElementType_EVElementType_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_getElementType_EVElementType_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_getName_EVString_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_getName_EVString_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_setName_void_EVString_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_setName_void_EVString_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_getEnvelope_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_getEnvelope_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_setEnvelope_void_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_setEnvelope_void_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_isSelected_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_setSelected_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_drawPrepare_ev_bool_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_drawPrepare_ev_bool_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_draw_void_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_draw_void_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_drawOver_void_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_drawOver_void_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_clone_IElement_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_clone_IElement_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_toXML_EVString_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_toXML_EVString_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_IScaleBar_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_IScaleBar_fromStream_void_CDataStream_Callback;
				public:
					IScaleBarProxy(EarthView::World::Core::CNameValuePairList *pList) : IScaleBar(pList)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_setScaleType_void_EVScaleType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_getScaleType_EVScaleType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_setDataLabelPositon_void_DataLabelPosition_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_getDataLabelPositon_DataLabelPosition_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_setBackgroundColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_getBackgroundColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_setDrawBackground_void_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_isDrawBackground_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_setShadowColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_getShadowColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_setDrawShadow_void_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_isDrawShadow_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_setFrameSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_getFrameSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_setIsDrawFrame_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_getIsDrawFrame_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_setMapFrame_void_IMapFrame_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_setScaleUnit_void_EVMapUnits_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_getScaleUnit_EVMapUnits_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_setScaleColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_getScaleColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_setDivisions_void_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_getDivisions_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_setDivisionLength_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_getDivisionLength_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_setSubDivisions_void_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_getSubDivisions_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_setHorizontalGap_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_getHorizontalGap_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_setVerticalGap_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_getVerticalGap_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkHeight_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkHeight_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_setSubdivisionMarkHeight_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_getSubdivisionMarkHeight_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_setSubDivisionMarkSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_getSubDivisionMarkSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_setDataLabelSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_getDataLabelSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_setUnitLabelSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_getUnitLabelSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_getPreviw_IBitmap_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_getElementType_EVElementType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_getEnvelope_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_setEnvelope_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_isSelected_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_setSelected_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_drawPrepare_ev_bool_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_draw_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_drawOver_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_clone_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IScaleBar_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setScaleType_void_EVScaleType(EarthView_World_Spatial_Carto_IScaleBar_setScaleType_void_EVScaleType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_setScaleType_void_EVScaleType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getScaleType_EVScaleType(EarthView_World_Spatial_Carto_IScaleBar_getScaleType_EVScaleType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_getScaleType_EVScaleType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setDataLabelPositon_void_DataLabelPosition(EarthView_World_Spatial_Carto_IScaleBar_setDataLabelPositon_void_DataLabelPosition_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_setDataLabelPositon_void_DataLabelPosition_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getDataLabelPositon_DataLabelPosition(EarthView_World_Spatial_Carto_IScaleBar_getDataLabelPositon_DataLabelPosition_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_getDataLabelPositon_DataLabelPosition_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setBackgroundColor_void_IColor(EarthView_World_Spatial_Carto_IScaleBar_setBackgroundColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_setBackgroundColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getBackgroundColor_IColor(EarthView_World_Spatial_Carto_IScaleBar_getBackgroundColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_getBackgroundColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setDrawBackground_void_bool(EarthView_World_Spatial_Carto_IScaleBar_setDrawBackground_void_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_setDrawBackground_void_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_isDrawBackground_ev_bool(EarthView_World_Spatial_Carto_IScaleBar_isDrawBackground_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_isDrawBackground_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setShadowColor_void_IColor(EarthView_World_Spatial_Carto_IScaleBar_setShadowColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_setShadowColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getShadowColor_IColor(EarthView_World_Spatial_Carto_IScaleBar_getShadowColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_getShadowColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setDrawShadow_void_bool(EarthView_World_Spatial_Carto_IScaleBar_setDrawShadow_void_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_setDrawShadow_void_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_isDrawShadow_ev_bool(EarthView_World_Spatial_Carto_IScaleBar_isDrawShadow_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_isDrawShadow_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setFrameSymbol_void_ISymbol(EarthView_World_Spatial_Carto_IScaleBar_setFrameSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_setFrameSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getFrameSymbol_ISymbol(EarthView_World_Spatial_Carto_IScaleBar_getFrameSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_getFrameSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setIsDrawFrame_void_ev_bool(EarthView_World_Spatial_Carto_IScaleBar_setIsDrawFrame_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_setIsDrawFrame_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getIsDrawFrame_ev_bool(EarthView_World_Spatial_Carto_IScaleBar_getIsDrawFrame_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_getIsDrawFrame_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setMapFrame_void_IMapFrame(EarthView_World_Spatial_Carto_IScaleBar_setMapFrame_void_IMapFrame_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_setMapFrame_void_IMapFrame_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setScaleUnit_void_EVMapUnits(EarthView_World_Spatial_Carto_IScaleBar_setScaleUnit_void_EVMapUnits_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_setScaleUnit_void_EVMapUnits_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getScaleUnit_EVMapUnits(EarthView_World_Spatial_Carto_IScaleBar_getScaleUnit_EVMapUnits_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_getScaleUnit_EVMapUnits_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setScaleColor_void_IColor(EarthView_World_Spatial_Carto_IScaleBar_setScaleColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_setScaleColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getScaleColor_IColor(EarthView_World_Spatial_Carto_IScaleBar_getScaleColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_getScaleColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setDivisions_void_ev_int32(EarthView_World_Spatial_Carto_IScaleBar_setDivisions_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_setDivisions_void_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getDivisions_ev_int32(EarthView_World_Spatial_Carto_IScaleBar_getDivisions_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_getDivisions_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setDivisionLength_void_ev_real64(EarthView_World_Spatial_Carto_IScaleBar_setDivisionLength_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_setDivisionLength_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getDivisionLength_ev_real64(EarthView_World_Spatial_Carto_IScaleBar_getDivisionLength_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_getDivisionLength_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setSubDivisions_void_ev_int32(EarthView_World_Spatial_Carto_IScaleBar_setSubDivisions_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_setSubDivisions_void_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getSubDivisions_ev_int32(EarthView_World_Spatial_Carto_IScaleBar_getSubDivisions_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_getSubDivisions_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setHorizontalGap_void_ev_real64(EarthView_World_Spatial_Carto_IScaleBar_setHorizontalGap_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_setHorizontalGap_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getHorizontalGap_ev_real64(EarthView_World_Spatial_Carto_IScaleBar_getHorizontalGap_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_getHorizontalGap_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setVerticalGap_void_ev_real64(EarthView_World_Spatial_Carto_IScaleBar_setVerticalGap_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_setVerticalGap_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getVerticalGap_ev_real64(EarthView_World_Spatial_Carto_IScaleBar_getVerticalGap_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_getVerticalGap_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkHeight_void_ev_real64(EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkHeight_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkHeight_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkHeight_ev_real64(EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkHeight_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkHeight_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setSubdivisionMarkHeight_void_ev_real64(EarthView_World_Spatial_Carto_IScaleBar_setSubdivisionMarkHeight_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_setSubdivisionMarkHeight_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getSubdivisionMarkHeight_ev_real64(EarthView_World_Spatial_Carto_IScaleBar_getSubdivisionMarkHeight_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_getSubdivisionMarkHeight_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkSymbol_void_ISymbol(EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkSymbol_ISymbol(EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setSubDivisionMarkSymbol_void_ISymbol(EarthView_World_Spatial_Carto_IScaleBar_setSubDivisionMarkSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_setSubDivisionMarkSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getSubDivisionMarkSymbol_ISymbol(EarthView_World_Spatial_Carto_IScaleBar_getSubDivisionMarkSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_getSubDivisionMarkSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setDataLabelSymbol_void_ISymbol(EarthView_World_Spatial_Carto_IScaleBar_setDataLabelSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_setDataLabelSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getDataLabelSymbol_ISymbol(EarthView_World_Spatial_Carto_IScaleBar_getDataLabelSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_getDataLabelSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setUnitLabelSymbol_void_ISymbol(EarthView_World_Spatial_Carto_IScaleBar_setUnitLabelSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_setUnitLabelSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getUnitLabelSymbol_ISymbol(EarthView_World_Spatial_Carto_IScaleBar_getUnitLabelSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_getUnitLabelSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getPreviw_IBitmap_ISpatialDisplay(EarthView_World_Spatial_Carto_IScaleBar_getPreviw_IBitmap_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_getPreviw_IBitmap_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getElementType_EVElementType(EarthView_World_Spatial_Carto_IScaleBar_getElementType_EVElementType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_getElementType_EVElementType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getName_EVString(EarthView_World_Spatial_Carto_IScaleBar_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setName_void_EVString(EarthView_World_Spatial_Carto_IScaleBar_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getEnvelope_IEnvelope(EarthView_World_Spatial_Carto_IScaleBar_getEnvelope_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_getEnvelope_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setEnvelope_void_IEnvelope(EarthView_World_Spatial_Carto_IScaleBar_setEnvelope_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_setEnvelope_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_isSelected_ev_bool(EarthView_World_Spatial_Carto_IScaleBar_isSelected_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_isSelected_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setSelected_void_ev_bool(EarthView_World_Spatial_Carto_IScaleBar_setSelected_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_setSelected_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_drawPrepare_ev_bool_ISpatialDisplay(EarthView_World_Spatial_Carto_IScaleBar_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_drawPrepare_ev_bool_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_draw_void(EarthView_World_Spatial_Carto_IScaleBar_draw_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_draw_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_drawOver_void(EarthView_World_Spatial_Carto_IScaleBar_drawOver_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_drawOver_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_clone_IElement(EarthView_World_Spatial_Carto_IScaleBar_clone_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_clone_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_toStream_void_CDataStream(EarthView_World_Spatial_Carto_IScaleBar_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_toXML_EVString(EarthView_World_Spatial_Carto_IScaleBar_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Carto_IScaleBar_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_toXmlElement_CXmlElement(EarthView_World_Spatial_Carto_IScaleBar_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IScaleBar_fromStream_void_CDataStream(EarthView_World_Spatial_Carto_IScaleBar_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IScaleBar_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Carto::EVElementType getElementType() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_getElementType_EVElementType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::EVElementType returnValue = (EarthView::World::Spatial::Carto::EVElementType)m_EarthView_World_Spatial_Carto_IScaleBar_getElementType_EVElementType_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::getElementType();
					}
					virtual void setScaleType(_in const EarthView::World::Spatial::Carto::EVScaleType type)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_setScaleType_void_EVScaleType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_setScaleType_void_EVScaleType_Callback((int)type);
						}
						else
							return this->IScaleBar::setScaleType(type);
					}
					virtual EarthView::World::Spatial::Carto::EVScaleType getScaleType() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_getScaleType_EVScaleType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::EVScaleType returnValue = (EarthView::World::Spatial::Carto::EVScaleType)m_EarthView_World_Spatial_Carto_IScaleBar_getScaleType_EVScaleType_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::getScaleType();
					}
					virtual void setDataLabelPositon(_in const EarthView::World::Spatial::Carto::DataLabelPosition pos)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_setDataLabelPositon_void_DataLabelPosition_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_setDataLabelPositon_void_DataLabelPosition_Callback((int)pos);
						}
						else
							return this->IScaleBar::setDataLabelPositon(pos);
					}
					virtual EarthView::World::Spatial::Carto::DataLabelPosition getDataLabelPositon() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_getDataLabelPositon_DataLabelPosition_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::DataLabelPosition returnValue = (EarthView::World::Spatial::Carto::DataLabelPosition)m_EarthView_World_Spatial_Carto_IScaleBar_getDataLabelPositon_DataLabelPosition_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::getDataLabelPositon();
					}
					virtual void setBackgroundColor(_in const EarthView::World::Spatial::Display::IColor* pColor)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_setBackgroundColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_setBackgroundColor_void_IColor_Callback(pColor);
						}
						else
							return this->IScaleBar::setBackgroundColor(pColor);
					}
					virtual EarthView::World::Spatial::Display::IColor* getBackgroundColor() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_getBackgroundColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Carto_IScaleBar_getBackgroundColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::getBackgroundColor();
					}
					virtual void setDrawBackground(_in bool bDraw)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_setDrawBackground_void_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_setDrawBackground_void_bool_Callback(bDraw);
						}
						else
							return this->IScaleBar::setDrawBackground(bDraw);
					}
					virtual ev_bool isDrawBackground() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_isDrawBackground_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IScaleBar_isDrawBackground_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::isDrawBackground();
					}
					virtual void setShadowColor(_in const EarthView::World::Spatial::Display::IColor* pColor)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_setShadowColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_setShadowColor_void_IColor_Callback(pColor);
						}
						else
							return this->IScaleBar::setShadowColor(pColor);
					}
					virtual EarthView::World::Spatial::Display::IColor* getShadowColor() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_getShadowColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Carto_IScaleBar_getShadowColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::getShadowColor();
					}
					virtual void setDrawShadow(_in bool bDraw)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_setDrawShadow_void_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_setDrawShadow_void_bool_Callback(bDraw);
						}
						else
							return this->IScaleBar::setDrawShadow(bDraw);
					}
					virtual ev_bool isDrawShadow() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_isDrawShadow_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IScaleBar_isDrawShadow_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::isDrawShadow();
					}
					virtual void setFrameSymbol(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_setFrameSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_setFrameSymbol_void_ISymbol_Callback(pSymbol);
						}
						else
							return this->IScaleBar::setFrameSymbol(pSymbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getFrameSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_getFrameSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_IScaleBar_getFrameSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::getFrameSymbol();
					}
					virtual void setIsDrawFrame(_in const ev_bool bDraw)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_setIsDrawFrame_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_setIsDrawFrame_void_ev_bool_Callback(bDraw);
						}
						else
							return this->IScaleBar::setIsDrawFrame(bDraw);
					}
					virtual ev_bool getIsDrawFrame() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_getIsDrawFrame_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IScaleBar_getIsDrawFrame_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::getIsDrawFrame();
					}
					virtual void setMapFrame(_in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_setMapFrame_void_IMapFrame_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_setMapFrame_void_IMapFrame_Callback(pMapFrame);
						}
						else
							return this->IScaleBar::setMapFrame(pMapFrame);
					}
					virtual void setScaleUnit(_in const EarthView::World::Spatial::Atlas::EVMapUnits scaleUnit)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_setScaleUnit_void_EVMapUnits_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_setScaleUnit_void_EVMapUnits_Callback((int)scaleUnit);
						}
						else
							return this->IScaleBar::setScaleUnit(scaleUnit);
					}
					virtual EarthView::World::Spatial::Atlas::EVMapUnits getScaleUnit() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_getScaleUnit_EVMapUnits_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVMapUnits returnValue = (EarthView::World::Spatial::Atlas::EVMapUnits)m_EarthView_World_Spatial_Carto_IScaleBar_getScaleUnit_EVMapUnits_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::getScaleUnit();
					}
					virtual void setScaleColor(_in const EarthView::World::Spatial::Display::IColor* color)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_setScaleColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_setScaleColor_void_IColor_Callback(color);
						}
						else
							return this->IScaleBar::setScaleColor(color);
					}
					virtual EarthView::World::Spatial::Display::IColor* getScaleColor() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_getScaleColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Carto_IScaleBar_getScaleColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::getScaleColor();
					}
					virtual void setDivisions(_in const ev_int32 divisons)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_setDivisions_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_setDivisions_void_ev_int32_Callback(divisons);
						}
						else
							return this->IScaleBar::setDivisions(divisons);
					}
					virtual ev_int32 getDivisions() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_getDivisions_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Carto_IScaleBar_getDivisions_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::getDivisions();
					}
					virtual void setDivisionLength(_in const ev_real64 dDivLength)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_setDivisionLength_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_setDivisionLength_void_ev_real64_Callback(dDivLength);
						}
						else
							return this->IScaleBar::setDivisionLength(dDivLength);
					}
					virtual ev_real64 getDivisionLength() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_getDivisionLength_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Carto_IScaleBar_getDivisionLength_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::getDivisionLength();
					}
					virtual void setSubDivisions(_in const ev_int32 subdivisons)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_setSubDivisions_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_setSubDivisions_void_ev_int32_Callback(subdivisons);
						}
						else
							return this->IScaleBar::setSubDivisions(subdivisons);
					}
					virtual ev_int32 getSubDivisions() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_getSubDivisions_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Carto_IScaleBar_getSubDivisions_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::getSubDivisions();
					}
					virtual void setHorizontalGap(_in const ev_real64 horizontalGap)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_setHorizontalGap_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_setHorizontalGap_void_ev_real64_Callback(horizontalGap);
						}
						else
							return this->IScaleBar::setHorizontalGap(horizontalGap);
					}
					virtual ev_real64 getHorizontalGap() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_getHorizontalGap_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Carto_IScaleBar_getHorizontalGap_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::getHorizontalGap();
					}
					virtual void setVerticalGap(_in const ev_real64 verticalGap)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_setVerticalGap_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_setVerticalGap_void_ev_real64_Callback(verticalGap);
						}
						else
							return this->IScaleBar::setVerticalGap(verticalGap);
					}
					virtual ev_real64 getVerticalGap() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_getVerticalGap_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Carto_IScaleBar_getVerticalGap_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::getVerticalGap();
					}
					virtual void setDivisionMarkHeight(_in const ev_real64 divisionMarkHeight)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkHeight_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkHeight_void_ev_real64_Callback(divisionMarkHeight);
						}
						else
							return this->IScaleBar::setDivisionMarkHeight(divisionMarkHeight);
					}
					virtual ev_real64 getDivisionMarkHeight() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkHeight_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkHeight_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::getDivisionMarkHeight();
					}
					virtual void setSubdivisionMarkHeight(_in const ev_real64 subdivisionMarkHeight)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_setSubdivisionMarkHeight_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_setSubdivisionMarkHeight_void_ev_real64_Callback(subdivisionMarkHeight);
						}
						else
							return this->IScaleBar::setSubdivisionMarkHeight(subdivisionMarkHeight);
					}
					virtual ev_real64 getSubdivisionMarkHeight() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_getSubdivisionMarkHeight_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Carto_IScaleBar_getSubdivisionMarkHeight_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::getSubdivisionMarkHeight();
					}
					virtual void setDivisionMarkSymbol(_in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->IScaleBar::setDivisionMarkSymbol(symbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getDivisionMarkSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::getDivisionMarkSymbol();
					}
					virtual void setSubDivisionMarkSymbol(_in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_setSubDivisionMarkSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_setSubDivisionMarkSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->IScaleBar::setSubDivisionMarkSymbol(symbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getSubDivisionMarkSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_getSubDivisionMarkSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_IScaleBar_getSubDivisionMarkSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::getSubDivisionMarkSymbol();
					}
					virtual void setDataLabelSymbol(_in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_setDataLabelSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_setDataLabelSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->IScaleBar::setDataLabelSymbol(symbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getDataLabelSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_getDataLabelSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_IScaleBar_getDataLabelSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::getDataLabelSymbol();
					}
					virtual void setUnitLabelSymbol(_in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_setUnitLabelSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_setUnitLabelSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->IScaleBar::setUnitLabelSymbol(symbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getUnitLabelSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_getUnitLabelSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_IScaleBar_getUnitLabelSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::getUnitLabelSymbol();
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_getEnvelope_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Carto_IScaleBar_getEnvelope_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::getEnvelope();
					}
					virtual void setEnvelope(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_setEnvelope_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_setEnvelope_void_IEnvelope_Callback(pEnvelope);
						}
						else
							return this->IScaleBar::setEnvelope(pEnvelope);
					}
					virtual ev_bool isSelected()
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IScaleBar_isSelected_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::isSelected();
					}
					virtual void setSelected(_in ev_bool b)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_setSelected_void_ev_bool_Callback(b);
						}
						else
							return this->IScaleBar::setSelected(b);
					}
					virtual EarthView::World::Display::IBitmap* getPreviw(_in EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_getPreviw_IBitmap_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial_Carto_IScaleBar_getPreviw_IBitmap_ISpatialDisplay_Callback(pPageDisplay);
							return returnValue;
						}
						else
							return this->IScaleBar::getPreviw(pPageDisplay);
					}
					virtual ev_bool drawPrepare(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_drawPrepare_ev_bool_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IScaleBar_drawPrepare_ev_bool_ISpatialDisplay_Callback(pDisplay);
							return returnValue;
						}
						else
							return this->IScaleBar::drawPrepare(pDisplay);
					}
					virtual void draw()
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_draw_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_draw_void_Callback();
						}
						else
							return this->IScaleBar::draw();
					}
					virtual void drawOver()
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_drawOver_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_drawOver_void_Callback();
						}
						else
							return this->IScaleBar::drawOver();
					}
					virtual EarthView::World::Spatial::Carto::IElement* clone() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_clone_IElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::IElement* returnValue = m_EarthView_World_Spatial_Carto_IScaleBar_clone_IElement_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IScaleBar::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_IScaleBar_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->IScaleBar::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Carto_IScaleBar_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::toXmlElement();
					}
					virtual void fromStream(_in EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IScaleBar_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IScaleBar::fromStream(stream);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_IScaleBar_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IScaleBar::getName();
					}
					virtual void setName(_in EVString name)
					{
						if(m_EarthView_World_Spatial_Carto_IScaleBar_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Carto_IScaleBar_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->IScaleBar::setName(name);
					}
				};
				REGISTER_FACTORY_CLASS(IScaleBarProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getElementType_EVElementType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getElementType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->getElementType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_getElementType_EVElementType( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_getElementType_EVElementType_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getElementType_EVElementType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getElementType_EVElementType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getElementType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setScaleType_void_EVScaleType(void *pObjectXXXX, _in const int type )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setScaleType((EarthView::World::Spatial::Carto::EVScaleType)type);
					else
						ptrNativeObject->setScaleType((EarthView::World::Spatial::Carto::EVScaleType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_setScaleType_void_EVScaleType( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_setScaleType_void_EVScaleType_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setScaleType_void_EVScaleType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setScaleType_void_EVScaleType_NoVirtual(void *pObjectXXXX, _in const int type )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setScaleType((EarthView::World::Spatial::Carto::EVScaleType)type);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getScaleType_EVScaleType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::EVScaleType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getScaleType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVScaleType objXXXX = ptrNativeObject->getScaleType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_getScaleType_EVScaleType( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_getScaleType_EVScaleType_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getScaleType_EVScaleType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getScaleType_EVScaleType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					EarthView::World::Spatial::Carto::EVScaleType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getScaleType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setDataLabelPositon_void_DataLabelPosition(void *pObjectXXXX, _in const int pos )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setDataLabelPositon((EarthView::World::Spatial::Carto::DataLabelPosition)pos);
					else
						ptrNativeObject->setDataLabelPositon((EarthView::World::Spatial::Carto::DataLabelPosition)pos);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_setDataLabelPositon_void_DataLabelPosition( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_setDataLabelPositon_void_DataLabelPosition_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setDataLabelPositon_void_DataLabelPosition(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setDataLabelPositon_void_DataLabelPosition_NoVirtual(void *pObjectXXXX, _in const int pos )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setDataLabelPositon((EarthView::World::Spatial::Carto::DataLabelPosition)pos);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getDataLabelPositon_DataLabelPosition(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::DataLabelPosition objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getDataLabelPositon();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::DataLabelPosition objXXXX = ptrNativeObject->getDataLabelPositon();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_getDataLabelPositon_DataLabelPosition( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_getDataLabelPositon_DataLabelPosition_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getDataLabelPositon_DataLabelPosition(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getDataLabelPositon_DataLabelPosition_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					EarthView::World::Spatial::Carto::DataLabelPosition objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getDataLabelPositon();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setBackgroundColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setBackgroundColor(pColor);
					else
						ptrNativeObject->setBackgroundColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_setBackgroundColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_setBackgroundColor_void_IColor_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setBackgroundColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setBackgroundColor_void_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setBackgroundColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getBackgroundColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getBackgroundColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getBackgroundColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_getBackgroundColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_getBackgroundColor_IColor_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getBackgroundColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getBackgroundColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getBackgroundColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setDrawBackground_void_bool(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setDrawBackground(bDraw);
					else
						ptrNativeObject->setDrawBackground(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_setDrawBackground_void_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_setDrawBackground_void_bool_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setDrawBackground_void_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setDrawBackground_void_bool_NoVirtual(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setDrawBackground(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IScaleBar_isDrawBackground_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::isDrawBackground();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawBackground();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_isDrawBackground_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_isDrawBackground_ev_bool_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_isDrawBackground_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IScaleBar_isDrawBackground_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::isDrawBackground();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setShadowColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setShadowColor(pColor);
					else
						ptrNativeObject->setShadowColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_setShadowColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_setShadowColor_void_IColor_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setShadowColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setShadowColor_void_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setShadowColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getShadowColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getShadowColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getShadowColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_getShadowColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_getShadowColor_IColor_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getShadowColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getShadowColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getShadowColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setDrawShadow_void_bool(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setDrawShadow(bDraw);
					else
						ptrNativeObject->setDrawShadow(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_setDrawShadow_void_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_setDrawShadow_void_bool_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setDrawShadow_void_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setDrawShadow_void_bool_NoVirtual(void *pObjectXXXX, _in bool bDraw )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setDrawShadow(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IScaleBar_isDrawShadow_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::isDrawShadow();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawShadow();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_isDrawShadow_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_isDrawShadow_ev_bool_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_isDrawShadow_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IScaleBar_isDrawShadow_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::isDrawShadow();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setFrameSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setFrameSymbol(pSymbol);
					else
						ptrNativeObject->setFrameSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_setFrameSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_setFrameSymbol_void_ISymbol_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setFrameSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setFrameSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setFrameSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getFrameSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getFrameSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getFrameSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_getFrameSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_getFrameSymbol_ISymbol_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getFrameSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getFrameSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getFrameSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setIsDrawFrame_void_ev_bool(void *pObjectXXXX, _in const ev_bool bDraw )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setIsDrawFrame(bDraw);
					else
						ptrNativeObject->setIsDrawFrame(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_setIsDrawFrame_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_setIsDrawFrame_void_ev_bool_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setIsDrawFrame_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setIsDrawFrame_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool bDraw )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setIsDrawFrame(bDraw);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getIsDrawFrame_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getIsDrawFrame();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getIsDrawFrame();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_getIsDrawFrame_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_getIsDrawFrame_ev_bool_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getIsDrawFrame_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getIsDrawFrame_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getIsDrawFrame();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setMapFrame_void_IMapFrame(void *pObjectXXXX, _in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setMapFrame(pMapFrame);
					else
						ptrNativeObject->setMapFrame(pMapFrame);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_setMapFrame_void_IMapFrame( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_setMapFrame_void_IMapFrame_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setMapFrame_void_IMapFrame(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setMapFrame_void_IMapFrame_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setMapFrame(pMapFrame);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setScaleUnit_void_EVMapUnits(void *pObjectXXXX, _in const int scaleUnit )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setScaleUnit((EarthView::World::Spatial::Atlas::EVMapUnits)scaleUnit);
					else
						ptrNativeObject->setScaleUnit((EarthView::World::Spatial::Atlas::EVMapUnits)scaleUnit);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_setScaleUnit_void_EVMapUnits( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_setScaleUnit_void_EVMapUnits_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setScaleUnit_void_EVMapUnits(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setScaleUnit_void_EVMapUnits_NoVirtual(void *pObjectXXXX, _in const int scaleUnit )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setScaleUnit((EarthView::World::Spatial::Atlas::EVMapUnits)scaleUnit);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getScaleUnit_EVMapUnits(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVMapUnits objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getScaleUnit();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVMapUnits objXXXX = ptrNativeObject->getScaleUnit();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_getScaleUnit_EVMapUnits( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_getScaleUnit_EVMapUnits_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getScaleUnit_EVMapUnits(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getScaleUnit_EVMapUnits_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVMapUnits objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getScaleUnit();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setScaleColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* color )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setScaleColor(color);
					else
						ptrNativeObject->setScaleColor(color);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_setScaleColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_setScaleColor_void_IColor_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setScaleColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setScaleColor_void_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* color )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setScaleColor(color);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getScaleColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getScaleColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getScaleColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_getScaleColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_getScaleColor_IColor_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getScaleColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getScaleColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getScaleColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setDivisions_void_ev_int32(void *pObjectXXXX, _in const ev_int32 divisons )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setDivisions(divisons);
					else
						ptrNativeObject->setDivisions(divisons);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_setDivisions_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_setDivisions_void_ev_int32_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setDivisions_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setDivisions_void_ev_int32_NoVirtual(void *pObjectXXXX, _in const ev_int32 divisons )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setDivisions(divisons);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getDivisions_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getDivisions();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getDivisions();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_getDivisions_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_getDivisions_ev_int32_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getDivisions_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getDivisions_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getDivisions();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setDivisionLength_void_ev_real64(void *pObjectXXXX, _in const ev_real64 dDivLength )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setDivisionLength(dDivLength);
					else
						ptrNativeObject->setDivisionLength(dDivLength);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_setDivisionLength_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_setDivisionLength_void_ev_real64_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setDivisionLength_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setDivisionLength_void_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_real64 dDivLength )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setDivisionLength(dDivLength);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getDivisionLength_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getDivisionLength();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getDivisionLength();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_getDivisionLength_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_getDivisionLength_ev_real64_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getDivisionLength_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getDivisionLength_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getDivisionLength();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setSubDivisions_void_ev_int32(void *pObjectXXXX, _in const ev_int32 subdivisons )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setSubDivisions(subdivisons);
					else
						ptrNativeObject->setSubDivisions(subdivisons);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_setSubDivisions_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_setSubDivisions_void_ev_int32_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setSubDivisions_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setSubDivisions_void_ev_int32_NoVirtual(void *pObjectXXXX, _in const ev_int32 subdivisons )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setSubDivisions(subdivisons);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getSubDivisions_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getSubDivisions();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getSubDivisions();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_getSubDivisions_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_getSubDivisions_ev_int32_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getSubDivisions_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getSubDivisions_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getSubDivisions();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setHorizontalGap_void_ev_real64(void *pObjectXXXX, _in const ev_real64 horizontalGap )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setHorizontalGap(horizontalGap);
					else
						ptrNativeObject->setHorizontalGap(horizontalGap);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_setHorizontalGap_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_setHorizontalGap_void_ev_real64_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setHorizontalGap_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setHorizontalGap_void_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_real64 horizontalGap )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setHorizontalGap(horizontalGap);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getHorizontalGap_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getHorizontalGap();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getHorizontalGap();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_getHorizontalGap_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_getHorizontalGap_ev_real64_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getHorizontalGap_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getHorizontalGap_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getHorizontalGap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setVerticalGap_void_ev_real64(void *pObjectXXXX, _in const ev_real64 verticalGap )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setVerticalGap(verticalGap);
					else
						ptrNativeObject->setVerticalGap(verticalGap);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_setVerticalGap_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_setVerticalGap_void_ev_real64_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setVerticalGap_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setVerticalGap_void_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_real64 verticalGap )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setVerticalGap(verticalGap);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getVerticalGap_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getVerticalGap();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getVerticalGap();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_getVerticalGap_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_getVerticalGap_ev_real64_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getVerticalGap_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getVerticalGap_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getVerticalGap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkHeight_void_ev_real64(void *pObjectXXXX, _in const ev_real64 divisionMarkHeight )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setDivisionMarkHeight(divisionMarkHeight);
					else
						ptrNativeObject->setDivisionMarkHeight(divisionMarkHeight);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkHeight_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkHeight_void_ev_real64_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkHeight_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkHeight_void_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_real64 divisionMarkHeight )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setDivisionMarkHeight(divisionMarkHeight);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkHeight_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getDivisionMarkHeight();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getDivisionMarkHeight();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkHeight_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkHeight_ev_real64_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkHeight_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkHeight_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getDivisionMarkHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setSubdivisionMarkHeight_void_ev_real64(void *pObjectXXXX, _in const ev_real64 subdivisionMarkHeight )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setSubdivisionMarkHeight(subdivisionMarkHeight);
					else
						ptrNativeObject->setSubdivisionMarkHeight(subdivisionMarkHeight);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_setSubdivisionMarkHeight_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_setSubdivisionMarkHeight_void_ev_real64_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setSubdivisionMarkHeight_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setSubdivisionMarkHeight_void_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_real64 subdivisionMarkHeight )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setSubdivisionMarkHeight(subdivisionMarkHeight);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getSubdivisionMarkHeight_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getSubdivisionMarkHeight();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getSubdivisionMarkHeight();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_getSubdivisionMarkHeight_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_getSubdivisionMarkHeight_ev_real64_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getSubdivisionMarkHeight_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getSubdivisionMarkHeight_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getSubdivisionMarkHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setDivisionMarkSymbol(symbol);
					else
						ptrNativeObject->setDivisionMarkSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkSymbol_void_ISymbol_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setDivisionMarkSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setDivisionMarkSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getDivisionMarkSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getDivisionMarkSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkSymbol_ISymbol_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getDivisionMarkSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getDivisionMarkSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setSubDivisionMarkSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setSubDivisionMarkSymbol(symbol);
					else
						ptrNativeObject->setSubDivisionMarkSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_setSubDivisionMarkSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_setSubDivisionMarkSymbol_void_ISymbol_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setSubDivisionMarkSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setSubDivisionMarkSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setSubDivisionMarkSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getSubDivisionMarkSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getSubDivisionMarkSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getSubDivisionMarkSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_getSubDivisionMarkSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_getSubDivisionMarkSymbol_ISymbol_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getSubDivisionMarkSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getSubDivisionMarkSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getSubDivisionMarkSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setDataLabelSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setDataLabelSymbol(symbol);
					else
						ptrNativeObject->setDataLabelSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_setDataLabelSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_setDataLabelSymbol_void_ISymbol_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setDataLabelSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setDataLabelSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setDataLabelSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getDataLabelSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getDataLabelSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getDataLabelSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_getDataLabelSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_getDataLabelSymbol_ISymbol_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getDataLabelSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getDataLabelSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getDataLabelSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setUnitLabelSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setUnitLabelSymbol(symbol);
					else
						ptrNativeObject->setUnitLabelSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_setUnitLabelSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_setUnitLabelSymbol_void_ISymbol_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setUnitLabelSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setUnitLabelSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setUnitLabelSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getUnitLabelSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getUnitLabelSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getUnitLabelSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_getUnitLabelSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_getUnitLabelSymbol_ISymbol_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getUnitLabelSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getUnitLabelSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getUnitLabelSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getEnvelope_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getEnvelope();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelope();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_getEnvelope_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_getEnvelope_IEnvelope_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getEnvelope_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getEnvelope_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getEnvelope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setEnvelope_void_IEnvelope(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setEnvelope(pEnvelope);
					else
						ptrNativeObject->setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_setEnvelope_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_setEnvelope_void_IEnvelope_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setEnvelope_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setEnvelope_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IScaleBar_isSelected_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::isSelected();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelected();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_isSelected_ev_bool_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_isSelected_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IScaleBar_isSelected_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::isSelected();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool b )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setSelected(b);
					else
						ptrNativeObject->setSelected(b);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_setSelected_void_ev_bool_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setSelected_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_setSelected_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool b )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::setSelected(b);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getPreviw_IBitmap_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getPreviw(pPageDisplay);
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getPreviw(pPageDisplay);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_getPreviw_IBitmap_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_getPreviw_IBitmap_ISpatialDisplay_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getPreviw_IBitmap_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_Carto_IScaleBar_getPreviw_IBitmap_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::getPreviw(pPageDisplay);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IScaleBar_drawPrepare_ev_bool_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::drawPrepare(pDisplay);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->drawPrepare(pDisplay);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_drawPrepare_ev_bool_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_drawPrepare_ev_bool_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IScaleBar_drawPrepare_ev_bool_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::drawPrepare(pDisplay);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_draw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::draw();
					else
						ptrNativeObject->draw();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_draw_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_draw_void_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_draw_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_draw_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::draw();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_drawOver_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::drawOver();
					else
						ptrNativeObject->drawOver();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_drawOver_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_drawOver_void_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_drawOver_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_drawOver_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::drawOver();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_IScaleBar_clone_IElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_clone_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_clone_IElement_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_clone_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_IScaleBar_clone_IElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_toStream_void_CDataStream_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IScaleBar_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_toXML_EVString_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IScaleBar_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_IScaleBar_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_toXmlElement_CXmlElement_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_IScaleBar_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_fromStream_void_CDataStream(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					if (dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_fromStream_void_CDataStream_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IScaleBar_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::IScaleBar* ptrNativeObject = (EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IScaleBar::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_getName_EVString_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IScaleBar_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IScaleBar_setName_void_EVString_Callback* pCallback )
				{
					IScaleBarProxy* ptr = dynamic_cast<IScaleBarProxy*>((EarthView::World::Spatial::Carto::IScaleBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IScaleBar_setName_void_EVString(pCallback);
					}
				}
			}
		}
	}
}
