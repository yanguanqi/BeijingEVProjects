/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/shadowvolumeextrudeprogram.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_00024ProgramsHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CShadowVolumeExtrudeProgram::POINT_LIGHT,
					CShadowVolumeExtrudeProgram::POINT_LIGHT_DEBUG,
					CShadowVolumeExtrudeProgram::DIRECTIONAL_LIGHT,
					CShadowVolumeExtrudeProgram::DIRECTIONAL_LIGHT_DEBUG,
					CShadowVolumeExtrudeProgram::POINT_LIGHT_FINITE,
					CShadowVolumeExtrudeProgram::POINT_LIGHT_FINITE_DEBUG,
					CShadowVolumeExtrudeProgram::DIRECTIONAL_LIGHT_FINITE,
					CShadowVolumeExtrudeProgram::DIRECTIONAL_LIGHT_FINITE_DEBUG
				};
				jintArray array = __env->NewIntArray(8);
				__env->SetIntArrayRegion(array, 0, 8, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_get_1frgProgramName_1void(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::frgProgramName;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_set_1frgProgramName_1EVString(JNIEnv *__env, jclass __clazz, jstring __values1_j)
			{
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				EarthView::World::Graphic::CShadowVolumeExtrudeProgram::frgProgramName = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_initialise_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CShadowVolumeExtrudeProgram::initialise();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_shutdown_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CShadowVolumeExtrudeProgram::shutdown();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getPointLightExtruderArbvp1_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getPointLightExtruderArbvp1();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getPointLightExtruderVs_11_11_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getPointLightExtruderVs_1_1();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getPointLightExtruderVs_14_10_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getPointLightExtruderVs_4_0();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getPointLightExtruderVs_1glsles_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getPointLightExtruderVs_glsles();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getDirectionalLightExtruderArbvp1_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getDirectionalLightExtruderArbvp1();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getDirectionalLightExtruderVs_11_11_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getDirectionalLightExtruderVs_1_1();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getDirectionalLightExtruderVs_14_10_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getDirectionalLightExtruderVs_4_0();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getDirectionalLightExtruderVs_1glsles_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getDirectionalLightExtruderVs_glsles();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getPointLightExtruderArbvp1Debug_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getPointLightExtruderArbvp1Debug();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getPointLightExtruderVs_11_11Debug_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getPointLightExtruderVs_1_1Debug();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getPointLightExtruderVs_14_10Debug_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getPointLightExtruderVs_4_0Debug();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getPointLightExtruderVs_1glslesDebug_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getPointLightExtruderVs_glslesDebug();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getDirectionalLightExtruderArbvp1Debug_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getDirectionalLightExtruderArbvp1Debug();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getDirectionalLightExtruderVs_11_11Debug_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getDirectionalLightExtruderVs_1_1Debug();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getDirectionalLightExtruderVs_14_10Debug_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getDirectionalLightExtruderVs_4_0Debug();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getDirectionalLightExtruderVs_1glslesDebug_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getDirectionalLightExtruderVs_glslesDebug();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getProgramSource_1LightTypes_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env , jclass __clazz, jint lightType_j, jstring syntax_j, jboolean finite_j, jboolean debug_j)
			{
				EarthView::World::Graphic::CLight::LightTypes lightType = (EarthView::World::Graphic::CLight::LightTypes) lightType_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* syntax_ch = (const ev_char*)__env->GetStringUTFChars(syntax_j,JNI_FALSE);
				const EVString syntax = syntax_ch;
				__env->ReleaseStringUTFChars(syntax_j, (const char *)syntax_ch);
				#else
				const ev_wchar* syntax_ch = (const ev_wchar*)__env->GetStringChars(syntax_j,JNI_FALSE);
				const EVString syntax = syntax_ch;
				__env->ReleaseStringChars(syntax_j, (const jchar *)syntax_ch);
				#endif
				ev_bool finite = (ev_bool) finite_j;
				ev_bool debug = (ev_bool) debug_j;
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getProgramSource(lightType, syntax, finite, debug);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getProgramName_1LightTypes_1ev_1bool_1ev_1bool(JNIEnv *__env , jclass __clazz, jint lightType_j, jboolean finite_j, jboolean debug_j)
			{
				EarthView::World::Graphic::CLight::LightTypes lightType = (EarthView::World::Graphic::CLight::LightTypes) lightType_j;
				ev_bool finite = (ev_bool) finite_j;
				ev_bool debug = (ev_bool) debug_j;
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getProgramName(lightType, finite, debug);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getPointLightExtruderArbvp1Finite_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getPointLightExtruderArbvp1Finite();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getPointLightExtruderVs_11_11Finite_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getPointLightExtruderVs_1_1Finite();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getPointLightExtruderVs_14_10Finite_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getPointLightExtruderVs_4_0Finite();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getPointLightExtruderVs_1glslesFinite_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getPointLightExtruderVs_glslesFinite();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getDirectionalLightExtruderArbvp1Finite_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getDirectionalLightExtruderArbvp1Finite();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getDirectionalLightExtruderVs_11_11Finite_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getDirectionalLightExtruderVs_1_1Finite();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getDirectionalLightExtruderVs_14_10Finite_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getDirectionalLightExtruderVs_4_0Finite();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getDirectionalLightExtruderVs_1glslesFinite_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getDirectionalLightExtruderVs_glslesFinite();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getPointLightExtruderArbvp1FiniteDebug_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getPointLightExtruderArbvp1FiniteDebug();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getPointLightExtruderVs_11_11FiniteDebug_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getPointLightExtruderVs_1_1FiniteDebug();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getPointLightExtruderVs_14_10FiniteDebug_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getPointLightExtruderVs_4_0FiniteDebug();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getPointLightExtruderVs_1glslesFiniteDebug_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getPointLightExtruderVs_glslesFiniteDebug();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getDirectionalLightExtruderArbvp1FiniteDebug_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getDirectionalLightExtruderArbvp1FiniteDebug();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getDirectionalLightExtruderVs_11_11FiniteDebug_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getDirectionalLightExtruderVs_1_1FiniteDebug();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getDirectionalLightExtruderVs_14_10FiniteDebug_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getDirectionalLightExtruderVs_4_0FiniteDebug();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowVolumeExtrudeProgram_getDirectionalLightExtruderVs_1glslesFiniteDebug_1void(JNIEnv *__env , jclass __clazz)
			{
				const EVString& __values1 = EarthView::World::Graphic::CShadowVolumeExtrudeProgram::getDirectionalLightExtruderVs_glslesFiniteDebug();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
		}
	}
}
