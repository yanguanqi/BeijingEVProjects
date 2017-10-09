#ifndef _SELECTIONCHANGED_EVENT_H_
#define _SELECTIONCHANGED_EVENT_H_

#include "core/event.h"
#include "spatialgui/spatialguiconfig.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Atlas{
				class ISpatialControl;
				class ILayer;
				class ILayerSelection;
			}
		}
	}
}



namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace SystemUI{

				class EV_SPATIALGUI_DLL CSelectionChangedEvent : public EarthView::World::Core::CEvent
				{
				public:
					CSelectionChangedEvent(ev_uint16 type);
					~CSelectionChangedEvent();
				ev_private:
					CSelectionChangedEvent(EarthView::World::Core::CNameValuePairList *pList);
				public:
					ev_uint32 getID()const;
					ev_void setID(ev_uint32 id);

					EarthView::World::Spatial::Atlas::ISpatialControl* getSpatialControl()const;
					ev_void setSpatialControl(EarthView::World::Spatial::Atlas::ISpatialControl* ref_control);
					
					ev_uint32 getLayerCount() const;
					EarthView::World::Spatial::Atlas::ILayer* getLayer(ev_uint32 index) const;
					ev_bool addLayer(EarthView::World::Spatial::Atlas::ILayer* ref_layer);
					ev_bool removeLayer(EarthView::World::Spatial::Atlas::ILayer* layer);
					ev_void clear();
					ev_int32 existLayer(EarthView::World::Spatial::Atlas::ILayer* layer)const;

					ev_bool getResponseState()const;	
					ev_void setResponseState(ev_bool state);

				protected:
					ev_uint32 mID;
					EarthView::World::Spatial::Atlas::ISpatialControl* mControl;
					ev_bool mResponseState;

					typedef list<EarthView::World::Spatial::Atlas::ILayer*> Layers;
					Layers mLayers;
				};

			}//namespace
		}
	}
}
#endif
