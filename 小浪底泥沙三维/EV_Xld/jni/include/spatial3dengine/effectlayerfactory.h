#ifndef EARTHVIEW_WORLD_SPATIAL3D_EFFECTLAYERRFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL3D_EFFECTLAYERRFACTORY_H


#include "geometry3d/iglobelayer.h"
#include "spatial3dengine/spatial3denginecomdef.h"

 namespace EarthView{
	 namespace World{
		 namespace Spatial{
			 namespace GeoDataset{
				 class IDataset;
			 }
		 }
	 }
}
 namespace EarthView{
	 namespace World{
		 namespace Spatial{
			 namespace Atlas{
				 class ILayer;
			 }
		 }
	 }
 }
namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{

				/// <summary>
				/// 特效图层工厂类
				/// </summary>
				class EV_Spatial3DEngine_DLL CEffectLayerFactory : public EarthView::World::Spatial::Atlas::ILayerFactory
				{
					
				ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEffectLayerFactory(EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEffectLayerFactory();

				public:
					/// <summary>
					/// 返回单例的数据源工厂句柄
					/// </summary>
					/// <returns>CModelDataSourceFactory，失败则返回NULL</returns>
					static EarthView::World::Spatial3D::Atlas::CEffectLayerFactory* getSingletonPtr();

					/// <summary>
					/// 释放单例的数据源工厂句柄
					/// </summary>
					/// <returns</returns>
					static void releaseSingletonPtr();

					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>Globe图层的类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;

					/// <summary>
					/// 从XML创建图层实例
					/// </summary>
					/// <param name="element">XML节点</param>
					/// <returns>图层指针</returns>
                    virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);

					/// <summary>
					/// 从内存创建图层实例
					/// </summary>
					/// <param name="name">图层的名字</param>
					/// <returns>Globe工厂的产品</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(const EVString& name, EarthView::World::Spatial::GeoDataset::IDataset* ds);


					/// <summary>
					/// 销毁一个Globe图层
					/// </summary>
					/// <param name="layer">销毁工厂的产品</param>
					/// <returns>是否成功</returns>
					virtual ev_bool destroyInstance(EarthView::World::Spatial::Atlas::ILayer* layer);

				private:
					static EarthView::World::Spatial3D::Atlas::CEffectLayerFactory* mSingletonPtr;

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEffectLayerFactory();
				};

			}//namespace
		}
	}
}
#endif
