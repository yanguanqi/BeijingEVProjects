package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_RadarLibrary_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter", new com.earthview.industryengine.militaryengine.radarlibrary.MsradarcharacterClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::JCMSRadarCharacterProxy", new com.earthview.industryengine.militaryengine.radarlibrary.MsradarcharacterClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject", new com.earthview.industryengine.militaryengine.radarlibrary.MsradarobjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::JCMSRadarObjectProxy", new com.earthview.industryengine.militaryengine.radarlibrary.MsradarobjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter", new com.earthview.industryengine.militaryengine.radarlibrary.ParadarcharacterClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::JCPARadarCharacterProxy", new com.earthview.industryengine.militaryengine.radarlibrary.ParadarcharacterClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject", new com.earthview.industryengine.militaryengine.radarlibrary.ParadarobjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::JCPARadarObjectProxy", new com.earthview.industryengine.militaryengine.radarlibrary.ParadarobjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell", new com.earthview.industryengine.militaryengine.radarlibrary.Paradarobject.CellClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint", new com.earthview.industryengine.militaryengine.radarlibrary.SectionPointClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::JCSectionPointProxy", new com.earthview.industryengine.militaryengine.radarlibrary.SectionPointClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints", new com.earthview.industryengine.militaryengine.radarlibrary.SectionPointsClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::JCSectionPointsProxy", new com.earthview.industryengine.militaryengine.radarlibrary.SectionPointsClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection", new com.earthview.industryengine.militaryengine.radarlibrary.RadarSectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::JCRadarSectionProxy", new com.earthview.industryengine.militaryengine.radarlibrary.RadarSectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData", new com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::JCShadeAngleDataProxy", new com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas", new com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleDatasClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::JCShadeAngleDatasProxy", new com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleDatasClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter", new com.earthview.industryengine.militaryengine.radarlibrary.RadarCharacterClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::JCRadarCharacterProxy", new com.earthview.industryengine.militaryengine.radarlibrary.RadarCharacterClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject", new com.earthview.industryengine.militaryengine.radarlibrary.RadarObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::JCRadarObjectProxy", new com.earthview.industryengine.militaryengine.radarlibrary.RadarObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::CRadarAlertListener", new com.earthview.industryengine.militaryengine.radarlibrary.RadarObject.RadarAlertListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::JCRadarAlertListenerProxy", new com.earthview.industryengine.militaryengine.radarlibrary.RadarObject.RadarAlertListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarWave", new com.earthview.industryengine.militaryengine.radarlibrary.RadarWaveClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList", new com.earthview.industryengine.militaryengine.radarlibrary.ScaleVectorListClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CTerrainShade", new com.earthview.industryengine.militaryengine.radarlibrary.TerrainShadeClassFactory());
	}
}

