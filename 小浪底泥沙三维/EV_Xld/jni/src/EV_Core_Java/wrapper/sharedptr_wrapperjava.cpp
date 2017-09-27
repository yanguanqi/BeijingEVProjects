/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/sharedptr.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_core_SharedPtrFreeMethodHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					SPFM_DELETE,
					SPFM_DELETE_T,
					SPFM_FREE
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
		}
	}
}
