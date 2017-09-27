/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/dualquaternion.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CDualQuaternion_OperatorIndex_Real_ev_size_t(void *pObjXXXX, _in const ev_uint64  i )
			{
				EarthView::World::Graphic::CDualQuaternion& objYYYY = *(EarthView::World::Graphic::CDualQuaternion*) pObjXXXX;
				Real objXXXX = objYYYY[i];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDualQuaternion_OperatorAssign_CDualQuaternion_CDualQuaternion(void *pObjXXXX, _in const void* rkQ )
			{
				EarthView::World::Graphic::CDualQuaternion& objXXXX = *((EarthView::World::Graphic::CDualQuaternion*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::CDualQuaternion*)rkQ;
				EarthView::World::Graphic::CDualQuaternion *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CDualQuaternion_OperatorEquals_ev_bool_CDualQuaternion(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Graphic::CDualQuaternion& objXXXX = *(EarthView::World::Graphic::CDualQuaternion*) pObjXXXX;
				const EarthView::World::Graphic::CDualQuaternion& objXXXX1 = *(EarthView::World::Graphic::CDualQuaternion*)rhs;
				return objXXXX == objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CDualQuaternion_OperatorNotEquals_ev_bool_CDualQuaternion(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Graphic::CDualQuaternion& objXXXX = *(EarthView::World::Graphic::CDualQuaternion*) pObjXXXX;
				const EarthView::World::Graphic::CDualQuaternion& objXXXX1 = *(EarthView::World::Graphic::CDualQuaternion*)rhs;
				return objXXXX != objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  Real*  _stdcall EarthView_World_Graphic_CDualQuaternion_ptr_Real(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CDualQuaternion* ptrNativeObject = (EarthView::World::Graphic::CDualQuaternion*) pObjectXXXX;
				Real* objXXXX = ptrNativeObject->ptr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDualQuaternion_swap_void_CDualQuaternion(void *pObjectXXXX, _inout void* other )
			{
				EarthView::World::Graphic::CDualQuaternion* ptrNativeObject = (EarthView::World::Graphic::CDualQuaternion*) pObjectXXXX;
				ptrNativeObject->swap(*(EarthView::World::Graphic::CDualQuaternion*)other);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CDualQuaternion_isNaN_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CDualQuaternion* ptrNativeObject = (EarthView::World::Graphic::CDualQuaternion*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isNaN();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDualQuaternion_fromRotationTranslation_void_CQuaternion_CVector3(void *pObjectXXXX, _in const void* q, _in const void* trans )
			{
				EarthView::World::Graphic::CDualQuaternion* ptrNativeObject = (EarthView::World::Graphic::CDualQuaternion*) pObjectXXXX;
				ptrNativeObject->fromRotationTranslation(*(EarthView::World::Spatial::Math::CQuaternion*)q, *(EarthView::World::Spatial::Math::CVector3*)trans);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDualQuaternion_toRotationTranslation_void_CQuaternion_CVector3(void *pObjectXXXX, _inout void* q, _inout void* translation )
			{
				const EarthView::World::Graphic::CDualQuaternion* ptrNativeObject = (EarthView::World::Graphic::CDualQuaternion*) pObjectXXXX;
				ptrNativeObject->toRotationTranslation(*(EarthView::World::Spatial::Math::CQuaternion*)q, *(EarthView::World::Spatial::Math::CVector3*)translation);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDualQuaternion_fromTransformationMatrix_void_CMatrix4(void *pObjectXXXX, _in const void* kTrans )
			{
				EarthView::World::Graphic::CDualQuaternion* ptrNativeObject = (EarthView::World::Graphic::CDualQuaternion*) pObjectXXXX;
				ptrNativeObject->fromTransformationMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)kTrans);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDualQuaternion_toTransformationMatrix_void_CMatrix4(void *pObjectXXXX, _inout void* kTrans )
			{
				const EarthView::World::Graphic::CDualQuaternion* ptrNativeObject = (EarthView::World::Graphic::CDualQuaternion*) pObjectXXXX;
				ptrNativeObject->toTransformationMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)kTrans);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CDualQuaternion_x( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CDualQuaternion* ptrNativeObject = (EarthView::World::Graphic::CDualQuaternion*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->x;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CDualQuaternion_x( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CDualQuaternion*)pObjectXXXX)->x = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CDualQuaternion_y( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CDualQuaternion* ptrNativeObject = (EarthView::World::Graphic::CDualQuaternion*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->y;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CDualQuaternion_y( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CDualQuaternion*)pObjectXXXX)->y = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CDualQuaternion_z( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CDualQuaternion* ptrNativeObject = (EarthView::World::Graphic::CDualQuaternion*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->z;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CDualQuaternion_z( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CDualQuaternion*)pObjectXXXX)->z = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CDualQuaternion_dw( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CDualQuaternion* ptrNativeObject = (EarthView::World::Graphic::CDualQuaternion*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->dw;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CDualQuaternion_dw( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CDualQuaternion*)pObjectXXXX)->dw = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CDualQuaternion_dx( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CDualQuaternion* ptrNativeObject = (EarthView::World::Graphic::CDualQuaternion*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->dx;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CDualQuaternion_dx( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CDualQuaternion*)pObjectXXXX)->dx = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CDualQuaternion_dy( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CDualQuaternion* ptrNativeObject = (EarthView::World::Graphic::CDualQuaternion*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->dy;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CDualQuaternion_dy( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CDualQuaternion*)pObjectXXXX)->dy = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CDualQuaternion_dz( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CDualQuaternion* ptrNativeObject = (EarthView::World::Graphic::CDualQuaternion*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->dz;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CDualQuaternion_dz( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CDualQuaternion*)pObjectXXXX)->dz = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CDualQuaternion_w( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CDualQuaternion* ptrNativeObject = (EarthView::World::Graphic::CDualQuaternion*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->w;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CDualQuaternion_w( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CDualQuaternion*)pObjectXXXX)->w = value;
			}
		}
	}
}
