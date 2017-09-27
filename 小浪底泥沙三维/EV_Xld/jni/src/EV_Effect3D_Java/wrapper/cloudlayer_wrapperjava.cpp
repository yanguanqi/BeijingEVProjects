/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/cloudlayer.h"
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_effect3d_CloudLayer_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjXXXX;
					EVString __values1 = pObjectX->getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_CloudLayer_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::Effect3D::CCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjXXXX;
					pObjectX->setName(name);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_effect3d_CloudLayer_getCloudType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::EVCloudType __values1 = pObjectX->getCloudType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_CloudLayer_setCloudType_1EVCloudType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Effect3D::EVCloudType type = (EarthView::World::Spatial::Effect3D::EVCloudType) type_j;
					EarthView::World::Spatial::Effect3D::CCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjXXXX;
					pObjectX->setCloudType(type);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_CloudLayer_getHeightRange_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::CHeightRange __values1 = pObjectX->getHeightRange();
					EarthView::World::Spatial::Effect3D::CHeightRange *returnvalues = new EarthView::World::Spatial::Effect3D::CHeightRange(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_CloudLayer_setHeightRange_1CHeightRange(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong heightRange_j)
				{
					EarthView::World::Spatial::Effect3D::CHeightRange heightRange = *(EarthView::World::Spatial::Effect3D::CHeightRange*) heightRange_j;
					EarthView::World::Spatial::Effect3D::CCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjXXXX;
					pObjectX->setHeightRange(heightRange);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_CloudLayer_setArea_1CEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong envelope_j)
				{
					EarthView::World::Spatial::Geometry::CEnvelope &envelope = *(EarthView::World::Spatial::Geometry::CEnvelope*) envelope_j;
					EarthView::World::Spatial::Effect3D::CCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjXXXX;
					pObjectX->setArea(envelope);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_CloudLayer_getArea_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CEnvelope __values1 = pObjectX->getArea();
					EarthView::World::Spatial::Geometry::CEnvelope *returnvalues = new EarthView::World::Spatial::Geometry::CEnvelope(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_CloudLayer_setDensity_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble density_j)
				{
					Real density = (Real) density_j;
					EarthView::World::Spatial::Effect3D::CCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjXXXX;
					pObjectX->setDensity(density);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_effect3d_CloudLayer_getDensity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjXXXX;
					Real __values1 = pObjectX->getDensity();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_CloudLayer_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::Spatial::Effect3D::CCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjXXXX;
					pObjectX->setVisible(visible);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_CloudLayer_isVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->isVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_effect3d_CloudLayer_cloudTypeToString_1EVCloudType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Effect3D::EVCloudType type = (EarthView::World::Spatial::Effect3D::EVCloudType) type_j;
					EarthView::World::Spatial::Effect3D::CCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjXXXX;
					EVString __values1 = pObjectX->cloudTypeToString(type);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_effect3d_CloudLayer_stringToCloudType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring type_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* type_ch = (const ev_char*)__env->GetStringUTFChars(type_j,JNI_FALSE);
					const EVString type = type_ch;
					__env->ReleaseStringUTFChars(type_j, (const char *)type_ch);
					#else
					const ev_wchar* type_ch = (const ev_wchar*)__env->GetStringChars(type_j,JNI_FALSE);
					const EVString type = type_ch;
					__env->ReleaseStringChars(type_j, (const jchar *)type_ch);
					#endif
					EarthView::World::Spatial::Effect3D::CCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::EVCloudType __values1 = pObjectX->stringToCloudType(type);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_CloudLayer_getLightningManagersCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjXXXX;
					ev_size_t __values1 = pObjectX->getLightningManagersCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_CloudLayer_getLightningManager_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Spatial::Effect3D::CCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::CLightningManager* __values1 = pObjectX->getLightningManager(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_CloudLayer_clearLightning_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjXXXX;
					pObjectX->clearLightning();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_CloudLayer_createLightningManager_1CHeightRange(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong range_j)
				{
					const EarthView::World::Spatial::Effect3D::CHeightRange &range = *(EarthView::World::Spatial::Effect3D::CHeightRange*) range_j;
					EarthView::World::Spatial::Effect3D::CCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::CLightningManager* __values1 = pObjectX->createLightningManager(range);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_CloudLayer_destroyLightningManager_1CLightningManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lightning_j)
				{
					EarthView::World::Spatial::Effect3D::CLightningManager *lightning = (EarthView::World::Spatial::Effect3D::CLightningManager*) lightning_j;
					EarthView::World::Spatial::Effect3D::CCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjXXXX;
					pObjectX->destroyLightningManager(lightning);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_CloudLayer_updateToRender_1CLightningManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_lightning_j)
				{
					EarthView::World::Spatial::Effect3D::CLightningManager *ref_lightning = (EarthView::World::Spatial::Effect3D::CLightningManager*) ref_lightning_j;
					EarthView::World::Spatial::Effect3D::CCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjXXXX;
					pObjectX->updateToRender(ref_lightning);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_CloudLayer_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::CCloudLayer* __values1 = pObjectX->clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_CloudLayer_setAllowVolumeCloudMove_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bol_j)
				{
					ev_bool bol = (ev_bool) bol_j;
					EarthView::World::Spatial::Effect3D::CCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjXXXX;
					pObjectX->setAllowVolumeCloudMove(bol);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_CloudLayer_getAllowVolumeCloudMove_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->getAllowVolumeCloudMove();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_CloudLayer_getParent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CCloudLayer *pObjectX = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* __values1 = pObjectX->getParent();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
