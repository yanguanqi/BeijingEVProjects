/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geoobject.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_GeoIndex_get_1HardwareBufferNO_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::GeoIndex *pObjectX = (EarthView::World::Spatial::GeoIndex*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->HardwareBufferNO);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoIndex_set_1HardwareBufferNO_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial::GeoIndex *pObjectX = (EarthView::World::Spatial::GeoIndex*)pObjXXXX;
				pObjectX->HardwareBufferNO = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_GeoIndex_get_1HardwareBufferBeginIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::GeoIndex *pObjectX = (EarthView::World::Spatial::GeoIndex*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->HardwareBufferBeginIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoIndex_set_1HardwareBufferBeginIndex_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial::GeoIndex *pObjectX = (EarthView::World::Spatial::GeoIndex*)pObjXXXX;
				pObjectX->HardwareBufferBeginIndex = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_GeoIndex_get_1HardwareBufferEndIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::GeoIndex *pObjectX = (EarthView::World::Spatial::GeoIndex*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->HardwareBufferEndIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoIndex_set_1HardwareBufferEndIndex_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial::GeoIndex *pObjectX = (EarthView::World::Spatial::GeoIndex*)pObjXXXX;
				pObjectX->HardwareBufferEndIndex = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_GeoObject_00024LookAt_get_1LatitudeAttr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CGeoObject::CLookAt *pObjectX = (EarthView::World::Spatial::CGeoObject::CLookAt*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->LatitudeAttr);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoObject_00024LookAt_set_1LatitudeAttr_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial::CGeoObject::CLookAt *pObjectX = (EarthView::World::Spatial::CGeoObject::CLookAt*)pObjXXXX;
				pObjectX->LatitudeAttr = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_GeoObject_00024LookAt_get_1LongitudeAttr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CGeoObject::CLookAt *pObjectX = (EarthView::World::Spatial::CGeoObject::CLookAt*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->LongitudeAttr);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoObject_00024LookAt_set_1LongitudeAttr_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial::CGeoObject::CLookAt *pObjectX = (EarthView::World::Spatial::CGeoObject::CLookAt*)pObjXXXX;
				pObjectX->LongitudeAttr = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_GeoObject_00024LookAt_get_1HeadingAttr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CGeoObject::CLookAt *pObjectX = (EarthView::World::Spatial::CGeoObject::CLookAt*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->HeadingAttr);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoObject_00024LookAt_set_1HeadingAttr_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial::CGeoObject::CLookAt *pObjectX = (EarthView::World::Spatial::CGeoObject::CLookAt*)pObjXXXX;
				pObjectX->HeadingAttr = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_GeoObject_00024LookAt_get_1TiltAttr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CGeoObject::CLookAt *pObjectX = (EarthView::World::Spatial::CGeoObject::CLookAt*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->TiltAttr);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoObject_00024LookAt_set_1TiltAttr_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial::CGeoObject::CLookAt *pObjectX = (EarthView::World::Spatial::CGeoObject::CLookAt*)pObjXXXX;
				pObjectX->TiltAttr = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_GeoObject_00024LookAt_get_1AltitudeAttr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CGeoObject::CLookAt *pObjectX = (EarthView::World::Spatial::CGeoObject::CLookAt*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->AltitudeAttr);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoObject_00024LookAt_set_1AltitudeAttr_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial::CGeoObject::CLookAt *pObjectX = (EarthView::World::Spatial::CGeoObject::CLookAt*)pObjXXXX;
				pObjectX->AltitudeAttr = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_GeoObject_00024LookAt_get_1AltitudeModeAttr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CGeoObject::CLookAt *pObjectX = (EarthView::World::Spatial::CGeoObject::CLookAt*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->AltitudeModeAttr);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoObject_00024LookAt_set_1AltitudeModeAttr_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Spatial::CGeoObject::CLookAt *pObjectX = (EarthView::World::Spatial::CGeoObject::CLookAt*)pObjXXXX;
				pObjectX->AltitudeModeAttr = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_GeoObject_00024LookAt_get_1ModitifAltitudeAttr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CGeoObject::CLookAt *pObjectX = (EarthView::World::Spatial::CGeoObject::CLookAt*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->ModitifAltitudeAttr);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoObject_00024LookAt_set_1ModitifAltitudeAttr_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial::CGeoObject::CLookAt *pObjectX = (EarthView::World::Spatial::CGeoObject::CLookAt*)pObjXXXX;
				pObjectX->ModitifAltitudeAttr = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_GeoObject_00024LookAt_get_1IsDirtyAttr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CGeoObject::CLookAt *pObjectX = (EarthView::World::Spatial::CGeoObject::CLookAt*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->IsDirtyAttr);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoObject_00024LookAt_set_1IsDirtyAttr_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Spatial::CGeoObject::CLookAt *pObjectX = (EarthView::World::Spatial::CGeoObject::CLookAt*)pObjXXXX;
				pObjectX->IsDirtyAttr = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_GeoObject_00024LookAt_get_1RangeAttr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CGeoObject::CLookAt *pObjectX = (EarthView::World::Spatial::CGeoObject::CLookAt*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->RangeAttr);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoObject_00024LookAt_set_1RangeAttr_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial::CGeoObject::CLookAt *pObjectX = (EarthView::World::Spatial::CGeoObject::CLookAt*)pObjXXXX;
				pObjectX->RangeAttr = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_GeoObject_00024LookAt_get_1IsCameraAltComputedAttr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CGeoObject::CLookAt *pObjectX = (EarthView::World::Spatial::CGeoObject::CLookAt*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->IsCameraAltComputedAttr);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoObject_00024LookAt_set_1IsCameraAltComputedAttr_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Spatial::CGeoObject::CLookAt *pObjectX = (EarthView::World::Spatial::CGeoObject::CLookAt*)pObjXXXX;
				pObjectX->IsCameraAltComputedAttr = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_GeoObject_00024LookAt_OperatorEquals_1CLookAt(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkLookAt_j )
			{
				EarthView::World::Spatial::CGeoObject::CLookAt& pObjectX = *(EarthView::World::Spatial::CGeoObject::CLookAt*) pObjXXXX;
				const EarthView::World::Spatial::CGeoObject::CLookAt &rkLookAt = *(EarthView::World::Spatial::CGeoObject::CLookAt*) rkLookAt_j;
				ev_bool __values1 = (pObjectX == rkLookAt);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_GeoObject_00024LookAt_OperatorNotEquals_1CLookAt(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkLookAt_j )
			{
				EarthView::World::Spatial::CGeoObject::CLookAt& pObjectX = *(EarthView::World::Spatial::CGeoObject::CLookAt*) pObjXXXX;
				const EarthView::World::Spatial::CGeoObject::CLookAt &rkLookAt = *(EarthView::World::Spatial::CGeoObject::CLookAt*) rkLookAt_j;
				ev_bool __values1 = (pObjectX != rkLookAt);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_GeoObject_get_1LookAtAttr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CGeoObject *pObjectX = (EarthView::World::Spatial::CGeoObject*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->LookAtAttr);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoObject_set_1LookAtAttr_1CLookAt(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial::CGeoObject *pObjectX = (EarthView::World::Spatial::CGeoObject*)pObjXXXX;
				pObjectX->LookAtAttr = *(EarthView::World::Spatial::CGeoObject::CLookAt*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_GeoObject_getGeometry_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CGeoObject *pObjectX = (EarthView::World::Spatial::CGeoObject*) pObjXXXX;
				EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->getGeometry();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_GeoObject_getSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CGeoObject *pObjectX = (EarthView::World::Spatial::CGeoObject*) pObjXXXX;
				EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getSymbol();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoObject_setGeometry_1IGeometry_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pGeometry_j, jboolean bResetGeoIndex_j)
			{
				EarthView::World::Spatial::Geometry::IGeometry *ref_pGeometry = (EarthView::World::Spatial::Geometry::IGeometry*) ref_pGeometry_j;
				ev_bool bResetGeoIndex = (ev_bool) bResetGeoIndex_j;
				EarthView::World::Spatial::CGeoObject *pObjectX = (EarthView::World::Spatial::CGeoObject*) pObjXXXX;
				pObjectX->setGeometry(ref_pGeometry, bResetGeoIndex);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoObject_setGeometry_1IGeometry_1ev_1bool_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pGeometry_j, jboolean bResetGeoIndex_j, jboolean bClone_j)
			{
				EarthView::World::Spatial::Geometry::IGeometry *ref_pGeometry = (EarthView::World::Spatial::Geometry::IGeometry*) ref_pGeometry_j;
				ev_bool bResetGeoIndex = (ev_bool) bResetGeoIndex_j;
				bool bClone = (bool) bClone_j;
				EarthView::World::Spatial::CGeoObject *pObjectX = (EarthView::World::Spatial::CGeoObject*) pObjXXXX;
				pObjectX->setGeometry(ref_pGeometry, bResetGeoIndex, bClone);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoObject_setSymbol_1ISymbol_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pSymbol_j, jboolean bResetGeoIndex_j)
			{
				EarthView::World::Spatial::Display::ISymbol *ref_pSymbol = (EarthView::World::Spatial::Display::ISymbol*) ref_pSymbol_j;
				ev_bool bResetGeoIndex = (ev_bool) bResetGeoIndex_j;
				EarthView::World::Spatial::CGeoObject *pObjectX = (EarthView::World::Spatial::CGeoObject*) pObjXXXX;
				pObjectX->setSymbol(ref_pSymbol, bResetGeoIndex);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoObject_setSymbol_1ISymbol_1ev_1bool_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pSymbol_j, jboolean bResetGeoIndex_j, jboolean bClone_j)
			{
				EarthView::World::Spatial::Display::ISymbol *ref_pSymbol = (EarthView::World::Spatial::Display::ISymbol*) ref_pSymbol_j;
				ev_bool bResetGeoIndex = (ev_bool) bResetGeoIndex_j;
				bool bClone = (bool) bClone_j;
				EarthView::World::Spatial::CGeoObject *pObjectX = (EarthView::World::Spatial::CGeoObject*) pObjXXXX;
				pObjectX->setSymbol(ref_pSymbol, bResetGeoIndex, bClone);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_GeoObject_getGeoIndexCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CGeoObject *pObjectX = (EarthView::World::Spatial::CGeoObject*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getGeoIndexCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoObject_addGeoIndex_1GeoIndex(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geoIndex_j)
			{
				const EarthView::World::Spatial::GeoIndex &geoIndex = *(EarthView::World::Spatial::GeoIndex*) geoIndex_j;
				EarthView::World::Spatial::CGeoObject *pObjectX = (EarthView::World::Spatial::CGeoObject*) pObjXXXX;
				pObjectX->addGeoIndex(geoIndex);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_GeoObject_removeGeoIndex_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Spatial::CGeoObject *pObjectX = (EarthView::World::Spatial::CGeoObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->removeGeoIndex(index);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_GeoObject_getGeoIndex_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CGeoObject *pObjectX = (EarthView::World::Spatial::CGeoObject*) pObjXXXX;
				const EarthView::World::Spatial::GeoIndex& __values1 = pObjectX->getGeoIndex(index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_GeoObject_setGeoIndex_1ev_1uint32_1GeoIndex(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong geoIndex_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const EarthView::World::Spatial::GeoIndex &geoIndex = *(EarthView::World::Spatial::GeoIndex*) geoIndex_j;
				EarthView::World::Spatial::CGeoObject *pObjectX = (EarthView::World::Spatial::CGeoObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->setGeoIndex(index, geoIndex);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoObject_clearGeoIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CGeoObject *pObjectX = (EarthView::World::Spatial::CGeoObject*) pObjXXXX;
				pObjectX->clearGeoIndex();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoObject_addProperty_1EVString_1CVariant(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				const EarthView::World::Core::CVariant &val = *(EarthView::World::Core::CVariant*) val_j;
				EarthView::World::Spatial::CGeoObject *pObjectX = (EarthView::World::Spatial::CGeoObject*) pObjXXXX;
				pObjectX->addProperty(key, val);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_GeoObject_getProperty_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Spatial::CGeoObject *pObjectX = (EarthView::World::Spatial::CGeoObject*) pObjXXXX;
				const EarthView::World::Core::CVariant& __values1 = pObjectX->getProperty(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_GeoObject_getProperty_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Spatial::CGeoObject *pObjectX = (EarthView::World::Spatial::CGeoObject*) pObjXXXX;
				const EarthView::World::Core::CVariant& __values1 = pObjectX->getProperty(index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_GeoObject_removeProperty_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Spatial::CGeoObject *pObjectX = (EarthView::World::Spatial::CGeoObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->removeProperty(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_GeoObject_removeProperty_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Spatial::CGeoObject *pObjectX = (EarthView::World::Spatial::CGeoObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->removeProperty(index);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoObject_clearPropertys_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CGeoObject *pObjectX = (EarthView::World::Spatial::CGeoObject*) pObjXXXX;
				pObjectX->clearPropertys();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_GeoObject_getPropertyCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CGeoObject *pObjectX = (EarthView::World::Spatial::CGeoObject*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getPropertyCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_GeoObject_getID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CGeoObject *pObjectX = (EarthView::World::Spatial::CGeoObject*) pObjXXXX;
				const EVString& __values1 = pObjectX->getID();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoObject_setID_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring id_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* id_ch = (const ev_char*)__env->GetStringUTFChars(id_j,JNI_FALSE);
				const EVString id = id_ch;
				__env->ReleaseStringUTFChars(id_j, (const char *)id_ch);
				#else
				const ev_wchar* id_ch = (const ev_wchar*)__env->GetStringChars(id_j,JNI_FALSE);
				const EVString id = id_ch;
				__env->ReleaseStringChars(id_j, (const jchar *)id_ch);
				#endif
				EarthView::World::Spatial::CGeoObject *pObjectX = (EarthView::World::Spatial::CGeoObject*) pObjXXXX;
				pObjectX->setID(id);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_GeoObject_getIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CGeoObject *pObjectX = (EarthView::World::Spatial::CGeoObject*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getIndex();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoObject_setIndex_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_int32 index = (ev_int32) index_j;
				EarthView::World::Spatial::CGeoObject *pObjectX = (EarthView::World::Spatial::CGeoObject*) pObjXXXX;
				pObjectX->setIndex(index);
			}
		}
	}
}
