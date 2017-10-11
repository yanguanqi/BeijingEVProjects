

#ifndef WORLDSETTING_H_
#define WORLDSETTING_H_

#include "globecontrol\globecontrol.h"
#include "xld\WaterConservancyManager.h"
#include "WaterConservancyDataEngine.h"
#include "WaterManager.h"
#include "spatialframeworkproxy\appatlas.h"
#include "spatialframeworkproxy\appdatasource.h"
#include "spatialframeworkproxy\datasourceoption.h"
#include "spatial3dproxy\kmltreemanager.h"

namespace EarthView
{
	namespace Xld
	{
		class CWorldSetting
		{
			
		public:
			static EarthView::Xld::CWorldSetting* GetSingtonPtr();
			~CWorldSetting();
			
			EarthView::World::Spatial3D::Controls::CGlobeControl* mpGlobeControl;
			EVString mRiverRangeShpName;
			EVString mCurrentRuntimePath;
			EVString mWaterSurfaceKMLName;
			EVString mWaterSurfaceKMLObjectName;
			EarthView::World::Utilities::AppAtlas* mpAppAtlas;
			EarthView::World::Utilities::AppDataSource* mpAppDataSource;
			EarthView::World::Utilities::DataSourceOption* mpDataSourceOption;
			EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* mpKmlTreeManager;
			EarthView::World::Spatial::Geometry::ISpatialReference* mpGlobeSpatialReference;
			EarthView::World::Spatial::Geometry::ISpatialReference* mpGISDataSpatialReference;
			void Initialize(EarthView::World::Spatial3D::Controls::CGlobeControl* gc, EVString runtimePath);
		protected:
			static EarthView::Xld::CWorldSetting* mpSinglton;
		private:
			CWorldSetting();
		};
	}
}

#endif


