#include "AnalysisToolManager.h"
#include "RectangleAnalysisTool.h"
#include "xld\WaterConservancyManager.h"
#include "PolygonAnalysisTool.h"

EarthView::Xld::CAnalysisToolManager* EarthView::Xld::CAnalysisToolManager::mpSingleton = NULL;


EarthView::Xld::CAnalysisToolManager::CAnalysisToolManager()
{

}

EarthView::Xld::CAnalysisToolManager::~CAnalysisToolManager()
{
	if(this->mpSingleton)
		delete mpSingleton;
}

EarthView::Xld::CAnalysisToolManager * EarthView::Xld::CAnalysisToolManager::GetSingletonPtr()
{
	if (!mpSingleton)
	{
		mpSingleton = new EarthView::Xld::CAnalysisToolManager();
	}
	return mpSingleton;
}

EarthView::Xld::CAnalysisToolManager& EarthView::Xld::CAnalysisToolManager::GetSingleton()
{
	if (!mpSingleton)
	{
		mpSingleton = new EarthView::Xld::CAnalysisToolManager();
	}
	return *mpSingleton;
}

void EarthView::Xld::CAnalysisToolManager::SetSectionQueryEnable(const ev_bool & isEnable)
{
}

void EarthView::Xld::CAnalysisToolManager::SetTerrainHeightQueryEnable(const ev_bool & isEnable)
{
}

void EarthView::Xld::CAnalysisToolManager::DrawRectBounds()
{
	if (!this->mAnalysisTool)
	{
		delete mAnalysisTool;
		mAnalysisTool = NULL;
	}
	mAnalysisTool =dynamic_cast<EarthView::Xld::RenderLib::Base::CBaseInteractiver*>(new EarthView::Xld::AnalysisTool::CRectangleAnalysisTool(EarthView::XldManager::CWaterConservancyManager::GetSingletonPtr()->mpGlobeControl));
}

void EarthView::Xld::CAnalysisToolManager::DrawStraightLine()
{
	if (!this->mAnalysisTool)
	{
		delete mAnalysisTool;
		mAnalysisTool = NULL;
	}
	mAnalysisTool = dynamic_cast<EarthView::Xld::RenderLib::Base::CBaseInteractiver*>(new EarthView::Xld::AnalysisTool::CRectangleAnalysisTool(EarthView::XldManager::CWaterConservancyManager::GetSingletonPtr()->mpGlobeControl));
}

void EarthView::Xld::CAnalysisToolManager::DrawPolyline()
{
	if (!this->mAnalysisTool)
	{
		delete mAnalysisTool;
		mAnalysisTool = NULL;
	}
	mAnalysisTool = dynamic_cast<EarthView::Xld::RenderLib::Base::CBaseInteractiver*>(new EarthView::Xld::AnalysisTool::CPolygonAnalysisTool(EarthView::XldManager::CWaterConservancyManager::GetSingletonPtr()->mpGlobeControl));
}
