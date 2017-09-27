/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "databaseutility/sqlindex.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			namespace Database
			{
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlIndex_OperatorAssign_CSqlIndex_CSqlIndex(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Core::Database::CSqlIndex& objXXXX = *((EarthView::World::Core::Database::CSqlIndex*) pObjXXXX);
					objXXXX = *(EarthView::World::Core::Database::CSqlIndex*)other;
					EarthView::World::Core::Database::CSqlIndex *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlIndex_setCursorName_void_ev_wstring(void *pObjectXXXX, _in const ev_wchar* cursorName )
				{
					EarthView::World::Core::ev_wstring cursorName1 = cursorName;
					EarthView::World::Core::Database::CSqlIndex* ptrNativeObject = (EarthView::World::Core::Database::CSqlIndex*) pObjectXXXX;
					ptrNativeObject->setCursorName(cursorName1);
				}
				extern "C" EV_DLL_EXPORT  const ev_wchar*  _stdcall EarthView_World_Core_Database_CSqlIndex_cursorName_ev_wstring(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlIndex* ptrNativeObject = (EarthView::World::Core::Database::CSqlIndex*) pObjectXXXX;
					const ev_wstring& objXXXX = ptrNativeObject->cursorName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlIndex_setName_void_ev_wstring(void *pObjectXXXX, _in const ev_wchar* name )
				{
					EarthView::World::Core::ev_wstring name1 = name;
					EarthView::World::Core::Database::CSqlIndex* ptrNativeObject = (EarthView::World::Core::Database::CSqlIndex*) pObjectXXXX;
					ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  const ev_wchar*  _stdcall EarthView_World_Core_Database_CSqlIndex_name_ev_wstring(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlIndex* ptrNativeObject = (EarthView::World::Core::Database::CSqlIndex*) pObjectXXXX;
					const ev_wstring& objXXXX = ptrNativeObject->name();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlIndex_append_void_CSqlField(void *pObjectXXXX, _in const void* field )
				{
					EarthView::World::Core::Database::CSqlIndex* ptrNativeObject = (EarthView::World::Core::Database::CSqlIndex*) pObjectXXXX;
					ptrNativeObject->append(*(EarthView::World::Core::Database::CSqlField*)field);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlIndex_append_void_CSqlField_ev_bool(void *pObjectXXXX, _in const void* field, _in ev_bool desc )
				{
					EarthView::World::Core::Database::CSqlIndex* ptrNativeObject = (EarthView::World::Core::Database::CSqlIndex*) pObjectXXXX;
					ptrNativeObject->append(*(EarthView::World::Core::Database::CSqlField*)field, desc);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlIndex_isDescending_ev_bool_ev_int32(void *pObjectXXXX, _in ev_int32 i )
				{
					const EarthView::World::Core::Database::CSqlIndex* ptrNativeObject = (EarthView::World::Core::Database::CSqlIndex*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isDescending(i);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlIndex_setDescending_void_ev_int32_ev_bool(void *pObjectXXXX, _in ev_int32 i, _in ev_bool desc )
				{
					EarthView::World::Core::Database::CSqlIndex* ptrNativeObject = (EarthView::World::Core::Database::CSqlIndex*) pObjectXXXX;
					ptrNativeObject->setDescending(i, desc);
				}
			}
		}
	}
}
