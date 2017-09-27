/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/convexbody.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConvexBody_PolygonList_push_back_void_CPolygon3D(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CPolygon3D*& ref_t )
			{
				EarthView::World::Graphic::CConvexBody::PolygonList* ptrNativeObject = (EarthView::World::Graphic::CConvexBody::PolygonList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConvexBody_PolygonList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConvexBody::PolygonList* ptrNativeObject = (EarthView::World::Graphic::CConvexBody::PolygonList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Math::CPolygon3D*  _stdcall EarthView_World_Graphic_CConvexBody_PolygonList_front_CPolygon3D(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConvexBody::PolygonList* ptrNativeObject = (EarthView::World::Graphic::CConvexBody::PolygonList*) pObjectXXXX;
				EarthView::World::Spatial::Math::CPolygon3D* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Math::CPolygon3D*  _stdcall EarthView_World_Graphic_CConvexBody_PolygonList_back_CPolygon3D(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConvexBody::PolygonList* ptrNativeObject = (EarthView::World::Graphic::CConvexBody::PolygonList*) pObjectXXXX;
				EarthView::World::Spatial::Math::CPolygon3D* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConvexBody_PolygonList_swap_void_PolygonList(void *pObjectXXXX, _inout void* rhs )
			{
				EarthView::World::Graphic::CConvexBody::PolygonList* ptrNativeObject = (EarthView::World::Graphic::CConvexBody::PolygonList*) pObjectXXXX;
				ptrNativeObject->swap(*(EarthView::World::Graphic::CConvexBody::PolygonList*)rhs);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConvexBody_PolygonList_insert_void_ev_uint32_CPolygon3D(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Spatial::Math::CPolygon3D*& ref_t )
			{
				EarthView::World::Graphic::CConvexBody::PolygonList* ptrNativeObject = (EarthView::World::Graphic::CConvexBody::PolygonList*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConvexBody_PolygonList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CConvexBody::PolygonList* ptrNativeObject = (EarthView::World::Graphic::CConvexBody::PolygonList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CConvexBody_PolygonList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CConvexBody::PolygonList* ptrNativeObject = (EarthView::World::Graphic::CConvexBody::PolygonList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Math::CPolygon3D*  _stdcall EarthView_World_Graphic_CConvexBody_PolygonList_OperatorIndex_CPolygon3D_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CConvexBody::PolygonList& objYYYY = *(EarthView::World::Graphic::CConvexBody::PolygonList*) pObjXXXX;
				EarthView::World::Spatial::Math::CPolygon3D* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Math::CPolygon3D*  _stdcall EarthView_World_Graphic_CConvexBody_PolygonList_at_CPolygon3D_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CConvexBody::PolygonList* ptrNativeObject = (EarthView::World::Graphic::CConvexBody::PolygonList*) pObjectXXXX;
				EarthView::World::Spatial::Math::CPolygon3D* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CConvexBody_PolygonList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CConvexBody::PolygonList* ptrNativeObject = (EarthView::World::Graphic::CConvexBody::PolygonList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConvexBody_PolygonList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CConvexBody::PolygonList* ptrNativeObject = (EarthView::World::Graphic::CConvexBody::PolygonList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConvexBody_PolygonList_reserve_void_ev_size_t(void *pObjectXXXX, _inout ev_uint64  count )
			{
				EarthView::World::Graphic::CConvexBody::PolygonList* ptrNativeObject = (EarthView::World::Graphic::CConvexBody::PolygonList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConvexBody_PolygonList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConvexBody::PolygonList* ptrNativeObject = (EarthView::World::Graphic::CConvexBody::PolygonList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConvexBody_define_void_CFrustum(void *pObjectXXXX, _in const void* frustum )
			{
				EarthView::World::Graphic::CConvexBody* ptrNativeObject = (EarthView::World::Graphic::CConvexBody*) pObjectXXXX;
				ptrNativeObject->define(*(EarthView::World::Graphic::CFrustum*)frustum);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConvexBody_define_void_CAxisAlignedBox(void *pObjectXXXX, _in const void* aab )
			{
				EarthView::World::Graphic::CConvexBody* ptrNativeObject = (EarthView::World::Graphic::CConvexBody*) pObjectXXXX;
				ptrNativeObject->define(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)aab);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConvexBody_clip_void_CFrustum(void *pObjectXXXX, _in const void* frustum )
			{
				EarthView::World::Graphic::CConvexBody* ptrNativeObject = (EarthView::World::Graphic::CConvexBody*) pObjectXXXX;
				ptrNativeObject->clip(*(EarthView::World::Graphic::CFrustum*)frustum);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConvexBody_clip_void_CAxisAlignedBox(void *pObjectXXXX, _in const void* aab )
			{
				EarthView::World::Graphic::CConvexBody* ptrNativeObject = (EarthView::World::Graphic::CConvexBody*) pObjectXXXX;
				ptrNativeObject->clip(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)aab);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConvexBody_clip_void_CConvexBody(void *pObjectXXXX, _in const void* body )
			{
				EarthView::World::Graphic::CConvexBody* ptrNativeObject = (EarthView::World::Graphic::CConvexBody*) pObjectXXXX;
				ptrNativeObject->clip(*(EarthView::World::Graphic::CConvexBody*)body);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConvexBody_clip_void_CPlane(void *pObjectXXXX, _in const void* pl )
			{
				EarthView::World::Graphic::CConvexBody* ptrNativeObject = (EarthView::World::Graphic::CConvexBody*) pObjectXXXX;
				ptrNativeObject->clip(*(EarthView::World::Spatial::Math::CPlane*)pl);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConvexBody_clip_void_CPlane_ev_bool(void *pObjectXXXX, _in const void* pl, _in ev_bool keepNegative )
			{
				EarthView::World::Graphic::CConvexBody* ptrNativeObject = (EarthView::World::Graphic::CConvexBody*) pObjectXXXX;
				ptrNativeObject->clip(*(EarthView::World::Spatial::Math::CPlane*)pl, keepNegative);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConvexBody_extend_void_CVector3(void *pObjectXXXX, _in const void* pt )
			{
				EarthView::World::Graphic::CConvexBody* ptrNativeObject = (EarthView::World::Graphic::CConvexBody*) pObjectXXXX;
				ptrNativeObject->extend(*(EarthView::World::Spatial::Math::CVector3*)pt);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConvexBody_reset_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConvexBody* ptrNativeObject = (EarthView::World::Graphic::CConvexBody*) pObjectXXXX;
				ptrNativeObject->reset();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CConvexBody_getPolygonCount_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CConvexBody* ptrNativeObject = (EarthView::World::Graphic::CConvexBody*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getPolygonCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CConvexBody_getVertexCount_ev_size_t_ev_size_t(void *pObjectXXXX, _in ev_uint64  poly )
			{
				const EarthView::World::Graphic::CConvexBody* ptrNativeObject = (EarthView::World::Graphic::CConvexBody*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getVertexCount(poly);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CConvexBody_getPolygon_CPolygon3D_ev_size_t(void *pObjectXXXX, _in ev_uint64  poly )
			{
				const EarthView::World::Graphic::CConvexBody* ptrNativeObject = (EarthView::World::Graphic::CConvexBody*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CPolygon3D& objXXXX = ptrNativeObject->getPolygon(poly);
				const EarthView::World::Spatial::Math::CPolygon3D *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CConvexBody_getVertex_CVector3_ev_size_t_ev_size_t(void *pObjectXXXX, _in ev_uint64  poly, _in ev_uint64  vertex )
			{
				const EarthView::World::Graphic::CConvexBody* ptrNativeObject = (EarthView::World::Graphic::CConvexBody*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getVertex(poly, vertex);
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CConvexBody_getNormal_CVector3_ev_size_t(void *pObjectXXXX, _in ev_uint64  poly )
			{
				EarthView::World::Graphic::CConvexBody* ptrNativeObject = (EarthView::World::Graphic::CConvexBody*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getNormal(poly);
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CConvexBody_getAABB_CAxisAlignedBox(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CConvexBody* ptrNativeObject = (EarthView::World::Graphic::CConvexBody*) pObjectXXXX;
				EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->getAABB();
				EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CConvexBody_hasClosedHull_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CConvexBody* ptrNativeObject = (EarthView::World::Graphic::CConvexBody*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasClosedHull();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConvexBody_mergePolygons_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConvexBody* ptrNativeObject = (EarthView::World::Graphic::CConvexBody*) pObjectXXXX;
				ptrNativeObject->mergePolygons();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CConvexBody_OperatorEquals_ev_bool_CConvexBody(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Graphic::CConvexBody& objXXXX = *(EarthView::World::Graphic::CConvexBody*) pObjXXXX;
				const EarthView::World::Graphic::CConvexBody& objXXXX1 = *(EarthView::World::Graphic::CConvexBody*)rhs;
				return objXXXX == objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CConvexBody_OperatorNotEquals_ev_bool_CConvexBody(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Graphic::CConvexBody& objXXXX = *(EarthView::World::Graphic::CConvexBody*) pObjXXXX;
				const EarthView::World::Graphic::CConvexBody& objXXXX1 = *(EarthView::World::Graphic::CConvexBody*)rhs;
				return objXXXX != objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConvexBody_logInfo_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CConvexBody* ptrNativeObject = (EarthView::World::Graphic::CConvexBody*) pObjectXXXX;
				ptrNativeObject->logInfo();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConvexBody__initialisePool_void( )
			{
				EarthView::World::Graphic::CConvexBody::_initialisePool();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConvexBody__destroyPool_void( )
			{
				EarthView::World::Graphic::CConvexBody::_destroyPool();
			}
		}
	}
}
