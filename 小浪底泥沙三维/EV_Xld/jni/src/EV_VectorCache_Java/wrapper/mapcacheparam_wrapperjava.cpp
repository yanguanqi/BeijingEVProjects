/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "vectorcache/mapcacheparam.h"
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
			namespace Geometry
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace MapCache
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_mapcache_EVMapCacheModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						MapCacheMode_Unknown,
						MapCacheMode_WGS84,
						MapCacheMode_Mercator
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_mapcache_EVMapCacheUnitHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						MapCacheUnit_Unknown,
						MapCacheUnit_Degree,
						MapCacheUnit_Radian
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_mapcache_EVMapCacheOrientPositionHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						EVOP_Unknown,
						EVOP_LeftUp,
						EVOP_LeftDown,
						EVOP_RightUp,
						EVOP_RightDown
					};
					jintArray array = __env->NewIntArray(5);
					__env->SetIntArrayRegion(array, 0, 5, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_mapcache_EVMapCacheDataFormatHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						MapCacheDataFormat_File,
						MapCacheDataFormat_Db
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace MapCache
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_setClipMap_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					pObjectX->setClipMap(name);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_getClipMap_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					EVString __values1 = pObjectX->getClipMap();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_setClipRect_1IEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rect_j)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope *rect = (const EarthView::World::Spatial::Geometry::IEnvelope*) rect_j;
					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					pObjectX->setClipRect(rect);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_getClipRect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->getClipRect();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_setMinRange_1ev_1int16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort minRange_j)
				{
					ev_int16 minRange = (ev_int16) minRange_j;
					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					pObjectX->setMinRange(minRange);
				}
				extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_getMinRange_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					ev_int16 __values1 = pObjectX->getMinRange();
					jshort __values1_j = (jshort)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_setMaxRange_1ev_1int16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort maxRange_j)
				{
					ev_int16 maxRange = (ev_int16) maxRange_j;
					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					pObjectX->setMaxRange(maxRange);
				}
				extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_getMaxRange_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					ev_int16 __values1 = pObjectX->getMaxRange();
					jshort __values1_j = (jshort)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_setMode_1EVMapCacheMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
				{
					EarthView::World::Spatial::MapCache::EVMapCacheMode mode = (EarthView::World::Spatial::MapCache::EVMapCacheMode) mode_j;
					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					pObjectX->setMode(mode);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_getMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					EarthView::World::Spatial::MapCache::EVMapCacheMode __values1 = pObjectX->getMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_setNodeCount_1ev_1int16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort nodeCount_j)
				{
					ev_int16 nodeCount = (ev_int16) nodeCount_j;
					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					pObjectX->setNodeCount(nodeCount);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_getNodeCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getNodeCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_setXMLFolderPath_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring path_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* path_ch = (const ev_char*)__env->GetStringUTFChars(path_j,JNI_FALSE);
					EVString path = path_ch;
					__env->ReleaseStringUTFChars(path_j, (const char *)path_ch);
					#else
					const ev_wchar* path_ch = (const ev_wchar*)__env->GetStringChars(path_j,JNI_FALSE);
					EVString path = path_ch;
					__env->ReleaseStringChars(path_j, (const jchar *)path_ch);
					#endif
					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					pObjectX->setXMLFolderPath(path);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_getXMLFolderPath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					EVString __values1 = pObjectX->getXMLFolderPath();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_setCacheType_1EVMapCacheDataFormat(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::MapCache::EVMapCacheDataFormat type = (EarthView::World::Spatial::MapCache::EVMapCacheDataFormat) type_j;
					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					pObjectX->setCacheType(type);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_getMapCacheType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					EarthView::World::Spatial::MapCache::EVMapCacheDataFormat __values1 = pObjectX->getMapCacheType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_setTilePrecision_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble precision_j)
				{
					ev_real64 precision = (ev_real64) precision_j;
					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					pObjectX->setTilePrecision(precision);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_getTilePrecision_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getTilePrecision();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_setClipTime_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring time_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* time_ch = (const ev_char*)__env->GetStringUTFChars(time_j,JNI_FALSE);
					const EVString time = time_ch;
					__env->ReleaseStringUTFChars(time_j, (const char *)time_ch);
					#else
					const ev_wchar* time_ch = (const ev_wchar*)__env->GetStringChars(time_j,JNI_FALSE);
					const EVString time = time_ch;
					__env->ReleaseStringChars(time_j, (const jchar *)time_ch);
					#endif
					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					pObjectX->setClipTime(time);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_getClipTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					EVString __values1 = pObjectX->getClipTime();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_setFirstFolderName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					pObjectX->setFirstFolderName(name);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_getFirstFolderName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					EVString __values1 = pObjectX->getFirstFolderName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_setSecondFolderName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					pObjectX->setSecondFolderName(name);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_getSecondFolderName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					EVString __values1 = pObjectX->getSecondFolderName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_setTargetCatalogue_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					pObjectX->setTargetCatalogue(name);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_getTargetCatalogue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					EVString __values1 = pObjectX->getTargetCatalogue();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_setRemarkText_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring text_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* text_ch = (const ev_char*)__env->GetStringUTFChars(text_j,JNI_FALSE);
					const EVString text = text_ch;
					__env->ReleaseStringUTFChars(text_j, (const char *)text_ch);
					#else
					const ev_wchar* text_ch = (const ev_wchar*)__env->GetStringChars(text_j,JNI_FALSE);
					const EVString text = text_ch;
					__env->ReleaseStringChars(text_j, (const jchar *)text_ch);
					#endif
					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					pObjectX->setRemarkText(text);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_getRemarkText_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					EVString __values1 = pObjectX->getRemarkText();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_isUpdate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					ev_bool __values1 = pObjectX->isUpdate();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_setIsUpdate_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					pObjectX->setIsUpdate(flag);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_setIsCreateETM_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					pObjectX->setIsCreateETM(flag);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_isCreateETM_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					ev_bool __values1 = pObjectX->isCreateETM();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					EarthView::World::Spatial::MapCache::CMapCacheParam* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_readEtm_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring etmpath_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* etmpath_ch = (const ev_char*)__env->GetStringUTFChars(etmpath_j,JNI_FALSE);
					const EVString etmpath = etmpath_ch;
					__env->ReleaseStringUTFChars(etmpath_j, (const char *)etmpath_ch);
					#else
					const ev_wchar* etmpath_ch = (const ev_wchar*)__env->GetStringChars(etmpath_j,JNI_FALSE);
					const EVString etmpath = etmpath_ch;
					__env->ReleaseStringChars(etmpath_j, (const jchar *)etmpath_ch);
					#endif
					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					ev_bool __values1 = pObjectX->readEtm(etmpath);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					ev_bool __values1 = pObjectX->fromXmlElement(element);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheParam_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::MapCache::CMapCacheParam *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
		}
	}
}
