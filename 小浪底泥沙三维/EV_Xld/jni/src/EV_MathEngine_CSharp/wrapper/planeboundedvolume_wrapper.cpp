/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/planeboundedvolume.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial_Math_CPlaneBoundedVolume_planes( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CPlaneBoundedVolume* ptrNativeObject = (EarthView::World::Spatial::Math::CPlaneBoundedVolume*) pObjectXXXX;
					EarthView::World::Spatial::Math::PlaneList &objXXXX = ptrNativeObject->planes;
					EarthView::World::Spatial::Math::PlaneList *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Math_CPlaneBoundedVolume_planes( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial::Math::CPlaneBoundedVolume*)pObjectXXXX)->planes = *(EarthView::World::Spatial::Math::PlaneList*)value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial_Math_CPlaneBoundedVolume_outside( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CPlaneBoundedVolume* ptrNativeObject = (EarthView::World::Spatial::Math::CPlaneBoundedVolume*) pObjectXXXX;
					EarthView::World::Spatial::Math::CPlane::Side objXXXX = ptrNativeObject->outside;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Math_CPlaneBoundedVolume_outside( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial::Math::CPlaneBoundedVolume*)pObjectXXXX)->outside = (EarthView::World::Spatial::Math::CPlane::Side)value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CPlaneBoundedVolume_intersects_ev_bool_CAxisAlignedBox(void *pObjectXXXX, _in const void* box )
				{
					const EarthView::World::Spatial::Math::CPlaneBoundedVolume* ptrNativeObject = (EarthView::World::Spatial::Math::CPlaneBoundedVolume*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->intersects(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)box);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CPlaneBoundedVolume_intersects_ev_bool_CSphere(void *pObjectXXXX, _in const void* sphere )
				{
					const EarthView::World::Spatial::Math::CPlaneBoundedVolume* ptrNativeObject = (EarthView::World::Spatial::Math::CPlaneBoundedVolume*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->intersects(*(EarthView::World::Spatial::Math::CSphere*)sphere);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CPlaneBoundedVolume_intersects_IntersectResPair_CRay(void *pObjectXXXX, _in const void* ray )
				{
					EarthView::World::Spatial::Math::CPlaneBoundedVolume* ptrNativeObject = (EarthView::World::Spatial::Math::CPlaneBoundedVolume*) pObjectXXXX;
					EarthView::World::Spatial::Math::IntersectResPair objXXXX = ptrNativeObject->intersects(*(EarthView::World::Spatial::Math::CRay*)ray);
					EarthView::World::Spatial::Math::IntersectResPair *pXXXX = new EarthView::World::Spatial::Math::IntersectResPair(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_PlaneBoundedVolumeList_push_back_void_CPlaneBoundedVolume(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial::Math::PlaneBoundedVolumeList* ptrNativeObject = (EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial::Math::CPlaneBoundedVolume*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_PlaneBoundedVolumeList_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::PlaneBoundedVolumeList* ptrNativeObject = (EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_PlaneBoundedVolumeList_front_CPlaneBoundedVolume(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::PlaneBoundedVolumeList* ptrNativeObject = (EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) pObjectXXXX;
					EarthView::World::Spatial::Math::CPlaneBoundedVolume& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial::Math::CPlaneBoundedVolume *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_PlaneBoundedVolumeList_back_CPlaneBoundedVolume(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::PlaneBoundedVolumeList* ptrNativeObject = (EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) pObjectXXXX;
					EarthView::World::Spatial::Math::CPlaneBoundedVolume& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial::Math::CPlaneBoundedVolume *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_PlaneBoundedVolumeList_insert_void_ev_uint32_CPlaneBoundedVolume(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Spatial::Math::PlaneBoundedVolumeList* ptrNativeObject = (EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial::Math::CPlaneBoundedVolume*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_PlaneBoundedVolumeList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial::Math::PlaneBoundedVolumeList* ptrNativeObject = (EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_PlaneBoundedVolumeList_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::PlaneBoundedVolumeList* ptrNativeObject = (EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_PlaneBoundedVolumeList_OperatorIndex_CPlaneBoundedVolume_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial::Math::PlaneBoundedVolumeList& objYYYY = *(EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) pObjXXXX;
					EarthView::World::Spatial::Math::CPlaneBoundedVolume& objXXXX = objYYYY[n];
					EarthView::World::Spatial::Math::CPlaneBoundedVolume *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_PlaneBoundedVolumeList_at_CPlaneBoundedVolume_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial::Math::PlaneBoundedVolumeList* ptrNativeObject = (EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) pObjectXXXX;
					EarthView::World::Spatial::Math::CPlaneBoundedVolume& objXXXX = ptrNativeObject->at(n);
					EarthView::World::Spatial::Math::CPlaneBoundedVolume *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial_Math_PlaneBoundedVolumeList_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::PlaneBoundedVolumeList* ptrNativeObject = (EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_PlaneBoundedVolumeList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial::Math::PlaneBoundedVolumeList* ptrNativeObject = (EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_PlaneBoundedVolumeList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial::Math::PlaneBoundedVolumeList* ptrNativeObject = (EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_PlaneBoundedVolumeList_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::PlaneBoundedVolumeList* ptrNativeObject = (EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) pObjectXXXX;
					ptrNativeObject->clear();
				}
			}
		}
	}
}
