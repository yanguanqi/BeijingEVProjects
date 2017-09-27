/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/vector2.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Spatial_Math_CVector2_y( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CVector2* ptrNativeObject = (EarthView::World::Spatial::Math::CVector2*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->y;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Math_CVector2_y( void *pObjectXXXX, Real  value )
				{
					((EarthView::World::Spatial::Math::CVector2*)pObjectXXXX)->y = value;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Spatial_Math_CVector2_x( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CVector2* ptrNativeObject = (EarthView::World::Spatial::Math::CVector2*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->x;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Math_CVector2_x( void *pObjectXXXX, Real  value )
				{
					((EarthView::World::Spatial::Math::CVector2*)pObjectXXXX)->x = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Math_CVector2_toDataStream_ev_int32_CDataStream(void *pObjectXXXX, _inout void* dataStream )
				{
					EarthView::World::Spatial::Math::CVector2* ptrNativeObject = (EarthView::World::Spatial::Math::CVector2*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->toDataStream(*(EarthView::World::Core::CDataStream*)dataStream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Math_CVector2_fromDataStream_ev_int32_CDataStream(void *pObjectXXXX, _inout void* dataStream )
				{
					EarthView::World::Spatial::Math::CVector2* ptrNativeObject = (EarthView::World::Spatial::Math::CVector2*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->fromDataStream(*(EarthView::World::Core::CDataStream*)dataStream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CVector2_swap_void_CVector2(void *pObjectXXXX, _inout void* other )
				{
					EarthView::World::Spatial::Math::CVector2* ptrNativeObject = (EarthView::World::Spatial::Math::CVector2*) pObjectXXXX;
					ptrNativeObject->swap(*(EarthView::World::Spatial::Math::CVector2*)other);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CVector2_OperatorIndex_Real_ev_size_t(void *pObjXXXX, _in const ev_uint64  i )
				{
					EarthView::World::Spatial::Math::CVector2& objYYYY = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					Real objXXXX = objYYYY[i];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real*  _stdcall EarthView_World_Spatial_Math_CVector2_ptr_Real(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CVector2* ptrNativeObject = (EarthView::World::Spatial::Math::CVector2*) pObjectXXXX;
					Real* objXXXX = ptrNativeObject->ptr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector2_OperatorAssign_CVector2_CVector2(void *pObjXXXX, _in const void* rkVector )
				{
					EarthView::World::Spatial::Math::CVector2& objXXXX = *((EarthView::World::Spatial::Math::CVector2*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Math::CVector2*)rkVector;
					EarthView::World::Spatial::Math::CVector2 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector2_OperatorAssign_CVector2_Real(void *pObjXXXX, _in const Real fScalar )
				{
					EarthView::World::Spatial::Math::CVector2& objXXXX = *((EarthView::World::Spatial::Math::CVector2*) pObjXXXX);
					objXXXX = fScalar;
					EarthView::World::Spatial::Math::CVector2 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CVector2_OperatorEquals_ev_bool_CVector2(void *pObjXXXX, _in const void* rkVector )
				{
					EarthView::World::Spatial::Math::CVector2& objXXXX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector2& objXXXX1 = *(EarthView::World::Spatial::Math::CVector2*)rkVector;
					return objXXXX == objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CVector2_OperatorNotEquals_ev_bool_CVector2(void *pObjXXXX, _in const void* rkVector )
				{
					EarthView::World::Spatial::Math::CVector2& objXXXX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector2& objXXXX1 = *(EarthView::World::Spatial::Math::CVector2*)rkVector;
					return objXXXX != objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector2_OperatorPlus_CVector2_CVector2(void *pObjXXXX, _in const void* rkVector )
				{
					EarthView::World::Spatial::Math::CVector2& objXXXX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector2 result = objXXXX +(*(EarthView::World::Spatial::Math::CVector2*)rkVector);
					EarthView::World::Spatial::Math::CVector2* pnew = new EarthView::World::Spatial::Math::CVector2(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector2_OperatorMinus_CVector2_CVector2(void *pObjXXXX, _in const void* rkVector )
				{
					EarthView::World::Spatial::Math::CVector2& objXXXX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector2 result = objXXXX -(*(EarthView::World::Spatial::Math::CVector2*)rkVector);
					EarthView::World::Spatial::Math::CVector2* pnew = new EarthView::World::Spatial::Math::CVector2(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector2_OperatorMultiply_CVector2_Real(void *pObjXXXX, _in const Real fScalar )
				{
					EarthView::World::Spatial::Math::CVector2& objXXXX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector2 result = objXXXX *(fScalar);
					EarthView::World::Spatial::Math::CVector2* pnew = new EarthView::World::Spatial::Math::CVector2(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector2_OperatorMultiply_CVector2_CVector2(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial::Math::CVector2& objXXXX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector2 result = objXXXX *(*(EarthView::World::Spatial::Math::CVector2*)rhs);
					EarthView::World::Spatial::Math::CVector2* pnew = new EarthView::World::Spatial::Math::CVector2(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector2_OperatorDivide_CVector2_Real(void *pObjXXXX, _in const Real fScalar )
				{
					EarthView::World::Spatial::Math::CVector2& objXXXX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector2 result = objXXXX /(fScalar);
					EarthView::World::Spatial::Math::CVector2* pnew = new EarthView::World::Spatial::Math::CVector2(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector2_OperatorDivide_CVector2_CVector2(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial::Math::CVector2& objXXXX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector2 result = objXXXX /(*(EarthView::World::Spatial::Math::CVector2*)rhs);
					EarthView::World::Spatial::Math::CVector2* pnew = new EarthView::World::Spatial::Math::CVector2(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_Math_CVector2_OperatorPosivate_CVector2(void *pObjXXXX )
				{
					EarthView::World::Spatial::Math::CVector2& objXXXX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector2 result = +objXXXX ;
					EarthView::World::Spatial::Math::CVector2* pnew = new EarthView::World::Spatial::Math::CVector2(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector2_OperatorNegative_CVector2(void *pObjXXXX )
				{
					EarthView::World::Spatial::Math::CVector2& objXXXX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector2 result = -objXXXX ;
					EarthView::World::Spatial::Math::CVector2* pnew = new EarthView::World::Spatial::Math::CVector2(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector2_OperatorPlus_CVector2_Real(void *pObjXXXX, _in const Real rhs )
				{
					EarthView::World::Spatial::Math::CVector2& objXXXX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector2 result = objXXXX +(rhs);
					EarthView::World::Spatial::Math::CVector2* pnew = new EarthView::World::Spatial::Math::CVector2(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector2_OperatorMinus_CVector2_Real(void *pObjXXXX, _in const Real rhs )
				{
					EarthView::World::Spatial::Math::CVector2& objXXXX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector2 result = objXXXX -(rhs);
					EarthView::World::Spatial::Math::CVector2* pnew = new EarthView::World::Spatial::Math::CVector2(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CVector2_length_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CVector2* ptrNativeObject = (EarthView::World::Spatial::Math::CVector2*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->length();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CVector2_squaredLength_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CVector2* ptrNativeObject = (EarthView::World::Spatial::Math::CVector2*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->squaredLength();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CVector2_distance_Real_CVector2(void *pObjectXXXX, _in const void* rhs )
				{
					const EarthView::World::Spatial::Math::CVector2* ptrNativeObject = (EarthView::World::Spatial::Math::CVector2*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->distance(*(EarthView::World::Spatial::Math::CVector2*)rhs);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CVector2_squaredDistance_Real_CVector2(void *pObjectXXXX, _in const void* rhs )
				{
					const EarthView::World::Spatial::Math::CVector2* ptrNativeObject = (EarthView::World::Spatial::Math::CVector2*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->squaredDistance(*(EarthView::World::Spatial::Math::CVector2*)rhs);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CVector2_dotProduct_Real_CVector2(void *pObjectXXXX, _in const void* vec )
				{
					const EarthView::World::Spatial::Math::CVector2* ptrNativeObject = (EarthView::World::Spatial::Math::CVector2*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->dotProduct(*(EarthView::World::Spatial::Math::CVector2*)vec);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CVector2_normalise_Real(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CVector2* ptrNativeObject = (EarthView::World::Spatial::Math::CVector2*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->normalise();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector2_midPoint_CVector2_CVector2(void *pObjectXXXX, _in const void* vec )
				{
					const EarthView::World::Spatial::Math::CVector2* ptrNativeObject = (EarthView::World::Spatial::Math::CVector2*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector2 objXXXX = ptrNativeObject->midPoint(*(EarthView::World::Spatial::Math::CVector2*)vec);
					EarthView::World::Spatial::Math::CVector2 *pXXXX = new EarthView::World::Spatial::Math::CVector2(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CVector2_OperatorLessThan_ev_bool_CVector2(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial::Math::CVector2& objXXXX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector2& objXXXX1 = *(EarthView::World::Spatial::Math::CVector2*)rhs;
					return objXXXX < objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CVector2_OperatorGreaterThan_ev_bool_CVector2(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial::Math::CVector2& objXXXX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector2& objXXXX1 = *(EarthView::World::Spatial::Math::CVector2*)rhs;
					return objXXXX > objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CVector2_makeFloor_void_CVector2(void *pObjectXXXX, _in const void* cmp )
				{
					EarthView::World::Spatial::Math::CVector2* ptrNativeObject = (EarthView::World::Spatial::Math::CVector2*) pObjectXXXX;
					ptrNativeObject->makeFloor(*(EarthView::World::Spatial::Math::CVector2*)cmp);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CVector2_makeCeil_void_CVector2(void *pObjectXXXX, _in const void* cmp )
				{
					EarthView::World::Spatial::Math::CVector2* ptrNativeObject = (EarthView::World::Spatial::Math::CVector2*) pObjectXXXX;
					ptrNativeObject->makeCeil(*(EarthView::World::Spatial::Math::CVector2*)cmp);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector2_perpendicular_CVector2(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CVector2* ptrNativeObject = (EarthView::World::Spatial::Math::CVector2*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector2 objXXXX = ptrNativeObject->perpendicular();
					EarthView::World::Spatial::Math::CVector2 *pXXXX = new EarthView::World::Spatial::Math::CVector2(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CVector2_crossProduct_Real_CVector2(void *pObjectXXXX, _in const void* rkVector )
				{
					const EarthView::World::Spatial::Math::CVector2* ptrNativeObject = (EarthView::World::Spatial::Math::CVector2*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->crossProduct(*(EarthView::World::Spatial::Math::CVector2*)rkVector);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector2_randomDeviant_CVector2_Real(void *pObjectXXXX, _in Real angle )
				{
					const EarthView::World::Spatial::Math::CVector2* ptrNativeObject = (EarthView::World::Spatial::Math::CVector2*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector2 objXXXX = ptrNativeObject->randomDeviant(angle);
					EarthView::World::Spatial::Math::CVector2 *pXXXX = new EarthView::World::Spatial::Math::CVector2(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CVector2_isZeroLength_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CVector2* ptrNativeObject = (EarthView::World::Spatial::Math::CVector2*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isZeroLength();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector2_normalisedCopy_CVector2(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CVector2* ptrNativeObject = (EarthView::World::Spatial::Math::CVector2*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector2 objXXXX = ptrNativeObject->normalisedCopy();
					EarthView::World::Spatial::Math::CVector2 *pXXXX = new EarthView::World::Spatial::Math::CVector2(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector2_reflect_CVector2_CVector2(void *pObjectXXXX, _in const void* normal )
				{
					const EarthView::World::Spatial::Math::CVector2* ptrNativeObject = (EarthView::World::Spatial::Math::CVector2*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector2 objXXXX = ptrNativeObject->reflect(*(EarthView::World::Spatial::Math::CVector2*)normal);
					EarthView::World::Spatial::Math::CVector2 *pXXXX = new EarthView::World::Spatial::Math::CVector2(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CVector2_isNaN_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CVector2* ptrNativeObject = (EarthView::World::Spatial::Math::CVector2*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isNaN();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector2_angleBetween_CRadian_CVector2(void *pObjectXXXX, _in const void* other )
				{
					const EarthView::World::Spatial::Math::CVector2* ptrNativeObject = (EarthView::World::Spatial::Math::CVector2*) pObjectXXXX;
					EarthView::World::Spatial::Math::CRadian objXXXX = ptrNativeObject->angleBetween(*(EarthView::World::Spatial::Math::CVector2*)other);
					EarthView::World::Spatial::Math::CRadian *pXXXX = new EarthView::World::Spatial::Math::CRadian(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector2_angleTo_CRadian_CVector2(void *pObjectXXXX, _in const void* other )
				{
					const EarthView::World::Spatial::Math::CVector2* ptrNativeObject = (EarthView::World::Spatial::Math::CVector2*) pObjectXXXX;
					EarthView::World::Spatial::Math::CRadian objXXXX = ptrNativeObject->angleTo(*(EarthView::World::Spatial::Math::CVector2*)other);
					EarthView::World::Spatial::Math::CRadian *pXXXX = new EarthView::World::Spatial::Math::CRadian(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Spatial_Math_CVector2_ZERO()
				{
					const EarthView::World::Spatial::Math::CVector2 objXXXX = EarthView::World::Spatial::Math::CVector2::ZERO;
					EarthView::World::Spatial::Math::CVector2 *pXXXX = new EarthView::World::Spatial::Math::CVector2(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Spatial_Math_CVector2_UNIT_X()
				{
					const EarthView::World::Spatial::Math::CVector2 objXXXX = EarthView::World::Spatial::Math::CVector2::UNIT_X;
					EarthView::World::Spatial::Math::CVector2 *pXXXX = new EarthView::World::Spatial::Math::CVector2(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Spatial_Math_CVector2_UNIT_Y()
				{
					const EarthView::World::Spatial::Math::CVector2 objXXXX = EarthView::World::Spatial::Math::CVector2::UNIT_Y;
					EarthView::World::Spatial::Math::CVector2 *pXXXX = new EarthView::World::Spatial::Math::CVector2(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Spatial_Math_CVector2_NEGATIVE_UNIT_X()
				{
					const EarthView::World::Spatial::Math::CVector2 objXXXX = EarthView::World::Spatial::Math::CVector2::NEGATIVE_UNIT_X;
					EarthView::World::Spatial::Math::CVector2 *pXXXX = new EarthView::World::Spatial::Math::CVector2(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Spatial_Math_CVector2_NEGATIVE_UNIT_Y()
				{
					const EarthView::World::Spatial::Math::CVector2 objXXXX = EarthView::World::Spatial::Math::CVector2::NEGATIVE_UNIT_Y;
					EarthView::World::Spatial::Math::CVector2 *pXXXX = new EarthView::World::Spatial::Math::CVector2(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Spatial_Math_CVector2_UNIT_SCALE()
				{
					const EarthView::World::Spatial::Math::CVector2 objXXXX = EarthView::World::Spatial::Math::CVector2::UNIT_SCALE;
					EarthView::World::Spatial::Math::CVector2 *pXXXX = new EarthView::World::Spatial::Math::CVector2(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
		}
	}
}
