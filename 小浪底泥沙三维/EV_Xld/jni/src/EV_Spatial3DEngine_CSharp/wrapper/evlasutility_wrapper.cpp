/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/evlasutility.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_geoPosition( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->geoPosition;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_geoPosition( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)pObjectXXXX)->geoPosition = *(EarthView::World::Spatial::Math::CVector3*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_elevation( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->elevation;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_elevation( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)pObjectXXXX)->elevation = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall Get_EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_classification( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*) pObjectXXXX;
					ev_uint8 objXXXX = ptrNativeObject->classification;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_classification( void *pObjectXXXX, ev_uint8  value )
				{
					((EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)pObjectXXXX)->classification = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_intensity( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*) pObjectXXXX;
					ev_uint16 objXXXX = ptrNativeObject->intensity;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_intensity( void *pObjectXXXX, ev_uint16  value )
				{
					((EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)pObjectXXXX)->intensity = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_returnNumber( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*) pObjectXXXX;
					ev_uint16 objXXXX = ptrNativeObject->returnNumber;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_returnNumber( void *pObjectXXXX, ev_uint16  value )
				{
					((EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)pObjectXXXX)->returnNumber = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_color( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*) pObjectXXXX;
					EarthView::World::Graphic::CColourValue &objXXXX = ptrNativeObject->color;
					EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_color( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)pObjectXXXX)->color = *(EarthView::World::Graphic::CColourValue*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_OperatorLessThan_ev_bool_CLasQueryResultEntry(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry& objXXXX = *(EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*) pObjXXXX;
					const EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry& objXXXX1 = *(EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)rhs;
					return objXXXX < objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_OperatorGreaterThan_ev_bool_CLasQueryResultEntry(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry& objXXXX = *(EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*) pObjXXXX;
					const EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry& objXXXX1 = *(EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)rhs;
					return objXXXX > objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResult_push_back_void_CLasQueryResultEntry(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResult_push_front_void_CLasQueryResultEntry(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjectXXXX;
					ptrNativeObject->push_front(*(EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResult_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResult_pop_front_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjectXXXX;
					ptrNativeObject->pop_front();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResult_front_CLasQueryResultEntry(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResult_back_CLasQueryResultEntry(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResult_at_CLasQueryResultEntry_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry& objXXXX = ptrNativeObject->at(pos);
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResult_insert_void_ev_uint32_CLasQueryResultEntry(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResult_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResult_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CLasQueryResult* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResult_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CLasQueryResult* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResult_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResult_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjectXXXX;
					ptrNativeObject->clear();
				}
			}
		}
	}
}
