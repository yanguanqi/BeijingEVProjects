/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/ev_math.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CRadian_OperatorAssign_CRadian_Real(void *pObjXXXX, _in const Real& f )
				{
					EarthView::World::Spatial::Math::CRadian& objXXXX = *((EarthView::World::Spatial::Math::CRadian*) pObjXXXX);
					objXXXX = f;
					EarthView::World::Spatial::Math::CRadian *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CRadian_OperatorAssign_CRadian_CRadian(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial::Math::CRadian& objXXXX = *((EarthView::World::Spatial::Math::CRadian*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Math::CRadian*)r;
					EarthView::World::Spatial::Math::CRadian *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CRadian_OperatorAssign_CRadian_CDegree(void *pObjXXXX, _in const void* d )
				{
					EarthView::World::Spatial::Math::CRadian& objXXXX = *((EarthView::World::Spatial::Math::CRadian*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Math::CDegree*)d;
					EarthView::World::Spatial::Math::CRadian *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CRadian_valueDegrees_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CRadian* ptrNativeObject = (EarthView::World::Spatial::Math::CRadian*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->valueDegrees();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CRadian_valueRadians_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CRadian* ptrNativeObject = (EarthView::World::Spatial::Math::CRadian*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->valueRadians();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CRadian_valueAngleUnits_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CRadian* ptrNativeObject = (EarthView::World::Spatial::Math::CRadian*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->valueAngleUnits();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_Math_CRadian_OperatorPosivate_CRadian(void *pObjXXXX )
				{
					EarthView::World::Spatial::Math::CRadian& objXXXX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					EarthView::World::Spatial::Math::CRadian result = +objXXXX ;
					EarthView::World::Spatial::Math::CRadian* pnew = new EarthView::World::Spatial::Math::CRadian(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CRadian_OperatorPlus_CRadian_CRadian(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial::Math::CRadian& objXXXX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					EarthView::World::Spatial::Math::CRadian result = objXXXX +(*(EarthView::World::Spatial::Math::CRadian*)r);
					EarthView::World::Spatial::Math::CRadian* pnew = new EarthView::World::Spatial::Math::CRadian(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CRadian_OperatorPlus_CRadian_CDegree(void *pObjXXXX, _in const void* d )
				{
					EarthView::World::Spatial::Math::CRadian& objXXXX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					EarthView::World::Spatial::Math::CRadian result = objXXXX +(*(EarthView::World::Spatial::Math::CDegree*)d);
					EarthView::World::Spatial::Math::CRadian* pnew = new EarthView::World::Spatial::Math::CRadian(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CRadian_OperatorNegative_CRadian(void *pObjXXXX )
				{
					EarthView::World::Spatial::Math::CRadian& objXXXX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					EarthView::World::Spatial::Math::CRadian result = -objXXXX ;
					EarthView::World::Spatial::Math::CRadian* pnew = new EarthView::World::Spatial::Math::CRadian(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CRadian_OperatorMinus_CRadian_CRadian(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial::Math::CRadian& objXXXX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					EarthView::World::Spatial::Math::CRadian result = objXXXX -(*(EarthView::World::Spatial::Math::CRadian*)r);
					EarthView::World::Spatial::Math::CRadian* pnew = new EarthView::World::Spatial::Math::CRadian(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CRadian_OperatorMinus_CRadian_CDegree(void *pObjXXXX, _in const void* d )
				{
					EarthView::World::Spatial::Math::CRadian& objXXXX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					EarthView::World::Spatial::Math::CRadian result = objXXXX -(*(EarthView::World::Spatial::Math::CDegree*)d);
					EarthView::World::Spatial::Math::CRadian* pnew = new EarthView::World::Spatial::Math::CRadian(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CRadian_OperatorMultiply_CRadian_Real(void *pObjXXXX, _in Real f )
				{
					EarthView::World::Spatial::Math::CRadian& objXXXX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					EarthView::World::Spatial::Math::CRadian result = objXXXX *(f);
					EarthView::World::Spatial::Math::CRadian* pnew = new EarthView::World::Spatial::Math::CRadian(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CRadian_OperatorMultiply_CRadian_CRadian(void *pObjXXXX, _in const void* f )
				{
					EarthView::World::Spatial::Math::CRadian& objXXXX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					EarthView::World::Spatial::Math::CRadian result = objXXXX *(*(EarthView::World::Spatial::Math::CRadian*)f);
					EarthView::World::Spatial::Math::CRadian* pnew = new EarthView::World::Spatial::Math::CRadian(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CRadian_OperatorDivide_CRadian_Real(void *pObjXXXX, _in Real f )
				{
					EarthView::World::Spatial::Math::CRadian& objXXXX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					EarthView::World::Spatial::Math::CRadian result = objXXXX /(f);
					EarthView::World::Spatial::Math::CRadian* pnew = new EarthView::World::Spatial::Math::CRadian(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CRadian_OperatorLessThan_ev_bool_CRadian(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial::Math::CRadian& objXXXX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					const EarthView::World::Spatial::Math::CRadian& objXXXX1 = *(EarthView::World::Spatial::Math::CRadian*)r;
					return objXXXX < objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CRadian_OperatorLessThanOrEqual_ev_bool_CRadian(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial::Math::CRadian& objXXXX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					const EarthView::World::Spatial::Math::CRadian& objXXXX1 = *(EarthView::World::Spatial::Math::CRadian*)r;
					return objXXXX <= objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CRadian_OperatorEquals_ev_bool_CRadian(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial::Math::CRadian& objXXXX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					const EarthView::World::Spatial::Math::CRadian& objXXXX1 = *(EarthView::World::Spatial::Math::CRadian*)r;
					return objXXXX == objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CRadian_OperatorNotEquals_ev_bool_CRadian(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial::Math::CRadian& objXXXX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					const EarthView::World::Spatial::Math::CRadian& objXXXX1 = *(EarthView::World::Spatial::Math::CRadian*)r;
					return objXXXX != objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CRadian_OperatorGreaterThanOrEqual_ev_bool_CRadian(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial::Math::CRadian& objXXXX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					const EarthView::World::Spatial::Math::CRadian& objXXXX1 = *(EarthView::World::Spatial::Math::CRadian*)r;
					return objXXXX >= objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CRadian_OperatorGreaterThan_ev_bool_CRadian(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial::Math::CRadian& objXXXX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					const EarthView::World::Spatial::Math::CRadian& objXXXX1 = *(EarthView::World::Spatial::Math::CRadian*)r;
					return objXXXX > objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CDegree_OperatorAssign_CDegree_Real(void *pObjXXXX, _in const Real& f )
				{
					EarthView::World::Spatial::Math::CDegree& objXXXX = *((EarthView::World::Spatial::Math::CDegree*) pObjXXXX);
					objXXXX = f;
					EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CDegree_OperatorAssign_CDegree_CDegree(void *pObjXXXX, _in const void* d )
				{
					EarthView::World::Spatial::Math::CDegree& objXXXX = *((EarthView::World::Spatial::Math::CDegree*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Math::CDegree*)d;
					EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CDegree_OperatorAssign_CDegree_CRadian(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial::Math::CDegree& objXXXX = *((EarthView::World::Spatial::Math::CDegree*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Math::CRadian*)r;
					EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CDegree_valueDegrees_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CDegree* ptrNativeObject = (EarthView::World::Spatial::Math::CDegree*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->valueDegrees();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CDegree_valueRadians_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CDegree* ptrNativeObject = (EarthView::World::Spatial::Math::CDegree*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->valueRadians();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CDegree_valueAngleUnits_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CDegree* ptrNativeObject = (EarthView::World::Spatial::Math::CDegree*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->valueAngleUnits();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_Math_CDegree_OperatorPosivate_CDegree(void *pObjXXXX )
				{
					EarthView::World::Spatial::Math::CDegree& objXXXX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					EarthView::World::Spatial::Math::CDegree result = +objXXXX ;
					EarthView::World::Spatial::Math::CDegree* pnew = new EarthView::World::Spatial::Math::CDegree(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CDegree_OperatorPlus_CDegree_CDegree(void *pObjXXXX, _in const void* d )
				{
					EarthView::World::Spatial::Math::CDegree& objXXXX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					EarthView::World::Spatial::Math::CDegree result = objXXXX +(*(EarthView::World::Spatial::Math::CDegree*)d);
					EarthView::World::Spatial::Math::CDegree* pnew = new EarthView::World::Spatial::Math::CDegree(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CDegree_OperatorPlus_CDegree_CRadian(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial::Math::CDegree& objXXXX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					EarthView::World::Spatial::Math::CDegree result = objXXXX +(*(EarthView::World::Spatial::Math::CRadian*)r);
					EarthView::World::Spatial::Math::CDegree* pnew = new EarthView::World::Spatial::Math::CDegree(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CDegree_OperatorNegative_CDegree(void *pObjXXXX )
				{
					EarthView::World::Spatial::Math::CDegree& objXXXX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					EarthView::World::Spatial::Math::CDegree result = -objXXXX ;
					EarthView::World::Spatial::Math::CDegree* pnew = new EarthView::World::Spatial::Math::CDegree(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CDegree_OperatorMinus_CDegree_CDegree(void *pObjXXXX, _in const void* d )
				{
					EarthView::World::Spatial::Math::CDegree& objXXXX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					EarthView::World::Spatial::Math::CDegree result = objXXXX -(*(EarthView::World::Spatial::Math::CDegree*)d);
					EarthView::World::Spatial::Math::CDegree* pnew = new EarthView::World::Spatial::Math::CDegree(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CDegree_OperatorMinus_CDegree_CRadian(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial::Math::CDegree& objXXXX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					EarthView::World::Spatial::Math::CDegree result = objXXXX -(*(EarthView::World::Spatial::Math::CRadian*)r);
					EarthView::World::Spatial::Math::CDegree* pnew = new EarthView::World::Spatial::Math::CDegree(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CDegree_OperatorMultiply_CDegree_Real(void *pObjXXXX, _in Real f )
				{
					EarthView::World::Spatial::Math::CDegree& objXXXX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					EarthView::World::Spatial::Math::CDegree result = objXXXX *(f);
					EarthView::World::Spatial::Math::CDegree* pnew = new EarthView::World::Spatial::Math::CDegree(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CDegree_OperatorMultiply_CDegree_CDegree(void *pObjXXXX, _in const void* f )
				{
					EarthView::World::Spatial::Math::CDegree& objXXXX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					EarthView::World::Spatial::Math::CDegree result = objXXXX *(*(EarthView::World::Spatial::Math::CDegree*)f);
					EarthView::World::Spatial::Math::CDegree* pnew = new EarthView::World::Spatial::Math::CDegree(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CDegree_OperatorDivide_CDegree_Real(void *pObjXXXX, _in Real f )
				{
					EarthView::World::Spatial::Math::CDegree& objXXXX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					EarthView::World::Spatial::Math::CDegree result = objXXXX /(f);
					EarthView::World::Spatial::Math::CDegree* pnew = new EarthView::World::Spatial::Math::CDegree(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CDegree_OperatorLessThan_ev_bool_CDegree(void *pObjXXXX, _in const void* d )
				{
					EarthView::World::Spatial::Math::CDegree& objXXXX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					const EarthView::World::Spatial::Math::CDegree& objXXXX1 = *(EarthView::World::Spatial::Math::CDegree*)d;
					return objXXXX < objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CDegree_OperatorLessThanOrEqual_ev_bool_CDegree(void *pObjXXXX, _in const void* d )
				{
					EarthView::World::Spatial::Math::CDegree& objXXXX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					const EarthView::World::Spatial::Math::CDegree& objXXXX1 = *(EarthView::World::Spatial::Math::CDegree*)d;
					return objXXXX <= objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CDegree_OperatorEquals_ev_bool_CDegree(void *pObjXXXX, _in const void* d )
				{
					EarthView::World::Spatial::Math::CDegree& objXXXX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					const EarthView::World::Spatial::Math::CDegree& objXXXX1 = *(EarthView::World::Spatial::Math::CDegree*)d;
					return objXXXX == objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CDegree_OperatorNotEquals_ev_bool_CDegree(void *pObjXXXX, _in const void* d )
				{
					EarthView::World::Spatial::Math::CDegree& objXXXX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					const EarthView::World::Spatial::Math::CDegree& objXXXX1 = *(EarthView::World::Spatial::Math::CDegree*)d;
					return objXXXX != objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CDegree_OperatorGreaterThanOrEqual_ev_bool_CDegree(void *pObjXXXX, _in const void* d )
				{
					EarthView::World::Spatial::Math::CDegree& objXXXX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					const EarthView::World::Spatial::Math::CDegree& objXXXX1 = *(EarthView::World::Spatial::Math::CDegree*)d;
					return objXXXX >= objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CDegree_OperatorGreaterThan_ev_bool_CDegree(void *pObjXXXX, _in const void* d )
				{
					EarthView::World::Spatial::Math::CDegree& objXXXX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					const EarthView::World::Spatial::Math::CDegree& objXXXX1 = *(EarthView::World::Spatial::Math::CDegree*)d;
					return objXXXX > objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Math_CDegree_toStringDms_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CDegree* ptrNativeObject = (EarthView::World::Spatial::Math::CDegree*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->toStringDms();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Math_CDegree_toStringDmsLat_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CDegree* ptrNativeObject = (EarthView::World::Spatial::Math::CDegree*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->toStringDmsLat();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Math_CDegree_toStringDmsLon_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CDegree* ptrNativeObject = (EarthView::World::Spatial::Math::CDegree*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->toStringDmsLon();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Math_CDegree_toStringDms_EVString_ev_real64(_in ev_real64 degree )
				{
					EVString objXXXX = EarthView::World::Spatial::Math::CDegree::toStringDms(degree);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CDegree_fromStringDms_CDegree_EVString(_in const char* degreeString )
				{
					EarthView::World::Core::ev_string degreeString1 = degreeString;
					EarthView::World::Spatial::Math::CDegree objXXXX = EarthView::World::Spatial::Math::CDegree::fromStringDms(degreeString1);
					EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Math_CDegree_toStringDmsLat_EVString_ev_real64_EVString_EVString(_in ev_real64 degree, _in const char* southSuffix, _in const char* northSuffix )
				{
					EarthView::World::Core::ev_string southSuffix1 = southSuffix;
					EarthView::World::Core::ev_string northSuffix1 = northSuffix;
					EVString objXXXX = EarthView::World::Spatial::Math::CDegree::toStringDmsLat(degree, southSuffix1, northSuffix1);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CDegree_fromStringDmsLat_CDegree_EVString(_in const char* LatitudeString )
				{
					EarthView::World::Core::ev_string LatitudeString1 = LatitudeString;
					EarthView::World::Spatial::Math::CDegree objXXXX = EarthView::World::Spatial::Math::CDegree::fromStringDmsLat(LatitudeString1);
					EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Math_CDegree_toStringDmsLat_EVString_ev_real64(_in ev_real64 degree )
				{
					EVString objXXXX = EarthView::World::Spatial::Math::CDegree::toStringDmsLat(degree);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Math_CDegree_toStringDmsLon_EVString_ev_real64_EVString_EVString(_in ev_real64 degree, _in const char* eastSuffix, _in const char* westSuffix )
				{
					EarthView::World::Core::ev_string eastSuffix1 = eastSuffix;
					EarthView::World::Core::ev_string westSuffix1 = westSuffix;
					EVString objXXXX = EarthView::World::Spatial::Math::CDegree::toStringDmsLon(degree, eastSuffix1, westSuffix1);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Math_CDegree_toStringDmsLon_EVString_ev_real64(_in ev_real64 degree )
				{
					EVString objXXXX = EarthView::World::Spatial::Math::CDegree::toStringDmsLon(degree);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CDegree_fromStringDmsLon_CDegree_EVString(_in const char* longitudeString )
				{
					EarthView::World::Core::ev_string longitudeString1 = longitudeString;
					EarthView::World::Spatial::Math::CDegree objXXXX = EarthView::World::Spatial::Math::CDegree::fromStringDmsLon(longitudeString1);
					EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CAngle_OperatorConvertionCRadian_CRadian(void *pObjXXXX )
				{
					EarthView::World::Spatial::Math::CAngle& objYYYY = *(EarthView::World::Spatial::Math::CAngle*) pObjXXXX;
					EarthView::World::Spatial::Math::CRadian objXXXX = objYYYY ;
					EarthView::World::Spatial::Math::CRadian *pXXXX = new EarthView::World::Spatial::Math::CRadian(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CAngle_OperatorConvertionCDegree_CDegree(void *pObjXXXX )
				{
					EarthView::World::Spatial::Math::CAngle& objYYYY = *(EarthView::World::Spatial::Math::CAngle*) pObjXXXX;
					EarthView::World::Spatial::Math::CDegree objXXXX = objYYYY ;
					EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_Math_IntersectResPair_first( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::IntersectResPair* ptrNativeObject = (EarthView::World::Spatial::Math::IntersectResPair*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->first;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Math_IntersectResPair_first( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial::Math::IntersectResPair*)pObjectXXXX)->first = value;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Spatial_Math_IntersectResPair_second( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::IntersectResPair* ptrNativeObject = (EarthView::World::Spatial::Math::IntersectResPair*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->second;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Math_IntersectResPair_second( void *pObjectXXXX, Real  value )
				{
					((EarthView::World::Spatial::Math::IntersectResPair*)pObjectXXXX)->second = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_IntersectResPair_OperatorAssign_IntersectResPair_IntersectResPair(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Spatial::Math::IntersectResPair& objXXXX = *((EarthView::World::Spatial::Math::IntersectResPair*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Math::IntersectResPair*)other;
					EarthView::World::Spatial::Math::IntersectResPair *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Math_CMath_IAbs_ev_int32_ev_int32(_in ev_int32 iValue )
				{
					ev_int32 objXXXX = EarthView::World::Spatial::Math::CMath::IAbs(iValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Math_CMath_ICeil_ev_int32_ev_real32(_in ev_real32 fValue )
				{
					ev_int32 objXXXX = EarthView::World::Spatial::Math::CMath::ICeil(fValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Math_CMath_IFloor_ev_int32_ev_real32(_in ev_real32 fValue )
				{
					ev_int32 objXXXX = EarthView::World::Spatial::Math::CMath::IFloor(fValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Math_CMath_ISign_ev_int32_ev_int32(_in ev_int32 iValue )
				{
					ev_int32 objXXXX = EarthView::World::Spatial::Math::CMath::ISign(iValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_Abs_Real_Real(_in Real fValue )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::Abs(fValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_Abs_CDegree_CDegree(_in const void* dValue )
				{
					EarthView::World::Spatial::Math::CDegree objXXXX = EarthView::World::Spatial::Math::CMath::Abs(*(EarthView::World::Spatial::Math::CDegree*)dValue);
					EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_Abs_CRadian_CRadian(_in const void* rValue )
				{
					EarthView::World::Spatial::Math::CRadian objXXXX = EarthView::World::Spatial::Math::CMath::Abs(*(EarthView::World::Spatial::Math::CRadian*)rValue);
					EarthView::World::Spatial::Math::CRadian *pXXXX = new EarthView::World::Spatial::Math::CRadian(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_ACos_CRadian_Real(_in Real fValue )
				{
					EarthView::World::Spatial::Math::CRadian objXXXX = EarthView::World::Spatial::Math::CMath::ACos(fValue);
					EarthView::World::Spatial::Math::CRadian *pXXXX = new EarthView::World::Spatial::Math::CRadian(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_ACos_CRadian_Real_ev_bool(_in Real fValue, _in ev_bool fast )
				{
					EarthView::World::Spatial::Math::CRadian objXXXX = EarthView::World::Spatial::Math::CMath::ACos(fValue, fast);
					EarthView::World::Spatial::Math::CRadian *pXXXX = new EarthView::World::Spatial::Math::CRadian(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_ASin_CRadian_Real(_in Real fValue )
				{
					EarthView::World::Spatial::Math::CRadian objXXXX = EarthView::World::Spatial::Math::CMath::ASin(fValue);
					EarthView::World::Spatial::Math::CRadian *pXXXX = new EarthView::World::Spatial::Math::CRadian(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_ATan_CRadian_Real(_in Real fValue )
				{
					EarthView::World::Spatial::Math::CRadian objXXXX = EarthView::World::Spatial::Math::CMath::ATan(fValue);
					EarthView::World::Spatial::Math::CRadian *pXXXX = new EarthView::World::Spatial::Math::CRadian(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_ATan2_CRadian_Real_Real(_in Real fY, _in Real fX )
				{
					EarthView::World::Spatial::Math::CRadian objXXXX = EarthView::World::Spatial::Math::CMath::ATan2(fY, fX);
					EarthView::World::Spatial::Math::CRadian *pXXXX = new EarthView::World::Spatial::Math::CRadian(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_Ceil_Real_Real(_in Real fValue )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::Ceil(fValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMath_isNaN_ev_bool_Real(_in Real f )
				{
					ev_bool objXXXX = EarthView::World::Spatial::Math::CMath::isNaN(f);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_Cos_Real_CRadian_ev_bool(_in const void* fValue, _in ev_bool useTables )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::Cos(*(EarthView::World::Spatial::Math::CRadian*)fValue, useTables);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_Cos_Real_CRadian(_in const void* fValue )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::Cos(*(EarthView::World::Spatial::Math::CRadian*)fValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_Cos_Real_Real_ev_bool(_in Real fValue, _in ev_bool useTables )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::Cos(fValue, useTables);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_Cos_Real_Real(_in Real fValue )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::Cos(fValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_Exp_Real_Real(_in Real fValue )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::Exp(fValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_Floor_Real_Real(_in Real fValue )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::Floor(fValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_Log_Real_Real(_in Real fValue )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::Log(fValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const Real  _stdcall Get_EarthView_World_Spatial_Math_CMath_LOG2()
				{
					const Real objXXXX = EarthView::World::Spatial::Math::CMath::LOG2;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_Log2_Real_Real(_in Real fValue )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::Log2(fValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_LogN_Real_Real_Real(_in Real fBase, _in Real fValue )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::LogN(fBase, fValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_Pow_Real_Real_Real(_in Real fBase, _in Real fExponent )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::Pow(fBase, fExponent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_Sign_Real_Real(_in Real fValue )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::Sign(fValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_Sign_CRadian_CRadian(_in const void* rValue )
				{
					EarthView::World::Spatial::Math::CRadian objXXXX = EarthView::World::Spatial::Math::CMath::Sign(*(EarthView::World::Spatial::Math::CRadian*)rValue);
					EarthView::World::Spatial::Math::CRadian *pXXXX = new EarthView::World::Spatial::Math::CRadian(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_Sign_CDegree_CDegree(_in const void* dValue )
				{
					EarthView::World::Spatial::Math::CDegree objXXXX = EarthView::World::Spatial::Math::CMath::Sign(*(EarthView::World::Spatial::Math::CDegree*)dValue);
					EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_Sin_Real_CRadian_ev_bool(_in const void* fValue, _in ev_bool useTables )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::Sin(*(EarthView::World::Spatial::Math::CRadian*)fValue, useTables);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Math_CMath_Sin_ev_real64_ev_real64(_in const ev_real64 dValue )
				{
					ev_real64 objXXXX = EarthView::World::Spatial::Math::CMath::Sin(dValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_Sin_Real_CRadian(_in const void* fValue )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::Sin(*(EarthView::World::Spatial::Math::CRadian*)fValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_Sin_Real_Real_ev_bool(_in Real fValue, _in ev_bool useTables )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::Sin(fValue, useTables);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_Sqr_Real_Real(_in Real fValue )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::Sqr(fValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_Sqrt_Real_Real(_in Real fValue )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::Sqrt(fValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_Sqrt_CRadian_CRadian(_in const void* fValue )
				{
					EarthView::World::Spatial::Math::CRadian objXXXX = EarthView::World::Spatial::Math::CMath::Sqrt(*(EarthView::World::Spatial::Math::CRadian*)fValue);
					EarthView::World::Spatial::Math::CRadian *pXXXX = new EarthView::World::Spatial::Math::CRadian(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_Sqrt_CDegree_CDegree(_in const void* fValue )
				{
					EarthView::World::Spatial::Math::CDegree objXXXX = EarthView::World::Spatial::Math::CMath::Sqrt(*(EarthView::World::Spatial::Math::CDegree*)fValue);
					EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_InvSqrt_Real_Real(_in Real fValue )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::InvSqrt(fValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_UnitRandom_Real( )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::UnitRandom();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_RangeRandom_Real_Real_Real(_in Real fLow, _in Real fHigh )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::RangeRandom(fLow, fHigh);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_SymmetricRandom_Real( )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::SymmetricRandom();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_Tan_Real_CRadian_ev_bool(_in const void* fValue, _in ev_bool useTables )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::Tan(*(EarthView::World::Spatial::Math::CRadian*)fValue, useTables);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_Tan_Real_CRadian(_in const void* fValue )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::Tan(*(EarthView::World::Spatial::Math::CRadian*)fValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_Tan_Real_Real_ev_bool(_in Real fValue, _in ev_bool useTables )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::Tan(fValue, useTables);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_Tan_Real_Real(_in Real fValue )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::Tan(fValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_DegreesToRadians_Real_Real(_in Real degrees )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::DegreesToRadians(degrees);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_RadiansToDegrees_Real_Real(_in Real radians )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::RadiansToDegrees(radians);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMath_setAngleUnit_void_AngleUnit(_in int unit )
				{
					EarthView::World::Spatial::Math::CMath::setAngleUnit((EarthView::World::Spatial::Math::CMath::AngleUnit)unit);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Math_CMath_getAngleUnit_AngleUnit( )
				{
					EarthView::World::Spatial::Math::CMath::AngleUnit objXXXX = EarthView::World::Spatial::Math::CMath::getAngleUnit();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_AngleUnitsToRadians_Real_Real(_in Real units )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::AngleUnitsToRadians(units);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_RadiansToAngleUnits_Real_Real(_in Real radians )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::RadiansToAngleUnits(radians);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_AngleUnitsToDegrees_Real_Real(_in Real units )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::AngleUnitsToDegrees(units);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_DegreesToAngleUnits_Real_Real(_in Real degrees )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::DegreesToAngleUnits(degrees);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMath_pointInTri2D_ev_bool_CVector2_CVector2_CVector2_CVector2(_in const void* p, _in const void* a, _in const void* b, _in const void* c )
				{
					ev_bool objXXXX = EarthView::World::Spatial::Math::CMath::pointInTri2D(*(EarthView::World::Spatial::Math::CVector2*)p, *(EarthView::World::Spatial::Math::CVector2*)a, *(EarthView::World::Spatial::Math::CVector2*)b, *(EarthView::World::Spatial::Math::CVector2*)c);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMath_pointInTri3D_ev_bool_CVector3_CVector3_CVector3_CVector3_CVector3(_in const void* p, _in const void* a, _in const void* b, _in const void* c, _in const void* normal )
				{
					ev_bool objXXXX = EarthView::World::Spatial::Math::CMath::pointInTri3D(*(EarthView::World::Spatial::Math::CVector3*)p, *(EarthView::World::Spatial::Math::CVector3*)a, *(EarthView::World::Spatial::Math::CVector3*)b, *(EarthView::World::Spatial::Math::CVector3*)c, *(EarthView::World::Spatial::Math::CVector3*)normal);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_intersects_IntersectResPair_CRay_CPlane(_in const void* ray, _in const void* plane )
				{
					EarthView::World::Spatial::Math::IntersectResPair objXXXX = EarthView::World::Spatial::Math::CMath::intersects(*(EarthView::World::Spatial::Math::CRay*)ray, *(EarthView::World::Spatial::Math::CPlane*)plane);
					EarthView::World::Spatial::Math::IntersectResPair *pXXXX = new EarthView::World::Spatial::Math::IntersectResPair(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_intersects_IntersectResPair_CRay_CSphere_ev_bool(_in const void* ray, _in const void* sphere, _in ev_bool discardInside )
				{
					EarthView::World::Spatial::Math::IntersectResPair objXXXX = EarthView::World::Spatial::Math::CMath::intersects(*(EarthView::World::Spatial::Math::CRay*)ray, *(EarthView::World::Spatial::Math::CSphere*)sphere, discardInside);
					EarthView::World::Spatial::Math::IntersectResPair *pXXXX = new EarthView::World::Spatial::Math::IntersectResPair(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_intersects_IntersectResPair_CRay_CSphere(_in const void* ray, _in const void* sphere )
				{
					EarthView::World::Spatial::Math::IntersectResPair objXXXX = EarthView::World::Spatial::Math::CMath::intersects(*(EarthView::World::Spatial::Math::CRay*)ray, *(EarthView::World::Spatial::Math::CSphere*)sphere);
					EarthView::World::Spatial::Math::IntersectResPair *pXXXX = new EarthView::World::Spatial::Math::IntersectResPair(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_intersects_IntersectResPair_CRay_CAxisAlignedBox(_in const void* ray, _in const void* box )
				{
					EarthView::World::Spatial::Math::IntersectResPair objXXXX = EarthView::World::Spatial::Math::CMath::intersects(*(EarthView::World::Spatial::Math::CRay*)ray, *(EarthView::World::Spatial::Math::CAxisAlignedBox*)box);
					EarthView::World::Spatial::Math::IntersectResPair *pXXXX = new EarthView::World::Spatial::Math::IntersectResPair(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMath_intersects_ev_bool_CRay_CAxisAlignedBox_Real_Real(_in const void* ray, _in const void* box, _out Real* d1, _out Real* d2 )
				{
					ev_bool objXXXX = EarthView::World::Spatial::Math::CMath::intersects(*(EarthView::World::Spatial::Math::CRay*)ray, *(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, d1, d2);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_intersects_IntersectResPair_CRay_CVector3_CVector3_CVector3_CVector3_ev_bool_ev_bool(_in const void* ray, _in const void* a, _in const void* b, _in const void* c, _in const void* normal, _in ev_bool positiveSide, _in ev_bool negativeSide )
				{
					EarthView::World::Spatial::Math::IntersectResPair objXXXX = EarthView::World::Spatial::Math::CMath::intersects(*(EarthView::World::Spatial::Math::CRay*)ray, *(EarthView::World::Spatial::Math::CVector3*)a, *(EarthView::World::Spatial::Math::CVector3*)b, *(EarthView::World::Spatial::Math::CVector3*)c, *(EarthView::World::Spatial::Math::CVector3*)normal, positiveSide, negativeSide);
					EarthView::World::Spatial::Math::IntersectResPair *pXXXX = new EarthView::World::Spatial::Math::IntersectResPair(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_intersects_IntersectResPair_CRay_CVector3_CVector3_CVector3_CVector3(_in const void* ray, _in const void* a, _in const void* b, _in const void* c, _in const void* normal )
				{
					EarthView::World::Spatial::Math::IntersectResPair objXXXX = EarthView::World::Spatial::Math::CMath::intersects(*(EarthView::World::Spatial::Math::CRay*)ray, *(EarthView::World::Spatial::Math::CVector3*)a, *(EarthView::World::Spatial::Math::CVector3*)b, *(EarthView::World::Spatial::Math::CVector3*)c, *(EarthView::World::Spatial::Math::CVector3*)normal);
					EarthView::World::Spatial::Math::IntersectResPair *pXXXX = new EarthView::World::Spatial::Math::IntersectResPair(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_intersects_IntersectResPair_CRay_CVector3_CVector3_CVector3_ev_bool_ev_bool(_in const void* ray, _in const void* a, _in const void* b, _in const void* c, _in ev_bool positiveSide, _in ev_bool negativeSide )
				{
					EarthView::World::Spatial::Math::IntersectResPair objXXXX = EarthView::World::Spatial::Math::CMath::intersects(*(EarthView::World::Spatial::Math::CRay*)ray, *(EarthView::World::Spatial::Math::CVector3*)a, *(EarthView::World::Spatial::Math::CVector3*)b, *(EarthView::World::Spatial::Math::CVector3*)c, positiveSide, negativeSide);
					EarthView::World::Spatial::Math::IntersectResPair *pXXXX = new EarthView::World::Spatial::Math::IntersectResPair(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_intersects_IntersectResPair_CRay_CVector3_CVector3_CVector3_ev_bool(_in const void* ray, _in const void* a, _in const void* b, _in const void* c, _in ev_bool positiveSide )
				{
					EarthView::World::Spatial::Math::IntersectResPair objXXXX = EarthView::World::Spatial::Math::CMath::intersects(*(EarthView::World::Spatial::Math::CRay*)ray, *(EarthView::World::Spatial::Math::CVector3*)a, *(EarthView::World::Spatial::Math::CVector3*)b, *(EarthView::World::Spatial::Math::CVector3*)c, positiveSide);
					EarthView::World::Spatial::Math::IntersectResPair *pXXXX = new EarthView::World::Spatial::Math::IntersectResPair(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_intersects_IntersectResPair_CRay_CVector3_CVector3_CVector3(_in const void* ray, _in const void* a, _in const void* b, _in const void* c )
				{
					EarthView::World::Spatial::Math::IntersectResPair objXXXX = EarthView::World::Spatial::Math::CMath::intersects(*(EarthView::World::Spatial::Math::CRay*)ray, *(EarthView::World::Spatial::Math::CVector3*)a, *(EarthView::World::Spatial::Math::CVector3*)b, *(EarthView::World::Spatial::Math::CVector3*)c);
					EarthView::World::Spatial::Math::IntersectResPair *pXXXX = new EarthView::World::Spatial::Math::IntersectResPair(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMath_intersects_ev_bool_CSphere_CAxisAlignedBox(_in const void* sphere, _in const void* box )
				{
					ev_bool objXXXX = EarthView::World::Spatial::Math::CMath::intersects(*(EarthView::World::Spatial::Math::CSphere*)sphere, *(EarthView::World::Spatial::Math::CAxisAlignedBox*)box);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMath_intersects_ev_bool_CPlane_CAxisAlignedBox(_in const void* plane, _in const void* box )
				{
					ev_bool objXXXX = EarthView::World::Spatial::Math::CMath::intersects(*(EarthView::World::Spatial::Math::CPlane*)plane, *(EarthView::World::Spatial::Math::CAxisAlignedBox*)box);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_intersects_IntersectResPair_CRay_PlaneList_ev_bool(_in const void* ray, _in const void* planes, _in ev_bool normalIsOutside )
				{
					EarthView::World::Spatial::Math::IntersectResPair objXXXX = EarthView::World::Spatial::Math::CMath::intersects(*(EarthView::World::Spatial::Math::CRay*)ray, *(EarthView::World::Spatial::Math::PlaneList*)planes, normalIsOutside);
					EarthView::World::Spatial::Math::IntersectResPair *pXXXX = new EarthView::World::Spatial::Math::IntersectResPair(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_intersects_IntersectResPair_CRay_Planes_ev_bool(_in const void* ray, _in const void* planeList, _in ev_bool normalIsOutside )
				{
					EarthView::World::Spatial::Math::IntersectResPair objXXXX = EarthView::World::Spatial::Math::CMath::intersects(*(EarthView::World::Spatial::Math::CRay*)ray, *(EarthView::World::Spatial::Math::Planes*)planeList, normalIsOutside);
					EarthView::World::Spatial::Math::IntersectResPair *pXXXX = new EarthView::World::Spatial::Math::IntersectResPair(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMath_intersects_ev_bool_CSphere_CPlane(_in const void* sphere, _in const void* plane )
				{
					ev_bool objXXXX = EarthView::World::Spatial::Math::CMath::intersects(*(EarthView::World::Spatial::Math::CSphere*)sphere, *(EarthView::World::Spatial::Math::CPlane*)plane);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMath_RealEqual_ev_bool_Real_Real_Real(_in Real a, _in Real b, _in Real tolerance )
				{
					ev_bool objXXXX = EarthView::World::Spatial::Math::CMath::RealEqual(a, b, tolerance);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMath_RealEqual_ev_bool_Real_Real(_in Real a, _in Real b )
				{
					ev_bool objXXXX = EarthView::World::Spatial::Math::CMath::RealEqual(a, b);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_calculateTangentSpaceVector_CVector3_CVector3_CVector3_CVector3_Real_Real_Real_Real_Real_Real(_in const void* position1, _in const void* position2, _in const void* position3, _in Real u1, _in Real v1, _in Real u2, _in Real v2, _in Real u3, _in Real v3 )
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial::Math::CMath::calculateTangentSpaceVector(*(EarthView::World::Spatial::Math::CVector3*)position1, *(EarthView::World::Spatial::Math::CVector3*)position2, *(EarthView::World::Spatial::Math::CVector3*)position3, u1, v1, u2, v2, u3, v3);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_buildReflectionMatrix_CMatrix4_CPlane(_in const void* p )
				{
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = EarthView::World::Spatial::Math::CMath::buildReflectionMatrix(*(EarthView::World::Spatial::Math::CPlane*)p);
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_calculateFaceNormal_CVector4_CVector3_CVector3_CVector3(_in const void* v1, _in const void* v2, _in const void* v3 )
				{
					EarthView::World::Spatial::Math::CVector4 objXXXX = EarthView::World::Spatial::Math::CMath::calculateFaceNormal(*(EarthView::World::Spatial::Math::CVector3*)v1, *(EarthView::World::Spatial::Math::CVector3*)v2, *(EarthView::World::Spatial::Math::CVector3*)v3);
					EarthView::World::Spatial::Math::CVector4 *pXXXX = new EarthView::World::Spatial::Math::CVector4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_calculateBasicFaceNormal_CVector3_CVector3_CVector3_CVector3(_in const void* v1, _in const void* v2, _in const void* v3 )
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial::Math::CMath::calculateBasicFaceNormal(*(EarthView::World::Spatial::Math::CVector3*)v1, *(EarthView::World::Spatial::Math::CVector3*)v2, *(EarthView::World::Spatial::Math::CVector3*)v3);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_calculateFaceNormalWithoutNormalize_CVector4_CVector3_CVector3_CVector3(_in const void* v1, _in const void* v2, _in const void* v3 )
				{
					EarthView::World::Spatial::Math::CVector4 objXXXX = EarthView::World::Spatial::Math::CMath::calculateFaceNormalWithoutNormalize(*(EarthView::World::Spatial::Math::CVector3*)v1, *(EarthView::World::Spatial::Math::CVector3*)v2, *(EarthView::World::Spatial::Math::CVector3*)v3);
					EarthView::World::Spatial::Math::CVector4 *pXXXX = new EarthView::World::Spatial::Math::CVector4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_calculateBasicFaceNormalWithoutNormalize_CVector3_CVector3_CVector3_CVector3(_in const void* v1, _in const void* v2, _in const void* v3 )
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial::Math::CMath::calculateBasicFaceNormalWithoutNormalize(*(EarthView::World::Spatial::Math::CVector3*)v1, *(EarthView::World::Spatial::Math::CVector3*)v2, *(EarthView::World::Spatial::Math::CVector3*)v3);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_gaussianDistribution_Real_Real_Real_Real(_in Real x, _in Real offset, _in Real scale )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::gaussianDistribution(x, offset, scale);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_gaussianDistribution_Real_Real_Real(_in Real x, _in Real offset )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::gaussianDistribution(x, offset);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_gaussianDistribution_Real_Real(_in Real x )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::gaussianDistribution(x);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_Clamp_Real_Real_Real_Real(_in Real val, _in Real minval, _in Real maxval )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::Clamp(val, minval, maxval);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Math_CMath_Clamp_ev_int32_ev_int32_ev_int32_ev_int32(_in ev_int32 val, _in ev_int32 minval, _in ev_int32 maxval )
				{
					ev_int32 objXXXX = EarthView::World::Spatial::Math::CMath::Clamp(val, minval, maxval);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_makeViewMatrix_CMatrix4_CVector3_CQuaternion_CMatrix4(_in const void* position, _in const void* orientation, _in const EarthView::World::Spatial::Math::CMatrix4* reflectMatrix )
				{
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = EarthView::World::Spatial::Math::CMath::makeViewMatrix(*(EarthView::World::Spatial::Math::CVector3*)position, *(EarthView::World::Spatial::Math::CQuaternion*)orientation, reflectMatrix);
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMath_makeViewMatrix_CMatrix4_CVector3_CQuaternion(_in const void* position, _in const void* orientation )
				{
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = EarthView::World::Spatial::Math::CMath::makeViewMatrix(*(EarthView::World::Spatial::Math::CVector3*)position, *(EarthView::World::Spatial::Math::CQuaternion*)orientation);
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMath_boundingRadiusFromAABB_Real_CAxisAlignedBox(_in const void* aabb )
				{
					Real objXXXX = EarthView::World::Spatial::Math::CMath::boundingRadiusFromAABB(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)aabb);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const Real  _stdcall Get_EarthView_World_Spatial_Math_CMath_POS_INFINITY()
				{
					const Real objXXXX = EarthView::World::Spatial::Math::CMath::POS_INFINITY;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const Real  _stdcall Get_EarthView_World_Spatial_Math_CMath_NEG_INFINITY()
				{
					const Real objXXXX = EarthView::World::Spatial::Math::CMath::NEG_INFINITY;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const Real  _stdcall Get_EarthView_World_Spatial_Math_CMath_PI()
				{
					const Real objXXXX = EarthView::World::Spatial::Math::CMath::PI;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const Real  _stdcall Get_EarthView_World_Spatial_Math_CMath_TWO_PI()
				{
					const Real objXXXX = EarthView::World::Spatial::Math::CMath::TWO_PI;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const Real  _stdcall Get_EarthView_World_Spatial_Math_CMath_HALF_PI()
				{
					const Real objXXXX = EarthView::World::Spatial::Math::CMath::HALF_PI;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const Real  _stdcall Get_EarthView_World_Spatial_Math_CMath_fDeg2Rad()
				{
					const Real objXXXX = EarthView::World::Spatial::Math::CMath::fDeg2Rad;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const Real  _stdcall Get_EarthView_World_Spatial_Math_CMath_fRad2Deg()
				{
					const Real objXXXX = EarthView::World::Spatial::Math::CMath::fRad2Deg;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const Real  _stdcall Get_EarthView_World_Spatial_Math_CMath_EARTH_RADIUS()
				{
					const Real objXXXX = EarthView::World::Spatial::Math::CMath::EARTH_RADIUS;
					return objXXXX;
				}
			}
		}
	}
}
