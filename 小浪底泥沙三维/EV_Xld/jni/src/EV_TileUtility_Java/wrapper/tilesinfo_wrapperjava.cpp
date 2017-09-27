/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tilesinfo.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TilesInfo_getMaxRow_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTilesInfo *pObjectX = (EarthView::World::Spatial::CTilesInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getMaxRow();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TilesInfo_getMinRow_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTilesInfo *pObjectX = (EarthView::World::Spatial::CTilesInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getMinRow();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TilesInfo_getMaxCol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTilesInfo *pObjectX = (EarthView::World::Spatial::CTilesInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getMaxCol();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TilesInfo_getMinCol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTilesInfo *pObjectX = (EarthView::World::Spatial::CTilesInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getMinCol();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_TilesInfo_getMaxX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTilesInfo *pObjectX = (EarthView::World::Spatial::CTilesInfo*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getMaxX();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_TilesInfo_getMinX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTilesInfo *pObjectX = (EarthView::World::Spatial::CTilesInfo*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getMinX();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_TilesInfo_getMaxY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTilesInfo *pObjectX = (EarthView::World::Spatial::CTilesInfo*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getMaxY();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_TilesInfo_getMinY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTilesInfo *pObjectX = (EarthView::World::Spatial::CTilesInfo*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getMinY();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TilesInfo_getTileInfoByRowCol_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong row_j, jlong col_j)
			{
				ev_uint32 row = (ev_uint32) row_j;
				ev_uint32 col = (ev_uint32) col_j;
				const 				EarthView::World::Spatial::CTilesInfo *pObjectX = (EarthView::World::Spatial::CTilesInfo*) pObjXXXX;
				EarthView::World::Spatial::CTileInfo* __values1 = pObjectX->getTileInfoByRowCol(row, col);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TilesInfo_getTileInfoByXY_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
			{
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				const 				EarthView::World::Spatial::CTilesInfo *pObjectX = (EarthView::World::Spatial::CTilesInfo*) pObjXXXX;
				EarthView::World::Spatial::CTileInfo* __values1 = pObjectX->getTileInfoByXY(x, y);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TilesInfo_getTileLevelInfo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTilesInfo *pObjectX = (EarthView::World::Spatial::CTilesInfo*) pObjXXXX;
				const EarthView::World::Spatial::CTileLevelInfo* __values1 = pObjectX->getTileLevelInfo();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
