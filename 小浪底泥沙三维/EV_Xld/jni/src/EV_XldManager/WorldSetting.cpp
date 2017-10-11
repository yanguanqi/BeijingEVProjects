#include "WorldSetting.h"
#include "..\..\include\globecontrol\globecontrol.h"



EarthView::Xld::CWorldSetting* EarthView::Xld::CWorldSetting::mpSinglton = NULL;

void EarthView::Xld::CWorldSetting::Initialize(EarthView::World::Spatial3D::Controls::CGlobeControl * gc, EVString runtimePath)
{
	this->mpGlobeControl = gc;
	this->mCurrentRuntimePath = runtimePath;
}

EarthView::Xld::CWorldSetting::CWorldSetting()
{
	this->mWaterSurfaceKMLObjectName = "systemwatersurface";
	this->mRiverRangeShpName = "xldextent.shp";
	this->mWaterSurfaceKMLName = "system.kml";
	this->mpAppAtlas = new EarthView::World::Utilities::AppAtlas();
	this->mpAppDataSource = new EarthView::World::Utilities::AppDataSource();
	this->mpDataSourceOption = new EarthView::World::Utilities::DataSourceOption();
	this->mpKmlTreeManager = new EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager();
}

EarthView::Xld::CWorldSetting::~CWorldSetting()
{
}

EarthView::Xld::CWorldSetting* EarthView::Xld::CWorldSetting::GetSingtonPtr()
{
	if (!EarthView::Xld::CWorldSetting::mpSinglton)
	{
		mpSinglton = new EarthView::Xld::CWorldSetting();
	}
	return mpSinglton;
}




