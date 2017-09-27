/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/axisalignedbox.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_OperatorAssign_CAxisAlignedBox_CAxisAlignedBox(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = *((EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)rhs;
					EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_toDataStream_ev_int32_CDataStream(void *pObjectXXXX, _inout void* dataStream )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->toDataStream(*(EarthView::World::Core::CDataStream*)dataStream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_fromDataStream_ev_int32_CDataStream(void *pObjectXXXX, _inout void* dataStream )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->fromDataStream(*(EarthView::World::Core::CDataStream*)dataStream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_getMinimum_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getMinimum();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_getMaximum_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getMaximum();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_setMinimum_void_CVector3(void *pObjectXXXX, _in const void* vec )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ptrNativeObject->setMinimum(*(EarthView::World::Spatial::Math::CVector3*)vec);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_setMinimum_void_Real_Real_Real(void *pObjectXXXX, _in Real x, _in Real y, _in Real z )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ptrNativeObject->setMinimum(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_setMinimumX_void_Real(void *pObjectXXXX, _in Real x )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ptrNativeObject->setMinimumX(x);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_setMinimumY_void_Real(void *pObjectXXXX, _in Real y )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ptrNativeObject->setMinimumY(y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_setMinimumZ_void_Real(void *pObjectXXXX, _in Real z )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ptrNativeObject->setMinimumZ(z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_setMaximum_void_CVector3(void *pObjectXXXX, _in const void* vec )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ptrNativeObject->setMaximum(*(EarthView::World::Spatial::Math::CVector3*)vec);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_setMaximum_void_Real_Real_Real(void *pObjectXXXX, _in Real x, _in Real y, _in Real z )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ptrNativeObject->setMaximum(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_setMaximumX_void_Real(void *pObjectXXXX, _in Real x )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ptrNativeObject->setMaximumX(x);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_setMaximumY_void_Real(void *pObjectXXXX, _in Real y )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ptrNativeObject->setMaximumY(y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_setMaximumZ_void_Real(void *pObjectXXXX, _in Real z )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ptrNativeObject->setMaximumZ(z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_setExtents_void_CVector3_CVector3(void *pObjectXXXX, _in const void* min, _in const void* max )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ptrNativeObject->setExtents(*(EarthView::World::Spatial::Math::CVector3*)min, *(EarthView::World::Spatial::Math::CVector3*)max);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_setExtents_void_Real_Real_Real_Real_Real_Real(void *pObjectXXXX, _in Real mx, _in Real my, _in Real mz, _in Real Mx, _in Real My, _in Real Mz )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ptrNativeObject->setExtents(mx, my, mz, Mx, My, Mz);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_getAllCorners_void_CVector3(void *pObjectXXXX, _out EarthView::World::Spatial::Math::CVector3* pCorner )
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ptrNativeObject->getAllCorners((EarthView::World::Spatial::Math::CVector3**)pCorner);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_getCorner_CVector3_CornerEnum(void *pObjectXXXX, _in int cornerToGet )
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getCorner((EarthView::World::Spatial::Math::CAxisAlignedBox::CornerEnum)cornerToGet);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_merge_void_CAxisAlignedBox(void *pObjectXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ptrNativeObject->merge(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)rhs);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_merge_void_CVector3(void *pObjectXXXX, _in const void* point )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ptrNativeObject->merge(*(EarthView::World::Spatial::Math::CVector3*)point);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_transform_void_CMatrix4(void *pObjectXXXX, _in const void* matrix )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ptrNativeObject->transform(*(EarthView::World::Spatial::Math::CMatrix4*)matrix);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_transformAffine_void_CMatrix4(void *pObjectXXXX, _in const void* m )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ptrNativeObject->transformAffine(*(EarthView::World::Spatial::Math::CMatrix4*)m);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_setNull_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ptrNativeObject->setNull();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_isNull_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isNull();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_isFinite_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isFinite();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_setInfinite_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ptrNativeObject->setInfinite();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_isInfinite_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isInfinite();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_intersects_ev_bool_CAxisAlignedBox(void *pObjectXXXX, _in const void* b2 )
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->intersects(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)b2);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_intersection_CAxisAlignedBox_CAxisAlignedBox(void *pObjectXXXX, _in const void* b2 )
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->intersection(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)b2);
					EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_volume_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->volume();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_scale_void_CVector3(void *pObjectXXXX, _in const void* s )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ptrNativeObject->scale(*(EarthView::World::Spatial::Math::CVector3*)s);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_intersects_ev_bool_CSphere(void *pObjectXXXX, _in const void* s )
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->intersects(*(EarthView::World::Spatial::Math::CSphere*)s);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_intersects_ev_bool_CPlane(void *pObjectXXXX, _in const void* p )
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->intersects(*(EarthView::World::Spatial::Math::CPlane*)p);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_intersects_ev_bool_CVector3(void *pObjectXXXX, _in const void* v )
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->intersects(*(EarthView::World::Spatial::Math::CVector3*)v);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_getCenter_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getCenter();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_getSize_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getSize();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_getHalfSize_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getHalfSize();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_contains_ev_bool_CVector3(void *pObjectXXXX, _in const void* v )
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->contains(*(EarthView::World::Spatial::Math::CVector3*)v);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_distance_Real_CVector3(void *pObjectXXXX, _in const void* v )
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->distance(*(EarthView::World::Spatial::Math::CVector3*)v);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_distance2_Real_CVector3(void *pObjectXXXX, _in const void* v )
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->distance2(*(EarthView::World::Spatial::Math::CVector3*)v);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_contains_ev_bool_CAxisAlignedBox(void *pObjectXXXX, _in const void* other )
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox* ptrNativeObject = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->contains(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)other);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_OperatorEquals_ev_bool_CAxisAlignedBox(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX1 = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)rhs;
					return objXXXX == objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CAxisAlignedBox_OperatorNotEquals_ev_bool_CAxisAlignedBox(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX1 = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)rhs;
					return objXXXX != objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Spatial_Math_CAxisAlignedBox_BOX_NULL()
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = EarthView::World::Spatial::Math::CAxisAlignedBox::BOX_NULL;
					EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Spatial_Math_CAxisAlignedBox_BOX_INFINITE()
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = EarthView::World::Spatial::Math::CAxisAlignedBox::BOX_INFINITE;
					EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
		}
	}
}
