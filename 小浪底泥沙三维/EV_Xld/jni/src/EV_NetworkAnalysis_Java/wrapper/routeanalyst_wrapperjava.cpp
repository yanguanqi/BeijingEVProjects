/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "networkanalysis/routeanalyst.h"
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
			namespace Analyst
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_analyst_ChangedEdge_Create(JNIEnv *__env, jclass __clazz)
				{
					EarthView::World::Spatial2D::Analyst::ChangedEdge *pObjectX = new EarthView::World::Spatial2D::Analyst::ChangedEdge();
					return (jlong) pObjectX;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_ChangedEdge_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Analyst::ChangedEdge *pObjectX = (EarthView::World::Spatial2D::Analyst::ChangedEdge*)pObjXXXX;
					delete pObjectX;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_analyst_ChangedEdge_get_1formerEID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Analyst::ChangedEdge *pObjectX = (EarthView::World::Spatial2D::Analyst::ChangedEdge*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->formerEID);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_ChangedEdge_set_1formerEID_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial2D::Analyst::ChangedEdge *pObjectX = (EarthView::World::Spatial2D::Analyst::ChangedEdge*)pObjXXXX;
					pObjectX->formerEID = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_analyst_ChangedEdge_get_1formerLength_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Analyst::ChangedEdge *pObjectX = (EarthView::World::Spatial2D::Analyst::ChangedEdge*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->formerLength);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_ChangedEdge_set_1formerLength_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial2D::Analyst::ChangedEdge *pObjectX = (EarthView::World::Spatial2D::Analyst::ChangedEdge*)pObjXXXX;
					pObjectX->formerLength = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_analyst_ChangedEdge_get_1newFEID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Analyst::ChangedEdge *pObjectX = (EarthView::World::Spatial2D::Analyst::ChangedEdge*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->newFEID);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_ChangedEdge_set_1newFEID_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial2D::Analyst::ChangedEdge *pObjectX = (EarthView::World::Spatial2D::Analyst::ChangedEdge*)pObjXXXX;
					pObjectX->newFEID = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_analyst_ChangedEdge_get_1newFLength_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Analyst::ChangedEdge *pObjectX = (EarthView::World::Spatial2D::Analyst::ChangedEdge*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->newFLength);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_ChangedEdge_set_1newFLength_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial2D::Analyst::ChangedEdge *pObjectX = (EarthView::World::Spatial2D::Analyst::ChangedEdge*)pObjXXXX;
					pObjectX->newFLength = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_analyst_ChangedEdge_get_1newTEID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Analyst::ChangedEdge *pObjectX = (EarthView::World::Spatial2D::Analyst::ChangedEdge*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->newTEID);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_ChangedEdge_set_1newTEID_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial2D::Analyst::ChangedEdge *pObjectX = (EarthView::World::Spatial2D::Analyst::ChangedEdge*)pObjXXXX;
					pObjectX->newTEID = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_analyst_ChangedEdge_get_1newTLength_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Analyst::ChangedEdge *pObjectX = (EarthView::World::Spatial2D::Analyst::ChangedEdge*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->newTLength);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_ChangedEdge_set_1newTLength_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial2D::Analyst::ChangedEdge *pObjectX = (EarthView::World::Spatial2D::Analyst::ChangedEdge*)pObjXXXX;
					pObjectX->newTLength = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_analyst_ChangedEdge_get_1inter_1ID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Analyst::ChangedEdge *pObjectX = (EarthView::World::Spatial2D::Analyst::ChangedEdge*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->inter_ID);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_ChangedEdge_set_1inter_1ID_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial2D::Analyst::ChangedEdge *pObjectX = (EarthView::World::Spatial2D::Analyst::ChangedEdge*)pObjXXXX;
					pObjectX->inter_ID = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_analyst_Inter_Create(JNIEnv *__env, jclass __clazz)
				{
					EarthView::World::Spatial2D::Analyst::Inter *pObjectX = new EarthView::World::Spatial2D::Analyst::Inter();
					return (jlong) pObjectX;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_Inter_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Analyst::Inter *pObjectX = (EarthView::World::Spatial2D::Analyst::Inter*)pObjXXXX;
					delete pObjectX;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_analyst_Inter_get_1lastNum_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Analyst::Inter *pObjectX = (EarthView::World::Spatial2D::Analyst::Inter*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->lastNum);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_Inter_set_1lastNum_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial2D::Analyst::Inter *pObjectX = (EarthView::World::Spatial2D::Analyst::Inter*)pObjXXXX;
					pObjectX->lastNum = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_analyst_Inter_get_1inter_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Analyst::Inter *pObjectX = (EarthView::World::Spatial2D::Analyst::Inter*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->inter);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_Inter_set_1inter_1CPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial2D::Analyst::Inter *pObjectX = (EarthView::World::Spatial2D::Analyst::Inter*)pObjXXXX;
					pObjectX->inter = *(EarthView::World::Spatial::Geometry::CPoint*) __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_RouteParam_addStopJunction_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong jID_j)
				{
					ev_uint32 jID = (ev_uint32) jID_j;
					EarthView::World::Spatial2D::Analyst::CRouteParam *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteParam*) pObjXXXX;
					pObjectX->addStopJunction(jID);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_RouteParam_addBarriarEdge_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong eID_j)
				{
					ev_uint32 eID = (ev_uint32) eID_j;
					EarthView::World::Spatial2D::Analyst::CRouteParam *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteParam*) pObjXXXX;
					pObjectX->addBarriarEdge(eID);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_RouteParam_clearStop_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Analyst::CRouteParam *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteParam*) pObjXXXX;
					pObjectX->clearStop();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_RouteParam_clearBarriar_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Analyst::CRouteParam *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteParam*) pObjXXXX;
					pObjectX->clearBarriar();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_RouteParamI_addStop_1CPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong point_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint &point = *(EarthView::World::Spatial::Geometry::CPoint*) point_j;
					EarthView::World::Spatial2D::Analyst::CRouteParamI *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteParamI*) pObjXXXX;
					pObjectX->addStop(point);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_RouteParamI_addBarriar_1CPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong point_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint &point = *(EarthView::World::Spatial::Geometry::CPoint*) point_j;
					EarthView::World::Spatial2D::Analyst::CRouteParamI *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteParamI*) pObjXXXX;
					pObjectX->addBarriar(point);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_RouteParamI_clearStop_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Analyst::CRouteParamI *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteParamI*) pObjXXXX;
					pObjectX->clearStop();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_RouteParamI_clearBarriar_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Analyst::CRouteParamI *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteParamI*) pObjXXXX;
					pObjectX->clearBarriar();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_RouteResult_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Analyst::CRouteResult *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_RouteResult_addGeometry_1IGeometry(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geom_j)
				{
					const EarthView::World::Spatial::Geometry::IGeometry *geom = (const EarthView::World::Spatial::Geometry::IGeometry*) geom_j;
					EarthView::World::Spatial2D::Analyst::CRouteResult *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjXXXX;
					pObjectX->addGeometry(geom);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_RouteResult_arrangeGeometry_1CPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong point_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint &point = *(EarthView::World::Spatial::Geometry::CPoint*) point_j;
					EarthView::World::Spatial2D::Analyst::CRouteResult *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjXXXX;
					pObjectX->arrangeGeometry(point);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_RouteResult_addRouteID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial2D::Analyst::CRouteResult *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjXXXX;
					pObjectX->addRouteID(id);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_analyst_RouteResult_getGeometryRef_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Spatial2D::Analyst::CRouteResult *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->getGeometryRef(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_analyst_RouteResult_getRouteID_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Spatial2D::Analyst::CRouteResult *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getRouteID(index);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_analyst_RouteResult_count_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Analyst::CRouteResult *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjXXXX;
					ev_int32 __values1 = pObjectX->count();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_RouteResult_select_1IGeometry(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geom_j)
				{
					const EarthView::World::Spatial::Geometry::IGeometry *geom = (const EarthView::World::Spatial::Geometry::IGeometry*) geom_j;
					EarthView::World::Spatial2D::Analyst::CRouteResult *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjXXXX;
					pObjectX->select(geom);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_analyst_RouteResult_isSelected_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Analyst::CRouteResult *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjXXXX;
					ev_bool __values1 = pObjectX->isSelected();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_RouteResult_addSkipStop_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial2D::Analyst::CRouteResult *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjXXXX;
					pObjectX->addSkipStop(id);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_RouteResult_setTotalCost_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble cost_j)
				{
					ev_real64 cost = (ev_real64) cost_j;
					EarthView::World::Spatial2D::Analyst::CRouteResult *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjXXXX;
					pObjectX->setTotalCost(cost);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_analyst_RouteResult_getTotalCost_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Analyst::CRouteResult *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getTotalCost();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_RouteResult_selectResult_1CPoint_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pt_j, jdouble threshold_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint &pt = *(EarthView::World::Spatial::Geometry::CPoint*) pt_j;
					ev_real64 threshold = (ev_real64) threshold_j;
					EarthView::World::Spatial2D::Analyst::CRouteResult *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjXXXX;
					pObjectX->selectResult(pt, threshold);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_RouteResult_selectResult_1CRectangle(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rect_j)
				{
					const EarthView::World::Spatial::Geometry::CRectangle &rect = *(EarthView::World::Spatial::Geometry::CRectangle*) rect_j;
					EarthView::World::Spatial2D::Analyst::CRouteResult *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjXXXX;
					pObjectX->selectResult(rect);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_analyst_RouteResult_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Analyst::CRouteResult *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjXXXX;
					EarthView::World::Spatial2D::Analyst::CRouteResult* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_analyst_RouteAnalyst_solve_1CRouteParam_1CRouteResult(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong param_j, jlong result_j)
				{
					const EarthView::World::Spatial2D::Analyst::CRouteParam &param = *(EarthView::World::Spatial2D::Analyst::CRouteParam*) param_j;
					EarthView::World::Spatial2D::Analyst::CRouteResult &result = *(EarthView::World::Spatial2D::Analyst::CRouteResult*) result_j;
					EarthView::World::Spatial2D::Analyst::CRouteAnalyst *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteAnalyst*) pObjXXXX;
					ev_bool __values1 = pObjectX->solve(param, result);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_analyst_RouteAnalyst_solve_1CRouteParamI_1CRouteResult(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong param_j, jlong result_j)
				{
					const EarthView::World::Spatial2D::Analyst::CRouteParamI &param = *(EarthView::World::Spatial2D::Analyst::CRouteParamI*) param_j;
					EarthView::World::Spatial2D::Analyst::CRouteResult &result = *(EarthView::World::Spatial2D::Analyst::CRouteResult*) result_j;
					EarthView::World::Spatial2D::Analyst::CRouteAnalyst *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteAnalyst*) pObjXXXX;
					ev_bool __values1 = pObjectX->solve(param, result);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_RouteAnalyst_setAnalystMethod_1EVNAAnalystMethod(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint method_j)
				{
					EarthView::World::Spatial2D::Analyst::EVNAAnalystMethod method = (EarthView::World::Spatial2D::Analyst::EVNAAnalystMethod) method_j;
					EarthView::World::Spatial2D::Analyst::CRouteAnalyst *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteAnalyst*) pObjXXXX;
					pObjectX->setAnalystMethod(method);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_analyst_RouteAnalyst_getImpedance_1ev_1uint32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong edgeID_j, jboolean FT_j)
				{
					ev_uint32 edgeID = (ev_uint32) edgeID_j;
					ev_bool FT = (ev_bool) FT_j;
					EarthView::World::Spatial2D::Analyst::CRouteAnalyst *pObjectX = (EarthView::World::Spatial2D::Analyst::CRouteAnalyst*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getImpedance(edgeID, FT);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
		}
	}
}
