#ifndef EARTHVIEW_WORLD_SPATIAL2D_ATLAS_MAPFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL2D_ATLAS_MAPFACTORY_H

#include "core/xml.h"
#include "spatial2datlasconfig.h"
#include "spatialinterface/imapfactory.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Atlas{
				/// <summary>
				/// 地图类工厂
				/// </summary>
				class EV_SPATIAL2DATLAS_DLL CMapFactory: public EarthView::World::Spatial::Atlas::IMapFactory
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CMapFactory();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CMapFactory();
				public:
					/// <summary>
					/// 从流中恢复出来一个map
					/// </summary>
					/// <param name="stream">map流</param>
					/// <returns>地图</returns>
					
					_extfree EarthView::World::Spatial::Atlas::IMap * createMapFromStream( _in EarthView::World::Core::CDataStream & stream );
					/// <summary>
					/// 从xml元素中恢复出来一个map
					/// </summary>
					/// <param name="element">xml要素</param>
					/// <returns>地图</returns>
					
					_extfree EarthView::World::Spatial::Atlas::IMap* createMapFromXMLElement(EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 创建一个地图实例,名称与参数一致
					/// </summary>
					/// <param name="mapName">地图名称</param>
					/// <returns>地图</returns>
					
					_extfree EarthView::World::Spatial::Atlas::IMap* createMap(const EVString& mapName);
					/// <summary>
					/// 销毁地图的内存
					/// </summary>
					/// <param name="map">待删除的地图指针</param>
					/// <returns>如果销毁成功则返回true,反之则否</returns>
					
					ev_bool destroyInstance(EarthView::World::Spatial::Atlas::IMap* map);
				ev_private:
					CMapFactory( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CMapFactory );
				};
			}
		}
	}
}
#endif
