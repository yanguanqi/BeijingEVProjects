/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatiallasproxy/lasoptimizetool.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace SpatialLASConvertProxy
		{
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatiallasconvertproxy_TempVertex_get_1pos_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertex *pObjectX = (EarthView::World::SpatialLASConvertProxy::CTempVertex*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->pos);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_TempVertex_set_1pos_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertex *pObjectX = (EarthView::World::SpatialLASConvertProxy::CTempVertex*)pObjXXXX;
				pObjectX->pos = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatiallasconvertproxy_TempVertex_get_1tex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertex *pObjectX = (EarthView::World::SpatialLASConvertProxy::CTempVertex*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->tex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_TempVertex_set_1tex_1CVector4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertex *pObjectX = (EarthView::World::SpatialLASConvertProxy::CTempVertex*)pObjXXXX;
				pObjectX->tex = *(EarthView::World::Spatial::Math::CVector4*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatiallasconvertproxy_TempVertex_get_1color_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertex *pObjectX = (EarthView::World::SpatialLASConvertProxy::CTempVertex*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->color);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_TempVertex_set_1color_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertex *pObjectX = (EarthView::World::SpatialLASConvertProxy::CTempVertex*)pObjXXXX;
				pObjectX->color = *(EarthView::World::Graphic::CColourValue*) __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_TempVertexVector_push_1back_1CTempVertex(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertex &t = *(EarthView::World::SpatialLASConvertProxy::CTempVertex*) t_j;
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector *pObjectX = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_TempVertexVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector *pObjectX = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatiallasconvertproxy_TempVertexVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector *pObjectX = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjXXXX;
				EarthView::World::SpatialLASConvertProxy::CTempVertex& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatiallasconvertproxy_TempVertexVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector *pObjectX = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjXXXX;
				EarthView::World::SpatialLASConvertProxy::CTempVertex& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_TempVertexVector_insert_1ev_1uint32_1CTempVertex(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::SpatialLASConvertProxy::CTempVertex &t = *(EarthView::World::SpatialLASConvertProxy::CTempVertex*) t_j;
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector *pObjectX = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_TempVertexVector_insert_1ev_1uint32_1CTempVertexVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong other_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector other = *(EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) other_j;
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector *pObjectX = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjXXXX;
				pObjectX->insert(pos, other);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_TempVertexVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector *pObjectX = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatiallasconvertproxy_TempVertexVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::SpatialLASConvertProxy::CTempVertexVector *pObjectX = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatiallasconvertproxy_TempVertexVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector& pObjectX = *(EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::SpatialLASConvertProxy::CTempVertex& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatiallasconvertproxy_TempVertexVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector *pObjectX = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjXXXX;
				EarthView::World::SpatialLASConvertProxy::CTempVertex& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatiallasconvertproxy_TempVertexVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::SpatialLASConvertProxy::CTempVertexVector *pObjectX = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_TempVertexVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector *pObjectX = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_TempVertexVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector *pObjectX = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_TempVertexVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector *pObjectX = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_TempVertexVector_swap_1CTempVertexVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector &rhs = *(EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) rhs_j;
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector *pObjectX = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjXXXX;
				pObjectX->swap(rhs);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeParams_OperatorAssign_1CLasOptimizeParams(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong params_j )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams& pObjectX = *(EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjXXXX;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams &params = *(EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) params_j;
				pObjectX = params;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeParams_00024EVLasOptimizeMethodHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CLasOptimizeParams::LOM_Proportion,
					CLasOptimizeParams::LOM_PointNum
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeParams_setLasOptimizeMethod_1EVLasOptimizeMethod(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint lasOptimizeMethod_j)
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams::EVLasOptimizeMethod lasOptimizeMethod = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams::EVLasOptimizeMethod) lasOptimizeMethod_j;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjXXXX;
				pObjectX->setLasOptimizeMethod(lasOptimizeMethod);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeParams_getLasOptimizeMethod_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjXXXX;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams::EVLasOptimizeMethod __values1 = pObjectX->getLasOptimizeMethod();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeParams_setLasOptimizePersent_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat lasOptimizePersent_j)
			{
				ev_real32 lasOptimizePersent = (ev_real32) lasOptimizePersent_j;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjXXXX;
				pObjectX->setLasOptimizePersent(lasOptimizePersent);
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeParams_getLasOptimizePersent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjXXXX;
				ev_real32 __values1 = pObjectX->getLasOptimizePersent();
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeParams_setLasCountLowerLimit_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lasCountLowerLimit_j)
			{
				ev_uint32 lasCountLowerLimit = (ev_uint32) lasCountLowerLimit_j;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjXXXX;
				pObjectX->setLasCountLowerLimit(lasCountLowerLimit);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeParams_getLasCountLowerLimit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getLasCountLowerLimit();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeParams_setTileVisibleMultiplier_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat multiplier_j)
			{
				ev_real32 multiplier = (ev_real32) multiplier_j;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjXXXX;
				pObjectX->setTileVisibleMultiplier(multiplier);
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeParams_getTileVisibleMultiplier_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjXXXX;
				ev_real32 __values1 = pObjectX->getTileVisibleMultiplier();
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeParams_setConvertToDDS_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean convertToDDS_j)
			{
				ev_bool convertToDDS = (ev_bool) convertToDDS_j;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjXXXX;
				pObjectX->setConvertToDDS(convertToDDS);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeParams_getConvertToDDS_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjXXXX;
				ev_bool __values1 = pObjectX->getConvertToDDS();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeParams_setBuildQuadtree_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean buildQuadTree_j)
			{
				ev_bool buildQuadTree = (ev_bool) buildQuadTree_j;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjXXXX;
				pObjectX->setBuildQuadtree(buildQuadTree);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeParams_getBuildQuadtree_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjXXXX;
				ev_bool __values1 = pObjectX->getBuildQuadtree();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeParams_setCombineSubMesh_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean combineSubMesh_j)
			{
				ev_bool combineSubMesh = (ev_bool) combineSubMesh_j;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjXXXX;
				pObjectX->setCombineSubMesh(combineSubMesh);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeParams_getCombineSubMesh_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjXXXX;
				ev_bool __values1 = pObjectX->getCombineSubMesh();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeParams_setUseDoubleSideLight_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useDoubleSideLight_j)
			{
				ev_bool useDoubleSideLight = (ev_bool) useDoubleSideLight_j;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjXXXX;
				pObjectX->setUseDoubleSideLight(useDoubleSideLight);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeParams_getUseDoubleSideLight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjXXXX;
				ev_bool __values1 = pObjectX->getUseDoubleSideLight();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeParams_setEncodeTo7z_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean encodeTo7z_j)
			{
				ev_bool encodeTo7z = (ev_bool) encodeTo7z_j;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjXXXX;
				pObjectX->setEncodeTo7z(encodeTo7z);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeParams_getEncodeTo7z_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjXXXX;
				ev_bool __values1 = pObjectX->getEncodeTo7z();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeParams_setUseShareMaterial_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useShareMat_j)
			{
				ev_bool useShareMat = (ev_bool) useShareMat_j;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjXXXX;
				pObjectX->setUseShareMaterial(useShareMat);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeParams_getUseShareMaterial_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjXXXX;
				ev_bool __values1 = pObjectX->getUseShareMaterial();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeParams_toXml_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong paramElement_j)
			{
				EarthView::World::Core::CXmlElement &paramElement = *(EarthView::World::Core::CXmlElement*) paramElement_j;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjXXXX;
				pObjectX->toXml(paramElement);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeParams_fromXml_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
			{
				EarthView::World::Core::CXmlElement element = *(EarthView::World::Core::CXmlElement*) element_j;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjXXXX;
				pObjectX->fromXml(element);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeTool_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool* __values1 = EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool::getSingleton();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeTool_destorySingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool::destorySingleton();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeTool_optimizeLas_1StringVector_1CAxisAlignedBox_1CLasOptimizeParams(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataFiles_j, jlong box_j, jlong params_j)
			{
				EarthView::World::Core::StringVector &dataFiles = *(EarthView::World::Core::StringVector*) dataFiles_j;
				EarthView::World::Spatial::Math::CAxisAlignedBox &box = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) box_j;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams &params = *(EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) params_j;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool*) pObjXXXX;
				pObjectX->optimizeLas(dataFiles, box, params);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeTool_writeVertsToFile_1EVString_1CTempVertexVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dataFile_j, jlong vertsList_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dataFile_ch = (const ev_char*)__env->GetStringUTFChars(dataFile_j,JNI_FALSE);
				const EVString dataFile = dataFile_ch;
				__env->ReleaseStringUTFChars(dataFile_j, (const char *)dataFile_ch);
				#else
				const ev_wchar* dataFile_ch = (const ev_wchar*)__env->GetStringChars(dataFile_j,JNI_FALSE);
				const EVString dataFile = dataFile_ch;
				__env->ReleaseStringChars(dataFile_j, (const jchar *)dataFile_ch);
				#endif
				const EarthView::World::SpatialLASConvertProxy::CTempVertexVector &vertsList = *(EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) vertsList_j;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool*) pObjXXXX;
				pObjectX->writeVertsToFile(dataFile, vertsList);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeTool_translateSubMesh_1CMatrix4_1CSubMesh(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong translateM_j, jlong subMesh_j)
			{
				EarthView::World::Spatial::Math::CMatrix4 translateM = *(EarthView::World::Spatial::Math::CMatrix4*) translateM_j;
				EarthView::World::Graphic::CSubMesh *subMesh = (EarthView::World::Graphic::CSubMesh*) subMesh_j;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool*) pObjXXXX;
				pObjectX->translateSubMesh(translateM, subMesh);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeTool_createLasMetaInfoDB_1CObliqueDBUtility(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dbUtility_j)
			{
				EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *dbUtility = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) dbUtility_j;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool*) pObjXXXX;
				ev_bool __values1 = pObjectX->createLasMetaInfoDB(dbUtility);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasOptimizeTool_writeLasMetaInfo2DB_1CObliqueDBUtility_1EVString_1ev_1real32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dbUtility_j, jstring name_j, jfloat value_j, jlong type_j)
			{
				EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility *dbUtility = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) dbUtility_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				ev_real32 value = (ev_real32) value_j;
				ev_uint32 type = (ev_uint32) type_j;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool*) pObjXXXX;
				ev_bool __values1 = pObjectX->writeLasMetaInfo2DB(dbUtility, name, value, type);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
		}
	}
}
