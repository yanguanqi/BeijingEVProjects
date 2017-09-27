/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/scriptparser.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptParser_parse_1ScriptTokenListPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tokens_j)
			{
				const EarthView::World::Graphic::ScriptTokenListPtr &tokens = *(EarthView::World::Graphic::ScriptTokenListPtr*) tokens_j;
				EarthView::World::Graphic::CScriptParser *pObjectX = (EarthView::World::Graphic::CScriptParser*) pObjXXXX;
				EarthView::World::Graphic::ConcreteNodeListPtr __values1 = pObjectX->parse(tokens);
				EarthView::World::Graphic::ConcreteNodeListPtr *returnvalues = new EarthView::World::Graphic::ConcreteNodeListPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptParser_parseChunk_1ScriptTokenListPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tokens_j)
			{
				const EarthView::World::Graphic::ScriptTokenListPtr &tokens = *(EarthView::World::Graphic::ScriptTokenListPtr*) tokens_j;
				EarthView::World::Graphic::CScriptParser *pObjectX = (EarthView::World::Graphic::CScriptParser*) pObjXXXX;
				EarthView::World::Graphic::ConcreteNodeListPtr __values1 = pObjectX->parseChunk(tokens);
				EarthView::World::Graphic::ConcreteNodeListPtr *returnvalues = new EarthView::World::Graphic::ConcreteNodeListPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
		}
	}
}
