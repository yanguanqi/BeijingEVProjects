/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/technique.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_Passes_push_back_void_CPass(void *pObjectXXXX, _in EarthView::World::Graphic::CPass*& ref_t )
			{
				EarthView::World::Graphic::CTechnique::Passes* ptrNativeObject = (EarthView::World::Graphic::CTechnique::Passes*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_Passes_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::Passes* ptrNativeObject = (EarthView::World::Graphic::CTechnique::Passes*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPass*  _stdcall EarthView_World_Graphic_CTechnique_Passes_front_CPass(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::Passes* ptrNativeObject = (EarthView::World::Graphic::CTechnique::Passes*) pObjectXXXX;
				EarthView::World::Graphic::CPass* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPass*  _stdcall EarthView_World_Graphic_CTechnique_Passes_back_CPass(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::Passes* ptrNativeObject = (EarthView::World::Graphic::CTechnique::Passes*) pObjectXXXX;
				EarthView::World::Graphic::CPass* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_Passes_insert_void_ev_uint32_CPass(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CPass*& ref_t )
			{
				EarthView::World::Graphic::CTechnique::Passes* ptrNativeObject = (EarthView::World::Graphic::CTechnique::Passes*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_Passes_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CTechnique::Passes* ptrNativeObject = (EarthView::World::Graphic::CTechnique::Passes*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTechnique_Passes_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique::Passes* ptrNativeObject = (EarthView::World::Graphic::CTechnique::Passes*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPass*  _stdcall EarthView_World_Graphic_CTechnique_Passes_OperatorIndex_CPass_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CTechnique::Passes& objYYYY = *(EarthView::World::Graphic::CTechnique::Passes*) pObjXXXX;
				EarthView::World::Graphic::CPass* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPass*  _stdcall EarthView_World_Graphic_CTechnique_Passes_at_CPass_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CTechnique::Passes* ptrNativeObject = (EarthView::World::Graphic::CTechnique::Passes*) pObjectXXXX;
				EarthView::World::Graphic::CPass* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTechnique_Passes_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique::Passes* ptrNativeObject = (EarthView::World::Graphic::CTechnique::Passes*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_Passes_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CTechnique::Passes* ptrNativeObject = (EarthView::World::Graphic::CTechnique::Passes*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_Passes_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CTechnique::Passes* ptrNativeObject = (EarthView::World::Graphic::CTechnique::Passes*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_Passes_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::Passes* ptrNativeObject = (EarthView::World::Graphic::CTechnique::Passes*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CTechnique_GPUVendorRule_vendor( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRule* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUVendorRule*) pObjectXXXX;
				EarthView::World::Graphic::GPUVendor objXXXX = ptrNativeObject->vendor;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTechnique_GPUVendorRule_vendor( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CTechnique::GPUVendorRule*)pObjectXXXX)->vendor = (EarthView::World::Graphic::GPUVendor)value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CTechnique_GPUVendorRule_includeOrExclude( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRule* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUVendorRule*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique::IncludeOrExclude objXXXX = ptrNativeObject->includeOrExclude;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTechnique_GPUVendorRule_includeOrExclude( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CTechnique::GPUVendorRule*)pObjectXXXX)->includeOrExclude = (EarthView::World::Graphic::CTechnique::IncludeOrExclude)value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CTechnique_GPUDeviceNameRule_devicePattern( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRule*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->devicePattern;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTechnique_GPUDeviceNameRule_devicePattern( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CTechnique::GPUDeviceNameRule*)pObjectXXXX)->devicePattern = value1;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CTechnique_GPUDeviceNameRule_includeOrExclude( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRule*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique::IncludeOrExclude objXXXX = ptrNativeObject->includeOrExclude;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTechnique_GPUDeviceNameRule_includeOrExclude( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CTechnique::GPUDeviceNameRule*)pObjectXXXX)->includeOrExclude = (EarthView::World::Graphic::CTechnique::IncludeOrExclude)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CTechnique_GPUDeviceNameRule_caseSensitive( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRule*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->caseSensitive;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTechnique_GPUDeviceNameRule_caseSensitive( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CTechnique::GPUDeviceNameRule*)pObjectXXXX)->caseSensitive = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_GPUVendorRuleList_push_back_void_GPUVendorRule(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRuleList* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUVendorRuleList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CTechnique::GPUVendorRule*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_GPUVendorRuleList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRuleList* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUVendorRuleList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTechnique_GPUVendorRuleList_front_GPUVendorRule(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRuleList* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUVendorRuleList*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique::GPUVendorRule& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CTechnique::GPUVendorRule *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTechnique_GPUVendorRuleList_back_GPUVendorRule(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRuleList* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUVendorRuleList*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique::GPUVendorRule& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CTechnique::GPUVendorRule *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_GPUVendorRuleList_insert_void_ev_uint32_GPUVendorRule(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRuleList* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUVendorRuleList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CTechnique::GPUVendorRule*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_GPUVendorRuleList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRuleList* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUVendorRuleList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTechnique_GPUVendorRuleList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique::GPUVendorRuleList* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUVendorRuleList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTechnique_GPUVendorRuleList_OperatorIndex_GPUVendorRule_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRuleList& objYYYY = *(EarthView::World::Graphic::CTechnique::GPUVendorRuleList*) pObjXXXX;
				EarthView::World::Graphic::CTechnique::GPUVendorRule& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CTechnique::GPUVendorRule *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTechnique_GPUVendorRuleList_at_GPUVendorRule_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRuleList* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUVendorRuleList*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique::GPUVendorRule& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CTechnique::GPUVendorRule *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTechnique_GPUVendorRuleList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique::GPUVendorRuleList* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUVendorRuleList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_GPUVendorRuleList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRuleList* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUVendorRuleList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_GPUVendorRuleList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRuleList* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUVendorRuleList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_GPUVendorRuleList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRuleList* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUVendorRuleList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_GPUDeviceNameRuleList_push_back_void_GPUDeviceNameRule(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CTechnique::GPUDeviceNameRule*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_GPUDeviceNameRuleList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTechnique_GPUDeviceNameRuleList_front_GPUDeviceNameRule(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTechnique_GPUDeviceNameRuleList_back_GPUDeviceNameRule(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_GPUDeviceNameRuleList_insert_void_ev_uint32_GPUDeviceNameRule(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CTechnique::GPUDeviceNameRule*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_GPUDeviceNameRuleList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTechnique_GPUDeviceNameRuleList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTechnique_GPUDeviceNameRuleList_OperatorIndex_GPUDeviceNameRule_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList& objYYYY = *(EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList*) pObjXXXX;
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTechnique_GPUDeviceNameRuleList_at_GPUDeviceNameRule_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTechnique_GPUDeviceNameRuleList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_GPUDeviceNameRuleList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_GPUDeviceNameRuleList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_GPUDeviceNameRuleList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTechnique_isSupported_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isSupported();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CTechnique__compile_EVString_ev_bool(void *pObjectXXXX, _in ev_bool autoManageTextureUnits )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->_compile(autoManageTextureUnits);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique__compileIlluminationPasses_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->_compileIlluminationPasses();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPass*  _stdcall EarthView_World_Graphic_CTechnique_createPass_CPass(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				EarthView::World::Graphic::CPass* objXXXX = ptrNativeObject->createPass();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPass*  _stdcall EarthView_World_Graphic_CTechnique_getPass_CPass_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				EarthView::World::Graphic::CPass* objXXXX = ptrNativeObject->getPass(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPass*  _stdcall EarthView_World_Graphic_CTechnique_getPass_CPass_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				EarthView::World::Graphic::CPass* objXXXX = ptrNativeObject->getPass(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CTechnique_getNumPasses_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getNumPasses();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_removePass_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->removePass(index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_removeAllPasses_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->removeAllPasses();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTechnique_movePass_ev_bool_ev_uint16_ev_uint16(void *pObjectXXXX, _in const ev_uint16 sourceIndex, _in const ev_uint16 destinationIndex )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->movePass(sourceIndex, destinationIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTechnique_PassIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique::PassIterator* ptrNativeObject = (EarthView::World::Graphic::CTechnique::PassIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_PassIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::PassIterator* ptrNativeObject = (EarthView::World::Graphic::CTechnique::PassIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPass*  _stdcall EarthView_World_Graphic_CTechnique_PassIterator_getCurrent_CPass(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::PassIterator* ptrNativeObject = (EarthView::World::Graphic::CTechnique::PassIterator*) pObjectXXXX;
				EarthView::World::Graphic::CPass* objXXXX = ptrNativeObject->getCurrent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPass*  _stdcall EarthView_World_Graphic_CTechnique_PassIterator_next_CPass(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::PassIterator* ptrNativeObject = (EarthView::World::Graphic::CTechnique::PassIterator*) pObjectXXXX;
				EarthView::World::Graphic::CPass* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPass*  _stdcall EarthView_World_Graphic_CTechnique_PassIterator_getBegin_CPass(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::PassIterator* ptrNativeObject = (EarthView::World::Graphic::CTechnique::PassIterator*) pObjectXXXX;
				EarthView::World::Graphic::CPass* objXXXX = ptrNativeObject->getBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPass*  _stdcall EarthView_World_Graphic_CTechnique_PassIterator_getEnd_CPass(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::PassIterator* ptrNativeObject = (EarthView::World::Graphic::CTechnique::PassIterator*) pObjectXXXX;
				EarthView::World::Graphic::CPass* objXXXX = ptrNativeObject->getEnd();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTechnique_getPassIterator_PassIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique::PassIterator objXXXX = ptrNativeObject->getPassIterator();
				EarthView::World::Graphic::CTechnique::PassIterator *pXXXX = new EarthView::World::Graphic::CTechnique::PassIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTechnique_IlluminationPassIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique::IlluminationPassIterator* ptrNativeObject = (EarthView::World::Graphic::CTechnique::IlluminationPassIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_IlluminationPassIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::IlluminationPassIterator* ptrNativeObject = (EarthView::World::Graphic::CTechnique::IlluminationPassIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::IlluminationPass*  _stdcall EarthView_World_Graphic_CTechnique_IlluminationPassIterator_getCurrent_IlluminationPass(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::IlluminationPassIterator* ptrNativeObject = (EarthView::World::Graphic::CTechnique::IlluminationPassIterator*) pObjectXXXX;
				EarthView::World::Graphic::IlluminationPass* objXXXX = ptrNativeObject->getCurrent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::IlluminationPass*  _stdcall EarthView_World_Graphic_CTechnique_IlluminationPassIterator_next_IlluminationPass(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::IlluminationPassIterator* ptrNativeObject = (EarthView::World::Graphic::CTechnique::IlluminationPassIterator*) pObjectXXXX;
				EarthView::World::Graphic::IlluminationPass* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::IlluminationPass*  _stdcall EarthView_World_Graphic_CTechnique_IlluminationPassIterator_getBegin_IlluminationPass(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::IlluminationPassIterator* ptrNativeObject = (EarthView::World::Graphic::CTechnique::IlluminationPassIterator*) pObjectXXXX;
				EarthView::World::Graphic::IlluminationPass* objXXXX = ptrNativeObject->getBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::IlluminationPass*  _stdcall EarthView_World_Graphic_CTechnique_IlluminationPassIterator_getEnd_IlluminationPass(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::IlluminationPassIterator* ptrNativeObject = (EarthView::World::Graphic::CTechnique::IlluminationPassIterator*) pObjectXXXX;
				EarthView::World::Graphic::IlluminationPass* objXXXX = ptrNativeObject->getEnd();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTechnique_getIlluminationPassIterator_IlluminationPassIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique::IlluminationPassIterator objXXXX = ptrNativeObject->getIlluminationPassIterator();
				EarthView::World::Graphic::CTechnique::IlluminationPassIterator *pXXXX = new EarthView::World::Graphic::CTechnique::IlluminationPassIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMaterial*  _stdcall EarthView_World_Graphic_CTechnique_getParent_CMaterial(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				EarthView::World::Graphic::CMaterial* objXXXX = ptrNativeObject->getParent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTechnique_OperatorAssign_CTechnique_CTechnique(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Graphic::CTechnique& objXXXX = *((EarthView::World::Graphic::CTechnique*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::CTechnique*)rhs;
				EarthView::World::Graphic::CTechnique *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CTechnique_getResourceGroup_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getResourceGroup();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTechnique_isTransparent_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isTransparent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTechnique_isTransparentSortingEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isTransparentSortingEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTechnique_isTransparentSortingForced_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isTransparentSortingForced();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique__prepare_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->_prepare();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique__unprepare_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->_unprepare();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique__load_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->_load();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique__unload_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->_unload();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTechnique_isLoaded_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isLoaded();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique__notifyNeedsRecompile_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->_notifyNeedsRecompile();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTechnique_getShadowCasterMaterial_CMaterialPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				EarthView::World::Graphic::CMaterialPtr objXXXX = ptrNativeObject->getShadowCasterMaterial();
				EarthView::World::Graphic::CMaterialPtr *pXXXX = new EarthView::World::Graphic::CMaterialPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setShadowCasterMaterial_void_CMaterialPtr(void *pObjectXXXX, _in void* val )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setShadowCasterMaterial(*(EarthView::World::Graphic::CMaterialPtr*)val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setShadowCasterMaterial_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setShadowCasterMaterial(name1);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTechnique_getShadowReceiverMaterial_CMaterialPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				EarthView::World::Graphic::CMaterialPtr objXXXX = ptrNativeObject->getShadowReceiverMaterial();
				EarthView::World::Graphic::CMaterialPtr *pXXXX = new EarthView::World::Graphic::CMaterialPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setShadowReceiverMaterial_void_CMaterialPtr(void *pObjectXXXX, _in void* val )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setShadowReceiverMaterial(*(EarthView::World::Graphic::CMaterialPtr*)val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setShadowReceiverMaterial_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setShadowReceiverMaterial(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setPointSize_void_Real(void *pObjectXXXX, _in Real ps )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setPointSize(ps);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setAmbient_void_Real_Real_Real(void *pObjectXXXX, _in Real red, _in Real green, _in Real blue )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setAmbient(red, green, blue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setAmbient_void_CColourValue(void *pObjectXXXX, _in const void* ambient )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setAmbient(*(EarthView::World::Graphic::CColourValue*)ambient);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setDiffuse_void_Real_Real_Real_Real(void *pObjectXXXX, _in Real red, _in Real green, _in Real blue, _in Real alpha )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setDiffuse(red, green, blue, alpha);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setDiffuse_void_CColourValue(void *pObjectXXXX, _in const void* diffuse )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setDiffuse(*(EarthView::World::Graphic::CColourValue*)diffuse);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setSpecular_void_Real_Real_Real_Real(void *pObjectXXXX, _in Real red, _in Real green, _in Real blue, _in Real alpha )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setSpecular(red, green, blue, alpha);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setSpecular_void_CColourValue(void *pObjectXXXX, _in const void* specular )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setSpecular(*(EarthView::World::Graphic::CColourValue*)specular);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setShininess_void_Real(void *pObjectXXXX, _in Real val )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setShininess(val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setSelfIllumination_void_Real_Real_Real(void *pObjectXXXX, _in Real red, _in Real green, _in Real blue )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setSelfIllumination(red, green, blue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setSelfIllumination_void_CColourValue(void *pObjectXXXX, _in const void* selfIllum )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setSelfIllumination(*(EarthView::World::Graphic::CColourValue*)selfIllum);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setDepthCheckEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setDepthCheckEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setDepthWriteEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setDepthWriteEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setDepthFunction_void_CompareFunction(void *pObjectXXXX, _in int func )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setDepthFunction((EarthView::World::Graphic::CompareFunction)func);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setColourWriteEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setColourWriteEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setCullingMode_void_CullingMode(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setCullingMode((EarthView::World::Graphic::CullingMode)mode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setManualCullingMode_void_ManualCullingMode(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setManualCullingMode((EarthView::World::Graphic::ManualCullingMode)mode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setLightingEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setLightingEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setShadingMode_void_ShadeOptions(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setShadingMode((EarthView::World::Graphic::ShadeOptions)mode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setFog_void_ev_bool_FogMode_CColourValue_Real_Real_Real(void *pObjectXXXX, _in ev_bool overrideScene, _in int mode, _in const void* colour, _in Real expDensity, _in Real linearStart, _in Real linearEnd )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setFog(overrideScene, (EarthView::World::Graphic::FogMode)mode, *(EarthView::World::Graphic::CColourValue*)colour, expDensity, linearStart, linearEnd);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setFog_void_ev_bool_FogMode_CColourValue_Real_Real(void *pObjectXXXX, _in ev_bool overrideScene, _in int mode, _in const void* colour, _in Real expDensity, _in Real linearStart )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setFog(overrideScene, (EarthView::World::Graphic::FogMode)mode, *(EarthView::World::Graphic::CColourValue*)colour, expDensity, linearStart);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setFog_void_ev_bool_FogMode_CColourValue_Real(void *pObjectXXXX, _in ev_bool overrideScene, _in int mode, _in const void* colour, _in Real expDensity )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setFog(overrideScene, (EarthView::World::Graphic::FogMode)mode, *(EarthView::World::Graphic::CColourValue*)colour, expDensity);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setFog_void_ev_bool_FogMode_CColourValue(void *pObjectXXXX, _in ev_bool overrideScene, _in int mode, _in const void* colour )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setFog(overrideScene, (EarthView::World::Graphic::FogMode)mode, *(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setFog_void_ev_bool_FogMode(void *pObjectXXXX, _in ev_bool overrideScene, _in int mode )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setFog(overrideScene, (EarthView::World::Graphic::FogMode)mode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setFog_void_ev_bool(void *pObjectXXXX, _in ev_bool overrideScene )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setFog(overrideScene);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setDepthBias_void_ev_real32_ev_real32(void *pObjectXXXX, _in ev_real32 constantBias, _in ev_real32 slopeScaleBias )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setDepthBias(constantBias, slopeScaleBias);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setTextureFiltering_void_TextureFilterOptions(void *pObjectXXXX, _in int filterType )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setTextureFiltering((EarthView::World::Graphic::TextureFilterOptions)filterType);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setTextureAnisotropy_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 maxAniso )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setTextureAnisotropy(maxAniso);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setSceneBlending_void_SceneBlendType(void *pObjectXXXX, _in const int sbt )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setSceneBlending((EarthView::World::Graphic::SceneBlendType)sbt);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setSeparateSceneBlending_void_SceneBlendType_SceneBlendType(void *pObjectXXXX, _in const int sbt, _in const int sbta )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setSeparateSceneBlending((EarthView::World::Graphic::SceneBlendType)sbt, (EarthView::World::Graphic::SceneBlendType)sbta);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setSceneBlending_void_SceneBlendFactor_SceneBlendFactor(void *pObjectXXXX, _in const int sourceFactor, _in const int destFactor )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setSceneBlending((EarthView::World::Graphic::SceneBlendFactor)sourceFactor, (EarthView::World::Graphic::SceneBlendFactor)destFactor);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor(void *pObjectXXXX, _in const int sourceFactor, _in const int destFactor, _in const int sourceFactorAlpha, _in const int destFactorAlpha )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setSeparateSceneBlending((EarthView::World::Graphic::SceneBlendFactor)sourceFactor, (EarthView::World::Graphic::SceneBlendFactor)destFactor, (EarthView::World::Graphic::SceneBlendFactor)sourceFactorAlpha, (EarthView::World::Graphic::SceneBlendFactor)destFactorAlpha);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setLodIndex_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setLodIndex(index);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CTechnique_getLodIndex_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getLodIndex();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setSchemeName_void_EVString(void *pObjectXXXX, _in const char* schemeName )
			{
				EarthView::World::Core::ev_string schemeName1 = schemeName;
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setSchemeName(schemeName1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CTechnique_getSchemeName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getSchemeName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CTechnique__getSchemeIndex_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->_getSchemeIndex();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTechnique_isDepthWriteEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isDepthWriteEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTechnique_isDepthCheckEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isDepthCheckEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTechnique_hasColourWriteDisabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasColourWriteDisabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_setName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->setName(name1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CTechnique_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTechnique_applyTextureAliases_ev_bool_CommonStringPairList_ev_bool(void *pObjectXXXX, _in const void* aliasList, _in const ev_bool apply )
			{
				const EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->applyTextureAliases(*(EarthView::World::Core::CommonStringPairList*)aliasList, apply);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTechnique_applyTextureAliases_ev_bool_CommonStringPairList(void *pObjectXXXX, _in const void* aliasList )
			{
				const EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->applyTextureAliases(*(EarthView::World::Core::CommonStringPairList*)aliasList);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_addGPUVendorRule_void_GPUVendor_IncludeOrExclude(void *pObjectXXXX, _in int vendor, _in int includeOrExclude )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->addGPUVendorRule((EarthView::World::Graphic::GPUVendor)vendor, (EarthView::World::Graphic::CTechnique::IncludeOrExclude)includeOrExclude);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_addGPUVendorRule_void_GPUVendorRule(void *pObjectXXXX, _in const void* rule )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->addGPUVendorRule(*(EarthView::World::Graphic::CTechnique::GPUVendorRule*)rule);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_removeGPUVendorRule_void_GPUVendor(void *pObjectXXXX, _in int vendor )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->removeGPUVendorRule((EarthView::World::Graphic::GPUVendor)vendor);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTechnique_GPUVendorRuleIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_GPUVendorRuleIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTechnique_GPUVendorRuleIterator_getCurrent_GPUVendorRule(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique::GPUVendorRule objXXXX = ptrNativeObject->getCurrent();
				EarthView::World::Graphic::CTechnique::GPUVendorRule *pXXXX = new EarthView::World::Graphic::CTechnique::GPUVendorRule(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTechnique_GPUVendorRuleIterator_next_GPUVendorRule(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique::GPUVendorRule objXXXX = ptrNativeObject->next();
				EarthView::World::Graphic::CTechnique::GPUVendorRule *pXXXX = new EarthView::World::Graphic::CTechnique::GPUVendorRule(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTechnique_GPUVendorRuleIterator_getBegin_GPUVendorRule(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique::GPUVendorRule objXXXX = ptrNativeObject->getBegin();
				EarthView::World::Graphic::CTechnique::GPUVendorRule *pXXXX = new EarthView::World::Graphic::CTechnique::GPUVendorRule(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTechnique_GPUVendorRuleIterator_getEnd_GPUVendorRule(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique::GPUVendorRule objXXXX = ptrNativeObject->getEnd();
				EarthView::World::Graphic::CTechnique::GPUVendorRule *pXXXX = new EarthView::World::Graphic::CTechnique::GPUVendorRule(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTechnique_getGPUVendorRuleIterator_GPUVendorRuleIterator(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator objXXXX = ptrNativeObject->getGPUVendorRuleIterator();
				EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator *pXXXX = new EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_addGPUDeviceNameRule_void_EVString_IncludeOrExclude_ev_bool(void *pObjectXXXX, _in const char* devicePattern, _in int includeOrExclude, _in ev_bool caseSensitive )
			{
				EarthView::World::Core::ev_string devicePattern1 = devicePattern;
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->addGPUDeviceNameRule(devicePattern1, (EarthView::World::Graphic::CTechnique::IncludeOrExclude)includeOrExclude, caseSensitive);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_addGPUDeviceNameRule_void_EVString_IncludeOrExclude(void *pObjectXXXX, _in const char* devicePattern, _in int includeOrExclude )
			{
				EarthView::World::Core::ev_string devicePattern1 = devicePattern;
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->addGPUDeviceNameRule(devicePattern1, (EarthView::World::Graphic::CTechnique::IncludeOrExclude)includeOrExclude);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_addGPUDeviceNameRule_void_GPUDeviceNameRule(void *pObjectXXXX, _in const void* rule )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->addGPUDeviceNameRule(*(EarthView::World::Graphic::CTechnique::GPUDeviceNameRule*)rule);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_removeGPUDeviceNameRule_void_EVString(void *pObjectXXXX, _in const char* devicePattern )
			{
				EarthView::World::Core::ev_string devicePattern1 = devicePattern;
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				ptrNativeObject->removeGPUDeviceNameRule(devicePattern1);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTechnique_GPUDeviceNameRuleIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechnique_GPUDeviceNameRuleIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTechnique_GPUDeviceNameRuleIterator_getCurrent_GPUDeviceNameRule(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule objXXXX = ptrNativeObject->getCurrent();
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule *pXXXX = new EarthView::World::Graphic::CTechnique::GPUDeviceNameRule(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTechnique_GPUDeviceNameRuleIterator_next_GPUDeviceNameRule(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule objXXXX = ptrNativeObject->next();
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule *pXXXX = new EarthView::World::Graphic::CTechnique::GPUDeviceNameRule(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTechnique_GPUDeviceNameRuleIterator_getBegin_GPUDeviceNameRule(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule objXXXX = ptrNativeObject->getBegin();
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule *pXXXX = new EarthView::World::Graphic::CTechnique::GPUDeviceNameRule(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTechnique_GPUDeviceNameRuleIterator_getEnd_GPUDeviceNameRule(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator* ptrNativeObject = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule objXXXX = ptrNativeObject->getEnd();
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule *pXXXX = new EarthView::World::Graphic::CTechnique::GPUDeviceNameRule(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTechnique_getGPUDeviceNameRuleIterator_GPUDeviceNameRuleIterator(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator objXXXX = ptrNativeObject->getGPUDeviceNameRuleIterator();
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator *pXXXX = new EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTechnique_getUserObjectBindings_CUserObjectBindings(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechnique* ptrNativeObject = (EarthView::World::Graphic::CTechnique*) pObjectXXXX;
				EarthView::World::Graphic::CUserObjectBindings& objXXXX = ptrNativeObject->getUserObjectBindings();
				EarthView::World::Graphic::CUserObjectBindings *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
		}
	}
}
