/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/skeletonfileformat.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_SkeletonChunkIDHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					SKELETON_HEADER,
					SKELETON_BLENDMODE,
					SKELETON_BONE,
					SKELETON_BONE_PARENT,
					SKELETON_ANIMATION,
					SKELETON_ANIMATION_BASEINFO,
					SKELETON_ANIMATION_TRACK,
					SKELETON_ANIMATION_TRACK_KEYFRAME,
					SKELETON_ANIMATION_LINK
				};
				jintArray array = __env->NewIntArray(9);
				__env->SetIntArrayRegion(array, 0, 9, enum_values);
				return array;
			}
		}
	}
}
