/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/edgelistbuilder.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall Get_EarthView_World_Graphic_CEdgeData_CTriangle_indexSet( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::CTriangle* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::CTriangle*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->indexSet;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CEdgeData_CTriangle_indexSet( void *pObjectXXXX, ev_uint64  value )
			{
				((EarthView::World::Graphic::CEdgeData::CTriangle*)pObjectXXXX)->indexSet = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall Get_EarthView_World_Graphic_CEdgeData_CTriangle_vertexSet( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::CTriangle* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::CTriangle*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->vertexSet;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CEdgeData_CTriangle_vertexSet( void *pObjectXXXX, ev_uint64  value )
			{
				((EarthView::World::Graphic::CEdgeData::CTriangle*)pObjectXXXX)->vertexSet = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64*  _stdcall Get_EarthView_World_Graphic_CEdgeData_CTriangle_vertIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::CTriangle* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::CTriangle*) pObjectXXXX;
				ev_uint64 *objXXXX = ptrNativeObject->vertIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CEdgeData_CTriangle_vertIndex( void *pObjectXXXX, ev_uint64*  value )
			{
				memcpy(((EarthView::World::Graphic::CEdgeData::CTriangle*)pObjectXXXX)->vertIndex, value, sizeof((EarthView::World::Graphic::CEdgeData::CTriangle*)pObjectXXXX)->vertIndex);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64*  _stdcall Get_EarthView_World_Graphic_CEdgeData_CTriangle_sharedVertIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::CTriangle* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::CTriangle*) pObjectXXXX;
				ev_uint64 *objXXXX = ptrNativeObject->sharedVertIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CEdgeData_CTriangle_sharedVertIndex( void *pObjectXXXX, ev_uint64*  value )
			{
				memcpy(((EarthView::World::Graphic::CEdgeData::CTriangle*)pObjectXXXX)->sharedVertIndex, value, sizeof((EarthView::World::Graphic::CEdgeData::CTriangle*)pObjectXXXX)->sharedVertIndex);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64*  _stdcall Get_EarthView_World_Graphic_CEdgeData_CEdge_triIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::CEdge* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::CEdge*) pObjectXXXX;
				ev_uint64 *objXXXX = ptrNativeObject->triIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CEdgeData_CEdge_triIndex( void *pObjectXXXX, ev_uint64*  value )
			{
				memcpy(((EarthView::World::Graphic::CEdgeData::CEdge*)pObjectXXXX)->triIndex, value, sizeof((EarthView::World::Graphic::CEdgeData::CEdge*)pObjectXXXX)->triIndex);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64*  _stdcall Get_EarthView_World_Graphic_CEdgeData_CEdge_vertIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::CEdge* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::CEdge*) pObjectXXXX;
				ev_uint64 *objXXXX = ptrNativeObject->vertIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CEdgeData_CEdge_vertIndex( void *pObjectXXXX, ev_uint64*  value )
			{
				memcpy(((EarthView::World::Graphic::CEdgeData::CEdge*)pObjectXXXX)->vertIndex, value, sizeof((EarthView::World::Graphic::CEdgeData::CEdge*)pObjectXXXX)->vertIndex);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64*  _stdcall Get_EarthView_World_Graphic_CEdgeData_CEdge_sharedVertIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::CEdge* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::CEdge*) pObjectXXXX;
				ev_uint64 *objXXXX = ptrNativeObject->sharedVertIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CEdgeData_CEdge_sharedVertIndex( void *pObjectXXXX, ev_uint64*  value )
			{
				memcpy(((EarthView::World::Graphic::CEdgeData::CEdge*)pObjectXXXX)->sharedVertIndex, value, sizeof((EarthView::World::Graphic::CEdgeData::CEdge*)pObjectXXXX)->sharedVertIndex);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CEdgeData_CEdge_degenerate( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::CEdge* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::CEdge*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->degenerate;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CEdgeData_CEdge_degenerate( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CEdgeData::CEdge*)pObjectXXXX)->degenerate = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_TriangleFaceNormalList_push_back_void_CVector4(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Spatial::Math::CVector4*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_TriangleFaceNormalList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CEdgeData_TriangleFaceNormalList_front_CVector4(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector4& objXXXX = ptrNativeObject->front();
				EarthView::World::Spatial::Math::CVector4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CEdgeData_TriangleFaceNormalList_back_CVector4(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector4& objXXXX = ptrNativeObject->back();
				EarthView::World::Spatial::Math::CVector4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_TriangleFaceNormalList_swap_void_TriangleFaceNormalList(void *pObjectXXXX, _inout void* rhs )
			{
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjectXXXX;
				ptrNativeObject->swap(*(EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*)rhs);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_TriangleFaceNormalList_insert_void_ev_uint32_CVector4(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Spatial::Math::CVector4*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_TriangleFaceNormalList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CEdgeData_TriangleFaceNormalList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CEdgeData_TriangleFaceNormalList_OperatorIndex_CVector4_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList& objYYYY = *(EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector4& objXXXX = objYYYY[n];
				EarthView::World::Spatial::Math::CVector4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CEdgeData_TriangleFaceNormalList_at_CVector4_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector4& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Spatial::Math::CVector4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CEdgeData_TriangleFaceNormalList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_TriangleFaceNormalList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_TriangleFaceNormalList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_TriangleFaceNormalList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_TriangleLightFacingList_push_back_void_ev_char(void *pObjectXXXX, _in ev_char& t )
			{
				EarthView::World::Graphic::CEdgeData::TriangleLightFacingList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_TriangleLightFacingList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::TriangleLightFacingList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  ev_char&  _stdcall EarthView_World_Graphic_CEdgeData_TriangleLightFacingList_front_ev_char(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::TriangleLightFacingList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) pObjectXXXX;
				ev_char& objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_char&  _stdcall EarthView_World_Graphic_CEdgeData_TriangleLightFacingList_back_ev_char(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::TriangleLightFacingList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) pObjectXXXX;
				ev_char& objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_TriangleLightFacingList_insert_void_ev_uint32_ev_char(void *pObjectXXXX, _in ev_uint32 pos, _in ev_char& t )
			{
				EarthView::World::Graphic::CEdgeData::TriangleLightFacingList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_TriangleLightFacingList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CEdgeData::TriangleLightFacingList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CEdgeData_TriangleLightFacingList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CEdgeData::TriangleLightFacingList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_char&  _stdcall EarthView_World_Graphic_CEdgeData_TriangleLightFacingList_OperatorIndex_ev_char_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CEdgeData::TriangleLightFacingList& objYYYY = *(EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) pObjXXXX;
				ev_char& objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_char&  _stdcall EarthView_World_Graphic_CEdgeData_TriangleLightFacingList_at_ev_char_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CEdgeData::TriangleLightFacingList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) pObjectXXXX;
				ev_char& objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CEdgeData_TriangleLightFacingList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CEdgeData::TriangleLightFacingList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_TriangleLightFacingList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CEdgeData::TriangleLightFacingList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_TriangleLightFacingList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CEdgeData::TriangleLightFacingList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_TriangleLightFacingList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::TriangleLightFacingList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_TriangleList_push_back_void_CTriangle(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CEdgeData::TriangleList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CEdgeData::CTriangle*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_TriangleList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::TriangleList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CEdgeData_TriangleList_front_CTriangle(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::TriangleList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleList*) pObjectXXXX;
				EarthView::World::Graphic::CEdgeData::CTriangle& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CEdgeData::CTriangle *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CEdgeData_TriangleList_back_CTriangle(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::TriangleList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleList*) pObjectXXXX;
				EarthView::World::Graphic::CEdgeData::CTriangle& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CEdgeData::CTriangle *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_TriangleList_swap_void_TriangleList(void *pObjectXXXX, _inout void* rhs )
			{
				EarthView::World::Graphic::CEdgeData::TriangleList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleList*) pObjectXXXX;
				ptrNativeObject->swap(*(EarthView::World::Graphic::CEdgeData::TriangleList*)rhs);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_TriangleList_insert_void_ev_uint32_CTriangle(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CEdgeData::TriangleList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CEdgeData::CTriangle*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_TriangleList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CEdgeData::TriangleList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CEdgeData_TriangleList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CEdgeData::TriangleList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CEdgeData_TriangleList_OperatorIndex_CTriangle_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CEdgeData::TriangleList& objYYYY = *(EarthView::World::Graphic::CEdgeData::TriangleList*) pObjXXXX;
				EarthView::World::Graphic::CEdgeData::CTriangle& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CEdgeData::CTriangle *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CEdgeData_TriangleList_at_CTriangle_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CEdgeData::TriangleList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleList*) pObjectXXXX;
				EarthView::World::Graphic::CEdgeData::CTriangle& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CEdgeData::CTriangle *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CEdgeData_TriangleList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CEdgeData::TriangleList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_TriangleList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CEdgeData::TriangleList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_TriangleList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CEdgeData::TriangleList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_TriangleList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::TriangleList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::TriangleList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_EdgeList_push_back_void_CEdge(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CEdgeData::EdgeList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CEdgeData::CEdge*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_EdgeList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::EdgeList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CEdgeData_EdgeList_front_CEdge(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::EdgeList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeList*) pObjectXXXX;
				EarthView::World::Graphic::CEdgeData::CEdge& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CEdgeData::CEdge *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CEdgeData_EdgeList_back_CEdge(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::EdgeList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeList*) pObjectXXXX;
				EarthView::World::Graphic::CEdgeData::CEdge& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CEdgeData::CEdge *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_EdgeList_insert_void_ev_uint32_CEdge(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CEdgeData::EdgeList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CEdgeData::CEdge*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_EdgeList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CEdgeData::EdgeList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CEdgeData_EdgeList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CEdgeData::EdgeList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CEdgeData_EdgeList_OperatorIndex_CEdge_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CEdgeData::EdgeList& objYYYY = *(EarthView::World::Graphic::CEdgeData::EdgeList*) pObjXXXX;
				EarthView::World::Graphic::CEdgeData::CEdge& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CEdgeData::CEdge *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CEdgeData_EdgeList_at_CEdge_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CEdgeData::EdgeList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeList*) pObjectXXXX;
				EarthView::World::Graphic::CEdgeData::CEdge& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CEdgeData::CEdge *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CEdgeData_EdgeList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CEdgeData::EdgeList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_EdgeList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CEdgeData::EdgeList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_EdgeList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CEdgeData::EdgeList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_EdgeList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::EdgeList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CEdgeData_EdgeGroup_vertexSet( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroup* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeGroup*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->vertexSet;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CEdgeData_EdgeGroup_vertexSet( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CEdgeData::EdgeGroup*)pObjectXXXX)->vertexSet = value;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CVertexData*  _stdcall Get_EarthView_World_Graphic_CEdgeData_EdgeGroup_vertexData( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroup* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeGroup*) pObjectXXXX;
				const EarthView::World::Graphic::CVertexData* objXXXX = ptrNativeObject->vertexData;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CEdgeData_EdgeGroup_vertexData( void *pObjectXXXX, const EarthView::World::Graphic::CVertexData*  value )
			{
				((EarthView::World::Graphic::CEdgeData::EdgeGroup*)pObjectXXXX)->vertexData = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CEdgeData_EdgeGroup_triStart( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroup* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeGroup*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->triStart;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CEdgeData_EdgeGroup_triStart( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CEdgeData::EdgeGroup*)pObjectXXXX)->triStart = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CEdgeData_EdgeGroup_triCount( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroup* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeGroup*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->triCount;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CEdgeData_EdgeGroup_triCount( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CEdgeData::EdgeGroup*)pObjectXXXX)->triCount = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CEdgeData_EdgeGroup_edges( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroup* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeGroup*) pObjectXXXX;
				EarthView::World::Graphic::CEdgeData::EdgeList &objXXXX = ptrNativeObject->edges;
				EarthView::World::Graphic::CEdgeData::EdgeList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CEdgeData_EdgeGroup_edges( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CEdgeData::EdgeGroup*)pObjectXXXX)->edges = *(EarthView::World::Graphic::CEdgeData::EdgeList*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CEdgeData_EdgeGroup_localMatrix( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroup* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeGroup*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 &objXXXX = ptrNativeObject->localMatrix;
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CEdgeData_EdgeGroup_localMatrix( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CEdgeData::EdgeGroup*)pObjectXXXX)->localMatrix = *(EarthView::World::Spatial::Math::CMatrix4*)value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_EdgeGroupList_push_back_void_EdgeGroup(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroupList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeGroupList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CEdgeData::EdgeGroup*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_EdgeGroupList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroupList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeGroupList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CEdgeData_EdgeGroupList_front_EdgeGroup(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroupList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeGroupList*) pObjectXXXX;
				EarthView::World::Graphic::CEdgeData::EdgeGroup& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CEdgeData::EdgeGroup *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CEdgeData_EdgeGroupList_back_EdgeGroup(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroupList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeGroupList*) pObjectXXXX;
				EarthView::World::Graphic::CEdgeData::EdgeGroup& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CEdgeData::EdgeGroup *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_EdgeGroupList_insert_void_ev_uint32_EdgeGroup(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroupList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeGroupList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CEdgeData::EdgeGroup*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_EdgeGroupList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroupList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeGroupList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CEdgeData_EdgeGroupList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CEdgeData::EdgeGroupList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeGroupList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CEdgeData_EdgeGroupList_OperatorIndex_EdgeGroup_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroupList& objYYYY = *(EarthView::World::Graphic::CEdgeData::EdgeGroupList*) pObjXXXX;
				EarthView::World::Graphic::CEdgeData::EdgeGroup& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CEdgeData::EdgeGroup *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CEdgeData_EdgeGroupList_at_EdgeGroup_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroupList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeGroupList*) pObjectXXXX;
				EarthView::World::Graphic::CEdgeData::EdgeGroup& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CEdgeData::EdgeGroup *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CEdgeData_EdgeGroupList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CEdgeData::EdgeGroupList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeGroupList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_EdgeGroupList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroupList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeGroupList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_EdgeGroupList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroupList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeGroupList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_EdgeGroupList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData::EdgeGroupList* ptrNativeObject = (EarthView::World::Graphic::CEdgeData::EdgeGroupList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CEdgeData_triangles( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData* ptrNativeObject = (EarthView::World::Graphic::CEdgeData*) pObjectXXXX;
				EarthView::World::Graphic::CEdgeData::TriangleList &objXXXX = ptrNativeObject->triangles;
				EarthView::World::Graphic::CEdgeData::TriangleList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CEdgeData_triangles( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CEdgeData*)pObjectXXXX)->triangles = *(EarthView::World::Graphic::CEdgeData::TriangleList*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CEdgeData_triangleFaceNormals( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData* ptrNativeObject = (EarthView::World::Graphic::CEdgeData*) pObjectXXXX;
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList &objXXXX = ptrNativeObject->triangleFaceNormals;
				EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CEdgeData_triangleFaceNormals( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CEdgeData*)pObjectXXXX)->triangleFaceNormals = *(EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CEdgeData_triangleLightFacings( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData* ptrNativeObject = (EarthView::World::Graphic::CEdgeData*) pObjectXXXX;
				EarthView::World::Graphic::CEdgeData::TriangleLightFacingList &objXXXX = ptrNativeObject->triangleLightFacings;
				EarthView::World::Graphic::CEdgeData::TriangleLightFacingList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CEdgeData_triangleLightFacings( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CEdgeData*)pObjectXXXX)->triangleLightFacings = *(EarthView::World::Graphic::CEdgeData::TriangleLightFacingList*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CEdgeData_edgeGroups( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData* ptrNativeObject = (EarthView::World::Graphic::CEdgeData*) pObjectXXXX;
				EarthView::World::Graphic::CEdgeData::EdgeGroupList &objXXXX = ptrNativeObject->edgeGroups;
				EarthView::World::Graphic::CEdgeData::EdgeGroupList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CEdgeData_edgeGroups( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CEdgeData*)pObjectXXXX)->edgeGroups = *(EarthView::World::Graphic::CEdgeData::EdgeGroupList*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CEdgeData_isClosed( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeData* ptrNativeObject = (EarthView::World::Graphic::CEdgeData*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isClosed;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CEdgeData_isClosed( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CEdgeData*)pObjectXXXX)->isClosed = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_updateTriangleLightFacing_void_CVector4(void *pObjectXXXX, _in const void* lightPos )
			{
				EarthView::World::Graphic::CEdgeData* ptrNativeObject = (EarthView::World::Graphic::CEdgeData*) pObjectXXXX;
				ptrNativeObject->updateTriangleLightFacing(*(EarthView::World::Spatial::Math::CVector4*)lightPos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_updateFaceNormals_void_ev_size_t_CHardwareVertexBufferSharedPtr(void *pObjectXXXX, _in ev_uint64  vertexSet, _in const void* positionBuffer )
			{
				EarthView::World::Graphic::CEdgeData* ptrNativeObject = (EarthView::World::Graphic::CEdgeData*) pObjectXXXX;
				ptrNativeObject->updateFaceNormals(vertexSet, *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)positionBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeData_log_void_CLogger(void *pObjectXXXX, _in EarthView::World::Core::CLogger* ptLog )
			{
				EarthView::World::Graphic::CEdgeData* ptrNativeObject = (EarthView::World::Graphic::CEdgeData*) pObjectXXXX;
				ptrNativeObject->log(ptLog);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeListBuilder_addVertexData_void_CVertexData_CMatrix4(void *pObjectXXXX, _in const EarthView::World::Graphic::CVertexData* ref_vertexData, _in const void* mat )
			{
				EarthView::World::Graphic::CEdgeListBuilder* ptrNativeObject = (EarthView::World::Graphic::CEdgeListBuilder*) pObjectXXXX;
				ptrNativeObject->addVertexData(ref_vertexData, *(EarthView::World::Spatial::Math::CMatrix4*)mat);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeListBuilder_addIndexData_void_CIndexData_ev_size_t_OperationType(void *pObjectXXXX, _in const EarthView::World::Graphic::CIndexData* ref_indexData, _in ev_uint64  vertexSet, _in int opType )
			{
				EarthView::World::Graphic::CEdgeListBuilder* ptrNativeObject = (EarthView::World::Graphic::CEdgeListBuilder*) pObjectXXXX;
				ptrNativeObject->addIndexData(ref_indexData, vertexSet, (EarthView::World::Graphic::CRenderOperation::OperationType)opType);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeListBuilder_addIndexData_void_CIndexData_ev_size_t(void *pObjectXXXX, _in const EarthView::World::Graphic::CIndexData* ref_indexData, _in ev_uint64  vertexSet )
			{
				EarthView::World::Graphic::CEdgeListBuilder* ptrNativeObject = (EarthView::World::Graphic::CEdgeListBuilder*) pObjectXXXX;
				ptrNativeObject->addIndexData(ref_indexData, vertexSet);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeListBuilder_addIndexData_void_CIndexData(void *pObjectXXXX, _in const EarthView::World::Graphic::CIndexData* ref_indexData )
			{
				EarthView::World::Graphic::CEdgeListBuilder* ptrNativeObject = (EarthView::World::Graphic::CEdgeListBuilder*) pObjectXXXX;
				ptrNativeObject->addIndexData(ref_indexData);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CEdgeData*  _stdcall EarthView_World_Graphic_CEdgeListBuilder_build_CEdgeData(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CEdgeListBuilder* ptrNativeObject = (EarthView::World::Graphic::CEdgeListBuilder*) pObjectXXXX;
				EarthView::World::Graphic::CEdgeData* objXXXX = ptrNativeObject->build();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CEdgeListBuilder_log_void_CLogger(void *pObjectXXXX, _in EarthView::World::Core::CLogger* ptLog )
			{
				EarthView::World::Graphic::CEdgeListBuilder* ptrNativeObject = (EarthView::World::Graphic::CEdgeListBuilder*) pObjectXXXX;
				ptrNativeObject->log(ptLog);
			}
		}
	}
}
