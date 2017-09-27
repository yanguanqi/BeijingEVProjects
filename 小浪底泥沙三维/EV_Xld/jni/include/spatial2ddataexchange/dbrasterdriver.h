#ifndef _DBRASTERDRIVER_H_H
#define _DBRASTERDRIVER_H_H

#include "spatial2ddataexchange/datadriver.h"
#include "spatialinterface/irasterdataset.h"
#include "spatial2ddataexchange/dbrasterexchangeparam.h"
#include "rasterdataset/dbrasterdataset.h"
#include "spatialinterface/idatasourcefactory.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Convertor{

				class EV_SPATIAL2DDATAEXCHANGE_DLL CDBRasterDriver:
					public EarthView::World::Spatial::Convertor::CDataDriver
				{
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CDBRasterDriver();
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
					///<summary>
					///读取数据库中的栅格数据块信息
					///<summary>
					virtual ev_int32 read(_in ev_uint32 index,_out EarthView::World::Core::CDataStream& stream );
					///<summary>
					///向数据库中的栅格数据集写入数据信息
					///<summary>
					virtual ev_int32 write(_in ev_uint32 index,_in EarthView::World::Core::CDataStream& stream);
					/// <summary>
					/// 打开数据驱动
					/// </summary>
					/// <param name="pPropertySet">数据集参数信息</param>
					/// <param name="mode">操作模式</param>
					/// <param name="param">转换参数</param>
					/// <param name="featurecount">总要素数</param>
					/// <param name="stream">数据结构</param>
					/// <returns>操作结果状态</returns>
					virtual ev_int32 open(_in EarthView::World::Spatial::GeoDataset::IPropertySet* pPropertySet,_in EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode,_in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param,_inout ev_uint32& blockcount,_inout EarthView::World::Core::CDataStream& stream);
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
					virtual ev_int32 open(_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_dataSource,_in const EVString& datasetName,_in EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode,_in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param,_inout ev_uint32& blockcount,_inout EarthView::World::Core::CDataStream& stream);
					///<summary>
					///获取数据转换参数
					///</summary>
					//EarthView::World::Spatial::Convertor::CDBRasterExchangeParam *getExchangeParam();
					///<summary>
					///设置数据转换参数
					//ev_void setExchangeParam(_in EarthView::World::Spatial::Convertor::CDBRasterExchangeParam&objparam);
				private:
                    ev_int32 readRasterInfo(_inout EarthView::World::Core::CDataStream & os);
					EarthView::World::Spatial2D::Raster::CDBRasterDataset*  openRasterDataset(_in const EVString& name);
					ev_bool getRasterFormat(EarthView::World::Core::CDataStream& stream);
                ev_private:
					CDBRasterDriver(_in EarthView::World::Core::CNameValuePairList* pList);
				protected:
					///<summary>
					///构造函数
					///<summary>
					CDBRasterDriver();
				private:
					EVString mstrPath;
					EVString mstrName;
					EVString mstrTableName;
	
					EarthView::World::Spatial::GeoDataset::IDataSource* mpDataSource;					
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* mpDataset;
					bool mbIsBuildOverview;
					ev_int32 mnBlockSize;
					ev_int32 mnBlockCount;
					ev_int32 mnBandCount;
					ev_int32 mnXnum;   //数据集X方向的分块数
					ev_int32 mnYnum;   //数据集Y方向的分块数
					friend class CDataDriverFactory;
				};
			}
		}
	}
}
#endif