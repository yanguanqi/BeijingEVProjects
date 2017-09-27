#ifndef EARTHVIEW_WORLD_SPATIAL2D_ATLAS_LAYERFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL2D_ATLAS_LAYERFACTORY_H

#include "core/xml.h"
#include "spatialinterface/ilayer.h"
#include "spatial2datlasconfig.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Atlas{
				class EV_SPATIAL2DATLAS_DLL CLayerFactory: public EarthView::World::Spatial::Atlas::ILayerFactory
				{
				public:
					CLayerFactory();
					~CLayerFactory();
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
					CLayerFactory( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CLayerFactory );
				private:
					EarthView::World::Spatial::Atlas::EVLayerType m_eLayerType;
				};
			}
		}
	}
}
#endif
