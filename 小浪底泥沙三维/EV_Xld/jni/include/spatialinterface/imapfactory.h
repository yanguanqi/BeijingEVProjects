#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_IMAPFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_IMAPFACTORY_H

#include "spatialinterface/config.h"
#include "core/xml.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Atlas{
				class IMap;
				class EV_INTERFACE_DLL IMapFactory : public EarthView::World::Core::CAllocatedObject
				{
				public:
					~IMapFactory();

				public:
					/// <summary>
					/// 从流中恢复出来一个map
					/// </summary>
					/// <param name="stream">map流</param>
					/// <returns>地图</returns>
					virtual EarthView::World::Spatial::Atlas::IMap * createMapFromStream( _in EarthView::World::Core::CDataStream &stream );
					/// <summary>
					/// 从XML中恢复出来一个map
					/// </summary>
					/// <param name="strXml">xml</param>
					/// <returns>地图</returns>
					virtual EarthView::World::Spatial::Atlas::IMap* createMapFromXML(const EVString& strXml);
					/// <summary>
					/// 从xml元素中恢复出来一个map
					/// </summary>
					/// <param name="element">xml要素</param>
					/// <returns>地图</returns>
                    virtual EarthView::World::Spatial::Atlas::IMap* createMapFromXMLElement(EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 创建一个地图实例,名称与参数一致
					/// </summary>
					/// <param name="mapName">地图名称</param>
					/// <returns>地图</returns>
					virtual EarthView::World::Spatial::Atlas::IMap* createMap(const EVString& mapName);
					/// <summary>
					/// 销毁地图的内存
					/// </summary>
					/// <param name="map">待删除的地图指针</param>
					/// <returns>如果销毁成功则返回true,反之则否</returns>
					virtual ev_bool destroyInstance(EarthView::World::Spatial::Atlas::IMap* map);
				ev_private:
					IMapFactory( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					IMapFactory();
					C_DISABLE_COPY( IMapFactory )
				};
			}
		}
	}
}
#endif


