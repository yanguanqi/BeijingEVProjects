/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderffprenderstate.h"
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
			namespace RTShaderSystem
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_rtshadersystem_FFPVertexShaderStageHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						FFP_VS_PRE_PROCESS,
						FFP_VS_TRANSFORM,
						FFP_VS_COLOUR,
						FFP_VS_LIGHTING,
						FFP_VS_TEXTURING,
						FFP_VS_FOG,
						FFP_VS_POST_PROCESS
					};
					jintArray array = __env->NewIntArray(7);
					__env->SetIntArrayRegion(array, 0, 7, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_rtshadersystem_FFPFragmentShaderStageHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						FFP_PS_PRE_PROCESS,
						FFP_PS_COLOUR_BEGIN,
						FFP_PS_SAMPLING,
						FFP_PS_TEXTURING,
						FFP_PS_COLOUR_END,
						FFP_PS_FOG,
						FFP_PS_POST_PROCESS
					};
					jintArray array = __env->NewIntArray(7);
					__env->SetIntArrayRegion(array, 0, 7, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_rtshadersystem_FFPShaderStageHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						FFP_PRE_PROCESS,
						FFP_TRANSFORM,
						FFP_COLOUR,
						FFP_LIGHTING,
						FFP_TEXTURING,
						FFP_FOG,
						FFP_POST_PROCESS
					};
					jintArray array = __env->NewIntArray(7);
					__env->SetIntArrayRegion(array, 0, 7, enum_values);
					return array;
				}
			}
		}
	}
}
