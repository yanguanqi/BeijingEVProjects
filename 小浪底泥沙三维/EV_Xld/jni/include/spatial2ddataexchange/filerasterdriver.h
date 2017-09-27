#ifndef _FILERASTERDRIVER_H_
#define _FILERASTERDRIVER_H_

#include "spatial2ddataexchange/datadriver.h"
#include "rasterdataset/rasterdataset.h"
#include "gdal-1.6.3/gdal_priv.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Convertor{

				class EV_SPATIAL2DDATAEXCHANGE_DLL CFileRasterDriver
					:public EarthView::World::Spatial::Convertor::CDataDriver
				{
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CFileRasterDriver();
					/// <summary>
					/// 写入数据完成
					/// </summary>
					/// <returns></returns>
					virtual ev_void finishWrite();
					/// <summary>
					/// 关闭数据驱动
					/// </summary>
					/// <returns></returns>
					virtual ev_void close();
					/// <summary>
					/// 打开数据驱动
					/// </summary>
					/// <param name="pPropertySet">数据集参数信息</param>
					/// <param name="mode">操作模式</param>
					/// <param name="param">转换参数</param>
					/// <param name="featurecount">总要素数</param>
					/// <param name="stream">数据结构</param>
					/// <returns>操作结果状态</returns>
					virtual ev_int32 open(_in EarthView::World::Spatial::GeoDataset::IPropertySet* pPropertySet,
						_in EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode,
						_in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param,
						_inout ev_uint32& blockcount,_inout EarthView::World::Core::CDataStream& stream);
					/// <summary>
					/// 打开数据驱动
					/// </summary>
					/// <param name="pDataSource">数据源</param>
					/// <param name="datasetname">数据集名称</param>
					/// <param name="mode">操作模式</param>
					/// <param name="param">转换参数</param>
					/// <param name="featurecount">总要素数</param>
					/// <param name="stream">数据结构</param>
					/// <returns>操作结果状态</returns>
					virtual ev_int32 open(_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_dataSource,
						_in const EVString& datasetName,_in EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode,
						_in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param,_inout ev_uint32& blockcount,
						_inout EarthView::World::Core::CDataStream& stream);

					/// <summary>
					/// 读取第n个索引的数据块
					/// </summary>
					/// <param name="index">块索引</param>
					/// <param name="stream">格式化的要素数据流</param>
					/// <returns>操作结果状态</returns>
					virtual ev_int32 read(_in ev_uint32 index,_out EarthView::World::Core::CDataStream& stream);

					/// <summary>
					/// 写入栅格数据块
					/// </summary>
					/// <param name="index">块索引</param>
					/// <param name="stream">格式化的要素数据流</param>
					/// <returns>操作结果状态</returns>
					virtual ev_int32 write(_in ev_uint32 index,_in EarthView::World::Core::CDataStream& stream);
	
                ev_private:
					CFileRasterDriver(_in EarthView::World::Core::CNameValuePairList* pList);
				protected:
					///<summary>
					///构造函数
				    ///<summary>
					CFileRasterDriver();
					ev_int32 open(_in const EarthView::World::Spatial::Convertor::CDataExchangeParam *param,
						_inout ev_uint32& blockcount,_inout EarthView::World::Core::CDataStream& stream);
                private:
					ev_int32 readRasterInfo(_inout EarthView::World::Core::CDataStream & os);
					ev_int32 writeRasterInfo(_inout EarthView::World::Core::CDataStream & os);
					void fillWithNoDataValue(void* pbuf, ev_int32 pixelNum, EarthView::World::Spatial::GeoDataset::EVRasterDataType dataType, 
						ev_real64 noDataValue);
				private:
					
					EVString mstrPath;
					EVString mstrName;  

					EarthView::World::Spatial::GeoDataset::IDataSource* mpDataSource;
					ev_uint32 mnBlockCount;
					ev_uint32 mnDataFormat;
					ev_int32 mnCompressType;//高级设置中选择的压缩方式
					ev_int32 mnBlockSize;//外部设置的块大小
					ev_int32 mnBandCount;//数据集的波段数
					ev_int32 mnXnum;   //数据集X方向的分块数
					ev_int32 mnYnum;   //数据集Y方向的分块数
					ev_int32 mnXEndOff;   //数据集X方向的终点偏移
					ev_int32 mnYEndOff;   //数据集Y方向的终点偏移
					GDALDataset *mpGDALDataset;
					ev_int32 mnRasterDataType;
					friend class CDataDriverFactory;
				};
			}
		}
	}
}
#endif