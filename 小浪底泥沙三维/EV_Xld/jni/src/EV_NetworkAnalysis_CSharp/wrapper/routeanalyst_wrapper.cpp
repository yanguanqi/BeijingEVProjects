/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "networkanalysis/routeanalyst.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Analyst
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteParam_addStopJunction_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 jID )
				{
					EarthView::World::Spatial2D::Analyst::CRouteParam* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteParam*) pObjectXXXX;
					ptrNativeObject->addStopJunction(jID);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteParam_addBarriarEdge_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 eID )
				{
					EarthView::World::Spatial2D::Analyst::CRouteParam* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteParam*) pObjectXXXX;
					ptrNativeObject->addBarriarEdge(eID);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteParam_clearStop_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CRouteParam* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteParam*) pObjectXXXX;
					ptrNativeObject->clearStop();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteParam_clearBarriar_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CRouteParam* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteParam*) pObjectXXXX;
					ptrNativeObject->clearBarriar();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteParamI_addStop_void_CPoint(void *pObjectXXXX, _in const void* point )
				{
					EarthView::World::Spatial2D::Analyst::CRouteParamI* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteParamI*) pObjectXXXX;
					ptrNativeObject->addStop(*(EarthView::World::Spatial::Geometry::CPoint*)point);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteParamI_addBarriar_void_CPoint(void *pObjectXXXX, _in const void* point )
				{
					EarthView::World::Spatial2D::Analyst::CRouteParamI* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteParamI*) pObjectXXXX;
					ptrNativeObject->addBarriar(*(EarthView::World::Spatial::Geometry::CPoint*)point);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteParamI_clearStop_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CRouteParamI* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteParamI*) pObjectXXXX;
					ptrNativeObject->clearStop();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteParamI_clearBarriar_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CRouteParamI* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteParamI*) pObjectXXXX;
					ptrNativeObject->clearBarriar();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteResult_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CRouteResult* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteResult_addGeometry_void_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom )
				{
					EarthView::World::Spatial2D::Analyst::CRouteResult* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjectXXXX;
					ptrNativeObject->addGeometry(geom);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteResult_arrangeGeometry_void_CPoint(void *pObjectXXXX, _in const void* point )
				{
					EarthView::World::Spatial2D::Analyst::CRouteResult* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjectXXXX;
					ptrNativeObject->arrangeGeometry(*(EarthView::World::Spatial::Geometry::CPoint*)point);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteResult_addRouteID_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial2D::Analyst::CRouteResult* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjectXXXX;
					ptrNativeObject->addRouteID(id);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial2D_Analyst_CRouteResult_getGeometryRef_IGeometry_ev_int32(void *pObjectXXXX, _in ev_int32 index )
				{
					EarthView::World::Spatial2D::Analyst::CRouteResult* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->getGeometryRef(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Analyst_CRouteResult_getRouteID_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 index )
				{
					EarthView::World::Spatial2D::Analyst::CRouteResult* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getRouteID(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Analyst_CRouteResult_count_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteResult* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->count();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteResult_select_void_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom )
				{
					EarthView::World::Spatial2D::Analyst::CRouteResult* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjectXXXX;
					ptrNativeObject->select(geom);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Analyst_CRouteResult_isSelected_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteResult* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isSelected();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteResult_addSkipStop_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial2D::Analyst::CRouteResult* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjectXXXX;
					ptrNativeObject->addSkipStop(id);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteResult_setTotalCost_void_ev_real64(void *pObjectXXXX, _in ev_real64 cost )
				{
					EarthView::World::Spatial2D::Analyst::CRouteResult* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjectXXXX;
					ptrNativeObject->setTotalCost(cost);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Analyst_CRouteResult_getTotalCost_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteResult* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getTotalCost();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteResult_selectResult_void_CPoint_ev_real64(void *pObjectXXXX, _in const void* pt, _in ev_real64 threshold )
				{
					EarthView::World::Spatial2D::Analyst::CRouteResult* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjectXXXX;
					ptrNativeObject->selectResult(*(EarthView::World::Spatial::Geometry::CPoint*)pt, threshold);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteResult_selectResult_void_CRectangle(void *pObjectXXXX, _in const void* rect )
				{
					EarthView::World::Spatial2D::Analyst::CRouteResult* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjectXXXX;
					ptrNativeObject->selectResult(*(EarthView::World::Spatial::Geometry::CRectangle*)rect);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Analyst::CRouteResult*  _stdcall EarthView_World_Spatial2D_Analyst_CRouteResult_clone_CRouteResult(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Analyst::CRouteResult* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteResult*) pObjectXXXX;
					EarthView::World::Spatial2D::Analyst::CRouteResult* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Analyst_CRouteAnalyst_solve_ev_bool_CRouteParam_CRouteResult(void *pObjectXXXX, _in const void* param, _inout void* result )
				{
					EarthView::World::Spatial2D::Analyst::CRouteAnalyst* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteAnalyst*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->solve(*(EarthView::World::Spatial2D::Analyst::CRouteParam*)param, *(EarthView::World::Spatial2D::Analyst::CRouteResult*)result);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Analyst_CRouteAnalyst_solve_ev_bool_CRouteParamI_CRouteResult(void *pObjectXXXX, _in const void* param, _inout void* result )
				{
					EarthView::World::Spatial2D::Analyst::CRouteAnalyst* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteAnalyst*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->solve(*(EarthView::World::Spatial2D::Analyst::CRouteParamI*)param, *(EarthView::World::Spatial2D::Analyst::CRouteResult*)result);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRouteAnalyst_setAnalystMethod_void_EVNAAnalystMethod(void *pObjectXXXX, _in int method )
				{
					EarthView::World::Spatial2D::Analyst::CRouteAnalyst* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteAnalyst*) pObjectXXXX;
					ptrNativeObject->setAnalystMethod((EarthView::World::Spatial2D::Analyst::EVNAAnalystMethod)method);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Analyst_CRouteAnalyst_getImpedance_ev_real64_ev_uint32_ev_bool(void *pObjectXXXX, _in ev_uint32 edgeID, _in ev_bool FT )
				{
					EarthView::World::Spatial2D::Analyst::CRouteAnalyst* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRouteAnalyst*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getImpedance(edgeID, FT);
					return objXXXX;
				}
			}
		}
	}
}
