/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/dir.h"
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Directory_create_1ev_1string(JNIEnv *__env , jclass __clazz, jstring strDir_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strDir_ch = (const ev_char*)__env->GetStringUTFChars(strDir_j,JNI_FALSE);
				const ev_string strDir = strDir_ch;
				__env->ReleaseStringUTFChars(strDir_j, (const char *)strDir_ch);
				#else
				const ev_wchar* strDir_ch = (const ev_wchar*)__env->GetStringChars(strDir_j,JNI_FALSE);
				const ev_string strDir = strDir_ch;
				__env->ReleaseStringChars(strDir_j, (const jchar *)strDir_ch);
				#endif
				ev_bool __values1 = EarthView::World::Core::CDirectory::create(strDir);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Directory_remove_1ev_1string(JNIEnv *__env , jclass __clazz, jstring strDir_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strDir_ch = (const ev_char*)__env->GetStringUTFChars(strDir_j,JNI_FALSE);
				const ev_string strDir = strDir_ch;
				__env->ReleaseStringUTFChars(strDir_j, (const char *)strDir_ch);
				#else
				const ev_wchar* strDir_ch = (const ev_wchar*)__env->GetStringChars(strDir_j,JNI_FALSE);
				const ev_string strDir = strDir_ch;
				__env->ReleaseStringChars(strDir_j, (const jchar *)strDir_ch);
				#endif
				ev_bool __values1 = EarthView::World::Core::CDirectory::remove(strDir);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Directory_exists_1ev_1string(JNIEnv *__env , jclass __clazz, jstring strDir_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strDir_ch = (const ev_char*)__env->GetStringUTFChars(strDir_j,JNI_FALSE);
				const ev_string strDir = strDir_ch;
				__env->ReleaseStringUTFChars(strDir_j, (const char *)strDir_ch);
				#else
				const ev_wchar* strDir_ch = (const ev_wchar*)__env->GetStringChars(strDir_j,JNI_FALSE);
				const ev_string strDir = strDir_ch;
				__env->ReleaseStringChars(strDir_j, (const jchar *)strDir_ch);
				#endif
				ev_bool __values1 = EarthView::World::Core::CDirectory::exists(strDir);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Directory_copy_1ev_1string_1ev_1string_1ev_1bool(JNIEnv *__env , jclass __clazz, jstring strSrcDir_j, jstring strDstDir_j, jboolean bOverWrite_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strSrcDir_ch = (const ev_char*)__env->GetStringUTFChars(strSrcDir_j,JNI_FALSE);
				const ev_string strSrcDir = strSrcDir_ch;
				__env->ReleaseStringUTFChars(strSrcDir_j, (const char *)strSrcDir_ch);
				#else
				const ev_wchar* strSrcDir_ch = (const ev_wchar*)__env->GetStringChars(strSrcDir_j,JNI_FALSE);
				const ev_string strSrcDir = strSrcDir_ch;
				__env->ReleaseStringChars(strSrcDir_j, (const jchar *)strSrcDir_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strDstDir_ch = (const ev_char*)__env->GetStringUTFChars(strDstDir_j,JNI_FALSE);
				const ev_string strDstDir = strDstDir_ch;
				__env->ReleaseStringUTFChars(strDstDir_j, (const char *)strDstDir_ch);
				#else
				const ev_wchar* strDstDir_ch = (const ev_wchar*)__env->GetStringChars(strDstDir_j,JNI_FALSE);
				const ev_string strDstDir = strDstDir_ch;
				__env->ReleaseStringChars(strDstDir_j, (const jchar *)strDstDir_ch);
				#endif
				ev_bool bOverWrite = (ev_bool) bOverWrite_j;
				ev_bool __values1 = EarthView::World::Core::CDirectory::copy(strSrcDir, strDstDir, bOverWrite);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Directory_move_1ev_1string_1ev_1string_1ev_1bool(JNIEnv *__env , jclass __clazz, jstring strSrcDir_j, jstring strDstDir_j, jboolean bOverWrite_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strSrcDir_ch = (const ev_char*)__env->GetStringUTFChars(strSrcDir_j,JNI_FALSE);
				const ev_string strSrcDir = strSrcDir_ch;
				__env->ReleaseStringUTFChars(strSrcDir_j, (const char *)strSrcDir_ch);
				#else
				const ev_wchar* strSrcDir_ch = (const ev_wchar*)__env->GetStringChars(strSrcDir_j,JNI_FALSE);
				const ev_string strSrcDir = strSrcDir_ch;
				__env->ReleaseStringChars(strSrcDir_j, (const jchar *)strSrcDir_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strDstDir_ch = (const ev_char*)__env->GetStringUTFChars(strDstDir_j,JNI_FALSE);
				const ev_string strDstDir = strDstDir_ch;
				__env->ReleaseStringUTFChars(strDstDir_j, (const char *)strDstDir_ch);
				#else
				const ev_wchar* strDstDir_ch = (const ev_wchar*)__env->GetStringChars(strDstDir_j,JNI_FALSE);
				const ev_string strDstDir = strDstDir_ch;
				__env->ReleaseStringChars(strDstDir_j, (const jchar *)strDstDir_ch);
				#endif
				ev_bool bOverWrite = (ev_bool) bOverWrite_j;
				ev_bool __values1 = EarthView::World::Core::CDirectory::move(strSrcDir, strDstDir, bOverWrite);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Directory_getFiles_1ev_1string_1CStringArray_1ev_1bool(JNIEnv *__env , jclass __clazz, jstring strDir_j, jlong files_j, jboolean bSubDir_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strDir_ch = (const ev_char*)__env->GetStringUTFChars(strDir_j,JNI_FALSE);
				const ev_string strDir = strDir_ch;
				__env->ReleaseStringUTFChars(strDir_j, (const char *)strDir_ch);
				#else
				const ev_wchar* strDir_ch = (const ev_wchar*)__env->GetStringChars(strDir_j,JNI_FALSE);
				const ev_string strDir = strDir_ch;
				__env->ReleaseStringChars(strDir_j, (const jchar *)strDir_ch);
				#endif
				EarthView::World::Core::CStringArray &files = *(EarthView::World::Core::CStringArray*) files_j;
				ev_bool bSubDir = (ev_bool) bSubDir_j;
				ev_bool __values1 = EarthView::World::Core::CDirectory::getFiles(strDir, files, bSubDir);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Directory_getFiles_1ev_1string_1CStringArray_1ev_1bool_1ev_1string(JNIEnv *__env , jclass __clazz, jstring strDir_j, jlong files_j, jboolean bSubDir_j, jstring strWildcard_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strDir_ch = (const ev_char*)__env->GetStringUTFChars(strDir_j,JNI_FALSE);
				const ev_string strDir = strDir_ch;
				__env->ReleaseStringUTFChars(strDir_j, (const char *)strDir_ch);
				#else
				const ev_wchar* strDir_ch = (const ev_wchar*)__env->GetStringChars(strDir_j,JNI_FALSE);
				const ev_string strDir = strDir_ch;
				__env->ReleaseStringChars(strDir_j, (const jchar *)strDir_ch);
				#endif
				EarthView::World::Core::CStringArray &files = *(EarthView::World::Core::CStringArray*) files_j;
				ev_bool bSubDir = (ev_bool) bSubDir_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strWildcard_ch = (const ev_char*)__env->GetStringUTFChars(strWildcard_j,JNI_FALSE);
				const ev_string strWildcard = strWildcard_ch;
				__env->ReleaseStringUTFChars(strWildcard_j, (const char *)strWildcard_ch);
				#else
				const ev_wchar* strWildcard_ch = (const ev_wchar*)__env->GetStringChars(strWildcard_j,JNI_FALSE);
				const ev_string strWildcard = strWildcard_ch;
				__env->ReleaseStringChars(strWildcard_j, (const jchar *)strWildcard_ch);
				#endif
				ev_bool __values1 = EarthView::World::Core::CDirectory::getFiles(strDir, files, bSubDir, strWildcard);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Directory_getDirectories_1ev_1string_1CStringArray_1ev_1bool(JNIEnv *__env , jclass __clazz, jstring strDir_j, jlong dirs_j, jboolean bSubDir_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strDir_ch = (const ev_char*)__env->GetStringUTFChars(strDir_j,JNI_FALSE);
				const ev_string strDir = strDir_ch;
				__env->ReleaseStringUTFChars(strDir_j, (const char *)strDir_ch);
				#else
				const ev_wchar* strDir_ch = (const ev_wchar*)__env->GetStringChars(strDir_j,JNI_FALSE);
				const ev_string strDir = strDir_ch;
				__env->ReleaseStringChars(strDir_j, (const jchar *)strDir_ch);
				#endif
				EarthView::World::Core::CStringArray &dirs = *(EarthView::World::Core::CStringArray*) dirs_j;
				ev_bool bSubDir = (ev_bool) bSubDir_j;
				ev_bool __values1 = EarthView::World::Core::CDirectory::getDirectories(strDir, dirs, bSubDir);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Directory_getAttributes_1ev_1string_1FileAttributes(JNIEnv *__env , jclass __clazz, jstring strDir_j, jlong attrs_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strDir_ch = (const ev_char*)__env->GetStringUTFChars(strDir_j,JNI_FALSE);
				const ev_string strDir = strDir_ch;
				__env->ReleaseStringUTFChars(strDir_j, (const char *)strDir_ch);
				#else
				const ev_wchar* strDir_ch = (const ev_wchar*)__env->GetStringChars(strDir_j,JNI_FALSE);
				const ev_string strDir = strDir_ch;
				__env->ReleaseStringChars(strDir_j, (const jchar *)strDir_ch);
				#endif
				EarthView::World::Core::FileAttributes &attrs = *(EarthView::World::Core::FileAttributes*) attrs_j;
				ev_bool __values1 = EarthView::World::Core::CDirectory::getAttributes(strDir, attrs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Directory_getCurrentDirectory_1ev_1string(JNIEnv *__env , jclass __clazz, jlong dir_j)
			{
				ev_string &dir = *(ev_string*) dir_j;
				ev_bool __values1 = EarthView::World::Core::CDirectory::getCurrentDirectory(dir);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Directory_setCurrentDirectory_1ev_1string(JNIEnv *__env , jclass __clazz, jstring dir_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dir_ch = (const ev_char*)__env->GetStringUTFChars(dir_j,JNI_FALSE);
				const ev_string dir = dir_ch;
				__env->ReleaseStringUTFChars(dir_j, (const char *)dir_ch);
				#else
				const ev_wchar* dir_ch = (const ev_wchar*)__env->GetStringChars(dir_j,JNI_FALSE);
				const ev_string dir = dir_ch;
				__env->ReleaseStringChars(dir_j, (const jchar *)dir_ch);
				#endif
				ev_bool __values1 = EarthView::World::Core::CDirectory::setCurrentDirectory(dir);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Directory_getTempDirectory_1ev_1string(JNIEnv *__env , jclass __clazz, jlong dir_j)
			{
				ev_string &dir = *(ev_string*) dir_j;
				ev_bool __values1 = EarthView::World::Core::CDirectory::getTempDirectory(dir);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Directory_getSystemDirectory_1ev_1string(JNIEnv *__env , jclass __clazz, jlong dir_j)
			{
				ev_string &dir = *(ev_string*) dir_j;
				ev_bool __values1 = EarthView::World::Core::CDirectory::getSystemDirectory(dir);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Directory_getModuleName_1ev_1string(JNIEnv *__env , jclass __clazz, jlong module_j)
			{
				ev_string &module = *(ev_string*) module_j;
				ev_bool __values1 = EarthView::World::Core::CDirectory::getModuleName(module);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_Directory_formatPath_1EVString(JNIEnv *__env , jclass __clazz, jstring path_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* path_ch = (const ev_char*)__env->GetStringUTFChars(path_j,JNI_FALSE);
				const EVString path = path_ch;
				__env->ReleaseStringUTFChars(path_j, (const char *)path_ch);
				#else
				const ev_wchar* path_ch = (const ev_wchar*)__env->GetStringChars(path_j,JNI_FALSE);
				const EVString path = path_ch;
				__env->ReleaseStringChars(path_j, (const jchar *)path_ch);
				#endif
				EVString __values1 = EarthView::World::Core::CDirectory::formatPath(path);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_Directory_formatPath_1EVString_1EVString(JNIEnv *__env , jclass __clazz, jstring path_j, jstring file_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* path_ch = (const ev_char*)__env->GetStringUTFChars(path_j,JNI_FALSE);
				const EVString path = path_ch;
				__env->ReleaseStringUTFChars(path_j, (const char *)path_ch);
				#else
				const ev_wchar* path_ch = (const ev_wchar*)__env->GetStringChars(path_j,JNI_FALSE);
				const EVString path = path_ch;
				__env->ReleaseStringChars(path_j, (const jchar *)path_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* file_ch = (const ev_char*)__env->GetStringUTFChars(file_j,JNI_FALSE);
				const EVString file = file_ch;
				__env->ReleaseStringUTFChars(file_j, (const char *)file_ch);
				#else
				const ev_wchar* file_ch = (const ev_wchar*)__env->GetStringChars(file_j,JNI_FALSE);
				const EVString file = file_ch;
				__env->ReleaseStringChars(file_j, (const jchar *)file_ch);
				#endif
				EVString __values1 = EarthView::World::Core::CDirectory::formatPath(path, file);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
		}
	}
}
