/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dlayer/bilbuilder.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_BilBuilder_setRasterDataset_1IRasterDataset(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pRasterDataset_j)
			{
				EarthView::World::Spatial::GeoDataset::IRasterDataset *ref_pRasterDataset = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) ref_pRasterDataset_j;
				EarthView::World::Spatial3D::CBilBuilder *pObjectX = (EarthView::World::Spatial3D::CBilBuilder*) pObjXXXX;
				pObjectX->setRasterDataset(ref_pRasterDataset);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_BilBuilder_getRowColRange_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jlong minRow_j, jlong maxRow_j, jlong minCol_j, jlong maxCol_j)
			{
				ev_int32 level = (ev_int32) level_j;
				ev_int32 &minRow = *(ev_int32*) minRow_j;
				ev_int32 &maxRow = *(ev_int32*) maxRow_j;
				ev_int32 &minCol = *(ev_int32*) minCol_j;
				ev_int32 &maxCol = *(ev_int32*) maxCol_j;
				EarthView::World::Spatial3D::CBilBuilder *pObjectX = (EarthView::World::Spatial3D::CBilBuilder*) pObjXXXX;
				pObjectX->getRowColRange(level, minRow, maxRow, minCol, maxCol);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_BilBuilder_getTile_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1byte(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jint row_j, jint col_j, jlong pBuffer_j)
			{
				ev_int32 level = (ev_int32) level_j;
				ev_int32 row = (ev_int32) row_j;
				ev_int32 col = (ev_int32) col_j;
				ev_byte *pBuffer = (ev_byte*) pBuffer_j;
				EarthView::World::Spatial3D::CBilBuilder *pObjectX = (EarthView::World::Spatial3D::CBilBuilder*) pObjXXXX;
				pObjectX->getTile(level, row, col, pBuffer);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_BilBuilder_getTileWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CBilBuilder *pObjectX = (EarthView::World::Spatial3D::CBilBuilder*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getTileWidth();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_BilBuilder_getTileHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CBilBuilder *pObjectX = (EarthView::World::Spatial3D::CBilBuilder*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getTileHeight();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_BilBuilder_getTileDataLength_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CBilBuilder *pObjectX = (EarthView::World::Spatial3D::CBilBuilder*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getTileDataLength();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_BilBuilder_getSpatialRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CBilBuilder *pObjectX = (EarthView::World::Spatial3D::CBilBuilder*) pObjXXXX;
				const EVString& __values1 = pObjectX->getSpatialRef();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_BilBuilder_getLowestLevel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CBilBuilder *pObjectX = (EarthView::World::Spatial3D::CBilBuilder*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getLowestLevel();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_BilBuilder_getHighestLevel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CBilBuilder *pObjectX = (EarthView::World::Spatial3D::CBilBuilder*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getHighestLevel();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_BilBuilder_getLevelSpan_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j)
			{
				ev_int32 level = (ev_int32) level_j;
				EarthView::World::Spatial3D::CBilBuilder *pObjectX = (EarthView::World::Spatial3D::CBilBuilder*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getLevelSpan(level);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_BilBuilder_getRowColByCoord_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jdouble X_j, jdouble Y_j, jlong row_j, jlong col_j)
			{
				ev_int32 level = (ev_int32) level_j;
				ev_real64 X = (ev_real64) X_j;
				ev_real64 Y = (ev_real64) Y_j;
				ev_int32 &row = *(ev_int32*) row_j;
				ev_int32 &col = *(ev_int32*) col_j;
				EarthView::World::Spatial3D::CBilBuilder *pObjectX = (EarthView::World::Spatial3D::CBilBuilder*) pObjXXXX;
				pObjectX->getRowColByCoord(level, X, Y, row, col);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_BilBuilder_getTileCoordRange_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jint row_j, jint col_j, jlong minX_j, jlong maxX_j, jlong minY_j, jlong maxY_j)
			{
				ev_int32 level = (ev_int32) level_j;
				ev_int32 row = (ev_int32) row_j;
				ev_int32 col = (ev_int32) col_j;
				ev_real64 &minX = *(ev_real64*) minX_j;
				ev_real64 &maxX = *(ev_real64*) maxX_j;
				ev_real64 &minY = *(ev_real64*) minY_j;
				ev_real64 &maxY = *(ev_real64*) maxY_j;
				EarthView::World::Spatial3D::CBilBuilder *pObjectX = (EarthView::World::Spatial3D::CBilBuilder*) pObjXXXX;
				pObjectX->getTileCoordRange(level, row, col, minX, maxX, minY, maxY);
			}
		}
	}
}
