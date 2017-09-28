#ifndef EARTHVIEW_WORLD_RASTERCUT_H
#define EARTHVIEW_WORLD_RASTERCUT_H


#include "rasteranalysis/rasteranalysisconfig.h"
#include "rasterdataset/rasterdataset.h"
#include "spatialinterface/ifeatureclass.h"
#include "spatialobject/geometry/polygon.h"
#include "spatialdatabase/queryfilter.h"
#include "spatialinterface/ifeatureiterator.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Analyst
			{
				class EV_RASTERANALYSIS_DLL CImageCut: public EarthView::World::Core::CAllocatedObject
				{
					
				public:
					CImageCut();
					~CImageCut();
                ev_private:
					CImageCut(EarthView::World::Core::CNameValuePairList* pList);
				public:
					///<summary>
					///图像aoi裁切（由路径）
					///<summary>
					/// <param = "pszSrcFile">输入文件路径</param>
					///<param = "pszDstFile">输出文件路径</param>
					///<param = "pszAOIWKT">裁切AOI，使用WKT字符串格式，坐标是图像行列号
					///如const char* pszAOIWKT = "POLYGON((400 500,400 1500,1400 1500,400 500))";</param>
					///<returns>返回值</returns>
					///<summary>
					ev_int32 ImageCutByAOI(const char* pszSrcFile, const char* pszDstFile, const char* pszAOIWKT);

					///<summary>
					///图像aoi裁切（由数据集）
					///<summary>
					/// <param = "Dataset">待裁切的数据集</param>
					///<param = "pszDstFile">输出文件路径</param>
					///<param = "feature">要素类</param>
					///<returns>返回值</returns>
					///<summary>
//					ev_int32 ImageCutByAOIByFeature(EarthView::World::Spatial2D::Raster::CRasterDataSet* Dataset, const char* pszDstFile,
//EarthView::World::Spatial::GeoDataset::IFeatureClass* featureclass);

					///<summary>
					///图像aoi裁切（由数据集）
					///<summary>
					/// <param = "Dataset">待裁切的数据集</param>
					///<param = "pszDstFile">输出文件路径</param>
					///<param = "feature">多边形类</param>
					///<returns>返回值</returns>
					///<summary>
					ev_int32 ImageCutByAOIByPolygon(EarthView::World::Spatial2D::Raster::CRasterDataSet* Dataset, const char* pszDstFile, 
EarthView::World::Spatial::Geometry::CPolygon *polygon);

				
				};
			}
		}
	}
}

#endif
