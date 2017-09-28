#ifndef _OGCWFSCLAMPSCENELAYER_H_
#define _OGCWFSCLAMPSCENELAYER_H_
#include "spatial3dlayer/vectordbclampscenelayer.h"
#include "spatialinterface/idataset.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{
				class EV_3DLAYER_DLL COGCWFSVectorClampLayer:public CVectorDBClampSceneLayer
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					COGCWFSVectorClampLayer(EarthView::World::Core::CNameValuePairList* pList);
				public:
					COGCWFSVectorClampLayer();
					COGCWFSVectorClampLayer(EarthView::World::Spatial::GeoDataset::IDataset* ref_Dataset);
					virtual ~COGCWFSVectorClampLayer(void);
					/// <summary>
					/// 绑定一个二维图层
					/// </summary>
					/// <param name="layer">二维图层</param>
					/// <returns></returns>
					virtual ev_void attachLayer(EarthView::World::Spatial::Atlas::ILayer* layer);
					/// <summary>
					/// 判断专题图流是否相等
					/// </summary>
					/// <param name="stream">风格流</param>
					/// <returns>相等返回true，否则false</returns>
					virtual ev_bool equalThemeStream(EarthView::World::Core::MemoryDataStreamPtr stream);
					/// <summary>
					/// clone
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Atlas::ILayer * clone() const;	
					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					///<summary>
					///设置数据集
					/// <param name="ds">数据集指针</param>
					/// <returns></returns>
					void setWFSDataset(EarthView::World::Spatial::GeoDataset::IDataset* ds);
					/// <summary>
					/// 返回绑定的二维图层中缓存到本地的数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();
					/// <summary>
					/// 返回WFS网络数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getWFSDataset();
					///<summary>
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
					/// 获取专题图流
					/// </summary>
					/// <param name="theme">专题图</param>
					/// <returns></returns>
					virtual EarthView::World::Core::MemoryDataStreamPtr getThemeStream();
				protected:
					ev_uint32 getThemeStream(EarthView::World::Core::CDataStream& stream);
					void refreshOctree(ev_bool force);
				private:
					ev_real64 calculateStatisticsMaxValue(const EarthView::World::Spatial::Theme::ITheme* itheme);


				private:
					EarthView::World::Spatial::GeoDataset::IDataset* mpWebWFSDataSet;

				};

				/// <summary>
				/// 贴地矢量图层工厂类
				/// 管理贴地矢量图层
				/// </summary>
				class EV_3DLAYER_DLL COGCWFSVectorClampLayerFactory : public EarthView::World::Spatial::Atlas::ILayerFactory
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					COGCWFSVectorClampLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					COGCWFSVectorClampLayerFactory();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~COGCWFSVectorClampLayerFactory();

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
					/// <param name=""></param>
					/// <returns>工厂的产品</returns>
					EarthView::World::Spatial::Atlas::ILayer* createInstance();
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
#endif