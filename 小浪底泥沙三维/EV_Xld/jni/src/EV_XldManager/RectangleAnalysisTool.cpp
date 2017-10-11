#include "RectangleAnalysisTool.h"
#include "MoveLine.h"
#include "InteractiveEngine.h"
#include "RenderLibDataType.h"
#include "BillboardManager.h"
#include "spatialgui\guievent.h"

using namespace EarthView::Xld::RenderLib;
using namespace EarthView::World::Spatial::Math;

EarthView::Xld::AnalysisTool::CRectangleAnalysisTool::CRectangleAnalysisTool(EarthView::World::Spatial3D::Controls::CGlobeControl * globeControl):EarthView::Xld::RenderLib::Base::CBaseInteractiver(globeControl)
{
	this->mpMoveLine = new EarthView::Xld::RenderLib::CMoveLine("RectangleAnalysisTool", globeControl, EarthView::Xld::RenderLib::Rectangle);
}

EarthView::Xld::AnalysisTool::CRectangleAnalysisTool::~CRectangleAnalysisTool()
{
	if (!mpMoveLine)
	{
		delete mpMoveLine;
	}
}

bool EarthView::Xld::AnalysisTool::CRectangleAnalysisTool::HandleMouseUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
{
	CBaseInteractiver::HandleMouseUpEvent(guiEvent);
	if (!this->mIsDragging) 
	{
		if (guiEvent->getButton() == EarthView::World::Spatial::SystemUI::CGUIEvent::LEFT_MOUSE_BUTTON)
		{
			if (this->mMousePickState == ToFirst)
			{
				this->mMousePickState = ToSecond;
				ev_int32 x = guiEvent->getX();
				ev_int32 y = guiEvent->getY();
				EarthView::World::Spatial::Math::CVector3 geo = EarthView::Xld::AnalysisTool::CInteractiveEngine::GetSelectedGeoPostion(x, y, false);
				EarthView::Xld::RenderLib::CBilloardManager::getSingletonPtr()->CreateBillBoard("NorthWest Point", "RedPoint.png", this->mMousePickState + "NorthWest Point", geo.x, geo.y, geo.z);
				this->HandlePoint(&geo);
			}
			else if (this->mMousePickState == ToSecond)
			{
				this->mMousePickState = ToThird;
				ev_int32 x = guiEvent->getX();
				ev_int32 y = guiEvent->getY();
				EarthView::World::Spatial::Math::CVector3 geo = EarthView::Xld::AnalysisTool::CInteractiveEngine::GetSelectedGeoPostion(x, y, false);
				EarthView::Xld::RenderLib::CBilloardManager::getSingletonPtr()->CreateBillBoard("SouthEast Point", "RedPoint.png", "SouthEast Point", geo.x, geo.y, geo.z);
				this->HandlePoint(&geo);
			}
		
			
		}
	}
	return false;
}

bool EarthView::Xld::AnalysisTool::CRectangleAnalysisTool::HandleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
{
	if (this->mMousePickState != Over && this->mMousePickState != ToFirst)
	{
		if (guiEvent->getX() == mLastMouseDownScreenPos.x && guiEvent->getY() == mLastMouseDownScreenPos.y)
			return false;
		double lati = 0;
		double longi = 0;
		CVector3 v =  EarthView::Xld::AnalysisTool::CInteractiveEngine::GetSelectedGeoPostion(guiEvent->getX(), guiEvent->getY(), false);
		this->mpMoveLine->ChangeCurrent(v);
		
	}
	return false;
}

void EarthView::Xld::AnalysisTool::CRectangleAnalysisTool::HandlePoint(EarthView::World::Spatial::Math::CVector3* vPos)
{
	if (this->mMousePickState == ToSecond)
	{
		
		this->mLastGeoPos.x = vPos->x;
		this->mLastGeoPos.y = vPos->y;
		this->mLastGeoPos.z = vPos->z;
		this->mpMoveLine->SetCenter(mLastGeoPos);
	}
	else if (this->mMousePickState == ToThird)
	{
		//Vector3[] vectors = EarthView.UPGIS.RenderLib.GeometryExtensionLib.GetRectangle(m_lastGeoPos, point);//获得最大最小经纬度
		this->mpMoveLine->SetCenter(*vPos);
		//m_polygon.AddPolygon(vectors);
		//m_sender = vectors;
		CBaseInteractiver::EndPickOver();
		//HandlePointList.AddRange(vectors);

	}
}
