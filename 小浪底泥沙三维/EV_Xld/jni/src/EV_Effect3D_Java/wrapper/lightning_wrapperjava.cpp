/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/lightning.h"
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
			namespace Effect3D
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_LightningManager_remove_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CLightningManager *pObjectX = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjXXXX;
					pObjectX->remove();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_LightningManager_update_1Real_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timeElapsed_j, jlong cameraPos_j)
				{
					Real timeElapsed = (Real) timeElapsed_j;
					const EarthView::World::Spatial::Math::CVector3 &cameraPos = *(EarthView::World::Spatial::Math::CVector3*) cameraPos_j;
					EarthView::World::Spatial::Effect3D::CLightningManager *pObjectX = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjXXXX;
					pObjectX->update(timeElapsed, cameraPos);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_LightningManager_setMaxTimeInterval_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble interval_j)
				{
					const Real interval = (const Real) interval_j;
					EarthView::World::Spatial::Effect3D::CLightningManager *pObjectX = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjXXXX;
					pObjectX->setMaxTimeInterval(interval);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_effect3d_LightningManager_getMaxTimeInterval_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CLightningManager *pObjectX = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjXXXX;
					Real __values1 = pObjectX->getMaxTimeInterval();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_effect3d_LightningManager_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CLightningManager *pObjectX = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjXXXX;
					EVString __values1 = pObjectX->getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_LightningManager_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::Effect3D::CLightningManager *pObjectX = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjXXXX;
					pObjectX->setName(name);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_effect3d_LightningManager_getIntensity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CLightningManager *pObjectX = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjXXXX;
					Real __values1 = pObjectX->getIntensity();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_LightningManager_setIntensity_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble intensity_j)
				{
					const Real intensity = (const Real) intensity_j;
					EarthView::World::Spatial::Effect3D::CLightningManager *pObjectX = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjXXXX;
					pObjectX->setIntensity(intensity);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_LightningManager_isVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CLightningManager *pObjectX = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->isVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_LightningManager_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::Spatial::Effect3D::CLightningManager *pObjectX = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjXXXX;
					pObjectX->setVisible(visible);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_effect3d_LightningManager_getMaxHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CLightningManager *pObjectX = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjXXXX;
					Real __values1 = pObjectX->getMaxHeight();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_LightningManager_setMaxHeight_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble height_j)
				{
					const Real height = (const Real) height_j;
					EarthView::World::Spatial::Effect3D::CLightningManager *pObjectX = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjXXXX;
					pObjectX->setMaxHeight(height);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_effect3d_LightningManager_getMinHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CLightningManager *pObjectX = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjXXXX;
					Real __values1 = pObjectX->getMinHeight();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_LightningManager_setMinHeight_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble height_j)
				{
					const Real height = (const Real) height_j;
					EarthView::World::Spatial::Effect3D::CLightningManager *pObjectX = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjXXXX;
					pObjectX->setMinHeight(height);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_effect3d_LightningManager_getMaxLightningCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CLightningManager *pObjectX = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getMaxLightningCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_LightningManager_setMaxLightningCount_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint count_j)
				{
					const ev_int32 count = (const ev_int32) count_j;
					EarthView::World::Spatial::Effect3D::CLightningManager *pObjectX = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjXXXX;
					pObjectX->setMaxLightningCount(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_LightningManager_setReflectable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean reflect_j)
				{
					ev_bool reflect = (ev_bool) reflect_j;
					EarthView::World::Spatial::Effect3D::CLightningManager *pObjectX = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjXXXX;
					pObjectX->setReflectable(reflect);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_LightningManager_setRefractable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean refract_j)
				{
					ev_bool refract = (ev_bool) refract_j;
					EarthView::World::Spatial::Effect3D::CLightningManager *pObjectX = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjXXXX;
					pObjectX->setRefractable(refract);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_LightningManager_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CLightningManager *pObjectX = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjXXXX;
					pObjectX->clear();
				}
			}
		}
	}
}
