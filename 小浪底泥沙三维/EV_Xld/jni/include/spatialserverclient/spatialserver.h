#ifndef EARTHVIEW_WORLD_SPATIAL_CSPATIALSERVER_H
#define EARTHVIEW_WORLD_SPATIAL_CSPATIALSERVER_H
#include "spatialserverclient/spatialserverclientenums.h"
#include "spatialinterface/idatasource.h"
#include "spatialserverclient/spatialserverclientexports.h"


// using namespace EarthView::World::Spatial::GeoDataset;
#define EV_RELATIVE_PATH "EV_WebService/"
//#define EV_RELATIVE_PATH "WebService_CXF/"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// 空间服务连接类
            /// </summary>
			class CWebServiceConnection;
			//参见download updateconnection
			/// <summary>
            /// 更新数据类型
            /// </summary>
			enum EVUpdateDataType
			{
				/// <summary>
				/// 更细数据类型
				/// </summary>
				UDT_Data_UnKnow,
				/// <summary>
				/// 影像瓦片
				/// </summary>
				UDT_Data_ImageTile, 
				/// <summary>
				/// DEM瓦片
				/// </summary>
				UDT_Data_DemTile,
				/// <summary>
				/// 地图
				/// </summary>
				UDT_Data_MapTile,
				/// <summary>
				/// 矢量瓦片
				/// </summary>
				UDT_Data_VectorTile,
				/// <summary>
				/// 单值专题图
				/// </summary>
				UDT_Data_VectorTile_UniqueTheme,
				/// <summary>
				/// 分段专题图
				/// </summary>
				UDT_Data_VectorTile_RangeTheme
			};

			/// <summary>
            /// 空间服务类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CSpatialServer:
				public EarthView::World::Spatial::GeoDataset::IDataSource
			{
			public:
				/// <summary>
                /// 获取服务类型
                /// </summary>
                /// <returns>服务类型</returns>
				virtual ev_int32 getType() const;

				/// <summary>
                /// 获取服务名称
                /// </summary>
                /// <returns>服务器名称</returns>
				virtual EVString getName() const;

				/// <summary>
                /// 获取服务名称
                /// </summary>
                /// <returns>服务名称</returns>
				virtual const EVString getServerName() const;

				/// <summary>
                /// 获取服务描述
                /// </summary>
                /// <returns>服务描述</returns>
				virtual const EVString getServerAbstract() const;

				/// <summary>
                /// 获取服务标题
                /// </summary>
                /// <returns>服务标题</returns>
				virtual const EVString getServerTitle() const;

				/// <summary>
                /// 获取服务器地址
                /// </summary>
                /// <returns>服务器地址</returns>
				virtual const EVString getServerUrl() const;
				

				/// <summary>
                /// 是否可以连接到服务器
                /// </summary>
                /// <returns>如果可以连接，返回true</returns>
				virtual ev_bool isConnected();

				/// <summary>
                /// 重新连接
                /// </summary>
                /// <returns>重新连接成功，返回true</returns>
				virtual ev_bool reconnect();

				/// <summary>
                /// 断开连接连接
                /// </summary>
                /// <returns></returns>
				virtual ev_void disConnect();
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CSpatialServer();

				/// <summary>
				/// 删除指定数据集名称的数据集
				/// </summary>
				/// <param name="name">指定名称</param>
				/// <returns>成功删除，返回true;否则，返回false</returns>
				virtual ev_bool deleteDataset(const EVString& name)
				{
					return false;
				}

				///生成格式化的各种服务名称
				EVString formatServiceName(_in EVWebServiceType type);

				/// 获取全url
				const EVString getServiceDetailUrl(EVWebServiceType type) const;


			protected:
                /// 默认构造函数   
				CSpatialServer();
			protected:
				///服务器类型
				EarthView::World::Spatial::GeoDataset::EVDataSourceType mnSpatialServerType;	
				ev_bool mbConnected;
			ev_private:
				CSpatialServer(_in EarthView::World::Core::CNameValuePairList* pList);	

				friend class CWMTSLayer;
				friend class CWMSLayer;
			};
		}
	}
}
#endif


