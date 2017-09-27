/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/latticefontcache.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LatticeFontCache_getDefaultCache_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CLatticeFontCache* __values1 = EarthView::World::Graphic::CLatticeFontCache::getDefaultCache();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_LatticeFontCache_loadCache_1ev_1char(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filePath_j)
			{
				ev_char *filePath = (ev_char*) filePath_j;
				EarthView::World::Graphic::CLatticeFontCache *pObjectX = (EarthView::World::Graphic::CLatticeFontCache*) pObjXXXX;
				ev_bool __values1 = pObjectX->loadCache(filePath);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_LatticeFontCache_saveCacheAs_1ev_1char(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filePath_j)
			{
				ev_char *filePath = (ev_char*) filePath_j;
				EarthView::World::Graphic::CLatticeFontCache *pObjectX = (EarthView::World::Graphic::CLatticeFontCache*) pObjXXXX;
				ev_bool __values1 = pObjectX->saveCacheAs(filePath);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_LatticeFontCache_updateCacheFile_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CLatticeFontCache *pObjectX = (EarthView::World::Graphic::CLatticeFontCache*) pObjXXXX;
				ev_bool __values1 = pObjectX->updateCacheFile();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_LatticeFontCache_setMaxLatticeCounts_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong maxLatticeCounts_j)
			{
				ev_uint32 maxLatticeCounts = (ev_uint32) maxLatticeCounts_j;
				EarthView::World::Graphic::CLatticeFontCache *pObjectX = (EarthView::World::Graphic::CLatticeFontCache*) pObjXXXX;
				ev_bool __values1 = pObjectX->setMaxLatticeCounts(maxLatticeCounts);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LatticeFontCache_getCacheSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CLatticeFontCache *pObjectX = (EarthView::World::Graphic::CLatticeFontCache*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getCacheSize();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LatticeFontCache_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CLatticeFontCache *pObjectX = (EarthView::World::Graphic::CLatticeFontCache*) pObjXXXX;
				pObjectX->clear();
			}
		}
	}
}
