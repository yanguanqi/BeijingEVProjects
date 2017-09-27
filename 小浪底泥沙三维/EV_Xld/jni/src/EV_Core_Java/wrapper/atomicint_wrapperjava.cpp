/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/atomicint.h"
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
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_AtomicInt_OperatorConvertionev_1int32_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
			{
				EarthView::World::Core::CAtomicInt& pObjectX = *(EarthView::World::Core::CAtomicInt*) pObjXXXX;
				ev_int32 __values1 = pObjectX ;
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_AtomicInt_OperatorEquals_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint value_j )
			{
				EarthView::World::Core::CAtomicInt& pObjectX = *(EarthView::World::Core::CAtomicInt*) pObjXXXX;
				const ev_int32 value = (ev_int32) value_j;
				ev_bool __values1 = (pObjectX == value);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_AtomicInt_OperatorNotEquals_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint value_j )
			{
				EarthView::World::Core::CAtomicInt& pObjectX = *(EarthView::World::Core::CAtomicInt*) pObjXXXX;
				const ev_int32 value = (ev_int32) value_j;
				ev_bool __values1 = (pObjectX != value);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_AtomicInt_OperatorAssign_1CAtomicInt(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
			{
				EarthView::World::Core::CAtomicInt& pObjectX = *(EarthView::World::Core::CAtomicInt*) pObjXXXX;
				const EarthView::World::Core::CAtomicInt &other = *(EarthView::World::Core::CAtomicInt*) other_j;
				pObjectX = other;
				EarthView::World::Core::CAtomicInt& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_AtomicInt_OperatorAssign_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint value_j )
			{
				EarthView::World::Core::CAtomicInt& pObjectX = *(EarthView::World::Core::CAtomicInt*) pObjXXXX;
				ev_int32 value = (ev_int32) value_j;
				pObjectX = value;
				EarthView::World::Core::CAtomicInt& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_AtomicInt_ref_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CAtomicInt *pObjectX = (EarthView::World::Core::CAtomicInt*) pObjXXXX;
				ev_bool __values1 = pObjectX->ref();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_AtomicInt_deref_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CAtomicInt *pObjectX = (EarthView::World::Core::CAtomicInt*) pObjXXXX;
				ev_bool __values1 = pObjectX->deref();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_AtomicInt_isReferenceCountingNative_1void(JNIEnv *__env , jclass __clazz)
			{
				ev_bool __values1 = EarthView::World::Core::CAtomicInt::isReferenceCountingNative();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_AtomicInt_isReferenceCountingWaitFree_1void(JNIEnv *__env , jclass __clazz)
			{
				ev_bool __values1 = EarthView::World::Core::CAtomicInt::isReferenceCountingWaitFree();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_AtomicInt_isTestAndSetNative_1void(JNIEnv *__env , jclass __clazz)
			{
				ev_bool __values1 = EarthView::World::Core::CAtomicInt::isTestAndSetNative();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_AtomicInt_isTestAndSetWaitFree_1void(JNIEnv *__env , jclass __clazz)
			{
				ev_bool __values1 = EarthView::World::Core::CAtomicInt::isTestAndSetWaitFree();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_AtomicInt_testAndSetRelaxed_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint expectedValue_j, jint newValue_j)
			{
				ev_int32 expectedValue = (ev_int32) expectedValue_j;
				ev_int32 newValue = (ev_int32) newValue_j;
				EarthView::World::Core::CAtomicInt *pObjectX = (EarthView::World::Core::CAtomicInt*) pObjXXXX;
				ev_bool __values1 = pObjectX->testAndSetRelaxed(expectedValue, newValue);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_AtomicInt_testAndSetAcquire_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint expectedValue_j, jint newValue_j)
			{
				ev_int32 expectedValue = (ev_int32) expectedValue_j;
				ev_int32 newValue = (ev_int32) newValue_j;
				EarthView::World::Core::CAtomicInt *pObjectX = (EarthView::World::Core::CAtomicInt*) pObjXXXX;
				ev_bool __values1 = pObjectX->testAndSetAcquire(expectedValue, newValue);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_AtomicInt_testAndSetRelease_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint expectedValue_j, jint newValue_j)
			{
				ev_int32 expectedValue = (ev_int32) expectedValue_j;
				ev_int32 newValue = (ev_int32) newValue_j;
				EarthView::World::Core::CAtomicInt *pObjectX = (EarthView::World::Core::CAtomicInt*) pObjXXXX;
				ev_bool __values1 = pObjectX->testAndSetRelease(expectedValue, newValue);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_AtomicInt_testAndSetOrdered_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint expectedValue_j, jint newValue_j)
			{
				ev_int32 expectedValue = (ev_int32) expectedValue_j;
				ev_int32 newValue = (ev_int32) newValue_j;
				EarthView::World::Core::CAtomicInt *pObjectX = (EarthView::World::Core::CAtomicInt*) pObjXXXX;
				ev_bool __values1 = pObjectX->testAndSetOrdered(expectedValue, newValue);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_AtomicInt_isFetchAndStoreNative_1void(JNIEnv *__env , jclass __clazz)
			{
				ev_bool __values1 = EarthView::World::Core::CAtomicInt::isFetchAndStoreNative();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_AtomicInt_isFetchAndStoreWaitFree_1void(JNIEnv *__env , jclass __clazz)
			{
				ev_bool __values1 = EarthView::World::Core::CAtomicInt::isFetchAndStoreWaitFree();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_AtomicInt_fetchAndStoreRelaxed_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint newValue_j)
			{
				ev_int32 newValue = (ev_int32) newValue_j;
				EarthView::World::Core::CAtomicInt *pObjectX = (EarthView::World::Core::CAtomicInt*) pObjXXXX;
				ev_int32 __values1 = pObjectX->fetchAndStoreRelaxed(newValue);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_AtomicInt_fetchAndStoreAcquire_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint newValue_j)
			{
				ev_int32 newValue = (ev_int32) newValue_j;
				EarthView::World::Core::CAtomicInt *pObjectX = (EarthView::World::Core::CAtomicInt*) pObjXXXX;
				ev_int32 __values1 = pObjectX->fetchAndStoreAcquire(newValue);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_AtomicInt_fetchAndStoreRelease_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint newValue_j)
			{
				ev_int32 newValue = (ev_int32) newValue_j;
				EarthView::World::Core::CAtomicInt *pObjectX = (EarthView::World::Core::CAtomicInt*) pObjXXXX;
				ev_int32 __values1 = pObjectX->fetchAndStoreRelease(newValue);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_AtomicInt_fetchAndStoreOrdered_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint newValue_j)
			{
				ev_int32 newValue = (ev_int32) newValue_j;
				EarthView::World::Core::CAtomicInt *pObjectX = (EarthView::World::Core::CAtomicInt*) pObjXXXX;
				ev_int32 __values1 = pObjectX->fetchAndStoreOrdered(newValue);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_AtomicInt_isFetchAndAddNative_1void(JNIEnv *__env , jclass __clazz)
			{
				ev_bool __values1 = EarthView::World::Core::CAtomicInt::isFetchAndAddNative();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_AtomicInt_isFetchAndAddWaitFree_1void(JNIEnv *__env , jclass __clazz)
			{
				ev_bool __values1 = EarthView::World::Core::CAtomicInt::isFetchAndAddWaitFree();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_AtomicInt_fetchAndAddRelaxed_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint valueToAdd_j)
			{
				ev_int32 valueToAdd = (ev_int32) valueToAdd_j;
				EarthView::World::Core::CAtomicInt *pObjectX = (EarthView::World::Core::CAtomicInt*) pObjXXXX;
				ev_int32 __values1 = pObjectX->fetchAndAddRelaxed(valueToAdd);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_AtomicInt_fetchAndAddAcquire_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint valueToAdd_j)
			{
				ev_int32 valueToAdd = (ev_int32) valueToAdd_j;
				EarthView::World::Core::CAtomicInt *pObjectX = (EarthView::World::Core::CAtomicInt*) pObjXXXX;
				ev_int32 __values1 = pObjectX->fetchAndAddAcquire(valueToAdd);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_AtomicInt_fetchAndAddRelease_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint valueToAdd_j)
			{
				ev_int32 valueToAdd = (ev_int32) valueToAdd_j;
				EarthView::World::Core::CAtomicInt *pObjectX = (EarthView::World::Core::CAtomicInt*) pObjXXXX;
				ev_int32 __values1 = pObjectX->fetchAndAddRelease(valueToAdd);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_AtomicInt_fetchAndAddOrdered_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint valueToAdd_j)
			{
				ev_int32 valueToAdd = (ev_int32) valueToAdd_j;
				EarthView::World::Core::CAtomicInt *pObjectX = (EarthView::World::Core::CAtomicInt*) pObjXXXX;
				ev_int32 __values1 = pObjectX->fetchAndAddOrdered(valueToAdd);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
		}
	}
}
