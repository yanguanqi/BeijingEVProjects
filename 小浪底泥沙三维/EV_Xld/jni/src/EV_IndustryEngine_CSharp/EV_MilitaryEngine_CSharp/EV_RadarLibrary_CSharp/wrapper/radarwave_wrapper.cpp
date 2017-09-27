/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/militaryengine/radarlibrary/radarwave.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace MilitaryEngine
		{
			namespace RadarLibrary
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarWave_addRadarWave_void_EVString_CVector3_CVector3_double(void *pObjectXXXX, _in const char* texturePath, _in const void* topPos, _in const void* bottomPos, _in const double raidus )
				{
					EarthView::World::Core::ev_string texturePath1 = texturePath;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarWave* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarWave*) pObjectXXXX;
					ptrNativeObject->addRadarWave(texturePath1, *(EarthView::World::Spatial::Math::CVector3*)topPos, *(EarthView::World::Spatial::Math::CVector3*)bottomPos, raidus);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarWave_setRadarWaveMaterial_void_EVString_EVString_double(void *pObjectXXXX, _in const char* texturePath, _in const char* matName, _in const double waveSpeed )
				{
					EarthView::World::Core::ev_string texturePath1 = texturePath;
					EarthView::World::Core::ev_string matName1 = matName;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarWave* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarWave*) pObjectXXXX;
					ptrNativeObject->setRadarWaveMaterial(texturePath1, matName1, waveSpeed);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarWave_addAssignRadarWave_void_EVString_EVString_CVector3_CVector3_double(void *pObjectXXXX, _in const char* name, _in const char* matName, _in const void* topPos, _in const void* bottomPos, _in const double raidus )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Core::ev_string matName1 = matName;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarWave* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarWave*) pObjectXXXX;
					ptrNativeObject->addAssignRadarWave(name1, matName1, *(EarthView::World::Spatial::Math::CVector3*)topPos, *(EarthView::World::Spatial::Math::CVector3*)bottomPos, raidus);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarWave_updateRadarWave_void_EVString_EVString_bool_CVector3_CVector3_double(void *pObjectXXXX, _in const char* radarWaveName, _in const char* radarWaveMatName, _in const bool flag, _in const void* topPos, _in const void* bottomPos, _in const double raidus )
				{
					EarthView::World::Core::ev_string radarWaveName1 = radarWaveName;
					EarthView::World::Core::ev_string radarWaveMatName1 = radarWaveMatName;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarWave* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarWave*) pObjectXXXX;
					ptrNativeObject->updateRadarWave(radarWaveName1, radarWaveMatName1, flag, *(EarthView::World::Spatial::Math::CVector3*)topPos, *(EarthView::World::Spatial::Math::CVector3*)bottomPos, raidus);
				}
			}
		}
	}
}
