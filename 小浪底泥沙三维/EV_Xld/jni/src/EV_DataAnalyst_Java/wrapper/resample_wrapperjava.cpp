/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "dataanalyst/resample.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace GeoCorretion
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geocorretion_EvDataAnalystGlobal_getSuggestOutPut_1void_1ev_1int32_1ev_1int32_1ev_1real64(JNIEnv *__env, jclass __clazz, jlong pTrans_j, jlong nWidth_j, jlong nHeight_j, jlong dfGeoTransform_j)
				{
					void *pTrans = (void*) pTrans_j;
					ev_int32 &nWidth = *(ev_int32*) nWidth_j;
					ev_int32 &nHeight = *(ev_int32*) nHeight_j;
					ev_real64 *dfGeoTransform = (ev_real64*) dfGeoTransform_j;
					getSuggestOutPut(pTrans, nWidth, nHeight, dfGeoTransform);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geocorretion_EvDataAnalystGlobal_genCreateTransformerArg_1void_1void_1ev_1real64_1ev_1int32(JNIEnv *__env, jclass __clazz, jlong pRectifyRef_j, jlong pStdImageRef_j, jlong pParameter_j, jint iCount_j)
				{
					const void *pRectifyRef = (const void*) pRectifyRef_j;
					const void *pStdImageRef = (const void*) pStdImageRef_j;
					const ev_real64 *pParameter = (const ev_real64*) pParameter_j;
					ev_int32 iCount = (ev_int32) iCount_j;
					void* __values1 = genCreateTransformerArg(pRectifyRef, pStdImageRef, pParameter, iCount);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geocorretion_EvDataAnalystGlobal_destroyTransformH_1void(JNIEnv *__env, jclass __clazz, jlong hTrans_j)
				{
					void *hTrans = (void*) hTrans_j;
					destroyTransformH(hTrans);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geocorretion_RectifyResampleWarper_OperatorAssign_1RectifyResampleWarper(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper& pObjectX = *(EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*) pObjXXXX;
					const EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper &other = *(EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*) other_j;
					pObjectX = other;
					EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geocorretion_RectifyResampleWarper_get_1hSrc_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->hSrc);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geocorretion_RectifyResampleWarper_set_1hSrc_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*)pObjXXXX;
					pObjectX->hSrc = (void*) __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_geocorretion_RectifyResampleWarper_get_1resampleMth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->resampleMth);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geocorretion_RectifyResampleWarper_set_1resampleMth_1ResampleType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*)pObjXXXX;
					pObjectX->resampleMth = (EarthView::World::Spatial2D::GeoCorretion::ResampleType)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geocorretion_RectifyResampleWarper_get_1hTransformer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->hTransformer);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geocorretion_RectifyResampleWarper_set_1hTransformer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*)pObjXXXX;
					pObjectX->hTransformer = (void*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geocorretion_RectifyResampleWarper_get_1ProgressArg_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->ProgressArg);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geocorretion_RectifyResampleWarper_set_1ProgressArg_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*)pObjXXXX;
					pObjectX->ProgressArg = (void*) __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_geocorretion_RectifyResampleWarper_get_1dfNodatavalue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->dfNodatavalue);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geocorretion_RectifyResampleWarper_set_1dfNodatavalue_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*)pObjXXXX;
					pObjectX->dfNodatavalue = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_geocorretion_RectifyResampleWarper_get_1nWorkingBandCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->nWorkingBandCount);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geocorretion_RectifyResampleWarper_set_1nWorkingBandCount_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*)pObjXXXX;
					pObjectX->nWorkingBandCount = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geocorretion_RectifyResampleWarper_get_1pWorkingBandIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->pWorkingBandIndex);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geocorretion_RectifyResampleWarper_set_1pWorkingBandIndex_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*)pObjXXXX;
					pObjectX->pWorkingBandIndex = (ev_int32*) __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_geocorretion_ResamplerOprator_inlitialOperator_1RectifyResampleWarper(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong warper_j)
				{
					const EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper &warper = *(EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*) warper_j;
					EarthView::World::Spatial2D::GeoCorretion::ResamplerOprator *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::ResamplerOprator*) pObjXXXX;
					ev_int32 __values1 = pObjectX->inlitialOperator(warper);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geocorretion_ResamplerOprator_CreateAndResample_1ev_1char(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pszFullpath_j)
				{
					const ev_char *pszFullpath = (const ev_char*) pszFullpath_j;
					EarthView::World::Spatial2D::GeoCorretion::ResamplerOprator *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::ResamplerOprator*) pObjXXXX;
					ev_bool __values1 = pObjectX->CreateAndResample(pszFullpath);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geocorretion_ResamplerOprator_resampleBuffer_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1uchar(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint destOffX_j, jint destOffY_j, jint W_j, jint H_j, jlong pBuffer_j)
				{
					ev_int32 destOffX = (ev_int32) destOffX_j;
					ev_int32 destOffY = (ev_int32) destOffY_j;
					ev_int32 W = (ev_int32) W_j;
					ev_int32 H = (ev_int32) H_j;
					ev_uchar *pBuffer = (ev_uchar*) pBuffer_j;
					EarthView::World::Spatial2D::GeoCorretion::ResamplerOprator *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::ResamplerOprator*) pObjXXXX;
					ev_bool __values1 = pObjectX->resampleBuffer(destOffX, destOffY, W, H, pBuffer);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
