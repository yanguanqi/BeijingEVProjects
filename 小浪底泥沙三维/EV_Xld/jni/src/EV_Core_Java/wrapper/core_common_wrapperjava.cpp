/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/core_common.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_IntVector_push_1back_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint t_j)
			{
				ev_int32 t = (ev_int32) t_j;
				EarthView::World::Core::IntVector *pObjectX = (EarthView::World::Core::IntVector*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_IntVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::IntVector *pObjectX = (EarthView::World::Core::IntVector*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_IntVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::IntVector *pObjectX = (EarthView::World::Core::IntVector*) pObjXXXX;
				ev_int32 __values1 = pObjectX->front();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_IntVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::IntVector *pObjectX = (EarthView::World::Core::IntVector*) pObjXXXX;
				ev_int32 __values1 = pObjectX->back();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_IntVector_insert_1ev_1uint32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jint t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				ev_int32 t = (ev_int32) t_j;
				EarthView::World::Core::IntVector *pObjectX = (EarthView::World::Core::IntVector*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_IntVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Core::IntVector *pObjectX = (EarthView::World::Core::IntVector*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_IntVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::IntVector *pObjectX = (EarthView::World::Core::IntVector*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_IntVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Core::IntVector& pObjectX = *(EarthView::World::Core::IntVector*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				ev_int32& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_IntVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				const 				EarthView::World::Core::IntVector *pObjectX = (EarthView::World::Core::IntVector*) pObjXXXX;
				ev_int32 __values1 = pObjectX->at(n);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_IntVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::IntVector *pObjectX = (EarthView::World::Core::IntVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_IntVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Core::IntVector *pObjectX = (EarthView::World::Core::IntVector*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_IntVector_resize_1ev_1size_1t_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j, jint value_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				ev_int32 value = (ev_int32) value_j;
				EarthView::World::Core::IntVector *pObjectX = (EarthView::World::Core::IntVector*) pObjXXXX;
				pObjectX->resize(newSize, value);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_IntVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::IntVector *pObjectX = (EarthView::World::Core::IntVector*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_IntVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::IntVector *pObjectX = (EarthView::World::Core::IntVector*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_IntVector_swap_1IntVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong list_j)
			{
				EarthView::World::Core::IntVector &list = *(EarthView::World::Core::IntVector*) list_j;
				EarthView::World::Core::IntVector *pObjectX = (EarthView::World::Core::IntVector*) pObjXXXX;
				pObjectX->swap(list);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_IntVector_fromString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring str_j)
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
				EarthView::World::Core::IntVector *pObjectX = (EarthView::World::Core::IntVector*) pObjXXXX;
				pObjectX->fromString(str);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_IntVector_ev_1toString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::IntVector *pObjectX = (EarthView::World::Core::IntVector*) pObjXXXX;
				EVString __values1 = pObjectX->toString();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_IntPair_Create(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Core::IntPair *pObjectX = new EarthView::World::Core::IntPair();
				return (jlong) pObjectX;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_IntPair_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
			{
				EarthView::World::Core::IntPair *pObjectX = (EarthView::World::Core::IntPair*)pObjXXXX;
				delete pObjectX;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_IntPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::IntPair *pObjectX = (EarthView::World::Core::IntPair*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->first);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_IntPair_set_1first_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Core::IntPair *pObjectX = (EarthView::World::Core::IntPair*)pObjXXXX;
				pObjectX->first = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_IntPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::IntPair *pObjectX = (EarthView::World::Core::IntPair*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_IntPair_set_1second_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Core::IntPair *pObjectX = (EarthView::World::Core::IntPair*)pObjXXXX;
				pObjectX->second = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Int3_Create(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Core::Int3 *pObjectX = new EarthView::World::Core::Int3();
				return (jlong) pObjectX;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Int3_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
			{
				EarthView::World::Core::Int3 *pObjectX = (EarthView::World::Core::Int3*)pObjXXXX;
				delete pObjectX;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_Int3_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::Int3 *pObjectX = (EarthView::World::Core::Int3*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->first);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Int3_set_1first_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Core::Int3 *pObjectX = (EarthView::World::Core::Int3*)pObjXXXX;
				pObjectX->first = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_Int3_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::Int3 *pObjectX = (EarthView::World::Core::Int3*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Int3_set_1second_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Core::Int3 *pObjectX = (EarthView::World::Core::Int3*)pObjXXXX;
				pObjectX->second = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_Int3_get_1third_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::Int3 *pObjectX = (EarthView::World::Core::Int3*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->third);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Int3_set_1third_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Core::Int3 *pObjectX = (EarthView::World::Core::Int3*)pObjXXXX;
				pObjectX->third = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_IntPairVector_push_1back_1IntPair(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Core::IntPair &t = *(EarthView::World::Core::IntPair*) t_j;
				EarthView::World::Core::IntPairVector *pObjectX = (EarthView::World::Core::IntPairVector*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_IntPairVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::IntPairVector *pObjectX = (EarthView::World::Core::IntPairVector*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_IntPairVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::IntPairVector *pObjectX = (EarthView::World::Core::IntPairVector*) pObjXXXX;
				EarthView::World::Core::IntPair& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_IntPairVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::IntPairVector *pObjectX = (EarthView::World::Core::IntPairVector*) pObjXXXX;
				EarthView::World::Core::IntPair& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_IntPairVector_insert_1ev_1uint32_1IntPair(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Core::IntPair &t = *(EarthView::World::Core::IntPair*) t_j;
				EarthView::World::Core::IntPairVector *pObjectX = (EarthView::World::Core::IntPairVector*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_IntPairVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Core::IntPairVector *pObjectX = (EarthView::World::Core::IntPairVector*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_IntPairVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::IntPairVector *pObjectX = (EarthView::World::Core::IntPairVector*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_IntPairVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Core::IntPairVector& pObjectX = *(EarthView::World::Core::IntPairVector*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Core::IntPair& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_IntPairVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Core::IntPairVector *pObjectX = (EarthView::World::Core::IntPairVector*) pObjXXXX;
				EarthView::World::Core::IntPair& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_IntPairVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::IntPairVector *pObjectX = (EarthView::World::Core::IntPairVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_IntPairVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Core::IntPairVector *pObjectX = (EarthView::World::Core::IntPairVector*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_IntPairVector_resize_1ev_1size_1t_1IntPair(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j, jlong value_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Core::IntPair value = *(EarthView::World::Core::IntPair*) value_j;
				EarthView::World::Core::IntPairVector *pObjectX = (EarthView::World::Core::IntPairVector*) pObjXXXX;
				pObjectX->resize(newSize, value);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_IntPairVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::IntPairVector *pObjectX = (EarthView::World::Core::IntPairVector*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_IntPairVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::IntPairVector *pObjectX = (EarthView::World::Core::IntPairVector*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Int3Vector_push_1back_1Int3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Core::Int3 &t = *(EarthView::World::Core::Int3*) t_j;
				EarthView::World::Core::Int3Vector *pObjectX = (EarthView::World::Core::Int3Vector*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Int3Vector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::Int3Vector *pObjectX = (EarthView::World::Core::Int3Vector*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Int3Vector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::Int3Vector *pObjectX = (EarthView::World::Core::Int3Vector*) pObjXXXX;
				EarthView::World::Core::Int3& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Int3Vector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::Int3Vector *pObjectX = (EarthView::World::Core::Int3Vector*) pObjXXXX;
				EarthView::World::Core::Int3& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Int3Vector_insert_1ev_1uint32_1Int3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Core::Int3 &t = *(EarthView::World::Core::Int3*) t_j;
				EarthView::World::Core::Int3Vector *pObjectX = (EarthView::World::Core::Int3Vector*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Int3Vector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Core::Int3Vector *pObjectX = (EarthView::World::Core::Int3Vector*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Int3Vector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::Int3Vector *pObjectX = (EarthView::World::Core::Int3Vector*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Int3Vector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Core::Int3Vector& pObjectX = *(EarthView::World::Core::Int3Vector*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Core::Int3& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Int3Vector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Core::Int3Vector *pObjectX = (EarthView::World::Core::Int3Vector*) pObjXXXX;
				EarthView::World::Core::Int3& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Int3Vector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::Int3Vector *pObjectX = (EarthView::World::Core::Int3Vector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Int3Vector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Core::Int3Vector *pObjectX = (EarthView::World::Core::Int3Vector*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Int3Vector_resize_1ev_1size_1t_1Int3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j, jlong value_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Core::Int3 value = *(EarthView::World::Core::Int3*) value_j;
				EarthView::World::Core::Int3Vector *pObjectX = (EarthView::World::Core::Int3Vector*) pObjXXXX;
				pObjectX->resize(newSize, value);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Int3Vector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::Int3Vector *pObjectX = (EarthView::World::Core::Int3Vector*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Int3Vector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::Int3Vector *pObjectX = (EarthView::World::Core::Int3Vector*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_RealVector_push_1back_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble t_j)
			{
				ev_real64 t = (ev_real64) t_j;
				EarthView::World::Core::RealVector *pObjectX = (EarthView::World::Core::RealVector*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_RealVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::RealVector *pObjectX = (EarthView::World::Core::RealVector*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_core_RealVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::RealVector *pObjectX = (EarthView::World::Core::RealVector*) pObjXXXX;
				ev_real64 __values1 = pObjectX->front();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_core_RealVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::RealVector *pObjectX = (EarthView::World::Core::RealVector*) pObjXXXX;
				ev_real64 __values1 = pObjectX->back();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_RealVector_insert_1ev_1uint32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jdouble t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				ev_real64 t = (ev_real64) t_j;
				EarthView::World::Core::RealVector *pObjectX = (EarthView::World::Core::RealVector*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_RealVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Core::RealVector *pObjectX = (EarthView::World::Core::RealVector*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_RealVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::RealVector *pObjectX = (EarthView::World::Core::RealVector*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_RealVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Core::RealVector& pObjectX = *(EarthView::World::Core::RealVector*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				ev_real64& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_core_RealVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				const 				EarthView::World::Core::RealVector *pObjectX = (EarthView::World::Core::RealVector*) pObjXXXX;
				ev_real64 __values1 = pObjectX->at(n);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_RealVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::RealVector *pObjectX = (EarthView::World::Core::RealVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_RealVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Core::RealVector *pObjectX = (EarthView::World::Core::RealVector*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_RealVector_resize_1ev_1size_1t_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j, jdouble value_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				ev_real64 value = (ev_real64) value_j;
				EarthView::World::Core::RealVector *pObjectX = (EarthView::World::Core::RealVector*) pObjXXXX;
				pObjectX->resize(newSize, value);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_RealVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::RealVector *pObjectX = (EarthView::World::Core::RealVector*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_RealVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::RealVector *pObjectX = (EarthView::World::Core::RealVector*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_RealVector_fromString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring str_j)
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
				EarthView::World::Core::RealVector *pObjectX = (EarthView::World::Core::RealVector*) pObjXXXX;
				pObjectX->fromString(str);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_RealVector_ev_1toString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::RealVector *pObjectX = (EarthView::World::Core::RealVector*) pObjXXXX;
				EVString __values1 = pObjectX->toString();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_RealList_push_1back_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble t_j)
			{
				ev_real64 t = (ev_real64) t_j;
				EarthView::World::Core::RealList *pObjectX = (EarthView::World::Core::RealList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_RealList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::RealList *pObjectX = (EarthView::World::Core::RealList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_core_RealList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::RealList *pObjectX = (EarthView::World::Core::RealList*) pObjXXXX;
				ev_real64 __values1 = pObjectX->front();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_core_RealList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::RealList *pObjectX = (EarthView::World::Core::RealList*) pObjXXXX;
				ev_real64 __values1 = pObjectX->back();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_RealList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::RealList *pObjectX = (EarthView::World::Core::RealList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_RealList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::RealList *pObjectX = (EarthView::World::Core::RealList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_RealList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Core::RealList *pObjectX = (EarthView::World::Core::RealList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_RealList_resize_1ev_1size_1t_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j, jdouble value_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				ev_real64 value = (ev_real64) value_j;
				EarthView::World::Core::RealList *pObjectX = (EarthView::World::Core::RealList*) pObjXXXX;
				pObjectX->resize(newSize, value);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_RealList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::RealList *pObjectX = (EarthView::World::Core::RealList*) pObjXXXX;
				pObjectX->clear();
			}
		}
	}
}
