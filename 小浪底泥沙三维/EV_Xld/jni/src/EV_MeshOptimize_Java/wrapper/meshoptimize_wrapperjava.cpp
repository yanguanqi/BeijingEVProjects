/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "meshoptimize/meshoptimize.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace MeshOptimize
	{
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_OperatorAssign_1CMeshOptimizeParams(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong params_j )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams& pObjectX = *(EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			EarthView::MeshOptimize::CMeshOptimizeParams &params = *(EarthView::MeshOptimize::CMeshOptimizeParams*) params_j;
			pObjectX = params;
		}
		extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_00024EVTriangleOptimizeTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
		{
			jint enum_values[] = {
				CMeshOptimizeParams::TOT_EdgeOptimize,
				CMeshOptimizeParams::TOT_FaceOptimize
			};
			jintArray array = __env->NewIntArray(2);
			__env->SetIntArrayRegion(array, 0, 2, enum_values);
			return array;
		}
		extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_00024EVTriangleOptimizeMethodHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
		{
			jint enum_values[] = {
				CMeshOptimizeParams::TOM_Proportion,
				CMeshOptimizeParams::TOM_TriangleNum
			};
			jintArray array = __env->NewIntArray(2);
			__env->SetIntArrayRegion(array, 0, 2, enum_values);
			return array;
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_00024BoxSizeWithProportion_Create(JNIEnv *__env, jclass __clazz)
		{
			EarthView::MeshOptimize::CMeshOptimizeParams::BoxSizeWithProportion *pObjectX = new EarthView::MeshOptimize::CMeshOptimizeParams::BoxSizeWithProportion();
			return (jlong) pObjectX;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_00024BoxSizeWithProportion_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimizeParams::BoxSizeWithProportion *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams::BoxSizeWithProportion*)pObjXXXX;
			delete pObjectX;
		}
		extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_00024BoxSizeWithProportion_get_1triangleCountBoundary_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimizeParams::BoxSizeWithProportion *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams::BoxSizeWithProportion*)pObjXXXX;
			jfloat __values1_j = (jfloat)(pObjectX->triangleCountBoundary);
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_00024BoxSizeWithProportion_set_1triangleCountBoundary_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
		{
			EarthView::MeshOptimize::CMeshOptimizeParams::BoxSizeWithProportion *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams::BoxSizeWithProportion*)pObjXXXX;
			pObjectX->triangleCountBoundary = (ev_real32)__values1_j;
		}
		extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_00024BoxSizeWithProportion_get_1optimizePersentLimit_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimizeParams::BoxSizeWithProportion *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams::BoxSizeWithProportion*)pObjXXXX;
			jfloat __values1_j = (jfloat)(pObjectX->optimizePersentLimit);
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_00024BoxSizeWithProportion_set_1optimizePersentLimit_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
		{
			EarthView::MeshOptimize::CMeshOptimizeParams::BoxSizeWithProportion *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams::BoxSizeWithProportion*)pObjXXXX;
			pObjectX->optimizePersentLimit = (ev_real32)__values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_setTriangleOptimizeType_1EVTriangleOptimizeType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint triOptimizeType_j)
		{
			EarthView::MeshOptimize::CMeshOptimizeParams::EVTriangleOptimizeType triOptimizeType = (EarthView::MeshOptimize::CMeshOptimizeParams::EVTriangleOptimizeType) triOptimizeType_j;
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			pObjectX->setTriangleOptimizeType(triOptimizeType);
		}
		extern "C" JNIEXPORT jint JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_getTriangleOptimizeType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			EarthView::MeshOptimize::CMeshOptimizeParams::EVTriangleOptimizeType __values1 = pObjectX->getTriangleOptimizeType();
			jint __values1_j = (jint) __values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_setTriangleOptimizeMethod_1EVTriangleOptimizeMethod(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint triOptimizeMethod_j)
		{
			EarthView::MeshOptimize::CMeshOptimizeParams::EVTriangleOptimizeMethod triOptimizeMethod = (EarthView::MeshOptimize::CMeshOptimizeParams::EVTriangleOptimizeMethod) triOptimizeMethod_j;
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			pObjectX->setTriangleOptimizeMethod(triOptimizeMethod);
		}
		extern "C" JNIEXPORT jint JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_getTriangleOptimizeMethod_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			EarthView::MeshOptimize::CMeshOptimizeParams::EVTriangleOptimizeMethod __values1 = pObjectX->getTriangleOptimizeMethod();
			jint __values1_j = (jint) __values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_setDefaultOptimizePersent_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat defaultOptimizePersent_j)
		{
			ev_real32 defaultOptimizePersent = (ev_real32) defaultOptimizePersent_j;
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			pObjectX->setDefaultOptimizePersent(defaultOptimizePersent);
		}
		extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_getDefaultOptimizePersent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			ev_real32 __values1 = pObjectX->getDefaultOptimizePersent();
			jfloat __values1_j = (jfloat)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_setLineOptimizePersent_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat lineOptimizePersent_j)
		{
			ev_real32 lineOptimizePersent = (ev_real32) lineOptimizePersent_j;
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			pObjectX->setLineOptimizePersent(lineOptimizePersent);
		}
		extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_getLineOptimizePersent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			ev_real32 __values1 = pObjectX->getLineOptimizePersent();
			jfloat __values1_j = (jfloat)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_setSubmeshTrangleCountLowerLimit_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong submeshTrangleCountLowerLimit_j)
		{
			ev_uint32 submeshTrangleCountLowerLimit = (ev_uint32) submeshTrangleCountLowerLimit_j;
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			pObjectX->setSubmeshTrangleCountLowerLimit(submeshTrangleCountLowerLimit);
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_getSubmeshTrangleCountLowerLimit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			ev_uint32 __values1 = pObjectX->getSubmeshTrangleCountLowerLimit();
			jlong __values1_j = (jlong) __values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_setTriangleRelationshipRebulid_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean triRelationshipRebulid_j)
		{
			ev_bool triRelationshipRebulid = (ev_bool) triRelationshipRebulid_j;
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			pObjectX->setTriangleRelationshipRebulid(triRelationshipRebulid);
		}
		extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_getTriangleRelationshipRebulid_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			ev_bool __values1 = pObjectX->getTriangleRelationshipRebulid();
			jboolean __values1_j = (jboolean)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_setConvertToDDS_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean toDDS_j)
		{
			ev_bool toDDS = (ev_bool) toDDS_j;
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			pObjectX->setConvertToDDS(toDDS);
		}
		extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_getConvertToDDS_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			ev_bool __values1 = pObjectX->getConvertToDDS();
			jboolean __values1_j = (jboolean)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_setBuildQuadtree_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean buildQuadTree_j)
		{
			ev_bool buildQuadTree = (ev_bool) buildQuadTree_j;
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			pObjectX->setBuildQuadtree(buildQuadTree);
		}
		extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_getBuildQuadtree_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			ev_bool __values1 = pObjectX->getBuildQuadtree();
			jboolean __values1_j = (jboolean)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_setCombineSubMesh_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean combineSubMesh_j)
		{
			ev_bool combineSubMesh = (ev_bool) combineSubMesh_j;
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			pObjectX->setCombineSubMesh(combineSubMesh);
		}
		extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_getCombineSubMesh_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			ev_bool __values1 = pObjectX->getCombineSubMesh();
			jboolean __values1_j = (jboolean)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_setUseDoubleSideLight_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useDoubleSideLight_j)
		{
			ev_bool useDoubleSideLight = (ev_bool) useDoubleSideLight_j;
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			pObjectX->setUseDoubleSideLight(useDoubleSideLight);
		}
		extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_getUseDoubleSideLight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			ev_bool __values1 = pObjectX->getUseDoubleSideLight();
			jboolean __values1_j = (jboolean)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_setMaxVertexCombineNormalAngle_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat maxNormalAngle_j)
		{
			ev_real32 maxNormalAngle = (ev_real32) maxNormalAngle_j;
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			pObjectX->setMaxVertexCombineNormalAngle(maxNormalAngle);
		}
		extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_getMaxVertexCombineNormalAngle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			ev_real32 __values1 = pObjectX->getMaxVertexCombineNormalAngle();
			jfloat __values1_j = (jfloat)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_toXml_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong paramElement_j)
		{
			EarthView::World::Core::CXmlElement &paramElement = *(EarthView::World::Core::CXmlElement*) paramElement_j;
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			pObjectX->toXml(paramElement);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_fromXml_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
		{
			EarthView::World::Core::CXmlElement element = *(EarthView::World::Core::CXmlElement*) element_j;
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			pObjectX->fromXml(element);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_setEncodeTo7z_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean encodeTo7z_j)
		{
			ev_bool encodeTo7z = (ev_bool) encodeTo7z_j;
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			pObjectX->setEncodeTo7z(encodeTo7z);
		}
		extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_getEncodeTo7z_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			ev_bool __values1 = pObjectX->getEncodeTo7z();
			jboolean __values1_j = (jboolean)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_setSubmeshCountUpperLimit_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong submeshCountUpperLimit_j)
		{
			ev_uint32 submeshCountUpperLimit = (ev_uint32) submeshCountUpperLimit_j;
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			pObjectX->setSubmeshCountUpperLimit(submeshCountUpperLimit);
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_getSubmeshCountUpperLimit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			ev_uint32 __values1 = pObjectX->getSubmeshCountUpperLimit();
			jlong __values1_j = (jlong) __values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_setDiscardTrangleCountLowerLimit_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat discardTrangleCountLowerLimit_j)
		{
			ev_real32 discardTrangleCountLowerLimit = (ev_real32) discardTrangleCountLowerLimit_j;
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			pObjectX->setDiscardTrangleCountLowerLimit(discardTrangleCountLowerLimit);
		}
		extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_getDiscardTrangleCountLowerLimit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			ev_real32 __values1 = pObjectX->getDiscardTrangleCountLowerLimit();
			jfloat __values1_j = (jfloat)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_setOptimizeParamLimit_1BoxSizeWithProportion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bigSubmeshOptimizeParam_j)
		{
			EarthView::MeshOptimize::CMeshOptimizeParams::BoxSizeWithProportion bigSubmeshOptimizeParam = *(EarthView::MeshOptimize::CMeshOptimizeParams::BoxSizeWithProportion*) bigSubmeshOptimizeParam_j;
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			pObjectX->setOptimizeParamLimit(bigSubmeshOptimizeParam);
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_getOptimizeParamLimit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			EarthView::MeshOptimize::CMeshOptimizeParams::BoxSizeWithProportion __values1 = pObjectX->getOptimizeParamLimit();
			jlong __values1_j = (jlong) &__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_setTileVisibleMultiplier_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat multiplier_j)
		{
			ev_real32 multiplier = (ev_real32) multiplier_j;
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			pObjectX->setTileVisibleMultiplier(multiplier);
		}
		extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_getTileVisibleMultiplier_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			ev_real32 __values1 = pObjectX->getTileVisibleMultiplier();
			jfloat __values1_j = (jfloat)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_setUseShareMaterial_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useShareMat_j)
		{
			ev_bool useShareMat = (ev_bool) useShareMat_j;
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			pObjectX->setUseShareMaterial(useShareMat);
		}
		extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_meshoptimize_MeshOptimizeParams_getUseShareMaterial_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimizeParams *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX;
			ev_bool __values1 = pObjectX->getUseShareMaterial();
			jboolean __values1_j = (jboolean)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_MeshOptimize_00024NormAndVertexInfo_Create(JNIEnv *__env, jclass __clazz)
		{
			EarthView::MeshOptimize::CMeshOptimize::CNormAndVertexInfo *pObjectX = new EarthView::MeshOptimize::CMeshOptimize::CNormAndVertexInfo();
			return (jlong) pObjectX;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimize_00024NormAndVertexInfo_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimize::CNormAndVertexInfo *pObjectX = (EarthView::MeshOptimize::CMeshOptimize::CNormAndVertexInfo*)pObjXXXX;
			delete pObjectX;
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_MeshOptimize_00024NormAndVertexInfo_get_1faceNormal_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimize::CNormAndVertexInfo *pObjectX = (EarthView::MeshOptimize::CMeshOptimize::CNormAndVertexInfo*)pObjXXXX;
			jlong __values1_j = (jlong) &(pObjectX->faceNormal);
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimize_00024NormAndVertexInfo_set_1faceNormal_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
		{
			EarthView::MeshOptimize::CMeshOptimize::CNormAndVertexInfo *pObjectX = (EarthView::MeshOptimize::CMeshOptimize::CNormAndVertexInfo*)pObjXXXX;
			pObjectX->faceNormal = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_MeshOptimize_00024NormAndVertexInfo_get_1dstVertexIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimize::CNormAndVertexInfo *pObjectX = (EarthView::MeshOptimize::CMeshOptimize::CNormAndVertexInfo*)pObjXXXX;
			jlong __values1_j = (jlong) (pObjectX->dstVertexIndex);
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimize_00024NormAndVertexInfo_set_1dstVertexIndex_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
		{
			EarthView::MeshOptimize::CMeshOptimize::CNormAndVertexInfo *pObjectX = (EarthView::MeshOptimize::CMeshOptimize::CNormAndVertexInfo*)pObjXXXX;
			pObjectX->dstVertexIndex = (ev_uint32)__values1_j;
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_MeshOptimize_00024NormalInfo_Create(JNIEnv *__env, jclass __clazz)
		{
			EarthView::MeshOptimize::CMeshOptimize::CNormalInfo *pObjectX = new EarthView::MeshOptimize::CMeshOptimize::CNormalInfo();
			return (jlong) pObjectX;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimize_00024NormalInfo_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimize::CNormalInfo *pObjectX = (EarthView::MeshOptimize::CMeshOptimize::CNormalInfo*)pObjXXXX;
			delete pObjectX;
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_MeshOptimize_00024NormalInfo_get_1faceNormal_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimize::CNormalInfo *pObjectX = (EarthView::MeshOptimize::CMeshOptimize::CNormalInfo*)pObjXXXX;
			jlong __values1_j = (jlong) &(pObjectX->faceNormal);
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimize_00024NormalInfo_set_1faceNormal_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
		{
			EarthView::MeshOptimize::CMeshOptimize::CNormalInfo *pObjectX = (EarthView::MeshOptimize::CMeshOptimize::CNormalInfo*)pObjXXXX;
			pObjectX->faceNormal = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
		}
		extern "C" JNIEXPORT jlongArray JNICALL Java_com_earthview_meshoptimize_MeshOptimize_00024NormalInfo_get_1vertexNormal_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimize::CNormalInfo *pObjectX = (EarthView::MeshOptimize::CMeshOptimize::CNormalInfo*)pObjXXXX;
			jlongArray __values1_j = __env->NewLongArray(3);
			jlong __values1_lon[3];
			for (int i=0; i<3; i++)
			{
				__values1_lon[i] = (jlong)&pObjectX->vertexNormal[i];
			}
			__env->SetLongArrayRegion(__values1_j,0,3,__values1_lon);
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimize_00024NormalInfo_set_1vertexNormal_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlongArray __values1_j)
		{
			EarthView::MeshOptimize::CMeshOptimize::CNormalInfo *pObjectX = (EarthView::MeshOptimize::CMeshOptimize::CNormalInfo*)pObjXXXX;
			jlong __values1_lon[3];
			__env->GetLongArrayRegion(__values1_j,0,3,__values1_lon);
			for (int i=0; i<3; i++)
			{
				pObjectX->vertexNormal[i] = *(EarthView::World::Spatial::Math::CVector3*)__values1_lon[i];
			}
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimize_addVertex_1float_1float_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat x_j, jfloat y_j, jfloat z_j)
		{
			float x = (float) x_j;
			float y = (float) y_j;
			float z = (float) z_j;
			EarthView::MeshOptimize::CMeshOptimize *pObjectX = (EarthView::MeshOptimize::CMeshOptimize*) pObjXXXX;
			pObjectX->addVertex(x, y, z);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimize_addNormal_1float_1float_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat x_j, jfloat y_j, jfloat z_j)
		{
			float x = (float) x_j;
			float y = (float) y_j;
			float z = (float) z_j;
			EarthView::MeshOptimize::CMeshOptimize *pObjectX = (EarthView::MeshOptimize::CMeshOptimize*) pObjXXXX;
			pObjectX->addNormal(x, y, z);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimize_addTex_1float_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat u_j, jfloat v_j)
		{
			float u = (float) u_j;
			float v = (float) v_j;
			EarthView::MeshOptimize::CMeshOptimize *pObjectX = (EarthView::MeshOptimize::CMeshOptimize*) pObjXXXX;
			pObjectX->addTex(u, v);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimize_addColor_1float_1float_1float_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat r_j, jfloat g_j, jfloat b_j, jfloat a_j)
		{
			float r = (float) r_j;
			float g = (float) g_j;
			float b = (float) b_j;
			float a = (float) a_j;
			EarthView::MeshOptimize::CMeshOptimize *pObjectX = (EarthView::MeshOptimize::CMeshOptimize*) pObjXXXX;
			pObjectX->addColor(r, g, b, a);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimize_addFace_1ev_1uint32_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong v0_j, jlong v1_j, jlong v2_j)
		{
			ev_uint32 v0 = (ev_uint32) v0_j;
			ev_uint32 v1 = (ev_uint32) v1_j;
			ev_uint32 v2 = (ev_uint32) v2_j;
			EarthView::MeshOptimize::CMeshOptimize *pObjectX = (EarthView::MeshOptimize::CMeshOptimize*) pObjXXXX;
			pObjectX->addFace(v0, v1, v2);
		}
		extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_meshoptimize_MeshOptimize_optimize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimize *pObjectX = (EarthView::MeshOptimize::CMeshOptimize*) pObjXXXX;
			ev_bool __values1 = pObjectX->optimize();
			jboolean __values1_j = (jboolean)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_meshoptimize_MeshOptimize_vertex_1is_1valid_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vertexID_j)
		{
			ev_uint32 vertexID = (ev_uint32) vertexID_j;
			EarthView::MeshOptimize::CMeshOptimize *pObjectX = (EarthView::MeshOptimize::CMeshOptimize*) pObjXXXX;
			ev_bool __values1 = pObjectX->vertex_is_valid(vertexID);
			jboolean __values1_j = (jboolean)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_MeshOptimize_vertexCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimize *pObjectX = (EarthView::MeshOptimize::CMeshOptimize*) pObjXXXX;
			ev_uint32 __values1 = pObjectX->vertexCount();
			jlong __values1_j = (jlong) __values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimize_vertex_1ev_1uint32_1float_1float_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong i_j, jlong x_j, jlong y_j, jlong z_j)
		{
			ev_uint32 i = (ev_uint32) i_j;
			float &x = *(float*) x_j;
			float &y = *(float*) y_j;
			float &z = *(float*) z_j;
			EarthView::MeshOptimize::CMeshOptimize *pObjectX = (EarthView::MeshOptimize::CMeshOptimize*) pObjXXXX;
			pObjectX->vertex(i, x, y, z);
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_MeshOptimize_normalCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimize *pObjectX = (EarthView::MeshOptimize::CMeshOptimize*) pObjXXXX;
			ev_uint32 __values1 = pObjectX->normalCount();
			jlong __values1_j = (jlong) __values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimize_normal_1ev_1uint32_1float_1float_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong i_j, jlong x_j, jlong y_j, jlong z_j)
		{
			ev_uint32 i = (ev_uint32) i_j;
			float &x = *(float*) x_j;
			float &y = *(float*) y_j;
			float &z = *(float*) z_j;
			EarthView::MeshOptimize::CMeshOptimize *pObjectX = (EarthView::MeshOptimize::CMeshOptimize*) pObjXXXX;
			pObjectX->normal(i, x, y, z);
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_MeshOptimize_texCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimize *pObjectX = (EarthView::MeshOptimize::CMeshOptimize*) pObjXXXX;
			ev_uint32 __values1 = pObjectX->texCount();
			jlong __values1_j = (jlong) __values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimize_tex_1ev_1uint32_1float_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong i_j, jlong u_j, jlong v_j)
		{
			ev_uint32 i = (ev_uint32) i_j;
			float &u = *(float*) u_j;
			float &v = *(float*) v_j;
			EarthView::MeshOptimize::CMeshOptimize *pObjectX = (EarthView::MeshOptimize::CMeshOptimize*) pObjXXXX;
			pObjectX->tex(i, u, v);
		}
		extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_meshoptimize_MeshOptimize_face_1is_1valid_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong faceID_j)
		{
			ev_uint32 faceID = (ev_uint32) faceID_j;
			EarthView::MeshOptimize::CMeshOptimize *pObjectX = (EarthView::MeshOptimize::CMeshOptimize*) pObjXXXX;
			ev_bool __values1 = pObjectX->face_is_valid(faceID);
			jboolean __values1_j = (jboolean)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_MeshOptimize_faceCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimize *pObjectX = (EarthView::MeshOptimize::CMeshOptimize*) pObjXXXX;
			ev_uint32 __values1 = pObjectX->faceCount();
			jlong __values1_j = (jlong) __values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimize_face_1ev_1uint32_1ev_1uint32_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong i_j, jlong v0_j, jlong v1_j, jlong v2_j)
		{
			ev_uint32 i = (ev_uint32) i_j;
			ev_uint32 &v0 = *(ev_uint32*) v0_j;
			ev_uint32 &v1 = *(ev_uint32*) v1_j;
			ev_uint32 &v2 = *(ev_uint32*) v2_j;
			EarthView::MeshOptimize::CMeshOptimize *pObjectX = (EarthView::MeshOptimize::CMeshOptimize*) pObjXXXX;
			pObjectX->face(i, v0, v1, v2);
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_MeshOptimize_colorCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimize *pObjectX = (EarthView::MeshOptimize::CMeshOptimize*) pObjXXXX;
			ev_uint32 __values1 = pObjectX->colorCount();
			jlong __values1_j = (jlong) __values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimize_color_1ev_1uint32_1float_1float_1float_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong i_j, jlong r_j, jlong g_j, jlong b_j, jlong a_j)
		{
			ev_uint32 i = (ev_uint32) i_j;
			float &r = *(float*) r_j;
			float &g = *(float*) g_j;
			float &b = *(float*) b_j;
			float &a = *(float*) a_j;
			EarthView::MeshOptimize::CMeshOptimize *pObjectX = (EarthView::MeshOptimize::CMeshOptimize*) pObjXXXX;
			pObjectX->color(i, r, g, b, a);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimize_dispose_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimize *pObjectX = (EarthView::MeshOptimize::CMeshOptimize*) pObjXXXX;
			pObjectX->dispose();
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimize_createStdModel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimize *pObjectX = (EarthView::MeshOptimize::CMeshOptimize*) pObjXXXX;
			pObjectX->createStdModel();
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimize_initializeQSlim_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimize *pObjectX = (EarthView::MeshOptimize::CMeshOptimize*) pObjXXXX;
			pObjectX->initializeQSlim();
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimize_computeFaceNormal_1ev_1uint32_1float_1float_1float_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong f_j, jlong x_j, jlong y_j, jlong z_j, jboolean will_unitize_j)
		{
			ev_uint32 f = (ev_uint32) f_j;
			float &x = *(float*) x_j;
			float &y = *(float*) y_j;
			float &z = *(float*) z_j;
			bool will_unitize = (bool) will_unitize_j;
			EarthView::MeshOptimize::CMeshOptimize *pObjectX = (EarthView::MeshOptimize::CMeshOptimize*) pObjXXXX;
			pObjectX->computeFaceNormal(f, x, y, z, will_unitize);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimize_computeVertexNormal_1ev_1uint32_1float_1float_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong v_j, jlong x_j, jlong y_j, jlong z_j)
		{
			ev_uint32 v = (ev_uint32) v_j;
			float &x = *(float*) x_j;
			float &y = *(float*) y_j;
			float &z = *(float*) z_j;
			EarthView::MeshOptimize::CMeshOptimize *pObjectX = (EarthView::MeshOptimize::CMeshOptimize*) pObjXXXX;
			pObjectX->computeVertexNormal(v, x, y, z);
		}
	}
}
