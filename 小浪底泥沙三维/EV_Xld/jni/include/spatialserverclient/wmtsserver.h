#ifndef EARTHVIEW_WORLD_SPATIAL_CWMTSSERVER_H
#define EARTHVIEW_WORLD_SPATIAL_CWMTSSERVER_H
#include "spatialserverclient/spatialserverclientexports.h"
#include "spatialserverclient/ogcspatialserver.h"
#include "spatialserverclient/wmtslayer.h"


// using namespace EarthView::World::Spatial;
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// OGC WMTS 服务信息类
            /// </summary>
			class CWMTSServerInfo;

			/// <summary>
            /// OGC WMTS 图层信息类
            /// </summary>
			class CWMTSLayerInfo;

			/// <summary>
            /// OGC WMTS 服务类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CWMTSServer
				:public EarthView::World::Spatial::COGCSpatialServer
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CWMTSServer();
				/// <summary>
                /// 获取服务信息
                /// </summary>
                /// <returns>服务信息</returns>
				const EarthView::World::Spatial::CWMTSServerInfo* getServerInfoRef() const; 
				/// <summary>
				/// 获取数据源参数
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据源KeyValue参数，需外部释放</returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const;
				/// <summary>
				/// 判断数据源是否有效
				/// </summary>
				/// <param name=""></param>
				/// <returns>是，返回true;否则，返回false</returns>
				virtual ev_bool isValid() const;
				/// <summary>
				/// 获取指定数据集类型的数据元信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据元信息集合对象</returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(_in const EVString &name);
				/// <summary>
				/// 获取指定数据集类型的数据元信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据元信息集合对象</returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type);
				/// <summary>
				/// 深度拷贝
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IDataSource* clone() const;
				/// <summary>
                /// 打开指定图层
                /// </summary>
				/// <param name="name">图层名</param>
                /// <returns>所打开图层指针</returns>
				//const CWMTSDataset* openDataset(_in const EVString layer, _in const EVString tilematrixset) const;
				
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


				/// <summary>
                /// 获取指定图层信息
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定图层信息</returns>
				const EarthView::World::Spatial::CWMTSLayerInfo* getLayerInfoRef(_in ev_uint32 index) const;

				/// <summary>
                /// 获取指定图层信息
                /// </summary>
				/// <param name="tilematrix">tilematrix名称</param>
                /// <returns>指定图层信息</returns>
				const EarthView::World::Spatial::CWMTSLayerInfo* getLayerInfoRef(_in const EVString& tilematrix) const;
			protected:
				CWMTSServer();
			ev_private:
				CWMTSServer(_in EarthView::World::Core::CNameValuePairList* pList);
				friend class CDataSourceServerFactory;
				friend class COGCWMTSDataSourceServerFactory;
			private:
				vector<EarthView::World::Spatial::GeoDataset::IDataset*> m_DatasetList;
			};
		}
	}
}
#endif


