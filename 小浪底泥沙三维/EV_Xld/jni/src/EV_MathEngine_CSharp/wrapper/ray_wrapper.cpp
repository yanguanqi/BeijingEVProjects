/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/ray.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CRay_setOrigin_void_CVector3(void *pObjectXXXX, _in const void* origin )
				{
					EarthView::World::Spatial::Math::CRay* ptrNativeObject = (EarthView::World::Spatial::Math::CRay*) pObjectXXXX;
					ptrNativeObject->setOrigin(*(EarthView::World::Spatial::Math::CVector3*)origin);
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_Math_CRay_getOrigin_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CRay* ptrNativeObject = (EarthView::World::Spatial::Math::CRay*) pObjectXXXX;
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getOrigin();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CRay_setDirection_void_CVector3(void *pObjectXXXX, _in const void* dir )
				{
					EarthView::World::Spatial::Math::CRay* ptrNativeObject = (EarthView::World::Spatial::Math::CRay*) pObjectXXXX;
					ptrNativeObject->setDirection(*(EarthView::World::Spatial::Math::CVector3*)dir);
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_Math_CRay_getDirection_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CRay* ptrNativeObject = (EarthView::World::Spatial::Math::CRay*) pObjectXXXX;
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getDirection();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CRay_getPoint_CVector3_Real(void *pObjectXXXX, _in Real t )
				{
					const EarthView::World::Spatial::Math::CRay* ptrNativeObject = (EarthView::World::Spatial::Math::CRay*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getPoint(t);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CRay_getPoint_CVector3_CVector3(void *pObjectXXXX, _in const void* point )
				{
					const EarthView::World::Spatial::Math::CRay* ptrNativeObject = (EarthView::World::Spatial::Math::CRay*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getPoint(*(EarthView::World::Spatial::Math::CVector3*)point);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CRay_OperatorMultiply_CVector3_Real(void *pObjXXXX, _in Real t )
				{
					EarthView::World::Spatial::Math::CRay& objXXXX = *(EarthView::World::Spatial::Math::CRay*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 result = objXXXX *(t);
					EarthView::World::Spatial::Math::CVector3* pnew = new EarthView::World::Spatial::Math::CVector3(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CRay_intersects_IntersectResPair_CPlane(void *pObjectXXXX, _in const void* p )
				{
					const EarthView::World::Spatial::Math::CRay* ptrNativeObject = (EarthView::World::Spatial::Math::CRay*) pObjectXXXX;
					EarthView::World::Spatial::Math::IntersectResPair objXXXX = ptrNativeObject->intersects(*(EarthView::World::Spatial::Math::CPlane*)p);
					EarthView::World::Spatial::Math::IntersectResPair *pXXXX = new EarthView::World::Spatial::Math::IntersectResPair(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CRay_intersects_IntersectResPair_CPlaneBoundedVolume(void *pObjectXXXX, _in const void* p )
				{
					const EarthView::World::Spatial::Math::CRay* ptrNativeObject = (EarthView::World::Spatial::Math::CRay*) pObjectXXXX;
					EarthView::World::Spatial::Math::IntersectResPair objXXXX = ptrNativeObject->intersects(*(EarthView::World::Spatial::Math::CPlaneBoundedVolume*)p);
					EarthView::World::Spatial::Math::IntersectResPair *pXXXX = new EarthView::World::Spatial::Math::IntersectResPair(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CRay_intersects_IntersectResPair_CSphere(void *pObjectXXXX, _in const void* s )
				{
					const EarthView::World::Spatial::Math::CRay* ptrNativeObject = (EarthView::World::Spatial::Math::CRay*) pObjectXXXX;
					EarthView::World::Spatial::Math::IntersectResPair objXXXX = ptrNativeObject->intersects(*(EarthView::World::Spatial::Math::CSphere*)s);
					EarthView::World::Spatial::Math::IntersectResPair *pXXXX = new EarthView::World::Spatial::Math::IntersectResPair(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CRay_intersects_IntersectResPair_CAxisAlignedBox(void *pObjectXXXX, _in const void* box )
				{
					const EarthView::World::Spatial::Math::CRay* ptrNativeObject = (EarthView::World::Spatial::Math::CRay*) pObjectXXXX;
					EarthView::World::Spatial::Math::IntersectResPair objXXXX = ptrNativeObject->intersects(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)box);
					EarthView::World::Spatial::Math::IntersectResPair *pXXXX = new EarthView::World::Spatial::Math::IntersectResPair(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CRay_intersects_IntersectResPair_CVector3_CVector3_CMatrix4_ev_uint32(void *pObjectXXXX, _in const void* startPt, _in const void* endPt, _in const void* vpvMatrix, _in ev_uint32 piexlTolerance )
				{
					const EarthView::World::Spatial::Math::CRay* ptrNativeObject = (EarthView::World::Spatial::Math::CRay*) pObjectXXXX;
					EarthView::World::Spatial::Math::IntersectResPair objXXXX = ptrNativeObject->intersects(*(EarthView::World::Spatial::Math::CVector3*)startPt, *(EarthView::World::Spatial::Math::CVector3*)endPt, *(EarthView::World::Spatial::Math::CMatrix4*)vpvMatrix, piexlTolerance);
					EarthView::World::Spatial::Math::IntersectResPair *pXXXX = new EarthView::World::Spatial::Math::IntersectResPair(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CRay_mul_void_CMatrix4(void *pObjectXXXX, _in const void* matrix )
				{
					EarthView::World::Spatial::Math::CRay* ptrNativeObject = (EarthView::World::Spatial::Math::CRay*) pObjectXXXX;
					ptrNativeObject->mul(*(EarthView::World::Spatial::Math::CMatrix4*)matrix);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CRay_devide_void_CMatrix4(void *pObjectXXXX, _in const void* matrix )
				{
					EarthView::World::Spatial::Math::CRay* ptrNativeObject = (EarthView::World::Spatial::Math::CRay*) pObjectXXXX;
					ptrNativeObject->devide(*(EarthView::World::Spatial::Math::CMatrix4*)matrix);
				}
			}
		}
	}
}
