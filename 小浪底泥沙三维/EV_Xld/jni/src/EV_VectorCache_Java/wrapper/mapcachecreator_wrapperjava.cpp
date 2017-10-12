/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "vectorcache/mapcachecreator.h"
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheCreator_setClipParam_1CMapCacheParam(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong param_j)
				{
					const EarthView::World::Spatial::MapCache::CMapCacheParam *param = (const EarthView::World::Spatial::MapCache::CMapCacheParam*) param_j;
					EarthView::World::Spatial::MapCache::CMapCacheCreator *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheCreator*) pObjXXXX;
					pObjectX->setClipParam(param);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheCreator_getClipParam_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheCreator *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheCreator*) pObjXXXX;
					const EarthView::World::Spatial::MapCache::CMapCacheParam* __values1 = pObjectX->getClipParam();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheCreator_setTempClipParam_1CMapCacheParam(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong param_j)
				{
					const EarthView::World::Spatial::MapCache::CMapCacheParam *param = (const EarthView::World::Spatial::MapCache::CMapCacheParam*) param_j;
					EarthView::World::Spatial::MapCache::CMapCacheCreator *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheCreator*) pObjXXXX;
					pObjectX->setTempClipParam(param);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheCreator_getTempClipParam_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheCreator *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheCreator*) pObjXXXX;
					const EarthView::World::Spatial::MapCache::CMapCacheParam* __values1 = pObjectX->getTempClipParam();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheCreator_setClipListener_1CMapCacheListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
				{
					const EarthView::World::Spatial::MapCache::CMapCacheListener *listener = (const EarthView::World::Spatial::MapCache::CMapCacheListener*) listener_j;
					EarthView::World::Spatial::MapCache::CMapCacheCreator *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheCreator*) pObjXXXX;
					pObjectX->setClipListener(listener);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheCreator_getClipListener_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheCreator *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheCreator*) pObjXXXX;
					EarthView::World::Spatial::MapCache::CMapCacheListener* __values1 = pObjectX->getClipListener();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheCreator_createETM_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::MapCache::CMapCacheCreator *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheCreator*) pObjXXXX;
					ev_bool __values1 = pObjectX->createETM();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheCreator_createClipParmtoXMLs_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheCreator *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheCreator*) pObjXXXX;
					ev_bool __values1 = pObjectX->createClipParmtoXMLs();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheCreator_clip_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::MapCache::CMapCacheCreator *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheCreator*) pObjXXXX;
					ev_bool __values1 = pObjectX->clip();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheCreator_hasLastTaskUnfinishd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::MapCache::CMapCacheCreator *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheCreator*) pObjXXXX;
					ev_bool __values1 = pObjectX->hasLastTaskUnfinishd();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheCreator_loadLastTast_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::MapCache::CMapCacheCreator *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheCreator*) pObjXXXX;
					pObjectX->loadLastTast();
				}
			}
		}
	}
}
