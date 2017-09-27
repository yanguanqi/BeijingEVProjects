#ifndef _OPERATIN_OBSERVER_H
#define _OPERATIN_OBSERVER_H
#include "mapcontrol/operationmanager.h"
#include "core/event.h"
#include "core/object.h"
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
class COperationObserver : public IIndexObserver
{
public:
	COperationObserver()
	{
		mpSender = new EarthView::World::Core::CEventObject;
	}
	~COperationObserver()
	{
		delete mpSender;
	}
	virtual ev_void onIndexChanged()
	{
		EarthView::World::Core::CEvent e( EarthView::World::Core::CEvent::User,mpSender );
		EarthView::World::Core::CEventDispacher::sendEvent( NULL, &e );
	}
	EarthView::World::Core::CEventObject *mpSender;
};
			}
		}
	}
}
#endif