/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/cloud_definitions.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Effect3D
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_effect3d_EVCloudTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CT_UNKNOW,
						CT_ST,
						CT_SC,
						CT_NS,
						CT_AC,
						CT_AS,
						CT_CI,
						CT_CS,
						CT_CC,
						CT_CU,
						CT_CB,
						CT_DF,
						CT_MC
					};
					jintArray array = __env->NewIntArray(13);
					__env->SetIntArrayRegion(array, 0, 13, enum_values);
					return array;
				}
			}
		}
	}
}
