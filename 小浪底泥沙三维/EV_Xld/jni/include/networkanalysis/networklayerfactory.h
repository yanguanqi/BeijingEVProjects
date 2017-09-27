#ifndef EARTHVIEW_WORLD_SPATIAL2D_NETWORKLAYER_FACTORY_H
#define EARTHVIEW_WORLD_SPATIAL2D_NETWORKLAYER_FACTORY_H

#include "networkanalysis/config.h"
#include "core/xml.h"
#include "spatialinterface/ilayer.h"

//// using namespace EarthView::World::Spatial::Atlas;

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Atlas{
				/// <summary>
				/// 网络要素集图层工厂
				/// </summary>
				class EV_NETWORKANALYSIS_DLL CNetworkLayerFactory : public EarthView::World::Spatial::Atlas::ILayerFactory
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CNetworkLayerFactory();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CNetworkLayerFactory();
				public:
					/// <summary>
					/// 获取图层类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回图层类型</returns>
					EarthView::World::Spatial::Atlas::EVLayerType getType()const;
					/// <summary>
					/// 创建图层实例
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回图层</returns>
					_extfree EarthView::World::Spatial::Atlas::ILayer* createInstance();
					/// <summary>
					/// 创建图层实例
					/// </summary>
					/// <param name="element">xml元素</param>
					/// <returns>返回图层</returns>
					_extfree EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 销毁图层实例
					/// </summary>
					/// <param name="element">图层</param>
					/// <returns>成功返回true；否则返回false</returns>
					ev_bool destroyInstance(EarthView::World::Spatial::Atlas::ILayer* layer);
				ev_private:
					CNetworkLayerFactory( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CNetworkLayerFactory );
				private:
					EarthView::World::Spatial::Atlas::EVLayerType m_eLayerType;
				};
				/// <summary>
				/// 网络分析 路径图层工厂
				/// </summary>
				class EV_NETWORKANALYSIS_DLL CRouteLayerFactory : public EarthView::World::Spatial::Atlas::ILayerFactory
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CRouteLayerFactory();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CRouteLayerFactory();
				public:
					/// <summary>
					/// 获取图层类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回图层类型</returns>
					EarthView::World::Spatial::Atlas::EVLayerType getType()const;
					/// <summary>
					/// 创建图层实例
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回图层</returns>
					_extfree EarthView::World::Spatial::Atlas::ILayer* createInstance();
					/// <summary>
					/// 创建图层实例
					/// </summary>
					/// <param name="element">xml元素</param>
					/// <returns>返回图层</returns>
					_extfree EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 销毁图层实例
					/// </summary>
					/// <param name="element">图层</param>
					/// <returns>成功返回true；否则返回false</returns>
					ev_bool destroyInstance(EarthView::World::Spatial::Atlas::ILayer* layer);
ev_private:
					CRouteLayerFactory( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CRouteLayerFactory );
				private:
					EarthView::World::Spatial::Atlas::EVLayerType m_eLayerType;
				};
			}
		}
	}
}
#endif