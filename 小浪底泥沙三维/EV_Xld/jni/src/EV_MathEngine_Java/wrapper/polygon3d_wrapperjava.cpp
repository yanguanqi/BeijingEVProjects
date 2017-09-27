/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/polygon3d.h"
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
			namespace Math
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Polygon3D_00024EdgeMap_push_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j, jlong val_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &key = *(EarthView::World::Spatial::Math::CVector3*) key_j;
					EarthView::World::Spatial::Math::CVector3 &val = *(EarthView::World::Spatial::Math::CVector3*) val_j;
					EarthView::World::Spatial::Math::CPolygon3D::EdgeMap *pObjectX = (EarthView::World::Spatial::Math::CPolygon3D::EdgeMap*) pObjXXXX;
					pObjectX->push(key, val);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Polygon3D_00024EdgeMap_exist_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &key = *(EarthView::World::Spatial::Math::CVector3*) key_j;
					EarthView::World::Spatial::Math::CPolygon3D::EdgeMap *pObjectX = (EarthView::World::Spatial::Math::CPolygon3D::EdgeMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->exist(key);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Polygon3D_00024EdgeMap_erase_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &key = *(EarthView::World::Spatial::Math::CVector3*) key_j;
					EarthView::World::Spatial::Math::CPolygon3D::EdgeMap *pObjectX = (EarthView::World::Spatial::Math::CPolygon3D::EdgeMap*) pObjXXXX;
					pObjectX->erase(key);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Polygon3D_00024EdgeMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CPolygon3D::EdgeMap *pObjectX = (EarthView::World::Spatial::Math::CPolygon3D::EdgeMap*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Polygon3D_00024EdgeMap_count_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &key = *(EarthView::World::Spatial::Math::CVector3*) key_j;
					EarthView::World::Spatial::Math::CPolygon3D::EdgeMap *pObjectX = (EarthView::World::Spatial::Math::CPolygon3D::EdgeMap*) pObjXXXX;
					ev_size_t __values1 = pObjectX->count(key);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Polygon3D_00024EdgeMap_get_1CVector3_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j, jlong index_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &key = *(EarthView::World::Spatial::Math::CVector3*) key_j;
					ev_size_t index = (ev_size_t) index_j;
					EarthView::World::Spatial::Math::CPolygon3D::EdgeMap *pObjectX = (EarthView::World::Spatial::Math::CPolygon3D::EdgeMap*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->get(key, index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Polygon3D_00024EdgeMap_erase_1CVector3_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j, jlong index_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &key = *(EarthView::World::Spatial::Math::CVector3*) key_j;
					ev_size_t index = (ev_size_t) index_j;
					EarthView::World::Spatial::Math::CPolygon3D::EdgeMap *pObjectX = (EarthView::World::Spatial::Math::CPolygon3D::EdgeMap*) pObjXXXX;
					pObjectX->erase(key, index);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Polygon3D_00024EdgeMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CPolygon3D::EdgeMap *pObjectX = (EarthView::World::Spatial::Math::CPolygon3D::EdgeMap*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Polygon3D_00024EdgeMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CPolygon3D::EdgeMap *pObjectX = (EarthView::World::Spatial::Math::CPolygon3D::EdgeMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Polygon3D_00024Edge_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CPolygon3D::Edge *pObjectX = (EarthView::World::Spatial::Math::CPolygon3D::Edge*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->first);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Polygon3D_00024Edge_set_1first_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Math::CPolygon3D::Edge *pObjectX = (EarthView::World::Spatial::Math::CPolygon3D::Edge*)pObjXXXX;
					pObjectX->first = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Polygon3D_00024Edge_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CPolygon3D::Edge *pObjectX = (EarthView::World::Spatial::Math::CPolygon3D::Edge*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->second);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Polygon3D_00024Edge_set_1second_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Math::CPolygon3D::Edge *pObjectX = (EarthView::World::Spatial::Math::CPolygon3D::Edge*)pObjXXXX;
					pObjectX->second = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Polygon3D_00024Edge_OperatorAssign_1Edge(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Spatial::Math::CPolygon3D::Edge& pObjectX = *(EarthView::World::Spatial::Math::CPolygon3D::Edge*) pObjXXXX;
					const EarthView::World::Spatial::Math::CPolygon3D::Edge &other = *(EarthView::World::Spatial::Math::CPolygon3D::Edge*) other_j;
					pObjectX = other;
					EarthView::World::Spatial::Math::CPolygon3D::Edge& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Polygon3D_insertVertex_1CVector3_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vdata_j, jlong vertexIndex_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &vdata = *(EarthView::World::Spatial::Math::CVector3*) vdata_j;
					ev_size_t vertexIndex = (ev_size_t) vertexIndex_j;
					EarthView::World::Spatial::Math::CPolygon3D *pObjectX = (EarthView::World::Spatial::Math::CPolygon3D*) pObjXXXX;
					pObjectX->insertVertex(vdata, vertexIndex);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Polygon3D_insertVertex_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vdata_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &vdata = *(EarthView::World::Spatial::Math::CVector3*) vdata_j;
					EarthView::World::Spatial::Math::CPolygon3D *pObjectX = (EarthView::World::Spatial::Math::CPolygon3D*) pObjXXXX;
					pObjectX->insertVertex(vdata);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Polygon3D_getVertex_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vertex_j)
				{
					ev_size_t vertex = (ev_size_t) vertex_j;
					const 					EarthView::World::Spatial::Math::CPolygon3D *pObjectX = (EarthView::World::Spatial::Math::CPolygon3D*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getVertex(vertex);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Polygon3D_setVertex_1CVector3_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vdata_j, jlong vertexIndex_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &vdata = *(EarthView::World::Spatial::Math::CVector3*) vdata_j;
					ev_size_t vertexIndex = (ev_size_t) vertexIndex_j;
					EarthView::World::Spatial::Math::CPolygon3D *pObjectX = (EarthView::World::Spatial::Math::CPolygon3D*) pObjXXXX;
					pObjectX->setVertex(vdata, vertexIndex);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Polygon3D_removeDuplicates_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CPolygon3D *pObjectX = (EarthView::World::Spatial::Math::CPolygon3D*) pObjXXXX;
					pObjectX->removeDuplicates();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Polygon3D_getVertexCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CPolygon3D *pObjectX = (EarthView::World::Spatial::Math::CPolygon3D*) pObjXXXX;
					ev_size_t __values1 = pObjectX->getVertexCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Polygon3D_getNormal_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CPolygon3D *pObjectX = (EarthView::World::Spatial::Math::CPolygon3D*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getNormal();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Polygon3D_deleteVertex_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vertex_j)
				{
					ev_size_t vertex = (ev_size_t) vertex_j;
					EarthView::World::Spatial::Math::CPolygon3D *pObjectX = (EarthView::World::Spatial::Math::CPolygon3D*) pObjXXXX;
					pObjectX->deleteVertex(vertex);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Polygon3D_isPointInside_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong point_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
					const 					EarthView::World::Spatial::Math::CPolygon3D *pObjectX = (EarthView::World::Spatial::Math::CPolygon3D*) pObjXXXX;
					ev_bool __values1 = pObjectX->isPointInside(point);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Polygon3D_storeEdges_1EdgeMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong edgeMap_j)
				{
					EarthView::World::Spatial::Math::CPolygon3D::EdgeMap *edgeMap = (EarthView::World::Spatial::Math::CPolygon3D::EdgeMap*) edgeMap_j;
					const 					EarthView::World::Spatial::Math::CPolygon3D *pObjectX = (EarthView::World::Spatial::Math::CPolygon3D*) pObjXXXX;
					pObjectX->storeEdges(edgeMap);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Polygon3D_reset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CPolygon3D *pObjectX = (EarthView::World::Spatial::Math::CPolygon3D*) pObjXXXX;
					pObjectX->reset();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Polygon3D_OperatorEquals_1CPolygon3D(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial::Math::CPolygon3D& pObjectX = *(EarthView::World::Spatial::Math::CPolygon3D*) pObjXXXX;
					const EarthView::World::Spatial::Math::CPolygon3D &rhs = *(EarthView::World::Spatial::Math::CPolygon3D*) rhs_j;
					ev_bool __values1 = (pObjectX == rhs);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Polygon3D_OperatorNotEquals_1CPolygon3D(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial::Math::CPolygon3D& pObjectX = *(EarthView::World::Spatial::Math::CPolygon3D*) pObjXXXX;
					EarthView::World::Spatial::Math::CPolygon3D &rhs = *(EarthView::World::Spatial::Math::CPolygon3D*) rhs_j;
					ev_bool __values1 = (pObjectX != rhs);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
