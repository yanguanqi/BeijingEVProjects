/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/vector3.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Spatial_Math_CVector3_y( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->y;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Math_CVector3_y( void *pObjectXXXX, Real  value )
				{
					((EarthView::World::Spatial::Math::CVector3*)pObjectXXXX)->y = value;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Spatial_Math_CVector3_z( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->z;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Math_CVector3_z( void *pObjectXXXX, Real  value )
				{
					((EarthView::World::Spatial::Math::CVector3*)pObjectXXXX)->z = value;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Spatial_Math_CVector3_x( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->x;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Math_CVector3_x( void *pObjectXXXX, Real  value )
				{
					((EarthView::World::Spatial::Math::CVector3*)pObjectXXXX)->x = value;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CVector3_swap_void_CVector3(void *pObjectXXXX, _inout void* other )
				{
					EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					ptrNativeObject->swap(*(EarthView::World::Spatial::Math::CVector3*)other);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CVector3_OperatorIndex_Real_ev_size_t(void *pObjXXXX, _in const ev_uint64  i )
				{
					EarthView::World::Spatial::Math::CVector3& objYYYY = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					Real objXXXX = objYYYY[i];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real*  _stdcall EarthView_World_Spatial_Math_CVector3_ptr_Real(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					Real* objXXXX = ptrNativeObject->ptr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector3_OperatorAssign_CVector3_CVector3(void *pObjXXXX, _in const void* rkVector )
				{
					EarthView::World::Spatial::Math::CVector3& objXXXX = *((EarthView::World::Spatial::Math::CVector3*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Math::CVector3*)rkVector;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector3_OperatorAssign_CVector3_Real(void *pObjXXXX, _in const Real fScaler )
				{
					EarthView::World::Spatial::Math::CVector3& objXXXX = *((EarthView::World::Spatial::Math::CVector3*) pObjXXXX);
					objXXXX = fScaler;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CVector3_OperatorEquals_ev_bool_CVector3(void *pObjXXXX, _in const void* rkVector )
				{
					EarthView::World::Spatial::Math::CVector3& objXXXX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3& objXXXX1 = *(EarthView::World::Spatial::Math::CVector3*)rkVector;
					return objXXXX == objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CVector3_OperatorNotEquals_ev_bool_CVector3(void *pObjXXXX, _in const void* rkVector )
				{
					EarthView::World::Spatial::Math::CVector3& objXXXX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3& objXXXX1 = *(EarthView::World::Spatial::Math::CVector3*)rkVector;
					return objXXXX != objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector3_OperatorPlus_CVector3_CVector3(void *pObjXXXX, _in const void* rkVector )
				{
					EarthView::World::Spatial::Math::CVector3& objXXXX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 result = objXXXX +(*(EarthView::World::Spatial::Math::CVector3*)rkVector);
					EarthView::World::Spatial::Math::CVector3* pnew = new EarthView::World::Spatial::Math::CVector3(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector3_OperatorMinus_CVector3_CVector3(void *pObjXXXX, _in const void* rkVector )
				{
					EarthView::World::Spatial::Math::CVector3& objXXXX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 result = objXXXX -(*(EarthView::World::Spatial::Math::CVector3*)rkVector);
					EarthView::World::Spatial::Math::CVector3* pnew = new EarthView::World::Spatial::Math::CVector3(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector3_OperatorMultiply_CVector3_Real(void *pObjXXXX, _in const Real fScalar )
				{
					EarthView::World::Spatial::Math::CVector3& objXXXX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 result = objXXXX *(fScalar);
					EarthView::World::Spatial::Math::CVector3* pnew = new EarthView::World::Spatial::Math::CVector3(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector3_OperatorMultiply_CVector3_CVector3(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial::Math::CVector3& objXXXX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 result = objXXXX *(*(EarthView::World::Spatial::Math::CVector3*)rhs);
					EarthView::World::Spatial::Math::CVector3* pnew = new EarthView::World::Spatial::Math::CVector3(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector3_OperatorDivide_CVector3_Real(void *pObjXXXX, _in const Real fScalar )
				{
					EarthView::World::Spatial::Math::CVector3& objXXXX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 result = objXXXX /(fScalar);
					EarthView::World::Spatial::Math::CVector3* pnew = new EarthView::World::Spatial::Math::CVector3(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector3_OperatorDivide_CVector3_CVector3(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial::Math::CVector3& objXXXX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 result = objXXXX /(*(EarthView::World::Spatial::Math::CVector3*)rhs);
					EarthView::World::Spatial::Math::CVector3* pnew = new EarthView::World::Spatial::Math::CVector3(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_Math_CVector3_OperatorPosivate_CVector3(void *pObjXXXX )
				{
					EarthView::World::Spatial::Math::CVector3& objXXXX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 result = +objXXXX ;
					EarthView::World::Spatial::Math::CVector3* pnew = new EarthView::World::Spatial::Math::CVector3(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector3_OperatorNegative_CVector3(void *pObjXXXX )
				{
					EarthView::World::Spatial::Math::CVector3& objXXXX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 result = -objXXXX ;
					EarthView::World::Spatial::Math::CVector3* pnew = new EarthView::World::Spatial::Math::CVector3(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector3_OperatorPlus_CVector3_Real(void *pObjXXXX, _in const Real rhs )
				{
					EarthView::World::Spatial::Math::CVector3& objXXXX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 result = objXXXX +(rhs);
					EarthView::World::Spatial::Math::CVector3* pnew = new EarthView::World::Spatial::Math::CVector3(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector3_OperatorMinus_CVector3_Real(void *pObjXXXX, _in const Real rhs )
				{
					EarthView::World::Spatial::Math::CVector3& objXXXX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 result = objXXXX -(rhs);
					EarthView::World::Spatial::Math::CVector3* pnew = new EarthView::World::Spatial::Math::CVector3(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CVector3_length_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->length();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CVector3_squaredLength_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->squaredLength();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CVector3_distance_Real_CVector3(void *pObjectXXXX, _in const void* rhs )
				{
					const EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->distance(*(EarthView::World::Spatial::Math::CVector3*)rhs);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CVector3_squaredDistance_Real_CVector3(void *pObjectXXXX, _in const void* rhs )
				{
					const EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->squaredDistance(*(EarthView::World::Spatial::Math::CVector3*)rhs);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CVector3_dotProduct_Real_CVector3(void *pObjectXXXX, _in const void* vec )
				{
					const EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->dotProduct(*(EarthView::World::Spatial::Math::CVector3*)vec);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CVector3_absDotProduct_Real_CVector3(void *pObjectXXXX, _in const void* vec )
				{
					const EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->absDotProduct(*(EarthView::World::Spatial::Math::CVector3*)vec);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CVector3_normalise_Real(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->normalise();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector3_crossProduct_CVector3_CVector3(void *pObjectXXXX, _in const void* rkVector )
				{
					const EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->crossProduct(*(EarthView::World::Spatial::Math::CVector3*)rkVector);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector3_midPoint_CVector3_CVector3(void *pObjectXXXX, _in const void* vec )
				{
					const EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->midPoint(*(EarthView::World::Spatial::Math::CVector3*)vec);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CVector3_OperatorLessThan_ev_bool_CVector3(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial::Math::CVector3& objXXXX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3& objXXXX1 = *(EarthView::World::Spatial::Math::CVector3*)rhs;
					return objXXXX < objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CVector3_OperatorGreaterThan_ev_bool_CVector3(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial::Math::CVector3& objXXXX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3& objXXXX1 = *(EarthView::World::Spatial::Math::CVector3*)rhs;
					return objXXXX > objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CVector3_makeFloor_void_CVector3(void *pObjectXXXX, _in const void* cmp )
				{
					EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					ptrNativeObject->makeFloor(*(EarthView::World::Spatial::Math::CVector3*)cmp);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CVector3_makeCeil_void_CVector3(void *pObjectXXXX, _in const void* cmp )
				{
					EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					ptrNativeObject->makeCeil(*(EarthView::World::Spatial::Math::CVector3*)cmp);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector3_perpendicular_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->perpendicular();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector3_randomDeviant_CVector3_CRadian(void *pObjectXXXX, _in const void* angle )
				{
					const EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->randomDeviant(*(EarthView::World::Spatial::Math::CRadian*)angle);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector3_randomDeviant_CVector3_CRadian_CVector3(void *pObjectXXXX, _in const void* angle, _in const void* up )
				{
					const EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->randomDeviant(*(EarthView::World::Spatial::Math::CRadian*)angle, *(EarthView::World::Spatial::Math::CVector3*)up);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector3_angleBetween_CRadian_CVector3(void *pObjectXXXX, _in const void* dest )
				{
					const EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					EarthView::World::Spatial::Math::CRadian objXXXX = ptrNativeObject->angleBetween(*(EarthView::World::Spatial::Math::CVector3*)dest);
					EarthView::World::Spatial::Math::CRadian *pXXXX = new EarthView::World::Spatial::Math::CRadian(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector3_getRotationTo_CQuaternion_CVector3_CVector3(void *pObjectXXXX, _in const void* dest, _in const void* fallbackAxis )
				{
					const EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->getRotationTo(*(EarthView::World::Spatial::Math::CVector3*)dest, *(EarthView::World::Spatial::Math::CVector3*)fallbackAxis);
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector3_getRotationTo_CQuaternion_CVector3(void *pObjectXXXX, _in const void* dest )
				{
					const EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->getRotationTo(*(EarthView::World::Spatial::Math::CVector3*)dest);
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CVector3_isZeroLength_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isZeroLength();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector3_normalisedCopy_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->normalisedCopy();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector3_reflect_CVector3_CVector3(void *pObjectXXXX, _in const void* normal )
				{
					const EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->reflect(*(EarthView::World::Spatial::Math::CVector3*)normal);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CVector3_positionEquals_ev_bool_CVector3(void *pObjectXXXX, _in const void* rhs )
				{
					const EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->positionEquals(*(EarthView::World::Spatial::Math::CVector3*)rhs);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CVector3_positionEquals_ev_bool_CVector3_Real(void *pObjectXXXX, _in const void* rhs, _in Real tolerance )
				{
					const EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->positionEquals(*(EarthView::World::Spatial::Math::CVector3*)rhs, tolerance);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CVector3_positionCloses_ev_bool_CVector3(void *pObjectXXXX, _in const void* rhs )
				{
					const EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->positionCloses(*(EarthView::World::Spatial::Math::CVector3*)rhs);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CVector3_positionCloses_ev_bool_CVector3_Real(void *pObjectXXXX, _in const void* rhs, _in Real tolerance )
				{
					const EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->positionCloses(*(EarthView::World::Spatial::Math::CVector3*)rhs, tolerance);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CVector3_directionEquals_ev_bool_CVector3_CRadian(void *pObjectXXXX, _in const void* rhs, _in const void* tolerance )
				{
					const EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->directionEquals(*(EarthView::World::Spatial::Math::CVector3*)rhs, *(EarthView::World::Spatial::Math::CRadian*)tolerance);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CVector3_isNaN_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isNaN();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector3_primaryAxis_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CVector3* ptrNativeObject = (EarthView::World::Spatial::Math::CVector3*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->primaryAxis();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Spatial_Math_CVector3_ZERO()
				{
					const EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial::Math::CVector3::ZERO;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Spatial_Math_CVector3_UNIT_X()
				{
					const EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial::Math::CVector3::UNIT_X;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Spatial_Math_CVector3_UNIT_Y()
				{
					const EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial::Math::CVector3::UNIT_Y;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Spatial_Math_CVector3_UNIT_Z()
				{
					const EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial::Math::CVector3::UNIT_Z;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Spatial_Math_CVector3_NEGATIVE_UNIT_X()
				{
					const EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial::Math::CVector3::NEGATIVE_UNIT_X;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Spatial_Math_CVector3_NEGATIVE_UNIT_Y()
				{
					const EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial::Math::CVector3::NEGATIVE_UNIT_Y;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Spatial_Math_CVector3_NEGATIVE_UNIT_Z()
				{
					const EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial::Math::CVector3::NEGATIVE_UNIT_Z;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Spatial_Math_CVector3_UNIT_SCALE()
				{
					const EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial::Math::CVector3::UNIT_SCALE;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_VertexList_push_back_void_CVector3(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial::Math::VertexList* ptrNativeObject = (EarthView::World::Spatial::Math::VertexList*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial::Math::CVector3*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_VertexList_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::VertexList* ptrNativeObject = (EarthView::World::Spatial::Math::VertexList*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_VertexList_front_CVector3(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::VertexList* ptrNativeObject = (EarthView::World::Spatial::Math::VertexList*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_VertexList_back_CVector3(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::VertexList* ptrNativeObject = (EarthView::World::Spatial::Math::VertexList*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_VertexList_insert_void_ev_uint32_CVector3(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Spatial::Math::VertexList* ptrNativeObject = (EarthView::World::Spatial::Math::VertexList*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial::Math::CVector3*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_VertexList_insert_void_ev_uint32_VertexList(void *pObjectXXXX, _in ev_uint32 pos, _in void* other )
				{
					EarthView::World::Spatial::Math::VertexList* ptrNativeObject = (EarthView::World::Spatial::Math::VertexList*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial::Math::VertexList*)other);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_VertexList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial::Math::VertexList* ptrNativeObject = (EarthView::World::Spatial::Math::VertexList*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_VertexList_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::VertexList* ptrNativeObject = (EarthView::World::Spatial::Math::VertexList*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_VertexList_OperatorIndex_CVector3_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial::Math::VertexList& objYYYY = *(EarthView::World::Spatial::Math::VertexList*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3& objXXXX = objYYYY[n];
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_VertexList_at_CVector3_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial::Math::VertexList* ptrNativeObject = (EarthView::World::Spatial::Math::VertexList*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->at(n);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial_Math_VertexList_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::VertexList* ptrNativeObject = (EarthView::World::Spatial::Math::VertexList*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_VertexList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial::Math::VertexList* ptrNativeObject = (EarthView::World::Spatial::Math::VertexList*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_VertexList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial::Math::VertexList* ptrNativeObject = (EarthView::World::Spatial::Math::VertexList*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_VertexList_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::VertexList* ptrNativeObject = (EarthView::World::Spatial::Math::VertexList*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_VertexList_swap_void_VertexList(void *pObjectXXXX, _in void* rhs )
				{
					EarthView::World::Spatial::Math::VertexList* ptrNativeObject = (EarthView::World::Spatial::Math::VertexList*) pObjectXXXX;
					ptrNativeObject->swap(*(EarthView::World::Spatial::Math::VertexList*)rhs);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_Vector3List_push_back_void_CVector3(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial::Math::Vector3List* ptrNativeObject = (EarthView::World::Spatial::Math::Vector3List*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial::Math::CVector3*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_Vector3List_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::Vector3List* ptrNativeObject = (EarthView::World::Spatial::Math::Vector3List*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_Vector3List_front_CVector3(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::Vector3List* ptrNativeObject = (EarthView::World::Spatial::Math::Vector3List*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_Vector3List_back_CVector3(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::Vector3List* ptrNativeObject = (EarthView::World::Spatial::Math::Vector3List*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_Vector3List_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::Vector3List* ptrNativeObject = (EarthView::World::Spatial::Math::Vector3List*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial_Math_Vector3List_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::Vector3List* ptrNativeObject = (EarthView::World::Spatial::Math::Vector3List*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_Vector3List_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial::Math::Vector3List* ptrNativeObject = (EarthView::World::Spatial::Math::Vector3List*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_Vector3List_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::Vector3List* ptrNativeObject = (EarthView::World::Spatial::Math::Vector3List*) pObjectXXXX;
					ptrNativeObject->clear();
				}
			}
		}
	}
}
