/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/device_utility.h"
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_DeviceUtility_getDiskFreeSpace_1EVString_1ev_1uint64_1ev_1uint64(JNIEnv *__env , jclass __clazz, jstring disk_j, jlong totalSpace_j, jlong freeSpace_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* disk_ch = (const ev_char*)__env->GetStringUTFChars(disk_j,JNI_FALSE);
				const EVString disk = disk_ch;
				__env->ReleaseStringUTFChars(disk_j, (const char *)disk_ch);
				#else
				const ev_wchar* disk_ch = (const ev_wchar*)__env->GetStringChars(disk_j,JNI_FALSE);
				const EVString disk = disk_ch;
				__env->ReleaseStringChars(disk_j, (const jchar *)disk_ch);
				#endif
				ev_uint64 &totalSpace = *(ev_uint64*) totalSpace_j;
				ev_uint64 &freeSpace = *(ev_uint64*) freeSpace_j;
				ev_bool __values1 = EarthView::World::Core::CDeviceUtility::getDiskFreeSpace(disk, totalSpace, freeSpace);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DeviceUtility_get_1mScreenWidth_1void(JNIEnv *__env, jclass __clazz)
			{
				jint __values1_j = (jint) (EarthView::World::Core::CDeviceUtility::mScreenWidth);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DeviceUtility_set_1mScreenWidth_1ev_1uint16(JNIEnv *__env, jclass __clazz, jint __values1_j)
			{
				EarthView::World::Core::CDeviceUtility::mScreenWidth = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DeviceUtility_get_1mScreenHeight_1void(JNIEnv *__env, jclass __clazz)
			{
				jint __values1_j = (jint) (EarthView::World::Core::CDeviceUtility::mScreenHeight);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DeviceUtility_set_1mScreenHeight_1ev_1uint16(JNIEnv *__env, jclass __clazz, jint __values1_j)
			{
				EarthView::World::Core::CDeviceUtility::mScreenHeight = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DeviceUtility_get_1mScreenDpi_1void(JNIEnv *__env, jclass __clazz)
			{
				jint __values1_j = (jint) (EarthView::World::Core::CDeviceUtility::mScreenDpi);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DeviceUtility_set_1mScreenDpi_1ev_1uint16(JNIEnv *__env, jclass __clazz, jint __values1_j)
			{
				EarthView::World::Core::CDeviceUtility::mScreenDpi = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DeviceUtility_get_1mDesktopDefaultDpi_1void(JNIEnv *__env, jclass __clazz)
			{
				jint __values1_j = (jint) (EarthView::World::Core::CDeviceUtility::mDesktopDefaultDpi);
				return __values1_j;
			}
		}
	}
}
