/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasteranalysis/rasterdataanalysis.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Analyst
			{
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Analyst_CRasterDataAnalysis_CreateSlope_ev_int32_char_char_double_int_EVRasterDataType_char_int(void *pObjectXXXX, _in const char* pszSrcFile, _in const char* pszDstFile, _in double scale, _in int slopeFormat, _in int eDataType, _in const char* pszFormat, _in int NoDataFlag )
				{
					EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->CreateSlope(pszSrcFile, pszDstFile, scale, slopeFormat, (EarthView::World::Spatial::GeoDataset::EVRasterDataType)eDataType, pszFormat, NoDataFlag);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Analyst_CRasterDataAnalysis_CreateSlope_ev_int32_CRasterDataSet_char_double_int_EVRasterDataType_char_int(void *pObjectXXXX, _in EarthView::World::Spatial2D::Raster::CRasterDataSet* psrcData, _in const char* pszDstFile, _in double scale, _in int slopeFormat, _in int eDataType, _in const char* pszFormat, _in int NoDataFlag )
				{
					EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->CreateSlope(psrcData, pszDstFile, scale, slopeFormat, (EarthView::World::Spatial::GeoDataset::EVRasterDataType)eDataType, pszFormat, NoDataFlag);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Analyst_CRasterDataAnalysis_CreateAspect_ev_int32_char_char_EVRasterDataType_char_int_int(void *pObjectXXXX, _in const char* pszSrcFile, _in const char* pszDstFile, _in int eDataType, _in const char* pszFormat, _in int NoDataFlag, _in int bAngleAsAzimuth )
				{
					EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->CreateAspect(pszSrcFile, pszDstFile, (EarthView::World::Spatial::GeoDataset::EVRasterDataType)eDataType, pszFormat, NoDataFlag, bAngleAsAzimuth);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Analyst_CRasterDataAnalysis_CreateAspect_ev_int32_CRasterDataSet_char_EVRasterDataType_char_int_int(void *pObjectXXXX, _in EarthView::World::Spatial2D::Raster::CRasterDataSet* psrcData, _in const char* pszDstFile, _in int eDataType, _in const char* pszFormat, _in int NoDataFlag, _in int bAngleAsAzimuth )
				{
					EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->CreateAspect(psrcData, pszDstFile, (EarthView::World::Spatial::GeoDataset::EVRasterDataType)eDataType, pszFormat, NoDataFlag, bAngleAsAzimuth);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Analyst_CRasterDataAnalysis_ImagePolygonize_ev_bool_char_char_int_bool_char_CProgressInfo(void *pObjectXXXX, _in const char* pszSrcFile, _in const char* pszDstFile, _in int iBandIndex, _in bool bIs8Con, _in const char* pszFormat, _in EarthView::World::Spatial2D::Raster::CProgressInfo* pProgressArg )
				{
					EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->ImagePolygonize(pszSrcFile, pszDstFile, iBandIndex, bIs8Con, pszFormat, pProgressArg);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Analyst_CRasterDataAnalysis_VectorRasterize_ev_bool_char_char_int_int_int(void *pObjectXXXX, _in const char* pszGeomrtry, _in const char* pszDstFile, _in int nBandcount, _in int rasterwidth, _in int rasterhigth )
				{
					EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->VectorRasterize(pszGeomrtry, pszDstFile, nBandcount, rasterwidth, rasterhigth);
					return objXXXX;
				}
			}
		}
	}
}
