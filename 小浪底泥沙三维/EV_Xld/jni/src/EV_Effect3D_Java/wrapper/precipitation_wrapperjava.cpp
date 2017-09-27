/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/precipitation.h"
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
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_effect3d_EVPrecipitationTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						PT_DRIZZLE,
						PT_RAIN,
						PT_SNOW,
						PT_SNOWGRAINS,
						PT_ICECRYSTALS,
						PT_ICEPELLETS,
						PT_HAIL,
						PT_SMALLHAIL,
						PT_NONE
					};
					jintArray array = __env->NewIntArray(9);
					__env->SetIntArrayRegion(array, 0, 9, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_effect3d_Precipitation_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CPrecipitation *pObjectX = (EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjXXXX;
					EVString __values1 = pObjectX->getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_Precipitation_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::Effect3D::CPrecipitation *pObjectX = (EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjXXXX;
					pObjectX->setName(name);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_Precipitation_setPresetType_1EVPrecipitationType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Effect3D::EVPrecipitationType type = (EarthView::World::Spatial::Effect3D::EVPrecipitationType) type_j;
					EarthView::World::Spatial::Effect3D::CPrecipitation *pObjectX = (EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjXXXX;
					pObjectX->setPresetType(type);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_effect3d_Precipitation_getPresetType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CPrecipitation *pObjectX = (EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::EVPrecipitationType __values1 = pObjectX->getPresetType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_Precipitation_setSpeed_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					Real value = (Real) value_j;
					EarthView::World::Spatial::Effect3D::CPrecipitation *pObjectX = (EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjXXXX;
					pObjectX->setSpeed(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_effect3d_Precipitation_getSpeed_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CPrecipitation *pObjectX = (EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjXXXX;
					Real __values1 = pObjectX->getSpeed();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_Precipitation_setIntensity_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					Real value = (Real) value_j;
					EarthView::World::Spatial::Effect3D::CPrecipitation *pObjectX = (EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjXXXX;
					pObjectX->setIntensity(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_effect3d_Precipitation_getIntensity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CPrecipitation *pObjectX = (EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjXXXX;
					Real __values1 = pObjectX->getIntensity();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_Precipitation_setFallingHeight_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble height_j)
				{
					Real height = (Real) height_j;
					EarthView::World::Spatial::Effect3D::CPrecipitation *pObjectX = (EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjXXXX;
					pObjectX->setFallingHeight(height);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_effect3d_Precipitation_getFallingHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CPrecipitation *pObjectX = (EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjXXXX;
					Real __values1 = pObjectX->getFallingHeight();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_Precipitation_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::Spatial::Effect3D::CPrecipitation *pObjectX = (EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjXXXX;
					pObjectX->setVisible(visible);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_Precipitation_isVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CPrecipitation *pObjectX = (EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjXXXX;
					ev_bool __values1 = pObjectX->isVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_Precipitation_OperatorEquals_1CPrecipitation(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Spatial::Effect3D::CPrecipitation& pObjectX = *(EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjXXXX;
					const EarthView::World::Spatial::Effect3D::CPrecipitation &other = *(EarthView::World::Spatial::Effect3D::CPrecipitation*) other_j;
					ev_bool __values1 = (pObjectX == other);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_Precipitation_OperatorNotEquals_1CPrecipitation(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Spatial::Effect3D::CPrecipitation& pObjectX = *(EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjXXXX;
					const EarthView::World::Spatial::Effect3D::CPrecipitation &other = *(EarthView::World::Spatial::Effect3D::CPrecipitation*) other_j;
					ev_bool __values1 = (pObjectX != other);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_effect3d_Precipitation_EVPrecipitationTypeToString_1EVPrecipitationType(JNIEnv *__env , jclass __clazz, jint type_j)
				{
					EarthView::World::Spatial::Effect3D::EVPrecipitationType type = (EarthView::World::Spatial::Effect3D::EVPrecipitationType) type_j;
					EVString __values1 = EarthView::World::Spatial::Effect3D::CPrecipitation::EVPrecipitationTypeToString(type);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_effect3d_Precipitation_EVPrecipitationTypeToStringCHS_1EVPrecipitationType(JNIEnv *__env , jclass __clazz, jint type_j)
				{
					EarthView::World::Spatial::Effect3D::EVPrecipitationType type = (EarthView::World::Spatial::Effect3D::EVPrecipitationType) type_j;
					EVString __values1 = EarthView::World::Spatial::Effect3D::CPrecipitation::EVPrecipitationTypeToStringCHS(type);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_effect3d_Precipitation_StringtoEVPrecipitationType_1EVString(JNIEnv *__env , jclass __clazz, jstring type_j)
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
					EarthView::World::Spatial::Effect3D::EVPrecipitationType __values1 = EarthView::World::Spatial::Effect3D::CPrecipitation::StringtoEVPrecipitationType(type);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_effect3d_Precipitation_StringtoEVPrecipitationTypeCHS_1EVString(JNIEnv *__env , jclass __clazz, jstring type_j)
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
					EarthView::World::Spatial::Effect3D::EVPrecipitationType __values1 = EarthView::World::Spatial::Effect3D::CPrecipitation::StringtoEVPrecipitationTypeCHS(type);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
		}
	}
}
