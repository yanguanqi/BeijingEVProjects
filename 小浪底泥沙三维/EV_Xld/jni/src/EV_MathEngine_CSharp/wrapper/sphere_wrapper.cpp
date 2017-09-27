/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/sphere.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CSphere_getRadius_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CSphere* ptrNativeObject = (EarthView::World::Spatial::Math::CSphere*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getRadius();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CSphere_setRadius_void_Real(void *pObjectXXXX, _in Real radius )
				{
					EarthView::World::Spatial::Math::CSphere* ptrNativeObject = (EarthView::World::Spatial::Math::CSphere*) pObjectXXXX;
					ptrNativeObject->setRadius(radius);
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_Math_CSphere_getCenter_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CSphere* ptrNativeObject = (EarthView::World::Spatial::Math::CSphere*) pObjectXXXX;
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getCenter();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CSphere_setCenter_void_CVector3(void *pObjectXXXX, _in const void* center )
				{
					EarthView::World::Spatial::Math::CSphere* ptrNativeObject = (EarthView::World::Spatial::Math::CSphere*) pObjectXXXX;
					ptrNativeObject->setCenter(*(EarthView::World::Spatial::Math::CVector3*)center);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CSphere_intersects_ev_bool_CSphere(void *pObjectXXXX, _in const void* s )
				{
					const EarthView::World::Spatial::Math::CSphere* ptrNativeObject = (EarthView::World::Spatial::Math::CSphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->intersects(*(EarthView::World::Spatial::Math::CSphere*)s);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CSphere_intersects_ev_bool_CAxisAlignedBox(void *pObjectXXXX, _in const void* box )
				{
					const EarthView::World::Spatial::Math::CSphere* ptrNativeObject = (EarthView::World::Spatial::Math::CSphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->intersects(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)box);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CSphere_intersects_ev_bool_CPlane(void *pObjectXXXX, _in const void* plane )
				{
					const EarthView::World::Spatial::Math::CSphere* ptrNativeObject = (EarthView::World::Spatial::Math::CSphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->intersects(*(EarthView::World::Spatial::Math::CPlane*)plane);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CSphere_intersects_ev_bool_CVector3(void *pObjectXXXX, _in const void* v )
				{
					const EarthView::World::Spatial::Math::CSphere* ptrNativeObject = (EarthView::World::Spatial::Math::CSphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->intersects(*(EarthView::World::Spatial::Math::CVector3*)v);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CSphere_merge_void_CSphere(void *pObjectXXXX, _in const void* oth )
				{
					EarthView::World::Spatial::Math::CSphere* ptrNativeObject = (EarthView::World::Spatial::Math::CSphere*) pObjectXXXX;
					ptrNativeObject->merge(*(EarthView::World::Spatial::Math::CSphere*)oth);
				}
			}
		}
	}
}
