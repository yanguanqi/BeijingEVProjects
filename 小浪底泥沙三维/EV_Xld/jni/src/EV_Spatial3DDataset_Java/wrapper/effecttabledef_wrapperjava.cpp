/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/effecttabledef.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstance_getId_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstance *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getId();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstance_setId_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
				{
					ev_uint32 val = (ev_uint32) val_j;
					EarthView::World::Spatial3D::Dataset::CEffectInstance *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjXXXX;
					pObjectX->setId(val);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstance_getEffectId_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstance *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getEffectId();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstance_setEffectId_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
				{
					ev_uint32 val = (ev_uint32) val_j;
					EarthView::World::Spatial3D::Dataset::CEffectInstance *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjXXXX;
					pObjectX->setEffectId(val);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstance_getPos_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstance *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getPos();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstance_setPos_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
				{
					EarthView::World::Spatial::Math::CVector3 val = *(EarthView::World::Spatial::Math::CVector3*) val_j;
					EarthView::World::Spatial3D::Dataset::CEffectInstance *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjXXXX;
					pObjectX->setPos(val);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstance_getScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstance *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getScale();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstance_setScale_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
				{
					EarthView::World::Spatial::Math::CVector3 val = *(EarthView::World::Spatial::Math::CVector3*) val_j;
					EarthView::World::Spatial3D::Dataset::CEffectInstance *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjXXXX;
					pObjectX->setScale(val);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstance_getRotate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstance *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjXXXX;
					EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->getRotate();
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstance_setRotate_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
				{
					EarthView::World::Spatial::Math::CQuaternion val = *(EarthView::World::Spatial::Math::CQuaternion*) val_j;
					EarthView::World::Spatial3D::Dataset::CEffectInstance *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjXXXX;
					pObjectX->setRotate(val);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstance_getAltMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstance *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjXXXX;
					EarthView::World::Spatial::Utility::EVAltitudeMode __values1 = pObjectX->getAltMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstance_setAltMode_1EVAltitudeMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
				{
					EarthView::World::Spatial::Utility::EVAltitudeMode mode = (EarthView::World::Spatial::Utility::EVAltitudeMode) mode_j;
					EarthView::World::Spatial3D::Dataset::CEffectInstance *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjXXXX;
					pObjectX->setAltMode(mode);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstance_getAltValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstance *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getAltValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstance_setAltValue_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble altValue_j)
				{
					ev_real64 altValue = (ev_real64) altValue_j;
					EarthView::World::Spatial3D::Dataset::CEffectInstance *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjXXXX;
					pObjectX->setAltValue(altValue);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstanceVector_push_1back_1CEffectInstance(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstance &t = *(EarthView::World::Spatial3D::Dataset::CEffectInstance*) t_j;
					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInstanceVector*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstanceVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInstanceVector*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstanceVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInstanceVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectInstance& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstanceVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInstanceVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectInstance& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstanceVector_insert_1ev_1uint32_1CEffectInstance(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::Dataset::CEffectInstance &t = *(EarthView::World::Spatial3D::Dataset::CEffectInstance*) t_j;
					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInstanceVector*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstanceVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInstanceVector*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstanceVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInstanceVector*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstanceVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector& pObjectX = *(EarthView::World::Spatial3D::Dataset::CEffectInstanceVector*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Dataset::CEffectInstance& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstanceVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInstanceVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectInstance& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstanceVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInstanceVector*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstanceVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInstanceVector*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstanceVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInstanceVector*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectInstanceVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectInstanceVector*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataset_EffectUserTypeInfo_getUserType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo*) pObjXXXX;
					EVString __values1 = pObjectX->getUserType();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectUserTypeInfo_setUserType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring val_j)
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
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo*) pObjXXXX;
					pObjectX->setUserType(val);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataset_EffectUserTypeInfo_getUserTypeName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo*) pObjXXXX;
					EVString __values1 = pObjectX->getUserTypeName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectUserTypeInfo_setUserTypeName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring val_j)
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
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo*) pObjXXXX;
					pObjectX->setUserTypeName(val);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataset_EffectUserTypeInfo_getUserTypeDesc_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo*) pObjXXXX;
					EVString __values1 = pObjectX->getUserTypeDesc();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectUserTypeInfo_setUserTypeDesc_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring val_j)
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
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo*) pObjXXXX;
					pObjectX->setUserTypeDesc(val);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectUserTypeInfoVector_push_1back_1CEffectUserTypeInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo &t = *(EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo*) t_j;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectUserTypeInfoVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectUserTypeInfoVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectUserTypeInfoVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectUserTypeInfoVector_insert_1ev_1uint32_1CEffectUserTypeInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo &t = *(EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo*) t_j;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectUserTypeInfoVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_EffectUserTypeInfoVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectUserTypeInfoVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector& pObjectX = *(EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectUserTypeInfoVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectUserTypeInfoVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectUserTypeInfoVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectUserTypeInfoVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectUserTypeInfoVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectRefInfo_getEffectRefID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectRefInfo*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getEffectRefID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectRefInfo_setEffectRefID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
				{
					ev_uint32 val = (ev_uint32) val_j;
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectRefInfo*) pObjXXXX;
					pObjectX->setEffectRefID(val);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectRefInfo_getEffectID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectRefInfo*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getEffectID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectRefInfo_setEffectID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
				{
					ev_uint32 val = (ev_uint32) val_j;
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectRefInfo*) pObjXXXX;
					pObjectX->setEffectID(val);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectRefInfo_getResourceID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectRefInfo*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getResourceID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectRefInfo_setResourceID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
				{
					ev_uint32 val = (ev_uint32) val_j;
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectRefInfo*) pObjXXXX;
					pObjectX->setResourceID(val);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectRefInfoVector_push_1back_1CEffectRefInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo &t = *(EarthView::World::Spatial3D::Dataset::CEffectRefInfo*) t_j;
					EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectRefInfoVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectRefInfoVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectRefInfoVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectRefInfoVector_insert_1ev_1uint32_1CEffectRefInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo &t = *(EarthView::World::Spatial3D::Dataset::CEffectRefInfo*) t_j;
					EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectRefInfoVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_EffectRefInfoVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectRefInfoVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector& pObjectX = *(EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectRefInfoVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectRefInfoVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectRefInfoVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectRefInfoVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectRefInfoVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectResourceInfo_setResourceID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong resourceID_j)
				{
					ev_uint32 resourceID = (ev_uint32) resourceID_j;
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfo*) pObjXXXX;
					pObjectX->setResourceID(resourceID);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectResourceInfo_getResourceID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfo*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getResourceID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectResourceInfo_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfo*) pObjXXXX;
					pObjectX->setName(name);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataset_EffectResourceInfo_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfo*) pObjXXXX;
					EVString __values1 = pObjectX->getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectResourceInfo_setResourceType_1MaterialResourceType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial3D::Dataset::MaterialResourceType type = (EarthView::World::Spatial3D::Dataset::MaterialResourceType) type_j;
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfo*) pObjXXXX;
					pObjectX->setResourceType(type);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataset_EffectResourceInfo_getResourceType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfo*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::MaterialResourceType __values1 = pObjectX->getResourceType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectResourceInfo_setResourceData_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
				{
					EarthView::World::Core::MemoryDataStreamPtr val = *(EarthView::World::Core::MemoryDataStreamPtr*) val_j;
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfo*) pObjXXXX;
					pObjectX->setResourceData(val);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectResourceInfo_getResourceData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfo*) pObjXXXX;
					EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->getResourceData();
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectResourceInfoVector_push_1back_1CEffectResourceInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo &t = *(EarthView::World::Spatial3D::Dataset::CEffectResourceInfo*) t_j;
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectResourceInfoVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectResourceInfoVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectResourceInfoVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectResourceInfoVector_insert_1ev_1uint32_1CEffectResourceInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo &t = *(EarthView::World::Spatial3D::Dataset::CEffectResourceInfo*) t_j;
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectResourceInfoVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_EffectResourceInfoVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectResourceInfoVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector& pObjectX = *(EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectResourceInfoVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectResourceInfoVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectResourceInfoVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectResourceInfoVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectResourceInfoVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectFeatureVector_push_1back_1CEffectFeature(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeature *&t = *(EarthView::World::Spatial3D::Dataset::CEffectFeature**) t_j;
					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectFeatureVector*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectFeatureVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectFeatureVector*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectFeatureVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectFeatureVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectFeature*& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectFeatureVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectFeatureVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectFeature*& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectFeatureVector_insert_1ev_1uint32_1CEffectFeature(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::Dataset::CEffectFeature *&t = *(EarthView::World::Spatial3D::Dataset::CEffectFeature**) t_j;
					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectFeatureVector*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectFeatureVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectFeatureVector*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_EffectFeatureVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectFeatureVector*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectFeatureVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector& pObjectX = *(EarthView::World::Spatial3D::Dataset::CEffectFeatureVector*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Dataset::CEffectFeature*& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectFeatureVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectFeatureVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectFeature*& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EffectFeatureVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectFeatureVector*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectFeatureVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectFeatureVector*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectFeatureVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectFeatureVector*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EffectFeatureVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector *pObjectX = (EarthView::World::Spatial3D::Dataset::CEffectFeatureVector*) pObjXXXX;
					pObjectX->clear();
				}
			}
		}
	}
}
