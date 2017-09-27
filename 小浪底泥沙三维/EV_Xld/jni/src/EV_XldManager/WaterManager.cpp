#include "WaterManager.h"


EarthView::Xld::RenderLib::CWaterManager* EarthView::Xld::RenderLib::CWaterManager::mpSingleton = NULL;

EarthView::Xld::RenderLib::CWaterManager::CWaterManager()
{

}
EarthView::Xld::RenderLib::CWaterManager::~CWaterManager()
{
}

void EarthView::Xld::RenderLib::CWaterManager::CreateWaterSurface(const ev_real64& waterHeight)
{

}

EarthView::Xld::RenderLib::CWaterManager * EarthView::Xld::RenderLib::CWaterManager::GetSingletonPtr()
{
	if (!mpSingleton)
	{
		mpSingleton = new EarthView::Xld::RenderLib::CWaterManager();
	}
	return mpSingleton;
}


