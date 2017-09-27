

#if !defined (_DATA_ANALYST_H_WW_)
#define _DATA_ANALYST_H_WW_

//////导出宏定义
#ifdef  RECTIFY_ETEXPORTS
#define RECTIFY_DLL  EV_DLL_EXPORT
#else
#define RECTIFY_DLL EV_DLL_IMPORT
#endif


#include "core/global.h"
#include "core/multibytestring.h"
#include "core/memoryallocatedobject.h"
/////#include "core/graphic_exception.h"
typedef ev_void SpatialRefH;
typedef ev_void RasterDatasetH;
typedef ev_void TransformH;
typedef ev_void ProgressInfoH;

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace GeoCorretion
			{
///<summary>
///纠正选用的数学模型
///<summary>
enum RectifyModelType
{
	RM_Polynomial_1 = 0, ///一次多项式 至少3个点对
	RM_Polynomial_2 = 1, ///二次多项式模型 至少6个点对
	RM_Polynomial_3 = 2, ///三次多项式模型 至少10个点对
	RM_Scale        = 3, ///缩放模型,至少2个点 一次多项式的特殊情形
	RM_Translation  = 4, ///平移模型，至少1个点 0次多项式
	RM_Unknown      = 5  ///未知模型
};
///<summary>
///重采样方法
///<summary>
enum ResampleType
{
	RS_Nearest  = 0, ///最邻近重采样
	RS_Bilenear = 1, ///双线性插值
	RS_Cubic    = 2, ///立方卷积
	RS_UnKnown  = 3  ///未知采样方式
};

}}}} ///name space
#endif//_DATA_ANALYST_H_
