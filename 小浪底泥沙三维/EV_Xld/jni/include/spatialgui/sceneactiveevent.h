#ifndef _SCENE_ACTIVE_EVENT_H_
#define _SCENE_ACTIVE_EVENT_H_

#include "core/event.h"
#include "spatialgui/spatialguiconfig.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Atlas{
				class IScene;
			}
		}
	}
}



namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace SystemUI{

				class EV_SPATIALGUI_DLL CSceneActiveEvent : public EarthView::World::Core::CEvent
				{
				public:
					CSceneActiveEvent(ev_uint16 type);
					~CSceneActiveEvent();
				ev_private:
					CSceneActiveEvent(EarthView::World::Core::CNameValuePairList *pList);
				public:
					ev_uint32 getID()const;
					ev_void setID(ev_uint32 id);

					EarthView::World::Spatial::Atlas::IScene* getScene()const;
					ev_void setScene(EarthView::World::Spatial::Atlas::IScene* ref_map);

					void setName(const EVString& name);

					const EVString& getName() const;

					ev_bool getResponseState()const;	
					ev_void setResponseState(ev_bool state);

				protected:
					ev_uint32 mID;
					EarthView::World::Spatial::Atlas::IScene* mScene;
					ev_bool mResponseState;
					EVString	mSceneName;
				};

			}//namespace
		}
	}
}
#endif
