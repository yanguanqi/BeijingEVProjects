/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/mutex.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_core_MutexTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					Mutex_Normal,
					Mutex_Recursive
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Mutex_lock_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CMutex *pObjectX = (EarthView::World::Core::CMutex*) pObjXXXX;
				pObjectX->lock();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Mutex_tryLock_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CMutex *pObjectX = (EarthView::World::Core::CMutex*) pObjXXXX;
				ev_bool __values1 = pObjectX->tryLock();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Mutex_unlock_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CMutex *pObjectX = (EarthView::World::Core::CMutex*) pObjXXXX;
				pObjectX->unlock();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Condition_ev_1wait_1CMutex(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mtx_j)
			{
				EarthView::World::Core::CMutex &mtx = *(EarthView::World::Core::CMutex*) mtx_j;
				EarthView::World::Core::CCondition *pObjectX = (EarthView::World::Core::CCondition*) pObjXXXX;
				pObjectX->wait(mtx);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Condition_notify_1one_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CCondition *pObjectX = (EarthView::World::Core::CCondition*) pObjXXXX;
				pObjectX->notify_one();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Condition_notify_1all_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CCondition *pObjectX = (EarthView::World::Core::CCondition*) pObjXXXX;
				pObjectX->notify_all();
			}
		}
	}
}
