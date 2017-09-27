/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/matrix4.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix4_swap_void_CMatrix4(void *pObjectXXXX, _inout void* other )
				{
					EarthView::World::Spatial::Math::CMatrix4* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix4*) pObjectXXXX;
					ptrNativeObject->swap(*(EarthView::World::Spatial::Math::CMatrix4*)other);
				}
				extern "C" EV_DLL_EXPORT  Real*  _stdcall EarthView_World_Spatial_Math_CMatrix4_OperatorIndex_Real_ev_size_t(void *pObjXXXX, _in ev_uint64  iRow )
				{
					EarthView::World::Spatial::Math::CMatrix4& objYYYY = *(EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					Real* objXXXX = objYYYY[iRow];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix4_concatenate_CMatrix4_CMatrix4(void *pObjectXXXX, _in const void* m2 )
				{
					const EarthView::World::Spatial::Math::CMatrix4* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix4*) pObjectXXXX;
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->concatenate(*(EarthView::World::Spatial::Math::CMatrix4*)m2);
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix4_OperatorMultiply_CMatrix4_CMatrix4(void *pObjXXXX, _in const void* m2 )
				{
					EarthView::World::Spatial::Math::CMatrix4& objXXXX = *(EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					EarthView::World::Spatial::Math::CMatrix4 result = objXXXX *(*(EarthView::World::Spatial::Math::CMatrix4*)m2);
					EarthView::World::Spatial::Math::CMatrix4* pnew = new EarthView::World::Spatial::Math::CMatrix4(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix4_OperatorMultiply_CVector3_CVector3(void *pObjXXXX, _in const void* v )
				{
					EarthView::World::Spatial::Math::CMatrix4& objXXXX = *(EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 result = objXXXX *(*(EarthView::World::Spatial::Math::CVector3*)v);
					EarthView::World::Spatial::Math::CVector3* pnew = new EarthView::World::Spatial::Math::CVector3(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix4_OperatorMultiply_CVector4_CVector4(void *pObjXXXX, _in const void* v )
				{
					EarthView::World::Spatial::Math::CMatrix4& objXXXX = *(EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector4 result = objXXXX *(*(EarthView::World::Spatial::Math::CVector4*)v);
					EarthView::World::Spatial::Math::CVector4* pnew = new EarthView::World::Spatial::Math::CVector4(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix4_OperatorMultiply_CPlane_CPlane(void *pObjXXXX, _in const void* p )
				{
					EarthView::World::Spatial::Math::CMatrix4& objXXXX = *(EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					EarthView::World::Spatial::Math::CPlane result = objXXXX *(*(EarthView::World::Spatial::Math::CPlane*)p);
					EarthView::World::Spatial::Math::CPlane* pnew = new EarthView::World::Spatial::Math::CPlane(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix4_OperatorPlus_CMatrix4_CMatrix4(void *pObjXXXX, _in const void* m2 )
				{
					EarthView::World::Spatial::Math::CMatrix4& objXXXX = *(EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					EarthView::World::Spatial::Math::CMatrix4 result = objXXXX +(*(EarthView::World::Spatial::Math::CMatrix4*)m2);
					EarthView::World::Spatial::Math::CMatrix4* pnew = new EarthView::World::Spatial::Math::CMatrix4(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix4_OperatorMinus_CMatrix4_CMatrix4(void *pObjXXXX, _in const void* m2 )
				{
					EarthView::World::Spatial::Math::CMatrix4& objXXXX = *(EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					EarthView::World::Spatial::Math::CMatrix4 result = objXXXX -(*(EarthView::World::Spatial::Math::CMatrix4*)m2);
					EarthView::World::Spatial::Math::CMatrix4* pnew = new EarthView::World::Spatial::Math::CMatrix4(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMatrix4_OperatorEquals_ev_bool_CMatrix4(void *pObjXXXX, _in const void* m2 )
				{
					EarthView::World::Spatial::Math::CMatrix4& objXXXX = *(EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					const EarthView::World::Spatial::Math::CMatrix4& objXXXX1 = *(EarthView::World::Spatial::Math::CMatrix4*)m2;
					return objXXXX == objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMatrix4_OperatorNotEquals_ev_bool_CMatrix4(void *pObjXXXX, _in const void* m2 )
				{
					EarthView::World::Spatial::Math::CMatrix4& objXXXX = *(EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					const EarthView::World::Spatial::Math::CMatrix4& objXXXX1 = *(EarthView::World::Spatial::Math::CMatrix4*)m2;
					return objXXXX != objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix4_OperatorAssign_void_CMatrix3(void *pObjXXXX, _in const void* mat3 )
				{
					EarthView::World::Spatial::Math::CMatrix4& objXXXX = *((EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Math::CMatrix3*)mat3;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix4_transpose_CMatrix4(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CMatrix4* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix4*) pObjectXXXX;
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->transpose();
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix4_setTrans_void_CVector3(void *pObjectXXXX, _in const void* v )
				{
					EarthView::World::Spatial::Math::CMatrix4* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix4*) pObjectXXXX;
					ptrNativeObject->setTrans(*(EarthView::World::Spatial::Math::CVector3*)v);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix4_getTrans_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CMatrix4* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix4*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getTrans();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix4_makeTrans_void_CVector3(void *pObjectXXXX, _in const void* v )
				{
					EarthView::World::Spatial::Math::CMatrix4* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix4*) pObjectXXXX;
					ptrNativeObject->makeTrans(*(EarthView::World::Spatial::Math::CVector3*)v);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix4_makeTrans_void_Real_Real_Real(void *pObjectXXXX, _in Real tx, _in Real ty, _in Real tz )
				{
					EarthView::World::Spatial::Math::CMatrix4* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix4*) pObjectXXXX;
					ptrNativeObject->makeTrans(tx, ty, tz);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix4_getTrans_CMatrix4_CVector3(_in const void* v )
				{
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = EarthView::World::Spatial::Math::CMatrix4::getTrans(*(EarthView::World::Spatial::Math::CVector3*)v);
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix4_getTrans_CMatrix4_Real_Real_Real(_in Real t_x, _in Real t_y, _in Real t_z )
				{
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = EarthView::World::Spatial::Math::CMatrix4::getTrans(t_x, t_y, t_z);
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix4_setScale_void_CVector3(void *pObjectXXXX, _in const void* v )
				{
					EarthView::World::Spatial::Math::CMatrix4* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix4*) pObjectXXXX;
					ptrNativeObject->setScale(*(EarthView::World::Spatial::Math::CVector3*)v);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix4_getScale_CMatrix4_CVector3(_in const void* v )
				{
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = EarthView::World::Spatial::Math::CMatrix4::getScale(*(EarthView::World::Spatial::Math::CVector3*)v);
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix4_getScale_CMatrix4_Real_Real_Real(_in Real s_x, _in Real s_y, _in Real s_z )
				{
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = EarthView::World::Spatial::Math::CMatrix4::getScale(s_x, s_y, s_z);
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix4_extract3x3Matrix_void_CMatrix3(void *pObjectXXXX, _out void* m3x3 )
				{
					const EarthView::World::Spatial::Math::CMatrix4* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix4*) pObjectXXXX;
					ptrNativeObject->extract3x3Matrix(*(EarthView::World::Spatial::Math::CMatrix3*)m3x3);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMatrix4_hasScale_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CMatrix4* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix4*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->hasScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMatrix4_hasNegativeScale_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CMatrix4* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix4*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->hasNegativeScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix4_get_void_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real(void *pObjectXXXX, _out Real& m00, _out Real& m01, _out Real& m02, _out Real& m03, _out Real& m10, _out Real& m11, _out Real& m12, _out Real& m13, _out Real& m20, _out Real& m21, _out Real& m22, _out Real& m23, _out Real& m30, _out Real& m31, _out Real& m32, _out Real& m33 )
				{
					const EarthView::World::Spatial::Math::CMatrix4* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix4*) pObjectXXXX;
					ptrNativeObject->get(m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23, m30, m31, m32, m33);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix4_set_void_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real(void *pObjectXXXX, _in Real m00, _in Real m01, _in Real m02, _in Real m03, _in Real m10, _in Real m11, _in Real m12, _in Real m13, _in Real m20, _in Real m21, _in Real m22, _in Real m23, _in Real m30, _in Real m31, _in Real m32, _in Real m33 )
				{
					EarthView::World::Spatial::Math::CMatrix4* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix4*) pObjectXXXX;
					ptrNativeObject->set(m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23, m30, m31, m32, m33);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix4_extractQuaternion_CQuaternion(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CMatrix4* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix4*) pObjectXXXX;
					EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->extractQuaternion();
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Spatial_Math_CMatrix4_ZERO()
				{
					const EarthView::World::Spatial::Math::CMatrix4 objXXXX = EarthView::World::Spatial::Math::CMatrix4::ZERO;
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Spatial_Math_CMatrix4_ZEROAFFINE()
				{
					const EarthView::World::Spatial::Math::CMatrix4 objXXXX = EarthView::World::Spatial::Math::CMatrix4::ZEROAFFINE;
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Spatial_Math_CMatrix4_IDENTITY()
				{
					const EarthView::World::Spatial::Math::CMatrix4 objXXXX = EarthView::World::Spatial::Math::CMatrix4::IDENTITY;
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Spatial_Math_CMatrix4_CLIPSPACE2DTOIMAGESPACE()
				{
					const EarthView::World::Spatial::Math::CMatrix4 objXXXX = EarthView::World::Spatial::Math::CMatrix4::CLIPSPACE2DTOIMAGESPACE;
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix4_OperatorMultiply_CMatrix4_Real(void *pObjXXXX, _in Real scalar )
				{
					EarthView::World::Spatial::Math::CMatrix4& objXXXX = *(EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					EarthView::World::Spatial::Math::CMatrix4 result = objXXXX *(scalar);
					EarthView::World::Spatial::Math::CMatrix4* pnew = new EarthView::World::Spatial::Math::CMatrix4(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix4_adjoint_CMatrix4(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CMatrix4* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix4*) pObjectXXXX;
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->adjoint();
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CMatrix4_determinant_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CMatrix4* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix4*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->determinant();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix4_inverse_CMatrix4(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CMatrix4* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix4*) pObjectXXXX;
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->inverse();
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix4_makeTransform_void_CVector3_CVector3_CQuaternion(void *pObjectXXXX, _in const void* position, _in const void* scale, _in const void* orientation )
				{
					EarthView::World::Spatial::Math::CMatrix4* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix4*) pObjectXXXX;
					ptrNativeObject->makeTransform(*(EarthView::World::Spatial::Math::CVector3*)position, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)orientation);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix4_makeInverseTransform_void_CVector3_CVector3_CQuaternion(void *pObjectXXXX, _in const void* position, _in const void* scale, _in const void* orientation )
				{
					EarthView::World::Spatial::Math::CMatrix4* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix4*) pObjectXXXX;
					ptrNativeObject->makeInverseTransform(*(EarthView::World::Spatial::Math::CVector3*)position, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)orientation);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMatrix4_decomposition_void_CVector3_CVector3_CQuaternion(void *pObjectXXXX, _out void* position, _out void* scale, _out void* orientation )
				{
					const EarthView::World::Spatial::Math::CMatrix4* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix4*) pObjectXXXX;
					ptrNativeObject->decomposition(*(EarthView::World::Spatial::Math::CVector3*)position, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)orientation);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMatrix4_isAffine_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CMatrix4* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix4*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isAffine();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix4_inverseAffine_CMatrix4(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CMatrix4* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix4*) pObjectXXXX;
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->inverseAffine();
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix4_concatenateAffine_CMatrix4_CMatrix4(void *pObjectXXXX, _in const void* m2 )
				{
					const EarthView::World::Spatial::Math::CMatrix4* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix4*) pObjectXXXX;
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->concatenateAffine(*(EarthView::World::Spatial::Math::CMatrix4*)m2);
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix4_transformAffine_CVector3_CVector3(void *pObjectXXXX, _in const void* v )
				{
					const EarthView::World::Spatial::Math::CMatrix4* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix4*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->transformAffine(*(EarthView::World::Spatial::Math::CVector3*)v);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix4_transformAffine_CVector4_CVector4(void *pObjectXXXX, _in const void* v )
				{
					const EarthView::World::Spatial::Math::CMatrix4* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix4*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector4 objXXXX = ptrNativeObject->transformAffine(*(EarthView::World::Spatial::Math::CVector4*)v);
					EarthView::World::Spatial::Math::CVector4 *pXXXX = new EarthView::World::Spatial::Math::CVector4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMatrix4_toMatrix4f_CMatrix4(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CMatrix4* ptrNativeObject = (EarthView::World::Spatial::Math::CMatrix4*) pObjectXXXX;
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->toMatrix4f();
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
		}
	}
}
