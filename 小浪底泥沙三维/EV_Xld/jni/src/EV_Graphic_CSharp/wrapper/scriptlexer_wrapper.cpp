/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/scriptlexer.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_ScriptToken_file( void *pObjectXXXX )
			{
				EarthView::World::Graphic::ScriptToken* ptrNativeObject = (EarthView::World::Graphic::ScriptToken*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->file;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_ScriptToken_file( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::ScriptToken*)pObjectXXXX)->file = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_ScriptToken_lexeme( void *pObjectXXXX )
			{
				EarthView::World::Graphic::ScriptToken* ptrNativeObject = (EarthView::World::Graphic::ScriptToken*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->lexeme;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_ScriptToken_lexeme( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::ScriptToken*)pObjectXXXX)->lexeme = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_ScriptToken_type( void *pObjectXXXX )
			{
				EarthView::World::Graphic::ScriptToken* ptrNativeObject = (EarthView::World::Graphic::ScriptToken*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->type;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_ScriptToken_type( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::ScriptToken*)pObjectXXXX)->type = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_ScriptToken_line( void *pObjectXXXX )
			{
				EarthView::World::Graphic::ScriptToken* ptrNativeObject = (EarthView::World::Graphic::ScriptToken*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->line;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_ScriptToken_line( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::ScriptToken*)pObjectXXXX)->line = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::ScriptToken*  _stdcall EarthView_World_Graphic_ScriptTokenPtr_get_ScriptToken(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ScriptTokenPtr* ptrNativeObject = (EarthView::World::Graphic::ScriptTokenPtr*) pObjectXXXX;
				EarthView::World::Graphic::ScriptToken* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ScriptTokenList_push_back_void_ScriptTokenPtr(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::ScriptTokenList* ptrNativeObject = (EarthView::World::Graphic::ScriptTokenList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::ScriptTokenPtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ScriptTokenList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ScriptTokenList* ptrNativeObject = (EarthView::World::Graphic::ScriptTokenList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_ScriptTokenList_front_ScriptTokenPtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ScriptTokenList* ptrNativeObject = (EarthView::World::Graphic::ScriptTokenList*) pObjectXXXX;
				EarthView::World::Graphic::ScriptTokenPtr& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::ScriptTokenPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_ScriptTokenList_back_ScriptTokenPtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ScriptTokenList* ptrNativeObject = (EarthView::World::Graphic::ScriptTokenList*) pObjectXXXX;
				EarthView::World::Graphic::ScriptTokenPtr& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::ScriptTokenPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ScriptTokenList_insert_void_ev_uint32_ScriptTokenPtr(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::ScriptTokenList* ptrNativeObject = (EarthView::World::Graphic::ScriptTokenList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::ScriptTokenPtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ScriptTokenList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::ScriptTokenList* ptrNativeObject = (EarthView::World::Graphic::ScriptTokenList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_ScriptTokenList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ScriptTokenList* ptrNativeObject = (EarthView::World::Graphic::ScriptTokenList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_ScriptTokenList_OperatorIndex_ScriptTokenPtr_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::ScriptTokenList& objYYYY = *(EarthView::World::Graphic::ScriptTokenList*) pObjXXXX;
				EarthView::World::Graphic::ScriptTokenPtr& objXXXX = objYYYY[n];
				EarthView::World::Graphic::ScriptTokenPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_ScriptTokenList_at_ScriptTokenPtr_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::ScriptTokenList* ptrNativeObject = (EarthView::World::Graphic::ScriptTokenList*) pObjectXXXX;
				EarthView::World::Graphic::ScriptTokenPtr& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::ScriptTokenPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_ScriptTokenList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ScriptTokenList* ptrNativeObject = (EarthView::World::Graphic::ScriptTokenList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ScriptTokenList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::ScriptTokenList* ptrNativeObject = (EarthView::World::Graphic::ScriptTokenList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ScriptTokenList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::ScriptTokenList* ptrNativeObject = (EarthView::World::Graphic::ScriptTokenList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ScriptTokenList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ScriptTokenList* ptrNativeObject = (EarthView::World::Graphic::ScriptTokenList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::ScriptTokenList*  _stdcall EarthView_World_Graphic_ScriptTokenListPtr_get_ScriptTokenList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ScriptTokenListPtr* ptrNativeObject = (EarthView::World::Graphic::ScriptTokenListPtr*) pObjectXXXX;
				EarthView::World::Graphic::ScriptTokenList* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CScriptLexer_tokenize_ScriptTokenListPtr_EVString_EVString(void *pObjectXXXX, _in const char* str, _in const char* source )
			{
				EarthView::World::Core::ev_string str1 = str;
				EarthView::World::Core::ev_string source1 = source;
				EarthView::World::Graphic::CScriptLexer* ptrNativeObject = (EarthView::World::Graphic::CScriptLexer*) pObjectXXXX;
				EarthView::World::Graphic::ScriptTokenListPtr objXXXX = ptrNativeObject->tokenize(str1, source1);
				EarthView::World::Graphic::ScriptTokenListPtr *pXXXX = new EarthView::World::Graphic::ScriptTokenListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
		}
	}
}
