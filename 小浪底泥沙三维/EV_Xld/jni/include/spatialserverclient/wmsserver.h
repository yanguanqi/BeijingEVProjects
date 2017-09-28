#ifndef EARTHVIEW_WORLD_SPATIAL_CWMSSERVER_H
#define EARTHVIEW_WORLD_SPATIAL_CWMSSERVER_H
#include "spatialserverclient/ogcspatialserver.h"
#include "spatialserverclient/spatialserverclientexports.h"
#include "spatialserverclient/wmslayer.h"

// using namespace EarthView::World::Spatial;
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// OGC WMS 服务信息类
            /// </summary>
			class CWMSServerInfo;

			/// <summary>
            /// OGC WMS 数据集元数据类
            /// </summary>
			class CWMSLayerInfo;

			/// <summary>
            /// OGC WMS 服务类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CWMSServer
				:public EarthView::World::Spatial::COGCSpatialServer
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CWMSServer();

				/// <summary>
                /// 获取服务信息
                /// </summary>
                /// <returns>服务器信息对象指针</returns>
				const EarthView::World::Spatial::CWMSServerInfo* getServerInfo() const; 

				/// <summary>
				/// 获取数据源参数
				/// </summary>
				/// <returns>数据源KeyValue参数</returns>
				virtual EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const;

				/// <summary>
				/// 获取指定数据集类型的数据元信息
				/// </summary>
				/// <param name="name">数据集名称</param>
				/// <returns>数据元信息集合对象指针，外部释放</returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(const EVString &name);

				/// <summary>
				/// 获取指定数据集类型的数据元信息
				/// </summary>
				/// <param name="type">数据集类型</param>
				/// <returns>数据元信息集合对象，外部释放</returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(EarthView::World::Spatial::GeoDataset::EVDatasetType type);

				/// <summary>
				/// 克隆
				/// </summary>
				/// <returns>克隆对象指针</returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IDataSource* clone() const;

				
				/// <summary>
                /// 打开指定图层
                /// </summary>
				/// <param name="name">图层名</param>
                /// <returns>所打开图层指针</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataset* openDataset(_in const EVString& name);

				virtual ev_bool closeDataset(EarthView::World::Spatial::GeoDataset::IDataset* pDataset);
				/// <summary>
                /// 获取子图层数目
                /// </summary>
                /// <returns>图层数目</returns>
				ev_uint32 getLayerCount() const;

				//获取指定图层信息(只能获取到map一级)，layer一层用LayerInfo嵌套调用

				/// <summary>
                /// 获取指定图层信息
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定图层信息</returns>
				const EarthView::World::Spatial::CWMSLayerInfo* getLayerInfo(_in ev_uint32 index) const;
			protected:
				///构造函数
				CWMSServer();

				friend class CDataSourceServerFactory;
				friend class COGCWMSDataSourceServerFactory;
			ev_private:
				CWMSServer(_in EarthView::World::Core::CNameValuePairList* pList);
			private:
				vector<EarthView::World::Spatial::GeoDataset::IDataset*> m_DatasetList;
			};
		}
	}
}
#endif


