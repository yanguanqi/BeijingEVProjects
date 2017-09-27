using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_RadarLibrary_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.MsradarcharacterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacterProxy", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.MsradarcharacterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.MsradarobjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObjectProxy", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.MsradarobjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.ParadarcharacterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacterProxy", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.ParadarcharacterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.ParadarobjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObjectProxy", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.ParadarobjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.Paradarobject.CellClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.SectionPointClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPointProxy", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.SectionPointClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.SectionPointsClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPointsProxy", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.SectionPointsClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarSectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSectionProxy", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarSectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.ShadeAngleDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDataProxy", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.ShadeAngleDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.ShadeAngleDatasClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatasProxy", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.ShadeAngleDatasClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarCharacterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacterProxy", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarCharacterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObjectProxy", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::CRadarAlertListener", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject.RadarAlertListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::CRadarAlertListenerProxy", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject.RadarAlertListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarWave", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarWaveClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.ScaleVectorListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CTerrainShade", new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.TerrainShadeClassFactory());
	}
}

