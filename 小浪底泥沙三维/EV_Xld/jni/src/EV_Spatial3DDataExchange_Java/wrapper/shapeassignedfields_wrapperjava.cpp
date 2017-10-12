/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/shapeassignedfields.h"
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
			namespace DataExchange
			{
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_ScaleField_get_1_1XValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CScaleField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CScaleField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_XValue;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ScaleField_set_1_1XValue_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CScaleField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CScaleField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_XValue = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_ScaleField_get_1_1YValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CScaleField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CScaleField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_YValue;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ScaleField_set_1_1YValue_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CScaleField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CScaleField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_YValue = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_ScaleField_get_1_1ZValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CScaleField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CScaleField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_ZValue;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ScaleField_set_1_1ZValue_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CScaleField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CScaleField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_ZValue = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_ScaleField_get_1_1fieldX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CScaleField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CScaleField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_fieldX;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ScaleField_set_1_1fieldX_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CScaleField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CScaleField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_fieldX = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_ScaleField_get_1_1fieldY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CScaleField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CScaleField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_fieldY;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ScaleField_set_1_1fieldY_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CScaleField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CScaleField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_fieldY = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_ScaleField_get_1_1fieldZ_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CScaleField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CScaleField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_fieldZ;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ScaleField_set_1_1fieldZ_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CScaleField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CScaleField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_fieldZ = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_ScaleField_OperatorAssign_1CScaleField(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rObj_j )
				{
					EarthView::World::Spatial3D::DataExchange::CScaleField& pObjectX = *(EarthView::World::Spatial3D::DataExchange::CScaleField*) pObjXXXX;
					const EarthView::World::Spatial3D::DataExchange::CScaleField &rObj = *(EarthView::World::Spatial3D::DataExchange::CScaleField*) rObj_j;
					pObjectX = rObj;
					EarthView::World::Spatial3D::DataExchange::CScaleField& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_get_1_1XValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_XValue;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_set_1_1XValue_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_XValue = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_get_1_1YValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_YValue;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_set_1_1YValue_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_YValue = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_get_1_1ZValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_ZValue;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_set_1_1ZValue_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_ZValue = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_get_1_1fieldQuaternionX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_fieldQuaternionX;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_set_1_1fieldQuaternionX_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_fieldQuaternionX = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_get_1_1fieldQuaternionY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_fieldQuaternionY;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_set_1_1fieldQuaternionY_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_fieldQuaternionY = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_get_1_1fieldQuaternionZ_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_fieldQuaternionZ;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_set_1_1fieldQuaternionZ_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_fieldQuaternionZ = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_get_1_1fieldQuaternionW_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_fieldQuaternionW;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_set_1_1fieldQuaternionW_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_fieldQuaternionW = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_get_1_1fieldRotationAxisX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_fieldRotationAxisX;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_set_1_1fieldRotationAxisX_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_fieldRotationAxisX = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_get_1_1fieldRotationAxisY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_fieldRotationAxisY;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_set_1_1fieldRotationAxisY_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_fieldRotationAxisY = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_get_1_1fieldRotationAxisZ_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_fieldRotationAxisZ;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_set_1_1fieldRotationAxisZ_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_fieldRotationAxisZ = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_get_1_1fieldRotationVectorX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_fieldRotationVectorX;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_set_1_1fieldRotationVectorX_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_fieldRotationVectorX = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_get_1_1fieldRotationVectorY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_fieldRotationVectorY;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_set_1_1fieldRotationVectorY_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_fieldRotationVectorY = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_get_1_1fieldRotationVectorZ_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_fieldRotationVectorZ;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_set_1_1fieldRotationVectorZ_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_fieldRotationVectorZ = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_get_1_1fieldRotationAngle_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_fieldRotationAngle;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_set_1_1fieldRotationAngle_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_fieldRotationAngle = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_get_1_1RadianOrDegree_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_RadianOrDegree;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_set_1_1RadianOrDegree_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_RadianOrDegree = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_QuationField_OperatorAssign_1CQuationField(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rObj_j )
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField& pObjectX = *(EarthView::World::Spatial3D::DataExchange::CQuationField*) pObjXXXX;
					const EarthView::World::Spatial3D::DataExchange::CQuationField &rObj = *(EarthView::World::Spatial3D::DataExchange::CQuationField*) rObj_j;
					pObjectX = rObj;
					EarthView::World::Spatial3D::DataExchange::CQuationField& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_SkewField_get_1_1skewAxisX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CSkewField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CSkewField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_skewAxisX;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_SkewField_set_1_1skewAxisX_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CSkewField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CSkewField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_skewAxisX = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_SkewField_get_1_1skewAxisY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CSkewField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CSkewField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_skewAxisY;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_SkewField_set_1_1skewAxisY_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CSkewField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CSkewField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_skewAxisY = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_SkewField_get_1_1skewAxisZ_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CSkewField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CSkewField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_skewAxisZ;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_SkewField_set_1_1skewAxisZ_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CSkewField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CSkewField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_skewAxisZ = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_SkewField_get_1_1skewAngle_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CSkewField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CSkewField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_skewAngle;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_SkewField_set_1_1skewAngle_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CSkewField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CSkewField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_skewAngle = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_SkewField_get_1_1RadianOrDegree_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CSkewField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CSkewField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_RadianOrDegree;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_SkewField_set_1_1RadianOrDegree_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CSkewField *pObjectX = (EarthView::World::Spatial3D::DataExchange::CSkewField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_RadianOrDegree = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_SkewField_OperatorAssign_1CSkewField(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rObj_j )
				{
					EarthView::World::Spatial3D::DataExchange::CSkewField& pObjectX = *(EarthView::World::Spatial3D::DataExchange::CSkewField*) pObjXXXX;
					const EarthView::World::Spatial3D::DataExchange::CSkewField &rObj = *(EarthView::World::Spatial3D::DataExchange::CSkewField*) rObj_j;
					pObjectX = rObj;
					EarthView::World::Spatial3D::DataExchange::CSkewField& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeAssignedFields_get_1_1name_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields *pObjectX = (EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->_name;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeAssignedFields_set_1_1name_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields *pObjectX = (EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->_name = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeAssignedFields_get_1_1srsID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields *pObjectX = (EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->_srsID);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeAssignedFields_set_1_1srsID_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields *pObjectX = (EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*)pObjXXXX;
					pObjectX->_srsID = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeAssignedFields_get_1_1isRecursionPath_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields *pObjectX = (EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->_isRecursionPath);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeAssignedFields_set_1_1isRecursionPath_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields *pObjectX = (EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*)pObjXXXX;
					pObjectX->_isRecursionPath = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeAssignedFields_get_1_1scale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields *pObjectX = (EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->_scale);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeAssignedFields_set_1_1scale_1CScaleField(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields *pObjectX = (EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*)pObjXXXX;
					pObjectX->_scale = *(EarthView::World::Spatial3D::DataExchange::CScaleField*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeAssignedFields_get_1_1offset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields *pObjectX = (EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->_offset);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeAssignedFields_set_1_1offset_1CScaleField(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields *pObjectX = (EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*)pObjXXXX;
					pObjectX->_offset = *(EarthView::World::Spatial3D::DataExchange::CScaleField*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeAssignedFields_get_1_1quation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields *pObjectX = (EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->_quation);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeAssignedFields_set_1_1quation_1CQuationField(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields *pObjectX = (EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*)pObjXXXX;
					pObjectX->_quation = *(EarthView::World::Spatial3D::DataExchange::CQuationField*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeAssignedFields_get_1_1skew_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields *pObjectX = (EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->_skew);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeAssignedFields_set_1_1skew_1CSkewField(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields *pObjectX = (EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*)pObjXXXX;
					pObjectX->_skew = *(EarthView::World::Spatial3D::DataExchange::CSkewField*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_ShapeAssignedFields_OperatorAssign_1CShapeAssignedFields(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong robj_j )
				{
					EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields& pObjectX = *(EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*) pObjXXXX;
					const EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields &robj = *(EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*) robj_j;
					pObjectX = robj;
					EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
		}
	}
}
