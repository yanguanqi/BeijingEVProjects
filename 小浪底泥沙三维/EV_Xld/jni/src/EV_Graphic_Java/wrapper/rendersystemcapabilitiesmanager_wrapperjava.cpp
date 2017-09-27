/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/rendersystemcapabilitiesmanager.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilitiesManager_parseCapabilitiesFromArchive_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring archiveType_j, jboolean recursive_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* archiveType_ch = (const ev_char*)__env->GetStringUTFChars(archiveType_j,JNI_FALSE);
				const EVString archiveType = archiveType_ch;
				__env->ReleaseStringUTFChars(archiveType_j, (const char *)archiveType_ch);
				#else
				const ev_wchar* archiveType_ch = (const ev_wchar*)__env->GetStringChars(archiveType_j,JNI_FALSE);
				const EVString archiveType = archiveType_ch;
				__env->ReleaseStringChars(archiveType_j, (const jchar *)archiveType_ch);
				#endif
				ev_bool recursive = (ev_bool) recursive_j;
				EarthView::World::Graphic::CRenderSystemCapabilitiesManager *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilitiesManager*) pObjXXXX;
				pObjectX->parseCapabilitiesFromArchive(filename, archiveType, recursive);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilitiesManager_parseCapabilitiesFromArchive_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring archiveType_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* archiveType_ch = (const ev_char*)__env->GetStringUTFChars(archiveType_j,JNI_FALSE);
				const EVString archiveType = archiveType_ch;
				__env->ReleaseStringUTFChars(archiveType_j, (const char *)archiveType_ch);
				#else
				const ev_wchar* archiveType_ch = (const ev_wchar*)__env->GetStringChars(archiveType_j,JNI_FALSE);
				const EVString archiveType = archiveType_ch;
				__env->ReleaseStringChars(archiveType_j, (const jchar *)archiveType_ch);
				#endif
				EarthView::World::Graphic::CRenderSystemCapabilitiesManager *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilitiesManager*) pObjXXXX;
				pObjectX->parseCapabilitiesFromArchive(filename, archiveType);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilitiesManager_loadParsedCapabilities_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CRenderSystemCapabilitiesManager *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilitiesManager*) pObjXXXX;
				EarthView::World::Graphic::CRenderSystemCapabilities* __values1 = pObjectX->loadParsedCapabilities(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilitiesManager__1addRenderSystemCapabilities_1EVString_1CRenderSystemCapabilities(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong caps_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CRenderSystemCapabilities *caps = (EarthView::World::Graphic::CRenderSystemCapabilities*) caps_j;
				EarthView::World::Graphic::CRenderSystemCapabilitiesManager *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilitiesManager*) pObjXXXX;
				pObjectX->_addRenderSystemCapabilities(name, caps);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilitiesManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CRenderSystemCapabilitiesManager& __values1 = EarthView::World::Graphic::CRenderSystemCapabilitiesManager::getSingleton();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilitiesManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CRenderSystemCapabilitiesManager* __values1 = EarthView::World::Graphic::CRenderSystemCapabilitiesManager::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
