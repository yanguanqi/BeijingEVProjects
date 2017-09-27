/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/blendmode.h"
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
			namespace Math
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_LayerBlendTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					LBT_COLOUR,
					LBT_ALPHA
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_LayerBlendOperationHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					LBO_REPLACE,
					LBO_ADD,
					LBO_MODULATE,
					LBO_ALPHA_BLEND
				};
				jintArray array = __env->NewIntArray(4);
				__env->SetIntArrayRegion(array, 0, 4, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_LayerBlendOperationExHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					LBX_SOURCE1,
					LBX_SOURCE2,
					LBX_MODULATE,
					LBX_MODULATE_X2,
					LBX_MODULATE_X4,
					LBX_ADD,
					LBX_ADD_SIGNED,
					LBX_ADD_SMOOTH,
					LBX_SUBTRACT,
					LBX_BLEND_DIFFUSE_ALPHA,
					LBX_BLEND_TEXTURE_ALPHA,
					LBX_BLEND_CURRENT_ALPHA,
					LBX_BLEND_MANUAL,
					LBX_DOTPRODUCT,
					LBX_BLEND_DIFFUSE_COLOUR
				};
				jintArray array = __env->NewIntArray(15);
				__env->SetIntArrayRegion(array, 0, 15, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_LayerBlendSourceHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					LBS_CURRENT,
					LBS_TEXTURE,
					LBS_DIFFUSE,
					LBS_SPECULAR,
					LBS_MANUAL
				};
				jintArray array = __env->NewIntArray(5);
				__env->SetIntArrayRegion(array, 0, 5, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_LayerBlendModeEx_get_1blendType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CLayerBlendModeEx *pObjectX = (EarthView::World::Graphic::CLayerBlendModeEx*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->blendType);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LayerBlendModeEx_set_1blendType_1LayerBlendType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CLayerBlendModeEx *pObjectX = (EarthView::World::Graphic::CLayerBlendModeEx*)pObjXXXX;
				pObjectX->blendType = (EarthView::World::Graphic::LayerBlendType)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_LayerBlendModeEx_get_1operation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CLayerBlendModeEx *pObjectX = (EarthView::World::Graphic::CLayerBlendModeEx*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->operation);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LayerBlendModeEx_set_1operation_1LayerBlendOperationEx(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CLayerBlendModeEx *pObjectX = (EarthView::World::Graphic::CLayerBlendModeEx*)pObjXXXX;
				pObjectX->operation = (EarthView::World::Graphic::LayerBlendOperationEx)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_LayerBlendModeEx_get_1source1_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CLayerBlendModeEx *pObjectX = (EarthView::World::Graphic::CLayerBlendModeEx*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->source1);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LayerBlendModeEx_set_1source1_1LayerBlendSource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CLayerBlendModeEx *pObjectX = (EarthView::World::Graphic::CLayerBlendModeEx*)pObjXXXX;
				pObjectX->source1 = (EarthView::World::Graphic::LayerBlendSource)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_LayerBlendModeEx_get_1source2_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CLayerBlendModeEx *pObjectX = (EarthView::World::Graphic::CLayerBlendModeEx*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->source2);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LayerBlendModeEx_set_1source2_1LayerBlendSource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CLayerBlendModeEx *pObjectX = (EarthView::World::Graphic::CLayerBlendModeEx*)pObjXXXX;
				pObjectX->source2 = (EarthView::World::Graphic::LayerBlendSource)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LayerBlendModeEx_get_1colourArg1_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CLayerBlendModeEx *pObjectX = (EarthView::World::Graphic::CLayerBlendModeEx*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->colourArg1);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LayerBlendModeEx_set_1colourArg1_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CLayerBlendModeEx *pObjectX = (EarthView::World::Graphic::CLayerBlendModeEx*)pObjXXXX;
				pObjectX->colourArg1 = *(EarthView::World::Graphic::CColourValue*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LayerBlendModeEx_get_1colourArg2_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CLayerBlendModeEx *pObjectX = (EarthView::World::Graphic::CLayerBlendModeEx*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->colourArg2);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LayerBlendModeEx_set_1colourArg2_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CLayerBlendModeEx *pObjectX = (EarthView::World::Graphic::CLayerBlendModeEx*)pObjXXXX;
				pObjectX->colourArg2 = *(EarthView::World::Graphic::CColourValue*) __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_LayerBlendModeEx_get_1alphaArg1_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CLayerBlendModeEx *pObjectX = (EarthView::World::Graphic::CLayerBlendModeEx*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->alphaArg1);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LayerBlendModeEx_set_1alphaArg1_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CLayerBlendModeEx *pObjectX = (EarthView::World::Graphic::CLayerBlendModeEx*)pObjXXXX;
				pObjectX->alphaArg1 = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_LayerBlendModeEx_get_1alphaArg2_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CLayerBlendModeEx *pObjectX = (EarthView::World::Graphic::CLayerBlendModeEx*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->alphaArg2);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LayerBlendModeEx_set_1alphaArg2_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CLayerBlendModeEx *pObjectX = (EarthView::World::Graphic::CLayerBlendModeEx*)pObjXXXX;
				pObjectX->alphaArg2 = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_LayerBlendModeEx_get_1factor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CLayerBlendModeEx *pObjectX = (EarthView::World::Graphic::CLayerBlendModeEx*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->factor);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LayerBlendModeEx_set_1factor_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CLayerBlendModeEx *pObjectX = (EarthView::World::Graphic::CLayerBlendModeEx*)pObjXXXX;
				pObjectX->factor = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_LayerBlendModeEx_OperatorEquals_1CLayerBlendModeEx(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Graphic::CLayerBlendModeEx& pObjectX = *(EarthView::World::Graphic::CLayerBlendModeEx*) pObjXXXX;
				const EarthView::World::Graphic::CLayerBlendModeEx &rhs = *(EarthView::World::Graphic::CLayerBlendModeEx*) rhs_j;
				ev_bool __values1 = (pObjectX == rhs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_LayerBlendModeEx_OperatorNotEquals_1CLayerBlendModeEx(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Graphic::CLayerBlendModeEx& pObjectX = *(EarthView::World::Graphic::CLayerBlendModeEx*) pObjXXXX;
				const EarthView::World::Graphic::CLayerBlendModeEx &rhs = *(EarthView::World::Graphic::CLayerBlendModeEx*) rhs_j;
				ev_bool __values1 = (pObjectX != rhs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_SceneBlendTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					SBT_TRANSPARENT_ALPHA,
					SBT_TRANSPARENT_COLOUR,
					SBT_ADD,
					SBT_MODULATE,
					SBT_REPLACE
				};
				jintArray array = __env->NewIntArray(5);
				__env->SetIntArrayRegion(array, 0, 5, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_SceneBlendFactorHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					SBF_ONE,
					SBF_ZERO,
					SBF_DEST_COLOUR,
					SBF_SOURCE_COLOUR,
					SBF_ONE_MINUS_DEST_COLOUR,
					SBF_ONE_MINUS_SOURCE_COLOUR,
					SBF_DEST_ALPHA,
					SBF_SOURCE_ALPHA,
					SBF_ONE_MINUS_DEST_ALPHA,
					SBF_ONE_MINUS_SOURCE_ALPHA
				};
				jintArray array = __env->NewIntArray(10);
				__env->SetIntArrayRegion(array, 0, 10, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_SceneBlendOperationHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					SBO_ADD,
					SBO_SUBTRACT,
					SBO_REVERSE_SUBTRACT,
					SBO_MIN,
					SBO_MAX
				};
				jintArray array = __env->NewIntArray(5);
				__env->SetIntArrayRegion(array, 0, 5, enum_values);
				return array;
			}
		}
	}
}
