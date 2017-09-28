#ifndef EARTHVIEW_WORLD_SPATIAL2D_ATLAS_WFSDATALAYER_H
#define EARTHVIEW_WORLD_SPATIAL2D_ATLAS_WFSDATALAYER_H
#include "spatial2datlas/datalayer.h"
#include "spatialserverclient/wfsdataset.h"
#include "core/xml.h"
#include "spatialinterface/ilayer.h"
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Atlas{
				class EV_SPATIAL2DATLAS_DLL CWFSDataLayer : public CDataLayer
				{
ev_private:
					CWFSDataLayer( EarthView::World::Core::CNameValuePairList *pList );
				public:	
					///<summary>
					///默认构造函数
					///</summary>
					CWFSDataLayer();
					///<summary>
					///析构函数
					///</summary>
					~CWFSDataLayer();

				public:
					///////////// EarthView::World::Spatial::Atlas::ILayer //////////////////
					/// <summary>
					/// 获取图层类型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// 获取图层的WFS数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集指针</returns>
					EarthView::World::Spatial::GeoDataset::IDataset* getWFSDataset() const;
					
					/// <summary>
					/// 设置数据源
					/// </summary>
					/// <param name="dataset">数据源</param>
					/// <returns></returns>
					virtual ev_void setDataset( EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset );
					/// <summary>
					/// 把图层的信息导出到xml中
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml要素</returns>

					EarthView::World::Core::CXmlElement toXmlElement() const;
					/// <summary>
					/// 从xml中恢复图层的配置
					/// </summary>
					/// <param name="element">xml要素</param>
					/// <returns></returns>

					ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 图层的复制,内存外部释放
					/// </summary>
					/// <param name="sr">参考坐标系</param>
					/// <returns>图层</returns>

					_extfree EarthView::World::Spatial::Atlas::ILayer * clone() const;
					
				private:
					/// <summary>
					/// 加载要素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回数据集</returns>
					EarthView::World::Spatial::GeoDataset::IDataset* loadFeatures(EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset);
				protected:
					C_DISABLE_COPY( CWFSDataLayer );
				protected:
					EarthView::World::Spatial::CWFSDataset *mpWFSDataset;

				};	


				class EV_SPATIAL2DATLAS_DLL CWFSDataLayerFactory: public EarthView::World::Spatial::Atlas::ILayerFactory
				{
				public:
					CWFSDataLayerFactory();
					~CWFSDataLayerFactory();
				public:
					/// <summary>
					/// 获取工厂类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>工厂类型</returns>

					EarthView::World::Spatial::Atlas::EVLayerType getType()const;
					/// <summary>
					/// 创建一个图层实例
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层</returns>

					EarthView::World::Spatial::Atlas::ILayer* createInstance();
					/// <summary>
					/// 从xml要素中恢复一个图层
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层</returns>

					EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 删除图层实例
					/// </summary>
					/// <param name="layer">待删除的图层</param>
					/// <returns>如果删除成功则返回true,反之则否</returns>

					ev_bool destroyInstance(EarthView::World::Spatial::Atlas::ILayer* layer);
ev_private:
					CWFSDataLayerFactory( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CWFSDataLayerFactory );
				private:
					EarthView::World::Spatial::Atlas::EVLayerType m_eLayerType;
				};

				
			}
		}
	}
}
#endif
