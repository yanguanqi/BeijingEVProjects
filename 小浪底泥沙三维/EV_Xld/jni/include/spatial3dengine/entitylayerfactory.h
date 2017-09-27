#ifndef EARTHVIEW_WORLD_SPATIAL3D_ENTITYLAYERFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL3D_ENTITYLAYERFACTORY_H

 
#include "spatial3dengine/spatial3dengineconfig.h"
#include "spatialinterface/ilayer.h"
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
		namespace Spatial3D{
			namespace Atlas{
				

				class EV_Spatial3DEngine_DLL CEntityLayerFactory : public EarthView::World::Spatial::Atlas::ILayerFactory
				{
				private:
					static EarthView::World::Spatial3D::Atlas::CEntityLayerFactory* mSingletonPtr;
				private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEntityLayerFactory();
				ev_private:

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEntityLayerFactory(EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEntityLayerFactory();
					

				public:
					/// <summary>
					/// 返回单例的数据源工厂句柄
					/// </summary>
					/// <returns>CModelDataSourceFactory，失败则返回NULL</returns>
					static EarthView::World::Spatial3D::Atlas::CEntityLayerFactory* getSingletonPtr();

					/// <summary>
					/// 释放单例的数据源工厂句柄
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					static void releaseSingletonPtr();

					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>Globe图层的类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;

					/// <summary>
					/// 从工程文件创建图层实例
					/// </summary>
					/// <param name="name">xml数据</param>
					/// <returns>Globe工厂的产品</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);

					/// <summary>
					/// 从内存创建图层实例
					/// </summary>
					/// <param name="name">图层的名字</param>
					/// <param name="ds">数据集对象</param>
					/// <returns>Globe工厂的产品</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(const EVString& name, EarthView::World::Spatial::GeoDataset::IDataset* ds);

					/// <summary>
					/// 销毁一个Globe图层
					/// </summary>
					/// <param name="layer">销毁工厂的产品</param>
					/// <returns>是否成功</returns>
					virtual ev_bool destroyInstance(EarthView::World::Spatial::Atlas::ILayer* layer);
				};

			}//namespace
		}
	}
}
#endif
