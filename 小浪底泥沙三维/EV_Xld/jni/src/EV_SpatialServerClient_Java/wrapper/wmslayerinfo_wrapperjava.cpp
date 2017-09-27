/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/wmslayerinfo.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsscalehint_Create(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Spatial::OGCWMSScaleHint *pObjectX = new EarthView::World::Spatial::OGCWMSScaleHint();
				return (jlong) pObjectX;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsscalehint_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::OGCWMSScaleHint *pObjectX = (EarthView::World::Spatial::OGCWMSScaleHint*)pObjXXXX;
				delete pObjectX;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_Ogcwmsscalehint_get_1dfMax_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::OGCWMSScaleHint *pObjectX = (EarthView::World::Spatial::OGCWMSScaleHint*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->dfMax);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsscalehint_set_1dfMax_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial::OGCWMSScaleHint *pObjectX = (EarthView::World::Spatial::OGCWMSScaleHint*)pObjXXXX;
				pObjectX->dfMax = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_Ogcwmsscalehint_get_1dfMin_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::OGCWMSScaleHint *pObjectX = (EarthView::World::Spatial::OGCWMSScaleHint*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->dfMin);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsscalehint_set_1dfMin_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial::OGCWMSScaleHint *pObjectX = (EarthView::World::Spatial::OGCWMSScaleHint*)pObjXXXX;
				pObjectX->dfMin = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsauthorityurl_getAuthorityName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMSAuthorityURL *pObjectX = (EarthView::World::Spatial::COGCWMSAuthorityURL*) pObjXXXX;
				const EVString& __values1 = pObjectX->getAuthorityName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsauthorityurl_getHref_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMSAuthorityURL *pObjectX = (EarthView::World::Spatial::COGCWMSAuthorityURL*) pObjXXXX;
				const EVString& __values1 = pObjectX->getHref();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsauthorityurl_getIDValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMSAuthorityURL *pObjectX = (EarthView::World::Spatial::COGCWMSAuthorityURL*) pObjXXXX;
				const EVString& __values1 = pObjectX->getIDValue();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsauthorityurl_setIDValue_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::Spatial::COGCWMSAuthorityURL *pObjectX = (EarthView::World::Spatial::COGCWMSAuthorityURL*) pObjXXXX;
				pObjectX->setIDValue(value);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsauthorityurl_setAuthorityName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::Spatial::COGCWMSAuthorityURL *pObjectX = (EarthView::World::Spatial::COGCWMSAuthorityURL*) pObjXXXX;
				pObjectX->setAuthorityName(value);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsauthorityurl_setHref_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::Spatial::COGCWMSAuthorityURL *pObjectX = (EarthView::World::Spatial::COGCWMSAuthorityURL*) pObjXXXX;
				pObjectX->setHref(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsauthorityurl_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCWMSAuthorityURL *pObjectX = (EarthView::World::Spatial::COGCWMSAuthorityURL*) pObjXXXX;
				EarthView::World::Spatial::COGCWMSAuthorityURL* __values1 = pObjectX->clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsattribution_getTitle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMSAttribution *pObjectX = (EarthView::World::Spatial::COGCWMSAttribution*) pObjXXXX;
				const EVString& __values1 = pObjectX->getTitle();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsattribution_setTitle_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::Spatial::COGCWMSAttribution *pObjectX = (EarthView::World::Spatial::COGCWMSAttribution*) pObjXXXX;
				pObjectX->setTitle(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsattribution_getOnlineHref_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMSAttribution *pObjectX = (EarthView::World::Spatial::COGCWMSAttribution*) pObjXXXX;
				const EVString& __values1 = pObjectX->getOnlineHref();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsattribution_setOnlineHref_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::Spatial::COGCWMSAttribution *pObjectX = (EarthView::World::Spatial::COGCWMSAttribution*) pObjXXXX;
				pObjectX->setOnlineHref(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsattribution_getLogoWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCWMSAttribution *pObjectX = (EarthView::World::Spatial::COGCWMSAttribution*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getLogoWidth();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsattribution_setLogoWidth_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_uint32 value = (ev_uint32) value_j;
				EarthView::World::Spatial::COGCWMSAttribution *pObjectX = (EarthView::World::Spatial::COGCWMSAttribution*) pObjXXXX;
				pObjectX->setLogoWidth(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsattribution_getLogoHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCWMSAttribution *pObjectX = (EarthView::World::Spatial::COGCWMSAttribution*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getLogoHeight();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsattribution_setLogoHeight_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_uint32 value = (ev_uint32) value_j;
				EarthView::World::Spatial::COGCWMSAttribution *pObjectX = (EarthView::World::Spatial::COGCWMSAttribution*) pObjXXXX;
				pObjectX->setLogoHeight(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsattribution_getLogoFormat_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMSAttribution *pObjectX = (EarthView::World::Spatial::COGCWMSAttribution*) pObjXXXX;
				const EVString& __values1 = pObjectX->getLogoFormat();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsattribution_setLogoFormat_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::Spatial::COGCWMSAttribution *pObjectX = (EarthView::World::Spatial::COGCWMSAttribution*) pObjXXXX;
				pObjectX->setLogoFormat(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsattribution_getLogoHref_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMSAttribution *pObjectX = (EarthView::World::Spatial::COGCWMSAttribution*) pObjXXXX;
				const EVString& __values1 = pObjectX->getLogoHref();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsattribution_setLogoHref_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::Spatial::COGCWMSAttribution *pObjectX = (EarthView::World::Spatial::COGCWMSAttribution*) pObjXXXX;
				pObjectX->setLogoHref(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsattribution_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCWMSAttribution *pObjectX = (EarthView::World::Spatial::COGCWMSAttribution*) pObjXXXX;
				EarthView::World::Spatial::COGCWMSAttribution* __values1 = pObjectX->clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsdimensioninfo_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjXXXX;
				const EVString& __values1 = pObjectX->getName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsdimensioninfo_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::Spatial::COGCWMSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjXXXX;
				pObjectX->setName(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsdimensioninfo_getUnits_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjXXXX;
				const EVString& __values1 = pObjectX->getUnits();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsdimensioninfo_setUnits_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::Spatial::COGCWMSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjXXXX;
				pObjectX->setUnits(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsdimensioninfo_getUnitSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjXXXX;
				const EVString& __values1 = pObjectX->getUnitSymbol();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsdimensioninfo_setUnitSymbol_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::Spatial::COGCWMSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjXXXX;
				pObjectX->setUnitSymbol(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsdimensioninfo_getDefaultValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjXXXX;
				const EVString& __values1 = pObjectX->getDefaultValue();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsdimensioninfo_setDefaultValue_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::Spatial::COGCWMSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjXXXX;
				pObjectX->setDefaultValue(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsdimensioninfo_getMultipleValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjXXXX;
				const EVString& __values1 = pObjectX->getMultipleValue();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsdimensioninfo_setMultipleValue_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::Spatial::COGCWMSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjXXXX;
				pObjectX->setMultipleValue(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsdimensioninfo_getNearestValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjXXXX;
				const EVString& __values1 = pObjectX->getNearestValue();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsdimensioninfo_setNearestValue_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::Spatial::COGCWMSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjXXXX;
				pObjectX->setNearestValue(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsdimensioninfo_getCurrentValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjXXXX;
				const EVString& __values1 = pObjectX->getCurrentValue();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsdimensioninfo_setCurrentValue_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::Spatial::COGCWMSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjXXXX;
				pObjectX->setCurrentValue(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsdimensioninfo_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCWMSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjXXXX;
				EarthView::World::Spatial::COGCWMSDimensionInfo* __values1 = pObjectX->clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCWMSLayerInfoProxy : public EarthView::World::Spatial::CWMSLayerInfo
			{
			 private:
				EarthView::World::Core::ev_string m_getSRS_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getSRSCount_void_callback;
				EarthView::World::Core::ev_string m_getDataFormat_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getDataFormatCount_void_callback;
				EarthView::World::Core::ev_string m_getInfoFormat_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getInfoFormatCount_void_callback;
				EarthView::World::Core::ev_string m_getBoundingBoxCount_void_callback;
				EarthView::World::Core::ev_string m_getBoundingBoxRef_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getStyleCount_void_callback;
				EarthView::World::Core::ev_string m_getStyle_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getStyleDetailsRef_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getDatasetType_void_callback;
				EarthView::World::Core::ev_string m_getName_void_callback;
				EarthView::World::Core::ev_string m_getEnvelopeRef_void_callback;
				EarthView::World::Core::ev_string m_getSpatialReference_void_callback;
			public:
				JCWMSLayerInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CWMSLayerInfo(pList)
				{
				}
				ev_void unRegisterJavaReference()
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
					if(__gr != NULL)
					{
						delete __gr;
						this->registerJavaReference(NULL);
					}
				}
			public:
				void register_getSRS_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSRS_ev_uint32_callback = __method;
				}
				void register_getSRSCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSRSCount_void_callback = __method;
				}
				void register_getDataFormat_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDataFormat_ev_uint32_callback = __method;
				}
				void register_getDataFormatCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDataFormatCount_void_callback = __method;
				}
				void register_getInfoFormat_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInfoFormat_ev_uint32_callback = __method;
				}
				void register_getInfoFormatCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInfoFormatCount_void_callback = __method;
				}
				void register_getBoundingBoxCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getBoundingBoxCount_void_callback = __method;
				}
				void register_getBoundingBoxRef_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getBoundingBoxRef_ev_uint32_callback = __method;
				}
				void register_getStyleCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getStyleCount_void_callback = __method;
				}
				void register_getStyle_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getStyle_ev_uint32_callback = __method;
				}
				void register_getStyleDetailsRef_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getStyleDetailsRef_ev_uint32_callback = __method;
				}
				void register_getDatasetType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDatasetType_void_callback = __method;
				}
				void register_getName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getName_void_callback = __method;
				}
				void register_getEnvelopeRef_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getEnvelopeRef_void_callback = __method;
				}
				void register_getSpatialReference_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSpatialReference_void_callback = __method;
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if (this->_gRef != NULL && this->m_getEnvelopeRef_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getEnvelopeRef_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Geometry::IEnvelope *__values1 = (const EarthView::World::Spatial::Geometry::IEnvelope*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CWMSLayerInfo::getEnvelopeRef();
					}
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if (this->_gRef != NULL && this->m_getSpatialReference_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getSpatialReference_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Geometry::ISpatialReference *__values1 = (EarthView::World::Spatial::Geometry::ISpatialReference*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CWMSLayerInfo::getSpatialReference();
					}
				}
				virtual const EVString getSRS(ev_uint32 index) const
				{
					if (this->_gRef != NULL && this->m_getSRS_ev_uint32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getSRS_ev_uint32_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						const EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						const EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CWMSLayerInfo::getSRS(index);
					}
				}
				virtual ev_uint32 getSRSCount() const
				{
					if (this->_gRef != NULL && this->m_getSRSCount_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getSRSCount_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CWMSLayerInfo::getSRSCount();
					}
				}
				virtual ev_uint32 getStyleCount() const
				{
					if (this->_gRef != NULL && this->m_getStyleCount_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getStyleCount_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CWMSLayerInfo::getStyleCount();
					}
				}
				virtual const EVString getStyle(ev_uint32 index) const
				{
					if (this->_gRef != NULL && this->m_getStyle_ev_uint32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getStyle_ev_uint32_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						const EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						const EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CWMSLayerInfo::getStyle(index);
					}
				}
				virtual const EarthView::World::Spatial::COGCWebServiceStyle* getStyleDetailsRef(ev_uint32 index) const
				{
					if (this->_gRef != NULL && this->m_getStyleDetailsRef_ev_uint32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getStyleDetailsRef_ev_uint32_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::COGCWebServiceStyle *__values1 = (const EarthView::World::Spatial::COGCWebServiceStyle*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CWMSLayerInfo::getStyleDetailsRef(index);
					}
				}
				virtual ev_uint32 getBoundingBoxCount() const
				{
					if (this->_gRef != NULL && this->m_getBoundingBoxCount_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getBoundingBoxCount_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CWMSLayerInfo::getBoundingBoxCount();
					}
				}
				virtual const EarthView::World::Spatial::COGCWebServiceBoundingBox* getBoundingBoxRef(ev_uint32 index) const
				{
					if (this->_gRef != NULL && this->m_getBoundingBoxRef_ev_uint32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getBoundingBoxRef_ev_uint32_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::COGCWebServiceBoundingBox *__values1 = (const EarthView::World::Spatial::COGCWebServiceBoundingBox*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CWMSLayerInfo::getBoundingBoxRef(index);
					}
				}
				virtual const EVString getDataFormat(ev_uint32 index) const
				{
					if (this->_gRef != NULL && this->m_getDataFormat_ev_uint32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getDataFormat_ev_uint32_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						const EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						const EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CWMSLayerInfo::getDataFormat(index);
					}
				}
				virtual ev_uint32 getDataFormatCount() const
				{
					if (this->_gRef != NULL && this->m_getDataFormatCount_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getDataFormatCount_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CWMSLayerInfo::getDataFormatCount();
					}
				}
				virtual const EVString getInfoFormat(ev_uint32 index) const
				{
					if (this->_gRef != NULL && this->m_getInfoFormat_ev_uint32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getInfoFormat_ev_uint32_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						const EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						const EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CWMSLayerInfo::getInfoFormat(index);
					}
				}
				virtual ev_uint32 getInfoFormatCount() const
				{
					if (this->_gRef != NULL && this->m_getInfoFormatCount_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getInfoFormatCount_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CWMSLayerInfo::getInfoFormatCount();
					}
				}
				virtual EVString getName() const
				{
					if (this->_gRef != NULL && this->m_getName_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getName_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CWMSLayerInfo::getName();
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if (this->_gRef != NULL && this->m_getDatasetType_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getDatasetType_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = (EarthView::World::Spatial::GeoDataset::EVDatasetType) __values1_j;
						return __values1;
					}
					else
					{
						return this->CWMSLayerInfo::getDatasetType();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCWMSLayerInfoProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getEnvelopeRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWMSLayerInfoProxy))
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::CWMSLayerInfo::getEnvelopeRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->getEnvelopeRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_register_1getEnvelopeRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMSLayerInfoProxy *pObjectX = (JCWMSLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getEnvelopeRef_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getEnvelopeRef_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getEnvelopeRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::CWMSLayerInfo::getEnvelopeRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getSpatialReference_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWMSLayerInfoProxy))
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::CWMSLayerInfo::getSpatialReference();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->getSpatialReference();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_register_1getSpatialReference_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMSLayerInfoProxy *pObjectX = (JCWMSLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSpatialReference_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSpatialReference_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getSpatialReference_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::CWMSLayerInfo::getSpatialReference();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getSRS_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWMSLayerInfoProxy))
				{
					const EVString __values1 = pObjectX->EarthView::World::Spatial::CWMSLayerInfo::getSRS(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					const EVString __values1 = pObjectX->getSRS(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_register_1getSRS_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMSLayerInfoProxy *pObjectX = (JCWMSLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSRS_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSRS_ev_uint32_callback", "(J)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getSRS_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				const EVString __values1 = pObjectX->EarthView::World::Spatial::CWMSLayerInfo::getSRS(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getSRSCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWMSLayerInfoProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CWMSLayerInfo::getSRSCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->getSRSCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_register_1getSRSCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMSLayerInfoProxy *pObjectX = (JCWMSLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSRSCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSRSCount_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getSRSCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CWMSLayerInfo::getSRSCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getStyleCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWMSLayerInfoProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CWMSLayerInfo::getStyleCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->getStyleCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_register_1getStyleCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMSLayerInfoProxy *pObjectX = (JCWMSLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getStyleCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getStyleCount_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getStyleCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CWMSLayerInfo::getStyleCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getStyle_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWMSLayerInfoProxy))
				{
					const EVString __values1 = pObjectX->EarthView::World::Spatial::CWMSLayerInfo::getStyle(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					const EVString __values1 = pObjectX->getStyle(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_register_1getStyle_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMSLayerInfoProxy *pObjectX = (JCWMSLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getStyle_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getStyle_ev_uint32_callback", "(J)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getStyle_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				const EVString __values1 = pObjectX->EarthView::World::Spatial::CWMSLayerInfo::getStyle(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getStyleDetailsRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWMSLayerInfoProxy))
				{
					const EarthView::World::Spatial::COGCWebServiceStyle* __values1 = pObjectX->EarthView::World::Spatial::CWMSLayerInfo::getStyleDetailsRef(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::COGCWebServiceStyle* __values1 = pObjectX->getStyleDetailsRef(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_register_1getStyleDetailsRef_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMSLayerInfoProxy *pObjectX = (JCWMSLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getStyleDetailsRef_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getStyleDetailsRef_ev_uint32_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getStyleDetailsRef_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				const EarthView::World::Spatial::COGCWebServiceStyle* __values1 = pObjectX->EarthView::World::Spatial::CWMSLayerInfo::getStyleDetailsRef(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getBoundingBoxCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWMSLayerInfoProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CWMSLayerInfo::getBoundingBoxCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->getBoundingBoxCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_register_1getBoundingBoxCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMSLayerInfoProxy *pObjectX = (JCWMSLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getBoundingBoxCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getBoundingBoxCount_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getBoundingBoxCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CWMSLayerInfo::getBoundingBoxCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getBoundingBoxRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWMSLayerInfoProxy))
				{
					const EarthView::World::Spatial::COGCWebServiceBoundingBox* __values1 = pObjectX->EarthView::World::Spatial::CWMSLayerInfo::getBoundingBoxRef(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::COGCWebServiceBoundingBox* __values1 = pObjectX->getBoundingBoxRef(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_register_1getBoundingBoxRef_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMSLayerInfoProxy *pObjectX = (JCWMSLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getBoundingBoxRef_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getBoundingBoxRef_ev_uint32_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getBoundingBoxRef_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				const EarthView::World::Spatial::COGCWebServiceBoundingBox* __values1 = pObjectX->EarthView::World::Spatial::CWMSLayerInfo::getBoundingBoxRef(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getDataFormat_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWMSLayerInfoProxy))
				{
					const EVString __values1 = pObjectX->EarthView::World::Spatial::CWMSLayerInfo::getDataFormat(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					const EVString __values1 = pObjectX->getDataFormat(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_register_1getDataFormat_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMSLayerInfoProxy *pObjectX = (JCWMSLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDataFormat_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDataFormat_ev_uint32_callback", "(J)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getDataFormat_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				const EVString __values1 = pObjectX->EarthView::World::Spatial::CWMSLayerInfo::getDataFormat(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getDataFormatCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWMSLayerInfoProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CWMSLayerInfo::getDataFormatCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->getDataFormatCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_register_1getDataFormatCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMSLayerInfoProxy *pObjectX = (JCWMSLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDataFormatCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDataFormatCount_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getDataFormatCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CWMSLayerInfo::getDataFormatCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getInfoFormat_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWMSLayerInfoProxy))
				{
					const EVString __values1 = pObjectX->EarthView::World::Spatial::CWMSLayerInfo::getInfoFormat(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					const EVString __values1 = pObjectX->getInfoFormat(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_register_1getInfoFormat_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMSLayerInfoProxy *pObjectX = (JCWMSLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInfoFormat_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInfoFormat_ev_uint32_callback", "(J)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getInfoFormat_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				const EVString __values1 = pObjectX->EarthView::World::Spatial::CWMSLayerInfo::getInfoFormat(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getInfoFormatCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWMSLayerInfoProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CWMSLayerInfo::getInfoFormatCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->getInfoFormatCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_register_1getInfoFormatCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMSLayerInfoProxy *pObjectX = (JCWMSLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInfoFormatCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInfoFormatCount_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getInfoFormatCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CWMSLayerInfo::getInfoFormatCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getLayerCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getLayerCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getLayerInfoRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				const EarthView::World::Spatial::CWMSLayerInfo* __values1 = pObjectX->getLayerInfoRef(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getLayerInfoRef_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring layername_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* layername_ch = (const ev_char*)__env->GetStringUTFChars(layername_j,JNI_FALSE);
				const EVString layername = layername_ch;
				__env->ReleaseStringUTFChars(layername_j, (const char *)layername_ch);
				#else
				const ev_wchar* layername_ch = (const ev_wchar*)__env->GetStringChars(layername_j,JNI_FALSE);
				const EVString layername = layername_ch;
				__env->ReleaseStringChars(layername_j, (const jchar *)layername_ch);
				#endif
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				const EarthView::World::Spatial::CWMSLayerInfo* __values1 = pObjectX->getLayerInfoRef(layername);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getMetaDataURLCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getMetaDataURLCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getMetaDataURL_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				const EarthView::World::Spatial::COGCMetaDataURLInfo* __values1 = pObjectX->getMetaDataURL(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getFeatureListURLCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getFeatureListURLCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getFeatureListURL_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				const EarthView::World::Spatial::COGCMetaDataURLInfo* __values1 = pObjectX->getFeatureListURL(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getAuthorityURL_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				const EarthView::World::Spatial::COGCWMSAuthorityURL* __values1 = pObjectX->getAuthorityURL(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getAuthorityCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getAuthorityCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getDimensionInfoRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				const EarthView::World::Spatial::COGCWMSDimensionInfo* __values1 = pObjectX->getDimensionInfoRef(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getDimensionCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getDimensionCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getLatLongBoundingBoxRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->getLatLongBoundingBoxRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getDataURLRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				const EarthView::World::Spatial::COGCMetaDataURLInfo* __values1 = pObjectX->getDataURLRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getWMSScaleHintRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				const EarthView::World::Spatial::OGCWMSScaleHint* __values1 = pObjectX->getWMSScaleHintRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getAttributionRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				const EarthView::World::Spatial::COGCWMSAttribution* __values1 = pObjectX->getAttributionRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getParentLayerInfoRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				const EarthView::World::Spatial::CWMSLayerInfo* __values1 = pObjectX->getParentLayerInfoRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_isQueryable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				const ev_bool* __values1 = pObjectX->isQueryable();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getCascaded_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				const ev_uint32* __values1 = pObjectX->getCascaded();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_isOpaque_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				const ev_bool* __values1 = pObjectX->isOpaque();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_isNoSubsets_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				const ev_bool* __values1 = pObjectX->isNoSubsets();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getFixedWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				const ev_uint32* __values1 = pObjectX->getFixedWidth();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_getFixedHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				const ev_uint32* __values1 = pObjectX->getFixedHeight();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_isCategoryLayer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMSLayerInfo*) pObjXXXX;
				ev_bool __values1 = pObjectX->isCategoryLayer();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_register_1getDatasetType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMSLayerInfoProxy *pObjectX = (JCWMSLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDatasetType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDatasetType_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmslayerinfo_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMSLayerInfoProxy *pObjectX = (JCWMSLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getName_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getName_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
