/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "dataanalyst/rectification.h"
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geocorretion_Rectification_setRectifySpatialRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pRef_j)
				{
					void *ref_pRef = (void*) ref_pRef_j;
					EarthView::World::Spatial2D::GeoCorretion::CRectification *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::CRectification*) pObjXXXX;
					pObjectX->setRectifySpatialRef(ref_pRef);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geocorretion_Rectification_setStdImgSpatialRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pRef_j)
				{
					void *ref_pRef = (void*) ref_pRef_j;
					EarthView::World::Spatial2D::GeoCorretion::CRectification *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::CRectification*) pObjXXXX;
					pObjectX->setStdImgSpatialRef(ref_pRef);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geocorretion_Rectification_setRectifyModel_1RectifyModelType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint eModel_j)
				{
					EarthView::World::Spatial2D::GeoCorretion::RectifyModelType eModel = (EarthView::World::Spatial2D::GeoCorretion::RectifyModelType) eModel_j;
					EarthView::World::Spatial2D::GeoCorretion::CRectification *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::CRectification*) pObjXXXX;
					pObjectX->setRectifyModel(eModel);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_geocorretion_Rectification_getRectifyModel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::GeoCorretion::CRectification *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::CRectification*) pObjXXXX;
					EarthView::World::Spatial2D::GeoCorretion::RectifyModelType __values1 = pObjectX->getRectifyModel();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_geocorretion_Rectification_setDataToCompute_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nPts_j, jlong pSrcCrd_j, jlong pDstCrd_j, jint nCrdSpace_j, jlong pProcessFlag_j)
				{
					ev_int32 nPts = (ev_int32) nPts_j;
					ev_real64 *pSrcCrd = (ev_real64*) pSrcCrd_j;
					ev_real64 *pDstCrd = (ev_real64*) pDstCrd_j;
					ev_int32 nCrdSpace = (ev_int32) nCrdSpace_j;
					ev_int32 *pProcessFlag = (ev_int32*) pProcessFlag_j;
					EarthView::World::Spatial2D::GeoCorretion::CRectification *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::CRectification*) pObjXXXX;
					ev_int32 __values1 = pObjectX->setDataToCompute(nPts, pSrcCrd, pDstCrd, nCrdSpace, pProcessFlag);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geocorretion_Rectification_getParameter_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong idimension_j)
				{
					ev_int32 &idimension = *(ev_int32*) idimension_j;
					const 					EarthView::World::Spatial2D::GeoCorretion::CRectification *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::CRectification*) pObjXXXX;
					const ev_real64* __values1 = pObjectX->getParameter(idimension);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geocorretion_Rectification_getBias_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong idimension_j)
				{
					ev_int32 &idimension = *(ev_int32*) idimension_j;
					const 					EarthView::World::Spatial2D::GeoCorretion::CRectification *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::CRectification*) pObjXXXX;
					const ev_real64* __values1 = pObjectX->getBias(idimension);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geocorretion_Rectification_getTransformer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::GeoCorretion::CRectification *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::CRectification*) pObjXXXX;
					const void* __values1 = pObjectX->getTransformer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geocorretion_Rectification_transformForward_1ev_1int32_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nPts_j, jlong pDfX_j, jlong pDfY_j)
				{
					ev_int32 nPts = (ev_int32) nPts_j;
					ev_real64 *pDfX = (ev_real64*) pDfX_j;
					ev_real64 *pDfY = (ev_real64*) pDfY_j;
					EarthView::World::Spatial2D::GeoCorretion::CRectification *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::CRectification*) pObjXXXX;
					ev_bool __values1 = pObjectX->transformForward(nPts, pDfX, pDfY);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geocorretion_Rectification_transformInverse_1ev_1int32_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nPts_j, jlong pDfX_j, jlong pDfY_j)
				{
					ev_int32 nPts = (ev_int32) nPts_j;
					ev_real64 *pDfX = (ev_real64*) pDfX_j;
					ev_real64 *pDfY = (ev_real64*) pDfY_j;
					EarthView::World::Spatial2D::GeoCorretion::CRectification *pObjectX = (EarthView::World::Spatial2D::GeoCorretion::CRectification*) pObjXXXX;
					ev_bool __values1 = pObjectX->transformInverse(nPts, pDfX, pDfY);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
