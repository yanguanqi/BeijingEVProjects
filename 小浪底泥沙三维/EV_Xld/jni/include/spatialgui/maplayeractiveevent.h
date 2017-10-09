#ifndef _MAP_LAYER_ACTIVE_EVENT_H_
#define _MAP_LAYER_ACTIVE_EVENT_H_

#include "core/event.h"
#include "spatialgui/spatialguiconfig.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Atlas{
				class IMap;
				class ILayer;
			}
		}
	}
}



namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace SystemUI{

				class EV_SPATIALGUI_DLL CMapLayerActiveEvent : public EarthView::World::Core::CEvent
				{
				public:
					CMapLayerActiveEvent(ev_uint16 type);
					virtual ~CMapLayerActiveEvent();
				ev_private:
					CMapLayerActiveEvent(EarthView::World::Core::CNameValuePairList *pList);
				public:
					ev_uint32 getID()const;
					ev_void setID(ev_uint32 id);

					EarthView::World::Spatial::Atlas::ILayer* getLayer()const;
					ev_void setLayer(EarthView::World::Spatial::Atlas::ILayer* ref_layer);

					//所属的地图
					EarthView::World::Spatial::Atlas::IMap* getMap()const;
					ev_void setMap(EarthView::World::Spatial::Atlas::IMap* ref_map);

					//所属的图层组
					EarthView::World::Spatial::Atlas::ILayer* getParentGroupLayer()const;
					ev_void setParentGroupLayer(EarthView::World::Spatial::Atlas::ILayer* ref_grouplayer);

					//拖拽到的节点的父节点
					EarthView::World::Spatial::Atlas::ILayer* getHoverParentGroupLayer() const;
					ev_void setHoverParentGroupLayer(EarthView::World::Spatial::Atlas::ILayer* hoverGroupLayer);

					ev_bool getResponseState()const;	
					ev_void setResponseState(ev_bool state);

					ev_int32 getOldIndex()const;
					ev_int32 getNewIndex()const;

					void setOldIndex(ev_int32 index);
					void setNewIndex(ev_int32 index);

					ev_bool isUpdateCache() const;
					ev_void setUpdateCache( _in ev_bool update );

					ev_bool isBatch();
					ev_void setBatch(ev_bool batch);
				protected:
					ev_uint32 mID;
					EarthView::World::Spatial::Atlas::IMap* mMap;
					EarthView::World::Spatial::Atlas::ILayer* mLayer;
					EarthView::World::Spatial::Atlas::ILayer* mGroupLayer;
					EarthView::World::Spatial::Atlas::ILayer* mHoverGroupLayer;

					ev_int32 mOldIndex;
					ev_int32 mNewIndex;

					ev_bool mResponseState;
					ev_bool mbUpdateCache;
					ev_bool mbBatch;
				};

			}//namespace
		}
	}
}
#endif
