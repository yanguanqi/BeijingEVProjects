/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tilelevelinfo.h"
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
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_TileLevelInfo_getResolution_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileLevelInfo *pObjectX = (EarthView::World::Spatial::CTileLevelInfo*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getResolution();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_TileLevelInfo_getSpan_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileLevelInfo *pObjectX = (EarthView::World::Spatial::CTileLevelInfo*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getSpan();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_TileLevelInfo_getScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileLevelInfo *pObjectX = (EarthView::World::Spatial::CTileLevelInfo*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getScale();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_TileLevelInfo_getLevel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileLevelInfo *pObjectX = (EarthView::World::Spatial::CTileLevelInfo*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getLevel();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileLevelInfo_getMaxRow_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileLevelInfo *pObjectX = (EarthView::World::Spatial::CTileLevelInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getMaxRow();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileLevelInfo_getMinRow_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileLevelInfo *pObjectX = (EarthView::World::Spatial::CTileLevelInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getMinRow();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileLevelInfo_getMaxCol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileLevelInfo *pObjectX = (EarthView::World::Spatial::CTileLevelInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getMaxCol();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileLevelInfo_getMinCol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileLevelInfo *pObjectX = (EarthView::World::Spatial::CTileLevelInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getMinCol();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileLevelInfo_getTileInfoByRowCol_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong row_j, jlong col_j)
			{
				ev_uint32 row = (ev_uint32) row_j;
				ev_uint32 col = (ev_uint32) col_j;
				const 				EarthView::World::Spatial::CTileLevelInfo *pObjectX = (EarthView::World::Spatial::CTileLevelInfo*) pObjXXXX;
				EarthView::World::Spatial::CTileInfo* __values1 = pObjectX->getTileInfoByRowCol(row, col);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileLevelInfo_getTileInfoByRowCol_1ev_1uint32_1ev_1uint32_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong row_j, jlong col_j, jlong ptr1_j)
			{
				ev_uint32 row = (ev_uint32) row_j;
				ev_uint32 col = (ev_uint32) col_j;
				void *ptr1 = (void*) ptr1_j;
				const 				EarthView::World::Spatial::CTileLevelInfo *pObjectX = (EarthView::World::Spatial::CTileLevelInfo*) pObjXXXX;
				EarthView::World::Spatial::CTileInfo* __values1 = pObjectX->getTileInfoByRowCol(row, col, ptr1);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileLevelInfo_getTileInfoByXY_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
			{
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				const 				EarthView::World::Spatial::CTileLevelInfo *pObjectX = (EarthView::World::Spatial::CTileLevelInfo*) pObjXXXX;
				EarthView::World::Spatial::CTileInfo* __values1 = pObjectX->getTileInfoByXY(x, y);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileLevelInfo_getTileInfoByXY_1ev_1real64_1ev_1real64_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jlong ptr_j)
			{
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				void *ptr = (void*) ptr_j;
				const 				EarthView::World::Spatial::CTileLevelInfo *pObjectX = (EarthView::World::Spatial::CTileLevelInfo*) pObjXXXX;
				EarthView::World::Spatial::CTileInfo* __values1 = pObjectX->getTileInfoByXY(x, y, ptr);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileLevelInfo_getTilesInfo_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble minx_j, jdouble miny_j, jdouble maxx_j, jdouble maxy_j)
			{
				ev_real64 minx = (ev_real64) minx_j;
				ev_real64 miny = (ev_real64) miny_j;
				ev_real64 maxx = (ev_real64) maxx_j;
				ev_real64 maxy = (ev_real64) maxy_j;
				const 				EarthView::World::Spatial::CTileLevelInfo *pObjectX = (EarthView::World::Spatial::CTileLevelInfo*) pObjXXXX;
				EarthView::World::Spatial::CTilesInfo* __values1 = pObjectX->getTilesInfo(minx, miny, maxx, maxy);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileLevelInfo_getTileReferenceRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileLevelInfo *pObjectX = (EarthView::World::Spatial::CTileLevelInfo*) pObjXXXX;
				const EarthView::World::Spatial::CTileReference* __values1 = pObjectX->getTileReferenceRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
