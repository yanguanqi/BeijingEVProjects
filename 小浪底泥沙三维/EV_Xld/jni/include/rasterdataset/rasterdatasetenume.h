#ifndef _RASTERDATASET_ENUME_H
#define _RASTERDATASET_ENUME_H
///////////导出宏定义
#ifdef RASTERDATASETEXPORTS
#define EV_RASTER_DLL EV_DLL_EXPORT
#else
#define EV_RASTER_DLL EV_DLL_IMPORT
#endif////////RASTERDATASETEXPORTS

#include "core/global.h"
#include "core/multibytestring.h"
#include "core/memoryallocatedobject.h"
#include "core/graphic_exception.h"


namespace EarthView
{
	namespace World
	{    
		namespace Spatial2D
		{ 
			namespace Raster
			{
				/************************************************************************/
				/*     EVAccess                                                        */
				/************************************************************************/
				///<summary>
				///EVAccess
				///枚举操作权限
				///</summary>
				enum EVAccess
				{  
					EV_READONLY   = 0,///只读方式
					EV_UPDATE     = 1 ///更改方式
				};

				/************************************************************************/
				/*     EVDataSetFormat                                                */
				/************************************************************************/
				///<summary>
				///栅格数据集的类型
				///</summary>
				enum EVDataSetFormat
				{  
					RT_JPG      = 0, ///JPG栅格数据集
					RT_PNG      = 1, ///PNG栅格数据集
					RT_BMP      = 2, ///BMP栅格数据集
					RT_TIF      = 3, ///tif栅格数据集
					RT_IMG      = 4, ///img格式数据集
					RT_MEM      = 5  ///mem内存数据集
				};
				/************************************************************************/
				/*     EVResampleMethod                                                */
				/************************************************************************/
				///<summary>
				///采样方法
				///</summary>
				enum EVResampleMethod
				{

					EVR_NearestNeighbour    =0, ///最邻近采样
					EVR_Bilinear            =1, ///双线性采样
					EVR_Cubic               =2, ///立方卷积
					EVR_CubicSpline         =3, ///立方B-Spline函数卷积
					EVR_Lanczos             =4, ///Lanczos函数卷积
					EVR_GPUNearestNeighbour =5, ///最邻近采样 在GPU上进行  
					EVR_GPUCubic            =6  ///立方卷积 在GPU上进行
				}; 
			}//Raster
		}
	}
}//EarthView
#endif//_RASTERDATASET_ENUME_H
