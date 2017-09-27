/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/spatial3ddatasetcomdef.h"
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
			namespace GeoDataset
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
			namespace Dataset
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_dataset_MaterialResourceTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						MTRL_GPU,
						MTRL_PROGRAM,
						MTRL_MATREIAL,
						MTRL_MESH,
						MTRL_TEXTURE,
						MTRL_SKELETON,
						MTRL_ANIMATION
					};
					jintArray array = __env->NewIntArray(7);
					__env->SetIntArrayRegion(array, 0, 7, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_dataset_EntityDatasetEventHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						EDTEVT_STOPRENDER,
						EDTEVT_STARTRENDER,
						EDTEVT_UPDATEMODEL,
						EDTEVT_REFRESHALLMODEL,
						EDTEVT_UPDATEALTITUDE,
						EDTEVT_UPDATEDEM,
						EDTEVT_UPDATEOCTREE,
						EDTEVT_REFRESHOCTREE,
						EDTEVT_GETCOMMITID
					};
					jintArray array = __env->NewIntArray(9);
					__env->SetIntArrayRegion(array, 0, 9, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_dataset_EntityDatasetOperTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						EDS_ADD,
						EDS_DELETE,
						EDS_UPDATE,
						EDS_DONOTHING
					};
					jintArray array = __env->NewIntArray(4);
					__env->SetIntArrayRegion(array, 0, 4, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_dataset_EffectTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						ET_SINGLEPARTICLE,
						ET_BLENDEFFECT,
						ET_BLENDPARTICLE,
						ET_BLENDGIF,
						ET_GIF,
						ET_TRAIL
					};
					jintArray array = __env->NewIntArray(6);
					__env->SetIntArrayRegion(array, 0, 6, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_TextureStreamItem_get_1mIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::TextureStreamItem *pObjectX = (EarthView::World::Spatial3D::Dataset::TextureStreamItem*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->mIndex);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_TextureStreamItem_set_1mIndex_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Dataset::TextureStreamItem *pObjectX = (EarthView::World::Spatial3D::Dataset::TextureStreamItem*)pObjXXXX;
					pObjectX->mIndex = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_TextureStreamItem_get_1mStream_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::TextureStreamItem *pObjectX = (EarthView::World::Spatial3D::Dataset::TextureStreamItem*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mStream);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_TextureStreamItem_set_1mStream_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Dataset::TextureStreamItem *pObjectX = (EarthView::World::Spatial3D::Dataset::TextureStreamItem*)pObjXXXX;
					pObjectX->mStream = *(EarthView::World::Core::MemoryDataStreamPtr*) __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataset_TextureStreamItem_get_1filenmae_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::TextureStreamItem *pObjectX = (EarthView::World::Spatial3D::Dataset::TextureStreamItem*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->filenmae;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_TextureStreamItem_set_1filenmae_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::Dataset::TextureStreamItem *pObjectX = (EarthView::World::Spatial3D::Dataset::TextureStreamItem*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->filenmae = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_TextureStreamVector_push_1back_1TextureStreamItem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial3D::Dataset::TextureStreamItem &t = *(EarthView::World::Spatial3D::Dataset::TextureStreamItem*) t_j;
					EarthView::World::Spatial3D::Dataset::TextureStreamVector *pObjectX = (EarthView::World::Spatial3D::Dataset::TextureStreamVector*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_TextureStreamVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::TextureStreamVector *pObjectX = (EarthView::World::Spatial3D::Dataset::TextureStreamVector*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_TextureStreamVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::TextureStreamVector *pObjectX = (EarthView::World::Spatial3D::Dataset::TextureStreamVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::TextureStreamItem& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_TextureStreamVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::TextureStreamVector *pObjectX = (EarthView::World::Spatial3D::Dataset::TextureStreamVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::TextureStreamItem& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_TextureStreamVector_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::Dataset::TextureStreamVector *pObjectX = (EarthView::World::Spatial3D::Dataset::TextureStreamVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::TextureStreamItem& __values1 = pObjectX->at(pos);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_TextureStreamVector_insert_1ev_1uint32_1TextureStreamItem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::Dataset::TextureStreamItem &t = *(EarthView::World::Spatial3D::Dataset::TextureStreamItem*) t_j;
					EarthView::World::Spatial3D::Dataset::TextureStreamVector *pObjectX = (EarthView::World::Spatial3D::Dataset::TextureStreamVector*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_TextureStreamVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::TextureStreamVector *pObjectX = (EarthView::World::Spatial3D::Dataset::TextureStreamVector*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_TextureStreamVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::TextureStreamVector *pObjectX = (EarthView::World::Spatial3D::Dataset::TextureStreamVector*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_TextureStreamVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::Dataset::TextureStreamVector *pObjectX = (EarthView::World::Spatial3D::Dataset::TextureStreamVector*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_TextureStreamVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::TextureStreamVector *pObjectX = (EarthView::World::Spatial3D::Dataset::TextureStreamVector*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_TextureStreamVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial3D::Dataset::TextureStreamVector *pObjectX = (EarthView::World::Spatial3D::Dataset::TextureStreamVector*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_FeatureVector_push_1back_1IFeature(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *&t = *(EarthView::World::Spatial::GeoDataset::IFeature**) t_j;
					EarthView::World::Spatial3D::Dataset::FeatureVector *pObjectX = (EarthView::World::Spatial3D::Dataset::FeatureVector*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_FeatureVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::FeatureVector *pObjectX = (EarthView::World::Spatial3D::Dataset::FeatureVector*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_FeatureVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::FeatureVector *pObjectX = (EarthView::World::Spatial3D::Dataset::FeatureVector*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature*& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_FeatureVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::FeatureVector *pObjectX = (EarthView::World::Spatial3D::Dataset::FeatureVector*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature*& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_FeatureVector_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::Dataset::FeatureVector *pObjectX = (EarthView::World::Spatial3D::Dataset::FeatureVector*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature*& __values1 = pObjectX->at(pos);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_FeatureVector_insert_1ev_1uint32_1IFeature(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial::GeoDataset::IFeature *&t = *(EarthView::World::Spatial::GeoDataset::IFeature**) t_j;
					EarthView::World::Spatial3D::Dataset::FeatureVector *pObjectX = (EarthView::World::Spatial3D::Dataset::FeatureVector*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_FeatureVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::FeatureVector *pObjectX = (EarthView::World::Spatial3D::Dataset::FeatureVector*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_FeatureVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::FeatureVector *pObjectX = (EarthView::World::Spatial3D::Dataset::FeatureVector*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_FeatureVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::Dataset::FeatureVector *pObjectX = (EarthView::World::Spatial3D::Dataset::FeatureVector*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_FeatureVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::FeatureVector *pObjectX = (EarthView::World::Spatial3D::Dataset::FeatureVector*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_FeatureVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial3D::Dataset::FeatureVector *pObjectX = (EarthView::World::Spatial3D::Dataset::FeatureVector*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_IntMap_push_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j, jint val_j)
				{
					const ev_int32 key = (const ev_int32) key_j;
					ev_int32 val = (ev_int32) val_j;
					EarthView::World::Spatial3D::Dataset::IntMap *pObjectX = (EarthView::World::Spatial3D::Dataset::IntMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->push(key, val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_IntMap_exist_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
				{
					const ev_int32 key = (const ev_int32) key_j;
					EarthView::World::Spatial3D::Dataset::IntMap *pObjectX = (EarthView::World::Spatial3D::Dataset::IntMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->exist(key);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_IntMap_OperatorIndex_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint key_j )
				{
					EarthView::World::Spatial3D::Dataset::IntMap& pObjectX = *(EarthView::World::Spatial3D::Dataset::IntMap*) pObjXXXX;
					const ev_int32 key = (const ev_int32) key_j;
					ev_int32& __values1 = pObjectX[key];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_IntMap_get_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
				{
					const ev_int32 key = (const ev_int32) key_j;
					EarthView::World::Spatial3D::Dataset::IntMap *pObjectX = (EarthView::World::Spatial3D::Dataset::IntMap*) pObjXXXX;
					ev_int32& __values1 = pObjectX->get(key);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_IntMap_erase_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
				{
					const ev_int32 key = (const ev_int32) key_j;
					EarthView::World::Spatial3D::Dataset::IntMap *pObjectX = (EarthView::World::Spatial3D::Dataset::IntMap*) pObjXXXX;
					pObjectX->erase(key);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_IntMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::IntMap *pObjectX = (EarthView::World::Spatial3D::Dataset::IntMap*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_IntMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::IntMap *pObjectX = (EarthView::World::Spatial3D::Dataset::IntMap*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_IntMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::IntMap *pObjectX = (EarthView::World::Spatial3D::Dataset::IntMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_IntMap_getKeys_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::IntMap *pObjectX = (EarthView::World::Spatial3D::Dataset::IntMap*) pObjXXXX;
					EarthView::World::Core::IntVector __values1 = pObjectX->getKeys();
					EarthView::World::Core::IntVector *returnvalues = new EarthView::World::Core::IntVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInfo_getEffectID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInfo*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getEffectID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInfo_setEffectID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
				{
					ev_uint32 val = (ev_uint32) val_j;
					EarthView::World::Spatial3D::Dataset::CEffectInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInfo*) pObjXXXX;
					pObjectX->setEffectID(val);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInfo_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInfo*) pObjXXXX;
					EVString __values1 = pObjectX->getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInfo_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring val_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
					EVString val = val_ch;
					__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
					#else
					const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
					EVString val = val_ch;
					__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::CEffectInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInfo*) pObjXXXX;
					pObjectX->setName(val);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInfo_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInfo*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::EffectType __values1 = pObjectX->getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInfo_setType_1EffectType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint val_j)
				{
					EarthView::World::Spatial3D::Dataset::EffectType val = (EarthView::World::Spatial3D::Dataset::EffectType) val_j;
					EarthView::World::Spatial3D::Dataset::CEffectInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInfo*) pObjXXXX;
					pObjectX->setType(val);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInfo_getUserType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInfo*) pObjXXXX;
					EVString __values1 = pObjectX->getUserType();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInfo_setUserType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring val_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
					EVString val = val_ch;
					__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
					#else
					const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
					EVString val = val_ch;
					__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::CEffectInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInfo*) pObjXXXX;
					pObjectX->setUserType(val);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInfo_getContext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInfo*) pObjXXXX;
					EVString __values1 = pObjectX->getContext();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInfo_setContext_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring val_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
					EVString val = val_ch;
					__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
					#else
					const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
					EVString val = val_ch;
					__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::CEffectInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInfo*) pObjXXXX;
					pObjectX->setContext(val);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInfoVector_push_1back_1CEffectInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfo &t = *(EarthView::World::Spatial3D::Dataset::CEffectInfo*) t_j;
					EarthView::World::Spatial3D::Dataset::CEffectInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInfoVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInfoVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectInfo& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInfoVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectInfo& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInfoVector_insert_1ev_1uint32_1CEffectInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::Dataset::CEffectInfo &t = *(EarthView::World::Spatial3D::Dataset::CEffectInfo*) t_j;
					EarthView::World::Spatial3D::Dataset::CEffectInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInfoVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial3D::Dataset::CEffectInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInfoVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CEffectInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInfoVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfoVector& pObjectX = *(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Dataset::CEffectInfo& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInfoVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Dataset::CEffectInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectInfo& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInfoVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CEffectInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInfoVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::Dataset::CEffectInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInfoVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial3D::Dataset::CEffectInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInfoVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_DataSetVector_push_1back_1IDataset(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataset *&t = *(EarthView::World::Spatial::GeoDataset::IDataset**) t_j;
					EarthView::World::Spatial3D::Dataset::DataSetVector *pObjectX = (EarthView::World::Spatial3D::Dataset::DataSetVector*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_DataSetVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::DataSetVector *pObjectX = (EarthView::World::Spatial3D::Dataset::DataSetVector*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_DataSetVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::DataSetVector *pObjectX = (EarthView::World::Spatial3D::Dataset::DataSetVector*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset*& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_DataSetVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::DataSetVector *pObjectX = (EarthView::World::Spatial3D::Dataset::DataSetVector*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset*& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_DataSetVector_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::Dataset::DataSetVector *pObjectX = (EarthView::World::Spatial3D::Dataset::DataSetVector*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset*& __values1 = pObjectX->at(pos);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_DataSetVector_insert_1ev_1uint32_1IDataset(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial::GeoDataset::IDataset *&t = *(EarthView::World::Spatial::GeoDataset::IDataset**) t_j;
					EarthView::World::Spatial3D::Dataset::DataSetVector *pObjectX = (EarthView::World::Spatial3D::Dataset::DataSetVector*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_DataSetVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::DataSetVector *pObjectX = (EarthView::World::Spatial3D::Dataset::DataSetVector*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_DataSetVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::DataSetVector *pObjectX = (EarthView::World::Spatial3D::Dataset::DataSetVector*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_DataSetVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::Dataset::DataSetVector *pObjectX = (EarthView::World::Spatial3D::Dataset::DataSetVector*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_DataSetVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::DataSetVector *pObjectX = (EarthView::World::Spatial3D::Dataset::DataSetVector*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_DataSetVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial3D::Dataset::DataSetVector *pObjectX = (EarthView::World::Spatial3D::Dataset::DataSetVector*) pObjXXXX;
					pObjectX->reserve(count);
				}
			}
		}
	}
}
