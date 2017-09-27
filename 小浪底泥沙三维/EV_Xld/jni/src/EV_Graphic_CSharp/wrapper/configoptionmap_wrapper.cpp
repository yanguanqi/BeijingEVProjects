/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/configoptionmap.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_ConfigOption_name( void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConfigOption* ptrNativeObject = (EarthView::World::Graphic::ConfigOption*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->name;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_ConfigOption_name( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::ConfigOption*)pObjectXXXX)->name = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_ConfigOption_currentValue( void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConfigOption* ptrNativeObject = (EarthView::World::Graphic::ConfigOption*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->currentValue;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_ConfigOption_currentValue( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::ConfigOption*)pObjectXXXX)->currentValue = value1;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_ConfigOption_possibleValues( void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConfigOption* ptrNativeObject = (EarthView::World::Graphic::ConfigOption*) pObjectXXXX;
				EarthView::World::Core::StringVector &objXXXX = ptrNativeObject->possibleValues;
				EarthView::World::Core::StringVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_ConfigOption_possibleValues( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::ConfigOption*)pObjectXXXX)->possibleValues = *(EarthView::World::Core::StringVector*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_ConfigOption_immutable( void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConfigOption* ptrNativeObject = (EarthView::World::Graphic::ConfigOption*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->immutable;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_ConfigOption_immutable( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::ConfigOption*)pObjectXXXX)->immutable = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_ConfigOptionMap_push_ev_bool_EVString_ConfigOption(void *pObjectXXXX, _in const char* key, _in const void* val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::ConfigOptionMap* ptrNativeObject = (EarthView::World::Graphic::ConfigOptionMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, *(EarthView::World::Graphic::ConfigOption*)val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_ConfigOptionMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::ConfigOptionMap* ptrNativeObject = (EarthView::World::Graphic::ConfigOptionMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_ConfigOptionMap_OperatorIndex_ConfigOption_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::ConfigOptionMap& objYYYY = *(EarthView::World::Graphic::ConfigOptionMap*) pObjXXXX;
				EarthView::World::Graphic::ConfigOption& objXXXX = objYYYY[key];
				EarthView::World::Graphic::ConfigOption *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_ConfigOptionMap_get_ConfigOption_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::ConfigOptionMap* ptrNativeObject = (EarthView::World::Graphic::ConfigOptionMap*) pObjectXXXX;
				EarthView::World::Graphic::ConfigOption& objXXXX = ptrNativeObject->get(key1);
				EarthView::World::Graphic::ConfigOption *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ConfigOptionMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::ConfigOptionMap* ptrNativeObject = (EarthView::World::Graphic::ConfigOptionMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_ConfigOptionMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ConfigOptionMap* ptrNativeObject = (EarthView::World::Graphic::ConfigOptionMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ConfigOptionMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConfigOptionMap* ptrNativeObject = (EarthView::World::Graphic::ConfigOptionMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_ConfigOptionMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ConfigOptionMap* ptrNativeObject = (EarthView::World::Graphic::ConfigOptionMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
		}
	}
}
