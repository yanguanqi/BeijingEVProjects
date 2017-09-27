/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/common.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_CompareFunctionHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CMPF_ALWAYS_FAIL,
					CMPF_ALWAYS_PASS,
					CMPF_LESS,
					CMPF_LESS_EQUAL,
					CMPF_EQUAL,
					CMPF_NOT_EQUAL,
					CMPF_GREATER_EQUAL,
					CMPF_GREATER
				};
				jintArray array = __env->NewIntArray(8);
				__env->SetIntArrayRegion(array, 0, 8, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_TextureFilterOptionsHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					TFO_NONE,
					TFO_BILINEAR,
					TFO_TRILINEAR,
					TFO_ANISOTROPIC
				};
				jintArray array = __env->NewIntArray(4);
				__env->SetIntArrayRegion(array, 0, 4, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_FilterTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					FT_MIN,
					FT_MAG,
					FT_MIP
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_FilterOptionsHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					FO_NONE,
					FO_POINT,
					FO_LINEAR,
					FO_ANISOTROPIC
				};
				jintArray array = __env->NewIntArray(4);
				__env->SetIntArrayRegion(array, 0, 4, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_ShadeOptionsHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					SO_FLAT,
					SO_GOURAUD,
					SO_PHONG
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_FogModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					FOG_NONE,
					FOG_EXP,
					FOG_EXP2,
					FOG_LINEAR
				};
				jintArray array = __env->NewIntArray(4);
				__env->SetIntArrayRegion(array, 0, 4, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_CullingModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CULL_NONE,
					CULL_CLOCKWISE,
					CULL_ANTICLOCKWISE
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_ManualCullingModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					MANUAL_CULL_NONE,
					MANUAL_CULL_BACK,
					MANUAL_CULL_FRONT
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_WaveformTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					WFT_SINE,
					WFT_TRIANGLE,
					WFT_SQUARE,
					WFT_SAWTOOTH,
					WFT_INVERSE_SAWTOOTH,
					WFT_PWM
				};
				jintArray array = __env->NewIntArray(6);
				__env->SetIntArrayRegion(array, 0, 6, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_PolygonModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					PM_POINTS,
					PM_WIREFRAME,
					PM_SOLID
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_ShadowTechniqueHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					SHADOWTYPE_NONE,
					SHADOWDETAILTYPE_ADDITIVE,
					SHADOWDETAILTYPE_MODULATIVE,
					SHADOWDETAILTYPE_INTEGRATED,
					SHADOWDETAILTYPE_STENCIL,
					SHADOWDETAILTYPE_TEXTURE,
					SHADOWTYPE_STENCIL_MODULATIVE,
					SHADOWTYPE_STENCIL_ADDITIVE,
					SHADOWTYPE_TEXTURE_MODULATIVE,
					SHADOWTYPE_TEXTURE_ADDITIVE,
					SHADOWTYPE_TEXTURE_ADDITIVE_INTEGRATED,
					SHADOWTYPE_TEXTURE_MODULATIVE_INTEGRATED
				};
				jintArray array = __env->NewIntArray(12);
				__env->SetIntArrayRegion(array, 0, 12, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_TrackVertexColourEnumHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					TVC_NONE,
					TVC_AMBIENT,
					TVC_DIFFUSE,
					TVC_SPECULAR,
					TVC_EMISSIVE
				};
				jintArray array = __env->NewIntArray(5);
				__env->SetIntArrayRegion(array, 0, 5, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_SortModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					SM_DIRECTION,
					SM_DISTANCE
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_FrameBufferTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					FBT_COLOUR,
					FBT_DEPTH,
					FBT_STENCIL
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_InstanceManagerFlagsHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					IM_USE16BIT,
					IM_VTFBESTFIT,
					IM_VTFBONEMATRIXLOOKUP,
					IM_USEBONEDUALQUATERNIONS,
					IM_USEONEWEIGHT,
					IM_FORCEONEWEIGHT,
					IM_USEALL
				};
				jintArray array = __env->NewIntArray(7);
				__env->SetIntArrayRegion(array, 0, 7, enum_values);
				return array;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LightList_dirtyHash_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::LightList *pObjectX = (EarthView::World::Graphic::LightList*) pObjXXXX;
				pObjectX->dirtyHash();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_LightList_isHashDirty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::LightList *pObjectX = (EarthView::World::Graphic::LightList*) pObjXXXX;
				ev_bool __values1 = pObjectX->isHashDirty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LightList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::LightList *pObjectX = (EarthView::World::Graphic::LightList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LightList_max_1size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::LightList *pObjectX = (EarthView::World::Graphic::LightList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->max_size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LightList_capacity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::LightList *pObjectX = (EarthView::World::Graphic::LightList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->capacity();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_LightList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::LightList *pObjectX = (EarthView::World::Graphic::LightList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LightList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				ev_size_t t = (ev_size_t) t_j;
				EarthView::World::Graphic::LightList *pObjectX = (EarthView::World::Graphic::LightList*) pObjXXXX;
				pObjectX->reserve(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LightList_push_1back_1CLight(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Graphic::CLight *&ref_t = *(EarthView::World::Graphic::CLight**) ref_t_j;
				EarthView::World::Graphic::LightList *pObjectX = (EarthView::World::Graphic::LightList*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LightList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::LightList *pObjectX = (EarthView::World::Graphic::LightList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LightList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::LightList *pObjectX = (EarthView::World::Graphic::LightList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LightList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::LightList *pObjectX = (EarthView::World::Graphic::LightList*) pObjXXXX;
				pObjectX->resize(n);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LightList_resize_1ev_1size_1t_1CLight(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j, jlong ref_t_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CLight *&ref_t = *(EarthView::World::Graphic::CLight**) ref_t_j;
				EarthView::World::Graphic::LightList *pObjectX = (EarthView::World::Graphic::LightList*) pObjXXXX;
				pObjectX->resize(n, ref_t);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_LightList_OperatorEquals_1LightList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong b_j )
			{
				EarthView::World::Graphic::LightList& pObjectX = *(EarthView::World::Graphic::LightList*) pObjXXXX;
				const EarthView::World::Graphic::LightList &b = *(EarthView::World::Graphic::LightList*) b_j;
				ev_bool __values1 = (pObjectX == b);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_LightList_OperatorNotEquals_1LightList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong b_j )
			{
				EarthView::World::Graphic::LightList& pObjectX = *(EarthView::World::Graphic::LightList*) pObjXXXX;
				const EarthView::World::Graphic::LightList &b = *(EarthView::World::Graphic::LightList*) b_j;
				ev_bool __values1 = (pObjectX != b);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_LightList_OperatorLessThan_1LightList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong b_j )
			{
				EarthView::World::Graphic::LightList& pObjectX = *(EarthView::World::Graphic::LightList*) pObjXXXX;
				const EarthView::World::Graphic::LightList &b = *(EarthView::World::Graphic::LightList*) b_j;
				ev_bool __values1 = (pObjectX < b);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_LightList_OperatorGreaterThan_1LightList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong b_j )
			{
				EarthView::World::Graphic::LightList& pObjectX = *(EarthView::World::Graphic::LightList*) pObjXXXX;
				const EarthView::World::Graphic::LightList &b = *(EarthView::World::Graphic::LightList*) b_j;
				ev_bool __values1 = (pObjectX > b);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LightList_swap_1LightList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
			{
				EarthView::World::Graphic::LightList &rhs = *(EarthView::World::Graphic::LightList*) rhs_j;
				EarthView::World::Graphic::LightList *pObjectX = (EarthView::World::Graphic::LightList*) pObjXXXX;
				pObjectX->swap(rhs);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LightList_getHash_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::LightList *pObjectX = (EarthView::World::Graphic::LightList*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getHash();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LightList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::LightList& pObjectX = *(EarthView::World::Graphic::LightList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CLight*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LightList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::LightList *pObjectX = (EarthView::World::Graphic::LightList*) pObjXXXX;
				EarthView::World::Graphic::CLight*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LightList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::LightList *pObjectX = (EarthView::World::Graphic::LightList*) pObjXXXX;
				EarthView::World::Graphic::CLight*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LightList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::LightList *pObjectX = (EarthView::World::Graphic::LightList*) pObjXXXX;
				EarthView::World::Graphic::CLight*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LightList_insert_1ev_1size_1t_1CLight(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_l_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CLight *&ref_l = *(EarthView::World::Graphic::CLight**) ref_l_j;
				EarthView::World::Graphic::LightList *pObjectX = (EarthView::World::Graphic::LightList*) pObjXXXX;
				pObjectX->insert(pos, ref_l);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LightList_insert_1ev_1size_1t_1ev_1size_1t_1CLight(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong count_j, jlong ref_l_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CLight *&ref_l = *(EarthView::World::Graphic::CLight**) ref_l_j;
				EarthView::World::Graphic::LightList *pObjectX = (EarthView::World::Graphic::LightList*) pObjXXXX;
				pObjectX->insert(pos, count, ref_l);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LightList_erase_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::LightList *pObjectX = (EarthView::World::Graphic::LightList*) pObjXXXX;
				pObjectX->erase(pos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LightList_erase_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong first_j, jlong last_j)
			{
				ev_size_t first = (ev_size_t) first_j;
				ev_size_t last = (ev_size_t) last_j;
				EarthView::World::Graphic::LightList *pObjectX = (EarthView::World::Graphic::LightList*) pObjXXXX;
				pObjectX->erase(first, last);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_UnaryOptionList_add_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jboolean val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				ev_bool val = (ev_bool) val_j;
				EarthView::World::Graphic::UnaryOptionList *pObjectX = (EarthView::World::Graphic::UnaryOptionList*) pObjXXXX;
				ev_bool __values1 = pObjectX->add(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_UnaryOptionList_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::UnaryOptionList *pObjectX = (EarthView::World::Graphic::UnaryOptionList*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_UnaryOptionList_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::UnaryOptionList& pObjectX = *(EarthView::World::Graphic::UnaryOptionList*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				ev_bool __values1 = pObjectX[key];
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_UnaryOptionList_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::UnaryOptionList *pObjectX = (EarthView::World::Graphic::UnaryOptionList*) pObjXXXX;
				ev_bool __values1 = pObjectX->get(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_UnaryOptionList_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::UnaryOptionList *pObjectX = (EarthView::World::Graphic::UnaryOptionList*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_UnaryOptionList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::UnaryOptionList *pObjectX = (EarthView::World::Graphic::UnaryOptionList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_UnaryOptionList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::UnaryOptionList *pObjectX = (EarthView::World::Graphic::UnaryOptionList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_UnaryOptionList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::UnaryOptionList *pObjectX = (EarthView::World::Graphic::UnaryOptionList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_FloatRect_get_1top_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::FloatRect *pObjectX = (EarthView::World::Graphic::FloatRect*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->top);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FloatRect_set_1top_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Graphic::FloatRect *pObjectX = (EarthView::World::Graphic::FloatRect*)pObjXXXX;
				pObjectX->top = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_FloatRect_get_1right_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::FloatRect *pObjectX = (EarthView::World::Graphic::FloatRect*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->right);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FloatRect_set_1right_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Graphic::FloatRect *pObjectX = (EarthView::World::Graphic::FloatRect*)pObjXXXX;
				pObjectX->right = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_FloatRect_get_1bottom_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::FloatRect *pObjectX = (EarthView::World::Graphic::FloatRect*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->bottom);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FloatRect_set_1bottom_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Graphic::FloatRect *pObjectX = (EarthView::World::Graphic::FloatRect*)pObjXXXX;
				pObjectX->bottom = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_FloatRect_get_1left_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::FloatRect *pObjectX = (EarthView::World::Graphic::FloatRect*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->left);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FloatRect_set_1left_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Graphic::FloatRect *pObjectX = (EarthView::World::Graphic::FloatRect*)pObjXXXX;
				pObjectX->left = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_FloatRect_OperatorAssign_1FloatRect(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong o_j )
			{
				EarthView::World::Graphic::FloatRect& pObjectX = *(EarthView::World::Graphic::FloatRect*) pObjXXXX;
				EarthView::World::Graphic::FloatRect &o = *(EarthView::World::Graphic::FloatRect*) o_j;
				pObjectX = o;
				EarthView::World::Graphic::FloatRect& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_FloatRect_width_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::FloatRect *pObjectX = (EarthView::World::Graphic::FloatRect*) pObjXXXX;
				ev_real32 __values1 = pObjectX->width();
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_FloatRect_height_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::FloatRect *pObjectX = (EarthView::World::Graphic::FloatRect*) pObjXXXX;
				ev_real32 __values1 = pObjectX->height();
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_FloatRect_isNull_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::FloatRect *pObjectX = (EarthView::World::Graphic::FloatRect*) pObjXXXX;
				ev_bool __values1 = pObjectX->isNull();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FloatRect_setNull_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::FloatRect *pObjectX = (EarthView::World::Graphic::FloatRect*) pObjXXXX;
				pObjectX->setNull();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_FloatRect_merge_1FloatRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
			{
				const EarthView::World::Graphic::FloatRect &rhs = *(EarthView::World::Graphic::FloatRect*) rhs_j;
				EarthView::World::Graphic::FloatRect *pObjectX = (EarthView::World::Graphic::FloatRect*) pObjXXXX;
				EarthView::World::Graphic::FloatRect& __values1 = pObjectX->merge(rhs);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_FloatRect_intersect_1FloatRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
			{
				const EarthView::World::Graphic::FloatRect &rhs = *(EarthView::World::Graphic::FloatRect*) rhs_j;
				const 				EarthView::World::Graphic::FloatRect *pObjectX = (EarthView::World::Graphic::FloatRect*) pObjXXXX;
				EarthView::World::Graphic::FloatRect __values1 = pObjectX->intersect(rhs);
				EarthView::World::Graphic::FloatRect *returnvalues = new EarthView::World::Graphic::FloatRect(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_RealRect_get_1top_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RealRect *pObjectX = (EarthView::World::Graphic::RealRect*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->top);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RealRect_set_1top_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::RealRect *pObjectX = (EarthView::World::Graphic::RealRect*)pObjXXXX;
				pObjectX->top = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_RealRect_get_1right_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RealRect *pObjectX = (EarthView::World::Graphic::RealRect*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->right);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RealRect_set_1right_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::RealRect *pObjectX = (EarthView::World::Graphic::RealRect*)pObjXXXX;
				pObjectX->right = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_RealRect_get_1bottom_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RealRect *pObjectX = (EarthView::World::Graphic::RealRect*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->bottom);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RealRect_set_1bottom_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::RealRect *pObjectX = (EarthView::World::Graphic::RealRect*)pObjXXXX;
				pObjectX->bottom = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_RealRect_get_1left_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RealRect *pObjectX = (EarthView::World::Graphic::RealRect*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->left);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RealRect_set_1left_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::RealRect *pObjectX = (EarthView::World::Graphic::RealRect*)pObjXXXX;
				pObjectX->left = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RealRect_OperatorAssign_1RealRect(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong o_j )
			{
				EarthView::World::Graphic::RealRect& pObjectX = *(EarthView::World::Graphic::RealRect*) pObjXXXX;
				EarthView::World::Graphic::RealRect &o = *(EarthView::World::Graphic::RealRect*) o_j;
				pObjectX = o;
				EarthView::World::Graphic::RealRect& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_RealRect_width_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::RealRect *pObjectX = (EarthView::World::Graphic::RealRect*) pObjXXXX;
				Real __values1 = pObjectX->width();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_RealRect_height_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::RealRect *pObjectX = (EarthView::World::Graphic::RealRect*) pObjXXXX;
				Real __values1 = pObjectX->height();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RealRect_isNull_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::RealRect *pObjectX = (EarthView::World::Graphic::RealRect*) pObjXXXX;
				ev_bool __values1 = pObjectX->isNull();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RealRect_setNull_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RealRect *pObjectX = (EarthView::World::Graphic::RealRect*) pObjXXXX;
				pObjectX->setNull();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RealRect_merge_1RealRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
			{
				const EarthView::World::Graphic::RealRect &rhs = *(EarthView::World::Graphic::RealRect*) rhs_j;
				EarthView::World::Graphic::RealRect *pObjectX = (EarthView::World::Graphic::RealRect*) pObjXXXX;
				EarthView::World::Graphic::RealRect& __values1 = pObjectX->merge(rhs);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RealRect_intersect_1RealRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
			{
				const EarthView::World::Graphic::RealRect &rhs = *(EarthView::World::Graphic::RealRect*) rhs_j;
				const 				EarthView::World::Graphic::RealRect *pObjectX = (EarthView::World::Graphic::RealRect*) pObjXXXX;
				EarthView::World::Graphic::RealRect __values1 = pObjectX->intersect(rhs);
				EarthView::World::Graphic::RealRect *returnvalues = new EarthView::World::Graphic::RealRect(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Rect_get_1top_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::Rect *pObjectX = (EarthView::World::Graphic::Rect*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->top);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Rect_set_1top_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::Rect *pObjectX = (EarthView::World::Graphic::Rect*)pObjXXXX;
				pObjectX->top = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Rect_get_1right_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::Rect *pObjectX = (EarthView::World::Graphic::Rect*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->right);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Rect_set_1right_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::Rect *pObjectX = (EarthView::World::Graphic::Rect*)pObjXXXX;
				pObjectX->right = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Rect_get_1bottom_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::Rect *pObjectX = (EarthView::World::Graphic::Rect*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->bottom);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Rect_set_1bottom_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::Rect *pObjectX = (EarthView::World::Graphic::Rect*)pObjXXXX;
				pObjectX->bottom = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Rect_get_1left_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::Rect *pObjectX = (EarthView::World::Graphic::Rect*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->left);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Rect_set_1left_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::Rect *pObjectX = (EarthView::World::Graphic::Rect*)pObjXXXX;
				pObjectX->left = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Rect_OperatorAssign_1Rect(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong o_j )
			{
				EarthView::World::Graphic::Rect& pObjectX = *(EarthView::World::Graphic::Rect*) pObjXXXX;
				EarthView::World::Graphic::Rect &o = *(EarthView::World::Graphic::Rect*) o_j;
				pObjectX = o;
				EarthView::World::Graphic::Rect& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Rect_width_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::Rect *pObjectX = (EarthView::World::Graphic::Rect*) pObjXXXX;
				ev_int32 __values1 = pObjectX->width();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Rect_height_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::Rect *pObjectX = (EarthView::World::Graphic::Rect*) pObjXXXX;
				ev_int32 __values1 = pObjectX->height();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Rect_isNull_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::Rect *pObjectX = (EarthView::World::Graphic::Rect*) pObjXXXX;
				ev_bool __values1 = pObjectX->isNull();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Rect_setNull_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::Rect *pObjectX = (EarthView::World::Graphic::Rect*) pObjXXXX;
				pObjectX->setNull();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Rect_merge_1Rect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
			{
				const EarthView::World::Graphic::Rect &rhs = *(EarthView::World::Graphic::Rect*) rhs_j;
				EarthView::World::Graphic::Rect *pObjectX = (EarthView::World::Graphic::Rect*) pObjXXXX;
				EarthView::World::Graphic::Rect& __values1 = pObjectX->merge(rhs);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Rect_intersect_1Rect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
			{
				const EarthView::World::Graphic::Rect &rhs = *(EarthView::World::Graphic::Rect*) rhs_j;
				const 				EarthView::World::Graphic::Rect *pObjectX = (EarthView::World::Graphic::Rect*) pObjXXXX;
				EarthView::World::Graphic::Rect __values1 = pObjectX->intersect(rhs);
				EarthView::World::Graphic::Rect *returnvalues = new EarthView::World::Graphic::Rect(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Box_get_1top_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::Box *pObjectX = (EarthView::World::Graphic::Box*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->top);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Box_set_1top_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::Box *pObjectX = (EarthView::World::Graphic::Box*)pObjXXXX;
				pObjectX->top = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Box_get_1right_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::Box *pObjectX = (EarthView::World::Graphic::Box*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->right);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Box_set_1right_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::Box *pObjectX = (EarthView::World::Graphic::Box*)pObjXXXX;
				pObjectX->right = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Box_get_1bottom_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::Box *pObjectX = (EarthView::World::Graphic::Box*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->bottom);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Box_set_1bottom_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::Box *pObjectX = (EarthView::World::Graphic::Box*)pObjXXXX;
				pObjectX->bottom = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Box_get_1front_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::Box *pObjectX = (EarthView::World::Graphic::Box*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->front);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Box_set_1front_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::Box *pObjectX = (EarthView::World::Graphic::Box*)pObjXXXX;
				pObjectX->front = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Box_get_1back_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::Box *pObjectX = (EarthView::World::Graphic::Box*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->back);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Box_set_1back_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::Box *pObjectX = (EarthView::World::Graphic::Box*)pObjXXXX;
				pObjectX->back = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Box_get_1left_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::Box *pObjectX = (EarthView::World::Graphic::Box*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->left);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Box_set_1left_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::Box *pObjectX = (EarthView::World::Graphic::Box*)pObjXXXX;
				pObjectX->left = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Box_contains_1Box(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong def_j)
			{
				const EarthView::World::Graphic::Box &def = *(EarthView::World::Graphic::Box*) def_j;
				const 				EarthView::World::Graphic::Box *pObjectX = (EarthView::World::Graphic::Box*) pObjXXXX;
				ev_bool __values1 = pObjectX->contains(def);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Box_getWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::Box *pObjectX = (EarthView::World::Graphic::Box*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getWidth();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Box_getHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::Box *pObjectX = (EarthView::World::Graphic::Box*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getHeight();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Box_getDepth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::Box *pObjectX = (EarthView::World::Graphic::Box*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getDepth();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_ClipResultHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CLIPPED_NONE,
					CLIPPED_SOME,
					CLIPPED_ALL
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_RenderWindowDescription_get_1name_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RenderWindowDescription *pObjectX = (EarthView::World::Graphic::RenderWindowDescription*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->name;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderWindowDescription_set_1name_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::RenderWindowDescription *pObjectX = (EarthView::World::Graphic::RenderWindowDescription*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->name = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderWindowDescription_get_1width_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RenderWindowDescription *pObjectX = (EarthView::World::Graphic::RenderWindowDescription*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->width);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderWindowDescription_set_1width_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::RenderWindowDescription *pObjectX = (EarthView::World::Graphic::RenderWindowDescription*)pObjXXXX;
				pObjectX->width = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderWindowDescription_get_1height_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RenderWindowDescription *pObjectX = (EarthView::World::Graphic::RenderWindowDescription*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->height);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderWindowDescription_set_1height_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::RenderWindowDescription *pObjectX = (EarthView::World::Graphic::RenderWindowDescription*)pObjXXXX;
				pObjectX->height = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderWindowDescription_get_1useFullScreen_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RenderWindowDescription *pObjectX = (EarthView::World::Graphic::RenderWindowDescription*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->useFullScreen);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderWindowDescription_set_1useFullScreen_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::RenderWindowDescription *pObjectX = (EarthView::World::Graphic::RenderWindowDescription*)pObjXXXX;
				pObjectX->useFullScreen = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderWindowDescription_get_1miscParams_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RenderWindowDescription *pObjectX = (EarthView::World::Graphic::RenderWindowDescription*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->miscParams);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderWindowDescription_set_1miscParams_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::RenderWindowDescription *pObjectX = (EarthView::World::Graphic::RenderWindowDescription*)pObjXXXX;
				pObjectX->miscParams = *(EarthView::World::Core::CommonStringPairList*) __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderWindowDescriptionList_push_1back_1RenderWindowDescription(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				const EarthView::World::Graphic::RenderWindowDescription &t = *(EarthView::World::Graphic::RenderWindowDescription*) t_j;
				EarthView::World::Graphic::RenderWindowDescriptionList *pObjectX = (EarthView::World::Graphic::RenderWindowDescriptionList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderWindowDescriptionList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::RenderWindowDescriptionList *pObjectX = (EarthView::World::Graphic::RenderWindowDescriptionList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderWindowDescriptionList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::RenderWindowDescriptionList *pObjectX = (EarthView::World::Graphic::RenderWindowDescriptionList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderWindowDescriptionList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::RenderWindowDescriptionList& pObjectX = *(EarthView::World::Graphic::RenderWindowDescriptionList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::RenderWindowDescription& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderWindowDescriptionList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::RenderWindowDescriptionList *pObjectX = (EarthView::World::Graphic::RenderWindowDescriptionList*) pObjXXXX;
				EarthView::World::Graphic::RenderWindowDescription& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderWindowDescriptionList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::RenderWindowDescriptionList *pObjectX = (EarthView::World::Graphic::RenderWindowDescriptionList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderWindowDescriptionList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RenderWindowDescriptionList *pObjectX = (EarthView::World::Graphic::RenderWindowDescriptionList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderWindowList_push_1back_1CRenderWindow(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Graphic::CRenderWindow *&ref_t = *(EarthView::World::Graphic::CRenderWindow**) ref_t_j;
				EarthView::World::Graphic::RenderWindowList *pObjectX = (EarthView::World::Graphic::RenderWindowList*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderWindowList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::RenderWindowList *pObjectX = (EarthView::World::Graphic::RenderWindowList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderWindowList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::RenderWindowList *pObjectX = (EarthView::World::Graphic::RenderWindowList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderWindowList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::RenderWindowList& pObjectX = *(EarthView::World::Graphic::RenderWindowList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CRenderWindow*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderWindowList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::RenderWindowList *pObjectX = (EarthView::World::Graphic::RenderWindowList*) pObjXXXX;
				EarthView::World::Graphic::CRenderWindow*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderWindowList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::RenderWindowList *pObjectX = (EarthView::World::Graphic::RenderWindowList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderWindowList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RenderWindowList *pObjectX = (EarthView::World::Graphic::RenderWindowList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_NameGenerator_generate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNameGenerator *pObjectX = (EarthView::World::Graphic::CNameGenerator*) pObjXXXX;
				EVString __values1 = pObjectX->generate();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NameGenerator_reset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNameGenerator *pObjectX = (EarthView::World::Graphic::CNameGenerator*) pObjXXXX;
				pObjectX->reset();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NameGenerator_setNext_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				ev_uint64 val = *(ev_uint64*) val_j;
				EarthView::World::Graphic::CNameGenerator *pObjectX = (EarthView::World::Graphic::CNameGenerator*) pObjXXXX;
				pObjectX->setNext(val);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_NameGenerator_getNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNameGenerator *pObjectX = (EarthView::World::Graphic::CNameGenerator*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->getNext();
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
		}
	}
}
