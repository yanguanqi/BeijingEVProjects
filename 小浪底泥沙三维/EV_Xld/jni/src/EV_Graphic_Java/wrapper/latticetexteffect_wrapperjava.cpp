/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/latticetexteffect.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
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
		namespace Graphic
		{
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Ilatticetexteffect_setColor_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong argb_j)
			{
				ev_uint32 argb = (ev_uint32) argb_j;
				EarthView::World::Graphic::ILatticeTextEffect *pObjectX = (EarthView::World::Graphic::ILatticeTextEffect*) pObjXXXX;
				pObjectX->setColor(argb);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Ilatticetexteffect_setColor_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
			{
				const EarthView::World::Graphic::CColourValue &color = *(EarthView::World::Graphic::CColourValue*) color_j;
				EarthView::World::Graphic::ILatticeTextEffect *pObjectX = (EarthView::World::Graphic::ILatticeTextEffect*) pObjXXXX;
				pObjectX->setColor(color);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Ilatticetexteffect_getColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ILatticeTextEffect *pObjectX = (EarthView::World::Graphic::ILatticeTextEffect*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getColor();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
