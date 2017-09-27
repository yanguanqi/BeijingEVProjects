#ifndef _MAP_ACTIVE_EVENT_H_
#define _MAP_ACTIVE_EVENT_H_

#include "core/event.h"
#include "spatialgui/spatialguiconfig.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Atlas{
				class IMap;
				class ISpatialControl;
			}
		}
	}
}



namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace SystemUI{
				class EV_SPATIALGUI_DLL CMapActiveEvent : public EarthView::World::Core::CEvent
				{
				public:
					CMapActiveEvent(ev_uint16 type);
					~CMapActiveEvent();
				ev_private:
					CMapActiveEvent(EarthView::World::Core::CNameValuePairList *pList);
				public:
					ev_uint32 getID()const;
					ev_void setID(ev_uint32 id);

					ev_void setControl( _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl );
					EarthView::World::Spatial::Atlas::ISpatialControl* getControl() const;

					EarthView::World::Spatial::Atlas::IMap* getMap()const;
					ev_void setMap(EarthView::World::Spatial::Atlas::IMap* ref_map);

					ev_void setName(const EVString& name);
					EVString getName() const;

					ev_bool getResponseState()const;	
					ev_void setResponseState(ev_bool state);

				protected:
					ev_uint32 mID;
					EarthView::World::Spatial::Atlas::ISpatialControl* mpControl;
					EarthView::World::Spatial::Atlas::IMap* mMap;
					EVString mapName;
					ev_bool mResponseState;
				};
				class EV_SPATIALGUI_DLL CMapLayersAddedEvent : public EarthView::World::Core::CEvent
				{
				public:
					CMapLayersAddedEvent(ev_uint16 type);
					virtual ~CMapLayersAddedEvent();
				ev_private:
					CMapLayersAddedEvent(EarthView::World::Core::CNameValuePairList *pList);
				public:
					ev_bool getFlag()const;
					ev_void setFlag(ev_bool flag);

					//所属的地图
					EarthView::World::Spatial::Atlas::IMap* getMap()const;
					ev_void setMap(EarthView::World::Spatial::Atlas::IMap* ref_map);

				protected:
					EarthView::World::Spatial::Atlas::IMap* mMap;
					ev_bool mFlag;
				};
			}//namespace
		}
	}
}
#endif
