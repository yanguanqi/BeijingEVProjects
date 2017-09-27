/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/readwritelock.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ReadWriteLock_lockForRead_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CReadWriteLock *pObjectX = (EarthView::World::Core::CReadWriteLock*) pObjXXXX;
				pObjectX->lockForRead();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ReadWriteLock_lockForWrite_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CReadWriteLock *pObjectX = (EarthView::World::Core::CReadWriteLock*) pObjXXXX;
				pObjectX->lockForWrite();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ReadWriteLock_unlockForRead_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CReadWriteLock *pObjectX = (EarthView::World::Core::CReadWriteLock*) pObjXXXX;
				pObjectX->unlockForRead();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ReadWriteLock_unlockForWrite_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CReadWriteLock *pObjectX = (EarthView::World::Core::CReadWriteLock*) pObjXXXX;
				pObjectX->unlockForWrite();
			}
		}
	}
}
