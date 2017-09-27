/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/industrygraphic/multitexturepoint3d.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_MultiTexturePoint3d_addPoint3d_1EVString_1CVector3_1CDegree_1EVString_1float_1bool_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring ptName_j, jlong worldPos_j, jlong heading_j, jstring iconPath_j, jfloat size_j, jboolean faceToCamera_j, jboolean showAsPixel_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* ptName_ch = (const ev_char*)__env->GetStringUTFChars(ptName_j,JNI_FALSE);
				const EVString ptName = ptName_ch;
				__env->ReleaseStringUTFChars(ptName_j, (const char *)ptName_ch);
				#else
				const ev_wchar* ptName_ch = (const ev_wchar*)__env->GetStringChars(ptName_j,JNI_FALSE);
				const EVString ptName = ptName_ch;
				__env->ReleaseStringChars(ptName_j, (const jchar *)ptName_ch);
				#endif
				const EarthView::World::Spatial::Math::CVector3 &worldPos = *(EarthView::World::Spatial::Math::CVector3*) worldPos_j;
				const EarthView::World::Spatial::Math::CDegree &heading = *(EarthView::World::Spatial::Math::CDegree*) heading_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* iconPath_ch = (const ev_char*)__env->GetStringUTFChars(iconPath_j,JNI_FALSE);
				const EVString iconPath = iconPath_ch;
				__env->ReleaseStringUTFChars(iconPath_j, (const char *)iconPath_ch);
				#else
				const ev_wchar* iconPath_ch = (const ev_wchar*)__env->GetStringChars(iconPath_j,JNI_FALSE);
				const EVString iconPath = iconPath_ch;
				__env->ReleaseStringChars(iconPath_j, (const jchar *)iconPath_ch);
				#endif
				const float size = (const float) size_j;
				const bool faceToCamera = (const bool) faceToCamera_j;
				const bool showAsPixel = (const bool) showAsPixel_j;
				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjXXXX;
				pObjectX->addPoint3d(ptName, worldPos, heading, iconPath, size, faceToCamera, showAsPixel);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_MultiTexturePoint3d_removePoint3d_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring ptName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* ptName_ch = (const ev_char*)__env->GetStringUTFChars(ptName_j,JNI_FALSE);
				const EVString ptName = ptName_ch;
				__env->ReleaseStringUTFChars(ptName_j, (const char *)ptName_ch);
				#else
				const ev_wchar* ptName_ch = (const ev_wchar*)__env->GetStringChars(ptName_j,JNI_FALSE);
				const EVString ptName = ptName_ch;
				__env->ReleaseStringChars(ptName_j, (const jchar *)ptName_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjXXXX;
				pObjectX->removePoint3d(ptName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_MultiTexturePoint3d_setVisible_1EVString_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring ptName_j, jboolean value_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* ptName_ch = (const ev_char*)__env->GetStringUTFChars(ptName_j,JNI_FALSE);
				const EVString ptName = ptName_ch;
				__env->ReleaseStringUTFChars(ptName_j, (const char *)ptName_ch);
				#else
				const ev_wchar* ptName_ch = (const ev_wchar*)__env->GetStringChars(ptName_j,JNI_FALSE);
				const EVString ptName = ptName_ch;
				__env->ReleaseStringChars(ptName_j, (const jchar *)ptName_ch);
				#endif
				const bool value = (const bool) value_j;
				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjXXXX;
				pObjectX->setVisible(ptName, value);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_MultiTexturePoint3d_getVisible_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring ptName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* ptName_ch = (const ev_char*)__env->GetStringUTFChars(ptName_j,JNI_FALSE);
				const EVString ptName = ptName_ch;
				__env->ReleaseStringUTFChars(ptName_j, (const char *)ptName_ch);
				#else
				const ev_wchar* ptName_ch = (const ev_wchar*)__env->GetStringChars(ptName_j,JNI_FALSE);
				const EVString ptName = ptName_ch;
				__env->ReleaseStringChars(ptName_j, (const jchar *)ptName_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjXXXX;
				bool __values1 = pObjectX->getVisible(ptName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_MultiTexturePoint3d_setStatus_1EVString_1CVector3_1CDegree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring ptName_j, jlong worldPos_j, jlong heading_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* ptName_ch = (const ev_char*)__env->GetStringUTFChars(ptName_j,JNI_FALSE);
				const EVString ptName = ptName_ch;
				__env->ReleaseStringUTFChars(ptName_j, (const char *)ptName_ch);
				#else
				const ev_wchar* ptName_ch = (const ev_wchar*)__env->GetStringChars(ptName_j,JNI_FALSE);
				const EVString ptName = ptName_ch;
				__env->ReleaseStringChars(ptName_j, (const jchar *)ptName_ch);
				#endif
				const EarthView::World::Spatial::Math::CVector3 &worldPos = *(EarthView::World::Spatial::Math::CVector3*) worldPos_j;
				const EarthView::World::Spatial::Math::CDegree &heading = *(EarthView::World::Spatial::Math::CDegree*) heading_j;
				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjXXXX;
				pObjectX->setStatus(ptName, worldPos, heading);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_industryengine_industrygraphic_MultiTexturePoint3d_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjXXXX;
				EVString __values1 = pObjectX->getName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_industryengine_industrygraphic_MultiTexturePoint3d_getPtIconPath_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring ptName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* ptName_ch = (const ev_char*)__env->GetStringUTFChars(ptName_j,JNI_FALSE);
				const EVString ptName = ptName_ch;
				__env->ReleaseStringUTFChars(ptName_j, (const char *)ptName_ch);
				#else
				const ev_wchar* ptName_ch = (const ev_wchar*)__env->GetStringChars(ptName_j,JNI_FALSE);
				const EVString ptName = ptName_ch;
				__env->ReleaseStringChars(ptName_j, (const jchar *)ptName_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjXXXX;
				EVString __values1 = pObjectX->getPtIconPath(ptName);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_MultiTexturePoint3d_attachToScene_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjXXXX;
				pObjectX->attachToScene();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_MultiTexturePoint3d_removeAll_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjXXXX;
				pObjectX->removeAll();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_MultiTexturePoint3d_setMaxVisibleDistance_1EVString_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring ptName_j, jdouble value_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* ptName_ch = (const ev_char*)__env->GetStringUTFChars(ptName_j,JNI_FALSE);
				const EVString ptName = ptName_ch;
				__env->ReleaseStringUTFChars(ptName_j, (const char *)ptName_ch);
				#else
				const ev_wchar* ptName_ch = (const ev_wchar*)__env->GetStringChars(ptName_j,JNI_FALSE);
				const EVString ptName = ptName_ch;
				__env->ReleaseStringChars(ptName_j, (const jchar *)ptName_ch);
				#endif
				const Real value = (const Real) value_j;
				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjXXXX;
				pObjectX->setMaxVisibleDistance(ptName, value);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_MultiTexturePoint3d_setMinVisibleDistance_1EVString_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring ptName_j, jdouble value_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* ptName_ch = (const ev_char*)__env->GetStringUTFChars(ptName_j,JNI_FALSE);
				const EVString ptName = ptName_ch;
				__env->ReleaseStringUTFChars(ptName_j, (const char *)ptName_ch);
				#else
				const ev_wchar* ptName_ch = (const ev_wchar*)__env->GetStringChars(ptName_j,JNI_FALSE);
				const EVString ptName = ptName_ch;
				__env->ReleaseStringChars(ptName_j, (const jchar *)ptName_ch);
				#endif
				const Real value = (const Real) value_j;
				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjXXXX;
				pObjectX->setMinVisibleDistance(ptName, value);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_industrygraphic_MultiTexturePoint3d_getMaxVisibleDistance_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring ptName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* ptName_ch = (const ev_char*)__env->GetStringUTFChars(ptName_j,JNI_FALSE);
				const EVString ptName = ptName_ch;
				__env->ReleaseStringUTFChars(ptName_j, (const char *)ptName_ch);
				#else
				const ev_wchar* ptName_ch = (const ev_wchar*)__env->GetStringChars(ptName_j,JNI_FALSE);
				const EVString ptName = ptName_ch;
				__env->ReleaseStringChars(ptName_j, (const jchar *)ptName_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjXXXX;
				Real __values1 = pObjectX->getMaxVisibleDistance(ptName);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_industrygraphic_MultiTexturePoint3d_getMinVisibleDistance_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring ptName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* ptName_ch = (const ev_char*)__env->GetStringUTFChars(ptName_j,JNI_FALSE);
				const EVString ptName = ptName_ch;
				__env->ReleaseStringUTFChars(ptName_j, (const char *)ptName_ch);
				#else
				const ev_wchar* ptName_ch = (const ev_wchar*)__env->GetStringChars(ptName_j,JNI_FALSE);
				const EVString ptName = ptName_ch;
				__env->ReleaseStringChars(ptName_j, (const jchar *)ptName_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjXXXX;
				Real __values1 = pObjectX->getMinVisibleDistance(ptName);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_MultiTexturePoint3d_setSize_1EVString_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring ptName_j, jfloat value_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* ptName_ch = (const ev_char*)__env->GetStringUTFChars(ptName_j,JNI_FALSE);
				const EVString ptName = ptName_ch;
				__env->ReleaseStringUTFChars(ptName_j, (const char *)ptName_ch);
				#else
				const ev_wchar* ptName_ch = (const ev_wchar*)__env->GetStringChars(ptName_j,JNI_FALSE);
				const EVString ptName = ptName_ch;
				__env->ReleaseStringChars(ptName_j, (const jchar *)ptName_ch);
				#endif
				const float value = (const float) value_j;
				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjXXXX;
				pObjectX->setSize(ptName, value);
			}
		}
	}
}
