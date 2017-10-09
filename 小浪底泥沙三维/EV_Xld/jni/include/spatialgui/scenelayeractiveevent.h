#ifndef _SCENE_LAYER_ACTIVE_EVENT_H_
#define _SCENE_LAYER_ACTIVE_EVENT_H_

#include "core/event.h"
#include "spatialgui/spatialguiconfig.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Atlas{
				class IScene;
				class ILayer;
			}
		}
	}
}



namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace SystemUI{

				class EV_SPATIALGUI_DLL CSceneLayerActiveEvent : public EarthView::World::Core::CEvent
				{
				public:
					CSceneLayerActiveEvent(ev_uint16 type);
					~CSceneLayerActiveEvent();
				ev_private:
					CSceneLayerActiveEvent(EarthView::World::Core::CNameValuePairList *pList);
				public:
					ev_uint32 getID()const;
					ev_void setID(ev_uint32 id);

					EarthView::World::Spatial::Atlas::ILayer* getLayer()const;
					ev_void setLayer(EarthView::World::Spatial::Atlas::ILayer* ref_layer);

					//所属的地图
					EarthView::World::Spatial::Atlas::IScene* getScene()const;
					ev_void setScene(EarthView::World::Spatial::Atlas::IScene* ref_scene);

					//所属的图层组
					EarthView::World::Spatial::Atlas::ILayer* getParentGroupLayer()const;
					ev_void setParentGroupLayer(EarthView::World::Spatial::Atlas::ILayer* ref_grouplayer);

					ev_bool getResponseState()const;	
					ev_void setResponseState(ev_bool state);

					ev_int32 getOldIndex()const;
					ev_int32 getNewIndex()const;

					void setOldIndex(ev_int32 index);
					void setNewIndex(ev_int32 index);

				protected:
					ev_uint32 mID;
					EarthView::World::Spatial::Atlas::IScene* mScene;
					EarthView::World::Spatial::Atlas::ILayer* mLayer;
					EarthView::World::Spatial::Atlas::ILayer* mGroupLayer;

					ev_int32 mOldIndex;
					ev_int32 mNewIndex;

					ev_bool mResponseState;
				};

			}//namespace
		}
	}
}
#endif
