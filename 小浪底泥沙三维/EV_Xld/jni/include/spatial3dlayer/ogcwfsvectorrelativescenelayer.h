#ifndef _OGC_WFS_RELATIVE_SCENE_LAYER
#define _OGC_WFS_RELATIVE_SCENE_LAYER
#include "spatial3dlayer/vectorrelativescenelayer.h"
#include "spatialinterface/idataset.h"
namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{

				class EV_3DLAYER_DLL COGCWFSVectorRelativeSceneLayer:public CVectorRelativeSceneLayer
				{
ev_private:
					///<summary>
					///构造函数
					///</summary>
					///<param name="pList">构造函数参数键值对表</param>
					///<returns></returns>
					COGCWFSVectorRelativeSceneLayer(EarthView::World::Core::CNameValuePairList* pList);
				public:
					COGCWFSVectorRelativeSceneLayer();
					COGCWFSVectorRelativeSceneLayer(EarthView::World::Spatial::GeoDataset::IDataset* ref_Dataset);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					COGCWFSVectorRelativeSceneLayer(const EVString& name);

					virtual ~COGCWFSVectorRelativeSceneLayer(void);
					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>					
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;	
					/// <summary>
					/// 从xml恢复图层参数
					/// </summary>
					/// <param name="element">xml</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 复制图层
					/// </summary>
					/// <returns>图层指针</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer * clone() const;
					///<summary>
					///获取涂层类型
					///</summary>
					///<param name=""></param>
					///<returns>图层的类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// 设置WFS数据集
					/// </summary>
					/// <param name="ds"></param>
					/// <returns></returns>
					void setWFSDataset(EarthView::World::Spatial::GeoDataset::IDataset* ds);
					/// <summary>
					/// 返回数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();
					/// <summary>
					/// 返回WFS数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集</returns>
					EarthView::World::Spatial::GeoDataset::IDataset* getWFSDataset() const;
				protected:
					ev_real64 calculateStatisticsMaxValue(const EarthView::World::Spatial::Theme::ITheme* itheme);
					ev_bool publish(const EVString& path,const EVString& fileName,const CVector3DCacheFieldVector& fieldNames);
				private:
					EarthView::World::Spatial::GeoDataset::IDataset* mpWebWFSDataSet;
				};
				/// <summary>
				/// 贴地矢量图层工厂类
				/// 管理贴地矢量图层
				/// </summary>
				class EV_3DLAYER_DLL COGCWFSVectorRelativeSceneLayerFactory : public EarthView::World::Spatial::Atlas::ILayerFactory
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					COGCWFSVectorRelativeSceneLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					COGCWFSVectorRelativeSceneLayerFactory();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~COGCWFSVectorRelativeSceneLayerFactory();

				public:
					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// 创建一个图层实例
					/// </summary>
					/// <param name="name">图层的名字</param>
					/// <returns>工厂的产品</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);

					/// 创建一个图层实例
					/// </summary>
					/// <param name="layerName">图层名称</param>
					/// <param name="datasourceName">数据源名称</param>
					/// <param name="datasetName">数据集名称</param>
					/// <returns></returns>
					EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Spatial::GeoDataset::IDataset* ref_Dataset);
					/// <summary>
					/// 销毁一个图层
					/// </summary>
					/// <param name="layer">销毁工厂的产品</param>
					/// <returns>是否成功</returns>
					virtual ev_bool destroyInstance( EarthView::World::Spatial::Atlas::ILayer* layer);

				public:
					static const EVString msSceneLayerFactoryName;
				};
			}
		}
	}
}


#endif//
