#include "PolygonAnalysisTool.h"
#include "RenderLibDataType.h"
#include "mathengine\mathutility.h"
#include "BillboardManager.h"

using namespace EarthView::Xld::RenderLib;
using namespace EarthView::World::Spatial::Math;

EarthView::Xld::AnalysisTool::CPolygonAnalysisTool::CPolygonAnalysisTool(EarthView::World::Spatial3D::Controls::CGlobeControl * globeControl) :EarthView::Xld::RenderLib::Base::CBaseInteractiver(globeControl)
{
	this->mpMoveLine = new EarthView::Xld::RenderLib::CMoveLine("PolygonAnalysisLine", globeControl, EarthView::Xld::RenderLib::Polygon);

}

EarthView::Xld::AnalysisTool::CPolygonAnalysisTool::~CPolygonAnalysisTool()
{
	if (this->mpMoveLine)
	{
		delete this->mpMoveLine;
	}
}

bool EarthView::Xld::AnalysisTool::CPolygonAnalysisTool::HandleMouseUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent * guiEvent)
{
	CBaseInteractiver::HandleMouseUpEvent(guiEvent);
	if (this->mIsDragging) return false;
	if (guiEvent->getButton() == EarthView::World::Spatial::SystemUI::CGUIEvent::LEFT_MOUSE_BUTTON)
	{
		CMousePickState lastState = this->mMousePickState;
		switch (this->mMousePickState)
		{
		case ToFirst:
		{
			this->mMousePickState = ToSecond;
			break;
		}
		case ToSecond:
		{
			this->mMousePickState = ToThird;
			break;
		}
		case ToThird:
		{
			this->mMousePickState = Picking;
			break;
		}
		}
		if (this->mMousePickState != ToFirst && this->mMousePickState !=Over)
		{
			ev_real64 lati = 0;
			ev_real64 longi = 0;
			this->mpGlobeControl->pickingRayIntersection(guiEvent->getX(), guiEvent->getY(), lati, longi);
			double alti = this->mpGlobeControl->getSceneManager()->getBestHeightAt(lati, longi);
			CVector3 geo(longi, lati, alti);
			EarthView::Xld::RenderLib::CBilloardManager::getSingletonPtr()->CreateBillBoard(this->GetHandlePoints()->size() + "pl", "RedPoint.png", this->GetHandlePoints()->size()+"", geo.x, geo.y, geo.z);

			HandlePoint(&geo);
		}
	}
	return false;
}

bool EarthView::Xld::AnalysisTool::CPolygonAnalysisTool::HandleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent * guiEvent)
{
	if (this->mMousePickState != Over && this->mMousePickState != ToFirst)
	{
		if (guiEvent->getX() == this->mLastMouseDownScreenPos.x && guiEvent->getY() == this->mLastMouseDownScreenPos.y)
			return false;
		double lati = 0;
		double longi = 0;
		this->mpGlobeControl->pickingRayIntersection(guiEvent->getX(), guiEvent->getY(), lati, longi);
		double alti = this->mpGlobeControl->getSceneManager()->getBestHeightAt(lati,longi);
		CVector3 v(longi, lati, alti);
		this->mpMoveLine->ChangeCurrent(v);
	}
	return false;
}

void EarthView::Xld::AnalysisTool::CPolygonAnalysisTool::HandlePoint(EarthView::World::Spatial::Math::CVector3 * vPos)
{
	this->mLastGeoPos.x = vPos->x;
	mLastGeoPos.y = vPos->y;
	mLastGeoPos.z = vPos->z;
	//临时世界坐标信息
	CVector3 worldPos = CMathUtility::sphericalToCartesian(vPos->y, vPos->x, vPos->z + CMath::EARTH_RADIUS);
	if (this->mMousePickState == CMousePickState::ToSecond)
	{
		this->mpMoveLine->SetCenter(*vPos);
		this->GetHandlePoints()->push_back(new CVector3(vPos->x, vPos->y, vPos->z));
		//构建线对象和节点
		//this->mCenterWrdPos = CMathUtility::sphericalToCartesian(vPos->y, vPos->x,vPos->z + CMath::EARTH_RADIUS);
		
		/*if (this.m_sceneNode != null)
		{
			this.m_sceneNode.SetPosition(this.m_centerWrdPos);
		}
		MovablePoint mp = new MovablePoint(worldPos - this.m_centerWrdPos, m_lineColor, worldPos - this.m_centerWrdPos);
		m_polyline.AddPoint(mp);

		mp.Dispose(true);
		mp = null;*/
	}
	else if (this->mMousePickState == CMousePickState::ToThird)
	{
		this->GetHandlePoints()->push_back(new CVector3(vPos->x,vPos->y,vPos->z));
		this->mpMoveLine->SetCenter(*vPos);
		//线对象挂接到场景节点
		/*MovablePoint mp = new MovablePoint(worldPos - this.m_centerWrdPos, m_lineColor, worldPos - this.m_centerWrdPos);
		m_polyline.AddPoint(mp);
		m_polyline.Create();
		m_polyline.SetMaterial(WorldSetting.DefaultLineMaterialNmae);
		this.m_sceneNode.AttachObject(this.m_polyline);

		mp.Dispose(true);
		mp = null;*/
	}
	else if (this->mMousePickState == CMousePickState::Picking)
	{
		this->GetHandlePoints()->push_back(new CVector3(vPos->x, vPos->y, vPos->z));
		this->mpMoveLine->SetCenter(*vPos);
		/*MovablePoint mp = new MovablePoint(worldPos - this.m_centerWrdPos, m_lineColor, worldPos - this.m_centerWrdPos);
		m_polyline.AddPoint(mp);
		m_polyline.Create();
		m_polyline.SetMaterial(WorldSetting.DefaultLineMaterialNmae);
		mp.Dispose(true);
		mp = null;*/
	}
}

bool EarthView::Xld::AnalysisTool::CPolygonAnalysisTool::HandleMouseDoubleClickEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent * guiEvent)
{
	//return EarthView::Xld::RenderLib::Base::CBaseInteractiver::HandleMouseDoubleClickEvent(guiEvent);
	

	return false;

}
