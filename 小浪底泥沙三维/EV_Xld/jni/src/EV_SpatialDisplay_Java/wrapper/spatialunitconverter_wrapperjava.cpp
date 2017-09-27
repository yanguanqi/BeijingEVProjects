/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdisplay/spatialunitconverter.h"
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
			namespace Display
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_display_LengthUnitTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						LUT_KILOMETERS,
						LUT_METERS,
						LUT_DECIMETERS,
						LUT_CENTIMETERS,
						LUT_MILLIMETER,
						LUT_LI,
						LUT_ZHANG,
						LUT_CHI,
						LUT_CUN,
						LUT_FEET,
						LUT_INCHES,
						LUT_YARDS,
						LUT_MILES,
						LUT_NAUTICALMILES,
						LUT_DECIMALDEGREES,
						LUT_POINTS,
						LUT_UNKNOWN
					};
					jintArray array = __env->NewIntArray(17);
					__env->SetIntArrayRegion(array, 0, 17, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_display_AreaUnitTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						AUT_SQUARE_KILOMETERS,
						AUT_SQUARE_METERS,
						AUT_SQUARE_DECIMETERS,
						AUT_SQUARE_CENTIMETERS,
						AUT_SQUARE_MILLIMETER,
						AUT_HECTARE,
						AUT_ARE,
						AUT_QING,
						AUT_MU,
						AUT_SQUARE_ZHANG,
						AUT_SQUARE_CHI,
						AUT_SQUARE_CUN,
						AUT_ACRE,
						AUT_SQUARE_MILES,
						AUT_SQUARE_FEET,
						AUT_SQUARE_INCHES,
						AUT_SQUARE_YARDS,
						AUT_UNKNOWN
					};
					jintArray array = __env->NewIntArray(18);
					__env->SetIntArrayRegion(array, 0, 18, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_SpatialUnitConverter_otherLengthUnitTokm_1ev_1real64_1EVMapUnits(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble defaultUnitValue_j, jint mapUnit_j)
				{
					ev_real64 defaultUnitValue = (ev_real64) defaultUnitValue_j;
					EarthView::World::Spatial::Atlas::EVMapUnits mapUnit = (EarthView::World::Spatial::Atlas::EVMapUnits) mapUnit_j;
					EarthView::World::Spatial::Display::CSpatialUnitConverter *pObjectX = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjXXXX;
					ev_real64 __values1 = pObjectX->otherLengthUnitTokm(defaultUnitValue, mapUnit);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_SpatialUnitConverter_kmToOtherLengthUnit_1ev_1real64_1LengthUnitType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble kiloValuve_j, jint uintType_j)
				{
					ev_real64 kiloValuve = (ev_real64) kiloValuve_j;
					EarthView::World::Spatial::Display::LengthUnitType uintType = (EarthView::World::Spatial::Display::LengthUnitType) uintType_j;
					EarthView::World::Spatial::Display::CSpatialUnitConverter *pObjectX = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjXXXX;
					ev_real64 __values1 = pObjectX->kmToOtherLengthUnit(kiloValuve, uintType);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_SpatialUnitConverter_otherAreaUnitTokm2_1ev_1real64_1EVMapUnits(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble defaultUnitValue_j, jint mapUnit_j)
				{
					ev_real64 defaultUnitValue = (ev_real64) defaultUnitValue_j;
					EarthView::World::Spatial::Atlas::EVMapUnits mapUnit = (EarthView::World::Spatial::Atlas::EVMapUnits) mapUnit_j;
					EarthView::World::Spatial::Display::CSpatialUnitConverter *pObjectX = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjXXXX;
					ev_real64 __values1 = pObjectX->otherAreaUnitTokm2(defaultUnitValue, mapUnit);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_SpatialUnitConverter_km2ToOtherAreaUnit_1ev_1real64_1AreaUnitType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble squareKiloValuve_j, jint unitType_j)
				{
					ev_real64 squareKiloValuve = (ev_real64) squareKiloValuve_j;
					EarthView::World::Spatial::Display::AreaUnitType unitType = (EarthView::World::Spatial::Display::AreaUnitType) unitType_j;
					EarthView::World::Spatial::Display::CSpatialUnitConverter *pObjectX = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjXXXX;
					ev_real64 __values1 = pObjectX->km2ToOtherAreaUnit(squareKiloValuve, unitType);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_display_SpatialUnitConverter_getMapUnitString_1EVMapUnits(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mapUnit_j)
				{
					EarthView::World::Spatial::Atlas::EVMapUnits mapUnit = (EarthView::World::Spatial::Atlas::EVMapUnits) mapUnit_j;
					EarthView::World::Spatial::Display::CSpatialUnitConverter *pObjectX = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjXXXX;
					EVString __values1 = pObjectX->getMapUnitString(mapUnit);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_SpatialUnitConverter_getMapUnitType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strUnit_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strUnit_ch = (const ev_char*)__env->GetStringUTFChars(strUnit_j,JNI_FALSE);
					const EVString strUnit = strUnit_ch;
					__env->ReleaseStringUTFChars(strUnit_j, (const char *)strUnit_ch);
					#else
					const ev_wchar* strUnit_ch = (const ev_wchar*)__env->GetStringChars(strUnit_j,JNI_FALSE);
					const EVString strUnit = strUnit_ch;
					__env->ReleaseStringChars(strUnit_j, (const jchar *)strUnit_ch);
					#endif
					EarthView::World::Spatial::Display::CSpatialUnitConverter *pObjectX = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjXXXX;
					EarthView::World::Spatial::Atlas::EVMapUnits __values1 = pObjectX->getMapUnitType(strUnit);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_display_SpatialUnitConverter_getLengthUnitString_1LengthUnitType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint lengthUnit_j)
				{
					EarthView::World::Spatial::Display::LengthUnitType lengthUnit = (EarthView::World::Spatial::Display::LengthUnitType) lengthUnit_j;
					EarthView::World::Spatial::Display::CSpatialUnitConverter *pObjectX = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjXXXX;
					EVString __values1 = pObjectX->getLengthUnitString(lengthUnit);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_SpatialUnitConverter_getLengthUnitType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strUnit_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strUnit_ch = (const ev_char*)__env->GetStringUTFChars(strUnit_j,JNI_FALSE);
					const EVString strUnit = strUnit_ch;
					__env->ReleaseStringUTFChars(strUnit_j, (const char *)strUnit_ch);
					#else
					const ev_wchar* strUnit_ch = (const ev_wchar*)__env->GetStringChars(strUnit_j,JNI_FALSE);
					const EVString strUnit = strUnit_ch;
					__env->ReleaseStringChars(strUnit_j, (const jchar *)strUnit_ch);
					#endif
					EarthView::World::Spatial::Display::CSpatialUnitConverter *pObjectX = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjXXXX;
					EarthView::World::Spatial::Display::LengthUnitType __values1 = pObjectX->getLengthUnitType(strUnit);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_display_SpatialUnitConverter_getAreaUnitString_1AreaUnitType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint areaUnit_j)
				{
					EarthView::World::Spatial::Display::AreaUnitType areaUnit = (EarthView::World::Spatial::Display::AreaUnitType) areaUnit_j;
					EarthView::World::Spatial::Display::CSpatialUnitConverter *pObjectX = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjXXXX;
					EVString __values1 = pObjectX->getAreaUnitString(areaUnit);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_SpatialUnitConverter_getAreaUnitType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strUnit_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strUnit_ch = (const ev_char*)__env->GetStringUTFChars(strUnit_j,JNI_FALSE);
					const EVString strUnit = strUnit_ch;
					__env->ReleaseStringUTFChars(strUnit_j, (const char *)strUnit_ch);
					#else
					const ev_wchar* strUnit_ch = (const ev_wchar*)__env->GetStringChars(strUnit_j,JNI_FALSE);
					const EVString strUnit = strUnit_ch;
					__env->ReleaseStringChars(strUnit_j, (const jchar *)strUnit_ch);
					#endif
					EarthView::World::Spatial::Display::CSpatialUnitConverter *pObjectX = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjXXXX;
					EarthView::World::Spatial::Display::AreaUnitType __values1 = pObjectX->getAreaUnitType(strUnit);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SpatialUnitConverter_toDMS_1ev_1real64_1int_1int_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dDecimal_j, jlong nDeg_j, jlong nMin_j, jlong dSec_j)
				{
					ev_real64 dDecimal = (ev_real64) dDecimal_j;
					int &nDeg = *(int*) nDeg_j;
					int &nMin = *(int*) nMin_j;
					ev_real64 &dSec = *(ev_real64*) dSec_j;
					EarthView::World::Spatial::Display::CSpatialUnitConverter *pObjectX = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjXXXX;
					pObjectX->toDMS(dDecimal, nDeg, nMin, dSec);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SpatialUnitConverter_toDecimal_1int_1int_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nDgr_j, jint nMin_j, jdouble dSec_j, jlong dDecimal_j)
				{
					int nDgr = (int) nDgr_j;
					int nMin = (int) nMin_j;
					ev_real64 dSec = (ev_real64) dSec_j;
					ev_real64 &dDecimal = *(ev_real64*) dDecimal_j;
					EarthView::World::Spatial::Display::CSpatialUnitConverter *pObjectX = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjXXXX;
					pObjectX->toDecimal(nDgr, nMin, dSec, dDecimal);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_display_SpatialUnitConverter_getOrientationString_1ev_1bool_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bXCoord_j, jdouble dCoordinate_j)
				{
					ev_bool bXCoord = (ev_bool) bXCoord_j;
					ev_real64 dCoordinate = (ev_real64) dCoordinate_j;
					EarthView::World::Spatial::Display::CSpatialUnitConverter *pObjectX = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjXXXX;
					EVString __values1 = pObjectX->getOrientationString(bXCoord, dCoordinate);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SpatialUnitConverter_toWGS84Point_1ISpatialReference_1ev_1real64_1ev_1real64_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pPointRef_j, jlong dPX_j, jlong dPY_j, jint nCount_j)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference *pPointRef = (EarthView::World::Spatial::Geometry::ISpatialReference*) pPointRef_j;
					ev_real64 *dPX = (ev_real64*) dPX_j;
					ev_real64 *dPY = (ev_real64*) dPY_j;
					ev_int32 nCount = (ev_int32) nCount_j;
					EarthView::World::Spatial::Display::CSpatialUnitConverter *pObjectX = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjXXXX;
					pObjectX->toWGS84Point(pPointRef, dPX, dPY, nCount);
				}
			}
		}
	}
}
