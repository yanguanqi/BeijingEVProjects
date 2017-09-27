/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/ev_string.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringUtil_trim_1EVString(JNIEnv *__env , jclass __clazz, jstring str_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* str_ch = (const ev_char*)__env->GetStringUTFChars(str_j,JNI_FALSE);
				EVString str = str_ch;
				__env->ReleaseStringUTFChars(str_j, (const char *)str_ch);
				#else
				const ev_wchar* str_ch = (const ev_wchar*)__env->GetStringChars(str_j,JNI_FALSE);
				EVString str = str_ch;
				__env->ReleaseStringChars(str_j, (const jchar *)str_ch);
				#endif
				EarthView::World::Core::CStringUtil::trim(str);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringUtil_trim_1EVString_1ev_1bool(JNIEnv *__env , jclass __clazz, jstring str_j, jboolean left_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* str_ch = (const ev_char*)__env->GetStringUTFChars(str_j,JNI_FALSE);
				EVString str = str_ch;
				__env->ReleaseStringUTFChars(str_j, (const char *)str_ch);
				#else
				const ev_wchar* str_ch = (const ev_wchar*)__env->GetStringChars(str_j,JNI_FALSE);
				EVString str = str_ch;
				__env->ReleaseStringChars(str_j, (const jchar *)str_ch);
				#endif
				ev_bool left = (ev_bool) left_j;
				EarthView::World::Core::CStringUtil::trim(str, left);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringUtil_trim_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env , jclass __clazz, jstring str_j, jboolean left_j, jboolean right_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* str_ch = (const ev_char*)__env->GetStringUTFChars(str_j,JNI_FALSE);
				EVString str = str_ch;
				__env->ReleaseStringUTFChars(str_j, (const char *)str_ch);
				#else
				const ev_wchar* str_ch = (const ev_wchar*)__env->GetStringChars(str_j,JNI_FALSE);
				EVString str = str_ch;
				__env->ReleaseStringChars(str_j, (const jchar *)str_ch);
				#endif
				ev_bool left = (ev_bool) left_j;
				ev_bool right = (ev_bool) right_j;
				EarthView::World::Core::CStringUtil::trim(str, left, right);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_StringUtil_split_1EVString(JNIEnv *__env , jclass __clazz, jstring str_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* str_ch = (const ev_char*)__env->GetStringUTFChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringUTFChars(str_j, (const char *)str_ch);
				#else
				const ev_wchar* str_ch = (const ev_wchar*)__env->GetStringChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringChars(str_j, (const jchar *)str_ch);
				#endif
				EarthView::World::Core::StringVector __values1 = EarthView::World::Core::CStringUtil::split(str);
				EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_StringUtil_split_1EVString_1EVString(JNIEnv *__env , jclass __clazz, jstring str_j, jstring delims_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* str_ch = (const ev_char*)__env->GetStringUTFChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringUTFChars(str_j, (const char *)str_ch);
				#else
				const ev_wchar* str_ch = (const ev_wchar*)__env->GetStringChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringChars(str_j, (const jchar *)str_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* delims_ch = (const ev_char*)__env->GetStringUTFChars(delims_j,JNI_FALSE);
				const EVString delims = delims_ch;
				__env->ReleaseStringUTFChars(delims_j, (const char *)delims_ch);
				#else
				const ev_wchar* delims_ch = (const ev_wchar*)__env->GetStringChars(delims_j,JNI_FALSE);
				const EVString delims = delims_ch;
				__env->ReleaseStringChars(delims_j, (const jchar *)delims_ch);
				#endif
				EarthView::World::Core::StringVector __values1 = EarthView::World::Core::CStringUtil::split(str, delims);
				EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_StringUtil_split_1EVString_1EVString_1ev_1uint32(JNIEnv *__env , jclass __clazz, jstring str_j, jstring delims_j, jlong maxSplits_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* str_ch = (const ev_char*)__env->GetStringUTFChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringUTFChars(str_j, (const char *)str_ch);
				#else
				const ev_wchar* str_ch = (const ev_wchar*)__env->GetStringChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringChars(str_j, (const jchar *)str_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* delims_ch = (const ev_char*)__env->GetStringUTFChars(delims_j,JNI_FALSE);
				const EVString delims = delims_ch;
				__env->ReleaseStringUTFChars(delims_j, (const char *)delims_ch);
				#else
				const ev_wchar* delims_ch = (const ev_wchar*)__env->GetStringChars(delims_j,JNI_FALSE);
				const EVString delims = delims_ch;
				__env->ReleaseStringChars(delims_j, (const jchar *)delims_ch);
				#endif
				ev_uint32 maxSplits = (ev_uint32) maxSplits_j;
				EarthView::World::Core::StringVector __values1 = EarthView::World::Core::CStringUtil::split(str, delims, maxSplits);
				EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_StringUtil_tokenise_1EVString(JNIEnv *__env , jclass __clazz, jstring str_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* str_ch = (const ev_char*)__env->GetStringUTFChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringUTFChars(str_j, (const char *)str_ch);
				#else
				const ev_wchar* str_ch = (const ev_wchar*)__env->GetStringChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringChars(str_j, (const jchar *)str_ch);
				#endif
				EarthView::World::Core::StringVector __values1 = EarthView::World::Core::CStringUtil::tokenise(str);
				EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_StringUtil_tokenise_1EVString_1EVString(JNIEnv *__env , jclass __clazz, jstring str_j, jstring delims_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* str_ch = (const ev_char*)__env->GetStringUTFChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringUTFChars(str_j, (const char *)str_ch);
				#else
				const ev_wchar* str_ch = (const ev_wchar*)__env->GetStringChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringChars(str_j, (const jchar *)str_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* delims_ch = (const ev_char*)__env->GetStringUTFChars(delims_j,JNI_FALSE);
				const EVString delims = delims_ch;
				__env->ReleaseStringUTFChars(delims_j, (const char *)delims_ch);
				#else
				const ev_wchar* delims_ch = (const ev_wchar*)__env->GetStringChars(delims_j,JNI_FALSE);
				const EVString delims = delims_ch;
				__env->ReleaseStringChars(delims_j, (const jchar *)delims_ch);
				#endif
				EarthView::World::Core::StringVector __values1 = EarthView::World::Core::CStringUtil::tokenise(str, delims);
				EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_StringUtil_tokenise_1EVString_1EVString_1EVString(JNIEnv *__env , jclass __clazz, jstring str_j, jstring delims_j, jstring doubleDelims_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* str_ch = (const ev_char*)__env->GetStringUTFChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringUTFChars(str_j, (const char *)str_ch);
				#else
				const ev_wchar* str_ch = (const ev_wchar*)__env->GetStringChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringChars(str_j, (const jchar *)str_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* delims_ch = (const ev_char*)__env->GetStringUTFChars(delims_j,JNI_FALSE);
				const EVString delims = delims_ch;
				__env->ReleaseStringUTFChars(delims_j, (const char *)delims_ch);
				#else
				const ev_wchar* delims_ch = (const ev_wchar*)__env->GetStringChars(delims_j,JNI_FALSE);
				const EVString delims = delims_ch;
				__env->ReleaseStringChars(delims_j, (const jchar *)delims_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* doubleDelims_ch = (const ev_char*)__env->GetStringUTFChars(doubleDelims_j,JNI_FALSE);
				const EVString doubleDelims = doubleDelims_ch;
				__env->ReleaseStringUTFChars(doubleDelims_j, (const char *)doubleDelims_ch);
				#else
				const ev_wchar* doubleDelims_ch = (const ev_wchar*)__env->GetStringChars(doubleDelims_j,JNI_FALSE);
				const EVString doubleDelims = doubleDelims_ch;
				__env->ReleaseStringChars(doubleDelims_j, (const jchar *)doubleDelims_ch);
				#endif
				EarthView::World::Core::StringVector __values1 = EarthView::World::Core::CStringUtil::tokenise(str, delims, doubleDelims);
				EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_StringUtil_tokenise_1EVString_1EVString_1EVString_1ev_1uint32(JNIEnv *__env , jclass __clazz, jstring str_j, jstring delims_j, jstring doubleDelims_j, jlong maxSplits_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* str_ch = (const ev_char*)__env->GetStringUTFChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringUTFChars(str_j, (const char *)str_ch);
				#else
				const ev_wchar* str_ch = (const ev_wchar*)__env->GetStringChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringChars(str_j, (const jchar *)str_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* delims_ch = (const ev_char*)__env->GetStringUTFChars(delims_j,JNI_FALSE);
				const EVString delims = delims_ch;
				__env->ReleaseStringUTFChars(delims_j, (const char *)delims_ch);
				#else
				const ev_wchar* delims_ch = (const ev_wchar*)__env->GetStringChars(delims_j,JNI_FALSE);
				const EVString delims = delims_ch;
				__env->ReleaseStringChars(delims_j, (const jchar *)delims_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* doubleDelims_ch = (const ev_char*)__env->GetStringUTFChars(doubleDelims_j,JNI_FALSE);
				const EVString doubleDelims = doubleDelims_ch;
				__env->ReleaseStringUTFChars(doubleDelims_j, (const char *)doubleDelims_ch);
				#else
				const ev_wchar* doubleDelims_ch = (const ev_wchar*)__env->GetStringChars(doubleDelims_j,JNI_FALSE);
				const EVString doubleDelims = doubleDelims_ch;
				__env->ReleaseStringChars(doubleDelims_j, (const jchar *)doubleDelims_ch);
				#endif
				ev_uint32 maxSplits = (ev_uint32) maxSplits_j;
				EarthView::World::Core::StringVector __values1 = EarthView::World::Core::CStringUtil::tokenise(str, delims, doubleDelims, maxSplits);
				EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringUtil_toLowerCase_1EVString(JNIEnv *__env , jclass __clazz, jstring str_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* str_ch = (const ev_char*)__env->GetStringUTFChars(str_j,JNI_FALSE);
				EVString str = str_ch;
				__env->ReleaseStringUTFChars(str_j, (const char *)str_ch);
				#else
				const ev_wchar* str_ch = (const ev_wchar*)__env->GetStringChars(str_j,JNI_FALSE);
				EVString str = str_ch;
				__env->ReleaseStringChars(str_j, (const jchar *)str_ch);
				#endif
				EarthView::World::Core::CStringUtil::toLowerCase(str);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringUtil_toUpperCase_1EVString(JNIEnv *__env , jclass __clazz, jstring str_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* str_ch = (const ev_char*)__env->GetStringUTFChars(str_j,JNI_FALSE);
				EVString str = str_ch;
				__env->ReleaseStringUTFChars(str_j, (const char *)str_ch);
				#else
				const ev_wchar* str_ch = (const ev_wchar*)__env->GetStringChars(str_j,JNI_FALSE);
				EVString str = str_ch;
				__env->ReleaseStringChars(str_j, (const jchar *)str_ch);
				#endif
				EarthView::World::Core::CStringUtil::toUpperCase(str);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_StringUtil_startsWith_1EVString_1EVString(JNIEnv *__env , jclass __clazz, jstring str_j, jstring pattern_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* str_ch = (const ev_char*)__env->GetStringUTFChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringUTFChars(str_j, (const char *)str_ch);
				#else
				const ev_wchar* str_ch = (const ev_wchar*)__env->GetStringChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringChars(str_j, (const jchar *)str_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				ev_bool __values1 = EarthView::World::Core::CStringUtil::startsWith(str, pattern);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_StringUtil_startsWith_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jclass __clazz, jstring str_j, jstring pattern_j, jboolean lowerCase_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* str_ch = (const ev_char*)__env->GetStringUTFChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringUTFChars(str_j, (const char *)str_ch);
				#else
				const ev_wchar* str_ch = (const ev_wchar*)__env->GetStringChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringChars(str_j, (const jchar *)str_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				ev_bool lowerCase = (ev_bool) lowerCase_j;
				ev_bool __values1 = EarthView::World::Core::CStringUtil::startsWith(str, pattern, lowerCase);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_StringUtil_endsWith_1EVString_1EVString(JNIEnv *__env , jclass __clazz, jstring str_j, jstring pattern_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* str_ch = (const ev_char*)__env->GetStringUTFChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringUTFChars(str_j, (const char *)str_ch);
				#else
				const ev_wchar* str_ch = (const ev_wchar*)__env->GetStringChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringChars(str_j, (const jchar *)str_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				ev_bool __values1 = EarthView::World::Core::CStringUtil::endsWith(str, pattern);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_StringUtil_endsWith_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jclass __clazz, jstring str_j, jstring pattern_j, jboolean lowerCase_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* str_ch = (const ev_char*)__env->GetStringUTFChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringUTFChars(str_j, (const char *)str_ch);
				#else
				const ev_wchar* str_ch = (const ev_wchar*)__env->GetStringChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringChars(str_j, (const jchar *)str_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				ev_bool lowerCase = (ev_bool) lowerCase_j;
				ev_bool __values1 = EarthView::World::Core::CStringUtil::endsWith(str, pattern, lowerCase);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_StringUtil_standardisePath_1EVString(JNIEnv *__env , jclass __clazz, jstring init_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* init_ch = (const ev_char*)__env->GetStringUTFChars(init_j,JNI_FALSE);
				const EVString init = init_ch;
				__env->ReleaseStringUTFChars(init_j, (const char *)init_ch);
				#else
				const ev_wchar* init_ch = (const ev_wchar*)__env->GetStringChars(init_j,JNI_FALSE);
				const EVString init = init_ch;
				__env->ReleaseStringChars(init_j, (const jchar *)init_ch);
				#endif
				EVString __values1 = EarthView::World::Core::CStringUtil::standardisePath(init);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringUtil_splitFilename_1EVString_1EVString_1EVString(JNIEnv *__env , jclass __clazz, jstring qualifiedName_j, jlong outBasename_j, jlong outPath_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* qualifiedName_ch = (const ev_char*)__env->GetStringUTFChars(qualifiedName_j,JNI_FALSE);
				const EVString qualifiedName = qualifiedName_ch;
				__env->ReleaseStringUTFChars(qualifiedName_j, (const char *)qualifiedName_ch);
				#else
				const ev_wchar* qualifiedName_ch = (const ev_wchar*)__env->GetStringChars(qualifiedName_j,JNI_FALSE);
				const EVString qualifiedName = qualifiedName_ch;
				__env->ReleaseStringChars(qualifiedName_j, (const jchar *)qualifiedName_ch);
				#endif
				EVString &outBasename = *(EVString*) outBasename_j;
				EVString &outPath = *(EVString*) outPath_j;
				EarthView::World::Core::CStringUtil::splitFilename(qualifiedName, outBasename, outPath);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringUtil_splitFullFilename_1EVString_1EVString_1EVString_1EVString(JNIEnv *__env , jclass __clazz, jstring qualifiedName_j, jlong outBasename_j, jlong outExtention_j, jlong outPath_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* qualifiedName_ch = (const ev_char*)__env->GetStringUTFChars(qualifiedName_j,JNI_FALSE);
				const EVString qualifiedName = qualifiedName_ch;
				__env->ReleaseStringUTFChars(qualifiedName_j, (const char *)qualifiedName_ch);
				#else
				const ev_wchar* qualifiedName_ch = (const ev_wchar*)__env->GetStringChars(qualifiedName_j,JNI_FALSE);
				const EVString qualifiedName = qualifiedName_ch;
				__env->ReleaseStringChars(qualifiedName_j, (const jchar *)qualifiedName_ch);
				#endif
				EVString &outBasename = *(EVString*) outBasename_j;
				EVString &outExtention = *(EVString*) outExtention_j;
				EVString &outPath = *(EVString*) outPath_j;
				EarthView::World::Core::CStringUtil::splitFullFilename(qualifiedName, outBasename, outExtention, outPath);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringUtil_splitBaseFilename_1EVString_1EVString_1EVString(JNIEnv *__env , jclass __clazz, jstring fullName_j, jlong outBasename_j, jlong outExtention_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* fullName_ch = (const ev_char*)__env->GetStringUTFChars(fullName_j,JNI_FALSE);
				const EVString fullName = fullName_ch;
				__env->ReleaseStringUTFChars(fullName_j, (const char *)fullName_ch);
				#else
				const ev_wchar* fullName_ch = (const ev_wchar*)__env->GetStringChars(fullName_j,JNI_FALSE);
				const EVString fullName = fullName_ch;
				__env->ReleaseStringChars(fullName_j, (const jchar *)fullName_ch);
				#endif
				EVString &outBasename = *(EVString*) outBasename_j;
				EVString &outExtention = *(EVString*) outExtention_j;
				EarthView::World::Core::CStringUtil::splitBaseFilename(fullName, outBasename, outExtention);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_StringUtil_match_1EVString_1EVString(JNIEnv *__env , jclass __clazz, jstring str_j, jstring pattern_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* str_ch = (const ev_char*)__env->GetStringUTFChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringUTFChars(str_j, (const char *)str_ch);
				#else
				const ev_wchar* str_ch = (const ev_wchar*)__env->GetStringChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringChars(str_j, (const jchar *)str_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				ev_bool __values1 = EarthView::World::Core::CStringUtil::match(str, pattern);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_StringUtil_match_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jclass __clazz, jstring str_j, jstring pattern_j, jboolean caseSensitive_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* str_ch = (const ev_char*)__env->GetStringUTFChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringUTFChars(str_j, (const char *)str_ch);
				#else
				const ev_wchar* str_ch = (const ev_wchar*)__env->GetStringChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringChars(str_j, (const jchar *)str_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				ev_bool caseSensitive = (ev_bool) caseSensitive_j;
				ev_bool __values1 = EarthView::World::Core::CStringUtil::match(str, pattern, caseSensitive);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_StringUtil_replaceAll_1EVString_1EVString_1EVString(JNIEnv *__env , jclass __clazz, jstring source_j, jstring replaceWhat_j, jstring replaceWithWhat_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* source_ch = (const ev_char*)__env->GetStringUTFChars(source_j,JNI_FALSE);
				const EVString source = source_ch;
				__env->ReleaseStringUTFChars(source_j, (const char *)source_ch);
				#else
				const ev_wchar* source_ch = (const ev_wchar*)__env->GetStringChars(source_j,JNI_FALSE);
				const EVString source = source_ch;
				__env->ReleaseStringChars(source_j, (const jchar *)source_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* replaceWhat_ch = (const ev_char*)__env->GetStringUTFChars(replaceWhat_j,JNI_FALSE);
				const EVString replaceWhat = replaceWhat_ch;
				__env->ReleaseStringUTFChars(replaceWhat_j, (const char *)replaceWhat_ch);
				#else
				const ev_wchar* replaceWhat_ch = (const ev_wchar*)__env->GetStringChars(replaceWhat_j,JNI_FALSE);
				const EVString replaceWhat = replaceWhat_ch;
				__env->ReleaseStringChars(replaceWhat_j, (const jchar *)replaceWhat_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* replaceWithWhat_ch = (const ev_char*)__env->GetStringUTFChars(replaceWithWhat_j,JNI_FALSE);
				const EVString replaceWithWhat = replaceWithWhat_ch;
				__env->ReleaseStringUTFChars(replaceWithWhat_j, (const char *)replaceWithWhat_ch);
				#else
				const ev_wchar* replaceWithWhat_ch = (const ev_wchar*)__env->GetStringChars(replaceWithWhat_j,JNI_FALSE);
				const EVString replaceWithWhat = replaceWithWhat_ch;
				__env->ReleaseStringChars(replaceWithWhat_j, (const jchar *)replaceWithWhat_ch);
				#endif
				const EVString __values1 = EarthView::World::Core::CStringUtil::replaceAll(source, replaceWhat, replaceWithWhat);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_StringUtil_get_1BLANK_1void(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Core::CStringUtil::BLANK;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
		}
	}
}
