/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/spatial3denginecomdef.h"
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
		}
		namespace Spatial
		{
			namespace Octree
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace ModelManager
			{
			}
			namespace EffectManager
			{
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_ModelObjectStateHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					VOS_DECLARED,
					VOS_LOADED,
					VOS_ATTACHED,
					VOS_DETACHED,
					VOS_UNLOADED
				};
				jintArray array = __env->NewIntArray(5);
				__env->SetIntArrayRegion(array, 0, 5, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_Layer3DEditorTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					LET_Model,
					LET_Effect
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_ModelTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					MT_MODEL,
					MT_INSTANCE
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_BindedStateHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					BDST_UnBind,
					BDST_BindedAtSubEntity,
					BDST_BindedAtBone,
					BDST_BindedAtNode
				};
				jintArray array = __env->NewIntArray(4);
				__env->SetIntArrayRegion(array, 0, 4, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_TextureStateHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					TS_DECLARED,
					TS_THUMB,
					TS_ORIG
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_ModelCommandTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CT_UnKnown,
					CT_Select,
					CT_Edit
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_ModelRequestTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					MRT_UNLOAD,
					MRT_THUMB,
					MRT_ORIG,
					MRT_LOAD,
					MRT_DECLARED
				};
				jintArray array = __env->NewIntArray(5);
				__env->SetIntArrayRegion(array, 0, 5, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_RenderBoxTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					RBT_OCTREEBOX_AND_LEATBOX,
					RBT_OCTREEBOX,
					RBT_LEATBOX
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_MemoryDataStreamMap_push_1EVString_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
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
				EarthView::World::Core::MemoryDataStreamPtr &val = *(EarthView::World::Core::MemoryDataStreamPtr*) val_j;
				EarthView::World::Spatial3D::CMemoryDataStreamMap *pObjectX = (EarthView::World::Spatial3D::CMemoryDataStreamMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_MemoryDataStreamMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Spatial3D::CMemoryDataStreamMap *pObjectX = (EarthView::World::Spatial3D::CMemoryDataStreamMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_MemoryDataStreamMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Spatial3D::CMemoryDataStreamMap& pObjectX = *(EarthView::World::Spatial3D::CMemoryDataStreamMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Core::MemoryDataStreamPtr& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_MemoryDataStreamMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Spatial3D::CMemoryDataStreamMap *pObjectX = (EarthView::World::Spatial3D::CMemoryDataStreamMap*) pObjXXXX;
				EarthView::World::Core::MemoryDataStreamPtr& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MemoryDataStreamMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Spatial3D::CMemoryDataStreamMap *pObjectX = (EarthView::World::Spatial3D::CMemoryDataStreamMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_MemoryDataStreamMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CMemoryDataStreamMap *pObjectX = (EarthView::World::Spatial3D::CMemoryDataStreamMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MemoryDataStreamMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CMemoryDataStreamMap *pObjectX = (EarthView::World::Spatial3D::CMemoryDataStreamMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_MemoryDataStreamMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CMemoryDataStreamMap *pObjectX = (EarthView::World::Spatial3D::CMemoryDataStreamMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ExtOctNodeInfo_get_1frameNumber_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ExtOctNodeInfo *pObjectX = (EarthView::World::Spatial3D::ExtOctNodeInfo*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->frameNumber);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ExtOctNodeInfo_set_1frameNumber_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::ExtOctNodeInfo *pObjectX = (EarthView::World::Spatial3D::ExtOctNodeInfo*)pObjXXXX;
				pObjectX->frameNumber = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_ExtOctNodeInfo_get_1camDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ExtOctNodeInfo *pObjectX = (EarthView::World::Spatial3D::ExtOctNodeInfo*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->camDistance);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ExtOctNodeInfo_set_1camDistance_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::ExtOctNodeInfo *pObjectX = (EarthView::World::Spatial3D::ExtOctNodeInfo*)pObjXXXX;
				pObjectX->camDistance = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ExtOctNodeInfo_get_1box_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ExtOctNodeInfo *pObjectX = (EarthView::World::Spatial3D::ExtOctNodeInfo*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->box);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ExtOctNodeInfo_set_1box_1CAxisAlignedBox(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::ExtOctNodeInfo *pObjectX = (EarthView::World::Spatial3D::ExtOctNodeInfo*)pObjXXXX;
				pObjectX->box = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ExtOctNodeInfo_get_1id_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ExtOctNodeInfo *pObjectX = (EarthView::World::Spatial3D::ExtOctNodeInfo*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->id);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ExtOctNodeInfo_set_1id_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::ExtOctNodeInfo *pObjectX = (EarthView::World::Spatial3D::ExtOctNodeInfo*)pObjXXXX;
				pObjectX->id = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_ExtOctNodeInfo_get_1code_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ExtOctNodeInfo *pObjectX = (EarthView::World::Spatial3D::ExtOctNodeInfo*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->code;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ExtOctNodeInfo_set_1code_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Spatial3D::ExtOctNodeInfo *pObjectX = (EarthView::World::Spatial3D::ExtOctNodeInfo*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->code = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_OctNodeVector_push_1back_1ExtOctNodeInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Spatial3D::ExtOctNodeInfo &t = *(EarthView::World::Spatial3D::ExtOctNodeInfo*) t_j;
				EarthView::World::Spatial3D::OctNodeVector *pObjectX = (EarthView::World::Spatial3D::OctNodeVector*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_OctNodeVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::OctNodeVector *pObjectX = (EarthView::World::Spatial3D::OctNodeVector*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_OctNodeVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::OctNodeVector *pObjectX = (EarthView::World::Spatial3D::OctNodeVector*) pObjXXXX;
				EarthView::World::Spatial3D::ExtOctNodeInfo& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_OctNodeVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::OctNodeVector *pObjectX = (EarthView::World::Spatial3D::OctNodeVector*) pObjXXXX;
				EarthView::World::Spatial3D::ExtOctNodeInfo& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_OctNodeVector_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Spatial3D::OctNodeVector *pObjectX = (EarthView::World::Spatial3D::OctNodeVector*) pObjXXXX;
				EarthView::World::Spatial3D::ExtOctNodeInfo& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_OctNodeVector_insert_1ev_1uint32_1ExtOctNodeInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Spatial3D::ExtOctNodeInfo &t = *(EarthView::World::Spatial3D::ExtOctNodeInfo*) t_j;
				EarthView::World::Spatial3D::OctNodeVector *pObjectX = (EarthView::World::Spatial3D::OctNodeVector*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_OctNodeVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::OctNodeVector *pObjectX = (EarthView::World::Spatial3D::OctNodeVector*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_OctNodeVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::OctNodeVector *pObjectX = (EarthView::World::Spatial3D::OctNodeVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_OctNodeVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Spatial3D::OctNodeVector *pObjectX = (EarthView::World::Spatial3D::OctNodeVector*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_OctNodeVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::OctNodeVector *pObjectX = (EarthView::World::Spatial3D::OctNodeVector*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_OctNodeVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Spatial3D::OctNodeVector *pObjectX = (EarthView::World::Spatial3D::OctNodeVector*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_OctNodeVector_swap_1OctNodeVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
			{
				EarthView::World::Spatial3D::OctNodeVector &other = *(EarthView::World::Spatial3D::OctNodeVector*) other_j;
				EarthView::World::Spatial3D::OctNodeVector *pObjectX = (EarthView::World::Spatial3D::OctNodeVector*) pObjXXXX;
				pObjectX->swap(other);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_InternalObject_get_1mpModel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::InternalObject *pObjectX = (EarthView::World::Spatial3D::InternalObject*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mpModel);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_InternalObject_set_1mpModel_1CVisibleObjectPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::InternalObject *pObjectX = (EarthView::World::Spatial3D::InternalObject*)pObjXXXX;
				pObjectX->mpModel = *(EarthView::World::Geometry3D::CVisibleObjectPtr*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_InternalObject_get_1mpExtInfo_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::InternalObject *pObjectX = (EarthView::World::Spatial3D::InternalObject*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->mpExtInfo);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_InternalObject_set_1mpExtInfo_1ExtOctNodeInfo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::InternalObject *pObjectX = (EarthView::World::Spatial3D::InternalObject*)pObjXXXX;
				pObjectX->mpExtInfo = (EarthView::World::Spatial3D::ExtOctNodeInfo*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ImageItem_get_1mIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ImageItem *pObjectX = (EarthView::World::Spatial3D::ImageItem*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->mIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ImageItem_set_1mIndex_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::ImageItem *pObjectX = (EarthView::World::Spatial3D::ImageItem*)pObjXXXX;
				pObjectX->mIndex = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ImageItem_get_1mpImg_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ImageItem *pObjectX = (EarthView::World::Spatial3D::ImageItem*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->mpImg);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ImageItem_set_1mpImg_1CImage(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::ImageItem *pObjectX = (EarthView::World::Spatial3D::ImageItem*)pObjXXXX;
				pObjectX->mpImg = (EarthView::World::Graphic::CImage*) __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ImageItemVector_push_1back_1ImageItem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Spatial3D::ImageItem &t = *(EarthView::World::Spatial3D::ImageItem*) t_j;
				EarthView::World::Spatial3D::ImageItemVector *pObjectX = (EarthView::World::Spatial3D::ImageItemVector*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ImageItemVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ImageItemVector *pObjectX = (EarthView::World::Spatial3D::ImageItemVector*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ImageItemVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ImageItemVector *pObjectX = (EarthView::World::Spatial3D::ImageItemVector*) pObjXXXX;
				EarthView::World::Spatial3D::ImageItem& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ImageItemVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ImageItemVector *pObjectX = (EarthView::World::Spatial3D::ImageItemVector*) pObjXXXX;
				EarthView::World::Spatial3D::ImageItem& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ImageItemVector_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Spatial3D::ImageItemVector *pObjectX = (EarthView::World::Spatial3D::ImageItemVector*) pObjXXXX;
				EarthView::World::Spatial3D::ImageItem& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ImageItemVector_insert_1ev_1uint32_1ImageItem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Spatial3D::ImageItem &t = *(EarthView::World::Spatial3D::ImageItem*) t_j;
				EarthView::World::Spatial3D::ImageItemVector *pObjectX = (EarthView::World::Spatial3D::ImageItemVector*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_ImageItemVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::ImageItemVector *pObjectX = (EarthView::World::Spatial3D::ImageItemVector*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ImageItemVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::ImageItemVector *pObjectX = (EarthView::World::Spatial3D::ImageItemVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ImageItemVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Spatial3D::ImageItemVector *pObjectX = (EarthView::World::Spatial3D::ImageItemVector*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ImageItemVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ImageItemVector *pObjectX = (EarthView::World::Spatial3D::ImageItemVector*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ImageItemVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Spatial3D::ImageItemVector *pObjectX = (EarthView::World::Spatial3D::ImageItemVector*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MaterialPtrVector_push_1back_1CMaterialPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CMaterialPtr &t = *(EarthView::World::Graphic::CMaterialPtr*) t_j;
				EarthView::World::Spatial3D::MaterialPtrVector *pObjectX = (EarthView::World::Spatial3D::MaterialPtrVector*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MaterialPtrVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::MaterialPtrVector *pObjectX = (EarthView::World::Spatial3D::MaterialPtrVector*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_MaterialPtrVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::MaterialPtrVector *pObjectX = (EarthView::World::Spatial3D::MaterialPtrVector*) pObjXXXX;
				EarthView::World::Graphic::CMaterialPtr& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_MaterialPtrVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::MaterialPtrVector *pObjectX = (EarthView::World::Spatial3D::MaterialPtrVector*) pObjXXXX;
				EarthView::World::Graphic::CMaterialPtr& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_MaterialPtrVector_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Spatial3D::MaterialPtrVector *pObjectX = (EarthView::World::Spatial3D::MaterialPtrVector*) pObjXXXX;
				EarthView::World::Graphic::CMaterialPtr& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MaterialPtrVector_insert_1ev_1uint32_1CMaterialPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CMaterialPtr &t = *(EarthView::World::Graphic::CMaterialPtr*) t_j;
				EarthView::World::Spatial3D::MaterialPtrVector *pObjectX = (EarthView::World::Spatial3D::MaterialPtrVector*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_MaterialPtrVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::MaterialPtrVector *pObjectX = (EarthView::World::Spatial3D::MaterialPtrVector*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_MaterialPtrVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::MaterialPtrVector *pObjectX = (EarthView::World::Spatial3D::MaterialPtrVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MaterialPtrVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Spatial3D::MaterialPtrVector *pObjectX = (EarthView::World::Spatial3D::MaterialPtrVector*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MaterialPtrVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::MaterialPtrVector *pObjectX = (EarthView::World::Spatial3D::MaterialPtrVector*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MaterialPtrVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Spatial3D::MaterialPtrVector *pObjectX = (EarthView::World::Spatial3D::MaterialPtrVector*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TexturePtrVector_push_1back_1CTexturePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CTexturePtr &t = *(EarthView::World::Graphic::CTexturePtr*) t_j;
				EarthView::World::Spatial3D::TexturePtrVector *pObjectX = (EarthView::World::Spatial3D::TexturePtrVector*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TexturePtrVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::TexturePtrVector *pObjectX = (EarthView::World::Spatial3D::TexturePtrVector*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TexturePtrVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::TexturePtrVector *pObjectX = (EarthView::World::Spatial3D::TexturePtrVector*) pObjXXXX;
				EarthView::World::Graphic::CTexturePtr& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TexturePtrVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::TexturePtrVector *pObjectX = (EarthView::World::Spatial3D::TexturePtrVector*) pObjXXXX;
				EarthView::World::Graphic::CTexturePtr& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TexturePtrVector_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Spatial3D::TexturePtrVector *pObjectX = (EarthView::World::Spatial3D::TexturePtrVector*) pObjXXXX;
				EarthView::World::Graphic::CTexturePtr& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TexturePtrVector_insert_1ev_1uint32_1CTexturePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CTexturePtr &t = *(EarthView::World::Graphic::CTexturePtr*) t_j;
				EarthView::World::Spatial3D::TexturePtrVector *pObjectX = (EarthView::World::Spatial3D::TexturePtrVector*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_TexturePtrVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::TexturePtrVector *pObjectX = (EarthView::World::Spatial3D::TexturePtrVector*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TexturePtrVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::TexturePtrVector *pObjectX = (EarthView::World::Spatial3D::TexturePtrVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TexturePtrVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Spatial3D::TexturePtrVector *pObjectX = (EarthView::World::Spatial3D::TexturePtrVector*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TexturePtrVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::TexturePtrVector *pObjectX = (EarthView::World::Spatial3D::TexturePtrVector*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TexturePtrVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Spatial3D::TexturePtrVector *pObjectX = (EarthView::World::Spatial3D::TexturePtrVector*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GpuPtrVector_push_1back_1CGpuProgramPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CGpuProgramPtr &t = *(EarthView::World::Graphic::CGpuProgramPtr*) t_j;
				EarthView::World::Spatial3D::GpuPtrVector *pObjectX = (EarthView::World::Spatial3D::GpuPtrVector*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GpuPtrVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::GpuPtrVector *pObjectX = (EarthView::World::Spatial3D::GpuPtrVector*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GpuPtrVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::GpuPtrVector *pObjectX = (EarthView::World::Spatial3D::GpuPtrVector*) pObjXXXX;
				EarthView::World::Graphic::CGpuProgramPtr& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GpuPtrVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::GpuPtrVector *pObjectX = (EarthView::World::Spatial3D::GpuPtrVector*) pObjXXXX;
				EarthView::World::Graphic::CGpuProgramPtr& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GpuPtrVector_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Spatial3D::GpuPtrVector *pObjectX = (EarthView::World::Spatial3D::GpuPtrVector*) pObjXXXX;
				EarthView::World::Graphic::CGpuProgramPtr& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GpuPtrVector_insert_1ev_1uint32_1CGpuProgramPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CGpuProgramPtr &t = *(EarthView::World::Graphic::CGpuProgramPtr*) t_j;
				EarthView::World::Spatial3D::GpuPtrVector *pObjectX = (EarthView::World::Spatial3D::GpuPtrVector*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_GpuPtrVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::GpuPtrVector *pObjectX = (EarthView::World::Spatial3D::GpuPtrVector*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GpuPtrVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::GpuPtrVector *pObjectX = (EarthView::World::Spatial3D::GpuPtrVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GpuPtrVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Spatial3D::GpuPtrVector *pObjectX = (EarthView::World::Spatial3D::GpuPtrVector*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GpuPtrVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::GpuPtrVector *pObjectX = (EarthView::World::Spatial3D::GpuPtrVector*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GpuPtrVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Spatial3D::GpuPtrVector *pObjectX = (EarthView::World::Spatial3D::GpuPtrVector*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_InstanceManagerVector_push_1back_1CInstanceManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CInstanceManager *&t = *(EarthView::World::Graphic::CInstanceManager**) t_j;
				EarthView::World::Spatial3D::InstanceManagerVector *pObjectX = (EarthView::World::Spatial3D::InstanceManagerVector*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_InstanceManagerVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::InstanceManagerVector *pObjectX = (EarthView::World::Spatial3D::InstanceManagerVector*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_InstanceManagerVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::InstanceManagerVector *pObjectX = (EarthView::World::Spatial3D::InstanceManagerVector*) pObjXXXX;
				EarthView::World::Graphic::CInstanceManager*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_InstanceManagerVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::InstanceManagerVector *pObjectX = (EarthView::World::Spatial3D::InstanceManagerVector*) pObjXXXX;
				EarthView::World::Graphic::CInstanceManager*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_InstanceManagerVector_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Spatial3D::InstanceManagerVector *pObjectX = (EarthView::World::Spatial3D::InstanceManagerVector*) pObjXXXX;
				EarthView::World::Graphic::CInstanceManager*& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_InstanceManagerVector_insert_1ev_1uint32_1CInstanceManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CInstanceManager *&t = *(EarthView::World::Graphic::CInstanceManager**) t_j;
				EarthView::World::Spatial3D::InstanceManagerVector *pObjectX = (EarthView::World::Spatial3D::InstanceManagerVector*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_InstanceManagerVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::InstanceManagerVector *pObjectX = (EarthView::World::Spatial3D::InstanceManagerVector*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_InstanceManagerVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::InstanceManagerVector *pObjectX = (EarthView::World::Spatial3D::InstanceManagerVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_InstanceManagerVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Spatial3D::InstanceManagerVector *pObjectX = (EarthView::World::Spatial3D::InstanceManagerVector*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_InstanceManagerVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::InstanceManagerVector *pObjectX = (EarthView::World::Spatial3D::InstanceManagerVector*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_InstanceManagerVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Spatial3D::InstanceManagerVector *pObjectX = (EarthView::World::Spatial3D::InstanceManagerVector*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_InstancedEntityVector_push_1back_1CInstancedEntity2(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CInstancedEntity2 *&t = *(EarthView::World::Graphic::CInstancedEntity2**) t_j;
				EarthView::World::Spatial3D::InstancedEntityVector *pObjectX = (EarthView::World::Spatial3D::InstancedEntityVector*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_InstancedEntityVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::InstancedEntityVector *pObjectX = (EarthView::World::Spatial3D::InstancedEntityVector*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_InstancedEntityVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::InstancedEntityVector *pObjectX = (EarthView::World::Spatial3D::InstancedEntityVector*) pObjXXXX;
				EarthView::World::Graphic::CInstancedEntity2*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_InstancedEntityVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::InstancedEntityVector *pObjectX = (EarthView::World::Spatial3D::InstancedEntityVector*) pObjXXXX;
				EarthView::World::Graphic::CInstancedEntity2*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_InstancedEntityVector_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Spatial3D::InstancedEntityVector *pObjectX = (EarthView::World::Spatial3D::InstancedEntityVector*) pObjXXXX;
				EarthView::World::Graphic::CInstancedEntity2*& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_InstancedEntityVector_insert_1ev_1uint32_1CInstancedEntity2(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CInstancedEntity2 *&t = *(EarthView::World::Graphic::CInstancedEntity2**) t_j;
				EarthView::World::Spatial3D::InstancedEntityVector *pObjectX = (EarthView::World::Spatial3D::InstancedEntityVector*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_InstancedEntityVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::InstancedEntityVector *pObjectX = (EarthView::World::Spatial3D::InstancedEntityVector*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_InstancedEntityVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::InstancedEntityVector *pObjectX = (EarthView::World::Spatial3D::InstancedEntityVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_InstancedEntityVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Spatial3D::InstancedEntityVector *pObjectX = (EarthView::World::Spatial3D::InstancedEntityVector*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_InstancedEntityVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::InstancedEntityVector *pObjectX = (EarthView::World::Spatial3D::InstancedEntityVector*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_InstancedEntityVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Spatial3D::InstancedEntityVector *pObjectX = (EarthView::World::Spatial3D::InstancedEntityVector*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_get_1mEntID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->mEntID);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_set_1mEntID_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				pObjectX->mEntID = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_get_1mMeshName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mMeshName;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_set_1mMeshName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mMeshName = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_get_1mMeshID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->mMeshID);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_set_1mMeshID_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				pObjectX->mMeshID = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_get_1mPos_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mPos);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_set_1mPos_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				pObjectX->mPos = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_get_1mScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mScale);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_set_1mScale_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				pObjectX->mScale = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_get_1mQua_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mQua);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_set_1mQua_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				pObjectX->mQua = *(EarthView::World::Spatial::Math::CQuaternion*) __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_get_1mAltitudeMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->mAltitudeMode);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_set_1mAltitudeMode_1EVAltitudeMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				pObjectX->mAltitudeMode = (EarthView::World::Spatial::Utility::EVAltitudeMode)__values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_get_1mAltitudeValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->mAltitudeValue);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_set_1mAltitudeValue_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				pObjectX->mAltitudeValue = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_get_1mBox_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mBox);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_set_1mBox_1CAxisAlignedBox(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				pObjectX->mBox = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) __values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_get_1mCameraLatitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->mCameraLatitude);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_set_1mCameraLatitude_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				pObjectX->mCameraLatitude = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_get_1mCameraLongitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->mCameraLongitude);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_set_1mCameraLongitude_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				pObjectX->mCameraLongitude = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_get_1mCameraHeading_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->mCameraHeading);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_set_1mCameraHeading_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				pObjectX->mCameraHeading = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_get_1mCameraTilt_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->mCameraTilt);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_set_1mCameraTilt_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				pObjectX->mCameraTilt = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_get_1mCameraAltitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->mCameraAltitude);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfo_set_1mCameraAltitude_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjXXXX;
				pObjectX->mCameraAltitude = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfos_push_1back_1CEntitySpatialInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo *&t = *(EarthView::World::Spatial3D::CEntitySpatialInfo**) t_j;
				EarthView::World::Spatial3D::CEntitySpatialInfos *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfos*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfos_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfos *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfos*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfos_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfos *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfos*) pObjXXXX;
				EarthView::World::Spatial3D::CEntitySpatialInfo*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfos_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfos *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfos*) pObjXXXX;
				EarthView::World::Spatial3D::CEntitySpatialInfo*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfos_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Spatial3D::CEntitySpatialInfos *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfos*) pObjXXXX;
				EarthView::World::Spatial3D::CEntitySpatialInfo*& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfos_insert_1ev_1uint32_1CEntitySpatialInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Spatial3D::CEntitySpatialInfo *&t = *(EarthView::World::Spatial3D::CEntitySpatialInfo**) t_j;
				EarthView::World::Spatial3D::CEntitySpatialInfos *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfos*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfos_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CEntitySpatialInfos *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfos*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfos_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CEntitySpatialInfos *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfos*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfos_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Spatial3D::CEntitySpatialInfos *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfos*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfos_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEntitySpatialInfos *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfos*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EntitySpatialInfos_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Spatial3D::CEntitySpatialInfos *pObjectX = (EarthView::World::Spatial3D::CEntitySpatialInfos*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MaterialResourceInfo_setRefCount_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_uint32 count = (ev_uint32) count_j;
				EarthView::World::Spatial3D::CMaterialResourceInfo *pObjectX = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjXXXX;
				pObjectX->setRefCount(count);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_MaterialResourceInfo_getRefCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CMaterialResourceInfo *pObjectX = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getRefCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MaterialResourceInfo_setResourceID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong resourceID_j)
			{
				ev_uint32 resourceID = (ev_uint32) resourceID_j;
				EarthView::World::Spatial3D::CMaterialResourceInfo *pObjectX = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjXXXX;
				pObjectX->setResourceID(resourceID);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_MaterialResourceInfo_getResourceID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CMaterialResourceInfo *pObjectX = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getResourceID();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MaterialResourceInfo_setFilename_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Spatial3D::CMaterialResourceInfo *pObjectX = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjXXXX;
				pObjectX->setFilename(filename);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_MaterialResourceInfo_getFilename_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CMaterialResourceInfo *pObjectX = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjXXXX;
				EVString __values1 = pObjectX->getFilename();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MaterialResourceInfo_setDataSize_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong size_j)
			{
				ev_uint32 size = (ev_uint32) size_j;
				EarthView::World::Spatial3D::CMaterialResourceInfo *pObjectX = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjXXXX;
				pObjectX->setDataSize(size);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_MaterialResourceInfo_getDataSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CMaterialResourceInfo *pObjectX = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getDataSize();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MaterialResourceInfo_setResourceType_1MaterialResourceType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
			{
				EarthView::World::Spatial3D::Dataset::MaterialResourceType type = (EarthView::World::Spatial3D::Dataset::MaterialResourceType) type_j;
				EarthView::World::Spatial3D::CMaterialResourceInfo *pObjectX = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjXXXX;
				pObjectX->setResourceType(type);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_MaterialResourceInfo_getResourceType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CMaterialResourceInfo *pObjectX = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjXXXX;
				EarthView::World::Spatial3D::Dataset::MaterialResourceType __values1 = pObjectX->getResourceType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MaterialResourceInfo_setSubMeshIndex_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Spatial3D::CMaterialResourceInfo *pObjectX = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjXXXX;
				pObjectX->setSubMeshIndex(index);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_MaterialResourceInfo_getSubMeshIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CMaterialResourceInfo *pObjectX = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getSubMeshIndex();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MaterialResourceInfo_setChangeFromTemplate_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
			{
				ev_bool flag = (ev_bool) flag_j;
				EarthView::World::Spatial3D::CMaterialResourceInfo *pObjectX = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjXXXX;
				pObjectX->setChangeFromTemplate(flag);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_MaterialResourceInfo_getChangeFromTemplate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CMaterialResourceInfo *pObjectX = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjXXXX;
				ev_bool __values1 = pObjectX->getChangeFromTemplate();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MaterialResourceInfo_setDataBufRef_1ev_1byte(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j)
			{
				ev_byte *buf = (ev_byte*) buf_j;
				EarthView::World::Spatial3D::CMaterialResourceInfo *pObjectX = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjXXXX;
				pObjectX->setDataBufRef(buf);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_MaterialResourceInfo_getDataBufRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CMaterialResourceInfo *pObjectX = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjXXXX;
				ev_byte* __values1 = pObjectX->getDataBufRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MeshDataInfo_setRefCount_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong refCount_j)
			{
				ev_uint32 refCount = (ev_uint32) refCount_j;
				EarthView::World::Spatial3D::CMeshDataInfo *pObjectX = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjXXXX;
				pObjectX->setRefCount(refCount);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_MeshDataInfo_getRefCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CMeshDataInfo *pObjectX = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getRefCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MeshDataInfo_setMeshID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshID_j)
			{
				ev_uint32 meshID = (ev_uint32) meshID_j;
				EarthView::World::Spatial3D::CMeshDataInfo *pObjectX = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjXXXX;
				pObjectX->setMeshID(meshID);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_MeshDataInfo_getMeshID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CMeshDataInfo *pObjectX = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getMeshID();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MeshDataInfo_setTemplateID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong templateID_j)
			{
				ev_uint32 templateID = (ev_uint32) templateID_j;
				EarthView::World::Spatial3D::CMeshDataInfo *pObjectX = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjXXXX;
				pObjectX->setTemplateID(templateID);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_MeshDataInfo_getTemplateID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CMeshDataInfo *pObjectX = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getTemplateID();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MeshDataInfo_setInstanceNum_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong num_j)
			{
				ev_uint32 num = (ev_uint32) num_j;
				EarthView::World::Spatial3D::CMeshDataInfo *pObjectX = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjXXXX;
				pObjectX->setInstanceNum(num);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_MeshDataInfo_getInstanceNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CMeshDataInfo *pObjectX = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getInstanceNum();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MeshDataInfo_setVisibleDistance_1double_1double(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble minDistance_j, jdouble maxDistance_j)
			{
				double minDistance = (double) minDistance_j;
				double maxDistance = (double) maxDistance_j;
				EarthView::World::Spatial3D::CMeshDataInfo *pObjectX = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjXXXX;
				pObjectX->setVisibleDistance(minDistance, maxDistance);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MeshDataInfo_getVisibleDistance_1double_1double(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong minDistance_j, jlong maxDistance_j)
			{
				double &minDistance = *(double*) minDistance_j;
				double &maxDistance = *(double*) maxDistance_j;
				EarthView::World::Spatial3D::CMeshDataInfo *pObjectX = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjXXXX;
				pObjectX->getVisibleDistance(minDistance, maxDistance);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MeshDataInfo_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Spatial3D::CMeshDataInfo *pObjectX = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjXXXX;
				pObjectX->setName(name);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_MeshDataInfo_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CMeshDataInfo *pObjectX = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjXXXX;
				EVString __values1 = pObjectX->getName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MeshDataInfo_setFileName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Spatial3D::CMeshDataInfo *pObjectX = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjXXXX;
				pObjectX->setFileName(filename);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_MeshDataInfo_getFileName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CMeshDataInfo *pObjectX = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjXXXX;
				EVString __values1 = pObjectX->getFileName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MeshDataInfo_setDataBufRef_1ev_1byte(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j)
			{
				ev_byte *buf = (ev_byte*) buf_j;
				EarthView::World::Spatial3D::CMeshDataInfo *pObjectX = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjXXXX;
				pObjectX->setDataBufRef(buf);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_MeshDataInfo_getDataBufRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CMeshDataInfo *pObjectX = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjXXXX;
				ev_byte* __values1 = pObjectX->getDataBufRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MeshDataInfo_setDataSize_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong size_j)
			{
				ev_uint32 size = (ev_uint32) size_j;
				EarthView::World::Spatial3D::CMeshDataInfo *pObjectX = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjXXXX;
				pObjectX->setDataSize(size);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_MeshDataInfo_getDataSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CMeshDataInfo *pObjectX = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getDataSize();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MeshDataInfo_addResourceRef_1CMaterialResourceInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong resource_j)
			{
				EarthView::World::Spatial3D::CMaterialResourceInfo *resource = (EarthView::World::Spatial3D::CMaterialResourceInfo*) resource_j;
				EarthView::World::Spatial3D::CMeshDataInfo *pObjectX = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjXXXX;
				pObjectX->addResourceRef(resource);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_MeshDataInfo_getResourceRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Spatial3D::CMeshDataInfo *pObjectX = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjXXXX;
				EarthView::World::Spatial3D::CMaterialResourceInfo* __values1 = pObjectX->getResourceRef(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_MeshDataInfo_getResourceNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CMeshDataInfo *pObjectX = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getResourceNum();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_MeshDataInfo_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CMeshDataInfo *pObjectX = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjXXXX;
				EarthView::World::Spatial3D::CMeshDataInfo* __values1 = pObjectX->clone();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_MeshDataInfo_clearBuffer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CMeshDataInfo *pObjectX = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjXXXX;
				pObjectX->clearBuffer();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ComponentVector_push_1back_1CComponent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Spatial3D::CComponent &t = *(EarthView::World::Spatial3D::CComponent*) t_j;
				EarthView::World::Spatial3D::CComponentVector *pObjectX = (EarthView::World::Spatial3D::CComponentVector*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ComponentVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CComponentVector *pObjectX = (EarthView::World::Spatial3D::CComponentVector*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ComponentVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CComponentVector *pObjectX = (EarthView::World::Spatial3D::CComponentVector*) pObjXXXX;
				EarthView::World::Spatial3D::CComponent& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ComponentVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CComponentVector *pObjectX = (EarthView::World::Spatial3D::CComponentVector*) pObjXXXX;
				EarthView::World::Spatial3D::CComponent& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ComponentVector_insert_1ev_1uint32_1CComponent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Spatial3D::CComponent &t = *(EarthView::World::Spatial3D::CComponent*) t_j;
				EarthView::World::Spatial3D::CComponentVector *pObjectX = (EarthView::World::Spatial3D::CComponentVector*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ComponentVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Spatial3D::CComponentVector *pObjectX = (EarthView::World::Spatial3D::CComponentVector*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_ComponentVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CComponentVector *pObjectX = (EarthView::World::Spatial3D::CComponentVector*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ComponentVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Spatial3D::CComponentVector& pObjectX = *(EarthView::World::Spatial3D::CComponentVector*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Spatial3D::CComponent& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ComponentVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Spatial3D::CComponentVector *pObjectX = (EarthView::World::Spatial3D::CComponentVector*) pObjXXXX;
				EarthView::World::Spatial3D::CComponent& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ComponentVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CComponentVector *pObjectX = (EarthView::World::Spatial3D::CComponentVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ComponentVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Spatial3D::CComponentVector *pObjectX = (EarthView::World::Spatial3D::CComponentVector*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ComponentVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Spatial3D::CComponentVector *pObjectX = (EarthView::World::Spatial3D::CComponentVector*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ComponentVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CComponentVector *pObjectX = (EarthView::World::Spatial3D::CComponentVector*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_SubEntityVector_push_1back_1CSubEntity(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CSubEntity *&t = *(EarthView::World::Graphic::CSubEntity**) t_j;
				EarthView::World::Spatial3D::CSubEntityVector *pObjectX = (EarthView::World::Spatial3D::CSubEntityVector*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_SubEntityVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CSubEntityVector *pObjectX = (EarthView::World::Spatial3D::CSubEntityVector*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_SubEntityVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CSubEntityVector *pObjectX = (EarthView::World::Spatial3D::CSubEntityVector*) pObjXXXX;
				EarthView::World::Graphic::CSubEntity*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_SubEntityVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CSubEntityVector *pObjectX = (EarthView::World::Spatial3D::CSubEntityVector*) pObjXXXX;
				EarthView::World::Graphic::CSubEntity*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_SubEntityVector_insert_1ev_1uint32_1CSubEntity(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CSubEntity *&t = *(EarthView::World::Graphic::CSubEntity**) t_j;
				EarthView::World::Spatial3D::CSubEntityVector *pObjectX = (EarthView::World::Spatial3D::CSubEntityVector*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_SubEntityVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Spatial3D::CSubEntityVector *pObjectX = (EarthView::World::Spatial3D::CSubEntityVector*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_SubEntityVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CSubEntityVector *pObjectX = (EarthView::World::Spatial3D::CSubEntityVector*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_SubEntityVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Spatial3D::CSubEntityVector& pObjectX = *(EarthView::World::Spatial3D::CSubEntityVector*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CSubEntity*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_SubEntityVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Spatial3D::CSubEntityVector *pObjectX = (EarthView::World::Spatial3D::CSubEntityVector*) pObjXXXX;
				EarthView::World::Graphic::CSubEntity*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_SubEntityVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CSubEntityVector *pObjectX = (EarthView::World::Spatial3D::CSubEntityVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_SubEntityVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Spatial3D::CSubEntityVector *pObjectX = (EarthView::World::Spatial3D::CSubEntityVector*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_SubEntityVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Spatial3D::CSubEntityVector *pObjectX = (EarthView::World::Spatial3D::CSubEntityVector*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_SubEntityVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CSubEntityVector *pObjectX = (EarthView::World::Spatial3D::CSubEntityVector*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ComponentUnit_Create(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Spatial3D::ComponentUnit *pObjectX = new EarthView::World::Spatial3D::ComponentUnit();
				return (jlong) pObjectX;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ComponentUnit_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ComponentUnit *pObjectX = (EarthView::World::Spatial3D::ComponentUnit*)pObjXXXX;
				delete pObjectX;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ComponentUnit_get_1SubEntityIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ComponentUnit *pObjectX = (EarthView::World::Spatial3D::ComponentUnit*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->SubEntityIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ComponentUnit_set_1SubEntityIndex_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::ComponentUnit *pObjectX = (EarthView::World::Spatial3D::ComponentUnit*)pObjXXXX;
				pObjectX->SubEntityIndex = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_ComponentUnit_get_1IndexBegun_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ComponentUnit *pObjectX = (EarthView::World::Spatial3D::ComponentUnit*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->IndexBegun);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ComponentUnit_set_1IndexBegun_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Spatial3D::ComponentUnit *pObjectX = (EarthView::World::Spatial3D::ComponentUnit*)pObjXXXX;
				pObjectX->IndexBegun = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_ComponentUnit_get_1IndexEnd_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ComponentUnit *pObjectX = (EarthView::World::Spatial3D::ComponentUnit*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->IndexEnd);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ComponentUnit_set_1IndexEnd_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Spatial3D::ComponentUnit *pObjectX = (EarthView::World::Spatial3D::ComponentUnit*)pObjXXXX;
				pObjectX->IndexEnd = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ComponentUnits_push_1back_1ComponentUnit(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Spatial3D::ComponentUnit &t = *(EarthView::World::Spatial3D::ComponentUnit*) t_j;
				EarthView::World::Spatial3D::ComponentUnits *pObjectX = (EarthView::World::Spatial3D::ComponentUnits*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ComponentUnits_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ComponentUnits *pObjectX = (EarthView::World::Spatial3D::ComponentUnits*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ComponentUnits_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ComponentUnits *pObjectX = (EarthView::World::Spatial3D::ComponentUnits*) pObjXXXX;
				EarthView::World::Spatial3D::ComponentUnit& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ComponentUnits_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ComponentUnits *pObjectX = (EarthView::World::Spatial3D::ComponentUnits*) pObjXXXX;
				EarthView::World::Spatial3D::ComponentUnit& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ComponentUnits_insert_1ev_1uint32_1ComponentUnit(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Spatial3D::ComponentUnit &t = *(EarthView::World::Spatial3D::ComponentUnit*) t_j;
				EarthView::World::Spatial3D::ComponentUnits *pObjectX = (EarthView::World::Spatial3D::ComponentUnits*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ComponentUnits_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Spatial3D::ComponentUnits *pObjectX = (EarthView::World::Spatial3D::ComponentUnits*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_ComponentUnits_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::ComponentUnits *pObjectX = (EarthView::World::Spatial3D::ComponentUnits*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ComponentUnits_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Spatial3D::ComponentUnits& pObjectX = *(EarthView::World::Spatial3D::ComponentUnits*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Spatial3D::ComponentUnit& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ComponentUnits_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Spatial3D::ComponentUnits *pObjectX = (EarthView::World::Spatial3D::ComponentUnits*) pObjXXXX;
				EarthView::World::Spatial3D::ComponentUnit& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ComponentUnits_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::ComponentUnits *pObjectX = (EarthView::World::Spatial3D::ComponentUnits*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ComponentUnits_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Spatial3D::ComponentUnits *pObjectX = (EarthView::World::Spatial3D::ComponentUnits*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ComponentUnits_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Spatial3D::ComponentUnits *pObjectX = (EarthView::World::Spatial3D::ComponentUnits*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ComponentUnits_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ComponentUnits *pObjectX = (EarthView::World::Spatial3D::ComponentUnits*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_Component_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CComponent *pObjectX = (EarthView::World::Spatial3D::CComponent*) pObjXXXX;
				const EVString& __values1 = pObjectX->getName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Component_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EarthView::World::Spatial3D::CComponent *pObjectX = (EarthView::World::Spatial3D::CComponent*) pObjXXXX;
				pObjectX->setName(val);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_Component_getSubComponents_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CComponent *pObjectX = (EarthView::World::Spatial3D::CComponent*) pObjXXXX;
				const EarthView::World::Spatial3D::CComponentVector& __values1 = pObjectX->getSubComponents();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_Component_getComponentUnits_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CComponent *pObjectX = (EarthView::World::Spatial3D::CComponent*) pObjXXXX;
				const EarthView::World::Spatial3D::ComponentUnits& __values1 = pObjectX->getComponentUnits();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_Component_getModelType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CComponent *pObjectX = (EarthView::World::Spatial3D::CComponent*) pObjXXXX;
				EarthView::World::Spatial3D::ModelType __values1 = pObjectX->getModelType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Component_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CComponent *pObjectX = (EarthView::World::Spatial3D::CComponent*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_Component_getOffsetMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CComponent *pObjectX = (EarthView::World::Spatial3D::CComponent*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->getOffsetMatrix();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Component_setOffsetMatrix_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offsetMatrix_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &offsetMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) offsetMatrix_j;
				EarthView::World::Spatial3D::CComponent *pObjectX = (EarthView::World::Spatial3D::CComponent*) pObjXXXX;
				pObjectX->setOffsetMatrix(offsetMatrix);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_Component_getBounds_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CComponent *pObjectX = (EarthView::World::Spatial3D::CComponent*) pObjXXXX;
				const EarthView::World::Spatial::Math::CAxisAlignedBox& __values1 = pObjectX->getBounds();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_Component_getID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CComponent *pObjectX = (EarthView::World::Spatial3D::CComponent*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getID();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectVector_push_1back_1CEffect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Spatial3D::EffectManager::CEffect *&t = *(EarthView::World::Spatial3D::EffectManager::CEffect**) t_j;
				EarthView::World::Spatial3D::CEffectVector *pObjectX = (EarthView::World::Spatial3D::CEffectVector*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEffectVector *pObjectX = (EarthView::World::Spatial3D::CEffectVector*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_EffectVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEffectVector *pObjectX = (EarthView::World::Spatial3D::CEffectVector*) pObjXXXX;
				EarthView::World::Spatial3D::EffectManager::CEffect*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_EffectVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEffectVector *pObjectX = (EarthView::World::Spatial3D::CEffectVector*) pObjXXXX;
				EarthView::World::Spatial3D::EffectManager::CEffect*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectVector_insert_1ev_1uint32_1CEffect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Spatial3D::EffectManager::CEffect *&t = *(EarthView::World::Spatial3D::EffectManager::CEffect**) t_j;
				EarthView::World::Spatial3D::CEffectVector *pObjectX = (EarthView::World::Spatial3D::CEffectVector*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Spatial3D::CEffectVector *pObjectX = (EarthView::World::Spatial3D::CEffectVector*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_EffectVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CEffectVector *pObjectX = (EarthView::World::Spatial3D::CEffectVector*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_EffectVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Spatial3D::CEffectVector& pObjectX = *(EarthView::World::Spatial3D::CEffectVector*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Spatial3D::EffectManager::CEffect*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_EffectVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Spatial3D::CEffectVector *pObjectX = (EarthView::World::Spatial3D::CEffectVector*) pObjXXXX;
				EarthView::World::Spatial3D::EffectManager::CEffect*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_EffectVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CEffectVector *pObjectX = (EarthView::World::Spatial3D::CEffectVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Spatial3D::CEffectVector *pObjectX = (EarthView::World::Spatial3D::CEffectVector*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Spatial3D::CEffectVector *pObjectX = (EarthView::World::Spatial3D::CEffectVector*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEffectVector *pObjectX = (EarthView::World::Spatial3D::CEffectVector*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelDataStream_releaseAllFeature_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ModelDataStream *pObjectX = (EarthView::World::Spatial3D::ModelDataStream*) pObjXXXX;
				pObjectX->releaseAllFeature();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelDataStream_setAllFeatureDataStreamNull_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ModelDataStream *pObjectX = (EarthView::World::Spatial3D::ModelDataStream*) pObjXXXX;
				pObjectX->setAllFeatureDataStreamNull();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ModelDataStream_get_1mpMeshFeature_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ModelDataStream *pObjectX = (EarthView::World::Spatial3D::ModelDataStream*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->mpMeshFeature);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelDataStream_set_1mpMeshFeature_1IFeature(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::ModelDataStream *pObjectX = (EarthView::World::Spatial3D::ModelDataStream*)pObjXXXX;
				pObjectX->mpMeshFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ModelDataStream_get_1mThumbTextures_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ModelDataStream *pObjectX = (EarthView::World::Spatial3D::ModelDataStream*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mThumbTextures);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelDataStream_set_1mThumbTextures_1FeatureVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::ModelDataStream *pObjectX = (EarthView::World::Spatial3D::ModelDataStream*)pObjXXXX;
				pObjectX->mThumbTextures = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ModelDataStream_get_1mOrigTextures_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ModelDataStream *pObjectX = (EarthView::World::Spatial3D::ModelDataStream*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mOrigTextures);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelDataStream_set_1mOrigTextures_1FeatureVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::ModelDataStream *pObjectX = (EarthView::World::Spatial3D::ModelDataStream*)pObjXXXX;
				pObjectX->mOrigTextures = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ModelDataStream_get_1mCubeTextures_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ModelDataStream *pObjectX = (EarthView::World::Spatial3D::ModelDataStream*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mCubeTextures);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelDataStream_set_1mCubeTextures_1FeatureVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::ModelDataStream *pObjectX = (EarthView::World::Spatial3D::ModelDataStream*)pObjXXXX;
				pObjectX->mCubeTextures = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ModelDataStream_get_1mMaterials_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ModelDataStream *pObjectX = (EarthView::World::Spatial3D::ModelDataStream*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mMaterials);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelDataStream_set_1mMaterials_1FeatureVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::ModelDataStream *pObjectX = (EarthView::World::Spatial3D::ModelDataStream*)pObjXXXX;
				pObjectX->mMaterials = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ModelDataStream_get_1mProgs_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ModelDataStream *pObjectX = (EarthView::World::Spatial3D::ModelDataStream*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mProgs);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelDataStream_set_1mProgs_1FeatureVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::ModelDataStream *pObjectX = (EarthView::World::Spatial3D::ModelDataStream*)pObjXXXX;
				pObjectX->mProgs = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ModelDataStream_get_1mGpus_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ModelDataStream *pObjectX = (EarthView::World::Spatial3D::ModelDataStream*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mGpus);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelDataStream_set_1mGpus_1FeatureVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::ModelDataStream *pObjectX = (EarthView::World::Spatial3D::ModelDataStream*)pObjXXXX;
				pObjectX->mGpus = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ModelDataStream_get_1mSkeletons_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ModelDataStream *pObjectX = (EarthView::World::Spatial3D::ModelDataStream*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mSkeletons);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelDataStream_set_1mSkeletons_1FeatureVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::ModelDataStream *pObjectX = (EarthView::World::Spatial3D::ModelDataStream*)pObjXXXX;
				pObjectX->mSkeletons = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ModelDataStream_get_1mAnimations_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ModelDataStream *pObjectX = (EarthView::World::Spatial3D::ModelDataStream*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mAnimations);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelDataStream_set_1mAnimations_1FeatureVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::ModelDataStream *pObjectX = (EarthView::World::Spatial3D::ModelDataStream*)pObjXXXX;
				pObjectX->mAnimations = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ModelResource_get_1mMeshObj_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ModelResource *pObjectX = (EarthView::World::Spatial3D::ModelResource*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mMeshObj);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelResource_set_1mMeshObj_1CMeshPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::ModelResource *pObjectX = (EarthView::World::Spatial3D::ModelResource*)pObjXXXX;
				pObjectX->mMeshObj = *(EarthView::World::Graphic::CMeshPtr*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ModelResource_get_1mMeshAnimationObj_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ModelResource *pObjectX = (EarthView::World::Spatial3D::ModelResource*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mMeshAnimationObj);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelResource_set_1mMeshAnimationObj_1CMeshPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::ModelResource *pObjectX = (EarthView::World::Spatial3D::ModelResource*)pObjXXXX;
				pObjectX->mMeshAnimationObj = *(EarthView::World::Graphic::CMeshPtr*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ModelResource_get_1mTextureObjs_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ModelResource *pObjectX = (EarthView::World::Spatial3D::ModelResource*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mTextureObjs);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelResource_set_1mTextureObjs_1TexturePtrVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::ModelResource *pObjectX = (EarthView::World::Spatial3D::ModelResource*)pObjXXXX;
				pObjectX->mTextureObjs = *(EarthView::World::Spatial3D::TexturePtrVector*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ModelResource_get_1mThumbTextureObjs_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ModelResource *pObjectX = (EarthView::World::Spatial3D::ModelResource*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mThumbTextureObjs);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelResource_set_1mThumbTextureObjs_1TexturePtrVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::ModelResource *pObjectX = (EarthView::World::Spatial3D::ModelResource*)pObjXXXX;
				pObjectX->mThumbTextureObjs = *(EarthView::World::Spatial3D::TexturePtrVector*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ModelResource_get_1mCubeTextureObjs_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ModelResource *pObjectX = (EarthView::World::Spatial3D::ModelResource*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mCubeTextureObjs);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelResource_set_1mCubeTextureObjs_1TexturePtrVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::ModelResource *pObjectX = (EarthView::World::Spatial3D::ModelResource*)pObjXXXX;
				pObjectX->mCubeTextureObjs = *(EarthView::World::Spatial3D::TexturePtrVector*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ModelResource_get_1mMaterialObjs_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ModelResource *pObjectX = (EarthView::World::Spatial3D::ModelResource*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mMaterialObjs);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelResource_set_1mMaterialObjs_1MaterialPtrVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::ModelResource *pObjectX = (EarthView::World::Spatial3D::ModelResource*)pObjXXXX;
				pObjectX->mMaterialObjs = *(EarthView::World::Spatial3D::MaterialPtrVector*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ModelResource_get_1mGpuObjs_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ModelResource *pObjectX = (EarthView::World::Spatial3D::ModelResource*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mGpuObjs);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelResource_set_1mGpuObjs_1GpuPtrVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::ModelResource *pObjectX = (EarthView::World::Spatial3D::ModelResource*)pObjXXXX;
				pObjectX->mGpuObjs = *(EarthView::World::Spatial3D::GpuPtrVector*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ModelResource_get_1mSkeletonObj_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ModelResource *pObjectX = (EarthView::World::Spatial3D::ModelResource*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mSkeletonObj);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelResource_set_1mSkeletonObj_1CSkeletonPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::ModelResource *pObjectX = (EarthView::World::Spatial3D::ModelResource*)pObjXXXX;
				pObjectX->mSkeletonObj = *(EarthView::World::Graphic::CSkeletonPtr*) __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TerrainRevisorVector_push_1back_1CTerrainRevisor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Spatial3D::CTerrainRevisor &t = *(EarthView::World::Spatial3D::CTerrainRevisor*) t_j;
				EarthView::World::Spatial3D::TerrainRevisorVector *pObjectX = (EarthView::World::Spatial3D::TerrainRevisorVector*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TerrainRevisorVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::TerrainRevisorVector *pObjectX = (EarthView::World::Spatial3D::TerrainRevisorVector*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TerrainRevisorVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::TerrainRevisorVector *pObjectX = (EarthView::World::Spatial3D::TerrainRevisorVector*) pObjXXXX;
				EarthView::World::Spatial3D::CTerrainRevisor& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TerrainRevisorVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::TerrainRevisorVector *pObjectX = (EarthView::World::Spatial3D::TerrainRevisorVector*) pObjXXXX;
				EarthView::World::Spatial3D::CTerrainRevisor& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TerrainRevisorVector_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Spatial3D::TerrainRevisorVector *pObjectX = (EarthView::World::Spatial3D::TerrainRevisorVector*) pObjXXXX;
				EarthView::World::Spatial3D::CTerrainRevisor& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TerrainRevisorVector_insert_1ev_1uint32_1CTerrainRevisor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Spatial3D::CTerrainRevisor &t = *(EarthView::World::Spatial3D::CTerrainRevisor*) t_j;
				EarthView::World::Spatial3D::TerrainRevisorVector *pObjectX = (EarthView::World::Spatial3D::TerrainRevisorVector*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_TerrainRevisorVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::TerrainRevisorVector *pObjectX = (EarthView::World::Spatial3D::TerrainRevisorVector*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TerrainRevisorVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::TerrainRevisorVector *pObjectX = (EarthView::World::Spatial3D::TerrainRevisorVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TerrainRevisorVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Spatial3D::TerrainRevisorVector *pObjectX = (EarthView::World::Spatial3D::TerrainRevisorVector*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TerrainRevisorVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::TerrainRevisorVector *pObjectX = (EarthView::World::Spatial3D::TerrainRevisorVector*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TerrainRevisorVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Spatial3D::TerrainRevisorVector *pObjectX = (EarthView::World::Spatial3D::TerrainRevisorVector*) pObjXXXX;
				pObjectX->reserve(count);
			}
		}
	}
}
