#include "BaseInteractiver.h"
#include "graphic/WIN32/timerimp.h"
#include "mathengine/vector3.h"
#include "xld/WaterConservancyManager.h"
#include "globecontrol/globecontrol.h"
#include "core/event.h"

using namespace EarthView::World::Spatial::Math;
using namespace EarthView::World::Spatial3D::Controls;

EarthView::Xld::RenderLib::Base::CBaseInteractiver::CBaseInteractiver(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl,ev_bool eventEnable[])
{
	this->mpTimer = new EarthView::World::Graphic::CTimer();
	this->mIsDragging = false;
	this->mIsLoaded = false;
	this->mIsMouseDown = false;
	this->mLastMouseUpTime = 0;
	this->mCurrentGeoPos = CVector3::ZERO;
	this->mLastGeoPos = CVector3::ZERO;
	this->mLastMouseDownScreenPos = CVector2::ZERO;
	this->mMousePickState = CMousePickState::ToFirst;
	this->mEvents[0] = eventEnable[0];
	this->mEvents[1] = eventEnable[1];
	this->mEvents[2] = eventEnable[2];
	this->mEvents[3] = eventEnable[3];
	this->mpGlobeControl = globeControl;
	this->Load();
}

EarthView::Xld::RenderLib::Base::CBaseInteractiver::CBaseInteractiver(EarthView::World::Spatial3D::Controls::CGlobeControl * globeControl)
{
	this->mEvents[0] = true;
	this->mEvents[1] = true;
	this->mEvents[2] = true;
	this->mEvents[3] = true;
	CBaseInteractiver(globeControl, this->mEvents);
}

EarthView::Xld::RenderLib::Base::CBaseInteractiver::~CBaseInteractiver()
{
	this->Unload();
	this->mpGlobeControl = NULL;
	if (!this->mpTimer)
	{
		delete this->mpTimer;
	}
	if (mHandlePoints.size() > 0)
	{
		for each (CVector3* var in mHandlePoints)
		{
			delete var;
		}
		mHandlePoints.clear();
	}
}

ev_bool EarthView::Xld::RenderLib::Base::CBaseInteractiver::handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
{
	switch (guiEvent->getEventType())
	{
	default:
		break;
	case EarthView::World::Spatial::SystemUI::CGUIEvent::MOUSEDOWN:
		if (this->mEvents[1])
		{
			return this->HandleMouseDoubleClickEvent(guiEvent);
		}
		break;
	case EarthView::World::Spatial::SystemUI::CGUIEvent::MOUSEUP:
		if(this->mEvents[0])
		{
			return this->HandleMouseUpEvent(guiEvent);
		}
		break;
	case EarthView::World::Spatial::SystemUI::CGUIEvent::MOUSEDOUBLECLIK:
		if (this->mEvents[3])
		{
			return this->HandleMouseDoubleClickEvent(guiEvent);
		}
		break;
	case EarthView::World::Spatial::SystemUI::CGUIEvent::MOUSEMOVE:
		if (this->mEvents[2])
		{
			return this->HandleMouseMoveEvent(guiEvent);
		}
		break;
	}
	return false;
}

vector<EarthView::World::Spatial::Math::CVector3*>* EarthView::Xld::RenderLib::Base::CBaseInteractiver::GetHandlePoints()
{
	return &(this->mHandlePoints);
}

void EarthView::Xld::RenderLib::Base::CBaseInteractiver::Load()
{
	if(this->mpGlobeControl)
		this->mpGlobeControl->addGuiHandler(this);
}

void EarthView::Xld::RenderLib::Base::CBaseInteractiver::Unload()
{
	if (this->mpGlobeControl)
		this->mpGlobeControl->removeHandler(this);
}

void EarthView::Xld::RenderLib::Base::CBaseInteractiver::SetInteractiveEnable(ev_bool mouseDown, ev_bool mouseUp, ev_bool mouseMove, ev_bool mouseDoubleClick)
{

}

bool EarthView::Xld::RenderLib::Base::CBaseInteractiver::HandleMouseUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent * guiEvent)
{
	this->mIsMouseDown = false;
	float dx = this->mLastMouseDownScreenPos.x - guiEvent->getX();
	float dy = this->mLastMouseDownScreenPos.y - guiEvent->getY();
	if (dx * dx + dy * dy > 5)
	{
		this->mIsDragging = true;
	}
	else 
	{
		this->mIsDragging = false;

	}
	return !(this->mIsDragging);
}

bool EarthView::Xld::RenderLib::Base::CBaseInteractiver::HandleMouseDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent * guiEvent)
{
	this->mLastMouseDownScreenPos.x = guiEvent->getX();
	this->mLastMouseDownScreenPos.y = guiEvent->getY();
	this->mpTimer->reset();
	this->mIsMouseDown = true;
	return false;
}

bool EarthView::Xld::RenderLib::Base::CBaseInteractiver::HandleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent * guiEvent)
{
	
	return false;
}

bool EarthView::Xld::RenderLib::Base::CBaseInteractiver::HandleMouseDoubleClickEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent * guiEvent)
{
	return false;
}

void EarthView::Xld::RenderLib::Base::CBaseInteractiver::HandlePoint(EarthView::World::Spatial::Math::CVector3* vPos)
{
	AddPoint(vPos);
}

void EarthView::Xld::RenderLib::Base::CBaseInteractiver::EndPickOver()
{
	this->mMousePickState = CMousePickState::Over;
	EarthView::World::Core::CEventDispatcher::sendEvent(mpEventObj, mpEvent);
}

void EarthView::Xld::RenderLib::Base::CBaseInteractiver::AddPoint(EarthView::World::Spatial::Math::CVector3* handledPos)
{
	mHandlePoints.push_back(handledPos);
}
