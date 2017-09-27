/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/tilematrix.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileMatrix_getIdentifier_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileMatrix *pObjectX = (EarthView::World::Spatial::CTileMatrix*) pObjXXXX;
				const EVString& __values1 = pObjectX->getIdentifier();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_TileMatrix_getScaleDenominator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileMatrix *pObjectX = (EarthView::World::Spatial::CTileMatrix*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getScaleDenominator();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileMatrix_getTopLeftCorner_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong left_j, jlong top_j)
			{
				ev_real64 &left = *(ev_real64*) left_j;
				ev_real64 &top = *(ev_real64*) top_j;
				const 				EarthView::World::Spatial::CTileMatrix *pObjectX = (EarthView::World::Spatial::CTileMatrix*) pObjXXXX;
				pObjectX->getTopLeftCorner(left, top);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileMatrix_getMatrixWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileMatrix *pObjectX = (EarthView::World::Spatial::CTileMatrix*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getMatrixWidth();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileMatrix_getMatrixHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileMatrix *pObjectX = (EarthView::World::Spatial::CTileMatrix*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getMatrixHeight();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileMatrix_getTileWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileMatrix *pObjectX = (EarthView::World::Spatial::CTileMatrix*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getTileWidth();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileMatrix_getTileHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileMatrix *pObjectX = (EarthView::World::Spatial::CTileMatrix*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getTileHeight();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileMatrix_getTitleCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileMatrix *pObjectX = (EarthView::World::Spatial::CTileMatrix*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getTitleCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_TileMatrix_getTitle_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CTileMatrix *pObjectX = (EarthView::World::Spatial::CTileMatrix*) pObjXXXX;
				const EVString __values1 = pObjectX->getTitle(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileMatrix_getAbstractCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileMatrix *pObjectX = (EarthView::World::Spatial::CTileMatrix*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getAbstractCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_TileMatrix_getAbstract_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CTileMatrix *pObjectX = (EarthView::World::Spatial::CTileMatrix*) pObjXXXX;
				const EVString __values1 = pObjectX->getAbstract(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileMatrix_getKeywordCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileMatrix *pObjectX = (EarthView::World::Spatial::CTileMatrix*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getKeywordCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_TileMatrix_getKeyword_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CTileMatrix *pObjectX = (EarthView::World::Spatial::CTileMatrix*) pObjXXXX;
				const EVString __values1 = pObjectX->getKeyword(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
		}
	}
}
