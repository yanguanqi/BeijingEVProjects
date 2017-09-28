#ifndef EARTHVIEW_WORLD_RASTERTILEMOSAIC_H
#define EARTHVIEW_WORLD_RASTERTILEMOSAIC_H


#include "rasteranalysis/rasteranalysisconfig.h"
#include "tileutility/itiledataset.h"
#include <list>

#include "spatialinterface/ispatialreference.h"
#include "spatialinterface/irasterdataset.h"
#include "rasterdataset/rasterdataset.h"
#include "rasterdataset/rasterdatasetenume.h"


using namespace std;
/*!成功执行*/
const int RE_SUCCESS		=	0;
/*!文件不存在*/
const int RE_FILENOTEXIST	=	1;
/*!文件格式不被支持*/
const int RE_FILENOTSUPPORT	=	2;
/*!图像数据类型不正确*/
const int RE_FILETYPEERROR	=	3;
/*!创建图像失败*/
const int RE_CREATEFAILED	=	4;
/*!输入参数错误*/
const int RE_PARAMERROR		=	5;
/*!其他错误*/
const int RE_FAILED			=	6;
/*!图像不存在公共区域*/
const int RE_NOSAMEEXTENT	=	7;
/*!用户取消操作*/
const int RE_USERCANCEL		=	8;
/*!文件已经被使用*/
const int RE_FILEISUESED	=	9;
/*!不支持的像素深度*/
const int RE_DEPTHNOTSUPPORT	=	10;
/*!波段数量不符合要求*/
const int RE_BANDCOUNTERROR		=	11;
/*!文件不存在投影*/
const int RE_NOPROJECTION		=	12;
/*!投影不一致*/
const int RE_PROJECTIONDIFF		=	13;
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Analyst
			{
				class EV_RASTERANALYSIS_DLL CRasterMosaic: public EarthView::World::Core::CAllocatedObject
				{

				public:
					CRasterMosaic();
					 ~CRasterMosaic();
                ev_private:
					 CRasterMosaic(EarthView::World::Core::CNameValuePairList* pList);
					 ///<summary>
					 /// 图像镶嵌处理
					 /// 注意事项，调用此函数之前，请先对影像进行几何纠正到同一投影坐标系统下，分辨率可以不同，
					 /// 但是投影信息以及输入的各个数据的波段个数必须一致，否则会出现不能正常完成镶嵌操作。
					 /// 图像的分辨率会按照输入影像的第一个影像获取，包括投影等信息
					 /// <param = "papszSrcFiles">输入文件以及镶嵌线路径数组，默认第一个为参考影像，第一个图像在最下层，后面的依次向上</param>
					 /// <param = "pszDstFilename">输出文件路径</param>
					 /// <param = "eResampleMethod">重采样方式
					 /// enum EVResampleMethod
					 /// {
					 /// EVR_NearestNeighbour    =0, ///最邻近采样
					 /// EVR_Bilinear            =1, ///双线性采样
					 /// EVR_Cubic               =2, ///立方卷积
					 /// EVR_CubicSpline         =3, ///立方B-Spline函数卷积
					 /// EVR_Lanczos             =4, ///Lanczos函数卷积
					 /// EVR_GPUNearestNeighbour =5, ///最邻近采样 在GPU上进行  
					 /// EVR_GPUCubic            =6  ///立方卷积 在GPU上进行
					 /// }; </param>
					 /// <param = "dResX">输出影像X分辨率，默认为0，表示按照第一个影像为准</param>
					 /// <param = "dResY">输出影像Y分辨率，默认为0，表示按照第一个影像为准</param>
					 /// <returns> 返回值</returns>
					 ///<summary>

					 
					 ev_int32 mosaic(char** papszSrcFiles, const char* pszDstFilename, 
						 ev_int32 eResampleMethod, 
						 double dResX, double dResY);

					  ///<summary>
					 /// 图像镶嵌处理
					 /// 注意事项，调用此函数之前，请先对影像进行几何纠正到同一投影坐标系统下，分辨率可以不同，
					 /// 但是投影信息以及输入的各个数据的波段个数必须一致，否则会出现不能正常完成镶嵌操作。
					 /// 图像的分辨率会按照输入影像的第一个影像获取，包括投影等信息
					 /// <param = "dataset1">待镶嵌的第一个数据集</param>
					 /// <param = "dataset2">待镶嵌的第二个数据集</param>
					 /// <param = "pszDstFilename">输出文件路径</param>
					 /// <param = "eResampleMethod">重采样方式
					 /// enum EVResampleMethod
					 /// {
					 /// EVR_NearestNeighbour    =0, ///最邻近采样
					 /// EVR_Bilinear            =1, ///双线性采样
					 /// EVR_Cubic               =2, ///立方卷积
					 /// EVR_CubicSpline         =3, ///立方B-Spline函数卷积
					 /// EVR_Lanczos             =4, ///Lanczos函数卷积
					 /// EVR_GPUNearestNeighbour =5, ///最邻近采样 在GPU上进行  
					 /// EVR_GPUCubic            =6  ///立方卷积 在GPU上进行
					 /// };</param>
					 /// <param = "dResX">输出影像X分辨率，默认为0，表示按照第一个影像为准</param>
					 /// <param = "dResY">输出影像Y分辨率，默认为0，表示按照第一个影像为准</param>
					 /// <returns> 返回值</returns>
					 ///<summary>
				 ev_int32 mosaicByData(EarthView::World::Spatial2D::Raster::CRasterDataSet* Dataset1,EarthView::World::Spatial2D::Raster::CRasterDataSet* Dataset2 , const char* pszDstFilename,
					 ev_int32 eResampleMethod,double dResX, double dResY);

				};
			}
		}
	}
}

#endif
