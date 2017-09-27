/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/realcloudlayer.h"
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
			namespace Effect3D
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RealCloudLayer_createRealCloud_1CRegionAtmosphere(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong region_j)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *region = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) region_j;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjXXXX;
					pObjectX->createRealCloud(region);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RealCloudLayer_destroyRealCloud_1CRegionAtmosphere(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong region_j)
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *region = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) region_j;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjXXXX;
					pObjectX->destroyRealCloud(region);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RealCloudLayer_create_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRealCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjXXXX;
					pObjectX->create();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RealCloudLayer_destroy_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRealCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjXXXX;
					pObjectX->destroy();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RealCloudLayer_copy_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRealCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* __values1 = pObjectX->copy();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RealCloudLayer_setRealCloudMap_1CImage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong img_j)
				{
					const EarthView::World::Graphic::CImage &img = *(EarthView::World::Graphic::CImage*) img_j;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjXXXX;
					pObjectX->setRealCloudMap(img);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RealCloudLayer_setEnable_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					bool enable = (bool) enable_j;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjXXXX;
					pObjectX->setEnable(enable);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RealCloudLayer_setVisible_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
				{
					bool visible = (bool) visible_j;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjXXXX;
					pObjectX->setVisible(visible);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RealCloudLayer_setCloudFlow_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flowable_j)
				{
					bool flowable = (bool) flowable_j;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjXXXX;
					pObjectX->setCloudFlow(flowable);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RealCloudLayer_setRealCloudHeight_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat height_j)
				{
					float height = (float) height_j;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjXXXX;
					pObjectX->setRealCloudHeight(height);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RealCloudLayer_setRealCloudAlpha_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat alpha_j)
				{
					float alpha = (float) alpha_j;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjXXXX;
					pObjectX->setRealCloudAlpha(alpha);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RealCloudLayer_setRegionCloudMapAlpha_1EVString_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jfloat alpha_j)
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
					ev_real32 alpha = (ev_real32) alpha_j;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjXXXX;
					pObjectX->setRegionCloudMapAlpha(name, alpha);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_effect3d_RealCloudLayer_getCloudType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRealCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::EVCloudType __values1 = pObjectX->getCloudType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RealCloudLayer_addRegionCloudMap_1EVString_1CImage_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong img_j, jdouble north_j, jdouble west_j, jdouble south_j, jdouble east_j, jdouble height_j)
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
					const EarthView::World::Graphic::CImage &img = *(EarthView::World::Graphic::CImage*) img_j;
					ev_real64 north = (ev_real64) north_j;
					ev_real64 west = (ev_real64) west_j;
					ev_real64 south = (ev_real64) south_j;
					ev_real64 east = (ev_real64) east_j;
					ev_real64 height = (ev_real64) height_j;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjXXXX;
					pObjectX->addRegionCloudMap(name, img, north, west, south, east, height);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RealCloudLayer_removeRegionCloudMap_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::Effect3D::CRealCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjXXXX;
					pObjectX->removeRegionCloudMap(name);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RealCloudLayer_setRegionCloudMapVisible_1EVString_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean visible_j)
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
					bool visible = (bool) visible_j;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjXXXX;
					pObjectX->setRegionCloudMapVisible(name, visible);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RealCloudLayer_setRegionCloudRotationInfomation_1EVString_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jdouble centerLat_j, jdouble centerLon_j, jdouble rotationAngleVelocity_j, jdouble rotationRegionRadius_j)
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
					ev_real64 centerLat = (ev_real64) centerLat_j;
					ev_real64 centerLon = (ev_real64) centerLon_j;
					ev_real64 rotationAngleVelocity = (ev_real64) rotationAngleVelocity_j;
					ev_real64 rotationRegionRadius = (ev_real64) rotationRegionRadius_j;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjXXXX;
					pObjectX->setRegionCloudRotationInfomation(name, centerLat, centerLon, rotationAngleVelocity, rotationRegionRadius);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RealCloudLayer_enableRotateRegionCloud_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::Effect3D::CRealCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjXXXX;
					pObjectX->enableRotateRegionCloud(name);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RealCloudLayer_disableRotateRegionCloud_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::Effect3D::CRealCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjXXXX;
					pObjectX->disableRotateRegionCloud(name);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RealCloudLayer_getRegionCloudMapVisible_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::Effect3D::CRealCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->getRegionCloudMapVisible(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RealCloudLayer_setWindSpeed_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong speed_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &speed = *(EarthView::World::Spatial::Math::CVector3*) speed_j;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjXXXX;
					pObjectX->setWindSpeed(speed);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RealCloudLayer_enableGetCloudColorFromImage_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjXXXX;
					pObjectX->enableGetCloudColorFromImage(enable);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RealCloudLayer_update_1CCamera_1double(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cam_j, jdouble time_j)
				{
					EarthView::World::Graphic::CCamera *cam = (EarthView::World::Graphic::CCamera*) cam_j;
					double time = (double) time_j;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjXXXX;
					pObjectX->update(cam, time);
				}
			}
		}
	}
}
