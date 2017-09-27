/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/fileengine_def.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_core_FILEMODEHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					READ_MODE,
					WRITE_MODE,
					APPEND_MODE,
					BINARY_READ_MODE,
					BINARY_WRITE_MODE,
					BINARYE_APPEND_MODE
				};
				jintArray array = __env->NewIntArray(6);
				__env->SetIntArrayRegion(array, 0, 6, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_core_FILEWAYHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					AT_BEGIN,
					AT_END,
					AT_CURRENT
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_core_FILEACCESSHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					READ_ACCESS,
					READWRITE_ACCESS
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_FileAttributes_get_1bIsDirectory_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::FileAttributes *pObjectX = (EarthView::World::Core::FileAttributes*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->bIsDirectory);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileAttributes_set_1bIsDirectory_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Core::FileAttributes *pObjectX = (EarthView::World::Core::FileAttributes*)pObjXXXX;
				pObjectX->bIsDirectory = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_FileAttributes_get_1bIsHidden_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::FileAttributes *pObjectX = (EarthView::World::Core::FileAttributes*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->bIsHidden);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileAttributes_set_1bIsHidden_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Core::FileAttributes *pObjectX = (EarthView::World::Core::FileAttributes*)pObjXXXX;
				pObjectX->bIsHidden = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_FileAttributes_get_1bIsReadOnly_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::FileAttributes *pObjectX = (EarthView::World::Core::FileAttributes*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->bIsReadOnly);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileAttributes_set_1bIsReadOnly_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Core::FileAttributes *pObjectX = (EarthView::World::Core::FileAttributes*)pObjXXXX;
				pObjectX->bIsReadOnly = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_FileAttributes_get_1strCreateTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::FileAttributes *pObjectX = (EarthView::World::Core::FileAttributes*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->strCreateTime;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileAttributes_set_1strCreateTime_1ev_1string(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Core::FileAttributes *pObjectX = (EarthView::World::Core::FileAttributes*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->strCreateTime = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_FileAttributes_get_1strLastAccessTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::FileAttributes *pObjectX = (EarthView::World::Core::FileAttributes*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->strLastAccessTime;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileAttributes_set_1strLastAccessTime_1ev_1string(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Core::FileAttributes *pObjectX = (EarthView::World::Core::FileAttributes*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->strLastAccessTime = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_FileAttributes_get_1strLastWriteTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::FileAttributes *pObjectX = (EarthView::World::Core::FileAttributes*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->strLastWriteTime;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileAttributes_set_1strLastWriteTime_1ev_1string(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Core::FileAttributes *pObjectX = (EarthView::World::Core::FileAttributes*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->strLastWriteTime = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
		}
	}
}
