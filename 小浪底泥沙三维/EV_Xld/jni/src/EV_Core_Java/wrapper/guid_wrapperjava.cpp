/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/guid.h"
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_Guid_NewGuid_1void(JNIEnv *__env , jclass __clazz)
			{
				ev_string __values1 = EarthView::World::Core::GUID::NewGuid();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_Guid_getUserGuid_1void(JNIEnv *__env , jclass __clazz)
			{
				ev_string __values1 = EarthView::World::Core::GUID::getUserGuid();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_Guid_getUserGuidWithUserName_1void(JNIEnv *__env , jclass __clazz)
			{
				ev_string __values1 = EarthView::World::Core::GUID::getUserGuidWithUserName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
		}
	}
}
