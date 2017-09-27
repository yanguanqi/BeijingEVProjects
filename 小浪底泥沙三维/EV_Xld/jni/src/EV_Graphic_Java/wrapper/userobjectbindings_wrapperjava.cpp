/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/userobjectbindings.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_UserObjectBindings_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CUserObjectBindings *pObjectX = (EarthView::World::Graphic::CUserObjectBindings*) pObjXXXX;
				pObjectX->clear();
			}
		}
	}
}
