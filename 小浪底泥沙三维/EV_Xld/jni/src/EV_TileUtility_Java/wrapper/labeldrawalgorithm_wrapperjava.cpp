/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/labeldrawalgorithm.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_LabelDrawAlgorithm_draw_1IPaintDevice_1ISymbol_1CGeoElement_1EarthView_1World_1Core_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong device_j, jlong symbol_j, jlong geoElement_j, jstring value_j)
			{
				const EarthView::World::Display::IPaintDevice *device = (const EarthView::World::Display::IPaintDevice*) device_j;
				const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
				const EarthView::World::Spatial::CGeoElement *geoElement = (const EarthView::World::Spatial::CGeoElement*) geoElement_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EarthView::World::Core::ev_string value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EarthView::World::Core::ev_string value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				const 				EarthView::World::Spatial::CLabelDrawAlgorithm *pObjectX = (EarthView::World::Spatial::CLabelDrawAlgorithm*) pObjXXXX;
				pObjectX->draw(device, symbol, geoElement, value);
			}
		}
	}
}
