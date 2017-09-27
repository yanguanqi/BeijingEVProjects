/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/planeboundedvolume.h"
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_PlaneBoundedVolume_get_1planes_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CPlaneBoundedVolume *pObjectX = (EarthView::World::Spatial::Math::CPlaneBoundedVolume*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->planes);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_PlaneBoundedVolume_set_1planes_1PlaneList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Math::CPlaneBoundedVolume *pObjectX = (EarthView::World::Spatial::Math::CPlaneBoundedVolume*)pObjXXXX;
					pObjectX->planes = *(EarthView::World::Spatial::Math::PlaneList*) __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_math_PlaneBoundedVolume_get_1outside_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CPlaneBoundedVolume *pObjectX = (EarthView::World::Spatial::Math::CPlaneBoundedVolume*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->outside);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_PlaneBoundedVolume_set_1outside_1Side(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::Math::CPlaneBoundedVolume *pObjectX = (EarthView::World::Spatial::Math::CPlaneBoundedVolume*)pObjXXXX;
					pObjectX->outside = (EarthView::World::Spatial::Math::CPlane::Side)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_PlaneBoundedVolume_intersects_1CAxisAlignedBox(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong box_j)
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox &box = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) box_j;
					const 					EarthView::World::Spatial::Math::CPlaneBoundedVolume *pObjectX = (EarthView::World::Spatial::Math::CPlaneBoundedVolume*) pObjXXXX;
					ev_bool __values1 = pObjectX->intersects(box);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_PlaneBoundedVolume_intersects_1CSphere(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sphere_j)
				{
					const EarthView::World::Spatial::Math::CSphere &sphere = *(EarthView::World::Spatial::Math::CSphere*) sphere_j;
					const 					EarthView::World::Spatial::Math::CPlaneBoundedVolume *pObjectX = (EarthView::World::Spatial::Math::CPlaneBoundedVolume*) pObjXXXX;
					ev_bool __values1 = pObjectX->intersects(sphere);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_PlaneBoundedVolume_intersects_1CRay(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ray_j)
				{
					const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
					EarthView::World::Spatial::Math::CPlaneBoundedVolume *pObjectX = (EarthView::World::Spatial::Math::CPlaneBoundedVolume*) pObjXXXX;
					EarthView::World::Spatial::Math::IntersectResPair __values1 = pObjectX->intersects(ray);
					EarthView::World::Spatial::Math::IntersectResPair *returnvalues = new EarthView::World::Spatial::Math::IntersectResPair(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_PlaneBoundedVolumeList_push_1back_1CPlaneBoundedVolume(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial::Math::CPlaneBoundedVolume &t = *(EarthView::World::Spatial::Math::CPlaneBoundedVolume*) t_j;
					EarthView::World::Spatial::Math::PlaneBoundedVolumeList *pObjectX = (EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_PlaneBoundedVolumeList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::PlaneBoundedVolumeList *pObjectX = (EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_PlaneBoundedVolumeList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::PlaneBoundedVolumeList *pObjectX = (EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) pObjXXXX;
					EarthView::World::Spatial::Math::CPlaneBoundedVolume& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_PlaneBoundedVolumeList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::PlaneBoundedVolumeList *pObjectX = (EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) pObjXXXX;
					EarthView::World::Spatial::Math::CPlaneBoundedVolume& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_PlaneBoundedVolumeList_insert_1ev_1uint32_1CPlaneBoundedVolume(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial::Math::CPlaneBoundedVolume &t = *(EarthView::World::Spatial::Math::CPlaneBoundedVolume*) t_j;
					EarthView::World::Spatial::Math::PlaneBoundedVolumeList *pObjectX = (EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_PlaneBoundedVolumeList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial::Math::PlaneBoundedVolumeList *pObjectX = (EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_PlaneBoundedVolumeList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::PlaneBoundedVolumeList *pObjectX = (EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_PlaneBoundedVolumeList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial::Math::PlaneBoundedVolumeList& pObjectX = *(EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial::Math::CPlaneBoundedVolume& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_PlaneBoundedVolumeList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial::Math::PlaneBoundedVolumeList *pObjectX = (EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) pObjXXXX;
					EarthView::World::Spatial::Math::CPlaneBoundedVolume& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_PlaneBoundedVolumeList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::PlaneBoundedVolumeList *pObjectX = (EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_PlaneBoundedVolumeList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial::Math::PlaneBoundedVolumeList *pObjectX = (EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_PlaneBoundedVolumeList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial::Math::PlaneBoundedVolumeList *pObjectX = (EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_PlaneBoundedVolumeList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::PlaneBoundedVolumeList *pObjectX = (EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) pObjXXXX;
					pObjectX->clear();
				}
			}
		}
	}
}
