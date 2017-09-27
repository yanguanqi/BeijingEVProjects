#ifndef _MAP_OPERATION_EVENT_H_
#define _MAP_OPERATION_EVENT_H_

#include "core/event.h"
#include "spatialgui/spatialguiconfig.h"
namespace EarthView{ namespace World{namespace Spatial{namespace Atlas{
	class ILayer;
	class IMap;
}}}}
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace SystemUI{
				class EV_SPATIALGUI_DLL CMapOperationEvent : public EarthView::World::Core::CEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="type">事件类型</param>
					/// <returns></returns>
					CMapOperationEvent( _in ev_uint16 type );
					~CMapOperationEvent();

				public:
					/// <summary>
					/// 设置地图操作的map对象
					/// </summary>
					/// <param name="map">地图指针</param>
					/// <returns></returns>
					ev_void setMap( _in EarthView::World::Spatial::Atlas::IMap* ref_map );
					/// <summary>
					/// 获取与事件相关联的地图
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图</returns>
					EarthView::World::Spatial::Atlas::IMap* getMap();
					/// <summary>
					/// 设置与地图相关联的图层
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns></returns>
					ev_void setLayer(_in EarthView::World::Spatial::Atlas::ILayer* ref_layer );
					/// <summary>
					/// 获取与事件相关联的图层
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层</returns>
					EarthView::World::Spatial::Atlas::ILayer* getLayer();
				protected:
					EarthView::World::Spatial::Atlas::IMap* mpMap;
					EarthView::World::Spatial::Atlas::ILayer* mpLayer;
				ev_private:
					CMapOperationEvent( EarthView::World::Core::CNameValuePairList* pList );
				};
			}
		}
	}
}
#endif
