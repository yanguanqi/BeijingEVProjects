/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tileinfo.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileInfo_getRow_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileInfo *pObjectX = (EarthView::World::Spatial::CTileInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getRow();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileInfo_getCol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileInfo *pObjectX = (EarthView::World::Spatial::CTileInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getCol();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_TileInfo_getMaxX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileInfo *pObjectX = (EarthView::World::Spatial::CTileInfo*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getMaxX();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_TileInfo_getMinX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileInfo *pObjectX = (EarthView::World::Spatial::CTileInfo*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getMinX();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_TileInfo_getMaxY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileInfo *pObjectX = (EarthView::World::Spatial::CTileInfo*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getMaxY();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_TileInfo_getMinY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileInfo *pObjectX = (EarthView::World::Spatial::CTileInfo*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getMinY();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileInfo_getSize_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong width_j, jlong height_j)
			{
				ev_uint32 &width = *(ev_uint32*) width_j;
				ev_uint32 &height = *(ev_uint32*) height_j;
				const 				EarthView::World::Spatial::CTileInfo *pObjectX = (EarthView::World::Spatial::CTileInfo*) pObjXXXX;
				pObjectX->getSize(width, height);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileInfo_toTilePoint_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x_j, jlong y_j)
			{
				ev_real64 &x = *(ev_real64*) x_j;
				ev_real64 &y = *(ev_real64*) y_j;
				const 				EarthView::World::Spatial::CTileInfo *pObjectX = (EarthView::World::Spatial::CTileInfo*) pObjXXXX;
				pObjectX->toTilePoint(x, y);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileInfo_toPixelPoint_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x_j, jlong y_j)
			{
				ev_real64 &x = *(ev_real64*) x_j;
				ev_real64 &y = *(ev_real64*) y_j;
				const 				EarthView::World::Spatial::CTileInfo *pObjectX = (EarthView::World::Spatial::CTileInfo*) pObjXXXX;
				pObjectX->toPixelPoint(x, y);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileInfo_getTileLevelInfo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileInfo *pObjectX = (EarthView::World::Spatial::CTileInfo*) pObjXXXX;
				const EarthView::World::Spatial::CTileLevelInfo* __values1 = pObjectX->getTileLevelInfo();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
