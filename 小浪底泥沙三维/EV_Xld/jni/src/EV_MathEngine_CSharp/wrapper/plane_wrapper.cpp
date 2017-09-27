/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/plane.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Math_CPlane_getSide_Side_CVector3(void *pObjectXXXX, _in const void* rkPoint )
				{
					const EarthView::World::Spatial::Math::CPlane* ptrNativeObject = (EarthView::World::Spatial::Math::CPlane*) pObjectXXXX;
					EarthView::World::Spatial::Math::CPlane::Side objXXXX = ptrNativeObject->getSide(*(EarthView::World::Spatial::Math::CVector3*)rkPoint);
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Math_CPlane_getSide_Side_CAxisAlignedBox(void *pObjectXXXX, _in const void* rkBox )
				{
					const EarthView::World::Spatial::Math::CPlane* ptrNativeObject = (EarthView::World::Spatial::Math::CPlane*) pObjectXXXX;
					EarthView::World::Spatial::Math::CPlane::Side objXXXX = ptrNativeObject->getSide(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)rkBox);
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Math_CPlane_getSide_Side_CVector3_CVector3(void *pObjectXXXX, _in const void* centre, _in const void* halfSize )
				{
					const EarthView::World::Spatial::Math::CPlane* ptrNativeObject = (EarthView::World::Spatial::Math::CPlane*) pObjectXXXX;
					EarthView::World::Spatial::Math::CPlane::Side objXXXX = ptrNativeObject->getSide(*(EarthView::World::Spatial::Math::CVector3*)centre, *(EarthView::World::Spatial::Math::CVector3*)halfSize);
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CPlane_getDistance_Real_CVector3(void *pObjectXXXX, _in const void* rkPoint )
				{
					const EarthView::World::Spatial::Math::CPlane* ptrNativeObject = (EarthView::World::Spatial::Math::CPlane*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getDistance(*(EarthView::World::Spatial::Math::CVector3*)rkPoint);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CPlane_redefine_void_CVector3_CVector3_CVector3(void *pObjectXXXX, _in const void* rkPoint0, _in const void* rkPoint1, _in const void* rkPoint2 )
				{
					EarthView::World::Spatial::Math::CPlane* ptrNativeObject = (EarthView::World::Spatial::Math::CPlane*) pObjectXXXX;
					ptrNativeObject->redefine(*(EarthView::World::Spatial::Math::CVector3*)rkPoint0, *(EarthView::World::Spatial::Math::CVector3*)rkPoint1, *(EarthView::World::Spatial::Math::CVector3*)rkPoint2);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CPlane_redefine_void_CVector3_CVector3(void *pObjectXXXX, _in const void* rkNormal, _in const void* rkPoint )
				{
					EarthView::World::Spatial::Math::CPlane* ptrNativeObject = (EarthView::World::Spatial::Math::CPlane*) pObjectXXXX;
					ptrNativeObject->redefine(*(EarthView::World::Spatial::Math::CVector3*)rkNormal, *(EarthView::World::Spatial::Math::CVector3*)rkPoint);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CPlane_projectVector_CVector3_CVector3(void *pObjectXXXX, _in const void* v )
				{
					const EarthView::World::Spatial::Math::CPlane* ptrNativeObject = (EarthView::World::Spatial::Math::CPlane*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->projectVector(*(EarthView::World::Spatial::Math::CVector3*)v);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CPlane_normalise_Real(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CPlane* ptrNativeObject = (EarthView::World::Spatial::Math::CPlane*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->normalise();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial_Math_CPlane_normal( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CPlane* ptrNativeObject = (EarthView::World::Spatial::Math::CPlane*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->normal;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Math_CPlane_normal( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial::Math::CPlane*)pObjectXXXX)->normal = *(EarthView::World::Spatial::Math::CVector3*)value;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Spatial_Math_CPlane_d( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CPlane* ptrNativeObject = (EarthView::World::Spatial::Math::CPlane*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->d;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Math_CPlane_d( void *pObjectXXXX, Real  value )
				{
					((EarthView::World::Spatial::Math::CPlane*)pObjectXXXX)->d = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CPlane_OperatorEquals_ev_bool_CPlane(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial::Math::CPlane& objXXXX = *(EarthView::World::Spatial::Math::CPlane*) pObjXXXX;
					const EarthView::World::Spatial::Math::CPlane& objXXXX1 = *(EarthView::World::Spatial::Math::CPlane*)rhs;
					return objXXXX == objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CPlane_OperatorNotEquals_ev_bool_CPlane(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial::Math::CPlane& objXXXX = *(EarthView::World::Spatial::Math::CPlane*) pObjXXXX;
					const EarthView::World::Spatial::Math::CPlane& objXXXX1 = *(EarthView::World::Spatial::Math::CPlane*)rhs;
					return objXXXX != objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_PlaneList_push_back_void_CPlane(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial::Math::PlaneList* ptrNativeObject = (EarthView::World::Spatial::Math::PlaneList*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial::Math::CPlane*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_PlaneList_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::PlaneList* ptrNativeObject = (EarthView::World::Spatial::Math::PlaneList*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_PlaneList_front_CPlane(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::PlaneList* ptrNativeObject = (EarthView::World::Spatial::Math::PlaneList*) pObjectXXXX;
					EarthView::World::Spatial::Math::CPlane& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial::Math::CPlane *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_PlaneList_back_CPlane(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::PlaneList* ptrNativeObject = (EarthView::World::Spatial::Math::PlaneList*) pObjectXXXX;
					EarthView::World::Spatial::Math::CPlane& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial::Math::CPlane *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_PlaneList_insert_void_ev_uint32_CPlane(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Spatial::Math::PlaneList* ptrNativeObject = (EarthView::World::Spatial::Math::PlaneList*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial::Math::CPlane*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_PlaneList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial::Math::PlaneList* ptrNativeObject = (EarthView::World::Spatial::Math::PlaneList*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_PlaneList_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::PlaneList* ptrNativeObject = (EarthView::World::Spatial::Math::PlaneList*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_PlaneList_OperatorIndex_CPlane_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial::Math::PlaneList& objYYYY = *(EarthView::World::Spatial::Math::PlaneList*) pObjXXXX;
					EarthView::World::Spatial::Math::CPlane& objXXXX = objYYYY[n];
					EarthView::World::Spatial::Math::CPlane *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_PlaneList_at_CPlane_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial::Math::PlaneList* ptrNativeObject = (EarthView::World::Spatial::Math::PlaneList*) pObjectXXXX;
					EarthView::World::Spatial::Math::CPlane& objXXXX = ptrNativeObject->at(n);
					EarthView::World::Spatial::Math::CPlane *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_PlaneList_OperatorNotEquals_ev_bool_PlaneList(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Spatial::Math::PlaneList& objXXXX = *(EarthView::World::Spatial::Math::PlaneList*) pObjXXXX;
					const EarthView::World::Spatial::Math::PlaneList& objXXXX1 = *(EarthView::World::Spatial::Math::PlaneList*)other;
					return objXXXX != objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_PlaneList_OperatorEquals_ev_bool_PlaneList(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Spatial::Math::PlaneList& objXXXX = *(EarthView::World::Spatial::Math::PlaneList*) pObjXXXX;
					const EarthView::World::Spatial::Math::PlaneList& objXXXX1 = *(EarthView::World::Spatial::Math::PlaneList*)other;
					return objXXXX == objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial_Math_PlaneList_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::PlaneList* ptrNativeObject = (EarthView::World::Spatial::Math::PlaneList*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_PlaneList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial::Math::PlaneList* ptrNativeObject = (EarthView::World::Spatial::Math::PlaneList*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_PlaneList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial::Math::PlaneList* ptrNativeObject = (EarthView::World::Spatial::Math::PlaneList*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_PlaneList_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::PlaneList* ptrNativeObject = (EarthView::World::Spatial::Math::PlaneList*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_Planes_push_back_void_CPlane(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial::Math::Planes* ptrNativeObject = (EarthView::World::Spatial::Math::Planes*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial::Math::CPlane*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_Planes_push_front_void_CPlane(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial::Math::Planes* ptrNativeObject = (EarthView::World::Spatial::Math::Planes*) pObjectXXXX;
					ptrNativeObject->push_front(*(EarthView::World::Spatial::Math::CPlane*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_Planes_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::Planes* ptrNativeObject = (EarthView::World::Spatial::Math::Planes*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_Planes_pop_front_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::Planes* ptrNativeObject = (EarthView::World::Spatial::Math::Planes*) pObjectXXXX;
					ptrNativeObject->pop_front();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_Planes_front_CPlane(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::Planes* ptrNativeObject = (EarthView::World::Spatial::Math::Planes*) pObjectXXXX;
					EarthView::World::Spatial::Math::CPlane& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial::Math::CPlane *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_Planes_back_CPlane(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::Planes* ptrNativeObject = (EarthView::World::Spatial::Math::Planes*) pObjectXXXX;
					EarthView::World::Spatial::Math::CPlane& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial::Math::CPlane *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_Planes_at_CPlane_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
				{
					EarthView::World::Spatial::Math::Planes* ptrNativeObject = (EarthView::World::Spatial::Math::Planes*) pObjectXXXX;
					EarthView::World::Spatial::Math::CPlane& objXXXX = ptrNativeObject->at(pos);
					EarthView::World::Spatial::Math::CPlane *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_Planes_insert_void_ev_uint32_CPlane(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Spatial::Math::Planes* ptrNativeObject = (EarthView::World::Spatial::Math::Planes*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial::Math::CPlane*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_Planes_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial::Math::Planes* ptrNativeObject = (EarthView::World::Spatial::Math::Planes*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_Planes_remove_void_CPlane(void *pObjectXXXX, _in void* val )
				{
					EarthView::World::Spatial::Math::Planes* ptrNativeObject = (EarthView::World::Spatial::Math::Planes*) pObjectXXXX;
					ptrNativeObject->remove(*(EarthView::World::Spatial::Math::CPlane*)val);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_Planes_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::Planes* ptrNativeObject = (EarthView::World::Spatial::Math::Planes*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial_Math_Planes_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::Planes* ptrNativeObject = (EarthView::World::Spatial::Math::Planes*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_Planes_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial::Math::Planes* ptrNativeObject = (EarthView::World::Spatial::Math::Planes*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_Planes_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::Planes* ptrNativeObject = (EarthView::World::Spatial::Math::Planes*) pObjectXXXX;
					ptrNativeObject->clear();
				}
			}
		}
	}
}
