using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Effect3D_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Effect3D::CWeatherControlPoint", new EarthView.World.Spatial.Effect3D.WeatherControlPointClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Effect3D::CWeatherTransformation", new EarthView.World.Spatial.Effect3D.WeatherTransformationClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Effect3D::CGlobeAtmosphere", new EarthView.World.Spatial.Effect3D.GlobeAtmosphereClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Effect3D::CGlobeAtmosphereProxy", new EarthView.World.Spatial.Effect3D.GlobeAtmosphereClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Effect3D::CAtmosphereFactory", new EarthView.World.Spatial.Effect3D.AtmosphereFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Effect3D::CAtmosphereFactoryProxy", new EarthView.World.Spatial.Effect3D.AtmosphereFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Effect3D::CCloudLayer", new EarthView.World.Spatial.Effect3D.CloudLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Effect3D::CGroundFog", new EarthView.World.Spatial.Effect3D.GroundFogClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Effect3D::CHeightRange", new EarthView.World.Spatial.Effect3D.HeightRangeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Spatial3D::IAtmosphere", new EarthView.World.Spatial.Spatial3D.IatmosphereClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Spatial3D::IAtmosphereProxy", new EarthView.World.Spatial.Spatial3D.IatmosphereClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Spatial3D::IAtmosphereFactory", new EarthView.World.Spatial.Spatial3D.IatmospherefactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Spatial3D::IAtmosphereFactoryProxy", new EarthView.World.Spatial.Spatial3D.IatmospherefactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Effect3D::CLightningManager", new EarthView.World.Spatial.Effect3D.LightningManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Effect3D::CMoon", new EarthView.World.Spatial.Effect3D.MoonClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Effect3D::CPrecipitation", new EarthView.World.Spatial.Effect3D.PrecipitationClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Effect3D::CRainSnowSystem", new EarthView.World.Spatial.Effect3D.RainSnowSystemClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Effect3D::CRealCloudLayer", new EarthView.World.Spatial.Effect3D.RealCloudLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Effect3D::CRegionAtmosphere", new EarthView.World.Spatial.Effect3D.RegionAtmosphereClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Effect3D::CRegionAtmosphereProxy", new EarthView.World.Spatial.Effect3D.RegionAtmosphereClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Effect3D::CStars", new EarthView.World.Spatial.Effect3D.StarsClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Effect3D::CSun", new EarthView.World.Spatial.Effect3D.SunClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Effect3D::CWind", new EarthView.World.Spatial.Effect3D.WindClassFactory());
	}
}

