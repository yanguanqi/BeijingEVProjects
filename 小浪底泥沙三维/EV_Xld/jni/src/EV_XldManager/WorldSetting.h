

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
#include "mathengine\vector4.h"

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
			ev_real32 mGlobalExaggerationFactor;
			EVString mCurrentRuntimePath;

			EVString mRiverRangeShpName;
			EVString mWaterSurfaceKMLName;
			EVString mWaterSurfaceKMLObjectName;
			
			ev_real64 mWaveDensity;
			ev_real64 mFlowSpeed ;
			ev_real64 mWaterDeep;
			ev_real64 mWavePower;
			ev_real64 mWaveDirection;
			ev_real64 mLightPower;
			EarthView::World::Spatial::Math::CVector4* mWaterColor;
			ev_bool mEnableUnderwater;
			ev_bool mEnableReflect;
			ev_bool mEnableReflectSky;
			ev_bool mEnableRefract;

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


