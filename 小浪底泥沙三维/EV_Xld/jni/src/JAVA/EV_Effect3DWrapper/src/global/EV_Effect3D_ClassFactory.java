package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_Effect3D_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CWeatherControlPoint", new com.earthview.world.spatial.effect3d.WeatherControlPointClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CWeatherTransformation", new com.earthview.world.spatial.effect3d.WeatherTransformationClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CGlobeAtmosphere", new com.earthview.world.spatial.effect3d.GlobeAtmosphereClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::JCGlobeAtmosphereProxy", new com.earthview.world.spatial.effect3d.GlobeAtmosphereClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CAtmosphereFactory", new com.earthview.world.spatial.effect3d.AtmosphereFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::JCAtmosphereFactoryProxy", new com.earthview.world.spatial.effect3d.AtmosphereFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CCloudLayer", new com.earthview.world.spatial.effect3d.CloudLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CGroundFog", new com.earthview.world.spatial.effect3d.GroundFogClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CHeightRange", new com.earthview.world.spatial.effect3d.HeightRangeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Spatial3D::IAtmosphere", new com.earthview.world.spatial.spatial3d.IatmosphereClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Spatial3D::JIAtmosphereProxy", new com.earthview.world.spatial.spatial3d.IatmosphereClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Spatial3D::IAtmosphereFactory", new com.earthview.world.spatial.spatial3d.IatmospherefactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Spatial3D::JIAtmosphereFactoryProxy", new com.earthview.world.spatial.spatial3d.IatmospherefactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CLightningManager", new com.earthview.world.spatial.effect3d.LightningManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CMoon", new com.earthview.world.spatial.effect3d.MoonClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CPrecipitation", new com.earthview.world.spatial.effect3d.PrecipitationClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CRainSnowSystem", new com.earthview.world.spatial.effect3d.RainSnowSystemClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CRealCloudLayer", new com.earthview.world.spatial.effect3d.RealCloudLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CRegionAtmosphere", new com.earthview.world.spatial.effect3d.RegionAtmosphereClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::JCRegionAtmosphereProxy", new com.earthview.world.spatial.effect3d.RegionAtmosphereClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CStars", new com.earthview.world.spatial.effect3d.StarsClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CSun", new com.earthview.world.spatial.effect3d.SunClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CWind", new com.earthview.world.spatial.effect3d.WindClassFactory());
	}
}

