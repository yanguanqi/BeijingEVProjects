/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/rendersystemcapabilitiesserializer.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilitiesSerializer_writeScript_1CRenderSystemCapabilities_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong caps_j, jstring name_j, jstring filename_j)
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities *caps = (const EarthView::World::Graphic::CRenderSystemCapabilities*) caps_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Graphic::CRenderSystemCapabilitiesSerializer *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilitiesSerializer*) pObjXXXX;
				pObjectX->writeScript(caps, name, filename);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilitiesSerializer_writeString_1CRenderSystemCapabilities_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong caps_j, jstring name_j)
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities *caps = (const EarthView::World::Graphic::CRenderSystemCapabilities*) caps_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CRenderSystemCapabilitiesSerializer *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilitiesSerializer*) pObjXXXX;
				EVString __values1 = pObjectX->writeString(caps, name);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilitiesSerializer_parseScript_1DataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				EarthView::World::Graphic::CRenderSystemCapabilitiesSerializer *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilitiesSerializer*) pObjXXXX;
				pObjectX->parseScript(stream);
			}
		}
	}
}
