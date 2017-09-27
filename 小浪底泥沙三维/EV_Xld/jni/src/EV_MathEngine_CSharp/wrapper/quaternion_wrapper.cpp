/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/quaternion.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CQuaternion_swap_void_CQuaternion(void *pObjectXXXX, _inout void* other )
				{
					EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					ptrNativeObject->swap(*(EarthView::World::Spatial::Math::CQuaternion*)other);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CQuaternion_OperatorIndex_Real_ev_size_t(void *pObjXXXX, _in const ev_uint64  i )
				{
					EarthView::World::Spatial::Math::CQuaternion& objYYYY = *(EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					Real objXXXX = objYYYY[i];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real*  _stdcall EarthView_World_Spatial_Math_CQuaternion_ptr_Real(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					Real* objXXXX = ptrNativeObject->ptr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CQuaternion_FromRotationMatrix_void_CMatrix3(void *pObjectXXXX, _in const void* kRot )
				{
					EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					ptrNativeObject->FromRotationMatrix(*(EarthView::World::Spatial::Math::CMatrix3*)kRot);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CQuaternion_ToRotationMatrix_void_CMatrix3(void *pObjectXXXX, _out void* kRot )
				{
					const EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					ptrNativeObject->ToRotationMatrix(*(EarthView::World::Spatial::Math::CMatrix3*)kRot);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CQuaternion_FromAngleAxis_void_CRadian_CVector3(void *pObjectXXXX, _in const void* rfAngle, _in const void* rkAxis )
				{
					EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					ptrNativeObject->FromAngleAxis(*(EarthView::World::Spatial::Math::CRadian*)rfAngle, *(EarthView::World::Spatial::Math::CVector3*)rkAxis);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CQuaternion_ToAngleAxis_void_CRadian_CVector3(void *pObjectXXXX, _out void* rfAngle, _out void* rkAxis )
				{
					const EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					ptrNativeObject->ToAngleAxis(*(EarthView::World::Spatial::Math::CRadian*)rfAngle, *(EarthView::World::Spatial::Math::CVector3*)rkAxis);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CQuaternion_ToAngleAxis_void_CDegree_CVector3(void *pObjectXXXX, _out void* dAngle, _out void* rkAxis )
				{
					const EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					ptrNativeObject->ToAngleAxis(*(EarthView::World::Spatial::Math::CDegree*)dAngle, *(EarthView::World::Spatial::Math::CVector3*)rkAxis);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CQuaternion_FromAxes_void_CVector3_CVector3_CVector3(void *pObjectXXXX, _in const void* xAxis, _in const void* yAxis, _in const void* zAxis )
				{
					EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					ptrNativeObject->FromAxes(*(EarthView::World::Spatial::Math::CVector3*)xAxis, *(EarthView::World::Spatial::Math::CVector3*)yAxis, *(EarthView::World::Spatial::Math::CVector3*)zAxis);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CQuaternion_ToAxes_void_CVector3_CVector3_CVector3(void *pObjectXXXX, _out void* xAxis, _out void* yAxis, _out void* zAxis )
				{
					const EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					ptrNativeObject->ToAxes(*(EarthView::World::Spatial::Math::CVector3*)xAxis, *(EarthView::World::Spatial::Math::CVector3*)yAxis, *(EarthView::World::Spatial::Math::CVector3*)zAxis);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_xAxis_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->xAxis();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_yAxis_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->yAxis();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_zAxis_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->zAxis();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_OperatorAssign_CQuaternion_CQuaternion(void *pObjXXXX, _in const void* rkQ )
				{
					EarthView::World::Spatial::Math::CQuaternion& objXXXX = *((EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Math::CQuaternion*)rkQ;
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_OperatorPlus_CQuaternion_CQuaternion(void *pObjXXXX, _in const void* rkQ )
				{
					EarthView::World::Spatial::Math::CQuaternion& objXXXX = *(EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					EarthView::World::Spatial::Math::CQuaternion result = objXXXX +(*(EarthView::World::Spatial::Math::CQuaternion*)rkQ);
					EarthView::World::Spatial::Math::CQuaternion* pnew = new EarthView::World::Spatial::Math::CQuaternion(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_OperatorMinus_CQuaternion_CQuaternion(void *pObjXXXX, _in const void* rkQ )
				{
					EarthView::World::Spatial::Math::CQuaternion& objXXXX = *(EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					EarthView::World::Spatial::Math::CQuaternion result = objXXXX -(*(EarthView::World::Spatial::Math::CQuaternion*)rkQ);
					EarthView::World::Spatial::Math::CQuaternion* pnew = new EarthView::World::Spatial::Math::CQuaternion(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_OperatorMultiply_CQuaternion_CQuaternion(void *pObjXXXX, _in const void* rkQ )
				{
					EarthView::World::Spatial::Math::CQuaternion& objXXXX = *(EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					EarthView::World::Spatial::Math::CQuaternion result = objXXXX *(*(EarthView::World::Spatial::Math::CQuaternion*)rkQ);
					EarthView::World::Spatial::Math::CQuaternion* pnew = new EarthView::World::Spatial::Math::CQuaternion(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_OperatorMultiply_CQuaternion_Real(void *pObjXXXX, _in Real fScalar )
				{
					EarthView::World::Spatial::Math::CQuaternion& objXXXX = *(EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					EarthView::World::Spatial::Math::CQuaternion result = objXXXX *(fScalar);
					EarthView::World::Spatial::Math::CQuaternion* pnew = new EarthView::World::Spatial::Math::CQuaternion(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_OperatorNegative_CQuaternion(void *pObjXXXX )
				{
					EarthView::World::Spatial::Math::CQuaternion& objXXXX = *(EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					EarthView::World::Spatial::Math::CQuaternion result = -objXXXX ;
					EarthView::World::Spatial::Math::CQuaternion* pnew = new EarthView::World::Spatial::Math::CQuaternion(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CQuaternion_OperatorEquals_ev_bool_CQuaternion(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial::Math::CQuaternion& objXXXX = *(EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					const EarthView::World::Spatial::Math::CQuaternion& objXXXX1 = *(EarthView::World::Spatial::Math::CQuaternion*)rhs;
					return objXXXX == objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CQuaternion_OperatorNotEquals_ev_bool_CQuaternion(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial::Math::CQuaternion& objXXXX = *(EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					const EarthView::World::Spatial::Math::CQuaternion& objXXXX1 = *(EarthView::World::Spatial::Math::CQuaternion*)rhs;
					return objXXXX != objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CQuaternion_Dot_Real_CQuaternion(void *pObjectXXXX, _in const void* rkQ )
				{
					const EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->Dot(*(EarthView::World::Spatial::Math::CQuaternion*)rkQ);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CQuaternion_Norm_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->Norm();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CQuaternion_normalise_Real(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->normalise();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_Inverse_CQuaternion(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->Inverse();
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_UnitInverse_CQuaternion(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->UnitInverse();
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_Exp_CQuaternion(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->Exp();
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_Log_CQuaternion(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->Log();
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_OperatorMultiply_CVector3_CVector3(void *pObjXXXX, _in const void* rkVector )
				{
					EarthView::World::Spatial::Math::CQuaternion& objXXXX = *(EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 result = objXXXX *(*(EarthView::World::Spatial::Math::CVector3*)rkVector);
					EarthView::World::Spatial::Math::CVector3* pnew = new EarthView::World::Spatial::Math::CVector3(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_getRoll_CRadian_ev_bool(void *pObjectXXXX, _in ev_bool reprojectAxis )
				{
					const EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					EarthView::World::Spatial::Math::CRadian objXXXX = ptrNativeObject->getRoll(reprojectAxis);
					EarthView::World::Spatial::Math::CRadian *pXXXX = new EarthView::World::Spatial::Math::CRadian(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_getRoll_CRadian(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					EarthView::World::Spatial::Math::CRadian objXXXX = ptrNativeObject->getRoll();
					EarthView::World::Spatial::Math::CRadian *pXXXX = new EarthView::World::Spatial::Math::CRadian(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_getPitch_CRadian_ev_bool(void *pObjectXXXX, _in ev_bool reprojectAxis )
				{
					const EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					EarthView::World::Spatial::Math::CRadian objXXXX = ptrNativeObject->getPitch(reprojectAxis);
					EarthView::World::Spatial::Math::CRadian *pXXXX = new EarthView::World::Spatial::Math::CRadian(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_getPitch_CRadian(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					EarthView::World::Spatial::Math::CRadian objXXXX = ptrNativeObject->getPitch();
					EarthView::World::Spatial::Math::CRadian *pXXXX = new EarthView::World::Spatial::Math::CRadian(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_getYaw_CRadian_ev_bool(void *pObjectXXXX, _in ev_bool reprojectAxis )
				{
					const EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					EarthView::World::Spatial::Math::CRadian objXXXX = ptrNativeObject->getYaw(reprojectAxis);
					EarthView::World::Spatial::Math::CRadian *pXXXX = new EarthView::World::Spatial::Math::CRadian(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_getYaw_CRadian(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					EarthView::World::Spatial::Math::CRadian objXXXX = ptrNativeObject->getYaw();
					EarthView::World::Spatial::Math::CRadian *pXXXX = new EarthView::World::Spatial::Math::CRadian(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CQuaternion_equals_ev_bool_CQuaternion_CRadian(void *pObjectXXXX, _in const void* rhs, _in const void* tolerance )
				{
					const EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->equals(*(EarthView::World::Spatial::Math::CQuaternion*)rhs, *(EarthView::World::Spatial::Math::CRadian*)tolerance);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_Slerp_CQuaternion_Real_CQuaternion_CQuaternion_ev_bool(_in Real fT, _in const void* rkP, _in const void* rkQ, _in ev_bool shortestPath )
				{
					EarthView::World::Spatial::Math::CQuaternion objXXXX = EarthView::World::Spatial::Math::CQuaternion::Slerp(fT, *(EarthView::World::Spatial::Math::CQuaternion*)rkP, *(EarthView::World::Spatial::Math::CQuaternion*)rkQ, shortestPath);
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_Slerp_CQuaternion_Real_CQuaternion_CQuaternion(_in Real fT, _in const void* rkP, _in const void* rkQ )
				{
					EarthView::World::Spatial::Math::CQuaternion objXXXX = EarthView::World::Spatial::Math::CQuaternion::Slerp(fT, *(EarthView::World::Spatial::Math::CQuaternion*)rkP, *(EarthView::World::Spatial::Math::CQuaternion*)rkQ);
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_SlerpExtraSpins_CQuaternion_Real_CQuaternion_CQuaternion_ev_int32(_in Real fT, _in const void* rkP, _in const void* rkQ, _in ev_int32 iExtraSpins )
				{
					EarthView::World::Spatial::Math::CQuaternion objXXXX = EarthView::World::Spatial::Math::CQuaternion::SlerpExtraSpins(fT, *(EarthView::World::Spatial::Math::CQuaternion*)rkP, *(EarthView::World::Spatial::Math::CQuaternion*)rkQ, iExtraSpins);
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CQuaternion_Intermediate_void_CQuaternion_CQuaternion_CQuaternion_CQuaternion_CQuaternion(_in const void* rkQ0, _in const void* rkQ1, _in const void* rkQ2, _out void* rka, _out void* rkB )
				{
					EarthView::World::Spatial::Math::CQuaternion::Intermediate(*(EarthView::World::Spatial::Math::CQuaternion*)rkQ0, *(EarthView::World::Spatial::Math::CQuaternion*)rkQ1, *(EarthView::World::Spatial::Math::CQuaternion*)rkQ2, *(EarthView::World::Spatial::Math::CQuaternion*)rka, *(EarthView::World::Spatial::Math::CQuaternion*)rkB);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_Squad_CQuaternion_Real_CQuaternion_CQuaternion_CQuaternion_CQuaternion_ev_bool(_in Real fT, _in const void* rkP, _in const void* rkA, _in const void* rkB, _in const void* rkQ, _in ev_bool shortestPath )
				{
					EarthView::World::Spatial::Math::CQuaternion objXXXX = EarthView::World::Spatial::Math::CQuaternion::Squad(fT, *(EarthView::World::Spatial::Math::CQuaternion*)rkP, *(EarthView::World::Spatial::Math::CQuaternion*)rkA, *(EarthView::World::Spatial::Math::CQuaternion*)rkB, *(EarthView::World::Spatial::Math::CQuaternion*)rkQ, shortestPath);
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_Squad_CQuaternion_Real_CQuaternion_CQuaternion_CQuaternion_CQuaternion(_in Real fT, _in const void* rkP, _in const void* rkA, _in const void* rkB, _in const void* rkQ )
				{
					EarthView::World::Spatial::Math::CQuaternion objXXXX = EarthView::World::Spatial::Math::CQuaternion::Squad(fT, *(EarthView::World::Spatial::Math::CQuaternion*)rkP, *(EarthView::World::Spatial::Math::CQuaternion*)rkA, *(EarthView::World::Spatial::Math::CQuaternion*)rkB, *(EarthView::World::Spatial::Math::CQuaternion*)rkQ);
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_nlerp_CQuaternion_Real_CQuaternion_CQuaternion_ev_bool(_in Real fT, _in const void* rkP, _in const void* rkQ, _in ev_bool shortestPath )
				{
					EarthView::World::Spatial::Math::CQuaternion objXXXX = EarthView::World::Spatial::Math::CQuaternion::nlerp(fT, *(EarthView::World::Spatial::Math::CQuaternion*)rkP, *(EarthView::World::Spatial::Math::CQuaternion*)rkQ, shortestPath);
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CQuaternion_nlerp_CQuaternion_Real_CQuaternion_CQuaternion(_in Real fT, _in const void* rkP, _in const void* rkQ )
				{
					EarthView::World::Spatial::Math::CQuaternion objXXXX = EarthView::World::Spatial::Math::CQuaternion::nlerp(fT, *(EarthView::World::Spatial::Math::CQuaternion*)rkP, *(EarthView::World::Spatial::Math::CQuaternion*)rkQ);
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const Real  _stdcall Get_EarthView_World_Spatial_Math_CQuaternion_ms_fEpsilon()
				{
					const Real objXXXX = EarthView::World::Spatial::Math::CQuaternion::ms_fEpsilon;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Spatial_Math_CQuaternion_ZERO()
				{
					const EarthView::World::Spatial::Math::CQuaternion objXXXX = EarthView::World::Spatial::Math::CQuaternion::ZERO;
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Spatial_Math_CQuaternion_IDENTITY()
				{
					const EarthView::World::Spatial::Math::CQuaternion objXXXX = EarthView::World::Spatial::Math::CQuaternion::IDENTITY;
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Spatial_Math_CQuaternion_x( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->x;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Math_CQuaternion_x( void *pObjectXXXX, Real  value )
				{
					((EarthView::World::Spatial::Math::CQuaternion*)pObjectXXXX)->x = value;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Spatial_Math_CQuaternion_y( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->y;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Math_CQuaternion_y( void *pObjectXXXX, Real  value )
				{
					((EarthView::World::Spatial::Math::CQuaternion*)pObjectXXXX)->y = value;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Spatial_Math_CQuaternion_z( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->z;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Math_CQuaternion_z( void *pObjectXXXX, Real  value )
				{
					((EarthView::World::Spatial::Math::CQuaternion*)pObjectXXXX)->z = value;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Spatial_Math_CQuaternion_w( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->w;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Math_CQuaternion_w( void *pObjectXXXX, Real  value )
				{
					((EarthView::World::Spatial::Math::CQuaternion*)pObjectXXXX)->w = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CQuaternion_isNaN_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CQuaternion* ptrNativeObject = (EarthView::World::Spatial::Math::CQuaternion*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isNaN();
					return objXXXX;
				}
			}
		}
	}
}
