/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tilelevel.h"
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
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_TileLevel_getBaseLevel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileLevel *pObjectX = (EarthView::World::Spatial::CTileLevel*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getBaseLevel();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_TileLevel_getSpanOfBaseLevel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileLevel *pObjectX = (EarthView::World::Spatial::CTileLevel*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getSpanOfBaseLevel();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_TileLevel_getMinLevel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileLevel *pObjectX = (EarthView::World::Spatial::CTileLevel*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getMinLevel();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_TileLevel_getMaxLevel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileLevel *pObjectX = (EarthView::World::Spatial::CTileLevel*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getMaxLevel();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_TileLevel_hasMinLevel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileLevel *pObjectX = (EarthView::World::Spatial::CTileLevel*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMinLevel();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_TileLevel_hasMaxLevel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileLevel *pObjectX = (EarthView::World::Spatial::CTileLevel*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMaxLevel();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileLevel_setBaseLevel_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nLevel_j)
			{
				ev_int32 nLevel = (ev_int32) nLevel_j;
				EarthView::World::Spatial::CTileLevel *pObjectX = (EarthView::World::Spatial::CTileLevel*) pObjXXXX;
				pObjectX->setBaseLevel(nLevel);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileLevel_setSpanOfBaseLevel_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dSpan_j)
			{
				ev_real64 dSpan = (ev_real64) dSpan_j;
				EarthView::World::Spatial::CTileLevel *pObjectX = (EarthView::World::Spatial::CTileLevel*) pObjXXXX;
				pObjectX->setSpanOfBaseLevel(dSpan);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileLevel_setMinLevel_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nLevel_j)
			{
				ev_int32 nLevel = (ev_int32) nLevel_j;
				EarthView::World::Spatial::CTileLevel *pObjectX = (EarthView::World::Spatial::CTileLevel*) pObjXXXX;
				pObjectX->setMinLevel(nLevel);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileLevel_setMaxLevel_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nLevel_j)
			{
				ev_int32 nLevel = (ev_int32) nLevel_j;
				EarthView::World::Spatial::CTileLevel *pObjectX = (EarthView::World::Spatial::CTileLevel*) pObjXXXX;
				pObjectX->setMaxLevel(nLevel);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileLevel_setHasMinLevel_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bHas_j)
			{
				ev_bool bHas = (ev_bool) bHas_j;
				EarthView::World::Spatial::CTileLevel *pObjectX = (EarthView::World::Spatial::CTileLevel*) pObjXXXX;
				pObjectX->setHasMinLevel(bHas);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileLevel_setHasMaxLevel_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bHas_j)
			{
				ev_bool bHas = (ev_bool) bHas_j;
				EarthView::World::Spatial::CTileLevel *pObjectX = (EarthView::World::Spatial::CTileLevel*) pObjXXXX;
				pObjectX->setHasMaxLevel(bHas);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileLevel_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileLevel *pObjectX = (EarthView::World::Spatial::CTileLevel*) pObjXXXX;
				EarthView::World::Spatial::CTileLevel* __values1 = pObjectX->clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
