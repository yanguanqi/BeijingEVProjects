#ifndef EARTHVIEW_WORLD_RASTERDATAANALYSIS_H
#define EARTHVIEW_WORLD_RASTERDATAANALYSIS_H

#include "rasteranalysis/rasteranalysisconfig.h"
#include "spatialinterface/irasterdataset.h"
#include "spatialinterface/progressinfo.h"
#include "rasterdataset/rasterdataset.h"
#include "gdal-1.6.3/gdal_priv.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Analyst
			{
				typedef float (*CGeneric3x3ProcessingAlg)(float *pafWindow, float fDstNoDataValue, void *pData);
				class EV_RASTERANALYSIS_DLL CRasterDataAnalysis: public EarthView::World::Core::CAllocatedObject
				{
				public:
					CRasterDataAnalysis();
					~CRasterDataAnalysis();
                ev_private:
					CRasterDataAnalysis(EarthView::World::Core::CNameValuePairList* pList);
				public:
					typedef float (*CGeneric3x3ProcessingAlg)(float *pafWindow, float fDstNoDataValue, void *pData);
					//坡度计算
					ev_int32 CreateSlope(const char *pszSrcFile, const char *pszDstFile, double scale,int slopeFormat,EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType, const char *pszFormat,int NoDataFlag);
					ev_int32 CreateSlope(EarthView::World::Spatial2D::Raster::CRasterDataSet*psrcData,const char*pszDstFile,double scale,int slopeFormat,EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType, const char *pszFormat,int NoDataFlag);
					//坡向计算
					ev_int32 CreateAspect(const char *pszSrcFile, const char *pszDstFile,EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType, const char *pszFormat,int NoDataFlag ,int bAngleAsAzimuth);
					ev_int32 CreateAspect(EarthView::World::Spatial2D::Raster::CRasterDataSet*psrcData, const char *pszDstFile,EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType, const char *pszFormat,int NoDataFlag ,int bAngleAsAzimuth);
					///<summary>
					///栅格矢量化
					///<summary>
					///<param = "pszSrcFile">输入文件路径</param>
					///<param = "pszDstFile">输出文件路径</param>
					///<param = "iBandIndex">指定输出栅格文件要处理的波段，默认为第一波段</param>
					///<param = "bIs8Con">连通方式，八连通还是四连通，true为8联通（默认），false为四连通</param>
					///<param = "pszFormat">输出文件格式，默认为ESRI Shapefile</param>
					///<returns>返回值</returns>
					///<summary>
					ev_bool ImagePolygonize(const char* pszSrcFile, const char* pszDstFile, int iBandIndex = 1, bool bIs8Con = true,const char* pszFormat = "ESRI Shapefile",EarthView::World::Spatial2D::Raster::CProgressInfo *pProgressArg= NULL);
				    //矢量栅格化
					ev_bool VectorRasterize(const char*pszGeomrtry,const char*pszDstFile,int nBandcount,int rasterwidth,int rasterhigth);
				private:	
					void CGeneric3x3Processing(GDALRasterBandH hSrcBand,GDALRasterBandH hDstBand, CGeneric3x3ProcessingAlg pfnAlg, void *pData);
					void CGeneric3x3Processing1(GDALRasterBandH hSrcBand,GDALRasterBandH hDstBand, CGeneric3x3ProcessingAlg pfnAlg, void *pData,GDALDataType eDT);
				};
			}
		}
	}
}

#endif