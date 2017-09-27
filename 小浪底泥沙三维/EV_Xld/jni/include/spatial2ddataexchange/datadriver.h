#ifndef EARTHVIEW_WORLD_SPATIAL_CONVERTOR_CDATADRIVER_H
#define  EARTHVIEW_WORLD_SPATIAL_CONVERTOR_CDATADRIVER_H

#include "spatial2ddataexchange/spatial2ddataexchangeexports.h"
#include "core/datastream.h"
#include "spatialinterface/idataexchangelistener.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				class IDataSource;

				class IPropertySet;
			}
		}
	}
}

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Convertor
			{
				/// <summary>
				/// 中间数据流存储几何信息的格式
				/// </summary>
				enum EVGeometryStreamType
				{
					/// <summary>
					/// 未知
					/// </summary>
					EV_GST_UNKNOWN		=	0,
					/// <summary>
					/// WKB格式
					/// </summary>
					EV_GST_WKB			=	1,
					/// <summary>
					/// WKT格式
					/// </summary>
					EV_GST_WKT			=	2,
					/// <summary>
					/// shapefile格式
					/// </summary>
					EV_GST_SHAPE		=	3,
					/// <summary>
					/// EarthView数据格式
					/// </summary>
					EV_GST_EVBUF		=	4,
					/// <summary>
					/// 几何对象指针
					/// </summary>
					EV_GST_GeomPtr		=	5
				};
	
				/// <summary>
				/// 操作模式
				/// </summary>
				enum  EVDataExchangeOperateMode
				{
					/// <summary>
					/// 未知
					/// </summary>
					EV_DEOM_UNKNOWN = 0,
					/// <summary>
					/// 写操作
					/// </summary>
					EV_DEOM_WRITE = 1,
					/// <summary>
					/// 读操作
					/// </summary>
					EV_DEOM_READ = 2
				};

				/// <summary>
				/// 数据交换参数类
				/// </summary>
				class CDataExchangeParam;

				/// <summary>
				/// 数据交换驱动类
				/// </summary>
				class EV_SPATIAL2DDATAEXCHANGE_DLL CDataDriver
					:public EarthView::World::Core::CAllocatedObject
				{
				public:
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
					/// 当前数据驱动是否支持读操作
					/// </summary>
					/// <returns>支持读操作返回true，否则返回false</returns>
					virtual ev_bool canRead();

					/// <summary>
					/// 当前数据驱动是否支持写操作
					/// </summary>
					/// <returns>支持写操作返回true，否则返回false</returns>
					virtual ev_bool canWrite();

					/// <summary>
					/// 读取第n个索引的要素
					/// </summary>
					/// <param name="index">要素索引</param>
					/// <param name="stream">格式化的要素数据流</param>
					/// <returns>操作结果状态</returns>
					virtual ev_int32 read(_in ev_uint32 index,_out EarthView::World::Core::CDataStream& stream);

					/// <summary>
					/// 写入第n个索引的要素
					/// </summary>
					/// <param name="index">要素索引</param>
					/// <param name="stream">格式化的要素数据流</param>
					/// <returns>操作结果状态</returns>
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
					virtual ev_int32 open(_in EarthView::World::Spatial::GeoDataset::IPropertySet* pPropertySet,_in EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode,_in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param,_inout ev_uint32& featurecount,_inout EarthView::World::Core::CDataStream& stream);
					

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
					virtual ev_int32 open(_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_dataSource,_in const EVString& datasetName,_in EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode,_in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param,_inout ev_uint32& featurecount,_inout EarthView::World::Core::CDataStream& stream);
					//virtual ev_int32 open(_in const EVString source,_in const EVString format,_in EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode,_in const EarthView::World::Spatial::Convertor::CDataExchangeParam *param,_inout ev_uint32& featurecount,_inout EarthView::World::Core::CDataStream& stream);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CDataDriver();

					/// <summary>
					/// 获取数据驱动类型
					/// </summary>
					/// <returns>数据驱动类型                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                </returns>
					EarthView::World::Spatial::Convertor::EVDataDriverType getType();
					EarthView::World::Spatial::Convertor::IDataExchangeListener* getListener();
					void setListener(EarthView::World::Spatial::Convertor::IDataExchangeListener* pListener);
				
				ev_private:
					CDataDriver(_in EarthView::World::Core::CNameValuePairList* pList );
				protected:
					EVString getCorrectFolderPath(_in const EVString& path);

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CDataDriver();

					EarthView::World::Spatial::Convertor::EVDataDriverType mnType;
					///转换参数，共享模式
					EarthView::World::Spatial::Convertor::CDataExchangeParam* mpParam;
					///要处理的要素个数
					ev_uint32 mnFeatureCount;
					/*///当前要素索引
					ev_uint32 mnCurFeatureIndex;*/
					///文件读写模式
					EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mnMode;
					///数据交换监听
					EarthView::World::Spatial::Convertor::IDataExchangeListener* mpListener; 
					friend class CDataExchange;
				};
			}
		}
	}
}
#endif


