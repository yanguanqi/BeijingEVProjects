/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/polygon3d.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_push_void_CVector3_CVector3(void *pObjectXXXX, _in const void* key, _in void* val )
				{
					EarthView::World::Spatial::Math::CPolygon3D::EdgeMap* ptrNativeObject = (EarthView::World::Spatial::Math::CPolygon3D::EdgeMap*) pObjectXXXX;
					ptrNativeObject->push(*(EarthView::World::Spatial::Math::CVector3*)key, *(EarthView::World::Spatial::Math::CVector3*)val);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_exist_ev_bool_CVector3(void *pObjectXXXX, _in const void* key )
				{
					EarthView::World::Spatial::Math::CPolygon3D::EdgeMap* ptrNativeObject = (EarthView::World::Spatial::Math::CPolygon3D::EdgeMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->exist(*(EarthView::World::Spatial::Math::CVector3*)key);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_erase_void_CVector3(void *pObjectXXXX, _in const void* key )
				{
					EarthView::World::Spatial::Math::CPolygon3D::EdgeMap* ptrNativeObject = (EarthView::World::Spatial::Math::CPolygon3D::EdgeMap*) pObjectXXXX;
					ptrNativeObject->erase(*(EarthView::World::Spatial::Math::CVector3*)key);
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CPolygon3D::EdgeMap* ptrNativeObject = (EarthView::World::Spatial::Math::CPolygon3D::EdgeMap*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_count_ev_size_t_CVector3(void *pObjectXXXX, _in const void* key )
				{
					EarthView::World::Spatial::Math::CPolygon3D::EdgeMap* ptrNativeObject = (EarthView::World::Spatial::Math::CPolygon3D::EdgeMap*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->count(*(EarthView::World::Spatial::Math::CVector3*)key);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_get_CVector3_CVector3_ev_size_t(void *pObjectXXXX, _in const void* key, _in ev_uint64  index )
				{
					EarthView::World::Spatial::Math::CPolygon3D::EdgeMap* ptrNativeObject = (EarthView::World::Spatial::Math::CPolygon3D::EdgeMap*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->get(*(EarthView::World::Spatial::Math::CVector3*)key, index);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_erase_void_CVector3_ev_size_t(void *pObjectXXXX, _in const void* key, _in ev_uint64  index )
				{
					EarthView::World::Spatial::Math::CPolygon3D::EdgeMap* ptrNativeObject = (EarthView::World::Spatial::Math::CPolygon3D::EdgeMap*) pObjectXXXX;
					ptrNativeObject->erase(*(EarthView::World::Spatial::Math::CVector3*)key, index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CPolygon3D::EdgeMap* ptrNativeObject = (EarthView::World::Spatial::Math::CPolygon3D::EdgeMap*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CPolygon3D::EdgeMap* ptrNativeObject = (EarthView::World::Spatial::Math::CPolygon3D::EdgeMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial_Math_CPolygon3D_Edge_first( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CPolygon3D::Edge* ptrNativeObject = (EarthView::World::Spatial::Math::CPolygon3D::Edge*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->first;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Math_CPolygon3D_Edge_first( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial::Math::CPolygon3D::Edge*)pObjectXXXX)->first = *(EarthView::World::Spatial::Math::CVector3*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial_Math_CPolygon3D_Edge_second( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CPolygon3D::Edge* ptrNativeObject = (EarthView::World::Spatial::Math::CPolygon3D::Edge*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->second;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Math_CPolygon3D_Edge_second( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial::Math::CPolygon3D::Edge*)pObjectXXXX)->second = *(EarthView::World::Spatial::Math::CVector3*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CPolygon3D_Edge_OperatorAssign_Edge_Edge(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Spatial::Math::CPolygon3D::Edge& objXXXX = *((EarthView::World::Spatial::Math::CPolygon3D::Edge*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Math::CPolygon3D::Edge*)other;
					EarthView::World::Spatial::Math::CPolygon3D::Edge *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CPolygon3D_insertVertex_void_CVector3_ev_size_t(void *pObjectXXXX, _in const void* vdata, _in ev_uint64  vertexIndex )
				{
					EarthView::World::Spatial::Math::CPolygon3D* ptrNativeObject = (EarthView::World::Spatial::Math::CPolygon3D*) pObjectXXXX;
					ptrNativeObject->insertVertex(*(EarthView::World::Spatial::Math::CVector3*)vdata, vertexIndex);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CPolygon3D_insertVertex_void_CVector3(void *pObjectXXXX, _in const void* vdata )
				{
					EarthView::World::Spatial::Math::CPolygon3D* ptrNativeObject = (EarthView::World::Spatial::Math::CPolygon3D*) pObjectXXXX;
					ptrNativeObject->insertVertex(*(EarthView::World::Spatial::Math::CVector3*)vdata);
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_Math_CPolygon3D_getVertex_CVector3_ev_size_t(void *pObjectXXXX, _in ev_uint64  vertex )
				{
					const EarthView::World::Spatial::Math::CPolygon3D* ptrNativeObject = (EarthView::World::Spatial::Math::CPolygon3D*) pObjectXXXX;
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getVertex(vertex);
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CPolygon3D_setVertex_void_CVector3_ev_size_t(void *pObjectXXXX, _in const void* vdata, _in ev_uint64  vertexIndex )
				{
					EarthView::World::Spatial::Math::CPolygon3D* ptrNativeObject = (EarthView::World::Spatial::Math::CPolygon3D*) pObjectXXXX;
					ptrNativeObject->setVertex(*(EarthView::World::Spatial::Math::CVector3*)vdata, vertexIndex);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CPolygon3D_removeDuplicates_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CPolygon3D* ptrNativeObject = (EarthView::World::Spatial::Math::CPolygon3D*) pObjectXXXX;
					ptrNativeObject->removeDuplicates();
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial_Math_CPolygon3D_getVertexCount_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CPolygon3D* ptrNativeObject = (EarthView::World::Spatial::Math::CPolygon3D*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->getVertexCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_Math_CPolygon3D_getNormal_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Math::CPolygon3D* ptrNativeObject = (EarthView::World::Spatial::Math::CPolygon3D*) pObjectXXXX;
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getNormal();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CPolygon3D_deleteVertex_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  vertex )
				{
					EarthView::World::Spatial::Math::CPolygon3D* ptrNativeObject = (EarthView::World::Spatial::Math::CPolygon3D*) pObjectXXXX;
					ptrNativeObject->deleteVertex(vertex);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CPolygon3D_isPointInside_ev_bool_CVector3(void *pObjectXXXX, _in const void* point )
				{
					const EarthView::World::Spatial::Math::CPolygon3D* ptrNativeObject = (EarthView::World::Spatial::Math::CPolygon3D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isPointInside(*(EarthView::World::Spatial::Math::CVector3*)point);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CPolygon3D_storeEdges_void_EdgeMap(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CPolygon3D::EdgeMap* edgeMap )
				{
					const EarthView::World::Spatial::Math::CPolygon3D* ptrNativeObject = (EarthView::World::Spatial::Math::CPolygon3D*) pObjectXXXX;
					ptrNativeObject->storeEdges(edgeMap);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CPolygon3D_reset_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CPolygon3D* ptrNativeObject = (EarthView::World::Spatial::Math::CPolygon3D*) pObjectXXXX;
					ptrNativeObject->reset();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CPolygon3D_OperatorEquals_ev_bool_CPolygon3D(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial::Math::CPolygon3D& objXXXX = *(EarthView::World::Spatial::Math::CPolygon3D*) pObjXXXX;
					const EarthView::World::Spatial::Math::CPolygon3D& objXXXX1 = *(EarthView::World::Spatial::Math::CPolygon3D*)rhs;
					return objXXXX == objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CPolygon3D_OperatorNotEquals_ev_bool_CPolygon3D(void *pObjXXXX, _in void* rhs )
				{
					EarthView::World::Spatial::Math::CPolygon3D& objXXXX = *(EarthView::World::Spatial::Math::CPolygon3D*) pObjXXXX;
					EarthView::World::Spatial::Math::CPolygon3D& objXXXX1 = *(EarthView::World::Spatial::Math::CPolygon3D*)rhs;
					return objXXXX != objXXXX1;
				}
			}
		}
	}
}
