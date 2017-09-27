/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tileblockinfo.h"
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_TileBlockInfo_isValid_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CTileBlockInfo *pObjectX = (EarthView::World::Spatial::CTileBlockInfo*) pObjXXXX;
				ev_bool __values1 = pObjectX->isValid();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileBlockInfo_setBlockLevel_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j)
			{
				ev_int32 level = (ev_int32) level_j;
				EarthView::World::Spatial::CTileBlockInfo *pObjectX = (EarthView::World::Spatial::CTileBlockInfo*) pObjXXXX;
				pObjectX->setBlockLevel(level);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileBlockInfo_setStartLevel_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j)
			{
				ev_int32 level = (ev_int32) level_j;
				EarthView::World::Spatial::CTileBlockInfo *pObjectX = (EarthView::World::Spatial::CTileBlockInfo*) pObjXXXX;
				pObjectX->setStartLevel(level);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileBlockInfo_setEndLevel_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j)
			{
				ev_int32 level = (ev_int32) level_j;
				EarthView::World::Spatial::CTileBlockInfo *pObjectX = (EarthView::World::Spatial::CTileBlockInfo*) pObjXXXX;
				pObjectX->setEndLevel(level);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileBlockInfo_getBlockLevel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileBlockInfo *pObjectX = (EarthView::World::Spatial::CTileBlockInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getBlockLevel();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileBlockInfo_getStartLevel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileBlockInfo *pObjectX = (EarthView::World::Spatial::CTileBlockInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getStartLevel();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileBlockInfo_getEndLevel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileBlockInfo *pObjectX = (EarthView::World::Spatial::CTileBlockInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getEndLevel();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileBlockInfo_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CTileBlockInfo *pObjectX = (EarthView::World::Spatial::CTileBlockInfo*) pObjXXXX;
				EarthView::World::Spatial::CTileBlockInfo* __values1 = pObjectX->clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
