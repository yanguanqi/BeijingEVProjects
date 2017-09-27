/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/rainsnow_system.h"
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
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_effect3d_EVPrecipitationStrengthHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						PS_DEFAULT,
						PS_SMALL,
						PS_MIDDLE,
						PS_LARGE,
						PS_STRONG
					};
					jintArray array = __env->NewIntArray(5);
					__env->SetIntArrayRegion(array, 0, 5, enum_values);
					return array;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RainSnowSystem_setType_1EVPrecipitationType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Effect3D::EVPrecipitationType type = (EarthView::World::Spatial::Effect3D::EVPrecipitationType) type_j;
					EarthView::World::Spatial::Effect3D::CRainSnowSystem *pObjectX = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjXXXX;
					pObjectX->setType(type);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_effect3d_RainSnowSystem_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRainSnowSystem *pObjectX = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::EVPrecipitationType __values1 = pObjectX->getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_effect3d_RainSnowSystem_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRainSnowSystem *pObjectX = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjXXXX;
					EVString __values1 = pObjectX->getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RainSnowSystem_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::Effect3D::CRainSnowSystem *pObjectX = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjXXXX;
					pObjectX->setName(name);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_effect3d_RainSnowSystem_getIntensity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRainSnowSystem *pObjectX = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjXXXX;
					Real __values1 = pObjectX->getIntensity();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RainSnowSystem_setIntensity_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble intensity_j)
				{
					const Real intensity = (const Real) intensity_j;
					EarthView::World::Spatial::Effect3D::CRainSnowSystem *pObjectX = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjXXXX;
					pObjectX->setIntensity(intensity);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_effect3d_RainSnowSystem_getMaxVelocity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRainSnowSystem *pObjectX = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjXXXX;
					Real __values1 = pObjectX->getMaxVelocity();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RainSnowSystem_setMaxVelocity_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble maxVelocity_j)
				{
					const Real maxVelocity = (const Real) maxVelocity_j;
					EarthView::World::Spatial::Effect3D::CRainSnowSystem *pObjectX = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjXXXX;
					pObjectX->setMaxVelocity(maxVelocity);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_effect3d_RainSnowSystem_getMinVelocity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRainSnowSystem *pObjectX = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjXXXX;
					Real __values1 = pObjectX->getMinVelocity();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RainSnowSystem_setMinVelocity_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble minVelocity_j)
				{
					const Real minVelocity = (const Real) minVelocity_j;
					EarthView::World::Spatial::Effect3D::CRainSnowSystem *pObjectX = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjXXXX;
					pObjectX->setMinVelocity(minVelocity);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_effect3d_RainSnowSystem_getVelocity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRainSnowSystem *pObjectX = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjXXXX;
					Real __values1 = pObjectX->getVelocity();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RainSnowSystem_setVelocity_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble velocity_j)
				{
					const Real velocity = (const Real) velocity_j;
					EarthView::World::Spatial::Effect3D::CRainSnowSystem *pObjectX = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjXXXX;
					pObjectX->setVelocity(velocity);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_effect3d_RainSnowSystem_getParticleWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRainSnowSystem *pObjectX = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjXXXX;
					Real __values1 = pObjectX->getParticleWidth();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RainSnowSystem_setParticleWidth_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble width_j)
				{
					const Real width = (const Real) width_j;
					EarthView::World::Spatial::Effect3D::CRainSnowSystem *pObjectX = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjXXXX;
					pObjectX->setParticleWidth(width);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_effect3d_RainSnowSystem_getParticleHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRainSnowSystem *pObjectX = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjXXXX;
					Real __values1 = pObjectX->getParticleHeight();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RainSnowSystem_setParticleHeight_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble height_j)
				{
					const Real height = (const Real) height_j;
					EarthView::World::Spatial::Effect3D::CRainSnowSystem *pObjectX = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjXXXX;
					pObjectX->setParticleHeight(height);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_RainSnowSystem_isVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRainSnowSystem *pObjectX = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjXXXX;
					ev_bool __values1 = pObjectX->isVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RainSnowSystem_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::Spatial::Effect3D::CRainSnowSystem *pObjectX = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjXXXX;
					pObjectX->setVisible(visible);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RainSnowSystem_getWorldPosition_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRainSnowSystem *pObjectX = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getWorldPosition();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RainSnowSystem_setWorldPosition_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
					EarthView::World::Spatial::Effect3D::CRainSnowSystem *pObjectX = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjXXXX;
					pObjectX->setWorldPosition(pos);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_RainSnowSystem_getWindSpeed_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRainSnowSystem *pObjectX = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getWindSpeed();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RainSnowSystem_setWindSpeed_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong speed_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &speed = *(EarthView::World::Spatial::Math::CVector3*) speed_j;
					EarthView::World::Spatial::Effect3D::CRainSnowSystem *pObjectX = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjXXXX;
					pObjectX->setWindSpeed(speed);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_effect3d_RainSnowSystem_getHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CRainSnowSystem *pObjectX = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjXXXX;
					Real __values1 = pObjectX->getHeight();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RainSnowSystem_setHeight_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble height_j)
				{
					const Real height = (const Real) height_j;
					EarthView::World::Spatial::Effect3D::CRainSnowSystem *pObjectX = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjXXXX;
					pObjectX->setHeight(height);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RainSnowSystem_update_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cameraPos_j)
				{
					const EarthView::World::Spatial::Math::CVector3 cameraPos = *(EarthView::World::Spatial::Math::CVector3*) cameraPos_j;
					EarthView::World::Spatial::Effect3D::CRainSnowSystem *pObjectX = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjXXXX;
					pObjectX->update(cameraPos);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_RainSnowSystem_destroy_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CRainSnowSystem *pObjectX = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjXXXX;
					pObjectX->destroy();
				}
			}
		}
	}
}
