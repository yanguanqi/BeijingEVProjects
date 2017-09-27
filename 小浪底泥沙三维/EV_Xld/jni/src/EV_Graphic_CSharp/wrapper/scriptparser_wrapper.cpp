/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/scriptparser.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CScriptParser_parse_ConcreteNodeListPtr_ScriptTokenListPtr(void *pObjectXXXX, _in const void* tokens )
			{
				EarthView::World::Graphic::CScriptParser* ptrNativeObject = (EarthView::World::Graphic::CScriptParser*) pObjectXXXX;
				EarthView::World::Graphic::ConcreteNodeListPtr objXXXX = ptrNativeObject->parse(*(EarthView::World::Graphic::ScriptTokenListPtr*)tokens);
				EarthView::World::Graphic::ConcreteNodeListPtr *pXXXX = new EarthView::World::Graphic::ConcreteNodeListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CScriptParser_parseChunk_ConcreteNodeListPtr_ScriptTokenListPtr(void *pObjectXXXX, _in const void* tokens )
			{
				EarthView::World::Graphic::CScriptParser* ptrNativeObject = (EarthView::World::Graphic::CScriptParser*) pObjectXXXX;
				EarthView::World::Graphic::ConcreteNodeListPtr objXXXX = ptrNativeObject->parseChunk(*(EarthView::World::Graphic::ScriptTokenListPtr*)tokens);
				EarthView::World::Graphic::ConcreteNodeListPtr *pXXXX = new EarthView::World::Graphic::ConcreteNodeListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
		}
	}
}
