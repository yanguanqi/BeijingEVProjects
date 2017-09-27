/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/industrygraphic/polylinefeature.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSymbolTool_loadImage_void_EVString_MemoryDataStreamPtr(_in const char* imagePath, _inout void* dataStream )
			{
				EarthView::World::Core::ev_string imagePath1 = imagePath;
				EarthView::IndustryEngine::IndustryGraphic::CSymbolTool::loadImage(imagePath1, *(EarthView::World::Core::MemoryDataStreamPtr*)dataStream);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSymbolTool_isEqualSymbol_ev_bool_ISymbol_ISymbol(_in EarthView::World::Spatial::Display::ISymbol* pSymbol1, _in EarthView::World::Spatial::Display::ISymbol* pSymbol2 )
			{
				ev_bool objXXXX = EarthView::IndustryEngine::IndustryGraphic::CSymbolTool::isEqualSymbol(pSymbol1, pSymbol2);
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_addPoint_void_CCoordinate_Callback)(_in const void* point);
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUniqueID_void_ev_int32_Callback)(_in const ev_int32& uniqueID);
			typedef ev_int32  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUniqueID_ev_int32_Callback)();
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isShowAllPoints_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isValidIndex_ev_bool_ev_int32_Callback)(_in const ev_int32& index);
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedUpdate_void_ev_bool_Callback)(_in const ev_bool& needUpdate);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedUpdate_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayPointNum_void_ev_int32_Callback)(_in const ev_int32& displayNumber);
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayMode_void_EVDisplayMode_Callback)(_in const int& displayMode);
			typedef int  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayMode_EVDisplayMode_Callback)();
			typedef ev_int32  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayPointNum_ev_int32_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeatureSymbol_void_ISymbol_Callback)(_in EarthView::World::Spatial::Display::ISymbol* polylineFeatureSymbol);
			typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeatureSymbol_ISymbol_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setName_void_EVString_Callback)(_in char*& name);
			typedef char*  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getName_EarthView_World_Core_ev_string_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeaturePath_void_CLineString_Callback)(_in EarthView::World::Spatial::Geometry::CLineString* polylineFeaturePath);
			typedef EarthView::World::Spatial::Geometry::CLineString*  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeaturePath_CLineString_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_removeAllPoints_void_Callback)();
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getISpatialReference_ISpatialReference_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setISpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_pSpatialReference);
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setVisible_void_ev_bool_Callback)(_in const ev_bool& value);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDescription_void_EVString_Callback)(_in char*& description);
			typedef char*  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDescription_EVString_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_refresh_void_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineColorInfo_void_CRgbColor_CRgbColor_Callback)(_in EarthView::World::Spatial::Display::CRgbColor* staticHighLineColor, _in EarthView::World::Spatial::Display::CRgbColor* dynamicHighLineColor);
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineDistance_void_ev_real64_Callback)(_in const ev_real64& highLineDistance);
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseHighLineDistance_void_ev_bool_Callback)(_in const ev_bool& value);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseHighLineDistance_ev_bool_Callback)();
			typedef ev_real64  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getHighLineDistance_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setIsHighLine_void_ev_bool_Callback)(_in const ev_bool& isHighLine);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getIsHighLine_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedClearUselessData_void_ev_bool_Callback)(_in const ev_bool& value);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedClearUselessData_ev_bool_Callback)();
			typedef ev_int32  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_clearUselessData_ev_int32_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setMaxUselessDataCount_void_ev_int32_Callback)(_in const ev_int32& maxUselessDataCount);
			typedef ev_int32  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getMaxUselessDataCount_ev_int32_Callback)();
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseWallGradualColor_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseWallGradualColor_void_ev_bool_Callback)(_in const ev_bool& useWallGradualColor);
			typedef EarthView::World::Spatial::Display::CRgbColor*  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getWallGradualColor_CRgbColor_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setWallGradualColor_void_CRgbColor_Callback)(_in EarthView::World::Spatial::Display::CRgbColor* pWallGradualColor);
			class CPolylineFeatureProxy : public EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature
			{
			private:
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_addPoint_void_CCoordinate_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_addPoint_void_CCoordinate_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUniqueID_void_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUniqueID_void_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUniqueID_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUniqueID_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isShowAllPoints_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isShowAllPoints_ev_bool_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isValidIndex_ev_bool_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isValidIndex_ev_bool_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedUpdate_void_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedUpdate_void_ev_bool_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedUpdate_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedUpdate_ev_bool_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayPointNum_void_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayPointNum_void_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayMode_void_EVDisplayMode_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayMode_void_EVDisplayMode_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayMode_EVDisplayMode_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayMode_EVDisplayMode_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayPointNum_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayPointNum_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeatureSymbol_void_ISymbol_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeatureSymbol_void_ISymbol_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeatureSymbol_ISymbol_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeatureSymbol_ISymbol_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setName_void_EVString_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setName_void_EVString_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getName_EarthView_World_Core_ev_string_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getName_EarthView_World_Core_ev_string_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeaturePath_void_CLineString_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeaturePath_void_CLineString_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeaturePath_CLineString_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeaturePath_CLineString_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_removeAllPoints_void_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_removeAllPoints_void_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getISpatialReference_ISpatialReference_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getISpatialReference_ISpatialReference_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setISpatialReference_void_ISpatialReference_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setISpatialReference_void_ISpatialReference_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setVisible_void_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setVisible_void_ev_bool_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getVisible_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getVisible_ev_bool_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDescription_void_EVString_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDescription_void_EVString_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDescription_EVString_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDescription_EVString_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_refresh_void_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_refresh_void_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineColorInfo_void_CRgbColor_CRgbColor_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineColorInfo_void_CRgbColor_CRgbColor_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineDistance_void_ev_real64_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineDistance_void_ev_real64_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseHighLineDistance_void_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseHighLineDistance_void_ev_bool_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseHighLineDistance_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseHighLineDistance_ev_bool_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getHighLineDistance_ev_real64_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getHighLineDistance_ev_real64_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setIsHighLine_void_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setIsHighLine_void_ev_bool_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getIsHighLine_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getIsHighLine_ev_bool_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedClearUselessData_void_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedClearUselessData_void_ev_bool_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedClearUselessData_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedClearUselessData_ev_bool_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_clearUselessData_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_clearUselessData_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setMaxUselessDataCount_void_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setMaxUselessDataCount_void_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getMaxUselessDataCount_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getMaxUselessDataCount_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseWallGradualColor_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseWallGradualColor_ev_bool_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseWallGradualColor_void_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseWallGradualColor_void_ev_bool_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getWallGradualColor_CRgbColor_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getWallGradualColor_CRgbColor_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setWallGradualColor_void_CRgbColor_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setWallGradualColor_void_CRgbColor_Callback;
			public:
				CPolylineFeatureProxy(EarthView::World::Core::CNameValuePairList *pList) : CPolylineFeature(pList)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_addPoint_void_CCoordinate_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUniqueID_void_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUniqueID_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isShowAllPoints_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isValidIndex_ev_bool_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedUpdate_void_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedUpdate_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayPointNum_void_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayMode_void_EVDisplayMode_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayMode_EVDisplayMode_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayPointNum_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeatureSymbol_void_ISymbol_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeatureSymbol_ISymbol_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setName_void_EVString_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getName_EarthView_World_Core_ev_string_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeaturePath_void_CLineString_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeaturePath_CLineString_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_removeAllPoints_void_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getISpatialReference_ISpatialReference_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setISpatialReference_void_ISpatialReference_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getVisible_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDescription_void_EVString_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDescription_EVString_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_refresh_void_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineColorInfo_void_CRgbColor_CRgbColor_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineDistance_void_ev_real64_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseHighLineDistance_void_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseHighLineDistance_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getHighLineDistance_ev_real64_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setIsHighLine_void_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getIsHighLine_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedClearUselessData_void_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedClearUselessData_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_clearUselessData_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setMaxUselessDataCount_void_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getMaxUselessDataCount_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseWallGradualColor_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseWallGradualColor_void_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getWallGradualColor_CRgbColor_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setWallGradualColor_void_CRgbColor_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_addPoint_void_CCoordinate(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_addPoint_void_CCoordinate_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_addPoint_void_CCoordinate_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUniqueID_void_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUniqueID_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUniqueID_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUniqueID_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUniqueID_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUniqueID_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isShowAllPoints_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isShowAllPoints_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isShowAllPoints_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isValidIndex_ev_bool_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isValidIndex_ev_bool_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isValidIndex_ev_bool_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedUpdate_void_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedUpdate_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedUpdate_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedUpdate_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedUpdate_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedUpdate_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayPointNum_void_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayPointNum_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayPointNum_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayMode_void_EVDisplayMode(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayMode_void_EVDisplayMode_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayMode_void_EVDisplayMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayMode_EVDisplayMode(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayMode_EVDisplayMode_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayMode_EVDisplayMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayPointNum_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayPointNum_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayPointNum_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeatureSymbol_void_ISymbol(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeatureSymbol_void_ISymbol_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeatureSymbol_void_ISymbol_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeatureSymbol_ISymbol(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeatureSymbol_ISymbol_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeatureSymbol_ISymbol_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setName_void_EVString(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setName_void_EVString_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setName_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getName_EarthView_World_Core_ev_string(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getName_EarthView_World_Core_ev_string_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getName_EarthView_World_Core_ev_string_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeaturePath_void_CLineString(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeaturePath_void_CLineString_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeaturePath_void_CLineString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeaturePath_CLineString(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeaturePath_CLineString_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeaturePath_CLineString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_removeAllPoints_void(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_removeAllPoints_void_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_removeAllPoints_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getISpatialReference_ISpatialReference(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getISpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getISpatialReference_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setISpatialReference_void_ISpatialReference(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setISpatialReference_void_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setISpatialReference_void_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setVisible_void_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getVisible_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDescription_void_EVString(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDescription_void_EVString_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDescription_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDescription_EVString(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_refresh_void(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_refresh_void_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_refresh_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineColorInfo_void_CRgbColor_CRgbColor(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineColorInfo_void_CRgbColor_CRgbColor_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineColorInfo_void_CRgbColor_CRgbColor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineDistance_void_ev_real64(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineDistance_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineDistance_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseHighLineDistance_void_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseHighLineDistance_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseHighLineDistance_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseHighLineDistance_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseHighLineDistance_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseHighLineDistance_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getHighLineDistance_ev_real64(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getHighLineDistance_ev_real64_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getHighLineDistance_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setIsHighLine_void_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setIsHighLine_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setIsHighLine_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getIsHighLine_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getIsHighLine_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getIsHighLine_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedClearUselessData_void_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedClearUselessData_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedClearUselessData_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedClearUselessData_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedClearUselessData_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedClearUselessData_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_clearUselessData_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_clearUselessData_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_clearUselessData_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setMaxUselessDataCount_void_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setMaxUselessDataCount_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setMaxUselessDataCount_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getMaxUselessDataCount_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getMaxUselessDataCount_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getMaxUselessDataCount_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseWallGradualColor_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseWallGradualColor_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseWallGradualColor_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseWallGradualColor_void_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseWallGradualColor_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseWallGradualColor_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getWallGradualColor_CRgbColor(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getWallGradualColor_CRgbColor_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getWallGradualColor_CRgbColor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setWallGradualColor_void_CRgbColor(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setWallGradualColor_void_CRgbColor_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setWallGradualColor_void_CRgbColor_Callback = pCallback;
				}
				virtual void addPoint(_in const EarthView::World::Spatial::Geometry::CCoordinate& point)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_addPoint_void_CCoordinate_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_addPoint_void_CCoordinate_Callback(&point);
					}
					else
						return this->CPolylineFeature::addPoint(point);
				}
				virtual void setUniqueID(_in const ev_int32& uniqueID)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUniqueID_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUniqueID_void_ev_int32_Callback(uniqueID);
					}
					else
						return this->CPolylineFeature::setUniqueID(uniqueID);
				}
				virtual ev_int32 getUniqueID() const
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUniqueID_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUniqueID_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CPolylineFeature::getUniqueID();
				}
				virtual ev_bool isShowAllPoints() const
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isShowAllPoints_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isShowAllPoints_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPolylineFeature::isShowAllPoints();
				}
				virtual ev_bool isValidIndex(_in const ev_int32& index)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isValidIndex_ev_bool_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isValidIndex_ev_bool_ev_int32_Callback(index);
						return returnValue;
					}
					else
						return this->CPolylineFeature::isValidIndex(index);
				}
				virtual void setNeedUpdate(_in const ev_bool& needUpdate)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedUpdate_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedUpdate_void_ev_bool_Callback(needUpdate);
					}
					else
						return this->CPolylineFeature::setNeedUpdate(needUpdate);
				}
				virtual ev_bool getNeedUpdate() const
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedUpdate_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedUpdate_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPolylineFeature::getNeedUpdate();
				}
				virtual void setDisplayPointNum(_in const ev_int32& displayNumber)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayPointNum_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayPointNum_void_ev_int32_Callback(displayNumber);
					}
					else
						return this->CPolylineFeature::setDisplayPointNum(displayNumber);
				}
				virtual void setDisplayMode(_in const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode& displayMode)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayMode_void_EVDisplayMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayMode_void_EVDisplayMode_Callback((int&)displayMode);
					}
					else
						return this->CPolylineFeature::setDisplayMode(displayMode);
				}
				virtual EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode getDisplayMode() const
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayMode_EVDisplayMode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode returnValue = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode)m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayMode_EVDisplayMode_Callback();
						return returnValue;
					}
					else
						return this->CPolylineFeature::getDisplayMode();
				}
				virtual ev_int32 getDisplayPointNum() const
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayPointNum_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayPointNum_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CPolylineFeature::getDisplayPointNum();
				}
				virtual void setPolylineFeatureSymbol(_in EarthView::World::Spatial::Display::ISymbol* polylineFeatureSymbol)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeatureSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeatureSymbol_void_ISymbol_Callback(polylineFeatureSymbol);
					}
					else
						return this->CPolylineFeature::setPolylineFeatureSymbol(polylineFeatureSymbol);
				}
				virtual EarthView::World::Spatial::Display::ISymbol* getPolylineFeatureSymbol() const
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeatureSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeatureSymbol_ISymbol_Callback();
						return returnValue;
					}
					else
						return this->CPolylineFeature::getPolylineFeatureSymbol();
				}
				virtual void setName(_in const EVString& name)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setName_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setName_void_EVString_Callback(name_Char);
					}
					else
						return this->CPolylineFeature::setName(name);
				}
				virtual EarthView::World::Core::ev_string getName()
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getName_EarthView_World_Core_ev_string_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::ev_string returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getName_EarthView_World_Core_ev_string_Callback();
						return returnValue;
					}
					else
						return this->CPolylineFeature::getName();
				}
				virtual void setPolylineFeaturePath(_in EarthView::World::Spatial::Geometry::CLineString* polylineFeaturePath)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeaturePath_void_CLineString_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeaturePath_void_CLineString_Callback(polylineFeaturePath);
					}
					else
						return this->CPolylineFeature::setPolylineFeaturePath(polylineFeaturePath);
				}
				virtual EarthView::World::Spatial::Geometry::CLineString* getPolylineFeaturePath() const
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeaturePath_CLineString_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::CLineString* returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeaturePath_CLineString_Callback();
						return returnValue;
					}
					else
						return this->CPolylineFeature::getPolylineFeaturePath();
				}
				virtual void removeAllPoints()
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_removeAllPoints_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_removeAllPoints_void_Callback();
					}
					else
						return this->CPolylineFeature::removeAllPoints();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getISpatialReference() const
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getISpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getISpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CPolylineFeature::getISpatialReference();
				}
				virtual void setISpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_pSpatialReference)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setISpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setISpatialReference_void_ISpatialReference_Callback(ref_pSpatialReference);
					}
					else
						return this->CPolylineFeature::setISpatialReference(ref_pSpatialReference);
				}
				virtual void setVisible(_in const ev_bool& value)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setVisible_void_ev_bool_Callback(value);
					}
					else
						return this->CPolylineFeature::setVisible(value);
				}
				virtual ev_bool getVisible() const
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPolylineFeature::getVisible();
				}
				virtual void setDescription(_in const EVString& description)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* description_Char = description.makeBuffer();
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDescription_void_EVString_Callback(description_Char);
					}
					else
						return this->CPolylineFeature::setDescription(description);
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CPolylineFeature::getDescription();
				}
				virtual void refresh()
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_refresh_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_refresh_void_Callback();
					}
					else
						return this->CPolylineFeature::refresh();
				}
				virtual void setHighLineColorInfo(_in EarthView::World::Spatial::Display::CRgbColor* staticHighLineColor, _in EarthView::World::Spatial::Display::CRgbColor* dynamicHighLineColor)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineColorInfo_void_CRgbColor_CRgbColor_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineColorInfo_void_CRgbColor_CRgbColor_Callback(staticHighLineColor, dynamicHighLineColor);
					}
					else
						return this->CPolylineFeature::setHighLineColorInfo(staticHighLineColor, dynamicHighLineColor);
				}
				virtual void setHighLineDistance(_in const ev_real64& highLineDistance)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineDistance_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineDistance_void_ev_real64_Callback(highLineDistance);
					}
					else
						return this->CPolylineFeature::setHighLineDistance(highLineDistance);
				}
				virtual void setUseHighLineDistance(_in const ev_bool& value)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseHighLineDistance_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseHighLineDistance_void_ev_bool_Callback(value);
					}
					else
						return this->CPolylineFeature::setUseHighLineDistance(value);
				}
				virtual ev_bool getUseHighLineDistance()
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseHighLineDistance_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseHighLineDistance_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPolylineFeature::getUseHighLineDistance();
				}
				virtual ev_real64 getHighLineDistance()
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getHighLineDistance_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getHighLineDistance_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CPolylineFeature::getHighLineDistance();
				}
				virtual void setIsHighLine(_in const ev_bool& isHighLine)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setIsHighLine_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setIsHighLine_void_ev_bool_Callback(isHighLine);
					}
					else
						return this->CPolylineFeature::setIsHighLine(isHighLine);
				}
				virtual ev_bool getIsHighLine() const
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getIsHighLine_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getIsHighLine_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPolylineFeature::getIsHighLine();
				}
				virtual void setNeedClearUselessData(_in const ev_bool& value)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedClearUselessData_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedClearUselessData_void_ev_bool_Callback(value);
					}
					else
						return this->CPolylineFeature::setNeedClearUselessData(value);
				}
				virtual ev_bool getNeedClearUselessData() const
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedClearUselessData_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedClearUselessData_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPolylineFeature::getNeedClearUselessData();
				}
				virtual ev_int32 clearUselessData()
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_clearUselessData_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_clearUselessData_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CPolylineFeature::clearUselessData();
				}
				virtual void setMaxUselessDataCount(_in const ev_int32& maxUselessDataCount)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setMaxUselessDataCount_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setMaxUselessDataCount_void_ev_int32_Callback(maxUselessDataCount);
					}
					else
						return this->CPolylineFeature::setMaxUselessDataCount(maxUselessDataCount);
				}
				virtual ev_int32 getMaxUselessDataCount()
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getMaxUselessDataCount_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getMaxUselessDataCount_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CPolylineFeature::getMaxUselessDataCount();
				}
				virtual ev_bool getUseWallGradualColor()
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseWallGradualColor_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseWallGradualColor_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPolylineFeature::getUseWallGradualColor();
				}
				virtual void setUseWallGradualColor(_in const ev_bool& useWallGradualColor)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseWallGradualColor_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseWallGradualColor_void_ev_bool_Callback(useWallGradualColor);
					}
					else
						return this->CPolylineFeature::setUseWallGradualColor(useWallGradualColor);
				}
				virtual EarthView::World::Spatial::Display::CRgbColor* getWallGradualColor()
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getWallGradualColor_CRgbColor_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Display::CRgbColor* returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getWallGradualColor_CRgbColor_Callback();
						return returnValue;
					}
					else
						return this->CPolylineFeature::getWallGradualColor();
				}
				virtual void setWallGradualColor(_in EarthView::World::Spatial::Display::CRgbColor* pWallGradualColor)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setWallGradualColor_void_CRgbColor_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setWallGradualColor_void_CRgbColor_Callback(pWallGradualColor);
					}
					else
						return this->CPolylineFeature::setWallGradualColor(pWallGradualColor);
				}
			};
			REGISTER_FACTORY_CLASS(CPolylineFeatureProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_addPoint_void_CCoordinate(void *pObjectXXXX, _in const void* point )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::addPoint(*(EarthView::World::Spatial::Geometry::CCoordinate*)point);
				else
					ptrNativeObject->addPoint(*(EarthView::World::Spatial::Geometry::CCoordinate*)point);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_addPoint_void_CCoordinate( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_addPoint_void_CCoordinate_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_addPoint_void_CCoordinate(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_addPoint_void_CCoordinate_NoVirtual(void *pObjectXXXX, _in const void* point )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::addPoint(*(EarthView::World::Spatial::Geometry::CCoordinate*)point);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUniqueID_void_ev_int32(void *pObjectXXXX, _in const ev_int32& uniqueID )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setUniqueID(uniqueID);
				else
					ptrNativeObject->setUniqueID(uniqueID);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUniqueID_void_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUniqueID_void_ev_int32_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUniqueID_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUniqueID_void_ev_int32_NoVirtual(void *pObjectXXXX, _in const ev_int32& uniqueID )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setUniqueID(uniqueID);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUniqueID_ev_int32(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getUniqueID();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getUniqueID();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUniqueID_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUniqueID_ev_int32_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUniqueID_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUniqueID_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getUniqueID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isShowAllPoints_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::isShowAllPoints();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isShowAllPoints();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isShowAllPoints_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isShowAllPoints_ev_bool_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isShowAllPoints_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isShowAllPoints_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::isShowAllPoints();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isValidIndex_ev_bool_ev_int32(void *pObjectXXXX, _in const ev_int32& index )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::isValidIndex(index);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isValidIndex(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isValidIndex_ev_bool_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isValidIndex_ev_bool_ev_int32_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isValidIndex_ev_bool_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_isValidIndex_ev_bool_ev_int32_NoVirtual(void *pObjectXXXX, _in const ev_int32& index )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::isValidIndex(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedUpdate_void_ev_bool(void *pObjectXXXX, _in const ev_bool& needUpdate )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setNeedUpdate(needUpdate);
				else
					ptrNativeObject->setNeedUpdate(needUpdate);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedUpdate_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedUpdate_void_ev_bool_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedUpdate_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedUpdate_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& needUpdate )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setNeedUpdate(needUpdate);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedUpdate_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getNeedUpdate();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getNeedUpdate();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedUpdate_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedUpdate_ev_bool_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedUpdate_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedUpdate_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getNeedUpdate();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayPointNum_void_ev_int32(void *pObjectXXXX, _in const ev_int32& displayNumber )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setDisplayPointNum(displayNumber);
				else
					ptrNativeObject->setDisplayPointNum(displayNumber);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayPointNum_void_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayPointNum_void_ev_int32_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayPointNum_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayPointNum_void_ev_int32_NoVirtual(void *pObjectXXXX, _in const ev_int32& displayNumber )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setDisplayPointNum(displayNumber);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayMode_void_EVDisplayMode(void *pObjectXXXX, _in const int& displayMode )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setDisplayMode((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode&)displayMode);
				else
					ptrNativeObject->setDisplayMode((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode&)displayMode);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayMode_void_EVDisplayMode( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayMode_void_EVDisplayMode_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayMode_void_EVDisplayMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDisplayMode_void_EVDisplayMode_NoVirtual(void *pObjectXXXX, _in const int& displayMode )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setDisplayMode((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode&)displayMode);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayMode_EVDisplayMode(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
				{
					EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getDisplayMode();
					return (int)objXXXX;
				}
				else
				{
					EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode objXXXX = ptrNativeObject->getDisplayMode();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayMode_EVDisplayMode( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayMode_EVDisplayMode_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayMode_EVDisplayMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayMode_EVDisplayMode_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getDisplayMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayPointNum_ev_int32(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getDisplayPointNum();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getDisplayPointNum();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayPointNum_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayPointNum_ev_int32_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayPointNum_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDisplayPointNum_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getDisplayPointNum();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeatureSymbol_void_ISymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* polylineFeatureSymbol )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setPolylineFeatureSymbol(polylineFeatureSymbol);
				else
					ptrNativeObject->setPolylineFeatureSymbol(polylineFeatureSymbol);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeatureSymbol_void_ISymbol( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeatureSymbol_void_ISymbol_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeatureSymbol_void_ISymbol(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeatureSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* polylineFeatureSymbol )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setPolylineFeatureSymbol(polylineFeatureSymbol);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeatureSymbol_ISymbol(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getPolylineFeatureSymbol();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getPolylineFeatureSymbol();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeatureSymbol_ISymbol( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeatureSymbol_ISymbol_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeatureSymbol_ISymbol(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeatureSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getPolylineFeatureSymbol();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setName(name1);
				else
					ptrNativeObject->setName(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setName_void_EVString( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setName_void_EVString_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setName_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setName(name1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getName_EarthView_World_Core_ev_string(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::ev_string objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EarthView::World::Core::ev_string objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getName_EarthView_World_Core_ev_string( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getName_EarthView_World_Core_ev_string_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getName_EarthView_World_Core_ev_string(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getName_EarthView_World_Core_ev_string_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				EarthView::World::Core::ev_string objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeaturePath_void_CLineString(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::CLineString* polylineFeaturePath )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setPolylineFeaturePath(polylineFeaturePath);
				else
					ptrNativeObject->setPolylineFeaturePath(polylineFeaturePath);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeaturePath_void_CLineString( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeaturePath_void_CLineString_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeaturePath_void_CLineString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setPolylineFeaturePath_void_CLineString_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::CLineString* polylineFeaturePath )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setPolylineFeaturePath(polylineFeaturePath);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CLineString*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeaturePath_CLineString(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Geometry::CLineString* objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getPolylineFeaturePath();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Geometry::CLineString* objXXXX = ptrNativeObject->getPolylineFeaturePath();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeaturePath_CLineString( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeaturePath_CLineString_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeaturePath_CLineString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CLineString*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getPolylineFeaturePath_CLineString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				EarthView::World::Spatial::Geometry::CLineString* objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getPolylineFeaturePath();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_removeAllPoints_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::removeAllPoints();
				else
					ptrNativeObject->removeAllPoints();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_removeAllPoints_void( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_removeAllPoints_void_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_removeAllPoints_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_removeAllPoints_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::removeAllPoints();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getISpatialReference_ISpatialReference(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getISpatialReference();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getISpatialReference();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getISpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getISpatialReference_ISpatialReference_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getISpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getISpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getISpatialReference();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setISpatialReference_void_ISpatialReference(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* ref_pSpatialReference )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setISpatialReference(ref_pSpatialReference);
				else
					ptrNativeObject->setISpatialReference(ref_pSpatialReference);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setISpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setISpatialReference_void_ISpatialReference_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setISpatialReference_void_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setISpatialReference_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* ref_pSpatialReference )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setISpatialReference(ref_pSpatialReference);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setVisible_void_ev_bool(void *pObjectXXXX, _in const ev_bool& value )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setVisible(value);
				else
					ptrNativeObject->setVisible(value);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setVisible_void_ev_bool_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& value )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setVisible(value);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getVisible_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getVisible();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getVisible();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getVisible_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getVisible_ev_bool_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getVisible_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDescription_void_EVString(void *pObjectXXXX, _in const char* description )
			{
				EarthView::World::Core::ev_string description1 = description;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setDescription(description1);
				else
					ptrNativeObject->setDescription(description1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDescription_void_EVString( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDescription_void_EVString_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDescription_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setDescription_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* description )
			{
				EarthView::World::Core::ev_string description1 = description;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setDescription(description1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDescription_EVString(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getDescription();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getDescription();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDescription_EVString( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDescription_EVString_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getDescription_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getDescription();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_refresh_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::refresh();
				else
					ptrNativeObject->refresh();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_refresh_void( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_refresh_void_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_refresh_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_refresh_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::refresh();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineColorInfo_void_CRgbColor_CRgbColor(void *pObjectXXXX, _in EarthView::World::Spatial::Display::CRgbColor* staticHighLineColor, _in EarthView::World::Spatial::Display::CRgbColor* dynamicHighLineColor )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setHighLineColorInfo(staticHighLineColor, dynamicHighLineColor);
				else
					ptrNativeObject->setHighLineColorInfo(staticHighLineColor, dynamicHighLineColor);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineColorInfo_void_CRgbColor_CRgbColor( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineColorInfo_void_CRgbColor_CRgbColor_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineColorInfo_void_CRgbColor_CRgbColor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineColorInfo_void_CRgbColor_CRgbColor_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::CRgbColor* staticHighLineColor, _in EarthView::World::Spatial::Display::CRgbColor* dynamicHighLineColor )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setHighLineColorInfo(staticHighLineColor, dynamicHighLineColor);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineDistance_void_ev_real64(void *pObjectXXXX, _in const ev_real64& highLineDistance )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setHighLineDistance(highLineDistance);
				else
					ptrNativeObject->setHighLineDistance(highLineDistance);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineDistance_void_ev_real64( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineDistance_void_ev_real64_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineDistance_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setHighLineDistance_void_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_real64& highLineDistance )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setHighLineDistance(highLineDistance);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseHighLineDistance_void_ev_bool(void *pObjectXXXX, _in const ev_bool& value )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setUseHighLineDistance(value);
				else
					ptrNativeObject->setUseHighLineDistance(value);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseHighLineDistance_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseHighLineDistance_void_ev_bool_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseHighLineDistance_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseHighLineDistance_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& value )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setUseHighLineDistance(value);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseHighLineDistance_ev_bool(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getUseHighLineDistance();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getUseHighLineDistance();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseHighLineDistance_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseHighLineDistance_ev_bool_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseHighLineDistance_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseHighLineDistance_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getUseHighLineDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getHighLineDistance_ev_real64(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
				{
					ev_real64 objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getHighLineDistance();
					return objXXXX;
				}
				else
				{
					ev_real64 objXXXX = ptrNativeObject->getHighLineDistance();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getHighLineDistance_ev_real64( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getHighLineDistance_ev_real64_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getHighLineDistance_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getHighLineDistance_ev_real64_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getHighLineDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setIsHighLine_void_ev_bool(void *pObjectXXXX, _in const ev_bool& isHighLine )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setIsHighLine(isHighLine);
				else
					ptrNativeObject->setIsHighLine(isHighLine);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setIsHighLine_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setIsHighLine_void_ev_bool_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setIsHighLine_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setIsHighLine_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& isHighLine )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setIsHighLine(isHighLine);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getIsHighLine_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getIsHighLine();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getIsHighLine();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getIsHighLine_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getIsHighLine_ev_bool_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getIsHighLine_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getIsHighLine_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getIsHighLine();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedClearUselessData_void_ev_bool(void *pObjectXXXX, _in const ev_bool& value )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setNeedClearUselessData(value);
				else
					ptrNativeObject->setNeedClearUselessData(value);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedClearUselessData_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedClearUselessData_void_ev_bool_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedClearUselessData_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setNeedClearUselessData_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& value )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setNeedClearUselessData(value);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedClearUselessData_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getNeedClearUselessData();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getNeedClearUselessData();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedClearUselessData_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedClearUselessData_ev_bool_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedClearUselessData_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getNeedClearUselessData_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getNeedClearUselessData();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_clearUselessData_ev_int32(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::clearUselessData();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->clearUselessData();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_clearUselessData_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_clearUselessData_ev_int32_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_clearUselessData_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_clearUselessData_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::clearUselessData();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setMaxUselessDataCount_void_ev_int32(void *pObjectXXXX, _in const ev_int32& maxUselessDataCount )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setMaxUselessDataCount(maxUselessDataCount);
				else
					ptrNativeObject->setMaxUselessDataCount(maxUselessDataCount);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setMaxUselessDataCount_void_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setMaxUselessDataCount_void_ev_int32_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setMaxUselessDataCount_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setMaxUselessDataCount_void_ev_int32_NoVirtual(void *pObjectXXXX, _in const ev_int32& maxUselessDataCount )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setMaxUselessDataCount(maxUselessDataCount);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getMaxUselessDataCount_ev_int32(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getMaxUselessDataCount();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getMaxUselessDataCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getMaxUselessDataCount_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getMaxUselessDataCount_ev_int32_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getMaxUselessDataCount_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getMaxUselessDataCount_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getMaxUselessDataCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseWallGradualColor_ev_bool(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getUseWallGradualColor();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getUseWallGradualColor();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseWallGradualColor_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseWallGradualColor_ev_bool_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseWallGradualColor_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getUseWallGradualColor_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getUseWallGradualColor();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseWallGradualColor_void_ev_bool(void *pObjectXXXX, _in const ev_bool& useWallGradualColor )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setUseWallGradualColor(useWallGradualColor);
				else
					ptrNativeObject->setUseWallGradualColor(useWallGradualColor);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseWallGradualColor_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseWallGradualColor_void_ev_bool_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseWallGradualColor_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setUseWallGradualColor_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& useWallGradualColor )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setUseWallGradualColor(useWallGradualColor);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CRgbColor*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getWallGradualColor_CRgbColor(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Display::CRgbColor* objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getWallGradualColor();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Display::CRgbColor* objXXXX = ptrNativeObject->getWallGradualColor();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getWallGradualColor_CRgbColor( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getWallGradualColor_CRgbColor_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getWallGradualColor_CRgbColor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CRgbColor*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_getWallGradualColor_CRgbColor_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				EarthView::World::Spatial::Display::CRgbColor* objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getWallGradualColor();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setWallGradualColor_void_CRgbColor(void *pObjectXXXX, _in EarthView::World::Spatial::Display::CRgbColor* pWallGradualColor )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setWallGradualColor(pWallGradualColor);
				else
					ptrNativeObject->setWallGradualColor(pWallGradualColor);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setWallGradualColor_void_CRgbColor( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setWallGradualColor_void_CRgbColor_Callback* pCallback )
			{
				CPolylineFeatureProxy* ptr = dynamic_cast<CPolylineFeatureProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setWallGradualColor_void_CRgbColor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeature_setWallGradualColor_void_CRgbColor_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::CRgbColor* pWallGradualColor )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setWallGradualColor(pWallGradualColor);
			}
		}
	}
}
