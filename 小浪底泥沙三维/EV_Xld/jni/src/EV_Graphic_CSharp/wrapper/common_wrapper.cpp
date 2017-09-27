/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/common.h"
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
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_LightList_dirtyHash_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::LightList* ptrNativeObject = (EarthView::World::Graphic::LightList*) pObjectXXXX;
				ptrNativeObject->dirtyHash();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_LightList_isHashDirty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::LightList* ptrNativeObject = (EarthView::World::Graphic::LightList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isHashDirty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_LightList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::LightList* ptrNativeObject = (EarthView::World::Graphic::LightList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_LightList_max_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::LightList* ptrNativeObject = (EarthView::World::Graphic::LightList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->max_size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_LightList_capacity_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::LightList* ptrNativeObject = (EarthView::World::Graphic::LightList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->capacity();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_LightList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::LightList* ptrNativeObject = (EarthView::World::Graphic::LightList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_LightList_reserve_void_ev_size_t(void *pObjectXXXX, _inout ev_uint64  t )
			{
				EarthView::World::Graphic::LightList* ptrNativeObject = (EarthView::World::Graphic::LightList*) pObjectXXXX;
				ptrNativeObject->reserve(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_LightList_push_back_void_CLight(void *pObjectXXXX, _in EarthView::World::Graphic::CLight*& ref_t )
			{
				EarthView::World::Graphic::LightList* ptrNativeObject = (EarthView::World::Graphic::LightList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_LightList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::LightList* ptrNativeObject = (EarthView::World::Graphic::LightList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_LightList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::LightList* ptrNativeObject = (EarthView::World::Graphic::LightList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_LightList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::LightList* ptrNativeObject = (EarthView::World::Graphic::LightList*) pObjectXXXX;
				ptrNativeObject->resize(n);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_LightList_resize_void_ev_size_t_CLight(void *pObjectXXXX, _in ev_uint64  n, _in EarthView::World::Graphic::CLight*& ref_t )
			{
				EarthView::World::Graphic::LightList* ptrNativeObject = (EarthView::World::Graphic::LightList*) pObjectXXXX;
				ptrNativeObject->resize(n, ref_t);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_LightList_OperatorEquals_ev_bool_LightList(void *pObjXXXX, _in const void* b )
			{
				EarthView::World::Graphic::LightList& objXXXX = *(EarthView::World::Graphic::LightList*) pObjXXXX;
				const EarthView::World::Graphic::LightList& objXXXX1 = *(EarthView::World::Graphic::LightList*)b;
				return objXXXX == objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_LightList_OperatorNotEquals_ev_bool_LightList(void *pObjXXXX, _in const void* b )
			{
				EarthView::World::Graphic::LightList& objXXXX = *(EarthView::World::Graphic::LightList*) pObjXXXX;
				const EarthView::World::Graphic::LightList& objXXXX1 = *(EarthView::World::Graphic::LightList*)b;
				return objXXXX != objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_LightList_OperatorLessThan_ev_bool_LightList(void *pObjXXXX, _in const void* b )
			{
				EarthView::World::Graphic::LightList& objXXXX = *(EarthView::World::Graphic::LightList*) pObjXXXX;
				const EarthView::World::Graphic::LightList& objXXXX1 = *(EarthView::World::Graphic::LightList*)b;
				return objXXXX < objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_LightList_OperatorGreaterThan_ev_bool_LightList(void *pObjXXXX, _in const void* b )
			{
				EarthView::World::Graphic::LightList& objXXXX = *(EarthView::World::Graphic::LightList*) pObjXXXX;
				const EarthView::World::Graphic::LightList& objXXXX1 = *(EarthView::World::Graphic::LightList*)b;
				return objXXXX > objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_LightList_swap_void_LightList(void *pObjectXXXX, _inout void* rhs )
			{
				EarthView::World::Graphic::LightList* ptrNativeObject = (EarthView::World::Graphic::LightList*) pObjectXXXX;
				ptrNativeObject->swap(*(EarthView::World::Graphic::LightList*)rhs);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_LightList_getHash_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::LightList* ptrNativeObject = (EarthView::World::Graphic::LightList*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getHash();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CLight*  _stdcall EarthView_World_Graphic_LightList_OperatorIndex_CLight_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::LightList& objYYYY = *(EarthView::World::Graphic::LightList*) pObjXXXX;
				EarthView::World::Graphic::CLight* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CLight*  _stdcall EarthView_World_Graphic_LightList_at_CLight_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::LightList* ptrNativeObject = (EarthView::World::Graphic::LightList*) pObjectXXXX;
				EarthView::World::Graphic::CLight* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CLight*  _stdcall EarthView_World_Graphic_LightList_front_CLight(void *pObjectXXXX )
			{
				EarthView::World::Graphic::LightList* ptrNativeObject = (EarthView::World::Graphic::LightList*) pObjectXXXX;
				EarthView::World::Graphic::CLight* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CLight*  _stdcall EarthView_World_Graphic_LightList_back_CLight(void *pObjectXXXX )
			{
				EarthView::World::Graphic::LightList* ptrNativeObject = (EarthView::World::Graphic::LightList*) pObjectXXXX;
				EarthView::World::Graphic::CLight* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_LightList_insert_void_ev_size_t_CLight(void *pObjectXXXX, _in ev_uint64  pos, _in EarthView::World::Graphic::CLight*& ref_l )
			{
				EarthView::World::Graphic::LightList* ptrNativeObject = (EarthView::World::Graphic::LightList*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_l);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_LightList_insert_void_ev_size_t_ev_size_t_CLight(void *pObjectXXXX, _in ev_uint64  pos, _in ev_uint64  count, _in EarthView::World::Graphic::CLight*& ref_l )
			{
				EarthView::World::Graphic::LightList* ptrNativeObject = (EarthView::World::Graphic::LightList*) pObjectXXXX;
				ptrNativeObject->insert(pos, count, ref_l);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_LightList_erase_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::LightList* ptrNativeObject = (EarthView::World::Graphic::LightList*) pObjectXXXX;
				ptrNativeObject->erase(pos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_LightList_erase_void_ev_size_t_ev_size_t(void *pObjectXXXX, _in ev_uint64  first, _in ev_uint64  last )
			{
				EarthView::World::Graphic::LightList* ptrNativeObject = (EarthView::World::Graphic::LightList*) pObjectXXXX;
				ptrNativeObject->erase(first, last);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_UnaryOptionList_add_ev_bool_EVString_ev_bool(void *pObjectXXXX, _in const char* key, _in ev_bool val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::UnaryOptionList* ptrNativeObject = (EarthView::World::Graphic::UnaryOptionList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->add(key1, val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_UnaryOptionList_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::UnaryOptionList* ptrNativeObject = (EarthView::World::Graphic::UnaryOptionList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_UnaryOptionList_OperatorIndex_ev_bool_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::UnaryOptionList& objYYYY = *(EarthView::World::Graphic::UnaryOptionList*) pObjXXXX;
				ev_bool objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_UnaryOptionList_get_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::UnaryOptionList* ptrNativeObject = (EarthView::World::Graphic::UnaryOptionList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_UnaryOptionList_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::UnaryOptionList* ptrNativeObject = (EarthView::World::Graphic::UnaryOptionList*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_UnaryOptionList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::UnaryOptionList* ptrNativeObject = (EarthView::World::Graphic::UnaryOptionList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_UnaryOptionList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::UnaryOptionList* ptrNativeObject = (EarthView::World::Graphic::UnaryOptionList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_UnaryOptionList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::UnaryOptionList* ptrNativeObject = (EarthView::World::Graphic::UnaryOptionList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Graphic_FloatRect_top( void *pObjectXXXX )
			{
				EarthView::World::Graphic::FloatRect* ptrNativeObject = (EarthView::World::Graphic::FloatRect*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->top;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_FloatRect_top( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Graphic::FloatRect*)pObjectXXXX)->top = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Graphic_FloatRect_right( void *pObjectXXXX )
			{
				EarthView::World::Graphic::FloatRect* ptrNativeObject = (EarthView::World::Graphic::FloatRect*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->right;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_FloatRect_right( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Graphic::FloatRect*)pObjectXXXX)->right = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Graphic_FloatRect_bottom( void *pObjectXXXX )
			{
				EarthView::World::Graphic::FloatRect* ptrNativeObject = (EarthView::World::Graphic::FloatRect*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->bottom;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_FloatRect_bottom( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Graphic::FloatRect*)pObjectXXXX)->bottom = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Graphic_FloatRect_left( void *pObjectXXXX )
			{
				EarthView::World::Graphic::FloatRect* ptrNativeObject = (EarthView::World::Graphic::FloatRect*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->left;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_FloatRect_left( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Graphic::FloatRect*)pObjectXXXX)->left = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_FloatRect_OperatorAssign_FloatRect_FloatRect(void *pObjXXXX, _in void* o )
			{
				EarthView::World::Graphic::FloatRect& objXXXX = *((EarthView::World::Graphic::FloatRect*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::FloatRect*)o;
				EarthView::World::Graphic::FloatRect *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Graphic_FloatRect_width_ev_real32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::FloatRect* ptrNativeObject = (EarthView::World::Graphic::FloatRect*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->width();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Graphic_FloatRect_height_ev_real32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::FloatRect* ptrNativeObject = (EarthView::World::Graphic::FloatRect*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->height();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_FloatRect_isNull_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::FloatRect* ptrNativeObject = (EarthView::World::Graphic::FloatRect*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isNull();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_FloatRect_setNull_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::FloatRect* ptrNativeObject = (EarthView::World::Graphic::FloatRect*) pObjectXXXX;
				ptrNativeObject->setNull();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_FloatRect_merge_FloatRect_FloatRect(void *pObjectXXXX, _in const void* rhs )
			{
				EarthView::World::Graphic::FloatRect* ptrNativeObject = (EarthView::World::Graphic::FloatRect*) pObjectXXXX;
				EarthView::World::Graphic::FloatRect& objXXXX = ptrNativeObject->merge(*(EarthView::World::Graphic::FloatRect*)rhs);
				EarthView::World::Graphic::FloatRect *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_FloatRect_intersect_FloatRect_FloatRect(void *pObjectXXXX, _in const void* rhs )
			{
				const EarthView::World::Graphic::FloatRect* ptrNativeObject = (EarthView::World::Graphic::FloatRect*) pObjectXXXX;
				EarthView::World::Graphic::FloatRect objXXXX = ptrNativeObject->intersect(*(EarthView::World::Graphic::FloatRect*)rhs);
				EarthView::World::Graphic::FloatRect *pXXXX = new EarthView::World::Graphic::FloatRect(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_RealRect_top( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RealRect* ptrNativeObject = (EarthView::World::Graphic::RealRect*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->top;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RealRect_top( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::RealRect*)pObjectXXXX)->top = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_RealRect_right( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RealRect* ptrNativeObject = (EarthView::World::Graphic::RealRect*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->right;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RealRect_right( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::RealRect*)pObjectXXXX)->right = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_RealRect_bottom( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RealRect* ptrNativeObject = (EarthView::World::Graphic::RealRect*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->bottom;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RealRect_bottom( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::RealRect*)pObjectXXXX)->bottom = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_RealRect_left( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RealRect* ptrNativeObject = (EarthView::World::Graphic::RealRect*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->left;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RealRect_left( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::RealRect*)pObjectXXXX)->left = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RealRect_OperatorAssign_RealRect_RealRect(void *pObjXXXX, _in void* o )
			{
				EarthView::World::Graphic::RealRect& objXXXX = *((EarthView::World::Graphic::RealRect*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::RealRect*)o;
				EarthView::World::Graphic::RealRect *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_RealRect_width_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::RealRect* ptrNativeObject = (EarthView::World::Graphic::RealRect*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->width();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_RealRect_height_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::RealRect* ptrNativeObject = (EarthView::World::Graphic::RealRect*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->height();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RealRect_isNull_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::RealRect* ptrNativeObject = (EarthView::World::Graphic::RealRect*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isNull();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RealRect_setNull_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::RealRect* ptrNativeObject = (EarthView::World::Graphic::RealRect*) pObjectXXXX;
				ptrNativeObject->setNull();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RealRect_merge_RealRect_RealRect(void *pObjectXXXX, _in const void* rhs )
			{
				EarthView::World::Graphic::RealRect* ptrNativeObject = (EarthView::World::Graphic::RealRect*) pObjectXXXX;
				EarthView::World::Graphic::RealRect& objXXXX = ptrNativeObject->merge(*(EarthView::World::Graphic::RealRect*)rhs);
				EarthView::World::Graphic::RealRect *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RealRect_intersect_RealRect_RealRect(void *pObjectXXXX, _in const void* rhs )
			{
				const EarthView::World::Graphic::RealRect* ptrNativeObject = (EarthView::World::Graphic::RealRect*) pObjectXXXX;
				EarthView::World::Graphic::RealRect objXXXX = ptrNativeObject->intersect(*(EarthView::World::Graphic::RealRect*)rhs);
				EarthView::World::Graphic::RealRect *pXXXX = new EarthView::World::Graphic::RealRect(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Graphic_Rect_top( void *pObjectXXXX )
			{
				EarthView::World::Graphic::Rect* ptrNativeObject = (EarthView::World::Graphic::Rect*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->top;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_Rect_top( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Graphic::Rect*)pObjectXXXX)->top = value;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Graphic_Rect_right( void *pObjectXXXX )
			{
				EarthView::World::Graphic::Rect* ptrNativeObject = (EarthView::World::Graphic::Rect*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->right;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_Rect_right( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Graphic::Rect*)pObjectXXXX)->right = value;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Graphic_Rect_bottom( void *pObjectXXXX )
			{
				EarthView::World::Graphic::Rect* ptrNativeObject = (EarthView::World::Graphic::Rect*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->bottom;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_Rect_bottom( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Graphic::Rect*)pObjectXXXX)->bottom = value;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Graphic_Rect_left( void *pObjectXXXX )
			{
				EarthView::World::Graphic::Rect* ptrNativeObject = (EarthView::World::Graphic::Rect*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->left;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_Rect_left( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Graphic::Rect*)pObjectXXXX)->left = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_Rect_OperatorAssign_Rect_Rect(void *pObjXXXX, _in void* o )
			{
				EarthView::World::Graphic::Rect& objXXXX = *((EarthView::World::Graphic::Rect*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::Rect*)o;
				EarthView::World::Graphic::Rect *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Graphic_Rect_width_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::Rect* ptrNativeObject = (EarthView::World::Graphic::Rect*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->width();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Graphic_Rect_height_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::Rect* ptrNativeObject = (EarthView::World::Graphic::Rect*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->height();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_Rect_isNull_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::Rect* ptrNativeObject = (EarthView::World::Graphic::Rect*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isNull();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_Rect_setNull_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::Rect* ptrNativeObject = (EarthView::World::Graphic::Rect*) pObjectXXXX;
				ptrNativeObject->setNull();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_Rect_merge_Rect_Rect(void *pObjectXXXX, _in const void* rhs )
			{
				EarthView::World::Graphic::Rect* ptrNativeObject = (EarthView::World::Graphic::Rect*) pObjectXXXX;
				EarthView::World::Graphic::Rect& objXXXX = ptrNativeObject->merge(*(EarthView::World::Graphic::Rect*)rhs);
				EarthView::World::Graphic::Rect *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_Rect_intersect_Rect_Rect(void *pObjectXXXX, _in const void* rhs )
			{
				const EarthView::World::Graphic::Rect* ptrNativeObject = (EarthView::World::Graphic::Rect*) pObjectXXXX;
				EarthView::World::Graphic::Rect objXXXX = ptrNativeObject->intersect(*(EarthView::World::Graphic::Rect*)rhs);
				EarthView::World::Graphic::Rect *pXXXX = new EarthView::World::Graphic::Rect(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_Box_top( void *pObjectXXXX )
			{
				EarthView::World::Graphic::Box* ptrNativeObject = (EarthView::World::Graphic::Box*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->top;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_Box_top( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::Box*)pObjectXXXX)->top = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_Box_right( void *pObjectXXXX )
			{
				EarthView::World::Graphic::Box* ptrNativeObject = (EarthView::World::Graphic::Box*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->right;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_Box_right( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::Box*)pObjectXXXX)->right = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_Box_bottom( void *pObjectXXXX )
			{
				EarthView::World::Graphic::Box* ptrNativeObject = (EarthView::World::Graphic::Box*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->bottom;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_Box_bottom( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::Box*)pObjectXXXX)->bottom = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_Box_front( void *pObjectXXXX )
			{
				EarthView::World::Graphic::Box* ptrNativeObject = (EarthView::World::Graphic::Box*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->front;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_Box_front( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::Box*)pObjectXXXX)->front = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_Box_back( void *pObjectXXXX )
			{
				EarthView::World::Graphic::Box* ptrNativeObject = (EarthView::World::Graphic::Box*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->back;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_Box_back( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::Box*)pObjectXXXX)->back = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_Box_left( void *pObjectXXXX )
			{
				EarthView::World::Graphic::Box* ptrNativeObject = (EarthView::World::Graphic::Box*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->left;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_Box_left( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::Box*)pObjectXXXX)->left = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_Box_contains_ev_bool_Box(void *pObjectXXXX, _in const void* def )
			{
				const EarthView::World::Graphic::Box* ptrNativeObject = (EarthView::World::Graphic::Box*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->contains(*(EarthView::World::Graphic::Box*)def);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_Box_getWidth_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::Box* ptrNativeObject = (EarthView::World::Graphic::Box*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_Box_getHeight_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::Box* ptrNativeObject = (EarthView::World::Graphic::Box*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_Box_getDepth_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::Box* ptrNativeObject = (EarthView::World::Graphic::Box*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getDepth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_RenderWindowDescription_name( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RenderWindowDescription* ptrNativeObject = (EarthView::World::Graphic::RenderWindowDescription*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->name;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RenderWindowDescription_name( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::RenderWindowDescription*)pObjectXXXX)->name = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_RenderWindowDescription_width( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RenderWindowDescription* ptrNativeObject = (EarthView::World::Graphic::RenderWindowDescription*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->width;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RenderWindowDescription_width( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::RenderWindowDescription*)pObjectXXXX)->width = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_RenderWindowDescription_height( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RenderWindowDescription* ptrNativeObject = (EarthView::World::Graphic::RenderWindowDescription*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->height;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RenderWindowDescription_height( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::RenderWindowDescription*)pObjectXXXX)->height = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_RenderWindowDescription_useFullScreen( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RenderWindowDescription* ptrNativeObject = (EarthView::World::Graphic::RenderWindowDescription*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->useFullScreen;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RenderWindowDescription_useFullScreen( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::RenderWindowDescription*)pObjectXXXX)->useFullScreen = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_RenderWindowDescription_miscParams( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RenderWindowDescription* ptrNativeObject = (EarthView::World::Graphic::RenderWindowDescription*) pObjectXXXX;
				EarthView::World::Core::CommonStringPairList &objXXXX = ptrNativeObject->miscParams;
				EarthView::World::Core::CommonStringPairList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RenderWindowDescription_miscParams( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::RenderWindowDescription*)pObjectXXXX)->miscParams = *(EarthView::World::Core::CommonStringPairList*)value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderWindowDescriptionList_push_back_void_RenderWindowDescription(void *pObjectXXXX, _in const void* t )
			{
				EarthView::World::Graphic::RenderWindowDescriptionList* ptrNativeObject = (EarthView::World::Graphic::RenderWindowDescriptionList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::RenderWindowDescription*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderWindowDescriptionList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::RenderWindowDescriptionList* ptrNativeObject = (EarthView::World::Graphic::RenderWindowDescriptionList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RenderWindowDescriptionList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::RenderWindowDescriptionList* ptrNativeObject = (EarthView::World::Graphic::RenderWindowDescriptionList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RenderWindowDescriptionList_OperatorIndex_RenderWindowDescription_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::RenderWindowDescriptionList& objYYYY = *(EarthView::World::Graphic::RenderWindowDescriptionList*) pObjXXXX;
				EarthView::World::Graphic::RenderWindowDescription& objXXXX = objYYYY[n];
				EarthView::World::Graphic::RenderWindowDescription *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RenderWindowDescriptionList_at_RenderWindowDescription_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::RenderWindowDescriptionList* ptrNativeObject = (EarthView::World::Graphic::RenderWindowDescriptionList*) pObjectXXXX;
				EarthView::World::Graphic::RenderWindowDescription& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::RenderWindowDescription *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RenderWindowDescriptionList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::RenderWindowDescriptionList* ptrNativeObject = (EarthView::World::Graphic::RenderWindowDescriptionList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderWindowDescriptionList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::RenderWindowDescriptionList* ptrNativeObject = (EarthView::World::Graphic::RenderWindowDescriptionList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderWindowList_push_back_void_CRenderWindow(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderWindow*& ref_t )
			{
				EarthView::World::Graphic::RenderWindowList* ptrNativeObject = (EarthView::World::Graphic::RenderWindowList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderWindowList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::RenderWindowList* ptrNativeObject = (EarthView::World::Graphic::RenderWindowList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RenderWindowList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::RenderWindowList* ptrNativeObject = (EarthView::World::Graphic::RenderWindowList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderWindow*  _stdcall EarthView_World_Graphic_RenderWindowList_OperatorIndex_CRenderWindow_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::RenderWindowList& objYYYY = *(EarthView::World::Graphic::RenderWindowList*) pObjXXXX;
				EarthView::World::Graphic::CRenderWindow* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderWindow*  _stdcall EarthView_World_Graphic_RenderWindowList_at_CRenderWindow_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::RenderWindowList* ptrNativeObject = (EarthView::World::Graphic::RenderWindowList*) pObjectXXXX;
				EarthView::World::Graphic::CRenderWindow* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RenderWindowList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::RenderWindowList* ptrNativeObject = (EarthView::World::Graphic::RenderWindowList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderWindowList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::RenderWindowList* ptrNativeObject = (EarthView::World::Graphic::RenderWindowList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CNameGenerator_generate_EVString(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNameGenerator* ptrNativeObject = (EarthView::World::Graphic::CNameGenerator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->generate();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNameGenerator_reset_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNameGenerator* ptrNativeObject = (EarthView::World::Graphic::CNameGenerator*) pObjectXXXX;
				ptrNativeObject->reset();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNameGenerator_setNext_void_ev_uint64(void *pObjectXXXX, _in ev_uint64 val )
			{
				EarthView::World::Graphic::CNameGenerator* ptrNativeObject = (EarthView::World::Graphic::CNameGenerator*) pObjectXXXX;
				ptrNativeObject->setNext(val);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Graphic_CNameGenerator_getNext_ev_uint64(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNameGenerator* ptrNativeObject = (EarthView::World::Graphic::CNameGenerator*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->getNext();
				return objXXXX;
			}
		}
	}
}
