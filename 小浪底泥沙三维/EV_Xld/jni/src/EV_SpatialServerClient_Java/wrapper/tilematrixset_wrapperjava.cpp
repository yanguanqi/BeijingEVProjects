/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/tilematrixset.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileMatrixSet_getIdentifier_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileMatrixSet *pObjectX = (EarthView::World::Spatial::CTileMatrixSet*) pObjXXXX;
				const EVString& __values1 = pObjectX->getIdentifier();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileMatrixSet_getSupportedCRS_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileMatrixSet *pObjectX = (EarthView::World::Spatial::CTileMatrixSet*) pObjXXXX;
				const EVString& __values1 = pObjectX->getSupportedCRS();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileMatrixSet_getWellKnownScaleSet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileMatrixSet *pObjectX = (EarthView::World::Spatial::CTileMatrixSet*) pObjXXXX;
				const EVString& __values1 = pObjectX->getWellKnownScaleSet();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileMatrixSet_getTileMatrixCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileMatrixSet *pObjectX = (EarthView::World::Spatial::CTileMatrixSet*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getTileMatrixCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileMatrixSet_getTileMatrixRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CTileMatrixSet *pObjectX = (EarthView::World::Spatial::CTileMatrixSet*) pObjXXXX;
				const EarthView::World::Spatial::CTileMatrix* __values1 = pObjectX->getTileMatrixRef(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileMatrixSet_getTileMatrixRef_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring tileMatrix_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* tileMatrix_ch = (const ev_char*)__env->GetStringUTFChars(tileMatrix_j,JNI_FALSE);
				const EVString tileMatrix = tileMatrix_ch;
				__env->ReleaseStringUTFChars(tileMatrix_j, (const char *)tileMatrix_ch);
				#else
				const ev_wchar* tileMatrix_ch = (const ev_wchar*)__env->GetStringChars(tileMatrix_j,JNI_FALSE);
				const EVString tileMatrix = tileMatrix_ch;
				__env->ReleaseStringChars(tileMatrix_j, (const jchar *)tileMatrix_ch);
				#endif
				const 				EarthView::World::Spatial::CTileMatrixSet *pObjectX = (EarthView::World::Spatial::CTileMatrixSet*) pObjXXXX;
				const EarthView::World::Spatial::CTileMatrix* __values1 = pObjectX->getTileMatrixRef(tileMatrix);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileMatrixSet_getBoundingBoxRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileMatrixSet *pObjectX = (EarthView::World::Spatial::CTileMatrixSet*) pObjXXXX;
				const EarthView::World::Spatial::COGCWebServiceBoundingBox* __values1 = pObjectX->getBoundingBoxRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileMatrixSet_getTitleCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CTileMatrixSet *pObjectX = (EarthView::World::Spatial::CTileMatrixSet*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getTitleCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_TileMatrixSet_getTitle_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CTileMatrixSet *pObjectX = (EarthView::World::Spatial::CTileMatrixSet*) pObjXXXX;
				const EVString __values1 = pObjectX->getTitle(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileMatrixSet_getAbstractCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CTileMatrixSet *pObjectX = (EarthView::World::Spatial::CTileMatrixSet*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getAbstractCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_TileMatrixSet_getAbstract_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CTileMatrixSet *pObjectX = (EarthView::World::Spatial::CTileMatrixSet*) pObjXXXX;
				const EVString __values1 = pObjectX->getAbstract(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileMatrixSet_getKeywordCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CTileMatrixSet *pObjectX = (EarthView::World::Spatial::CTileMatrixSet*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getKeywordCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_TileMatrixSet_getKeyword_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CTileMatrixSet *pObjectX = (EarthView::World::Spatial::CTileMatrixSet*) pObjXXXX;
				const EVString __values1 = pObjectX->getKeyword(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
		}
	}
}
