/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/vector4.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Spatial_Math_CVector4_y( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CVector4* ptrNativeObject = (EarthView::World::Spatial::Math::CVector4*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->y;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Math_CVector4_y( void *pObjectXXXX, Real  value )
				{
					((EarthView::World::Spatial::Math::CVector4*)pObjectXXXX)->y = value;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Spatial_Math_CVector4_z( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CVector4* ptrNativeObject = (EarthView::World::Spatial::Math::CVector4*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->z;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Math_CVector4_z( void *pObjectXXXX, Real  value )
				{
					((EarthView::World::Spatial::Math::CVector4*)pObjectXXXX)->z = value;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Spatial_Math_CVector4_w( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CVector4* ptrNativeObject = (EarthView::World::Spatial::Math::CVector4*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->w;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Math_CVector4_w( void *pObjectXXXX, Real  value )
				{
					((EarthView::World::Spatial::Math::CVector4*)pObjectXXXX)->w = value;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Spatial_Math_CVector4_x( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CVector4* ptrNativeObject = (EarthView::World::Spatial::Math::CVector4*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->x;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Math_CVector4_x( void *pObjectXXXX, Real  value )
				{
					((EarthView::World::Spatial::Math::CVector4*)pObjectXXXX)->x = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Math_CVector4_toDataStream_ev_int32_CDataStream(void *pObjectXXXX, _inout void* dataStream )
				{
					EarthView::World::Spatial::Math::CVector4* ptrNativeObject = (EarthView::World::Spatial::Math::CVector4*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->toDataStream(*(EarthView::World::Core::CDataStream*)dataStream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Math_CVector4_fromDataStream_ev_int32_CDataStream(void *pObjectXXXX, _inout void* dataStream )
				{
					EarthView::World::Spatial::Math::CVector4* ptrNativeObject = (EarthView::World::Spatial::Math::CVector4*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->fromDataStream(*(EarthView::World::Core::CDataStream*)dataStream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CVector4_swap_void_CVector4(void *pObjectXXXX, _inout void* other )
				{
					EarthView::World::Spatial::Math::CVector4* ptrNativeObject = (EarthView::World::Spatial::Math::CVector4*) pObjectXXXX;
					ptrNativeObject->swap(*(EarthView::World::Spatial::Math::CVector4*)other);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CVector4_OperatorIndex_Real_ev_size_t(void *pObjXXXX, _in const ev_uint64  i )
				{
					EarthView::World::Spatial::Math::CVector4& objYYYY = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					Real objXXXX = objYYYY[i];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real*  _stdcall EarthView_World_Spatial_Math_CVector4_ptr_Real(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CVector4* ptrNativeObject = (EarthView::World::Spatial::Math::CVector4*) pObjectXXXX;
					Real* objXXXX = ptrNativeObject->ptr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector4_OperatorAssign_CVector4_CVector4(void *pObjXXXX, _in const void* rkVector )
				{
					EarthView::World::Spatial::Math::CVector4& objXXXX = *((EarthView::World::Spatial::Math::CVector4*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Math::CVector4*)rkVector;
					EarthView::World::Spatial::Math::CVector4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector4_OperatorAssign_CVector4_Real(void *pObjXXXX, _in const Real fScalar )
				{
					EarthView::World::Spatial::Math::CVector4& objXXXX = *((EarthView::World::Spatial::Math::CVector4*) pObjXXXX);
					objXXXX = fScalar;
					EarthView::World::Spatial::Math::CVector4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CVector4_OperatorEquals_ev_bool_CVector4(void *pObjXXXX, _in const void* rkVector )
				{
					EarthView::World::Spatial::Math::CVector4& objXXXX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector4& objXXXX1 = *(EarthView::World::Spatial::Math::CVector4*)rkVector;
					return objXXXX == objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CVector4_OperatorNotEquals_ev_bool_CVector4(void *pObjXXXX, _in const void* rkVector )
				{
					EarthView::World::Spatial::Math::CVector4& objXXXX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector4& objXXXX1 = *(EarthView::World::Spatial::Math::CVector4*)rkVector;
					return objXXXX != objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector4_OperatorAssign_CVector4_CVector3(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial::Math::CVector4& objXXXX = *((EarthView::World::Spatial::Math::CVector4*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Math::CVector3*)rhs;
					EarthView::World::Spatial::Math::CVector4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector4_OperatorPlus_CVector4_CVector4(void *pObjXXXX, _in const void* rkVector )
				{
					EarthView::World::Spatial::Math::CVector4& objXXXX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector4 result = objXXXX +(*(EarthView::World::Spatial::Math::CVector4*)rkVector);
					EarthView::World::Spatial::Math::CVector4* pnew = new EarthView::World::Spatial::Math::CVector4(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector4_OperatorMinus_CVector4_CVector4(void *pObjXXXX, _in const void* rkVector )
				{
					EarthView::World::Spatial::Math::CVector4& objXXXX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector4 result = objXXXX -(*(EarthView::World::Spatial::Math::CVector4*)rkVector);
					EarthView::World::Spatial::Math::CVector4* pnew = new EarthView::World::Spatial::Math::CVector4(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector4_OperatorMultiply_CVector4_Real(void *pObjXXXX, _in const Real fScalar )
				{
					EarthView::World::Spatial::Math::CVector4& objXXXX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector4 result = objXXXX *(fScalar);
					EarthView::World::Spatial::Math::CVector4* pnew = new EarthView::World::Spatial::Math::CVector4(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector4_OperatorMultiply_CVector4_CVector4(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial::Math::CVector4& objXXXX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector4 result = objXXXX *(*(EarthView::World::Spatial::Math::CVector4*)rhs);
					EarthView::World::Spatial::Math::CVector4* pnew = new EarthView::World::Spatial::Math::CVector4(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector4_OperatorDivide_CVector4_Real(void *pObjXXXX, _in const Real fScalar )
				{
					EarthView::World::Spatial::Math::CVector4& objXXXX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector4 result = objXXXX /(fScalar);
					EarthView::World::Spatial::Math::CVector4* pnew = new EarthView::World::Spatial::Math::CVector4(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector4_OperatorDivide_CVector4_CVector4(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial::Math::CVector4& objXXXX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector4 result = objXXXX /(*(EarthView::World::Spatial::Math::CVector4*)rhs);
					EarthView::World::Spatial::Math::CVector4* pnew = new EarthView::World::Spatial::Math::CVector4(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_Math_CVector4_OperatorPosivate_CVector4(void *pObjXXXX )
				{
					EarthView::World::Spatial::Math::CVector4& objXXXX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector4 result = +objXXXX ;
					EarthView::World::Spatial::Math::CVector4* pnew = new EarthView::World::Spatial::Math::CVector4(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector4_OperatorNegative_CVector4(void *pObjXXXX )
				{
					EarthView::World::Spatial::Math::CVector4& objXXXX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector4 result = -objXXXX ;
					EarthView::World::Spatial::Math::CVector4* pnew = new EarthView::World::Spatial::Math::CVector4(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector4_OperatorPlus_CVector4_Real(void *pObjXXXX, _in const Real rhs )
				{
					EarthView::World::Spatial::Math::CVector4& objXXXX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector4 result = objXXXX +(rhs);
					EarthView::World::Spatial::Math::CVector4* pnew = new EarthView::World::Spatial::Math::CVector4(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CVector4_OperatorMinus_CVector4_Real(void *pObjXXXX, _in Real rhs )
				{
					EarthView::World::Spatial::Math::CVector4& objXXXX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector4 result = objXXXX -(rhs);
					EarthView::World::Spatial::Math::CVector4* pnew = new EarthView::World::Spatial::Math::CVector4(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CVector4_dotProduct_Real_CVector4(void *pObjectXXXX, _in const void* vec )
				{
					const EarthView::World::Spatial::Math::CVector4* ptrNativeObject = (EarthView::World::Spatial::Math::CVector4*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->dotProduct(*(EarthView::World::Spatial::Math::CVector4*)vec);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CVector4_isNaN_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CVector4* ptrNativeObject = (EarthView::World::Spatial::Math::CVector4*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isNaN();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Spatial_Math_CVector4_ZERO()
				{
					const EarthView::World::Spatial::Math::CVector4 objXXXX = EarthView::World::Spatial::Math::CVector4::ZERO;
					EarthView::World::Spatial::Math::CVector4 *pXXXX = new EarthView::World::Spatial::Math::CVector4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_Vector4List_push_back_void_CVector4(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial::Math::Vector4List* ptrNativeObject = (EarthView::World::Spatial::Math::Vector4List*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial::Math::CVector4*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_Vector4List_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::Vector4List* ptrNativeObject = (EarthView::World::Spatial::Math::Vector4List*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_Vector4List_front_CVector4(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::Vector4List* ptrNativeObject = (EarthView::World::Spatial::Math::Vector4List*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector4& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial::Math::CVector4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_Vector4List_back_CVector4(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::Vector4List* ptrNativeObject = (EarthView::World::Spatial::Math::Vector4List*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector4& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial::Math::CVector4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_Vector4List_insert_void_ev_uint32_CVector4(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Spatial::Math::Vector4List* ptrNativeObject = (EarthView::World::Spatial::Math::Vector4List*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial::Math::CVector4*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_Vector4List_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial::Math::Vector4List* ptrNativeObject = (EarthView::World::Spatial::Math::Vector4List*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_Vector4List_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::Vector4List* ptrNativeObject = (EarthView::World::Spatial::Math::Vector4List*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_Vector4List_OperatorIndex_CVector4_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial::Math::Vector4List& objYYYY = *(EarthView::World::Spatial::Math::Vector4List*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector4& objXXXX = objYYYY[n];
					EarthView::World::Spatial::Math::CVector4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_Vector4List_at_CVector4_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial::Math::Vector4List* ptrNativeObject = (EarthView::World::Spatial::Math::Vector4List*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector4& objXXXX = ptrNativeObject->at(n);
					EarthView::World::Spatial::Math::CVector4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial_Math_Vector4List_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::Vector4List* ptrNativeObject = (EarthView::World::Spatial::Math::Vector4List*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_Vector4List_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial::Math::Vector4List* ptrNativeObject = (EarthView::World::Spatial::Math::Vector4List*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_Vector4List_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial::Math::Vector4List* ptrNativeObject = (EarthView::World::Spatial::Math::Vector4List*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_Vector4List_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::Vector4List* ptrNativeObject = (EarthView::World::Spatial::Math::Vector4List*) pObjectXXXX;
					ptrNativeObject->clear();
				}
			}
		}
	}
}
