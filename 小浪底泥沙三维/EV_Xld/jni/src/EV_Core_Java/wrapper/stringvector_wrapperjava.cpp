/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/stringvector.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringVector_push_1back_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring t_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* t_ch = (const ev_char*)__env->GetStringUTFChars(t_j,JNI_FALSE);
				EVString t = t_ch;
				__env->ReleaseStringUTFChars(t_j, (const char *)t_ch);
				#else
				const ev_wchar* t_ch = (const ev_wchar*)__env->GetStringChars(t_j,JNI_FALSE);
				EVString t = t_ch;
				__env->ReleaseStringChars(t_j, (const jchar *)t_ch);
				#endif
				EarthView::World::Core::StringVector *pObjectX = (EarthView::World::Core::StringVector*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::StringVector *pObjectX = (EarthView::World::Core::StringVector*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_StringVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::StringVector *pObjectX = (EarthView::World::Core::StringVector*) pObjXXXX;
				EVString& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_StringVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::StringVector *pObjectX = (EarthView::World::Core::StringVector*) pObjXXXX;
				EVString& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringVector_insert_1ev_1uint32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jstring t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* t_ch = (const ev_char*)__env->GetStringUTFChars(t_j,JNI_FALSE);
				EVString t = t_ch;
				__env->ReleaseStringUTFChars(t_j, (const char *)t_ch);
				#else
				const ev_wchar* t_ch = (const ev_wchar*)__env->GetStringChars(t_j,JNI_FALSE);
				EVString t = t_ch;
				__env->ReleaseStringChars(t_j, (const jchar *)t_ch);
				#endif
				EarthView::World::Core::StringVector *pObjectX = (EarthView::World::Core::StringVector*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Core::StringVector *pObjectX = (EarthView::World::Core::StringVector*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_StringVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::StringVector *pObjectX = (EarthView::World::Core::StringVector*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_StringVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Core::StringVector& pObjectX = *(EarthView::World::Core::StringVector*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EVString& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_StringVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Core::StringVector *pObjectX = (EarthView::World::Core::StringVector*) pObjXXXX;
				EVString& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_StringVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::StringVector *pObjectX = (EarthView::World::Core::StringVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Core::StringVector *pObjectX = (EarthView::World::Core::StringVector*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::StringVector *pObjectX = (EarthView::World::Core::StringVector*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::StringVector *pObjectX = (EarthView::World::Core::StringVector*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringVector_swap_1StringVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
			{
				EarthView::World::Core::StringVector &rhs = *(EarthView::World::Core::StringVector*) rhs_j;
				EarthView::World::Core::StringVector *pObjectX = (EarthView::World::Core::StringVector*) pObjXXXX;
				pObjectX->swap(rhs);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_StringVectorPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::StringVectorPtr *pObjectX = (EarthView::World::Core::StringVectorPtr*) pObjXXXX;
				EarthView::World::Core::StringVector* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
