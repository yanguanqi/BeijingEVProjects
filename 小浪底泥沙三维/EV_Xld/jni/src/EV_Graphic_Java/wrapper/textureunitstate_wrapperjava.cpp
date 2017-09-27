/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/textureunitstate.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureEffectTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CTextureUnitState::ET_ENVIRONMENT_MAP,
					CTextureUnitState::ET_PROJECTIVE_TEXTURE,
					CTextureUnitState::ET_UVSCROLL,
					CTextureUnitState::ET_USCROLL,
					CTextureUnitState::ET_VSCROLL,
					CTextureUnitState::ET_ROTATE,
					CTextureUnitState::ET_TRANSFORM
				};
				jintArray array = __env->NewIntArray(7);
				__env->SetIntArrayRegion(array, 0, 7, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024EnvMapTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CTextureUnitState::ENV_PLANAR,
					CTextureUnitState::ENV_CURVED,
					CTextureUnitState::ENV_REFLECTION,
					CTextureUnitState::ENV_NORMAL
				};
				jintArray array = __env->NewIntArray(4);
				__env->SetIntArrayRegion(array, 0, 4, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureTransformTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CTextureUnitState::TT_TRANSLATE_U,
					CTextureUnitState::TT_TRANSLATE_V,
					CTextureUnitState::TT_SCALE_U,
					CTextureUnitState::TT_SCALE_V,
					CTextureUnitState::TT_ROTATE
				};
				jintArray array = __env->NewIntArray(5);
				__env->SetIntArrayRegion(array, 0, 5, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureAddressingModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CTextureUnitState::TAM_WRAP,
					CTextureUnitState::TAM_MIRROR,
					CTextureUnitState::TAM_CLAMP,
					CTextureUnitState::TAM_BORDER
				};
				jintArray array = __env->NewIntArray(4);
				__env->SetIntArrayRegion(array, 0, 4, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024Uvwaddressingmode_Create(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode *pObjectX = new EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode();
				return (jlong) pObjectX;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024Uvwaddressingmode_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode *pObjectX = (EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode*)pObjXXXX;
				delete pObjectX;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024Uvwaddressingmode_get_1u_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode *pObjectX = (EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->u);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024Uvwaddressingmode_set_1u_1TextureAddressingMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode *pObjectX = (EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode*)pObjXXXX;
				pObjectX->u = (EarthView::World::Graphic::CTextureUnitState::TextureAddressingMode)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024Uvwaddressingmode_get_1v_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode *pObjectX = (EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->v);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024Uvwaddressingmode_set_1v_1TextureAddressingMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode *pObjectX = (EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode*)pObjXXXX;
				pObjectX->v = (EarthView::World::Graphic::CTextureUnitState::TextureAddressingMode)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024Uvwaddressingmode_get_1w_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode *pObjectX = (EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->w);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024Uvwaddressingmode_set_1w_1TextureAddressingMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode *pObjectX = (EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode*)pObjXXXX;
				pObjectX->w = (EarthView::World::Graphic::CTextureUnitState::TextureAddressingMode)__values1_j;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureCubeFaceHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CTextureUnitState::CUBE_FRONT,
					CTextureUnitState::CUBE_BACK,
					CTextureUnitState::CUBE_LEFT,
					CTextureUnitState::CUBE_RIGHT,
					CTextureUnitState::CUBE_UP,
					CTextureUnitState::CUBE_DOWN
				};
				jintArray array = __env->NewIntArray(6);
				__env->SetIntArrayRegion(array, 0, 6, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureEffect_get_1type_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect *pObjectX = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->type);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureEffect_set_1type_1TextureEffectType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect *pObjectX = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjXXXX;
				pObjectX->type = (EarthView::World::Graphic::CTextureUnitState::TextureEffectType)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureEffect_get_1subtype_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect *pObjectX = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->subtype);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureEffect_set_1subtype_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect *pObjectX = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjXXXX;
				pObjectX->subtype = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureEffect_get_1arg2_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect *pObjectX = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->arg2);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureEffect_set_1arg2_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect *pObjectX = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjXXXX;
				pObjectX->arg2 = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureEffect_get_1arg1_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect *pObjectX = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->arg1);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureEffect_set_1arg1_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect *pObjectX = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjXXXX;
				pObjectX->arg1 = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureEffect_get_1waveType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect *pObjectX = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->waveType);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureEffect_set_1waveType_1WaveformType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect *pObjectX = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjXXXX;
				pObjectX->waveType = (EarthView::World::Graphic::WaveformType)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureEffect_get_1base_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect *pObjectX = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->base);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureEffect_set_1base_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect *pObjectX = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjXXXX;
				pObjectX->base = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureEffect_get_1frequency_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect *pObjectX = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->frequency);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureEffect_set_1frequency_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect *pObjectX = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjXXXX;
				pObjectX->frequency = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureEffect_get_1phase_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect *pObjectX = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->phase);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureEffect_set_1phase_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect *pObjectX = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjXXXX;
				pObjectX->phase = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureEffect_get_1amplitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect *pObjectX = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->amplitude);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureEffect_set_1amplitude_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect *pObjectX = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjXXXX;
				pObjectX->amplitude = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureEffect_get_1controller_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect *pObjectX = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->controller);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureEffect_set_1controller_1CController(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect *pObjectX = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjXXXX;
				pObjectX->controller = (EarthView::World::Graphic::CController*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureEffect_get_1frustum_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect *pObjectX = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->frustum);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureEffect_set_1frustum_1CFrustum(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect *pObjectX = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjXXXX;
				pObjectX->frustum = (EarthView::World::Graphic::CFrustum*) __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureUnitStateEffectMap_push_1TextureEffectType_1TextureEffect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j, jlong val_j)
			{
				const EarthView::World::Graphic::CTextureUnitState::TextureEffectType key = (const EarthView::World::Graphic::CTextureUnitState::TextureEffectType) key_j;
				EarthView::World::Graphic::CTextureUnitState::TextureEffect &val = *(EarthView::World::Graphic::CTextureUnitState::TextureEffect*) val_j;
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap *pObjectX = (EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap*) pObjXXXX;
				pObjectX->push(key, val);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureUnitStateEffectMap_exist_1TextureEffectType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const EarthView::World::Graphic::CTextureUnitState::TextureEffectType key = (const EarthView::World::Graphic::CTextureUnitState::TextureEffectType) key_j;
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap *pObjectX = (EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureUnitStateEffectMap_erase_1TextureEffectType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const EarthView::World::Graphic::CTextureUnitState::TextureEffectType key = (const EarthView::World::Graphic::CTextureUnitState::TextureEffectType) key_j;
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap *pObjectX = (EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureUnitStateEffectMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap *pObjectX = (EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureUnitStateEffectMap_count_1TextureEffectType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const EarthView::World::Graphic::CTextureUnitState::TextureEffectType key = (const EarthView::World::Graphic::CTextureUnitState::TextureEffectType) key_j;
				const 				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap *pObjectX = (EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->count(key);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureUnitStateEffectMap_get_1TextureEffectType_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j, jlong index_j)
			{
				const EarthView::World::Graphic::CTextureUnitState::TextureEffectType key = (const EarthView::World::Graphic::CTextureUnitState::TextureEffectType) key_j;
				ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap *pObjectX = (EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap*) pObjXXXX;
				EarthView::World::Graphic::CTextureUnitState::TextureEffect& __values1 = pObjectX->get(key, index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureUnitStateEffectMap_erase_1TextureEffectType_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j, jlong index_j)
			{
				const EarthView::World::Graphic::CTextureUnitState::TextureEffectType key = (const EarthView::World::Graphic::CTextureUnitState::TextureEffectType) key_j;
				ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap *pObjectX = (EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap*) pObjXXXX;
				pObjectX->erase(key, index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureUnitStateEffectMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap *pObjectX = (EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureUnitStateEffectMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap *pObjectX = (EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_OperatorAssign_1CTextureUnitState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong oth_j )
			{
				EarthView::World::Graphic::CTextureUnitState& pObjectX = *(EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				const EarthView::World::Graphic::CTextureUnitState &oth = *(EarthView::World::Graphic::CTextureUnitState*) oth_j;
				pObjectX = oth;
				EarthView::World::Graphic::CTextureUnitState& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_getTextureName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				const EVString& __values1 = pObjectX->getTextureName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTextureName_1EVString_1TextureType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint ttype_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::TextureType ttype = (EarthView::World::Graphic::TextureType) ttype_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTextureName(name, ttype);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTextureName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTextureName(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTexture_1CTexturePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong texPtr_j)
			{
				const EarthView::World::Graphic::CTexturePtr &texPtr = *(EarthView::World::Graphic::CTexturePtr*) texPtr_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTexture(texPtr);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setCubicTexture_1CTexturePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong texPtrs_j)
			{
				const EarthView::World::Graphic::CTexturePtr *texPtrs = (const EarthView::World::Graphic::CTexturePtr*) texPtrs_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setCubicTexture(texPtrs);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setCubicTexture_1CTexturePtr_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong texPtrs_j, jboolean forUVW_j)
			{
				const EarthView::World::Graphic::CTexturePtr *texPtrs = (const EarthView::World::Graphic::CTexturePtr*) texPtrs_j;
				bool forUVW = (bool) forUVW_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setCubicTexture(texPtrs, forUVW);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setCubicTextureName_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean forUVW_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				ev_bool forUVW = (ev_bool) forUVW_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setCubicTextureName(name, forUVW);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setCubicTextureName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setCubicTextureName(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setCubicTextureNames_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong names_j, jboolean forUVW_j)
			{
				const EVString *names = (const EVString*) names_j;
				ev_bool forUVW = (ev_bool) forUVW_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setCubicTextureNames(names, forUVW);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setCubicTextureNames_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong names_j)
			{
				const EVString *names = (const EVString*) names_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setCubicTextureNames(names);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setAnimatedTextureName_1EVString_1ev_1uint32_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong numFrames_j, jdouble duration_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				ev_uint32 numFrames = (ev_uint32) numFrames_j;
				Real duration = (Real) duration_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setAnimatedTextureName(name, numFrames, duration);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setAnimatedTextureName_1EVString_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong numFrames_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				ev_uint32 numFrames = (ev_uint32) numFrames_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setAnimatedTextureName(name, numFrames);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setAnimatedTextureNames_1EVString_1ev_1uint32_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong names_j, jlong numFrames_j, jdouble duration_j)
			{
				const EVString *names = (const EVString*) names_j;
				ev_uint32 numFrames = (ev_uint32) numFrames_j;
				Real duration = (Real) duration_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setAnimatedTextureNames(names, numFrames, duration);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setAnimatedTextureNames_1EVString_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong names_j, jlong numFrames_j)
			{
				const EVString *names = (const EVString*) names_j;
				ev_uint32 numFrames = (ev_uint32) numFrames_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setAnimatedTextureNames(names, numFrames);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureUnitStateTextureDimensionsPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair *pObjectX = (EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->first);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureUnitStateTextureDimensionsPair_set_1first_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair *pObjectX = (EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair*)pObjXXXX;
				pObjectX->first = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureUnitStateTextureDimensionsPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair *pObjectX = (EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureUnitStateTextureDimensionsPair_set_1second_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair *pObjectX = (EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair*)pObjXXXX;
				pObjectX->second = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024TextureUnitStateTextureDimensionsPair_OperatorAssign_1CTextureUnitStateTextureDimensionsPair(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
			{
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair& pObjectX = *(EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair*) pObjXXXX;
				const EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair &other = *(EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair*) other_j;
				pObjectX = other;
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_getTextureDimensions_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong frame_j)
			{
				ev_uint32 frame = (ev_uint32) frame_j;
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair __values1 = pObjectX->getTextureDimensions(frame);
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair *returnvalues = new EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_getTextureDimensions_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair __values1 = pObjectX->getTextureDimensions();
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair *returnvalues = new EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setCurrentFrame_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong frameNumber_j)
			{
				ev_uint32 frameNumber = (ev_uint32) frameNumber_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setCurrentFrame(frameNumber);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_getCurrentFrame_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getCurrentFrame();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_getFrameTextureName_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong frameNumber_j)
			{
				ev_uint32 frameNumber = (ev_uint32) frameNumber_j;
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				const EVString& __values1 = pObjectX->getFrameTextureName(frameNumber);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setFrameTextureName_1EVString_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong frameNumber_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				ev_uint32 frameNumber = (ev_uint32) frameNumber_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setFrameTextureName(name, frameNumber);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_addFrameTextureName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->addFrameTextureName(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_deleteFrameTextureName_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong frameNumber_j)
			{
				const ev_size_t frameNumber = (ev_size_t) frameNumber_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->deleteFrameTextureName(frameNumber);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_getNumFrames_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getNumFrames();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024BindingTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CTextureUnitState::BT_FRAGMENT,
					CTextureUnitState::BT_VERTEX
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_TextureUnitState_00024ContentTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CTextureUnitState::CONTENT_NAMED,
					CTextureUnitState::CONTENT_SHADOW,
					CTextureUnitState::CONTENT_COMPOSITOR
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setBindingType_1BindingType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint bt_j)
			{
				EarthView::World::Graphic::CTextureUnitState::BindingType bt = (EarthView::World::Graphic::CTextureUnitState::BindingType) bt_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setBindingType(bt);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureUnitState_getBindingType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				EarthView::World::Graphic::CTextureUnitState::BindingType __values1 = pObjectX->getBindingType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setContentType_1ContentType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint ct_j)
			{
				EarthView::World::Graphic::CTextureUnitState::ContentType ct = (EarthView::World::Graphic::CTextureUnitState::ContentType) ct_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setContentType(ct);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureUnitState_getContentType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				EarthView::World::Graphic::CTextureUnitState::ContentType __values1 = pObjectX->getContentType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TextureUnitState_isCubic_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				ev_bool __values1 = pObjectX->isCubic();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TextureUnitState_is3D_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				ev_bool __values1 = pObjectX->is3D();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureUnitState_getTextureType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				EarthView::World::Graphic::TextureType __values1 = pObjectX->getTextureType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setDesiredFormat_1PixelFormat(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint desiredFormat_j)
			{
				EarthView::World::Graphic::PixelFormat desiredFormat = (EarthView::World::Graphic::PixelFormat) desiredFormat_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setDesiredFormat(desiredFormat);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureUnitState_getDesiredFormat_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				EarthView::World::Graphic::PixelFormat __values1 = pObjectX->getDesiredFormat();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setNumMipmaps_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint numMipmaps_j)
			{
				ev_int32 numMipmaps = (ev_int32) numMipmaps_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setNumMipmaps(numMipmaps);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureUnitState_getNumMipmaps_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getNumMipmaps();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setIsAlpha_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isAlpha_j)
			{
				ev_bool isAlpha = (ev_bool) isAlpha_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setIsAlpha(isAlpha);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TextureUnitState_getIsAlpha_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				ev_bool __values1 = pObjectX->getIsAlpha();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setHardwareGammaEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setHardwareGammaEnabled(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TextureUnitState_isHardwareGammaEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				ev_bool __values1 = pObjectX->isHardwareGammaEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_getTextureCoordSet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getTextureCoordSet();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTextureCoordSet_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong set_j)
			{
				ev_uint32 set = (ev_uint32) set_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTextureCoordSet(set);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTextureTransform_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xform_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &xform = *(EarthView::World::Spatial::Math::CMatrix4*) xform_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTextureTransform(xform);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_getTextureTransform_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->getTextureTransform();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTextureScroll_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble u_j, jdouble v_j)
			{
				Real u = (Real) u_j;
				Real v = (Real) v_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTextureScroll(u, v);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTextureUScroll_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
			{
				Real value = (Real) value_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTextureUScroll(value);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_TextureUnitState_getTextureUScroll_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				Real __values1 = pObjectX->getTextureUScroll();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTextureVScroll_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
			{
				Real value = (Real) value_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTextureVScroll(value);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_TextureUnitState_getTextureVScroll_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				Real __values1 = pObjectX->getTextureVScroll();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTextureUScale_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
			{
				Real value = (Real) value_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTextureUScale(value);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_TextureUnitState_getTextureUScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				Real __values1 = pObjectX->getTextureUScale();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTextureVScale_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
			{
				Real value = (Real) value_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTextureVScale(value);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_TextureUnitState_getTextureVScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				Real __values1 = pObjectX->getTextureVScale();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTextureScale_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble uScale_j, jdouble vScale_j)
			{
				Real uScale = (Real) uScale_j;
				Real vScale = (Real) vScale_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTextureScale(uScale, vScale);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTextureRotate_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j)
			{
				const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTextureRotate(angle);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_getTextureRotate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				const EarthView::World::Spatial::Math::CRadian& __values1 = pObjectX->getTextureRotate();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_getTextureAddressingMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				const EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode& __values1 = pObjectX->getTextureAddressingMode();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTextureAddressingMode_1TextureAddressingMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint tam_j)
			{
				EarthView::World::Graphic::CTextureUnitState::TextureAddressingMode tam = (EarthView::World::Graphic::CTextureUnitState::TextureAddressingMode) tam_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTextureAddressingMode(tam);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTextureAddressingMode_1TextureAddressingMode_1TextureAddressingMode_1TextureAddressingMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint u_j, jint v_j, jint w_j)
			{
				EarthView::World::Graphic::CTextureUnitState::TextureAddressingMode u = (EarthView::World::Graphic::CTextureUnitState::TextureAddressingMode) u_j;
				EarthView::World::Graphic::CTextureUnitState::TextureAddressingMode v = (EarthView::World::Graphic::CTextureUnitState::TextureAddressingMode) v_j;
				EarthView::World::Graphic::CTextureUnitState::TextureAddressingMode w = (EarthView::World::Graphic::CTextureUnitState::TextureAddressingMode) w_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTextureAddressingMode(u, v, w);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTextureAddressingMode_1UVWAddressingMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong uvw_j)
			{
				const EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode &uvw = *(EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode*) uvw_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTextureAddressingMode(uvw);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTextureBorderColour_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong colour_j)
			{
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTextureBorderColour(colour);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_getTextureBorderColour_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getTextureBorderColour();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setColourOperationEx_1LayerBlendOperationEx_1LayerBlendSource_1LayerBlendSource_1CColourValue_1CColourValue_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint op_j, jint source1_j, jint source2_j, jlong arg1_j, jlong arg2_j, jdouble manualBlend_j)
			{
				EarthView::World::Graphic::LayerBlendOperationEx op = (EarthView::World::Graphic::LayerBlendOperationEx) op_j;
				EarthView::World::Graphic::LayerBlendSource source1 = (EarthView::World::Graphic::LayerBlendSource) source1_j;
				EarthView::World::Graphic::LayerBlendSource source2 = (EarthView::World::Graphic::LayerBlendSource) source2_j;
				const EarthView::World::Graphic::CColourValue &arg1 = *(EarthView::World::Graphic::CColourValue*) arg1_j;
				const EarthView::World::Graphic::CColourValue &arg2 = *(EarthView::World::Graphic::CColourValue*) arg2_j;
				Real manualBlend = (Real) manualBlend_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setColourOperationEx(op, source1, source2, arg1, arg2, manualBlend);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setColourOperationEx_1LayerBlendOperationEx_1LayerBlendSource_1LayerBlendSource_1CColourValue_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint op_j, jint source1_j, jint source2_j, jlong arg1_j, jlong arg2_j)
			{
				EarthView::World::Graphic::LayerBlendOperationEx op = (EarthView::World::Graphic::LayerBlendOperationEx) op_j;
				EarthView::World::Graphic::LayerBlendSource source1 = (EarthView::World::Graphic::LayerBlendSource) source1_j;
				EarthView::World::Graphic::LayerBlendSource source2 = (EarthView::World::Graphic::LayerBlendSource) source2_j;
				const EarthView::World::Graphic::CColourValue &arg1 = *(EarthView::World::Graphic::CColourValue*) arg1_j;
				const EarthView::World::Graphic::CColourValue &arg2 = *(EarthView::World::Graphic::CColourValue*) arg2_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setColourOperationEx(op, source1, source2, arg1, arg2);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setColourOperationEx_1LayerBlendOperationEx_1LayerBlendSource_1LayerBlendSource_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint op_j, jint source1_j, jint source2_j, jlong arg1_j)
			{
				EarthView::World::Graphic::LayerBlendOperationEx op = (EarthView::World::Graphic::LayerBlendOperationEx) op_j;
				EarthView::World::Graphic::LayerBlendSource source1 = (EarthView::World::Graphic::LayerBlendSource) source1_j;
				EarthView::World::Graphic::LayerBlendSource source2 = (EarthView::World::Graphic::LayerBlendSource) source2_j;
				const EarthView::World::Graphic::CColourValue &arg1 = *(EarthView::World::Graphic::CColourValue*) arg1_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setColourOperationEx(op, source1, source2, arg1);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setColourOperationEx_1LayerBlendOperationEx_1LayerBlendSource_1LayerBlendSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint op_j, jint source1_j, jint source2_j)
			{
				EarthView::World::Graphic::LayerBlendOperationEx op = (EarthView::World::Graphic::LayerBlendOperationEx) op_j;
				EarthView::World::Graphic::LayerBlendSource source1 = (EarthView::World::Graphic::LayerBlendSource) source1_j;
				EarthView::World::Graphic::LayerBlendSource source2 = (EarthView::World::Graphic::LayerBlendSource) source2_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setColourOperationEx(op, source1, source2);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setColourOperationEx_1LayerBlendOperationEx_1LayerBlendSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint op_j, jint source1_j)
			{
				EarthView::World::Graphic::LayerBlendOperationEx op = (EarthView::World::Graphic::LayerBlendOperationEx) op_j;
				EarthView::World::Graphic::LayerBlendSource source1 = (EarthView::World::Graphic::LayerBlendSource) source1_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setColourOperationEx(op, source1);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setColourOperationEx_1LayerBlendOperationEx(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint op_j)
			{
				EarthView::World::Graphic::LayerBlendOperationEx op = (EarthView::World::Graphic::LayerBlendOperationEx) op_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setColourOperationEx(op);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setColourOperation_1LayerBlendOperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint op_j)
			{
				const EarthView::World::Graphic::LayerBlendOperation op = (EarthView::World::Graphic::LayerBlendOperation) op_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setColourOperation(op);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setColourOpMultipassFallback_1SceneBlendFactor_1SceneBlendFactor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint sourceFactor_j, jint destFactor_j)
			{
				const EarthView::World::Graphic::SceneBlendFactor sourceFactor = (EarthView::World::Graphic::SceneBlendFactor) sourceFactor_j;
				const EarthView::World::Graphic::SceneBlendFactor destFactor = (EarthView::World::Graphic::SceneBlendFactor) destFactor_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setColourOpMultipassFallback(sourceFactor, destFactor);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_getColourBlendMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				const EarthView::World::Graphic::CLayerBlendModeEx& __values1 = pObjectX->getColourBlendMode();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_getAlphaBlendMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				const EarthView::World::Graphic::CLayerBlendModeEx& __values1 = pObjectX->getAlphaBlendMode();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureUnitState_getColourBlendFallbackSrc_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				EarthView::World::Graphic::SceneBlendFactor __values1 = pObjectX->getColourBlendFallbackSrc();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureUnitState_getColourBlendFallbackDest_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				EarthView::World::Graphic::SceneBlendFactor __values1 = pObjectX->getColourBlendFallbackDest();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setAlphaOperation_1LayerBlendOperationEx_1LayerBlendSource_1LayerBlendSource_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint op_j, jint source1_j, jint source2_j, jdouble arg1_j, jdouble arg2_j, jdouble manualBlend_j)
			{
				EarthView::World::Graphic::LayerBlendOperationEx op = (EarthView::World::Graphic::LayerBlendOperationEx) op_j;
				EarthView::World::Graphic::LayerBlendSource source1 = (EarthView::World::Graphic::LayerBlendSource) source1_j;
				EarthView::World::Graphic::LayerBlendSource source2 = (EarthView::World::Graphic::LayerBlendSource) source2_j;
				Real arg1 = (Real) arg1_j;
				Real arg2 = (Real) arg2_j;
				Real manualBlend = (Real) manualBlend_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setAlphaOperation(op, source1, source2, arg1, arg2, manualBlend);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setAlphaOperation_1LayerBlendOperationEx_1LayerBlendSource_1LayerBlendSource_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint op_j, jint source1_j, jint source2_j, jdouble arg1_j, jdouble arg2_j)
			{
				EarthView::World::Graphic::LayerBlendOperationEx op = (EarthView::World::Graphic::LayerBlendOperationEx) op_j;
				EarthView::World::Graphic::LayerBlendSource source1 = (EarthView::World::Graphic::LayerBlendSource) source1_j;
				EarthView::World::Graphic::LayerBlendSource source2 = (EarthView::World::Graphic::LayerBlendSource) source2_j;
				Real arg1 = (Real) arg1_j;
				Real arg2 = (Real) arg2_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setAlphaOperation(op, source1, source2, arg1, arg2);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setAlphaOperation_1LayerBlendOperationEx_1LayerBlendSource_1LayerBlendSource_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint op_j, jint source1_j, jint source2_j, jdouble arg1_j)
			{
				EarthView::World::Graphic::LayerBlendOperationEx op = (EarthView::World::Graphic::LayerBlendOperationEx) op_j;
				EarthView::World::Graphic::LayerBlendSource source1 = (EarthView::World::Graphic::LayerBlendSource) source1_j;
				EarthView::World::Graphic::LayerBlendSource source2 = (EarthView::World::Graphic::LayerBlendSource) source2_j;
				Real arg1 = (Real) arg1_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setAlphaOperation(op, source1, source2, arg1);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setAlphaOperation_1LayerBlendOperationEx_1LayerBlendSource_1LayerBlendSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint op_j, jint source1_j, jint source2_j)
			{
				EarthView::World::Graphic::LayerBlendOperationEx op = (EarthView::World::Graphic::LayerBlendOperationEx) op_j;
				EarthView::World::Graphic::LayerBlendSource source1 = (EarthView::World::Graphic::LayerBlendSource) source1_j;
				EarthView::World::Graphic::LayerBlendSource source2 = (EarthView::World::Graphic::LayerBlendSource) source2_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setAlphaOperation(op, source1, source2);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setAlphaOperation_1LayerBlendOperationEx_1LayerBlendSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint op_j, jint source1_j)
			{
				EarthView::World::Graphic::LayerBlendOperationEx op = (EarthView::World::Graphic::LayerBlendOperationEx) op_j;
				EarthView::World::Graphic::LayerBlendSource source1 = (EarthView::World::Graphic::LayerBlendSource) source1_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setAlphaOperation(op, source1);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setAlphaOperation_1LayerBlendOperationEx(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint op_j)
			{
				EarthView::World::Graphic::LayerBlendOperationEx op = (EarthView::World::Graphic::LayerBlendOperationEx) op_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setAlphaOperation(op);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_addEffect_1TextureEffect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong effect_j)
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect &effect = *(EarthView::World::Graphic::CTextureUnitState::TextureEffect*) effect_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->addEffect(effect);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setEnvironmentMap_1ev_1bool_1EnvMapType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j, jint envMapType_j)
			{
				ev_bool enable = (ev_bool) enable_j;
				EarthView::World::Graphic::CTextureUnitState::EnvMapType envMapType = (EarthView::World::Graphic::CTextureUnitState::EnvMapType) envMapType_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setEnvironmentMap(enable, envMapType);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setEnvironmentMap_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				ev_bool enable = (ev_bool) enable_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setEnvironmentMap(enable);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setScrollAnimation_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble uSpeed_j, jdouble vSpeed_j)
			{
				Real uSpeed = (Real) uSpeed_j;
				Real vSpeed = (Real) vSpeed_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setScrollAnimation(uSpeed, vSpeed);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setRotateAnimation_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble speed_j)
			{
				Real speed = (Real) speed_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setRotateAnimation(speed);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTransformAnimation_1TextureTransformType_1WaveformType_1Real_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint ttype_j, jint waveType_j, jdouble base_j, jdouble frequency_j, jdouble phase_j, jdouble amplitude_j)
			{
				const EarthView::World::Graphic::CTextureUnitState::TextureTransformType ttype = (EarthView::World::Graphic::CTextureUnitState::TextureTransformType) ttype_j;
				const EarthView::World::Graphic::WaveformType waveType = (EarthView::World::Graphic::WaveformType) waveType_j;
				Real base = (Real) base_j;
				Real frequency = (Real) frequency_j;
				Real phase = (Real) phase_j;
				Real amplitude = (Real) amplitude_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTransformAnimation(ttype, waveType, base, frequency, phase, amplitude);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTransformAnimation_1TextureTransformType_1WaveformType_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint ttype_j, jint waveType_j, jdouble base_j, jdouble frequency_j, jdouble phase_j)
			{
				const EarthView::World::Graphic::CTextureUnitState::TextureTransformType ttype = (EarthView::World::Graphic::CTextureUnitState::TextureTransformType) ttype_j;
				const EarthView::World::Graphic::WaveformType waveType = (EarthView::World::Graphic::WaveformType) waveType_j;
				Real base = (Real) base_j;
				Real frequency = (Real) frequency_j;
				Real phase = (Real) phase_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTransformAnimation(ttype, waveType, base, frequency, phase);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTransformAnimation_1TextureTransformType_1WaveformType_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint ttype_j, jint waveType_j, jdouble base_j, jdouble frequency_j)
			{
				const EarthView::World::Graphic::CTextureUnitState::TextureTransformType ttype = (EarthView::World::Graphic::CTextureUnitState::TextureTransformType) ttype_j;
				const EarthView::World::Graphic::WaveformType waveType = (EarthView::World::Graphic::WaveformType) waveType_j;
				Real base = (Real) base_j;
				Real frequency = (Real) frequency_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTransformAnimation(ttype, waveType, base, frequency);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTransformAnimation_1TextureTransformType_1WaveformType_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint ttype_j, jint waveType_j, jdouble base_j)
			{
				const EarthView::World::Graphic::CTextureUnitState::TextureTransformType ttype = (EarthView::World::Graphic::CTextureUnitState::TextureTransformType) ttype_j;
				const EarthView::World::Graphic::WaveformType waveType = (EarthView::World::Graphic::WaveformType) waveType_j;
				Real base = (Real) base_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTransformAnimation(ttype, waveType, base);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTransformAnimation_1TextureTransformType_1WaveformType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint ttype_j, jint waveType_j)
			{
				const EarthView::World::Graphic::CTextureUnitState::TextureTransformType ttype = (EarthView::World::Graphic::CTextureUnitState::TextureTransformType) ttype_j;
				const EarthView::World::Graphic::WaveformType waveType = (EarthView::World::Graphic::WaveformType) waveType_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTransformAnimation(ttype, waveType);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setProjectiveTexturing_1ev_1bool_1CFrustum(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j, jlong ref_projectionSettings_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				const EarthView::World::Graphic::CFrustum *ref_projectionSettings = (const EarthView::World::Graphic::CFrustum*) ref_projectionSettings_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setProjectiveTexturing(enabled, ref_projectionSettings);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setProjectiveTexturing_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setProjectiveTexturing(enabled);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_removeAllEffects_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->removeAllEffects();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_removeEffect_1TextureEffectType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
			{
				const EarthView::World::Graphic::CTextureUnitState::TextureEffectType type = (EarthView::World::Graphic::CTextureUnitState::TextureEffectType) type_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->removeEffect(type);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TextureUnitState_isBlank_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				ev_bool __values1 = pObjectX->isBlank();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setBlank_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setBlank();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TextureUnitState_isTextureLoadFailing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				ev_bool __values1 = pObjectX->isTextureLoadFailing();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_retryTextureLoad_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->retryTextureLoad();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_getEffects_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				const EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap& __values1 = pObjectX->getEffects();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_TextureUnitState_getAnimationDuration_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				Real __values1 = pObjectX->getAnimationDuration();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTextureFiltering_1TextureFilterOptions(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint filterType_j)
			{
				EarthView::World::Graphic::TextureFilterOptions filterType = (EarthView::World::Graphic::TextureFilterOptions) filterType_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTextureFiltering(filterType);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTextureFiltering_1FilterType_1FilterOptions(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint ftype_j, jint opts_j)
			{
				EarthView::World::Graphic::FilterType ftype = (EarthView::World::Graphic::FilterType) ftype_j;
				EarthView::World::Graphic::FilterOptions opts = (EarthView::World::Graphic::FilterOptions) opts_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTextureFiltering(ftype, opts);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTextureFiltering_1FilterOptions_1FilterOptions_1FilterOptions(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint minFilter_j, jint magFilter_j, jint mipFilter_j)
			{
				EarthView::World::Graphic::FilterOptions minFilter = (EarthView::World::Graphic::FilterOptions) minFilter_j;
				EarthView::World::Graphic::FilterOptions magFilter = (EarthView::World::Graphic::FilterOptions) magFilter_j;
				EarthView::World::Graphic::FilterOptions mipFilter = (EarthView::World::Graphic::FilterOptions) mipFilter_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTextureFiltering(minFilter, magFilter, mipFilter);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureUnitState_getTextureFiltering_1FilterType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint ftpye_j)
			{
				EarthView::World::Graphic::FilterType ftpye = (EarthView::World::Graphic::FilterType) ftpye_j;
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				EarthView::World::Graphic::FilterOptions __values1 = pObjectX->getTextureFiltering(ftpye);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTextureAnisotropy_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong maxAniso_j)
			{
				ev_uint32 maxAniso = (ev_uint32) maxAniso_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTextureAnisotropy(maxAniso);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_getTextureAnisotropy_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getTextureAnisotropy();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTextureMipmapBias_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat bias_j)
			{
				ev_real32 bias = (ev_real32) bias_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTextureMipmapBias(bias);
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_TextureUnitState_getTextureMipmapBias_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				ev_real32 __values1 = pObjectX->getTextureMipmapBias();
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setCompositorReference_1EVString_1EVString_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring compositorName_j, jstring textureName_j, jlong mrtIndex_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* compositorName_ch = (const ev_char*)__env->GetStringUTFChars(compositorName_j,JNI_FALSE);
				const EVString compositorName = compositorName_ch;
				__env->ReleaseStringUTFChars(compositorName_j, (const char *)compositorName_ch);
				#else
				const ev_wchar* compositorName_ch = (const ev_wchar*)__env->GetStringChars(compositorName_j,JNI_FALSE);
				const EVString compositorName = compositorName_ch;
				__env->ReleaseStringChars(compositorName_j, (const jchar *)compositorName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* textureName_ch = (const ev_char*)__env->GetStringUTFChars(textureName_j,JNI_FALSE);
				const EVString textureName = textureName_ch;
				__env->ReleaseStringUTFChars(textureName_j, (const char *)textureName_ch);
				#else
				const ev_wchar* textureName_ch = (const ev_wchar*)__env->GetStringChars(textureName_j,JNI_FALSE);
				const EVString textureName = textureName_ch;
				__env->ReleaseStringChars(textureName_j, (const jchar *)textureName_ch);
				#endif
				ev_size_t mrtIndex = (ev_size_t) mrtIndex_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setCompositorReference(compositorName, textureName, mrtIndex);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setCompositorReference_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring compositorName_j, jstring textureName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* compositorName_ch = (const ev_char*)__env->GetStringUTFChars(compositorName_j,JNI_FALSE);
				const EVString compositorName = compositorName_ch;
				__env->ReleaseStringUTFChars(compositorName_j, (const char *)compositorName_ch);
				#else
				const ev_wchar* compositorName_ch = (const ev_wchar*)__env->GetStringChars(compositorName_j,JNI_FALSE);
				const EVString compositorName = compositorName_ch;
				__env->ReleaseStringChars(compositorName_j, (const jchar *)compositorName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* textureName_ch = (const ev_char*)__env->GetStringUTFChars(textureName_j,JNI_FALSE);
				const EVString textureName = textureName_ch;
				__env->ReleaseStringUTFChars(textureName_j, (const char *)textureName_ch);
				#else
				const ev_wchar* textureName_ch = (const ev_wchar*)__env->GetStringChars(textureName_j,JNI_FALSE);
				const EVString textureName = textureName_ch;
				__env->ReleaseStringChars(textureName_j, (const jchar *)textureName_ch);
				#endif
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setCompositorReference(compositorName, textureName);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_getReferencedCompositorName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				const EVString& __values1 = pObjectX->getReferencedCompositorName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_getReferencedTextureName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				const EVString& __values1 = pObjectX->getReferencedTextureName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_getReferencedMRTIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getReferencedMRTIndex();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_getParent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				EarthView::World::Graphic::CPass* __values1 = pObjectX->getParent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState__1prepare_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->_prepare();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState__1unprepare_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->_unprepare();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState__1load_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->_load();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState__1unload_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->_unload();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TextureUnitState_hasViewRelativeTextureCoordinateGeneration_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasViewRelativeTextureCoordinateGeneration();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TextureUnitState_isLoaded_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				ev_bool __values1 = pObjectX->isLoaded();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState__1notifyNeedsRecompile_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->_notifyNeedsRecompile();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setName(name);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				const EVString& __values1 = pObjectX->getName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_setTextureNameAlias_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->setTextureNameAlias(name);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_getTextureNameAlias_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				const EVString& __values1 = pObjectX->getTextureNameAlias();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TextureUnitState_applyTextureAliases_1CommonStringPairList_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong aliasList_j, jboolean apply_j)
			{
				const EarthView::World::Core::CommonStringPairList &aliasList = *(EarthView::World::Core::CommonStringPairList*) aliasList_j;
				const ev_bool apply = (ev_bool) apply_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				ev_bool __values1 = pObjectX->applyTextureAliases(aliasList, apply);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TextureUnitState_applyTextureAliases_1CommonStringPairList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong aliasList_j)
			{
				const EarthView::World::Core::CommonStringPairList &aliasList = *(EarthView::World::Core::CommonStringPairList*) aliasList_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				ev_bool __values1 = pObjectX->applyTextureAliases(aliasList);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState__1notifyParent_1CPass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong parent_j)
			{
				EarthView::World::Graphic::CPass *parent = (EarthView::World::Graphic::CPass*) parent_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->_notifyParent(parent);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState__1getTexturePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				const EarthView::World::Graphic::CTexturePtr& __values1 = pObjectX->_getTexturePtr();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState__1getTexturePtr_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong frame_j)
			{
				ev_size_t frame = (ev_size_t) frame_j;
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				const EarthView::World::Graphic::CTexturePtr& __values1 = pObjectX->_getTexturePtr(frame);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState__1setTexturePtr_1CTexturePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong texptr_j)
			{
				const EarthView::World::Graphic::CTexturePtr &texptr = *(EarthView::World::Graphic::CTexturePtr*) texptr_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->_setTexturePtr(texptr);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState__1setTexturePtr_1CTexturePtr_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong texptr_j, jlong frame_j)
			{
				const EarthView::World::Graphic::CTexturePtr &texptr = *(EarthView::World::Graphic::CTexturePtr*) texptr_j;
				ev_size_t frame = (ev_size_t) frame_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->_setTexturePtr(texptr, frame);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState__1getAnimController_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				EarthView::World::Graphic::CController* __values1 = pObjectX->_getAnimController();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mCurrentFrame_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->mCurrentFrame);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mCurrentFrame_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mCurrentFrame = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mAnimDuration_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->mAnimDuration);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mAnimDuration_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mAnimDuration = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mCubic_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->mCubic);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mCubic_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mCubic = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mTextureType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->mTextureType);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mTextureType_1TextureType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mTextureType = (EarthView::World::Graphic::TextureType)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mDesiredFormat_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->mDesiredFormat);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mDesiredFormat_1PixelFormat(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mDesiredFormat = (EarthView::World::Graphic::PixelFormat)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mTextureSrcMipmaps_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->mTextureSrcMipmaps);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mTextureSrcMipmaps_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mTextureSrcMipmaps = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mTextureCoordSetIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->mTextureCoordSetIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mTextureCoordSetIndex_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mTextureCoordSetIndex = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mAddressMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mAddressMode);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mAddressMode_1UVWAddressingMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mAddressMode = *(EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode*)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mBorderColour_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mBorderColour);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mBorderColour_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mBorderColour = *(EarthView::World::Graphic::CColourValue*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mColourBlendMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mColourBlendMode);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mColourBlendMode_1CLayerBlendModeEx(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mColourBlendMode = *(EarthView::World::Graphic::CLayerBlendModeEx*) __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mColourBlendFallbackSrc_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->mColourBlendFallbackSrc);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mColourBlendFallbackSrc_1SceneBlendFactor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mColourBlendFallbackSrc = (EarthView::World::Graphic::SceneBlendFactor)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mColourBlendFallbackDest_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->mColourBlendFallbackDest);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mColourBlendFallbackDest_1SceneBlendFactor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mColourBlendFallbackDest = (EarthView::World::Graphic::SceneBlendFactor)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mAlphaBlendMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mAlphaBlendMode);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mAlphaBlendMode_1CLayerBlendModeEx(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mAlphaBlendMode = *(EarthView::World::Graphic::CLayerBlendModeEx*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mTextureLoadFailed_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->mTextureLoadFailed);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mTextureLoadFailed_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mTextureLoadFailed = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mIsAlpha_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->mIsAlpha);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mIsAlpha_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mIsAlpha = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mHwGamma_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->mHwGamma);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mHwGamma_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mHwGamma = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mRecalcTexMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->mRecalcTexMatrix);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mRecalcTexMatrix_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mRecalcTexMatrix = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mVMod_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->mVMod);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mVMod_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mVMod = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mUMod_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->mUMod);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mUMod_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mUMod = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mVScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->mVScale);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mVScale_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mVScale = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mUScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->mUScale);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mUScale_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mUScale = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mRotate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mRotate);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mRotate_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mRotate = *(EarthView::World::Spatial::Math::CRadian*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mTexModMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mTexModMatrix);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mTexModMatrix_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mTexModMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mMinFilter_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->mMinFilter);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mMinFilter_1FilterOptions(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mMinFilter = (EarthView::World::Graphic::FilterOptions)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mMagFilter_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->mMagFilter);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mMagFilter_1FilterOptions(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mMagFilter = (EarthView::World::Graphic::FilterOptions)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mMipFilter_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->mMipFilter);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mMipFilter_1FilterOptions(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mMipFilter = (EarthView::World::Graphic::FilterOptions)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mMaxAniso_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->mMaxAniso);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mMaxAniso_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mMaxAniso = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mMipmapBias_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->mMipmapBias);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mMipmapBias_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mMipmapBias = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mIsDefaultAniso_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->mIsDefaultAniso);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mIsDefaultAniso_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mIsDefaultAniso = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mIsDefaultFiltering_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->mIsDefaultFiltering);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mIsDefaultFiltering_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mIsDefaultFiltering = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mBindingType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->mBindingType);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mBindingType_1BindingType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mBindingType = (EarthView::World::Graphic::CTextureUnitState::BindingType)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mContentType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->mContentType);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mContentType_1ContentType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mContentType = (EarthView::World::Graphic::CTextureUnitState::ContentType)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mCompositorRefMrtIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->mCompositorRefMrtIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mCompositorRefMrtIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mCompositorRefMrtIndex = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mFrames_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mFrames);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mFrames_1StringVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mFrames = *(EarthView::World::Core::StringVector*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mFramePtrs_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mFramePtrs);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mFramePtrs_1ShadowTextureList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mFramePtrs = *(EarthView::World::Graphic::ShadowTextureList*) __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mName;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mName = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mTextureNameAlias_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mTextureNameAlias;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mTextureNameAlias_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mTextureNameAlias = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mEffects_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mEffects);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mEffects_1CTextureUnitStateEffectMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mEffects = *(EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap*) __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mCompositorRefName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mCompositorRefName;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mCompositorRefName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mCompositorRefName = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mCompositorRefTexName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mCompositorRefTexName;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mCompositorRefTexName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mCompositorRefTexName = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mParent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->mParent);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mParent_1CPass(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mParent = (EarthView::World::Graphic::CPass*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitState_get_1mAnimController_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->mAnimController);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_set_1mAnimController_1CController(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*)pObjXXXX;
				pObjectX->mAnimController = (EarthView::World::Graphic::CController*) __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_recalcTextureMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->recalcTextureMatrix();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_createAnimController_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->createAnimController();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_createEffectController_1TextureEffect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong effect_j)
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect &effect = *(EarthView::World::Graphic::CTextureUnitState::TextureEffect*) effect_j;
				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->createEffectController(effect);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_ensurePrepared_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong frame_j)
			{
				ev_size_t frame = (ev_size_t) frame_j;
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->ensurePrepared(frame);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitState_ensureLoaded_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong frame_j)
			{
				ev_size_t frame = (ev_size_t) frame_j;
				const 				EarthView::World::Graphic::CTextureUnitState *pObjectX = (EarthView::World::Graphic::CTextureUnitState*) pObjXXXX;
				pObjectX->ensureLoaded(frame);
			}
		}
	}
}
