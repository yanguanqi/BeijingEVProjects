/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/convexbody.h"
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
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConvexBody_00024PolygonList_push_1back_1CPolygon3D(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Spatial::Math::CPolygon3D *&ref_t = *(EarthView::World::Spatial::Math::CPolygon3D**) ref_t_j;
				EarthView::World::Graphic::CConvexBody::PolygonList *pObjectX = (EarthView::World::Graphic::CConvexBody::PolygonList*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConvexBody_00024PolygonList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConvexBody::PolygonList *pObjectX = (EarthView::World::Graphic::CConvexBody::PolygonList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConvexBody_00024PolygonList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConvexBody::PolygonList *pObjectX = (EarthView::World::Graphic::CConvexBody::PolygonList*) pObjXXXX;
				EarthView::World::Spatial::Math::CPolygon3D*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConvexBody_00024PolygonList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConvexBody::PolygonList *pObjectX = (EarthView::World::Graphic::CConvexBody::PolygonList*) pObjXXXX;
				EarthView::World::Spatial::Math::CPolygon3D*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConvexBody_00024PolygonList_swap_1PolygonList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
			{
				EarthView::World::Graphic::CConvexBody::PolygonList &rhs = *(EarthView::World::Graphic::CConvexBody::PolygonList*) rhs_j;
				EarthView::World::Graphic::CConvexBody::PolygonList *pObjectX = (EarthView::World::Graphic::CConvexBody::PolygonList*) pObjXXXX;
				pObjectX->swap(rhs);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConvexBody_00024PolygonList_insert_1ev_1uint32_1CPolygon3D(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Spatial::Math::CPolygon3D *&ref_t = *(EarthView::World::Spatial::Math::CPolygon3D**) ref_t_j;
				EarthView::World::Graphic::CConvexBody::PolygonList *pObjectX = (EarthView::World::Graphic::CConvexBody::PolygonList*) pObjXXXX;
				pObjectX->insert(pos, ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConvexBody_00024PolygonList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CConvexBody::PolygonList *pObjectX = (EarthView::World::Graphic::CConvexBody::PolygonList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ConvexBody_00024PolygonList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CConvexBody::PolygonList *pObjectX = (EarthView::World::Graphic::CConvexBody::PolygonList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConvexBody_00024PolygonList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CConvexBody::PolygonList& pObjectX = *(EarthView::World::Graphic::CConvexBody::PolygonList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Spatial::Math::CPolygon3D*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConvexBody_00024PolygonList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CConvexBody::PolygonList *pObjectX = (EarthView::World::Graphic::CConvexBody::PolygonList*) pObjXXXX;
				EarthView::World::Spatial::Math::CPolygon3D*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConvexBody_00024PolygonList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CConvexBody::PolygonList *pObjectX = (EarthView::World::Graphic::CConvexBody::PolygonList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConvexBody_00024PolygonList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CConvexBody::PolygonList *pObjectX = (EarthView::World::Graphic::CConvexBody::PolygonList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConvexBody_00024PolygonList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CConvexBody::PolygonList *pObjectX = (EarthView::World::Graphic::CConvexBody::PolygonList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConvexBody_00024PolygonList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConvexBody::PolygonList *pObjectX = (EarthView::World::Graphic::CConvexBody::PolygonList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConvexBody_define_1CFrustum(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong frustum_j)
			{
				const EarthView::World::Graphic::CFrustum &frustum = *(EarthView::World::Graphic::CFrustum*) frustum_j;
				EarthView::World::Graphic::CConvexBody *pObjectX = (EarthView::World::Graphic::CConvexBody*) pObjXXXX;
				pObjectX->define(frustum);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConvexBody_define_1CAxisAlignedBox(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong aab_j)
			{
				const EarthView::World::Spatial::Math::CAxisAlignedBox &aab = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) aab_j;
				EarthView::World::Graphic::CConvexBody *pObjectX = (EarthView::World::Graphic::CConvexBody*) pObjXXXX;
				pObjectX->define(aab);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConvexBody_clip_1CFrustum(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong frustum_j)
			{
				const EarthView::World::Graphic::CFrustum &frustum = *(EarthView::World::Graphic::CFrustum*) frustum_j;
				EarthView::World::Graphic::CConvexBody *pObjectX = (EarthView::World::Graphic::CConvexBody*) pObjXXXX;
				pObjectX->clip(frustum);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConvexBody_clip_1CAxisAlignedBox(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong aab_j)
			{
				const EarthView::World::Spatial::Math::CAxisAlignedBox &aab = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) aab_j;
				EarthView::World::Graphic::CConvexBody *pObjectX = (EarthView::World::Graphic::CConvexBody*) pObjXXXX;
				pObjectX->clip(aab);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConvexBody_clip_1CConvexBody(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong body_j)
			{
				const EarthView::World::Graphic::CConvexBody &body = *(EarthView::World::Graphic::CConvexBody*) body_j;
				EarthView::World::Graphic::CConvexBody *pObjectX = (EarthView::World::Graphic::CConvexBody*) pObjXXXX;
				pObjectX->clip(body);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConvexBody_clip_1CPlane(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pl_j)
			{
				const EarthView::World::Spatial::Math::CPlane &pl = *(EarthView::World::Spatial::Math::CPlane*) pl_j;
				EarthView::World::Graphic::CConvexBody *pObjectX = (EarthView::World::Graphic::CConvexBody*) pObjXXXX;
				pObjectX->clip(pl);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConvexBody_clip_1CPlane_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pl_j, jboolean keepNegative_j)
			{
				const EarthView::World::Spatial::Math::CPlane &pl = *(EarthView::World::Spatial::Math::CPlane*) pl_j;
				ev_bool keepNegative = (ev_bool) keepNegative_j;
				EarthView::World::Graphic::CConvexBody *pObjectX = (EarthView::World::Graphic::CConvexBody*) pObjXXXX;
				pObjectX->clip(pl, keepNegative);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConvexBody_extend_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pt_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &pt = *(EarthView::World::Spatial::Math::CVector3*) pt_j;
				EarthView::World::Graphic::CConvexBody *pObjectX = (EarthView::World::Graphic::CConvexBody*) pObjXXXX;
				pObjectX->extend(pt);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConvexBody_reset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConvexBody *pObjectX = (EarthView::World::Graphic::CConvexBody*) pObjXXXX;
				pObjectX->reset();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConvexBody_getPolygonCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CConvexBody *pObjectX = (EarthView::World::Graphic::CConvexBody*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getPolygonCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConvexBody_getVertexCount_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong poly_j)
			{
				ev_size_t poly = (ev_size_t) poly_j;
				const 				EarthView::World::Graphic::CConvexBody *pObjectX = (EarthView::World::Graphic::CConvexBody*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getVertexCount(poly);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConvexBody_getPolygon_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong poly_j)
			{
				ev_size_t poly = (ev_size_t) poly_j;
				const 				EarthView::World::Graphic::CConvexBody *pObjectX = (EarthView::World::Graphic::CConvexBody*) pObjXXXX;
				const EarthView::World::Spatial::Math::CPolygon3D& __values1 = pObjectX->getPolygon(poly);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConvexBody_getVertex_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong poly_j, jlong vertex_j)
			{
				ev_size_t poly = (ev_size_t) poly_j;
				ev_size_t vertex = (ev_size_t) vertex_j;
				const 				EarthView::World::Graphic::CConvexBody *pObjectX = (EarthView::World::Graphic::CConvexBody*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getVertex(poly, vertex);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConvexBody_getNormal_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong poly_j)
			{
				ev_size_t poly = (ev_size_t) poly_j;
				EarthView::World::Graphic::CConvexBody *pObjectX = (EarthView::World::Graphic::CConvexBody*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getNormal(poly);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConvexBody_getAABB_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CConvexBody *pObjectX = (EarthView::World::Graphic::CConvexBody*) pObjXXXX;
				EarthView::World::Spatial::Math::CAxisAlignedBox __values1 = pObjectX->getAABB();
				EarthView::World::Spatial::Math::CAxisAlignedBox *returnvalues = new EarthView::World::Spatial::Math::CAxisAlignedBox(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ConvexBody_hasClosedHull_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CConvexBody *pObjectX = (EarthView::World::Graphic::CConvexBody*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasClosedHull();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConvexBody_mergePolygons_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConvexBody *pObjectX = (EarthView::World::Graphic::CConvexBody*) pObjXXXX;
				pObjectX->mergePolygons();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ConvexBody_OperatorEquals_1CConvexBody(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Graphic::CConvexBody& pObjectX = *(EarthView::World::Graphic::CConvexBody*) pObjXXXX;
				const EarthView::World::Graphic::CConvexBody &rhs = *(EarthView::World::Graphic::CConvexBody*) rhs_j;
				ev_bool __values1 = (pObjectX == rhs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ConvexBody_OperatorNotEquals_1CConvexBody(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Graphic::CConvexBody& pObjectX = *(EarthView::World::Graphic::CConvexBody*) pObjXXXX;
				const EarthView::World::Graphic::CConvexBody &rhs = *(EarthView::World::Graphic::CConvexBody*) rhs_j;
				ev_bool __values1 = (pObjectX != rhs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConvexBody_logInfo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CConvexBody *pObjectX = (EarthView::World::Graphic::CConvexBody*) pObjXXXX;
				pObjectX->logInfo();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConvexBody__1initialisePool_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CConvexBody::_initialisePool();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConvexBody__1destroyPool_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CConvexBody::_destroyPool();
			}
		}
	}
}
