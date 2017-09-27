/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/technique.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Passes_push_1back_1CPass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Graphic::CPass *&ref_t = *(EarthView::World::Graphic::CPass**) ref_t_j;
				EarthView::World::Graphic::CTechnique::Passes *pObjectX = (EarthView::World::Graphic::CTechnique::Passes*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Passes_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::Passes *pObjectX = (EarthView::World::Graphic::CTechnique::Passes*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024Passes_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::Passes *pObjectX = (EarthView::World::Graphic::CTechnique::Passes*) pObjXXXX;
				EarthView::World::Graphic::CPass*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024Passes_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::Passes *pObjectX = (EarthView::World::Graphic::CTechnique::Passes*) pObjXXXX;
				EarthView::World::Graphic::CPass*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Passes_insert_1ev_1uint32_1CPass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CPass *&ref_t = *(EarthView::World::Graphic::CPass**) ref_t_j;
				EarthView::World::Graphic::CTechnique::Passes *pObjectX = (EarthView::World::Graphic::CTechnique::Passes*) pObjXXXX;
				pObjectX->insert(pos, ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Passes_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CTechnique::Passes *pObjectX = (EarthView::World::Graphic::CTechnique::Passes*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Technique_00024Passes_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique::Passes *pObjectX = (EarthView::World::Graphic::CTechnique::Passes*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024Passes_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CTechnique::Passes& pObjectX = *(EarthView::World::Graphic::CTechnique::Passes*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CPass*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024Passes_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CTechnique::Passes *pObjectX = (EarthView::World::Graphic::CTechnique::Passes*) pObjXXXX;
				EarthView::World::Graphic::CPass*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024Passes_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique::Passes *pObjectX = (EarthView::World::Graphic::CTechnique::Passes*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Passes_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CTechnique::Passes *pObjectX = (EarthView::World::Graphic::CTechnique::Passes*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Passes_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CTechnique::Passes *pObjectX = (EarthView::World::Graphic::CTechnique::Passes*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Passes_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::Passes *pObjectX = (EarthView::World::Graphic::CTechnique::Passes*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_Technique_00024IncludeOrExcludeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CTechnique::INCLUDE,
					CTechnique::EXCLUDE
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Technique_00024Gpuvendorrule_get_1vendor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRule *pObjectX = (EarthView::World::Graphic::CTechnique::GPUVendorRule*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->vendor);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Gpuvendorrule_set_1vendor_1GPUVendor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRule *pObjectX = (EarthView::World::Graphic::CTechnique::GPUVendorRule*)pObjXXXX;
				pObjectX->vendor = (EarthView::World::Graphic::GPUVendor)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Technique_00024Gpuvendorrule_get_1includeOrExclude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRule *pObjectX = (EarthView::World::Graphic::CTechnique::GPUVendorRule*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->includeOrExclude);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Gpuvendorrule_set_1includeOrExclude_1IncludeOrExclude(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRule *pObjectX = (EarthView::World::Graphic::CTechnique::GPUVendorRule*)pObjXXXX;
				pObjectX->includeOrExclude = (EarthView::World::Graphic::CTechnique::IncludeOrExclude)__values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Technique_00024Gpudevicenamerule_get_1devicePattern_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule *pObjectX = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRule*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->devicePattern;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Gpudevicenamerule_set_1devicePattern_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule *pObjectX = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRule*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->devicePattern = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Technique_00024Gpudevicenamerule_get_1includeOrExclude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule *pObjectX = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRule*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->includeOrExclude);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Gpudevicenamerule_set_1includeOrExclude_1IncludeOrExclude(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule *pObjectX = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRule*)pObjXXXX;
				pObjectX->includeOrExclude = (EarthView::World::Graphic::CTechnique::IncludeOrExclude)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Technique_00024Gpudevicenamerule_get_1caseSensitive_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule *pObjectX = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRule*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->caseSensitive);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Gpudevicenamerule_set_1caseSensitive_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule *pObjectX = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRule*)pObjXXXX;
				pObjectX->caseSensitive = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Gpuvendorrulelist_push_1back_1GPUVendorRule(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRule &t = *(EarthView::World::Graphic::CTechnique::GPUVendorRule*) t_j;
				EarthView::World::Graphic::CTechnique::GPUVendorRuleList *pObjectX = (EarthView::World::Graphic::CTechnique::GPUVendorRuleList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Gpuvendorrulelist_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRuleList *pObjectX = (EarthView::World::Graphic::CTechnique::GPUVendorRuleList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024Gpuvendorrulelist_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRuleList *pObjectX = (EarthView::World::Graphic::CTechnique::GPUVendorRuleList*) pObjXXXX;
				EarthView::World::Graphic::CTechnique::GPUVendorRule& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024Gpuvendorrulelist_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRuleList *pObjectX = (EarthView::World::Graphic::CTechnique::GPUVendorRuleList*) pObjXXXX;
				EarthView::World::Graphic::CTechnique::GPUVendorRule& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Gpuvendorrulelist_insert_1ev_1uint32_1GPUVendorRule(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CTechnique::GPUVendorRule &t = *(EarthView::World::Graphic::CTechnique::GPUVendorRule*) t_j;
				EarthView::World::Graphic::CTechnique::GPUVendorRuleList *pObjectX = (EarthView::World::Graphic::CTechnique::GPUVendorRuleList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Gpuvendorrulelist_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CTechnique::GPUVendorRuleList *pObjectX = (EarthView::World::Graphic::CTechnique::GPUVendorRuleList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Technique_00024Gpuvendorrulelist_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique::GPUVendorRuleList *pObjectX = (EarthView::World::Graphic::CTechnique::GPUVendorRuleList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024Gpuvendorrulelist_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRuleList& pObjectX = *(EarthView::World::Graphic::CTechnique::GPUVendorRuleList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CTechnique::GPUVendorRule& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024Gpuvendorrulelist_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CTechnique::GPUVendorRuleList *pObjectX = (EarthView::World::Graphic::CTechnique::GPUVendorRuleList*) pObjXXXX;
				EarthView::World::Graphic::CTechnique::GPUVendorRule& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024Gpuvendorrulelist_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique::GPUVendorRuleList *pObjectX = (EarthView::World::Graphic::CTechnique::GPUVendorRuleList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Gpuvendorrulelist_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CTechnique::GPUVendorRuleList *pObjectX = (EarthView::World::Graphic::CTechnique::GPUVendorRuleList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Gpuvendorrulelist_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CTechnique::GPUVendorRuleList *pObjectX = (EarthView::World::Graphic::CTechnique::GPUVendorRuleList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Gpuvendorrulelist_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRuleList *pObjectX = (EarthView::World::Graphic::CTechnique::GPUVendorRuleList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Gpudevicenamerulelist_push_1back_1GPUDeviceNameRule(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule &t = *(EarthView::World::Graphic::CTechnique::GPUDeviceNameRule*) t_j;
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList *pObjectX = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Gpudevicenamerulelist_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList *pObjectX = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024Gpudevicenamerulelist_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList *pObjectX = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList*) pObjXXXX;
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024Gpudevicenamerulelist_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList *pObjectX = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList*) pObjXXXX;
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Gpudevicenamerulelist_insert_1ev_1uint32_1GPUDeviceNameRule(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule &t = *(EarthView::World::Graphic::CTechnique::GPUDeviceNameRule*) t_j;
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList *pObjectX = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Gpudevicenamerulelist_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList *pObjectX = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Technique_00024Gpudevicenamerulelist_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList *pObjectX = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024Gpudevicenamerulelist_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList& pObjectX = *(EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024Gpudevicenamerulelist_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList *pObjectX = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList*) pObjXXXX;
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024Gpudevicenamerulelist_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList *pObjectX = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Gpudevicenamerulelist_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList *pObjectX = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Gpudevicenamerulelist_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList *pObjectX = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Gpudevicenamerulelist_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList *pObjectX = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Technique_isSupported_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				ev_bool __values1 = pObjectX->isSupported();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Technique__1compile_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean autoManageTextureUnits_j)
			{
				ev_bool autoManageTextureUnits = (ev_bool) autoManageTextureUnits_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				EVString __values1 = pObjectX->_compile(autoManageTextureUnits);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique__1compileIlluminationPasses_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->_compileIlluminationPasses();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_createPass_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				EarthView::World::Graphic::CPass* __values1 = pObjectX->createPass();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_getPass_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				EarthView::World::Graphic::CPass* __values1 = pObjectX->getPass(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_getPass_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				EarthView::World::Graphic::CPass* __values1 = pObjectX->getPass(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Technique_getNumPasses_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getNumPasses();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_removePass_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->removePass(index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_removeAllPasses_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->removeAllPasses();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Technique_movePass_1ev_1uint16_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint sourceIndex_j, jint destinationIndex_j)
			{
				const ev_uint16 sourceIndex = (ev_uint16) sourceIndex_j;
				const ev_uint16 destinationIndex = (ev_uint16) destinationIndex_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				ev_bool __values1 = pObjectX->movePass(sourceIndex, destinationIndex);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Technique_00024PassIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique::PassIterator *pObjectX = (EarthView::World::Graphic::CTechnique::PassIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024PassIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::PassIterator *pObjectX = (EarthView::World::Graphic::CTechnique::PassIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024PassIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::PassIterator *pObjectX = (EarthView::World::Graphic::CTechnique::PassIterator*) pObjXXXX;
				EarthView::World::Graphic::CPass* __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024PassIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::PassIterator *pObjectX = (EarthView::World::Graphic::CTechnique::PassIterator*) pObjXXXX;
				EarthView::World::Graphic::CPass* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024PassIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::PassIterator *pObjectX = (EarthView::World::Graphic::CTechnique::PassIterator*) pObjXXXX;
				EarthView::World::Graphic::CPass* __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024PassIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::PassIterator *pObjectX = (EarthView::World::Graphic::CTechnique::PassIterator*) pObjXXXX;
				EarthView::World::Graphic::CPass* __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_getPassIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				EarthView::World::Graphic::CTechnique::PassIterator __values1 = pObjectX->getPassIterator();
				EarthView::World::Graphic::CTechnique::PassIterator *returnvalues = new EarthView::World::Graphic::CTechnique::PassIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Technique_00024IlluminationPassIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique::IlluminationPassIterator *pObjectX = (EarthView::World::Graphic::CTechnique::IlluminationPassIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024IlluminationPassIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::IlluminationPassIterator *pObjectX = (EarthView::World::Graphic::CTechnique::IlluminationPassIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024IlluminationPassIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::IlluminationPassIterator *pObjectX = (EarthView::World::Graphic::CTechnique::IlluminationPassIterator*) pObjXXXX;
				EarthView::World::Graphic::IlluminationPass* __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024IlluminationPassIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::IlluminationPassIterator *pObjectX = (EarthView::World::Graphic::CTechnique::IlluminationPassIterator*) pObjXXXX;
				EarthView::World::Graphic::IlluminationPass* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024IlluminationPassIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::IlluminationPassIterator *pObjectX = (EarthView::World::Graphic::CTechnique::IlluminationPassIterator*) pObjXXXX;
				EarthView::World::Graphic::IlluminationPass* __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024IlluminationPassIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::IlluminationPassIterator *pObjectX = (EarthView::World::Graphic::CTechnique::IlluminationPassIterator*) pObjXXXX;
				EarthView::World::Graphic::IlluminationPass* __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_getIlluminationPassIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				EarthView::World::Graphic::CTechnique::IlluminationPassIterator __values1 = pObjectX->getIlluminationPassIterator();
				EarthView::World::Graphic::CTechnique::IlluminationPassIterator *returnvalues = new EarthView::World::Graphic::CTechnique::IlluminationPassIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_getParent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				EarthView::World::Graphic::CMaterial* __values1 = pObjectX->getParent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_OperatorAssign_1CTechnique(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Graphic::CTechnique& pObjectX = *(EarthView::World::Graphic::CTechnique*) pObjXXXX;
				const EarthView::World::Graphic::CTechnique &rhs = *(EarthView::World::Graphic::CTechnique*) rhs_j;
				pObjectX = rhs;
				EarthView::World::Graphic::CTechnique& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Technique_getResourceGroup_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				EVString __values1 = pObjectX->getResourceGroup();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Technique_isTransparent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				ev_bool __values1 = pObjectX->isTransparent();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Technique_isTransparentSortingEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				ev_bool __values1 = pObjectX->isTransparentSortingEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Technique_isTransparentSortingForced_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				ev_bool __values1 = pObjectX->isTransparentSortingForced();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique__1prepare_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->_prepare();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique__1unprepare_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->_unprepare();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique__1load_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->_load();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique__1unload_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->_unload();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Technique_isLoaded_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				ev_bool __values1 = pObjectX->isLoaded();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique__1notifyNeedsRecompile_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->_notifyNeedsRecompile();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_getShadowCasterMaterial_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				EarthView::World::Graphic::CMaterialPtr __values1 = pObjectX->getShadowCasterMaterial();
				EarthView::World::Graphic::CMaterialPtr *returnvalues = new EarthView::World::Graphic::CMaterialPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setShadowCasterMaterial_1CMaterialPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				EarthView::World::Graphic::CMaterialPtr val = *(EarthView::World::Graphic::CMaterialPtr*) val_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setShadowCasterMaterial(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setShadowCasterMaterial_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setShadowCasterMaterial(name);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_getShadowReceiverMaterial_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				EarthView::World::Graphic::CMaterialPtr __values1 = pObjectX->getShadowReceiverMaterial();
				EarthView::World::Graphic::CMaterialPtr *returnvalues = new EarthView::World::Graphic::CMaterialPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setShadowReceiverMaterial_1CMaterialPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				EarthView::World::Graphic::CMaterialPtr val = *(EarthView::World::Graphic::CMaterialPtr*) val_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setShadowReceiverMaterial(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setShadowReceiverMaterial_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setShadowReceiverMaterial(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setPointSize_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble ps_j)
			{
				Real ps = (Real) ps_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setPointSize(ps);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setAmbient_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble red_j, jdouble green_j, jdouble blue_j)
			{
				Real red = (Real) red_j;
				Real green = (Real) green_j;
				Real blue = (Real) blue_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setAmbient(red, green, blue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setAmbient_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ambient_j)
			{
				const EarthView::World::Graphic::CColourValue &ambient = *(EarthView::World::Graphic::CColourValue*) ambient_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setAmbient(ambient);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setDiffuse_1Real_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble red_j, jdouble green_j, jdouble blue_j, jdouble alpha_j)
			{
				Real red = (Real) red_j;
				Real green = (Real) green_j;
				Real blue = (Real) blue_j;
				Real alpha = (Real) alpha_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setDiffuse(red, green, blue, alpha);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setDiffuse_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong diffuse_j)
			{
				const EarthView::World::Graphic::CColourValue &diffuse = *(EarthView::World::Graphic::CColourValue*) diffuse_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setDiffuse(diffuse);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setSpecular_1Real_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble red_j, jdouble green_j, jdouble blue_j, jdouble alpha_j)
			{
				Real red = (Real) red_j;
				Real green = (Real) green_j;
				Real blue = (Real) blue_j;
				Real alpha = (Real) alpha_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setSpecular(red, green, blue, alpha);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setSpecular_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong specular_j)
			{
				const EarthView::World::Graphic::CColourValue &specular = *(EarthView::World::Graphic::CColourValue*) specular_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setSpecular(specular);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setShininess_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble val_j)
			{
				Real val = (Real) val_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setShininess(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setSelfIllumination_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble red_j, jdouble green_j, jdouble blue_j)
			{
				Real red = (Real) red_j;
				Real green = (Real) green_j;
				Real blue = (Real) blue_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setSelfIllumination(red, green, blue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setSelfIllumination_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong selfIllum_j)
			{
				const EarthView::World::Graphic::CColourValue &selfIllum = *(EarthView::World::Graphic::CColourValue*) selfIllum_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setSelfIllumination(selfIllum);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setDepthCheckEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setDepthCheckEnabled(enabled);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setDepthWriteEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setDepthWriteEnabled(enabled);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setDepthFunction_1CompareFunction(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint func_j)
			{
				EarthView::World::Graphic::CompareFunction func = (EarthView::World::Graphic::CompareFunction) func_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setDepthFunction(func);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setColourWriteEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setColourWriteEnabled(enabled);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setCullingMode_1CullingMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
			{
				EarthView::World::Graphic::CullingMode mode = (EarthView::World::Graphic::CullingMode) mode_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setCullingMode(mode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setManualCullingMode_1ManualCullingMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
			{
				EarthView::World::Graphic::ManualCullingMode mode = (EarthView::World::Graphic::ManualCullingMode) mode_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setManualCullingMode(mode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setLightingEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setLightingEnabled(enabled);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setShadingMode_1ShadeOptions(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
			{
				EarthView::World::Graphic::ShadeOptions mode = (EarthView::World::Graphic::ShadeOptions) mode_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setShadingMode(mode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setFog_1ev_1bool_1FogMode_1CColourValue_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean overrideScene_j, jint mode_j, jlong colour_j, jdouble expDensity_j, jdouble linearStart_j, jdouble linearEnd_j)
			{
				ev_bool overrideScene = (ev_bool) overrideScene_j;
				EarthView::World::Graphic::FogMode mode = (EarthView::World::Graphic::FogMode) mode_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				Real expDensity = (Real) expDensity_j;
				Real linearStart = (Real) linearStart_j;
				Real linearEnd = (Real) linearEnd_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setFog(overrideScene, mode, colour, expDensity, linearStart, linearEnd);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setFog_1ev_1bool_1FogMode_1CColourValue_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean overrideScene_j, jint mode_j, jlong colour_j, jdouble expDensity_j, jdouble linearStart_j)
			{
				ev_bool overrideScene = (ev_bool) overrideScene_j;
				EarthView::World::Graphic::FogMode mode = (EarthView::World::Graphic::FogMode) mode_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				Real expDensity = (Real) expDensity_j;
				Real linearStart = (Real) linearStart_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setFog(overrideScene, mode, colour, expDensity, linearStart);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setFog_1ev_1bool_1FogMode_1CColourValue_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean overrideScene_j, jint mode_j, jlong colour_j, jdouble expDensity_j)
			{
				ev_bool overrideScene = (ev_bool) overrideScene_j;
				EarthView::World::Graphic::FogMode mode = (EarthView::World::Graphic::FogMode) mode_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				Real expDensity = (Real) expDensity_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setFog(overrideScene, mode, colour, expDensity);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setFog_1ev_1bool_1FogMode_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean overrideScene_j, jint mode_j, jlong colour_j)
			{
				ev_bool overrideScene = (ev_bool) overrideScene_j;
				EarthView::World::Graphic::FogMode mode = (EarthView::World::Graphic::FogMode) mode_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setFog(overrideScene, mode, colour);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setFog_1ev_1bool_1FogMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean overrideScene_j, jint mode_j)
			{
				ev_bool overrideScene = (ev_bool) overrideScene_j;
				EarthView::World::Graphic::FogMode mode = (EarthView::World::Graphic::FogMode) mode_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setFog(overrideScene, mode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setFog_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean overrideScene_j)
			{
				ev_bool overrideScene = (ev_bool) overrideScene_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setFog(overrideScene);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setDepthBias_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat constantBias_j, jfloat slopeScaleBias_j)
			{
				ev_real32 constantBias = (ev_real32) constantBias_j;
				ev_real32 slopeScaleBias = (ev_real32) slopeScaleBias_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setDepthBias(constantBias, slopeScaleBias);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setTextureFiltering_1TextureFilterOptions(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint filterType_j)
			{
				EarthView::World::Graphic::TextureFilterOptions filterType = (EarthView::World::Graphic::TextureFilterOptions) filterType_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setTextureFiltering(filterType);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setTextureAnisotropy_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong maxAniso_j)
			{
				ev_uint32 maxAniso = (ev_uint32) maxAniso_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setTextureAnisotropy(maxAniso);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setSceneBlending_1SceneBlendType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint sbt_j)
			{
				const EarthView::World::Graphic::SceneBlendType sbt = (EarthView::World::Graphic::SceneBlendType) sbt_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setSceneBlending(sbt);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setSeparateSceneBlending_1SceneBlendType_1SceneBlendType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint sbt_j, jint sbta_j)
			{
				const EarthView::World::Graphic::SceneBlendType sbt = (EarthView::World::Graphic::SceneBlendType) sbt_j;
				const EarthView::World::Graphic::SceneBlendType sbta = (EarthView::World::Graphic::SceneBlendType) sbta_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setSeparateSceneBlending(sbt, sbta);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setSceneBlending_1SceneBlendFactor_1SceneBlendFactor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint sourceFactor_j, jint destFactor_j)
			{
				const EarthView::World::Graphic::SceneBlendFactor sourceFactor = (EarthView::World::Graphic::SceneBlendFactor) sourceFactor_j;
				const EarthView::World::Graphic::SceneBlendFactor destFactor = (EarthView::World::Graphic::SceneBlendFactor) destFactor_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setSceneBlending(sourceFactor, destFactor);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setSeparateSceneBlending_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendFactor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint sourceFactor_j, jint destFactor_j, jint sourceFactorAlpha_j, jint destFactorAlpha_j)
			{
				const EarthView::World::Graphic::SceneBlendFactor sourceFactor = (EarthView::World::Graphic::SceneBlendFactor) sourceFactor_j;
				const EarthView::World::Graphic::SceneBlendFactor destFactor = (EarthView::World::Graphic::SceneBlendFactor) destFactor_j;
				const EarthView::World::Graphic::SceneBlendFactor sourceFactorAlpha = (EarthView::World::Graphic::SceneBlendFactor) sourceFactorAlpha_j;
				const EarthView::World::Graphic::SceneBlendFactor destFactorAlpha = (EarthView::World::Graphic::SceneBlendFactor) destFactorAlpha_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setSeparateSceneBlending(sourceFactor, destFactor, sourceFactorAlpha, destFactorAlpha);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setLodIndex_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setLodIndex(index);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Technique_getLodIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getLodIndex();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setSchemeName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring schemeName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* schemeName_ch = (const ev_char*)__env->GetStringUTFChars(schemeName_j,JNI_FALSE);
				const EVString schemeName = schemeName_ch;
				__env->ReleaseStringUTFChars(schemeName_j, (const char *)schemeName_ch);
				#else
				const ev_wchar* schemeName_ch = (const ev_wchar*)__env->GetStringChars(schemeName_j,JNI_FALSE);
				const EVString schemeName = schemeName_ch;
				__env->ReleaseStringChars(schemeName_j, (const jchar *)schemeName_ch);
				#endif
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setSchemeName(schemeName);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Technique_getSchemeName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				EVString __values1 = pObjectX->getSchemeName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Technique__1getSchemeIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->_getSchemeIndex();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Technique_isDepthWriteEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				ev_bool __values1 = pObjectX->isDepthWriteEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Technique_isDepthCheckEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				ev_bool __values1 = pObjectX->isDepthCheckEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Technique_hasColourWriteDisabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasColourWriteDisabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->setName(name);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				const EVString& __values1 = pObjectX->getName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Technique_applyTextureAliases_1CommonStringPairList_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong aliasList_j, jboolean apply_j)
			{
				const EarthView::World::Core::CommonStringPairList &aliasList = *(EarthView::World::Core::CommonStringPairList*) aliasList_j;
				const ev_bool apply = (ev_bool) apply_j;
				const 				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				ev_bool __values1 = pObjectX->applyTextureAliases(aliasList, apply);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Technique_applyTextureAliases_1CommonStringPairList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong aliasList_j)
			{
				const EarthView::World::Core::CommonStringPairList &aliasList = *(EarthView::World::Core::CommonStringPairList*) aliasList_j;
				const 				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				ev_bool __values1 = pObjectX->applyTextureAliases(aliasList);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_addGPUVendorRule_1GPUVendor_1IncludeOrExclude(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint vendor_j, jint includeOrExclude_j)
			{
				EarthView::World::Graphic::GPUVendor vendor = (EarthView::World::Graphic::GPUVendor) vendor_j;
				EarthView::World::Graphic::CTechnique::IncludeOrExclude includeOrExclude = (EarthView::World::Graphic::CTechnique::IncludeOrExclude) includeOrExclude_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->addGPUVendorRule(vendor, includeOrExclude);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_addGPUVendorRule_1GPUVendorRule(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rule_j)
			{
				const EarthView::World::Graphic::CTechnique::GPUVendorRule &rule = *(EarthView::World::Graphic::CTechnique::GPUVendorRule*) rule_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->addGPUVendorRule(rule);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_removeGPUVendorRule_1GPUVendor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint vendor_j)
			{
				EarthView::World::Graphic::GPUVendor vendor = (EarthView::World::Graphic::GPUVendor) vendor_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->removeGPUVendorRule(vendor);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Technique_00024Gpuvendorruleiterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator *pObjectX = (EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Gpuvendorruleiterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator *pObjectX = (EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024Gpuvendorruleiterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator *pObjectX = (EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator*) pObjXXXX;
				EarthView::World::Graphic::CTechnique::GPUVendorRule __values1 = pObjectX->getCurrent();
				EarthView::World::Graphic::CTechnique::GPUVendorRule *returnvalues = new EarthView::World::Graphic::CTechnique::GPUVendorRule(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024Gpuvendorruleiterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator *pObjectX = (EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator*) pObjXXXX;
				EarthView::World::Graphic::CTechnique::GPUVendorRule __values1 = pObjectX->next();
				EarthView::World::Graphic::CTechnique::GPUVendorRule *returnvalues = new EarthView::World::Graphic::CTechnique::GPUVendorRule(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024Gpuvendorruleiterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator *pObjectX = (EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator*) pObjXXXX;
				EarthView::World::Graphic::CTechnique::GPUVendorRule __values1 = pObjectX->getBegin();
				EarthView::World::Graphic::CTechnique::GPUVendorRule *returnvalues = new EarthView::World::Graphic::CTechnique::GPUVendorRule(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024Gpuvendorruleiterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator *pObjectX = (EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator*) pObjXXXX;
				EarthView::World::Graphic::CTechnique::GPUVendorRule __values1 = pObjectX->getEnd();
				EarthView::World::Graphic::CTechnique::GPUVendorRule *returnvalues = new EarthView::World::Graphic::CTechnique::GPUVendorRule(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_getGPUVendorRuleIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator __values1 = pObjectX->getGPUVendorRuleIterator();
				EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator *returnvalues = new EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_addGPUDeviceNameRule_1EVString_1IncludeOrExclude_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring devicePattern_j, jint includeOrExclude_j, jboolean caseSensitive_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* devicePattern_ch = (const ev_char*)__env->GetStringUTFChars(devicePattern_j,JNI_FALSE);
				const EVString devicePattern = devicePattern_ch;
				__env->ReleaseStringUTFChars(devicePattern_j, (const char *)devicePattern_ch);
				#else
				const ev_wchar* devicePattern_ch = (const ev_wchar*)__env->GetStringChars(devicePattern_j,JNI_FALSE);
				const EVString devicePattern = devicePattern_ch;
				__env->ReleaseStringChars(devicePattern_j, (const jchar *)devicePattern_ch);
				#endif
				EarthView::World::Graphic::CTechnique::IncludeOrExclude includeOrExclude = (EarthView::World::Graphic::CTechnique::IncludeOrExclude) includeOrExclude_j;
				ev_bool caseSensitive = (ev_bool) caseSensitive_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->addGPUDeviceNameRule(devicePattern, includeOrExclude, caseSensitive);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_addGPUDeviceNameRule_1EVString_1IncludeOrExclude(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring devicePattern_j, jint includeOrExclude_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* devicePattern_ch = (const ev_char*)__env->GetStringUTFChars(devicePattern_j,JNI_FALSE);
				const EVString devicePattern = devicePattern_ch;
				__env->ReleaseStringUTFChars(devicePattern_j, (const char *)devicePattern_ch);
				#else
				const ev_wchar* devicePattern_ch = (const ev_wchar*)__env->GetStringChars(devicePattern_j,JNI_FALSE);
				const EVString devicePattern = devicePattern_ch;
				__env->ReleaseStringChars(devicePattern_j, (const jchar *)devicePattern_ch);
				#endif
				EarthView::World::Graphic::CTechnique::IncludeOrExclude includeOrExclude = (EarthView::World::Graphic::CTechnique::IncludeOrExclude) includeOrExclude_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->addGPUDeviceNameRule(devicePattern, includeOrExclude);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_addGPUDeviceNameRule_1GPUDeviceNameRule(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rule_j)
			{
				const EarthView::World::Graphic::CTechnique::GPUDeviceNameRule &rule = *(EarthView::World::Graphic::CTechnique::GPUDeviceNameRule*) rule_j;
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->addGPUDeviceNameRule(rule);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_removeGPUDeviceNameRule_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring devicePattern_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* devicePattern_ch = (const ev_char*)__env->GetStringUTFChars(devicePattern_j,JNI_FALSE);
				const EVString devicePattern = devicePattern_ch;
				__env->ReleaseStringUTFChars(devicePattern_j, (const char *)devicePattern_ch);
				#else
				const ev_wchar* devicePattern_ch = (const ev_wchar*)__env->GetStringChars(devicePattern_j,JNI_FALSE);
				const EVString devicePattern = devicePattern_ch;
				__env->ReleaseStringChars(devicePattern_j, (const jchar *)devicePattern_ch);
				#endif
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				pObjectX->removeGPUDeviceNameRule(devicePattern);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Technique_00024Gpudevicenameruleiterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator *pObjectX = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Technique_00024Gpudevicenameruleiterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator *pObjectX = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024Gpudevicenameruleiterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator *pObjectX = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator*) pObjXXXX;
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule __values1 = pObjectX->getCurrent();
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule *returnvalues = new EarthView::World::Graphic::CTechnique::GPUDeviceNameRule(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024Gpudevicenameruleiterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator *pObjectX = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator*) pObjXXXX;
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule __values1 = pObjectX->next();
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule *returnvalues = new EarthView::World::Graphic::CTechnique::GPUDeviceNameRule(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024Gpudevicenameruleiterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator *pObjectX = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator*) pObjXXXX;
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule __values1 = pObjectX->getBegin();
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule *returnvalues = new EarthView::World::Graphic::CTechnique::GPUDeviceNameRule(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_00024Gpudevicenameruleiterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator *pObjectX = (EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator*) pObjXXXX;
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule __values1 = pObjectX->getEnd();
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRule *returnvalues = new EarthView::World::Graphic::CTechnique::GPUDeviceNameRule(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_getGPUDeviceNameRuleIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator __values1 = pObjectX->getGPUDeviceNameRuleIterator();
				EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator *returnvalues = new EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Technique_getUserObjectBindings_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechnique *pObjectX = (EarthView::World::Graphic::CTechnique*) pObjXXXX;
				EarthView::World::Graphic::CUserObjectBindings& __values1 = pObjectX->getUserObjectBindings();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
		}
	}
}
