/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "xld/WaterConservancyManager.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace XldManager
	{
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_xldmanager_WaterConservancyManager_GetSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
		{
			EarthView::XldManager::CWaterConservancyManager* __values1 = EarthView::XldManager::CWaterConservancyManager::GetSingletonPtr();
			jlong __values1_j = (jlong) __values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_xldmanager_WaterConservancyManager_Initialise_1CGlobeControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_globecontrol_j)
		{
			EarthView::World::Spatial3D::Controls::CGlobeControl *ref_globecontrol = (EarthView::World::Spatial3D::Controls::CGlobeControl*) ref_globecontrol_j;
			EarthView::XldManager::CWaterConservancyManager *pObjectX = (EarthView::XldManager::CWaterConservancyManager*) pObjXXXX;
			pObjectX->Initialise(ref_globecontrol);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_xldmanager_WaterConservancyManager_CreateTerrain_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring grdFileName_j)
		{
			#if EV_PLATFORM == EV_PLATFORM_ANDROID
			const ev_char* grdFileName_ch = (const ev_char*)__env->GetStringUTFChars(grdFileName_j,JNI_FALSE);
			const EVString grdFileName = grdFileName_ch;
			__env->ReleaseStringUTFChars(grdFileName_j, (const char *)grdFileName_ch);
			#else
			const ev_wchar* grdFileName_ch = (const ev_wchar*)__env->GetStringChars(grdFileName_j,JNI_FALSE);
			const EVString grdFileName = grdFileName_ch;
			__env->ReleaseStringChars(grdFileName_j, (const jchar *)grdFileName_ch);
			#endif
			EarthView::XldManager::CWaterConservancyManager *pObjectX = (EarthView::XldManager::CWaterConservancyManager*) pObjXXXX;
			pObjectX->CreateTerrain(grdFileName);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_xldmanager_WaterConservancyManager_GetTerrainNames_1ev_1int32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint terrainIndex_j, jstring terrainNames_j)
		{
			const ev_int32 terrainIndex = (ev_int32) terrainIndex_j;
			#if EV_PLATFORM == EV_PLATFORM_ANDROID
			const ev_char* terrainNames_ch = (const ev_char*)__env->GetStringUTFChars(terrainNames_j,JNI_FALSE);
			EVString terrainNames = terrainNames_ch;
			__env->ReleaseStringUTFChars(terrainNames_j, (const char *)terrainNames_ch);
			#else
			const ev_wchar* terrainNames_ch = (const ev_wchar*)__env->GetStringChars(terrainNames_j,JNI_FALSE);
			EVString terrainNames = terrainNames_ch;
			__env->ReleaseStringChars(terrainNames_j, (const jchar *)terrainNames_ch);
			#endif
			EarthView::XldManager::CWaterConservancyManager *pObjectX = (EarthView::XldManager::CWaterConservancyManager*) pObjXXXX;
			pObjectX->GetTerrainNames(terrainIndex, terrainNames);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_xldmanager_WaterConservancyManager_SetTerrainVisible_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring terrainName_j, jboolean isVisible_j)
		{
			#if EV_PLATFORM == EV_PLATFORM_ANDROID
			const ev_char* terrainName_ch = (const ev_char*)__env->GetStringUTFChars(terrainName_j,JNI_FALSE);
			const EVString terrainName = terrainName_ch;
			__env->ReleaseStringUTFChars(terrainName_j, (const char *)terrainName_ch);
			#else
			const ev_wchar* terrainName_ch = (const ev_wchar*)__env->GetStringChars(terrainName_j,JNI_FALSE);
			const EVString terrainName = terrainName_ch;
			__env->ReleaseStringChars(terrainName_j, (const jchar *)terrainName_ch);
			#endif
			const ev_bool isVisible = (const ev_bool) isVisible_j;
			EarthView::XldManager::CWaterConservancyManager *pObjectX = (EarthView::XldManager::CWaterConservancyManager*) pObjXXXX;
			pObjectX->SetTerrainVisible(terrainName, isVisible);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_xldmanager_WaterConservancyManager_SetTerrainOffset_1EVString_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring terrainName_j, jdouble offset_j)
		{
			#if EV_PLATFORM == EV_PLATFORM_ANDROID
			const ev_char* terrainName_ch = (const ev_char*)__env->GetStringUTFChars(terrainName_j,JNI_FALSE);
			const EVString terrainName = terrainName_ch;
			__env->ReleaseStringUTFChars(terrainName_j, (const char *)terrainName_ch);
			#else
			const ev_wchar* terrainName_ch = (const ev_wchar*)__env->GetStringChars(terrainName_j,JNI_FALSE);
			const EVString terrainName = terrainName_ch;
			__env->ReleaseStringChars(terrainName_j, (const jchar *)terrainName_ch);
			#endif
			const ev_real64 offset = (ev_real64) offset_j;
			EarthView::XldManager::CWaterConservancyManager *pObjectX = (EarthView::XldManager::CWaterConservancyManager*) pObjXXXX;
			pObjectX->SetTerrainOffset(terrainName, offset);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_xldmanager_WaterConservancyManager_MarkPosistion_1EVString_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring imgeFileName_j, jdouble longi_j, jdouble lati_j, jdouble alti_j)
		{
			#if EV_PLATFORM == EV_PLATFORM_ANDROID
			const ev_char* imgeFileName_ch = (const ev_char*)__env->GetStringUTFChars(imgeFileName_j,JNI_FALSE);
			const EVString imgeFileName = imgeFileName_ch;
			__env->ReleaseStringUTFChars(imgeFileName_j, (const char *)imgeFileName_ch);
			#else
			const ev_wchar* imgeFileName_ch = (const ev_wchar*)__env->GetStringChars(imgeFileName_j,JNI_FALSE);
			const EVString imgeFileName = imgeFileName_ch;
			__env->ReleaseStringChars(imgeFileName_j, (const jchar *)imgeFileName_ch);
			#endif
			ev_real64 longi = (ev_real64) longi_j;
			ev_real64 lati = (ev_real64) lati_j;
			ev_real64 alti = (ev_real64) alti_j;
			EarthView::XldManager::CWaterConservancyManager *pObjectX = (EarthView::XldManager::CWaterConservancyManager*) pObjXXXX;
			pObjectX->MarkPosistion(imgeFileName, longi, lati, alti);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_xldmanager_WaterConservancyManager_CreateWaterSurface_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble waterHeight_j)
		{
			const ev_real64 waterHeight = (const ev_real64) waterHeight_j;
			EarthView::XldManager::CWaterConservancyManager *pObjectX = (EarthView::XldManager::CWaterConservancyManager*) pObjXXXX;
			pObjectX->CreateWaterSurface(waterHeight);
		}
		extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_xldmanager_WaterConservancyManager_GetTerrainCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::XldManager::CWaterConservancyManager *pObjectX = (EarthView::XldManager::CWaterConservancyManager*) pObjXXXX;
			ev_uint64 __values1 = pObjectX->GetTerrainCount();
			EarthView::World::Core::ev_string __values1_ch;
			__values1_ch<<__values1;
			jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
			return __values1_j;
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_xldmanager_WaterConservancyManager_get_1mpGlobeControl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
		{
			EarthView::XldManager::CWaterConservancyManager *pObjectX = (EarthView::XldManager::CWaterConservancyManager*)pObjXXXX;
			jlong __values1_j = (jlong)(pObjectX->mpGlobeControl);
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_xldmanager_WaterConservancyManager_set_1mpGlobeControl_1CGlobeControl(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
		{
			EarthView::XldManager::CWaterConservancyManager *pObjectX = (EarthView::XldManager::CWaterConservancyManager*)pObjXXXX;
			pObjectX->mpGlobeControl = (EarthView::World::Spatial3D::Controls::CGlobeControl*) __values1_j;
		}
	}
}
