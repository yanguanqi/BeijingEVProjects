#include "WorldSetting.h"
#include "globecontrol\globecontrol.h"
#include "spatialobject\coordinatesystem\coordinatefactory.h"
#include "spatialobject\coordinatesystem\coordinatesysenumtype.h"



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
	this->mpGlobeSpatialReference = EarthView::World::Spatial::Utility::CCoordinateSystemFactory::createCoordSys(EarthView::World::Spatial::Utility::GEO_Beijing54);
	this->mpGISDataSpatialReference = EarthView::World::Spatial::Utility::CCoordinateSystemFactory::createCoordSys(EarthView::World::Spatial::Utility::Beijing_1954_Gauss_Kruger_Zone_19N);
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




