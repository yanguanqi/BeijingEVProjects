/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/wind.h"
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
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_effect3d_EVWindDirectionHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						WD_EAST,
						WD_SOUTH,
						WD_WEST,
						WD_NORTH,
						WD_SOUTHEAST,
						WD_NORTHEAST,
						WD_SOUTHWEST,
						WD_NORTHWEST
					};
					jintArray array = __env->NewIntArray(8);
					__env->SetIntArrayRegion(array, 0, 8, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_effect3d_Wind_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CWind *pObjectX = (EarthView::World::Spatial::Effect3D::CWind*) pObjXXXX;
					EVString __values1 = pObjectX->getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_Wind_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::Effect3D::CWind *pObjectX = (EarthView::World::Spatial::Effect3D::CWind*) pObjXXXX;
					pObjectX->setName(name);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_Wind_isWindEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CWind *pObjectX = (EarthView::World::Spatial::Effect3D::CWind*) pObjXXXX;
					ev_bool __values1 = pObjectX->isWindEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_Wind_setWindEnabled_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
				{
					bool enabled = (bool) enabled_j;
					EarthView::World::Spatial::Effect3D::CWind *pObjectX = (EarthView::World::Spatial::Effect3D::CWind*) pObjXXXX;
					pObjectX->setWindEnabled(enabled);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_Wind_getWindSpeed_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CWind *pObjectX = (EarthView::World::Spatial::Effect3D::CWind*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getWindSpeed();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_Wind_setWindSpeed_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong speed_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &speed = *(EarthView::World::Spatial::Math::CVector3*) speed_j;
					EarthView::World::Spatial::Effect3D::CWind *pObjectX = (EarthView::World::Spatial::Effect3D::CWind*) pObjXXXX;
					pObjectX->setWindSpeed(speed);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_Wind_getHeightRange_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CWind *pObjectX = (EarthView::World::Spatial::Effect3D::CWind*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::CHeightRange __values1 = pObjectX->getHeightRange();
					EarthView::World::Spatial::Effect3D::CHeightRange *returnvalues = new EarthView::World::Spatial::Effect3D::CHeightRange(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_Wind_setHeightRange_1CHeightRange(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong height_j)
				{
					EarthView::World::Spatial::Effect3D::CHeightRange height = *(EarthView::World::Spatial::Effect3D::CHeightRange*) height_j;
					EarthView::World::Spatial::Effect3D::CWind *pObjectX = (EarthView::World::Spatial::Effect3D::CWind*) pObjXXXX;
					pObjectX->setHeightRange(height);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_Wind_setWindDirection_1EVWindDirection(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint direction_j)
				{
					EarthView::World::Spatial::Effect3D::EVWindDirection direction = (EarthView::World::Spatial::Effect3D::EVWindDirection) direction_j;
					EarthView::World::Spatial::Effect3D::CWind *pObjectX = (EarthView::World::Spatial::Effect3D::CWind*) pObjXXXX;
					pObjectX->setWindDirection(direction);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_effect3d_Wind_getWindDirection_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CWind *pObjectX = (EarthView::World::Spatial::Effect3D::CWind*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::EVWindDirection __values1 = pObjectX->getWindDirection();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_Wind_setWindVelocity_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble velocity_j)
				{
					const Real velocity = (const Real) velocity_j;
					EarthView::World::Spatial::Effect3D::CWind *pObjectX = (EarthView::World::Spatial::Effect3D::CWind*) pObjXXXX;
					pObjectX->setWindVelocity(velocity);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_effect3d_Wind_getWindVelocity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CWind *pObjectX = (EarthView::World::Spatial::Effect3D::CWind*) pObjXXXX;
					Real __values1 = pObjectX->getWindVelocity();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_Wind_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CWind *pObjectX = (EarthView::World::Spatial::Effect3D::CWind*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::CWind* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
