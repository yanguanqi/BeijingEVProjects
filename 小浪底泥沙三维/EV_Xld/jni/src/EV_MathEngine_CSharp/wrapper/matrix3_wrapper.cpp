/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/matrix3.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix3_swap_void_CMatrix3(void *pObjectXXXX, _inout void* other )
				{
					EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					ptrNativeObject->swap(*(EarthView::World::Spatial::Math::CMatrix3*)other);
				}
				extern "C" EV_DLL_EXPORT  Real*  _stdcall EarthView_World_Spatial_Math_CMatrix3_OperatorIndex_Real_ev_size_t(void *pObjXXXX, _in ev_uint64  iRow )
				{
					EarthView::World::Spatial::Math::CMatrix3& objYYYY = *(EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					Real* objXXXX = objYYYY[iRow];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix3_GetColumn_CVector3_ev_size_t(void *pObjectXXXX, _in ev_uint64  iCol )
				{
					const EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->GetColumn(iCol);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix3_SetColumn_void_ev_size_t_CVector3(void *pObjectXXXX, _in ev_uint64  iCol, _in const void* vec )
				{
					EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					ptrNativeObject->SetColumn(iCol, *(EarthView::World::Spatial::Math::CVector3*)vec);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix3_FromAxes_void_CVector3_CVector3_CVector3(void *pObjectXXXX, _in const void* xAxis, _in const void* yAxis, _in const void* zAxis )
				{
					EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					ptrNativeObject->FromAxes(*(EarthView::World::Spatial::Math::CVector3*)xAxis, *(EarthView::World::Spatial::Math::CVector3*)yAxis, *(EarthView::World::Spatial::Math::CVector3*)zAxis);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix3_OperatorAssign_CMatrix3_CMatrix3(void *pObjXXXX, _in const void* rkMatrix )
				{
					EarthView::World::Spatial::Math::CMatrix3& objXXXX = *((EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Math::CMatrix3*)rkMatrix;
					EarthView::World::Spatial::Math::CMatrix3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMatrix3_OperatorEquals_ev_bool_CMatrix3(void *pObjXXXX, _in const void* rkMatrix )
				{
					EarthView::World::Spatial::Math::CMatrix3& objXXXX = *(EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					const EarthView::World::Spatial::Math::CMatrix3& objXXXX1 = *(EarthView::World::Spatial::Math::CMatrix3*)rkMatrix;
					return objXXXX == objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMatrix3_OperatorNotEquals_ev_bool_CMatrix3(void *pObjXXXX, _in const void* rkMatrix )
				{
					EarthView::World::Spatial::Math::CMatrix3& objXXXX = *(EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					const EarthView::World::Spatial::Math::CMatrix3& objXXXX1 = *(EarthView::World::Spatial::Math::CMatrix3*)rkMatrix;
					return objXXXX != objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix3_OperatorPlus_CMatrix3_CMatrix3(void *pObjXXXX, _in const void* rkMatrix )
				{
					EarthView::World::Spatial::Math::CMatrix3& objXXXX = *(EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					EarthView::World::Spatial::Math::CMatrix3 result = objXXXX +(*(EarthView::World::Spatial::Math::CMatrix3*)rkMatrix);
					EarthView::World::Spatial::Math::CMatrix3* pnew = new EarthView::World::Spatial::Math::CMatrix3(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix3_OperatorMinus_CMatrix3_CMatrix3(void *pObjXXXX, _in const void* rkMatrix )
				{
					EarthView::World::Spatial::Math::CMatrix3& objXXXX = *(EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					EarthView::World::Spatial::Math::CMatrix3 result = objXXXX -(*(EarthView::World::Spatial::Math::CMatrix3*)rkMatrix);
					EarthView::World::Spatial::Math::CMatrix3* pnew = new EarthView::World::Spatial::Math::CMatrix3(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix3_OperatorMultiply_CMatrix3_CMatrix3(void *pObjXXXX, _in const void* rkMatrix )
				{
					EarthView::World::Spatial::Math::CMatrix3& objXXXX = *(EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					EarthView::World::Spatial::Math::CMatrix3 result = objXXXX *(*(EarthView::World::Spatial::Math::CMatrix3*)rkMatrix);
					EarthView::World::Spatial::Math::CMatrix3* pnew = new EarthView::World::Spatial::Math::CMatrix3(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix3_OperatorNegative_CMatrix3(void *pObjXXXX )
				{
					EarthView::World::Spatial::Math::CMatrix3& objXXXX = *(EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					EarthView::World::Spatial::Math::CMatrix3 result = -objXXXX ;
					EarthView::World::Spatial::Math::CMatrix3* pnew = new EarthView::World::Spatial::Math::CMatrix3(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix3_OperatorMultiply_CVector3_CVector3(void *pObjXXXX, _in const void* rkVector )
				{
					EarthView::World::Spatial::Math::CMatrix3& objXXXX = *(EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 result = objXXXX *(*(EarthView::World::Spatial::Math::CVector3*)rkVector);
					EarthView::World::Spatial::Math::CVector3* pnew = new EarthView::World::Spatial::Math::CVector3(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix3_OperatorMultiply_CMatrix3_Real(void *pObjXXXX, _in Real fScalar )
				{
					EarthView::World::Spatial::Math::CMatrix3& objXXXX = *(EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					EarthView::World::Spatial::Math::CMatrix3 result = objXXXX *(fScalar);
					EarthView::World::Spatial::Math::CMatrix3* pnew = new EarthView::World::Spatial::Math::CMatrix3(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix3_Transpose_CMatrix3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					EarthView::World::Spatial::Math::CMatrix3 objXXXX = ptrNativeObject->Transpose();
					EarthView::World::Spatial::Math::CMatrix3 *pXXXX = new EarthView::World::Spatial::Math::CMatrix3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMatrix3_Inverse_ev_bool_CMatrix3_Real(void *pObjectXXXX, _out void* rkInverse, _in Real fTolerance )
				{
					const EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->Inverse(*(EarthView::World::Spatial::Math::CMatrix3*)rkInverse, fTolerance);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMatrix3_Inverse_ev_bool_CMatrix3(void *pObjectXXXX, _out void* rkInverse )
				{
					const EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->Inverse(*(EarthView::World::Spatial::Math::CMatrix3*)rkInverse);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix3_Inverse_CMatrix3_Real(void *pObjectXXXX, _in Real fTolerance )
				{
					const EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					EarthView::World::Spatial::Math::CMatrix3 objXXXX = ptrNativeObject->Inverse(fTolerance);
					EarthView::World::Spatial::Math::CMatrix3 *pXXXX = new EarthView::World::Spatial::Math::CMatrix3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix3_Inverse_CMatrix3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					EarthView::World::Spatial::Math::CMatrix3 objXXXX = ptrNativeObject->Inverse();
					EarthView::World::Spatial::Math::CMatrix3 *pXXXX = new EarthView::World::Spatial::Math::CMatrix3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMatrix3_Determinant_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->Determinant();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix3_SingularValueDecomposition_void_CMatrix3_CVector3_CMatrix3(void *pObjectXXXX, _out void* rkL, _out void* rkS, _out void* rkR )
				{
					const EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					ptrNativeObject->SingularValueDecomposition(*(EarthView::World::Spatial::Math::CMatrix3*)rkL, *(EarthView::World::Spatial::Math::CVector3*)rkS, *(EarthView::World::Spatial::Math::CMatrix3*)rkR);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix3_SingularValueComposition_void_CMatrix3_CVector3_CMatrix3(void *pObjectXXXX, _in const void* rkL, _in const void* rkS, _in const void* rkR )
				{
					EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					ptrNativeObject->SingularValueComposition(*(EarthView::World::Spatial::Math::CMatrix3*)rkL, *(EarthView::World::Spatial::Math::CVector3*)rkS, *(EarthView::World::Spatial::Math::CMatrix3*)rkR);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix3_Orthonormalize_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					ptrNativeObject->Orthonormalize();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix3_QDUDecomposition_void_CMatrix3_CVector3_CVector3(void *pObjectXXXX, _out void* rkQ, _out void* rkD, _out void* rkU )
				{
					const EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					ptrNativeObject->QDUDecomposition(*(EarthView::World::Spatial::Math::CMatrix3*)rkQ, *(EarthView::World::Spatial::Math::CVector3*)rkD, *(EarthView::World::Spatial::Math::CVector3*)rkU);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMatrix3_SpectralNorm_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->SpectralNorm();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix3_ToAngleAxis_void_CVector3_CRadian(void *pObjectXXXX, _out void* rkAxis, _out void* rfAngle )
				{
					const EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					ptrNativeObject->ToAngleAxis(*(EarthView::World::Spatial::Math::CVector3*)rkAxis, *(EarthView::World::Spatial::Math::CRadian*)rfAngle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix3_ToAngleAxis_void_CVector3_CDegree(void *pObjectXXXX, _inout void* rkAxis, _inout void* rfAngle )
				{
					const EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					ptrNativeObject->ToAngleAxis(*(EarthView::World::Spatial::Math::CVector3*)rkAxis, *(EarthView::World::Spatial::Math::CDegree*)rfAngle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix3_FromAngleAxis_void_CVector3_CRadian(void *pObjectXXXX, _in const void* rkAxis, _in const void* fRadians )
				{
					EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					ptrNativeObject->FromAngleAxis(*(EarthView::World::Spatial::Math::CVector3*)rkAxis, *(EarthView::World::Spatial::Math::CRadian*)fRadians);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMatrix3_ToEulerAnglesXYZ_ev_bool_CRadian_CRadian_CRadian(void *pObjectXXXX, _out void* rfYAngle, _out void* rfPAngle, _out void* rfRAngle )
				{
					const EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->ToEulerAnglesXYZ(*(EarthView::World::Spatial::Math::CRadian*)rfYAngle, *(EarthView::World::Spatial::Math::CRadian*)rfPAngle, *(EarthView::World::Spatial::Math::CRadian*)rfRAngle);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMatrix3_ToEulerAnglesXZY_ev_bool_CRadian_CRadian_CRadian(void *pObjectXXXX, _out void* rfYAngle, _out void* rfPAngle, _out void* rfRAngle )
				{
					const EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->ToEulerAnglesXZY(*(EarthView::World::Spatial::Math::CRadian*)rfYAngle, *(EarthView::World::Spatial::Math::CRadian*)rfPAngle, *(EarthView::World::Spatial::Math::CRadian*)rfRAngle);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMatrix3_ToEulerAnglesYXZ_ev_bool_CRadian_CRadian_CRadian(void *pObjectXXXX, _out void* rfYAngle, _out void* rfPAngle, _out void* rfRAngle )
				{
					const EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->ToEulerAnglesYXZ(*(EarthView::World::Spatial::Math::CRadian*)rfYAngle, *(EarthView::World::Spatial::Math::CRadian*)rfPAngle, *(EarthView::World::Spatial::Math::CRadian*)rfRAngle);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMatrix3_ToEulerAnglesYZX_ev_bool_CRadian_CRadian_CRadian(void *pObjectXXXX, _out void* rfYAngle, _out void* rfPAngle, _out void* rfRAngle )
				{
					const EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->ToEulerAnglesYZX(*(EarthView::World::Spatial::Math::CRadian*)rfYAngle, *(EarthView::World::Spatial::Math::CRadian*)rfPAngle, *(EarthView::World::Spatial::Math::CRadian*)rfRAngle);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMatrix3_ToEulerAnglesZXY_ev_bool_CRadian_CRadian_CRadian(void *pObjectXXXX, _out void* rfYAngle, _out void* rfPAngle, _out void* rfRAngle )
				{
					const EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->ToEulerAnglesZXY(*(EarthView::World::Spatial::Math::CRadian*)rfYAngle, *(EarthView::World::Spatial::Math::CRadian*)rfPAngle, *(EarthView::World::Spatial::Math::CRadian*)rfRAngle);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMatrix3_ToEulerAnglesZYX_ev_bool_CRadian_CRadian_CRadian(void *pObjectXXXX, _out void* rfYAngle, _out void* rfPAngle, _out void* rfRAngle )
				{
					const EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->ToEulerAnglesZYX(*(EarthView::World::Spatial::Math::CRadian*)rfYAngle, *(EarthView::World::Spatial::Math::CRadian*)rfPAngle, *(EarthView::World::Spatial::Math::CRadian*)rfRAngle);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix3_FromEulerAnglesXYZ_void_CRadian_CRadian_CRadian(void *pObjectXXXX, _in const void* fYAngle, _in const void* fPAngle, _in const void* fRAngle )
				{
					EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					ptrNativeObject->FromEulerAnglesXYZ(*(EarthView::World::Spatial::Math::CRadian*)fYAngle, *(EarthView::World::Spatial::Math::CRadian*)fPAngle, *(EarthView::World::Spatial::Math::CRadian*)fRAngle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix3_FromEulerAnglesXZY_void_CRadian_CRadian_CRadian(void *pObjectXXXX, _in const void* fYAngle, _in const void* fPAngle, _in const void* fRAngle )
				{
					EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					ptrNativeObject->FromEulerAnglesXZY(*(EarthView::World::Spatial::Math::CRadian*)fYAngle, *(EarthView::World::Spatial::Math::CRadian*)fPAngle, *(EarthView::World::Spatial::Math::CRadian*)fRAngle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix3_FromEulerAnglesYXZ_void_CRadian_CRadian_CRadian(void *pObjectXXXX, _in const void* fYAngle, _in const void* fPAngle, _in const void* fRAngle )
				{
					EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					ptrNativeObject->FromEulerAnglesYXZ(*(EarthView::World::Spatial::Math::CRadian*)fYAngle, *(EarthView::World::Spatial::Math::CRadian*)fPAngle, *(EarthView::World::Spatial::Math::CRadian*)fRAngle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix3_FromEulerAnglesYZX_void_CRadian_CRadian_CRadian(void *pObjectXXXX, _in const void* fYAngle, _in const void* fPAngle, _in const void* fRAngle )
				{
					EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					ptrNativeObject->FromEulerAnglesYZX(*(EarthView::World::Spatial::Math::CRadian*)fYAngle, *(EarthView::World::Spatial::Math::CRadian*)fPAngle, *(EarthView::World::Spatial::Math::CRadian*)fRAngle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix3_FromEulerAnglesZXY_void_CRadian_CRadian_CRadian(void *pObjectXXXX, _in const void* fYAngle, _in const void* fPAngle, _in const void* fRAngle )
				{
					EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					ptrNativeObject->FromEulerAnglesZXY(*(EarthView::World::Spatial::Math::CRadian*)fYAngle, *(EarthView::World::Spatial::Math::CRadian*)fPAngle, *(EarthView::World::Spatial::Math::CRadian*)fRAngle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix3_FromEulerAnglesZYX_void_CRadian_CRadian_CRadian(void *pObjectXXXX, _in const void* fYAngle, _in const void* fPAngle, _in const void* fRAngle )
				{
					EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					ptrNativeObject->FromEulerAnglesZYX(*(EarthView::World::Spatial::Math::CRadian*)fYAngle, *(EarthView::World::Spatial::Math::CRadian*)fPAngle, *(EarthView::World::Spatial::Math::CRadian*)fRAngle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix3_EigenSolveSymmetric_void_Real_CVector3(void *pObjectXXXX, _out Real* afEigenvalue, _out EarthView::World::Spatial::Math::CVector3* akEigenvector )
				{
					const EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					ptrNativeObject->EigenSolveSymmetric(afEigenvalue, (EarthView::World::Spatial::Math::CVector3**)akEigenvector);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix3_TensorProduct_void_CVector3_CVector3_CMatrix3(_in const void* rkU, _in const void* rkV, _out void* rkProduct )
				{
					EarthView::World::Spatial::Math::CMatrix3::TensorProduct(*(EarthView::World::Spatial::Math::CVector3*)rkU, *(EarthView::World::Spatial::Math::CVector3*)rkV, *(EarthView::World::Spatial::Math::CMatrix3*)rkProduct);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMatrix3_hasScale_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CMatrix3* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix3*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->hasScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const Real  _stdcall Get_EarthView_World_Spatial_Math_CMatrix3_EPSILON()
				{
					const Real objXXXX = EarthView::World::Spatial::Math::CMatrix3::EPSILON;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Spatial_Math_CMatrix3_ZERO()
				{
					const EarthView::World::Spatial::Math::CMatrix3 objXXXX = EarthView::World::Spatial::Math::CMatrix3::ZERO;
					EarthView::World::Spatial::Math::CMatrix3 *pXXXX = new EarthView::World::Spatial::Math::CMatrix3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Spatial_Math_CMatrix3_IDENTITY()
				{
					const EarthView::World::Spatial::Math::CMatrix3 objXXXX = EarthView::World::Spatial::Math::CMatrix3::IDENTITY;
					EarthView::World::Spatial::Math::CMatrix3 *pXXXX = new EarthView::World::Spatial::Math::CMatrix3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
		}
	}
}
