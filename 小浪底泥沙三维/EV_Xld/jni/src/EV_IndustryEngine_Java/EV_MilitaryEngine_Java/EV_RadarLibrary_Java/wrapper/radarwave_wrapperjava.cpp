/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/militaryengine/radarlibrary/radarwave.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace MilitaryEngine
		{
			namespace RadarLibrary
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarWave_addRadarWave_1EVString_1CVector3_1CVector3_1double(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring texturePath_j, jlong topPos_j, jlong bottomPos_j, jdouble raidus_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* texturePath_ch = (const ev_char*)__env->GetStringUTFChars(texturePath_j,JNI_FALSE);
					const EVString texturePath = texturePath_ch;
					__env->ReleaseStringUTFChars(texturePath_j, (const char *)texturePath_ch);
					#else
					const ev_wchar* texturePath_ch = (const ev_wchar*)__env->GetStringChars(texturePath_j,JNI_FALSE);
					const EVString texturePath = texturePath_ch;
					__env->ReleaseStringChars(texturePath_j, (const jchar *)texturePath_ch);
					#endif
					const EarthView::World::Spatial::Math::CVector3 &topPos = *(EarthView::World::Spatial::Math::CVector3*) topPos_j;
					const EarthView::World::Spatial::Math::CVector3 &bottomPos = *(EarthView::World::Spatial::Math::CVector3*) bottomPos_j;
					const double raidus = (double) raidus_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarWave *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarWave*) pObjXXXX;
					pObjectX->addRadarWave(texturePath, topPos, bottomPos, raidus);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarWave_setRadarWaveMaterial_1EVString_1EVString_1double(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring texturePath_j, jstring matName_j, jdouble waveSpeed_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* texturePath_ch = (const ev_char*)__env->GetStringUTFChars(texturePath_j,JNI_FALSE);
					const EVString texturePath = texturePath_ch;
					__env->ReleaseStringUTFChars(texturePath_j, (const char *)texturePath_ch);
					#else
					const ev_wchar* texturePath_ch = (const ev_wchar*)__env->GetStringChars(texturePath_j,JNI_FALSE);
					const EVString texturePath = texturePath_ch;
					__env->ReleaseStringChars(texturePath_j, (const jchar *)texturePath_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* matName_ch = (const ev_char*)__env->GetStringUTFChars(matName_j,JNI_FALSE);
					const EVString matName = matName_ch;
					__env->ReleaseStringUTFChars(matName_j, (const char *)matName_ch);
					#else
					const ev_wchar* matName_ch = (const ev_wchar*)__env->GetStringChars(matName_j,JNI_FALSE);
					const EVString matName = matName_ch;
					__env->ReleaseStringChars(matName_j, (const jchar *)matName_ch);
					#endif
					const double waveSpeed = (double) waveSpeed_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarWave *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarWave*) pObjXXXX;
					pObjectX->setRadarWaveMaterial(texturePath, matName, waveSpeed);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarWave_addAssignRadarWave_1EVString_1EVString_1CVector3_1CVector3_1double(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring matName_j, jlong topPos_j, jlong bottomPos_j, jdouble raidus_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* matName_ch = (const ev_char*)__env->GetStringUTFChars(matName_j,JNI_FALSE);
					const EVString matName = matName_ch;
					__env->ReleaseStringUTFChars(matName_j, (const char *)matName_ch);
					#else
					const ev_wchar* matName_ch = (const ev_wchar*)__env->GetStringChars(matName_j,JNI_FALSE);
					const EVString matName = matName_ch;
					__env->ReleaseStringChars(matName_j, (const jchar *)matName_ch);
					#endif
					const EarthView::World::Spatial::Math::CVector3 &topPos = *(EarthView::World::Spatial::Math::CVector3*) topPos_j;
					const EarthView::World::Spatial::Math::CVector3 &bottomPos = *(EarthView::World::Spatial::Math::CVector3*) bottomPos_j;
					const double raidus = (double) raidus_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarWave *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarWave*) pObjXXXX;
					pObjectX->addAssignRadarWave(name, matName, topPos, bottomPos, raidus);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarWave_updateRadarWave_1EVString_1EVString_1bool_1CVector3_1CVector3_1double(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring radarWaveName_j, jstring radarWaveMatName_j, jboolean flag_j, jlong topPos_j, jlong bottomPos_j, jdouble raidus_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* radarWaveName_ch = (const ev_char*)__env->GetStringUTFChars(radarWaveName_j,JNI_FALSE);
					const EVString radarWaveName = radarWaveName_ch;
					__env->ReleaseStringUTFChars(radarWaveName_j, (const char *)radarWaveName_ch);
					#else
					const ev_wchar* radarWaveName_ch = (const ev_wchar*)__env->GetStringChars(radarWaveName_j,JNI_FALSE);
					const EVString radarWaveName = radarWaveName_ch;
					__env->ReleaseStringChars(radarWaveName_j, (const jchar *)radarWaveName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* radarWaveMatName_ch = (const ev_char*)__env->GetStringUTFChars(radarWaveMatName_j,JNI_FALSE);
					const EVString radarWaveMatName = radarWaveMatName_ch;
					__env->ReleaseStringUTFChars(radarWaveMatName_j, (const char *)radarWaveMatName_ch);
					#else
					const ev_wchar* radarWaveMatName_ch = (const ev_wchar*)__env->GetStringChars(radarWaveMatName_j,JNI_FALSE);
					const EVString radarWaveMatName = radarWaveMatName_ch;
					__env->ReleaseStringChars(radarWaveMatName_j, (const jchar *)radarWaveMatName_ch);
					#endif
					const bool flag = (bool) flag_j;
					const EarthView::World::Spatial::Math::CVector3 &topPos = *(EarthView::World::Spatial::Math::CVector3*) topPos_j;
					const EarthView::World::Spatial::Math::CVector3 &bottomPos = *(EarthView::World::Spatial::Math::CVector3*) bottomPos_j;
					const double raidus = (double) raidus_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarWave *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarWave*) pObjXXXX;
					pObjectX->updateRadarWave(radarWaveName, radarWaveMatName, flag, topPos, bottomPos, raidus);
				}
			}
		}
	}
}
