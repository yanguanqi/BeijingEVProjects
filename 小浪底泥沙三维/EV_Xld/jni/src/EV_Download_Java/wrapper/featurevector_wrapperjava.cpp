/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "download/featurevector.h"
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
			namespace Download
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_ModelFeature_addValue_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring fieldvalue_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* fieldvalue_ch = (const ev_char*)__env->GetStringUTFChars(fieldvalue_j,JNI_FALSE);
					const EVString fieldvalue = fieldvalue_ch;
					__env->ReleaseStringUTFChars(fieldvalue_j, (const char *)fieldvalue_ch);
					#else
					const ev_wchar* fieldvalue_ch = (const ev_wchar*)__env->GetStringChars(fieldvalue_j,JNI_FALSE);
					const EVString fieldvalue = fieldvalue_ch;
					__env->ReleaseStringChars(fieldvalue_j, (const jchar *)fieldvalue_ch);
					#endif
					EarthView::World::Spatial::Download::ModelFeature *pObjectX = (EarthView::World::Spatial::Download::ModelFeature*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->addValue(fieldvalue);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_download_ModelFeature_getValue_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					const 					EarthView::World::Spatial::Download::ModelFeature *pObjectX = (EarthView::World::Spatial::Download::ModelFeature*) pObjXXXX;
					EVString __values1 = pObjectX->getValue(name);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ModelFeature_setFields_1IFields(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_fields_j)
				{
					EarthView::World::Spatial::GeoDataset::IFields *ref_fields = (EarthView::World::Spatial::GeoDataset::IFields*) ref_fields_j;
					EarthView::World::Spatial::Download::ModelFeature *pObjectX = (EarthView::World::Spatial::Download::ModelFeature*) pObjXXXX;
					pObjectX->setFields(ref_fields);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_ModelFeature_getFields_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::ModelFeature *pObjectX = (EarthView::World::Spatial::Download::ModelFeature*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IFields* __values1 = pObjectX->getFields();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ModelFeatureVector_push_1back_1ModelFeature(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial::Download::ModelFeature &t = *(EarthView::World::Spatial::Download::ModelFeature*) t_j;
					EarthView::World::Spatial::Download::ModelFeatureVector *pObjectX = (EarthView::World::Spatial::Download::ModelFeatureVector*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ModelFeatureVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::ModelFeatureVector *pObjectX = (EarthView::World::Spatial::Download::ModelFeatureVector*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_ModelFeatureVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::ModelFeatureVector *pObjectX = (EarthView::World::Spatial::Download::ModelFeatureVector*) pObjXXXX;
					EarthView::World::Spatial::Download::ModelFeature& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_ModelFeatureVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::ModelFeatureVector *pObjectX = (EarthView::World::Spatial::Download::ModelFeatureVector*) pObjXXXX;
					EarthView::World::Spatial::Download::ModelFeature& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ModelFeatureVector_insert_1ev_1uint32_1ModelFeature(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial::Download::ModelFeature &t = *(EarthView::World::Spatial::Download::ModelFeature*) t_j;
					EarthView::World::Spatial::Download::ModelFeatureVector *pObjectX = (EarthView::World::Spatial::Download::ModelFeatureVector*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ModelFeatureVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial::Download::ModelFeatureVector *pObjectX = (EarthView::World::Spatial::Download::ModelFeatureVector*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_download_ModelFeatureVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::ModelFeatureVector *pObjectX = (EarthView::World::Spatial::Download::ModelFeatureVector*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_ModelFeatureVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial::Download::ModelFeatureVector& pObjectX = *(EarthView::World::Spatial::Download::ModelFeatureVector*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial::Download::ModelFeature& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_ModelFeatureVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial::Download::ModelFeatureVector *pObjectX = (EarthView::World::Spatial::Download::ModelFeatureVector*) pObjXXXX;
					EarthView::World::Spatial::Download::ModelFeature& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_ModelFeatureVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::ModelFeatureVector *pObjectX = (EarthView::World::Spatial::Download::ModelFeatureVector*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ModelFeatureVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial::Download::ModelFeatureVector *pObjectX = (EarthView::World::Spatial::Download::ModelFeatureVector*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ModelFeatureVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial::Download::ModelFeatureVector *pObjectX = (EarthView::World::Spatial::Download::ModelFeatureVector*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ModelFeatureVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::ModelFeatureVector *pObjectX = (EarthView::World::Spatial::Download::ModelFeatureVector*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_download_Evlasfeature_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::EVlasFeature *pObjectX = (EarthView::World::Spatial::Download::EVlasFeature*) pObjXXXX;
					EVString __values1 = pObjectX->getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_download_Evlasfeature_getValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::EVlasFeature *pObjectX = (EarthView::World::Spatial::Download::EVlasFeature*) pObjXXXX;
					EVString __values1 = pObjectX->getValue();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasfeature_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::Download::EVlasFeature *pObjectX = (EarthView::World::Spatial::Download::EVlasFeature*) pObjXXXX;
					pObjectX->setName(name);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasfeature_setValue_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
					const EVString value = value_ch;
					__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
					#else
					const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
					const EVString value = value_ch;
					__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
					#endif
					EarthView::World::Spatial::Download::EVlasFeature *pObjectX = (EarthView::World::Spatial::Download::EVlasFeature*) pObjXXXX;
					pObjectX->setValue(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasfeaturevector_push_1back_1EVlasFeature(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial::Download::EVlasFeature &t = *(EarthView::World::Spatial::Download::EVlasFeature*) t_j;
					EarthView::World::Spatial::Download::EVLasFeatureVector *pObjectX = (EarthView::World::Spatial::Download::EVLasFeatureVector*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasfeaturevector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::EVLasFeatureVector *pObjectX = (EarthView::World::Spatial::Download::EVLasFeatureVector*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_Evlasfeaturevector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::EVLasFeatureVector *pObjectX = (EarthView::World::Spatial::Download::EVLasFeatureVector*) pObjXXXX;
					EarthView::World::Spatial::Download::EVlasFeature& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_Evlasfeaturevector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::EVLasFeatureVector *pObjectX = (EarthView::World::Spatial::Download::EVLasFeatureVector*) pObjXXXX;
					EarthView::World::Spatial::Download::EVlasFeature& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasfeaturevector_insert_1ev_1uint32_1EVlasFeature(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial::Download::EVlasFeature &t = *(EarthView::World::Spatial::Download::EVlasFeature*) t_j;
					EarthView::World::Spatial::Download::EVLasFeatureVector *pObjectX = (EarthView::World::Spatial::Download::EVLasFeatureVector*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasfeaturevector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial::Download::EVLasFeatureVector *pObjectX = (EarthView::World::Spatial::Download::EVLasFeatureVector*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_download_Evlasfeaturevector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::EVLasFeatureVector *pObjectX = (EarthView::World::Spatial::Download::EVLasFeatureVector*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_Evlasfeaturevector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial::Download::EVLasFeatureVector& pObjectX = *(EarthView::World::Spatial::Download::EVLasFeatureVector*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial::Download::EVlasFeature& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_Evlasfeaturevector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial::Download::EVLasFeatureVector *pObjectX = (EarthView::World::Spatial::Download::EVLasFeatureVector*) pObjXXXX;
					EarthView::World::Spatial::Download::EVlasFeature& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_Evlasfeaturevector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::EVLasFeatureVector *pObjectX = (EarthView::World::Spatial::Download::EVLasFeatureVector*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasfeaturevector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial::Download::EVLasFeatureVector *pObjectX = (EarthView::World::Spatial::Download::EVLasFeatureVector*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasfeaturevector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial::Download::EVLasFeatureVector *pObjectX = (EarthView::World::Spatial::Download::EVLasFeatureVector*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasfeaturevector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::EVLasFeatureVector *pObjectX = (EarthView::World::Spatial::Download::EVLasFeatureVector*) pObjXXXX;
					pObjectX->clear();
				}
			}
		}
	}
}
