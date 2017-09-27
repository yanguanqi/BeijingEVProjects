/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/fltimageconvert.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltImageConvert_convertImage_1EVString_1CImage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring file_j, jlong img_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* file_ch = (const ev_char*)__env->GetStringUTFChars(file_j,JNI_FALSE);
				const EVString file = file_ch;
				__env->ReleaseStringUTFChars(file_j, (const char *)file_ch);
				#else
				const ev_wchar* file_ch = (const ev_wchar*)__env->GetStringChars(file_j,JNI_FALSE);
				const EVString file = file_ch;
				__env->ReleaseStringChars(file_j, (const jchar *)file_ch);
				#endif
				EarthView::World::Graphic::CImage &img = *(EarthView::World::Graphic::CImage*) img_j;
				EarthView::World::Graphic::CFltImageConvert *pObjectX = (EarthView::World::Graphic::CFltImageConvert*) pObjXXXX;
				pObjectX->convertImage(file, img);
			}
		}
	}
}
