#include "BaseInteractiver.h"


EarthView::Xld::RenderLib::Base::CBaseInteractiver::CBaseInteractiver(ev_bool eventEnable[])
{
	this->mpTimer = new EarthView::World::gro

	this->mEvents[0] = eventEnable[0];
	this->mEvents[1] = eventEnable[1];
	this->mEvents[2] = eventEnable[2];
	this->mEvents[3] = eventEnable[3];
	this->Load();
}

EarthView::Xld::RenderLib::Base::CBaseInteractiver::~CBaseInteractiver()
{
	this->Unload();
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
		}
		break;
	case EarthView::World::Spatial::SystemUI::CGUIEvent::MOUSEUP:
		if(this->mEvents[0])
		{
		}
		break;
	case EarthView::World::Spatial::SystemUI::CGUIEvent::MOUSEDOUBLECLIK:
		if (this->mEvents[3])
		{
		}
		break;
	case EarthView::World::Spatial::SystemUI::CGUIEvent::MOUSEMOVE:
		if (this->mEvents[2])
		{
		}
		break;
	}
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

bool EarthView::Xld::RenderLib::Base::CBaseInteractiver::HandleMouseUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent * guiEvent)
{
	return false;
}

bool EarthView::Xld::RenderLib::Base::CBaseInteractiver::HandleMouseDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent * guiEvent)
{
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
