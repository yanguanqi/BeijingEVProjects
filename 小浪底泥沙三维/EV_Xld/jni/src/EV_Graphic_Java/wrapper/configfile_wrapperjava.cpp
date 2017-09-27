/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/configfile.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_load_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
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
				EarthView::World::Graphic::CConfigFile *pObjectX = (EarthView::World::Graphic::CConfigFile*) pObjXXXX;
				pObjectX->load(filename);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_load_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring separators_j)
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
				const ev_char* separators_ch = (const ev_char*)__env->GetStringUTFChars(separators_j,JNI_FALSE);
				const EVString separators = separators_ch;
				__env->ReleaseStringUTFChars(separators_j, (const char *)separators_ch);
				#else
				const ev_wchar* separators_ch = (const ev_wchar*)__env->GetStringChars(separators_j,JNI_FALSE);
				const EVString separators = separators_ch;
				__env->ReleaseStringChars(separators_j, (const jchar *)separators_ch);
				#endif
				EarthView::World::Graphic::CConfigFile *pObjectX = (EarthView::World::Graphic::CConfigFile*) pObjXXXX;
				pObjectX->load(filename, separators);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_load_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring separators_j, jboolean trimWhitespace_j)
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
				const ev_char* separators_ch = (const ev_char*)__env->GetStringUTFChars(separators_j,JNI_FALSE);
				const EVString separators = separators_ch;
				__env->ReleaseStringUTFChars(separators_j, (const char *)separators_ch);
				#else
				const ev_wchar* separators_ch = (const ev_wchar*)__env->GetStringChars(separators_j,JNI_FALSE);
				const EVString separators = separators_ch;
				__env->ReleaseStringChars(separators_j, (const jchar *)separators_ch);
				#endif
				ev_bool trimWhitespace = (ev_bool) trimWhitespace_j;
				EarthView::World::Graphic::CConfigFile *pObjectX = (EarthView::World::Graphic::CConfigFile*) pObjXXXX;
				pObjectX->load(filename, separators, trimWhitespace);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_load_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring resourceGroup_j, jstring separators_j)
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
				const ev_char* resourceGroup_ch = (const ev_char*)__env->GetStringUTFChars(resourceGroup_j,JNI_FALSE);
				const EVString resourceGroup = resourceGroup_ch;
				__env->ReleaseStringUTFChars(resourceGroup_j, (const char *)resourceGroup_ch);
				#else
				const ev_wchar* resourceGroup_ch = (const ev_wchar*)__env->GetStringChars(resourceGroup_j,JNI_FALSE);
				const EVString resourceGroup = resourceGroup_ch;
				__env->ReleaseStringChars(resourceGroup_j, (const jchar *)resourceGroup_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* separators_ch = (const ev_char*)__env->GetStringUTFChars(separators_j,JNI_FALSE);
				const EVString separators = separators_ch;
				__env->ReleaseStringUTFChars(separators_j, (const char *)separators_ch);
				#else
				const ev_wchar* separators_ch = (const ev_wchar*)__env->GetStringChars(separators_j,JNI_FALSE);
				const EVString separators = separators_ch;
				__env->ReleaseStringChars(separators_j, (const jchar *)separators_ch);
				#endif
				EarthView::World::Graphic::CConfigFile *pObjectX = (EarthView::World::Graphic::CConfigFile*) pObjXXXX;
				pObjectX->load(filename, resourceGroup, separators);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_load_1EVString_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring resourceGroup_j, jstring separators_j, jboolean trimWhitespace_j)
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
				const ev_char* resourceGroup_ch = (const ev_char*)__env->GetStringUTFChars(resourceGroup_j,JNI_FALSE);
				const EVString resourceGroup = resourceGroup_ch;
				__env->ReleaseStringUTFChars(resourceGroup_j, (const char *)resourceGroup_ch);
				#else
				const ev_wchar* resourceGroup_ch = (const ev_wchar*)__env->GetStringChars(resourceGroup_j,JNI_FALSE);
				const EVString resourceGroup = resourceGroup_ch;
				__env->ReleaseStringChars(resourceGroup_j, (const jchar *)resourceGroup_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* separators_ch = (const ev_char*)__env->GetStringUTFChars(separators_j,JNI_FALSE);
				const EVString separators = separators_ch;
				__env->ReleaseStringUTFChars(separators_j, (const char *)separators_ch);
				#else
				const ev_wchar* separators_ch = (const ev_wchar*)__env->GetStringChars(separators_j,JNI_FALSE);
				const EVString separators = separators_ch;
				__env->ReleaseStringChars(separators_j, (const jchar *)separators_ch);
				#endif
				ev_bool trimWhitespace = (ev_bool) trimWhitespace_j;
				EarthView::World::Graphic::CConfigFile *pObjectX = (EarthView::World::Graphic::CConfigFile*) pObjXXXX;
				pObjectX->load(filename, resourceGroup, separators, trimWhitespace);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_load_1DataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
			{
				const EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				EarthView::World::Graphic::CConfigFile *pObjectX = (EarthView::World::Graphic::CConfigFile*) pObjXXXX;
				pObjectX->load(stream);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_load_1DataStreamPtr_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jstring separators_j)
			{
				const EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* separators_ch = (const ev_char*)__env->GetStringUTFChars(separators_j,JNI_FALSE);
				const EVString separators = separators_ch;
				__env->ReleaseStringUTFChars(separators_j, (const char *)separators_ch);
				#else
				const ev_wchar* separators_ch = (const ev_wchar*)__env->GetStringChars(separators_j,JNI_FALSE);
				const EVString separators = separators_ch;
				__env->ReleaseStringChars(separators_j, (const jchar *)separators_ch);
				#endif
				EarthView::World::Graphic::CConfigFile *pObjectX = (EarthView::World::Graphic::CConfigFile*) pObjXXXX;
				pObjectX->load(stream, separators);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_load_1DataStreamPtr_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jstring separators_j, jboolean trimWhitespace_j)
			{
				const EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* separators_ch = (const ev_char*)__env->GetStringUTFChars(separators_j,JNI_FALSE);
				const EVString separators = separators_ch;
				__env->ReleaseStringUTFChars(separators_j, (const char *)separators_ch);
				#else
				const ev_wchar* separators_ch = (const ev_wchar*)__env->GetStringChars(separators_j,JNI_FALSE);
				const EVString separators = separators_ch;
				__env->ReleaseStringChars(separators_j, (const jchar *)separators_ch);
				#endif
				ev_bool trimWhitespace = (ev_bool) trimWhitespace_j;
				EarthView::World::Graphic::CConfigFile *pObjectX = (EarthView::World::Graphic::CConfigFile*) pObjXXXX;
				pObjectX->load(stream, separators, trimWhitespace);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_loadDirect_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
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
				EarthView::World::Graphic::CConfigFile *pObjectX = (EarthView::World::Graphic::CConfigFile*) pObjXXXX;
				pObjectX->loadDirect(filename);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_loadDirect_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring separators_j)
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
				const ev_char* separators_ch = (const ev_char*)__env->GetStringUTFChars(separators_j,JNI_FALSE);
				const EVString separators = separators_ch;
				__env->ReleaseStringUTFChars(separators_j, (const char *)separators_ch);
				#else
				const ev_wchar* separators_ch = (const ev_wchar*)__env->GetStringChars(separators_j,JNI_FALSE);
				const EVString separators = separators_ch;
				__env->ReleaseStringChars(separators_j, (const jchar *)separators_ch);
				#endif
				EarthView::World::Graphic::CConfigFile *pObjectX = (EarthView::World::Graphic::CConfigFile*) pObjXXXX;
				pObjectX->loadDirect(filename, separators);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_loadDirect_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring separators_j, jboolean trimWhitespace_j)
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
				const ev_char* separators_ch = (const ev_char*)__env->GetStringUTFChars(separators_j,JNI_FALSE);
				const EVString separators = separators_ch;
				__env->ReleaseStringUTFChars(separators_j, (const char *)separators_ch);
				#else
				const ev_wchar* separators_ch = (const ev_wchar*)__env->GetStringChars(separators_j,JNI_FALSE);
				const EVString separators = separators_ch;
				__env->ReleaseStringChars(separators_j, (const jchar *)separators_ch);
				#endif
				ev_bool trimWhitespace = (ev_bool) trimWhitespace_j;
				EarthView::World::Graphic::CConfigFile *pObjectX = (EarthView::World::Graphic::CConfigFile*) pObjXXXX;
				pObjectX->loadDirect(filename, separators, trimWhitespace);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_loadFromResourceSystem_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring resourceGroup_j)
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
				const ev_char* resourceGroup_ch = (const ev_char*)__env->GetStringUTFChars(resourceGroup_j,JNI_FALSE);
				const EVString resourceGroup = resourceGroup_ch;
				__env->ReleaseStringUTFChars(resourceGroup_j, (const char *)resourceGroup_ch);
				#else
				const ev_wchar* resourceGroup_ch = (const ev_wchar*)__env->GetStringChars(resourceGroup_j,JNI_FALSE);
				const EVString resourceGroup = resourceGroup_ch;
				__env->ReleaseStringChars(resourceGroup_j, (const jchar *)resourceGroup_ch);
				#endif
				EarthView::World::Graphic::CConfigFile *pObjectX = (EarthView::World::Graphic::CConfigFile*) pObjXXXX;
				pObjectX->loadFromResourceSystem(filename, resourceGroup);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_loadFromResourceSystem_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring resourceGroup_j, jstring separators_j)
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
				const ev_char* resourceGroup_ch = (const ev_char*)__env->GetStringUTFChars(resourceGroup_j,JNI_FALSE);
				const EVString resourceGroup = resourceGroup_ch;
				__env->ReleaseStringUTFChars(resourceGroup_j, (const char *)resourceGroup_ch);
				#else
				const ev_wchar* resourceGroup_ch = (const ev_wchar*)__env->GetStringChars(resourceGroup_j,JNI_FALSE);
				const EVString resourceGroup = resourceGroup_ch;
				__env->ReleaseStringChars(resourceGroup_j, (const jchar *)resourceGroup_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* separators_ch = (const ev_char*)__env->GetStringUTFChars(separators_j,JNI_FALSE);
				const EVString separators = separators_ch;
				__env->ReleaseStringUTFChars(separators_j, (const char *)separators_ch);
				#else
				const ev_wchar* separators_ch = (const ev_wchar*)__env->GetStringChars(separators_j,JNI_FALSE);
				const EVString separators = separators_ch;
				__env->ReleaseStringChars(separators_j, (const jchar *)separators_ch);
				#endif
				EarthView::World::Graphic::CConfigFile *pObjectX = (EarthView::World::Graphic::CConfigFile*) pObjXXXX;
				pObjectX->loadFromResourceSystem(filename, resourceGroup, separators);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_loadFromResourceSystem_1EVString_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring resourceGroup_j, jstring separators_j, jboolean trimWhitespace_j)
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
				const ev_char* resourceGroup_ch = (const ev_char*)__env->GetStringUTFChars(resourceGroup_j,JNI_FALSE);
				const EVString resourceGroup = resourceGroup_ch;
				__env->ReleaseStringUTFChars(resourceGroup_j, (const char *)resourceGroup_ch);
				#else
				const ev_wchar* resourceGroup_ch = (const ev_wchar*)__env->GetStringChars(resourceGroup_j,JNI_FALSE);
				const EVString resourceGroup = resourceGroup_ch;
				__env->ReleaseStringChars(resourceGroup_j, (const jchar *)resourceGroup_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* separators_ch = (const ev_char*)__env->GetStringUTFChars(separators_j,JNI_FALSE);
				const EVString separators = separators_ch;
				__env->ReleaseStringUTFChars(separators_j, (const char *)separators_ch);
				#else
				const ev_wchar* separators_ch = (const ev_wchar*)__env->GetStringChars(separators_j,JNI_FALSE);
				const EVString separators = separators_ch;
				__env->ReleaseStringChars(separators_j, (const jchar *)separators_ch);
				#endif
				ev_bool trimWhitespace = (ev_bool) trimWhitespace_j;
				EarthView::World::Graphic::CConfigFile *pObjectX = (EarthView::World::Graphic::CConfigFile*) pObjXXXX;
				pObjectX->loadFromResourceSystem(filename, resourceGroup, separators, trimWhitespace);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ConfigFile_getSetting_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				const 				EarthView::World::Graphic::CConfigFile *pObjectX = (EarthView::World::Graphic::CConfigFile*) pObjXXXX;
				EVString __values1 = pObjectX->getSetting(key);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ConfigFile_getSetting_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jstring section_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* section_ch = (const ev_char*)__env->GetStringUTFChars(section_j,JNI_FALSE);
				const EVString section = section_ch;
				__env->ReleaseStringUTFChars(section_j, (const char *)section_ch);
				#else
				const ev_wchar* section_ch = (const ev_wchar*)__env->GetStringChars(section_j,JNI_FALSE);
				const EVString section = section_ch;
				__env->ReleaseStringChars(section_j, (const jchar *)section_ch);
				#endif
				const 				EarthView::World::Graphic::CConfigFile *pObjectX = (EarthView::World::Graphic::CConfigFile*) pObjXXXX;
				EVString __values1 = pObjectX->getSetting(key, section);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ConfigFile_getSetting_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jstring section_j, jstring defaultValue_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* section_ch = (const ev_char*)__env->GetStringUTFChars(section_j,JNI_FALSE);
				const EVString section = section_ch;
				__env->ReleaseStringUTFChars(section_j, (const char *)section_ch);
				#else
				const ev_wchar* section_ch = (const ev_wchar*)__env->GetStringChars(section_j,JNI_FALSE);
				const EVString section = section_ch;
				__env->ReleaseStringChars(section_j, (const jchar *)section_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* defaultValue_ch = (const ev_char*)__env->GetStringUTFChars(defaultValue_j,JNI_FALSE);
				const EVString defaultValue = defaultValue_ch;
				__env->ReleaseStringUTFChars(defaultValue_j, (const char *)defaultValue_ch);
				#else
				const ev_wchar* defaultValue_ch = (const ev_wchar*)__env->GetStringChars(defaultValue_j,JNI_FALSE);
				const EVString defaultValue = defaultValue_ch;
				__env->ReleaseStringChars(defaultValue_j, (const jchar *)defaultValue_ch);
				#endif
				const 				EarthView::World::Graphic::CConfigFile *pObjectX = (EarthView::World::Graphic::CConfigFile*) pObjXXXX;
				EVString __values1 = pObjectX->getSetting(key, section, defaultValue);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConfigFile_getMultiSetting_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				const 				EarthView::World::Graphic::CConfigFile *pObjectX = (EarthView::World::Graphic::CConfigFile*) pObjXXXX;
				EarthView::World::Core::StringVector __values1 = pObjectX->getMultiSetting(key);
				EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConfigFile_getMultiSetting_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jstring section_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* section_ch = (const ev_char*)__env->GetStringUTFChars(section_j,JNI_FALSE);
				const EVString section = section_ch;
				__env->ReleaseStringUTFChars(section_j, (const char *)section_ch);
				#else
				const ev_wchar* section_ch = (const ev_wchar*)__env->GetStringChars(section_j,JNI_FALSE);
				const EVString section = section_ch;
				__env->ReleaseStringChars(section_j, (const jchar *)section_ch);
				#endif
				const 				EarthView::World::Graphic::CConfigFile *pObjectX = (EarthView::World::Graphic::CConfigFile*) pObjXXXX;
				EarthView::World::Core::StringVector __values1 = pObjectX->getMultiSetting(key, section);
				EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsMultiMap_push_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jstring val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EarthView::World::Graphic::CConfigFile::SettingsMultiMap *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsMultiMap*) pObjXXXX;
				pObjectX->push(key, val);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsMultiMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CConfigFile::SettingsMultiMap *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsMultiMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsMultiMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CConfigFile::SettingsMultiMap *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsMultiMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsMultiMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CConfigFile::SettingsMultiMap *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsMultiMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsMultiMap_count_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CConfigFile::SettingsMultiMap *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsMultiMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->count(key);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsMultiMap_get_1EVString_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong index_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Graphic::CConfigFile::SettingsMultiMap *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsMultiMap*) pObjXXXX;
				EVString& __values1 = pObjectX->get(key, index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsMultiMap_erase_1EVString_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong index_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Graphic::CConfigFile::SettingsMultiMap *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsMultiMap*) pObjXXXX;
				pObjectX->erase(key, index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsMultiMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConfigFile::SettingsMultiMap *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsMultiMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsMultiMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CConfigFile::SettingsMultiMap *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsMultiMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsMultiMapPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->first;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsMultiMapPair_set_1first_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->first = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsMultiMapPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->second;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsMultiMapPair_set_1second_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->second = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CConfigFile::SettingsIterator *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConfigFile::SettingsIterator *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CConfigFile::SettingsIterator *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsIterator*) pObjXXXX;
				EVString __values1 = pObjectX->nextKey();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CConfigFile::SettingsIterator *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsIterator*) pObjXXXX;
				EVString __values1 = pObjectX->nextValue();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConfigFile::SettingsIterator *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsIterator*) pObjXXXX;
				EVString* __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConfigFile::SettingsIterator *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsIterator*) pObjXXXX;
				EVString __values1 = pObjectX->next();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConfigFile::SettingsIterator *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsIterator*) pObjXXXX;
				const EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConfigFile::SettingsIterator *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsIterator*) pObjXXXX;
				const EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConfigFile::SettingsIterator *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsIterator*) pObjXXXX;
				const EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsBySection_push_1EVString_1SettingsMultiMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CConfigFile::SettingsMultiMap *&val = *(EarthView::World::Graphic::CConfigFile::SettingsMultiMap**) val_j;
				EarthView::World::Graphic::CConfigFile::SettingsBySection *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsBySection*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsBySection_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CConfigFile::SettingsBySection *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsBySection*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsBySection_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::CConfigFile::SettingsBySection& pObjectX = *(EarthView::World::Graphic::CConfigFile::SettingsBySection*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CConfigFile::SettingsMultiMap*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsBySection_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CConfigFile::SettingsBySection *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsBySection*) pObjXXXX;
				EarthView::World::Graphic::CConfigFile::SettingsMultiMap*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsBySection_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CConfigFile::SettingsBySection *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsBySection*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsBySection_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CConfigFile::SettingsBySection *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsBySection*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsBySection_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConfigFile::SettingsBySection *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsBySection*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SettingsBySection_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CConfigFile::SettingsBySection *pObjectX = (EarthView::World::Graphic::CConfigFile::SettingsBySection*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SectionPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConfigFile::SectionPair *pObjectX = (EarthView::World::Graphic::CConfigFile::SectionPair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->first;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SectionPair_set_1first_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CConfigFile::SectionPair *pObjectX = (EarthView::World::Graphic::CConfigFile::SectionPair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->first = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SectionPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConfigFile::SectionPair *pObjectX = (EarthView::World::Graphic::CConfigFile::SectionPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SectionPair_set_1second_1SettingsMultiMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CConfigFile::SectionPair *pObjectX = (EarthView::World::Graphic::CConfigFile::SectionPair*)pObjXXXX;
				pObjectX->second = (EarthView::World::Graphic::CConfigFile::SettingsMultiMap*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SectionIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CConfigFile::SectionIterator *pObjectX = (EarthView::World::Graphic::CConfigFile::SectionIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SectionIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConfigFile::SectionIterator *pObjectX = (EarthView::World::Graphic::CConfigFile::SectionIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SectionIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CConfigFile::SectionIterator *pObjectX = (EarthView::World::Graphic::CConfigFile::SectionIterator*) pObjXXXX;
				EVString __values1 = pObjectX->nextKey();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SectionIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CConfigFile::SectionIterator *pObjectX = (EarthView::World::Graphic::CConfigFile::SectionIterator*) pObjXXXX;
				EarthView::World::Graphic::CConfigFile::SettingsMultiMap* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SectionIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConfigFile::SectionIterator *pObjectX = (EarthView::World::Graphic::CConfigFile::SectionIterator*) pObjXXXX;
				EarthView::World::Graphic::CConfigFile::SettingsMultiMap** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SectionIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConfigFile::SectionIterator *pObjectX = (EarthView::World::Graphic::CConfigFile::SectionIterator*) pObjXXXX;
				EarthView::World::Graphic::CConfigFile::SettingsMultiMap* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SectionIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConfigFile::SectionIterator *pObjectX = (EarthView::World::Graphic::CConfigFile::SectionIterator*) pObjXXXX;
				const EarthView::World::Graphic::CConfigFile::SectionPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SectionIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConfigFile::SectionIterator *pObjectX = (EarthView::World::Graphic::CConfigFile::SectionIterator*) pObjXXXX;
				const EarthView::World::Graphic::CConfigFile::SectionPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConfigFile_00024SectionIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConfigFile::SectionIterator *pObjectX = (EarthView::World::Graphic::CConfigFile::SectionIterator*) pObjXXXX;
				const EarthView::World::Graphic::CConfigFile::SectionPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConfigFile_getSectionIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConfigFile *pObjectX = (EarthView::World::Graphic::CConfigFile*) pObjXXXX;
				EarthView::World::Graphic::CConfigFile::SectionIterator __values1 = pObjectX->getSectionIterator();
				EarthView::World::Graphic::CConfigFile::SectionIterator *returnvalues = new EarthView::World::Graphic::CConfigFile::SectionIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConfigFile_getSettingsIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConfigFile *pObjectX = (EarthView::World::Graphic::CConfigFile*) pObjXXXX;
				EarthView::World::Graphic::CConfigFile::SettingsIterator __values1 = pObjectX->getSettingsIterator();
				EarthView::World::Graphic::CConfigFile::SettingsIterator *returnvalues = new EarthView::World::Graphic::CConfigFile::SettingsIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConfigFile_getSettingsIterator_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring section_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* section_ch = (const ev_char*)__env->GetStringUTFChars(section_j,JNI_FALSE);
				const EVString section = section_ch;
				__env->ReleaseStringUTFChars(section_j, (const char *)section_ch);
				#else
				const ev_wchar* section_ch = (const ev_wchar*)__env->GetStringChars(section_j,JNI_FALSE);
				const EVString section = section_ch;
				__env->ReleaseStringChars(section_j, (const jchar *)section_ch);
				#endif
				EarthView::World::Graphic::CConfigFile *pObjectX = (EarthView::World::Graphic::CConfigFile*) pObjXXXX;
				EarthView::World::Graphic::CConfigFile::SettingsIterator __values1 = pObjectX->getSettingsIterator(section);
				EarthView::World::Graphic::CConfigFile::SettingsIterator *returnvalues = new EarthView::World::Graphic::CConfigFile::SettingsIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigFile_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CConfigFile *pObjectX = (EarthView::World::Graphic::CConfigFile*) pObjXXXX;
				pObjectX->clear();
			}
		}
	}
}
