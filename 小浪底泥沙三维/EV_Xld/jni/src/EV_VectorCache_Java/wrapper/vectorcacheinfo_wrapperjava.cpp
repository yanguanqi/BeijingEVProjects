/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "vectorcache/vectorcacheinfo.h"
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
			namespace VectorCache
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_vectorcache_EVVectorCacheTemplateTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						VectorCacheTemplateType_Unknown,
						VectorCacheTemplateType_WGS84,
						VectorCacheTemplateType_Mercator,
						VectorCacheTemplateType_UserDefined
					};
					jintArray array = __env->NewIntArray(4);
					__env->SetIntArrayRegion(array, 0, 4, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorcache_DivisionInfo_Create(JNIEnv *__env, jclass __clazz)
				{
					EarthView::World::Spatial::VectorCache::DivisionInfo *pObjectX = new EarthView::World::Spatial::VectorCache::DivisionInfo();
					return (jlong) pObjectX;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_DivisionInfo_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::DivisionInfo *pObjectX = (EarthView::World::Spatial::VectorCache::DivisionInfo*)pObjXXXX;
					delete pObjectX;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorcache_DivisionInfo_get_1nStartLevel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::DivisionInfo *pObjectX = (EarthView::World::Spatial::VectorCache::DivisionInfo*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->nStartLevel);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_DivisionInfo_set_1nStartLevel_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::VectorCache::DivisionInfo *pObjectX = (EarthView::World::Spatial::VectorCache::DivisionInfo*)pObjXXXX;
					pObjectX->nStartLevel = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorcache_DivisionInfo_get_1nEndLevel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::DivisionInfo *pObjectX = (EarthView::World::Spatial::VectorCache::DivisionInfo*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->nEndLevel);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_DivisionInfo_set_1nEndLevel_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::VectorCache::DivisionInfo *pObjectX = (EarthView::World::Spatial::VectorCache::DivisionInfo*)pObjXXXX;
					pObjectX->nEndLevel = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorcache_DivisionInfo_get_1nBaseLevel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::DivisionInfo *pObjectX = (EarthView::World::Spatial::VectorCache::DivisionInfo*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->nBaseLevel);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_DivisionInfo_set_1nBaseLevel_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::VectorCache::DivisionInfo *pObjectX = (EarthView::World::Spatial::VectorCache::DivisionInfo*)pObjXXXX;
					pObjectX->nBaseLevel = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheBasicParam_setFirstFolderName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
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
					EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam*) pObjXXXX;
					ev_bool __values1 = pObjectX->setFirstFolderName(value);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheBasicParam_setSecondFolderName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
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
					EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam*) pObjXXXX;
					ev_bool __values1 = pObjectX->setSecondFolderName(value);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheBasicParam_setResultName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
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
					EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam*) pObjXXXX;
					ev_bool __values1 = pObjectX->setResultName(value);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheBasicParam_setSavePath_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
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
					EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam*) pObjXXXX;
					ev_bool __values1 = pObjectX->setSavePath(value);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheBasicParam_setCacheType_1EVVectorCacheDataFormat(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::VectorCache::EVVectorCacheDataFormat type = (EarthView::World::Spatial::VectorCache::EVVectorCacheDataFormat) type_j;
					EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam*) pObjXXXX;
					ev_bool __values1 = pObjectX->setCacheType(type);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheBasicParam_setTemplateMode_1EVVectorCacheTemplateMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
				{
					EarthView::World::Spatial::VectorCache::EVVectorCacheTemplateMode mode = (EarthView::World::Spatial::VectorCache::EVVectorCacheTemplateMode) mode_j;
					EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam*) pObjXXXX;
					ev_bool __values1 = pObjectX->setTemplateMode(mode);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheBasicParam_getFirstFolderName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam*) pObjXXXX;
					const ev_char* __values1 = pObjectX->getFirstFolderName();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheBasicParam_getSecondFolderName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam*) pObjXXXX;
					const ev_char* __values1 = pObjectX->getSecondFolderName();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheBasicParam_getResultName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam*) pObjXXXX;
					const ev_char* __values1 = pObjectX->getResultName();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheBasicParam_getSavePath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam*) pObjXXXX;
					const ev_char* __values1 = pObjectX->getSavePath();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheBasicParam_getCacheType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam*) pObjXXXX;
					EarthView::World::Spatial::VectorCache::EVVectorCacheDataFormat __values1 = pObjectX->getCacheType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheBasicParam_getTemplateMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam*) pObjXXXX;
					EarthView::World::Spatial::VectorCache::EVVectorCacheTemplateMode __values1 = pObjectX->getTemplateMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_vectorcache_CacheFieldInfo_get_1strFieldName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheFieldInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheFieldInfo*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->strFieldName;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_CacheFieldInfo_set_1strFieldName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial::VectorCache::CCacheFieldInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheFieldInfo*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->strFieldName = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorcache_CacheFieldInfo_get_1nValueType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheFieldInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheFieldInfo*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->nValueType);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_CacheFieldInfo_set_1nValueType_1EVVectorCacheFieldType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::VectorCache::CCacheFieldInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheFieldInfo*)pObjXXXX;
					pObjectX->nValueType = (EarthView::World::Spatial::VectorCache::EVVectorCacheFieldType)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorcache_CacheFieldInfo_get_1nSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheFieldInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheFieldInfo*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->nSize);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_CacheFieldInfo_set_1nSize_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::VectorCache::CCacheFieldInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheFieldInfo*)pObjXXXX;
					pObjectX->nSize = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorcache_CacheTemplate_getTemplateMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorCache::CCacheTemplate *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheTemplate*) pObjXXXX;
					EarthView::World::Spatial::VectorCache::EVVectorCacheTemplateType __values1 = pObjectX->getTemplateMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorcache_CacheTemplate_getDivisionLevel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheTemplate *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheTemplate*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getDivisionLevel();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorcache_CacheTemplate_getDivesionInfoRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::VectorCache::CCacheTemplate *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheTemplate*) pObjXXXX;
					EarthView::World::Spatial::VectorCache::DivisionInfo* __values1 = pObjectX->getDivesionInfoRef(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorcache_CacheTemplate_getOrientPosition_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheTemplate *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheTemplate*) pObjXXXX;
					EarthView::World::Spatial::VectorCache::EVVectorCacheOrientPosition __values1 = pObjectX->getOrientPosition();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_vectorcache_CacheTemplate_getFirstTileSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheTemplate *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheTemplate*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getFirstTileSize();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorcache_CacheTemplate_getTileSizeType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheTemplate *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheTemplate*) pObjXXXX;
					EarthView::World::Spatial::VectorCache::EVVectorCacheUnitType __values1 = pObjectX->getTileSizeType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorcache_CacheTemplate_getTemplateClipRect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheTemplate *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheTemplate*) pObjXXXX;
					EarthView::World::Spatial::VectorCache::GeoRect* __values1 = pObjectX->getTemplateClipRect();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorcache_CacheTemplate_getFirstLevel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheTemplate *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheTemplate*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getFirstLevel();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorcache_CacheTemplate_getEndLevel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheTemplate *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheTemplate*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getEndLevel();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorcache_CacheTemplate_getSubTileNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheTemplate *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheTemplate*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getSubTileNum();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorcache_CacheTemplate_getDefaultTemplate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheTemplate *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheTemplate*) pObjXXXX;
					ev_bool __values1 = pObjectX->getDefaultTemplate();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorcache_CacheTemplate_getStartTileNumber_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheTemplate *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheTemplate*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getStartTileNumber();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorcache_CacheTemplate_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheTemplate *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheTemplate*) pObjXXXX;
					EarthView::World::Spatial::VectorCache::CCacheTemplate* __values1 = pObjectX->clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheProcessMessage_get_1nDone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->nDone);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheProcessMessage_set_1nDone_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage*)pObjXXXX;
					pObjectX->nDone = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheProcessMessage_get_1nTotal_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->nTotal);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheProcessMessage_set_1nTotal_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage*)pObjXXXX;
					pObjectX->nTotal = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheProcessMessage_get_1nCurrentDatasetIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->nCurrentDatasetIndex);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheProcessMessage_set_1nCurrentDatasetIndex_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage*)pObjXXXX;
					pObjectX->nCurrentDatasetIndex = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheProcessMessage_get_1nTotalDatasetNum_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->nTotalDatasetNum);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheProcessMessage_set_1nTotalDatasetNum_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage*)pObjXXXX;
					pObjectX->nTotalDatasetNum = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheProcessMessage_get_1nProcess_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->nProcess);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheProcessMessage_set_1nProcess_1EVVectorCacheProcess(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage*)pObjXXXX;
					pObjectX->nProcess = (EarthView::World::Spatial::VectorCache::EVVectorCacheProcess)__values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_VectorCacheProcessMessage_setSavedProcessNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage *pObjectX = (EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage*) pObjXXXX;
					pObjectX->setSavedProcessNum();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* __values1 = pObjectX->clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_getTotalProcessNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getTotalProcessNum();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_setPrecession_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					pObjectX->setPrecession(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_getPrecession_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getPrecession();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_getRemarkInfo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					const ev_char* __values1 = pObjectX->getRemarkInfo();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_setRemartkInfo_1ev_1char(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
				{
					const ev_char *value = (const ev_char*) value_j;
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					ev_bool __values1 = pObjectX->setRemartkInfo(value);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_setOutAttribute_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					pObjectX->setOutAttribute(value);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_getOutAttribute_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					ev_bool __values1 = pObjectX->getOutAttribute();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_setAttributeMinLevel_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j)
				{
					ev_int32 level = (ev_int32) level_j;
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					pObjectX->setAttributeMinLevel(level);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_setAttributeMaxLevel_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j)
				{
					ev_int32 level = (ev_int32) level_j;
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					pObjectX->setAttributeMaxLevel(level);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_getAttributeMinLevel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getAttributeMinLevel();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_getAttributeMaxLevel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getAttributeMaxLevel();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_addFieldInfo_1CCacheFieldInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong info_j)
				{
					EarthView::World::Spatial::VectorCache::CCacheFieldInfo *info = (EarthView::World::Spatial::VectorCache::CCacheFieldInfo*) info_j;
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					pObjectX->addFieldInfo(info);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_setClipAttriIndex_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong count_j)
				{
					ev_uint32 *index = (ev_uint32*) index_j;
					ev_uint32 count = (ev_uint32) count_j;
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					pObjectX->setClipAttriIndex(index, count);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_getFieldInfo_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					EarthView::World::Spatial::VectorCache::CCacheFieldInfo* __values1 = pObjectX->getFieldInfo(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_getClipFieldNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getClipFieldNum();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_getClipAttributeIndex_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getClipAttributeIndex(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_getTotalFieldNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getTotalFieldNum();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_setDataTime_1ev_1char(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong szValue_j)
				{
					const ev_char *szValue = (const ev_char*) szValue_j;
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					ev_bool __values1 = pObjectX->setDataTime(szValue);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_getDataTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					const ev_char* __values1 = pObjectX->getDataTime();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_setDatasetName_1ev_1char(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong szValue_j)
				{
					const ev_char *szValue = (const ev_char*) szValue_j;
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					ev_bool __values1 = pObjectX->setDatasetName(szValue);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_getDatasetName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					const ev_char* __values1 = pObjectX->getDatasetName();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_clearFieldInfos_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					pObjectX->clearFieldInfos();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_clearClipAttriIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					pObjectX->clearClipAttriIndex();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_setMinRange_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nStartLevel_j)
				{
					ev_int32 nStartLevel = (ev_int32) nStartLevel_j;
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					pObjectX->setMinRange(nStartLevel);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_setMaxRange_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nEndLevel_j)
				{
					ev_int32 nEndLevel = (ev_int32) nEndLevel_j;
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					pObjectX->setMaxRange(nEndLevel);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_getMinRange_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getMinRange();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_getMaxRange_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getMaxRange();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_setCacheRect_1GeoRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rect_j)
				{
					EarthView::World::Spatial::VectorCache::GeoRect &rect = *(EarthView::World::Spatial::VectorCache::GeoRect*) rect_j;
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					pObjectX->setCacheRect(rect);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorcache_CacheProcessInfo_getCacheRect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo *pObjectX = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjXXXX;
					EarthView::World::Spatial::VectorCache::GeoRect* __values1 = pObjectX->getCacheRect();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
