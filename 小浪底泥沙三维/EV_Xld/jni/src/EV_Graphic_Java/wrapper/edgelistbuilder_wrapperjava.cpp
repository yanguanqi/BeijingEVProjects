/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/edgelistbuilder.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_EdgeData_00024Triangle_get_1indexSet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::CTriangle *pObjectX = (EarthView::World::Graphic::CEdgeData::CTriangle*)pObjXXXX;
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<(pObjectX->indexSet);
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024Triangle_set_1indexSet_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CEdgeData::CTriangle *pObjectX = (EarthView::World::Graphic::CEdgeData::CTriangle*)pObjXXXX;
				pObjectX->indexSet = *(ev_uint64*) __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_EdgeData_00024Triangle_get_1vertexSet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::CTriangle *pObjectX = (EarthView::World::Graphic::CEdgeData::CTriangle*)pObjXXXX;
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<(pObjectX->vertexSet);
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024Triangle_set_1vertexSet_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CEdgeData::CTriangle *pObjectX = (EarthView::World::Graphic::CEdgeData::CTriangle*)pObjXXXX;
				pObjectX->vertexSet = *(ev_uint64*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024Triangle_get_1vertIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::CTriangle *pObjectX = (EarthView::World::Graphic::CEdgeData::CTriangle*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->vertIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024Triangle_set_1vertIndex_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CEdgeData::CTriangle *pObjectX = (EarthView::World::Graphic::CEdgeData::CTriangle*)pObjXXXX;
				for (int i = 0; i<3; i++)
				{
					pObjectX->vertIndex[i] = *(ev_uint64*)__values1_j;
					__values1_j++;
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024Triangle_get_1sharedVertIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::CTriangle *pObjectX = (EarthView::World::Graphic::CEdgeData::CTriangle*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->sharedVertIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024Triangle_set_1sharedVertIndex_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CEdgeData::CTriangle *pObjectX = (EarthView::World::Graphic::CEdgeData::CTriangle*)pObjXXXX;
				for (int i = 0; i<3; i++)
				{
					pObjectX->sharedVertIndex[i] = *(ev_uint64*)__values1_j;
					__values1_j++;
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024Edge_get_1triIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::CEdge *pObjectX = (EarthView::World::Graphic::CEdgeData::CEdge*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->triIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024Edge_set_1triIndex_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CEdgeData::CEdge *pObjectX = (EarthView::World::Graphic::CEdgeData::CEdge*)pObjXXXX;
				for (int i = 0; i<2; i++)
				{
					pObjectX->triIndex[i] = *(ev_uint64*)__values1_j;
					__values1_j++;
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024Edge_get_1vertIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::CEdge *pObjectX = (EarthView::World::Graphic::CEdgeData::CEdge*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->vertIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024Edge_set_1vertIndex_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CEdgeData::CEdge *pObjectX = (EarthView::World::Graphic::CEdgeData::CEdge*)pObjXXXX;
				for (int i = 0; i<2; i++)
				{
					pObjectX->vertIndex[i] = *(ev_uint64*)__values1_j;
					__values1_j++;
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024Edge_get_1sharedVertIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::CEdge *pObjectX = (EarthView::World::Graphic::CEdgeData::CEdge*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->sharedVertIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024Edge_set_1sharedVertIndex_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CEdgeData::CEdge *pObjectX = (EarthView::World::Graphic::CEdgeData::CEdge*)pObjXXXX;
				for (int i = 0; i<2; i++)
				{
					pObjectX->sharedVertIndex[i] = *(ev_uint64*)__values1_j;
					__values1_j++;
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_EdgeData_00024Edge_get_1degenerate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::CEdge *pObjectX = (EarthView::World::Graphic::CEdgeData::CEdge*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->degenerate);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024Edge_set_1degenerate_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CEdgeData::CEdge *pObjectX = (EarthView::World::Graphic::CEdgeData::CEdge*)pObjXXXX;
				pObjectX->degenerate = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleFaceNormalList_push_1back_1CVector4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Spatial::Math::CVector4 &t = *(EarthView::World::Spatial::Math::CVector4*) t_j;
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleFaceNormalList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleFaceNormalList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleFaceNormalList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleFaceNormalList_swap_1TriangleFaceNormalList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
			{
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList &rhs = *(EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) rhs_j;
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjXXXX;
				pObjectX->swap(rhs);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleFaceNormalList_insert_1ev_1uint32_1CVector4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Spatial::Math::CVector4 &t = *(EarthView::World::Spatial::Math::CVector4*) t_j;
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleFaceNormalList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleFaceNormalList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleFaceNormalList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList& pObjectX = *(EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleFaceNormalList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleFaceNormalList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleFaceNormalList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleFaceNormalList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleFaceNormalList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleLightFacingList_push_1back_1ev_1char(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jbyte t_j)
			{
				ev_char t = (ev_char) t_j;
				EarthView::World::Graphic::CEdgeData::TriangleLightFacingList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleLightFacingList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::TriangleLightFacingList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleLightFacingList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::TriangleLightFacingList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) pObjXXXX;
				ev_char& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleLightFacingList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::TriangleLightFacingList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) pObjXXXX;
				ev_char& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleLightFacingList_insert_1ev_1uint32_1ev_1char(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jbyte t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				ev_char t = (ev_char) t_j;
				EarthView::World::Graphic::CEdgeData::TriangleLightFacingList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleLightFacingList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CEdgeData::TriangleLightFacingList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleLightFacingList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CEdgeData::TriangleLightFacingList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleLightFacingList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CEdgeData::TriangleLightFacingList& pObjectX = *(EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				ev_char& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleLightFacingList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CEdgeData::TriangleLightFacingList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) pObjXXXX;
				ev_char& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleLightFacingList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CEdgeData::TriangleLightFacingList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleLightFacingList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CEdgeData::TriangleLightFacingList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleLightFacingList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CEdgeData::TriangleLightFacingList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleLightFacingList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::TriangleLightFacingList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleList_push_1back_1CTriangle(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CEdgeData::CTriangle &t = *(EarthView::World::Graphic::CEdgeData::CTriangle*) t_j;
				EarthView::World::Graphic::CEdgeData::TriangleList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::TriangleList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::TriangleList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleList*) pObjXXXX;
				EarthView::World::Graphic::CEdgeData::CTriangle& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::TriangleList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleList*) pObjXXXX;
				EarthView::World::Graphic::CEdgeData::CTriangle& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleList_swap_1TriangleList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
			{
				EarthView::World::Graphic::CEdgeData::TriangleList &rhs = *(EarthView::World::Graphic::CEdgeData::TriangleList*) rhs_j;
				EarthView::World::Graphic::CEdgeData::TriangleList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleList*) pObjXXXX;
				pObjectX->swap(rhs);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleList_insert_1ev_1uint32_1CTriangle(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CEdgeData::CTriangle &t = *(EarthView::World::Graphic::CEdgeData::CTriangle*) t_j;
				EarthView::World::Graphic::CEdgeData::TriangleList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CEdgeData::TriangleList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CEdgeData::TriangleList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CEdgeData::TriangleList& pObjectX = *(EarthView::World::Graphic::CEdgeData::TriangleList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CEdgeData::CTriangle& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CEdgeData::TriangleList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleList*) pObjXXXX;
				EarthView::World::Graphic::CEdgeData::CTriangle& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CEdgeData::TriangleList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CEdgeData::TriangleList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CEdgeData::TriangleList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024TriangleList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::TriangleList *pObjectX = (EarthView::World::Graphic::CEdgeData::TriangleList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeList_push_1back_1CEdge(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CEdgeData::CEdge &t = *(EarthView::World::Graphic::CEdgeData::CEdge*) t_j;
				EarthView::World::Graphic::CEdgeData::EdgeList *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::EdgeList *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::EdgeList *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeList*) pObjXXXX;
				EarthView::World::Graphic::CEdgeData::CEdge& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::EdgeList *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeList*) pObjXXXX;
				EarthView::World::Graphic::CEdgeData::CEdge& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeList_insert_1ev_1uint32_1CEdge(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CEdgeData::CEdge &t = *(EarthView::World::Graphic::CEdgeData::CEdge*) t_j;
				EarthView::World::Graphic::CEdgeData::EdgeList *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CEdgeData::EdgeList *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CEdgeData::EdgeList *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CEdgeData::EdgeList& pObjectX = *(EarthView::World::Graphic::CEdgeData::EdgeList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CEdgeData::CEdge& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CEdgeData::EdgeList *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeList*) pObjXXXX;
				EarthView::World::Graphic::CEdgeData::CEdge& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CEdgeData::EdgeList *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CEdgeData::EdgeList *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CEdgeData::EdgeList *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::EdgeList *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeGroup_get_1vertexSet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroup *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeGroup*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->vertexSet);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeGroup_set_1vertexSet_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroup *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeGroup*)pObjXXXX;
				pObjectX->vertexSet = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeGroup_get_1vertexData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroup *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeGroup*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->vertexData);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeGroup_set_1vertexData_1CVertexData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroup *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeGroup*)pObjXXXX;
				pObjectX->vertexData = (EarthView::World::Graphic::CVertexData*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeGroup_get_1triStart_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroup *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeGroup*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->triStart);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeGroup_set_1triStart_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroup *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeGroup*)pObjXXXX;
				pObjectX->triStart = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeGroup_get_1triCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroup *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeGroup*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->triCount);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeGroup_set_1triCount_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroup *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeGroup*)pObjXXXX;
				pObjectX->triCount = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeGroup_get_1edges_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroup *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeGroup*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->edges);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeGroup_set_1edges_1EdgeList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroup *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeGroup*)pObjXXXX;
				pObjectX->edges = *(EarthView::World::Graphic::CEdgeData::EdgeList*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeGroup_get_1localMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroup *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeGroup*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->localMatrix);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeGroup_set_1localMatrix_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroup *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeGroup*)pObjXXXX;
				pObjectX->localMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeGroupList_push_1back_1EdgeGroup(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroup &t = *(EarthView::World::Graphic::CEdgeData::EdgeGroup*) t_j;
				EarthView::World::Graphic::CEdgeData::EdgeGroupList *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeGroupList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeGroupList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroupList *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeGroupList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeGroupList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroupList *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeGroupList*) pObjXXXX;
				EarthView::World::Graphic::CEdgeData::EdgeGroup& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeGroupList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroupList *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeGroupList*) pObjXXXX;
				EarthView::World::Graphic::CEdgeData::EdgeGroup& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeGroupList_insert_1ev_1uint32_1EdgeGroup(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CEdgeData::EdgeGroup &t = *(EarthView::World::Graphic::CEdgeData::EdgeGroup*) t_j;
				EarthView::World::Graphic::CEdgeData::EdgeGroupList *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeGroupList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeGroupList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CEdgeData::EdgeGroupList *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeGroupList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeGroupList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CEdgeData::EdgeGroupList *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeGroupList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeGroupList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroupList& pObjectX = *(EarthView::World::Graphic::CEdgeData::EdgeGroupList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CEdgeData::EdgeGroup& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeGroupList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CEdgeData::EdgeGroupList *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeGroupList*) pObjXXXX;
				EarthView::World::Graphic::CEdgeData::EdgeGroup& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeGroupList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CEdgeData::EdgeGroupList *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeGroupList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeGroupList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CEdgeData::EdgeGroupList *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeGroupList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeGroupList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CEdgeData::EdgeGroupList *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeGroupList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_00024EdgeGroupList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroupList *pObjectX = (EarthView::World::Graphic::CEdgeData::EdgeGroupList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_get_1triangles_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData *pObjectX = (EarthView::World::Graphic::CEdgeData*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->triangles);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_set_1triangles_1TriangleList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CEdgeData *pObjectX = (EarthView::World::Graphic::CEdgeData*)pObjXXXX;
				pObjectX->triangles = *(EarthView::World::Graphic::CEdgeData::TriangleList*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_get_1triangleFaceNormals_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData *pObjectX = (EarthView::World::Graphic::CEdgeData*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->triangleFaceNormals);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_set_1triangleFaceNormals_1TriangleFaceNormalList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CEdgeData *pObjectX = (EarthView::World::Graphic::CEdgeData*)pObjXXXX;
				pObjectX->triangleFaceNormals = *(EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_get_1triangleLightFacings_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData *pObjectX = (EarthView::World::Graphic::CEdgeData*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->triangleLightFacings);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_set_1triangleLightFacings_1TriangleLightFacingList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CEdgeData *pObjectX = (EarthView::World::Graphic::CEdgeData*)pObjXXXX;
				pObjectX->triangleLightFacings = *(EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeData_get_1edgeGroups_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData *pObjectX = (EarthView::World::Graphic::CEdgeData*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->edgeGroups);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_set_1edgeGroups_1EdgeGroupList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CEdgeData *pObjectX = (EarthView::World::Graphic::CEdgeData*)pObjXXXX;
				pObjectX->edgeGroups = *(EarthView::World::Graphic::CEdgeData::EdgeGroupList*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_EdgeData_get_1isClosed_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeData *pObjectX = (EarthView::World::Graphic::CEdgeData*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->isClosed);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_set_1isClosed_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CEdgeData *pObjectX = (EarthView::World::Graphic::CEdgeData*)pObjXXXX;
				pObjectX->isClosed = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_updateTriangleLightFacing_1CVector4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lightPos_j)
			{
				const EarthView::World::Spatial::Math::CVector4 &lightPos = *(EarthView::World::Spatial::Math::CVector4*) lightPos_j;
				EarthView::World::Graphic::CEdgeData *pObjectX = (EarthView::World::Graphic::CEdgeData*) pObjXXXX;
				pObjectX->updateTriangleLightFacing(lightPos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_updateFaceNormals_1ev_1size_1t_1CHardwareVertexBufferSharedPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vertexSet_j, jlong positionBuffer_j)
			{
				ev_size_t vertexSet = (ev_size_t) vertexSet_j;
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &positionBuffer = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) positionBuffer_j;
				EarthView::World::Graphic::CEdgeData *pObjectX = (EarthView::World::Graphic::CEdgeData*) pObjXXXX;
				pObjectX->updateFaceNormals(vertexSet, positionBuffer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeData_log_1CLogger(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ptLog_j)
			{
				EarthView::World::Core::CLogger *ptLog = (EarthView::World::Core::CLogger*) ptLog_j;
				EarthView::World::Graphic::CEdgeData *pObjectX = (EarthView::World::Graphic::CEdgeData*) pObjXXXX;
				pObjectX->log(ptLog);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeListBuilder_addVertexData_1CVertexData_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_vertexData_j, jlong mat_j)
			{
				const EarthView::World::Graphic::CVertexData *ref_vertexData = (const EarthView::World::Graphic::CVertexData*) ref_vertexData_j;
				const EarthView::World::Spatial::Math::CMatrix4 &mat = *(EarthView::World::Spatial::Math::CMatrix4*) mat_j;
				EarthView::World::Graphic::CEdgeListBuilder *pObjectX = (EarthView::World::Graphic::CEdgeListBuilder*) pObjXXXX;
				pObjectX->addVertexData(ref_vertexData, mat);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeListBuilder_addIndexData_1CIndexData_1ev_1size_1t_1OperationType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_indexData_j, jlong vertexSet_j, jint opType_j)
			{
				const EarthView::World::Graphic::CIndexData *ref_indexData = (const EarthView::World::Graphic::CIndexData*) ref_indexData_j;
				ev_size_t vertexSet = (ev_size_t) vertexSet_j;
				EarthView::World::Graphic::CRenderOperation::OperationType opType = (EarthView::World::Graphic::CRenderOperation::OperationType) opType_j;
				EarthView::World::Graphic::CEdgeListBuilder *pObjectX = (EarthView::World::Graphic::CEdgeListBuilder*) pObjXXXX;
				pObjectX->addIndexData(ref_indexData, vertexSet, opType);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeListBuilder_addIndexData_1CIndexData_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_indexData_j, jlong vertexSet_j)
			{
				const EarthView::World::Graphic::CIndexData *ref_indexData = (const EarthView::World::Graphic::CIndexData*) ref_indexData_j;
				ev_size_t vertexSet = (ev_size_t) vertexSet_j;
				EarthView::World::Graphic::CEdgeListBuilder *pObjectX = (EarthView::World::Graphic::CEdgeListBuilder*) pObjXXXX;
				pObjectX->addIndexData(ref_indexData, vertexSet);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeListBuilder_addIndexData_1CIndexData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_indexData_j)
			{
				const EarthView::World::Graphic::CIndexData *ref_indexData = (const EarthView::World::Graphic::CIndexData*) ref_indexData_j;
				EarthView::World::Graphic::CEdgeListBuilder *pObjectX = (EarthView::World::Graphic::CEdgeListBuilder*) pObjXXXX;
				pObjectX->addIndexData(ref_indexData);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_EdgeListBuilder_build_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CEdgeListBuilder *pObjectX = (EarthView::World::Graphic::CEdgeListBuilder*) pObjXXXX;
				EarthView::World::Graphic::CEdgeData* __values1 = pObjectX->build();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_EdgeListBuilder_log_1CLogger(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ptLog_j)
			{
				EarthView::World::Core::CLogger *ptLog = (EarthView::World::Core::CLogger*) ptLog_j;
				EarthView::World::Graphic::CEdgeListBuilder *pObjectX = (EarthView::World::Graphic::CEdgeListBuilder*) pObjXXXX;
				pObjectX->log(ptLog);
			}
		}
	}
}
