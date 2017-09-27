/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/string_array.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_StringArray_getCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CStringArray *pObjectX = (EarthView::World::Core::CStringArray*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_StringArray_isEmpty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CStringArray *pObjectX = (EarthView::World::Core::CStringArray*) pObjXXXX;
				ev_bool __values1 = pObjectX->isEmpty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_StringArray_append_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strNewItem_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strNewItem_ch = (const ev_char*)__env->GetStringUTFChars(strNewItem_j,JNI_FALSE);
				const ev_string strNewItem = strNewItem_ch;
				__env->ReleaseStringUTFChars(strNewItem_j, (const char *)strNewItem_ch);
				#else
				const ev_wchar* strNewItem_ch = (const ev_wchar*)__env->GetStringChars(strNewItem_j,JNI_FALSE);
				const ev_string strNewItem = strNewItem_ch;
				__env->ReleaseStringChars(strNewItem_j, (const jchar *)strNewItem_ch);
				#endif
				EarthView::World::Core::CStringArray *pObjectX = (EarthView::World::Core::CStringArray*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->append(strNewItem);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringArray_insertAt_1ev_1uint32_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jstring strNewItem_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strNewItem_ch = (const ev_char*)__env->GetStringUTFChars(strNewItem_j,JNI_FALSE);
				const ev_string strNewItem = strNewItem_ch;
				__env->ReleaseStringUTFChars(strNewItem_j, (const char *)strNewItem_ch);
				#else
				const ev_wchar* strNewItem_ch = (const ev_wchar*)__env->GetStringChars(strNewItem_j,JNI_FALSE);
				const ev_string strNewItem = strNewItem_ch;
				__env->ReleaseStringChars(strNewItem_j, (const jchar *)strNewItem_ch);
				#endif
				EarthView::World::Core::CStringArray *pObjectX = (EarthView::World::Core::CStringArray*) pObjXXXX;
				pObjectX->insertAt(index, strNewItem);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_StringArray_getAt_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Core::CStringArray *pObjectX = (EarthView::World::Core::CStringArray*) pObjXXXX;
				ev_string __values1 = pObjectX->getAt(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_StringArray_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Core::CStringArray *pObjectX = (EarthView::World::Core::CStringArray*) pObjXXXX;
				ev_string& __values1 = pObjectX->at(index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringArray_removeAt_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Core::CStringArray *pObjectX = (EarthView::World::Core::CStringArray*) pObjXXXX;
				pObjectX->removeAt(index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringArray_removeAll_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CStringArray *pObjectX = (EarthView::World::Core::CStringArray*) pObjXXXX;
				pObjectX->removeAll();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_StringArray_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CStringArray *pObjectX = (EarthView::World::Core::CStringArray*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringArray_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Core::CStringArray *pObjectX = (EarthView::World::Core::CStringArray*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Wstringarray_getCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CWStringArray *pObjectX = (EarthView::World::Core::CWStringArray*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Wstringarray_isEmpty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CWStringArray *pObjectX = (EarthView::World::Core::CWStringArray*) pObjXXXX;
				ev_bool __values1 = pObjectX->isEmpty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Wstringarray_append_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strNewItem_j)
			{
				const ev_wchar* strNewItem_wch = (const ev_wchar*)__env->GetStringChars(strNewItem_j,JNI_FALSE);
				const ev_wstring strNewItem = strNewItem_wch;
				__env->ReleaseStringChars(strNewItem_j,(jchar*)strNewItem_wch);
				EarthView::World::Core::CWStringArray *pObjectX = (EarthView::World::Core::CWStringArray*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->append(strNewItem);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Wstringarray_insertAt_1ev_1uint32_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jstring strNewItem_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const ev_wchar* strNewItem_wch = (const ev_wchar*)__env->GetStringChars(strNewItem_j,JNI_FALSE);
				const ev_wstring strNewItem = strNewItem_wch;
				__env->ReleaseStringChars(strNewItem_j,(jchar*)strNewItem_wch);
				EarthView::World::Core::CWStringArray *pObjectX = (EarthView::World::Core::CWStringArray*) pObjXXXX;
				pObjectX->insertAt(index, strNewItem);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_Wstringarray_getAt_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Core::CWStringArray *pObjectX = (EarthView::World::Core::CWStringArray*) pObjXXXX;
				ev_wstring __values1 = pObjectX->getAt(index);
				jstring __values1_j = __env->NewString((const jchar*)__values1.getString(),__values1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Wstringarray_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Core::CWStringArray *pObjectX = (EarthView::World::Core::CWStringArray*) pObjXXXX;
				ev_wstring& __values1 = pObjectX->at(index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Wstringarray_removeAt_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Core::CWStringArray *pObjectX = (EarthView::World::Core::CWStringArray*) pObjXXXX;
				pObjectX->removeAt(index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Wstringarray_removeAll_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CWStringArray *pObjectX = (EarthView::World::Core::CWStringArray*) pObjXXXX;
				pObjectX->removeAll();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Wstringarray_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CWStringArray *pObjectX = (EarthView::World::Core::CWStringArray*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Wstringarray_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Core::CWStringArray *pObjectX = (EarthView::World::Core::CWStringArray*) pObjXXXX;
				pObjectX->resize(newSize);
			}
		}
	}
}
