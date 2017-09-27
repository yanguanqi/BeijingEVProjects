#ifndef _REPRJECT_IMAGE_H_
#define _REPRJECT_IMAGE_H_
#include "rasterdatasetenume.h"
#include "spatialinterface/progressinfo.h"

namespace EarthView 
{
	namespace World
	{
		namespace Spatial
		{ 
			namespace Utility
			{
				class CCoordinateTransformation;
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{  
		namespace Spatial2D
		{ 
		namespace Raster
		{ 
		  
		class CRasterDataSet;
        class CAffineTransform;
		///////////////////////////////////////////////////////////
		//CReprojectAlg
		//////////////////////////////////////////////////////////
		///<summary>
		///重投影变换类
		///<summary>
	    class EV_RASTER_DLL CReprojectAlg: public EarthView::World::Core::CAllocatedObject
		{
			ev_private:
			/// <summary>
			/// 键值对构造函数
			/// </summary>
			///<returns></returns>
			CReprojectAlg(_in EarthView::World::Core::CNameValuePairList* pList)
			{
			}
		public:
			///<summary>
		    ///构造函数
		    ///</summary>
			CReprojectAlg(){}
            ///<summary>
		    ///析构函数
		    ///</summary>
			~CReprojectAlg(){}
			   ///<summary>
			   ///重投影影像，一幅影像转换到另一
			   ///投影下的一幅影像
			   ///</summary>
			   /// <param name="pSrcDS">源数据集</param>
			   /// <param name="pszSrcWKT">源数据集坐标（WKT）描述，为NULL
			   ///将从pSrcDS读出相应信息</param>
			   /// <param name="pDstDS">目标数据集</param>
			   /// <param name="pszDstWKT">目标数据集坐标（WKT）描述,为NULL
			   ///将从pSrcDS读出相应信息</param>
			   /// <param name="eResampleMthd">采样方法</param>
			   /// <param name="dfMaxErro">最大误差单位是pixel，用于创建近似变换</param>
			   /// <param name="pfnProgress">进度解析函数 ,可为NULL</param>
			   /// <param name="pProgressArg">进度反馈对象，可为NULL</param>
			   ///<returns>1,表示投影成功，0表示变换失败</returns>
			    
				static ev_bool  reprojectImage(_in const EarthView::World::Spatial2D::Raster::CRasterDataSet* pSrcDS, 
										 _in    const ev_char *pszSrcWKT, 
										 _inout EarthView::World::Spatial2D::Raster::CRasterDataSet* pDstDS, 
										 _in    const ev_char *pszDstWKT,
										 _in    EarthView::World::Spatial2D::Raster::EVResampleMethod eResampleMthd,
										 _in    ev_real64 dfMaxErro,
										/* _in    EVgsProgressFunc pfnProgress,*/ 
										 _inout EarthView::World::Spatial2D::Raster::CProgressInfo *pProgressArg
										 );
				///<summary>
				///重投影影像，一幅无投影影像转换到
				///一幅有投影的影像上
				///</summary>
				/// <param name="pSrcDS">源数据集</param>
				///将从pSrcDS读出相应信息</param>
				/// <param name="pszDstFilename">指定创建后目标数据集的文件夹</param>
				/// <param name="pszDstWKT">目标数据集坐标（WKT）描述</param>
				/// <param name="eDatasetFormat">要创建的目标数据集类型</param>
				/// <param name="pfnProgress">进度解析函数 ,可为NULL</param>
				/// <param name="pProgressArg">进度反馈对象，可为NULL</param>
				///<returns>1,表示投影成功，0表示变换失败</returns>
				
				static ev_bool DefineProjectImage(_in const EarthView::World::Spatial2D::Raster::CRasterDataSet*pSrcDS, 
					                           _in    const ev_char *pszDstFilename, 
					                           _in    const ev_char *pszDstWKT,
					                           _in    EarthView::World::Spatial2D::Raster::EVDataSetFormat eDatasetFormat,  

					                           _inout EarthView::World::Spatial2D::Raster::CProgressInfo *pProgressArg);
				///<summary>
			   ///重投影影像，一幅影像转换到创建指定
			   ///投影的一幅影像
			   ///</summary>
			   /// <param name="pSrcDS">源数据集</param>
			   /// <param name="pszSrcWKT">源数据集坐标（WKT）描述,为NULL
			   ///将从pSrcDS读出相应信息</param>
			   /// <param name="pszDstFilename">指定创建后目标数据集的文件夹</param>
			   /// <param name="pszDstWKT">目标数据集坐标（WKT）描述</param>
			   /// <param name="eDatasetFormat">要创建的目标数据集类型</param>
			   /// <param name="eResampleMthd">采样方法</param>
			   /// <param name="dfMaxErro">最大误差单位是pixel，用于创建近似变换</param>
			   /// <param name="pfnProgress">进度解析函数 </param>
			   /// <param name="pProgressArg">进度反馈对象</param>
			   ///<returns>1,表示投影成功，0表示变换失败</returns>
			    
				static ev_bool  createAndReprojectImage(_in const EarthView::World::Spatial2D::Raster::CRasterDataSet*pSrcDS,
												  _in    const ev_char *pszSrcWKT, 
												  _in    const ev_char *pszDstFilename, 
												  _in    const ev_char *pszDstWKT,
												  _in    EarthView::World::Spatial2D::Raster::EVDataSetFormat eDatasetFormat,  
												  _in    EarthView::World::Spatial2D::Raster::EVResampleMethod eResampleMthd,
												  _in    ev_real64 dfMaxErro,
												 /* _in    EVgsProgressFunc pfnProgress, */
												  _inout EarthView::World::Spatial2D::Raster::CProgressInfo *pProgressArg);
				///<summary>///////////////////////////////////////////////////////////////////////
			   ///重投影影像，一幅影像转换到创建指定
			   ///投影的一幅影像
				///</summary>
			   /// <param name="pSrcDS">源数据集</param>
			   /// <param name="ptans">变换类</param>
			   /// <param name="pszDstFilename">指定创建后目标数据集的文件夹</param>
			   /// <param name="eDatasetFormat">要创建的目标数据集类型</param>
			   /// <param name="eResampleMthd">采样方法</param>
			   /// <param name="dfMaxErro">最大误差单位是pixel，用于创建近似变换</param>
			   /// <param name="pfnProgress">进度解析函数 </param>
			   /// <param name="pProgressArg">进度反馈对象</param>
			   ///<returns>1,表示投影成功，0表示变换失败</returns>
			    

				static ev_bool createAndReprojectImage(_in const EarthView::World::Spatial2D::Raster::CRasterDataSet*pSrcDS,
												  _in    const  EarthView::World::Spatial::Utility::CCoordinateTransformation*ptans,
												  _in    const ev_char *pszDstFilename, 
												  _in    EarthView::World::Spatial2D::Raster::EVDataSetFormat eDatasetFormat,  
												  _in    EarthView::World::Spatial2D::Raster::EVResampleMethod eResampleMthd,
												  _in    ev_real64 dfMaxErro,
												 /* _in    EVgsProgressFunc pfnProgress, */
												  _inout EarthView::World::Spatial2D::Raster::CProgressInfo *pProgressArg);
			   ///<summary>
			   ///重投影影像中的某一块，投影后的数据放在buffer中
			   ///</summary>
			   /// <param name="pSrcDS">源数据集</param>
			   /// <param name="pszSrcWKT">源数据集坐标（WKT）描述,为NULL
			   ///将从pSrcDS读出相应信息</param>
			   /// <param name="pDstDS">目标数据集，如果为NULL，函数内部将创建一个用于计算</param>
			   /// <param name="pszDstWKT">目标数据集坐标（WKT）描述</param>
			   /// <param name="eResampleMthd">采样方法</param>
			   /// <param name="dfMaxErro">最大误差单位是pixel，用于创建近似变换</param>
			   /// <param name="pBuffer">保存投影结果缓存</param>
			   /// <param name="pfnProgress">进度解析函数 </param>
			   /// <param name="pProgressArg">进度反馈对象</param>
			   ///<returns>1,表示投影成功，0表示变换失败</returns>
			    
				static ev_bool reprojectBlock(_in  const EarthView::World::Spatial2D::Raster::CRasterDataSet *pSrcDS,
									 _in    const ev_char *pszSrcWKT,
									 _in    EarthView::World::Spatial2D::Raster::CRasterDataSet *pDstDS,
									 _in    const ev_char *pszDstWKT,
									 _in    EarthView::World::Spatial2D::Raster::EVResampleMethod eResampleMthd,
									 _in    ev_real64 dfMaxErro,
									 _inout ev_uchar*pBuffer,
									/* _in    EVgsProgressFunc pfnProgress, */
									 _inout EarthView::World::Spatial2D::Raster::CProgressInfo *pProgressArg);
				///<summary>
			   ///创建指定投影的数据集,只创建Tif格式的数据集
			   ///</summary>
			   /// <param name="pSrcDS">源数据集</param>
			   /// <param name="pszSrcWKT">源数据集坐标（WKT）描述,为NULL
			   ///将从pSrcDS读出相应信息</param>
			   /// <param name="pszDstWKT">目标数据集坐标（WKT）描述</param>
			   /// <param name="pszDstFilePath">目标数据集所在位置，为NULL创建虚拟数据集</param>
			   /// <param name="iWidth">目标数据集宽度，为0时用源图像对应的宽度</param>
			   /// <param name="iHeight">目标数据集高度，为0时用源图像对应的高度</param>
			   /// <param name="pAffine">仿射变换参数，为NULL时用源图像对应的参数，必须与width跟hieght
			   ///相适应</param>
			    
               static _extfree EarthView::World::Spatial2D::Raster::CRasterDataSet *createDatasetForProj(_in const EarthView::World::Spatial2D::Raster::CRasterDataSet *pSrcDS,
				                                    _in    const ev_char *pszSrcWKT,
													_in    const ev_char *pszDstWKT,
													_in    const ev_char *pszDstFilePath,
													_in    ev_int32 iWidth,
													_in    ev_int32 iHeight,
													_in    const EarthView::World::Spatial2D::Raster::CAffineTransform*pAffine);
               ///<summary>
			   ///根据给定的数据集和投影参数，计算输出数据集的大小和仿射变换参数
			   ///</summary>
			   /// <param name="pSrcDS">源数据集</param>
			   /// <param name="pszSrcWKT">源数据集坐标（WKT）描述,为NULL
			   ///将从pSrcDS读出相应信息</param>
			   /// <param name="pszDstWKT">目标数据集坐标（WKT）描述</param>
			   /// <param name="iWidth">目标数据集宽度</param>
			   /// <param name="iHeight">目标数据集高度</param>
			   /// <param name="objAffine">仿射变换参数</param>
			    
			   static ev_void getSuggestedOutput(_in const EarthView::World::Spatial2D::Raster::CRasterDataSet *pSrcDS,
				                                 _in const ev_char *pszSrcWKT,
				                                 _in const ev_char *pszDstWKT,
												 _inout ev_int32 &iWidth,
												 _inout ev_int32 &iheight,
												 _inout EarthView::World::Spatial2D::Raster::CAffineTransform&objAffine);

			   
		  };
		}///
		}
	}///
}///
#endif//_REPRJECT_IMAGE_H_
