#include "InteractiveEngine.h"
#include "xld\WaterConservancyManager.h"
#include "spatial3dcalculator\spatialcalculator.h"

EarthView::World::Spatial::Math::CVector3  EarthView::Xld::AnalysisTool::CInteractiveEngine::GetSelectedWorldPostion(const ev_real64& screenX , const ev_real64& screenY, const ev_bool& isPickOnModel)
{	
	if (!isPickOnModel) 
	{
		EarthView::World::Spatial::Math::CVector3 v = EarthView::Xld::AnalysisTool::CInteractiveEngine::GetSelectedGeoPostion(screenX, screenY, isPickOnModel);
		return EarthView::World::Spatial3D::Utility::CSpatialCalculator::sphericalToCartesian(v.y, v.x, v.z + EarthView::World::Spatial::Math::CMath::EARTH_RADIUS);
	}
	else 
	{
		return EarthView::Xld::AnalysisTool::CInteractiveEngine::GetSelectedModelWrdPosition(screenX, screenY);
	}
}

EarthView::World::Spatial::Math::CVector3  EarthView::Xld::AnalysisTool::CInteractiveEngine::GetSelectedGeoPostion(const ev_real64& screenX, const ev_real64& screenY, const ev_bool& isPickOnModel)
{
	if (!isPickOnModel) 
	{
		ev_real64 lati = 0;
		ev_real64 longi = 0;
		EarthView::XldManager::CWaterConservancyManager::GetSingletonPtr()->mpGlobeControl->pickingRayIntersection(screenX, screenY, lati, longi);
		ev_real64 alti = EarthView::XldManager::CWaterConservancyManager::GetSingletonPtr()->mpGlobeControl->getSceneManager()->getHeightAt(lati, longi,-1);
		return EarthView::World::Spatial::Math::CVector3(longi, lati, alti);
	}
	else 
	{
		return EarthView::Xld::AnalysisTool::CInteractiveEngine::GetSelectedModelGeoPosition(screenX, screenY);
	}
}

EarthView::World::Spatial::Math::CVector3 EarthView::Xld::AnalysisTool::CInteractiveEngine::GetSelectedModelGeoPosition(const ev_real64 & screenX, const ev_real64 & screenY)
{
	return EarthView::World::Spatial::Math::CVector3();
}
EarthView::World::Spatial::Math::CVector3 EarthView::Xld::AnalysisTool::CInteractiveEngine::GetSelectedModelWrdPosition(const ev_real64 & screenX, const ev_real64 & screenY)
{
	return EarthView::World::Spatial::Math::CVector3();
}