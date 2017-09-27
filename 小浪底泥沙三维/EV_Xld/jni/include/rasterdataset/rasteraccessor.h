
#if !defined(_RASTER_ACCESSOR_H_)
#define _RASTER_ACCESSOR_H_


#include "rasterdatasetenume.h"


#include "spatialinterface/idatasetoperator.h"
#include "spatialinterface/irasterdataset.h"


namespace EarthView
{
	namespace World
	{ 
		namespace Spatial2D
		{ 
		namespace Raster
		{      
			class CRasterDataSet;
            
			class CProgressInfo;
    
			/************************************************************************/
			/*   CRasterFileOperator                                                 */
			/************************************************************************/
			///<summary>
			///CRasterFileOperator
			///栅格数据集操作对象
			///</summary>
			class EV_RASTER_DLL CRasterFileOperator:public EarthView::World::Core::CAllocatedObject
			{ 
				ev_private:
				/// <summary>
				/// 键值对构造函数
				/// </summary>
				///<returns></returns>
		        CRasterFileOperator(_in EarthView::World::Core::CNameValuePairList* pList)
				{
				}
			public:
				/// <summary>
				/// 获取Operator对应的数据集类型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				 EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType();
				/// <summary>
				/// 获取Operator对应的数据数据源类型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				 EarthView::World::Spatial::GeoDataset::EVDataSourceType getDataSourceType();
				/// <summary>
				/// 获取数据源引用
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				////virtual IDataSource* getDataSourceRef();
				/// <summary>
				/// 打开数据集
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				_extfree EarthView::World::Spatial2D::Raster::CRasterDataSet*open(const EVString&pszFullpathName);
				/// <summary>
				/// 删除数据集
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void deleteDataset(EarthView::World::Spatial2D::Raster::CRasterDataSet*pobjDataSet);
				
			public:
				///<summary>
			    ///默认构造函数
			    ///</summary>
                CRasterFileOperator();
				///<summary>
			    ///析构函数
			    ///</summary>
				~CRasterFileOperator();
				///<summary>
			    ///根据给定路径打开一个数据集 
				///</summary>
				/// <param name="pszFullpathName">栅格数据的全路径</param>
				/// <param name="eAccess">栅格数据集的打开权限</param>
				/// <returns>栅格数据集指针<returns>
			    
				static _extfree EarthView::World::Spatial2D::Raster::CRasterDataSet*open(const EVString&pszFullpathName,EarthView::World::Spatial2D::Raster::EVAccess eAccess);
                ///<summary>
			    ///根据给定参数创建相应的栅格数据集 
				///</summary>
				/// <param name="pszpath">栅格数据集的路径，可以为空字符串，当为空时创建虚拟对象</param>
				/// <param name="iWidth">栅格数据集的宽度</param>
				/// <param name="iHeight">栅格数据集的高度</param>
				/// <param name="ibandCount">栅格数据集之波段数</param>
			    /// <param name="edatatype">数据类型</param>
				/// <param name="erasterType">创建相应对象选项,如Tif，img等(PNG\JPG CrateCopy)</param>
				/// <returns>栅格数据集指针<returns>
			    
				static _extfree EarthView::World::Spatial2D::Raster::CRasterDataSet*create(const EVString& pszpath,ev_int32 iWidth,ev_int32 iHeight,ev_int32 ibandCount,
					                        EarthView::World::Spatial::GeoDataset::EVRasterDataType edatatype,EarthView::World::Spatial2D::Raster::EVDataSetFormat erasterType);
                ///<summary>
			    ///根据给定参数创建相应的栅格数据集 
				///</summary>
				/// <param name="pFileBuffer">数据集的二进制流</param>
			    /// <param name="erasterType">创建相应对象选项,如JPEG，Tif，img Png等</param>
				/// <returns>栅格数据集指针<returns>
			    
				static _extfree EarthView::World::Spatial2D::Raster::CRasterDataSet*createFormStream(ev_uchar*pFileBuffer,ev_uint64 idataLenth,EarthView::World::Spatial2D::Raster::EVDataSetFormat erasterType);
                
				///<summary>
				///复制一个数据集
				///</summary>
				/// <param name="pszCopypath">目标数据集路径，为""创建内存数据集</param>
			    /// <param name="pSrcDataset">源数据集对象</param>
			    /// <param name="erasterType">创建相应对象选项,如JPEG，Tif，img Png等</param>
			    /// <param name="pfnProgress">进度函数</param>
			    /// <param name="pProssiInfo">进度信息类</param>
				///<returns>返回一个数据集对象，要显示调用close函数才能将数据集刷到硬盘</returns>
				
				static _extfree EarthView::World::Spatial2D::Raster::CRasterDataSet*createCopy(const EVString& pszCopypath,EarthView::World::Spatial2D::Raster::CRasterDataSet*pSrcDataset,EarthView::World::Spatial2D::Raster::EVDataSetFormat erasterType,
					                            EarthView::World::Spatial2D::Raster::CProgressInfo*pProssiInfo);
                ///<summary>
			    ///释放数据集指针
				///</summary>
				/// <param name="pobjDataSet">栅格数据集指针</param>
				static ev_void close(EarthView::World::Spatial2D::Raster::CRasterDataSet*pobjDataSet);
			private:
				
			};
		}///Raster
		}
	}///
}///EarthView

#endif//_RASTER_ACCESSOR_H_
