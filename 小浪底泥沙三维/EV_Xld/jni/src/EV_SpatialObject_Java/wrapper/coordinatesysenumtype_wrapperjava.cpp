/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/coordinatesystem/coordinatesysenumtype.h"
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
			namespace Utility
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_utility_EVReferenceTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						RF_GAUSS,
						RF_UTM,
						RF_MERCATOR,
						RF_LATLONG,
						RF_LAMBERTCC,
						RF_UNKNOWN
					};
					jintArray array = __env->NewIntArray(6);
					__env->SetIntArrayRegion(array, 0, 6, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_utility_EVTransformMethodHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						TR_BOOLSHA,
						TR_RIGOROUS
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_utility_EVWellKnownGeoCSTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						GEO_UNKNOWN,
						GEO_Beijing54,
						GEO_XIAN80,
						GEO_WGS84,
						GEO_CGCS2000,
						GEO_WGS72,
						GEO_NSWC9Z_2
					};
					jintArray array = __env->NewIntArray(7);
					__env->SetIntArrayRegion(array, 0, 7, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_utility_EVWellKnownProjCSTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						evgsProjectedCoordinateSystemTypeUnknow,
						WGS1984_World_Mercator,
						WGS1984_SphereWeb_Mercator,
						WGS_84_UTM_Zone_1N,
						WGS_84_UTM_Zone_2N,
						WGS_84_UTM_Zone_3N,
						WGS_84_UTM_Zone_4N,
						WGS_84_UTM_Zone_5N,
						WGS_84_UTM_Zone_6N,
						WGS_84_UTM_Zone_7N,
						WGS_84_UTM_Zone_8N,
						WGS_84_UTM_Zone_9N,
						WGS_84_UTM_Zone_10N,
						WGS_84_UTM_Zone_11N,
						WGS_84_UTM_Zone_12N,
						WGS_84_UTM_Zone_13N,
						WGS_84_UTM_Zone_14N,
						WGS_84_UTM_Zone_15N,
						WGS_84_UTM_Zone_16N,
						WGS_84_UTM_Zone_17N,
						WGS_84_UTM_Zone_18N,
						WGS_84_UTM_Zone_19N,
						WGS_84_UTM_Zone_20N,
						WGS_84_UTM_Zone_21N,
						WGS_84_UTM_Zone_22N,
						WGS_84_UTM_Zone_23N,
						WGS_84_UTM_Zone_24N,
						WGS_84_UTM_Zone_25N,
						WGS_84_UTM_Zone_26N,
						WGS_84_UTM_Zone_27N,
						WGS_84_UTM_Zone_28N,
						WGS_84_UTM_Zone_29N,
						WGS_84_UTM_Zone_30N,
						WGS_84_UTM_Zone_31N,
						WGS_84_UTM_Zone_32N,
						WGS_84_UTM_Zone_33N,
						WGS_84_UTM_Zone_34N,
						WGS_84_UTM_Zone_35N,
						WGS_84_UTM_Zone_36N,
						WGS_84_UTM_Zone_37N,
						WGS_84_UTM_Zone_38N,
						WGS_84_UTM_Zone_39N,
						WGS_84_UTM_Zone_40N,
						WGS_84_UTM_Zone_41N,
						WGS_84_UTM_Zone_42N,
						WGS_84_UTM_Zone_43N,
						WGS_84_UTM_Zone_44N,
						WGS_84_UTM_Zone_45N,
						WGS_84_UTM_Zone_46N,
						WGS_84_UTM_Zone_47N,
						WGS_84_UTM_Zone_48N,
						WGS_84_UTM_Zone_49N,
						WGS_84_UTM_Zone_50N,
						WGS_84_UTM_Zone_51N,
						WGS_84_UTM_Zone_52N,
						WGS_84_UTM_Zone_53N,
						WGS_84_UTM_Zone_54N,
						WGS_84_UTM_Zone_55N,
						WGS_84_UTM_Zone_56N,
						WGS_84_UTM_Zone_57N,
						WGS_84_UTM_Zone_58N,
						WGS_84_UTM_Zone_59N,
						WGS_84_UTM_Zone_60N,
						WGS_84_UTM_Grid_System_Southern_Hemisphere,
						WGS_84_UTM_zone_1S,
						WGS_84_UTM_zone_2S,
						WGS_84_UTM_zone_3S,
						WGS_84_UTM_zone_4S,
						WGS_84_UTM_zone_5S,
						WGS_84_UTM_zone_6S,
						WGS_84_UTM_zone_7S,
						WGS_84_UTM_zone_8S,
						WGS_84_UTM_zone_9S,
						WGS_84_UTM_zone_10S,
						WGS_84_UTM_zone_11S,
						WGS_84_UTM_zone_12S,
						WGS_84_UTM_zone_13S,
						WGS_84_UTM_zone_14S,
						WGS_84_UTM_zone_15S,
						WGS_84_UTM_zone_16S,
						WGS_84_UTM_zone_17S,
						WGS_84_UTM_zone_18S,
						WGS_84_UTM_zone_19S,
						WGS_84_UTM_zone_20S,
						WGS_84_UTM_zone_21S,
						WGS_84_UTM_zone_22S,
						WGS_84_UTM_zone_23S,
						WGS_84_UTM_zone_24S,
						WGS_84_UTM_zone_25S,
						WGS_84_UTM_zone_26S,
						WGS_84_UTM_zone_27S,
						WGS_84_UTM_zone_28S,
						WGS_84_UTM_zone_29S,
						WGS_84_UTM_zone_30S,
						WGS_84_UTM_zone_31S,
						WGS_84_UTM_zone_32S,
						WGS_84_UTM_zone_33S,
						WGS_84_UTM_zone_34S,
						WGS_84_UTM_zone_35S,
						WGS_84_UTM_zone_36S,
						WGS_84_UTM_zone_37S,
						WGS_84_UTM_zone_38S,
						WGS_84_UTM_zone_39S,
						WGS_84_UTM_zone_40S,
						WGS_84_UTM_zone_41S,
						WGS_84_UTM_zone_42S,
						WGS_84_UTM_zone_43S,
						WGS_84_UTM_zone_44S,
						WGS_84_UTM_zone_45S,
						WGS_84_UTM_zone_46S,
						WGS_84_UTM_zone_47S,
						WGS_84_UTM_zone_48S,
						WGS_84_UTM_zone_49S,
						WGS_84_UTM_zone_50S,
						WGS_84_UTM_zone_51S,
						WGS_84_UTM_zone_52S,
						WGS_84_UTM_zone_53S,
						WGS_84_UTM_zone_54S,
						WGS_84_UTM_zone_55S,
						WGS_84_UTM_zone_56S,
						WGS_84_UTM_zone_57S,
						WGS_84_UTM_zone_58S,
						WGS_84_UTM_zone_59S,
						WGS_84_UTM_zone_60S,
						Xian_1980_Gauss_Kruger_zone_13,
						Xian_1980_Gauss_Kruger_zone_14,
						Xian_1980_Gauss_Kruger_zone_15,
						Xian_1980_Gauss_Kruger_zone_16,
						Xian_1980_Gauss_Kruger_zone_17,
						Xian_1980_Gauss_Kruger_zone_18,
						Xian_1980_Gauss_Kruger_zone_19,
						Xian_1980_Gauss_Kruger_zone_20,
						Xian_1980_Gauss_Kruger_zone_21,
						Xian_1980_Gauss_Kruger_zone_22,
						Xian_1980_Gauss_Kruger_zone_23,
						Xian_1980_Gauss_Kruger_CM_75E,
						Xian_1980_Gauss_Kruger_CM_81E,
						Xian_1980_Gauss_Kruger_CM_87E,
						Xian_1980_Gauss_Kruger_CM_93E,
						Xian_1980_Gauss_Kruger_CM_99E,
						Xian_1980_Gauss_Kruger_CM_105E,
						Xian_1980_Gauss_Kruger_CM_111E,
						Xian_1980_Gauss_Kruger_CM_117E,
						Xian_1980_Gauss_Kruger_CM_123E,
						Xian_1980_Gauss_Kruger_CM_129E,
						Xian_1980_Gauss_Kruger_CM_135E,
						Xian_1980_3_degree_Gauss_Kruger_zone_25,
						Xian_1980_3_degree_Gauss_Kruger_zone_26,
						Xian_1980_3_degree_Gauss_Kruger_zone_27,
						Xian_1980_3_degree_Gauss_Kruger_zone_28,
						Xian_1980_3_degree_Gauss_Kruger_zone_29,
						Xian_1980_3_degree_Gauss_Kruger_zone_30,
						Xian_1980_3_degree_Gauss_Kruger_zone_31,
						Xian_1980_3_degree_Gauss_Kruger_zone_32,
						Xian_1980_3_degree_Gauss_Kruger_zone_33,
						Xian_1980_3_degree_Gauss_Kruger_zone_34,
						Xian_1980_3_degree_Gauss_Kruger_zone_35,
						Xian_1980_3_degree_Gauss_Kruger_zone_36,
						Xian_1980_3_degree_Gauss_Kruger_zone_37,
						Xian_1980_3_degree_Gauss_Kruger_zone_38,
						Xian_1980_3_degree_Gauss_Kruger_zone_39,
						Xian_1980_3_degree_Gauss_Kruger_zone_40,
						Xian_1980_3_degree_Gauss_Kruger_zone_41,
						Xian_1980_3_degree_Gauss_Kruger_zone_42,
						Xian_1980_3_degree_Gauss_Kruger_zone_43,
						Xian_1980_3_degree_Gauss_Kruger_zone_44,
						Xian_1980_3_degree_Gauss_Kruger_zone_45,
						Xian_1980_3_degree_Gauss_Kruger_CM_75E,
						Xian_1980_3_degree_Gauss_Kruger_CM_78E,
						Xian_1980_3_degree_Gauss_Kruger_CM_81E,
						Xian_1980_3_degree_Gauss_Kruger_CM_84E,
						Xian_1980_3_degree_Gauss_Kruger_CM_87E,
						Xian_1980_3_degree_Gauss_Kruger_CM_90E,
						Xian_1980_3_degree_Gauss_Kruger_CM_93E,
						Xian_1980_3_degree_Gauss_Kruger_CM_96E,
						Xian_1980_3_degree_Gauss_Kruger_CM_99E,
						Xian_1980_3_degree_Gauss_Kruger_CM_102E,
						Xian_1980_3_degree_Gauss_Kruger_CM_105E,
						Xian_1980_3_degree_Gauss_Kruger_CM_108E,
						Xian_1980_3_degree_Gauss_Kruger_CM_111E,
						Xian_1980_3_degree_Gauss_Kruger_CM_114E,
						Xian_1980_3_degree_Gauss_Kruger_CM_117E,
						Xian_1980_3_degree_Gauss_Kruger_CM_120E,
						Xian_1980_3_degree_Gauss_Kruger_CM_123E,
						Xian_1980_3_degree_Gauss_Kruger_CM_126E,
						Xian_1980_3_degree_Gauss_Kruger_CM_129E,
						Xian_1980_3_degree_Gauss_Kruger_CM_132E,
						Xian_1980_3_degree_Gauss_Kruger_CM_135E,
						Beijing_1954_3_degree_Gauss_Kruger_zone_25,
						Beijing_1954_3_degree_Gauss_Kruger_zone_26,
						Beijing_1954_3_degree_Gauss_Kruger_zone_27,
						Beijing_1954_3_degree_Gauss_Kruger_zone_28,
						Beijing_1954_3_degree_Gauss_Kruger_zone_29,
						Beijing_1954_3_degree_Gauss_Kruger_zone_30,
						Beijing_1954_3_degree_Gauss_Kruger_zone_31,
						Beijing_1954_3_degree_Gauss_Kruger_zone_32,
						Beijing_1954_3_degree_Gauss_Kruger_zone_33,
						Beijing_1954_3_degree_Gauss_Kruger_zone_34,
						Beijing_1954_3_degree_Gauss_Kruger_zone_35,
						Beijing_1954_3_degree_Gauss_Kruger_zone_36,
						Beijing_1954_3_degree_Gauss_Kruger_zone_37,
						Beijing_1954_3_degree_Gauss_Kruger_zone_38,
						Beijing_1954_3_degree_Gauss_Kruger_zone_39,
						Beijing_1954_3_degree_Gauss_Kruger_zone_40,
						Beijing_1954_3_degree_Gauss_Kruger_zone_41,
						Beijing_1954_3_degree_Gauss_Kruger_zone_42,
						Beijing_1954_3_degree_Gauss_Kruger_zone_43,
						Beijing_1954_3_degree_Gauss_Kruger_zone_44,
						Beijing_1954_3_degree_Gauss_Kruger_zone_45,
						Beijing_1954_3_degree_Gauss_Kruger_CM_75E,
						Beijing_1954_3_degree_Gauss_Kruger_CM_78E,
						Beijing_1954_3_degree_Gauss_Kruger_CM_81E,
						Beijing_1954_3_degree_Gauss_Kruger_CM_84E,
						Beijing_1954_3_degree_Gauss_Kruger_CM_87E,
						Beijing_1954_3_degree_Gauss_Kruger_CM_90E,
						Beijing_1954_3_degree_Gauss_Kruger_CM_93E,
						Beijing_1954_3_degree_Gauss_Kruger_CM_96E,
						Beijing_1954_3_degree_Gauss_Kruger_CM_99E,
						Beijing_1954_3_degree_Gauss_Kruger_CM_102E,
						Beijing_1954_3_degree_Gauss_Kruger_CM_105E,
						Beijing_1954_3_degree_Gauss_Kruger_CM_108E,
						Beijing_1954_3_degree_Gauss_Kruger_CM_111E,
						Beijing_1954_3_degree_Gauss_Kruger_CM_114E,
						Beijing_1954_3_degree_Gauss_Kruger_CM_117E,
						Beijing_1954_3_degree_Gauss_Kruger_CM_120E,
						Beijing_1954_3_degree_Gauss_Kruger_CM_123E,
						Beijing_1954_3_degree_Gauss_Kruger_CM_126E,
						Beijing_1954_3_degree_Gauss_Kruger_CM_129E,
						Beijing_1954_3_degree_Gauss_Kruger_CM_132E,
						Beijing_1954_3_degree_Gauss_Kruger_CM_135E,
						Beijing_1954_Gauss_Kruger_Zone_13,
						Beijing_1954_Gauss_Kruger_Zone_14,
						Beijing_1954_Gauss_Kruger_Zone_15,
						Beijing_1954_Gauss_Kruger_Zone_16,
						Beijing_1954_Gauss_Kruger_Zone_17,
						Beijing_1954_Gauss_Kruger_Zone_18,
						Beijing_1954_Gauss_Kruger_Zone_19,
						Beijing_1954_Gauss_Kruger_Zone_20,
						Beijing_1954_Gauss_Kruger_Zone_21,
						Beijing_1954_Gauss_Kruger_Zone_22,
						Beijing_1954_Gauss_Kruger_Zone_23,
						Beijing_1954_Gauss_Kruger_Zone_13N,
						Beijing_1954_Gauss_Kruger_Zone_14N,
						Beijing_1954_Gauss_Kruger_Zone_15N,
						Beijing_1954_Gauss_Kruger_Zone_16N,
						Beijing_1954_Gauss_Kruger_Zone_17N,
						Beijing_1954_Gauss_Kruger_Zone_18N,
						Beijing_1954_Gauss_Kruger_Zone_19N,
						Beijing_1954_Gauss_Kruger_Zone_20N,
						Beijing_1954_Gauss_Kruger_Zone_21N,
						Beijing_1954_Gauss_Kruger_Zone_22N,
						Beijing_1954_Gauss_Kruger_Zone_23N,
						CGCS2000_Gauss_Kruger_zone_13,
						CGCS2000_Gauss_Kruger_zone_14,
						CGCS2000_Gauss_Kruger_zone_15,
						CGCS2000_Gauss_Kruger_zone_16,
						CGCS2000_Gauss_Kruger_zone_17,
						CGCS2000_Gauss_Kruger_zone_18,
						CGCS2000_Gauss_Kruger_zone_19,
						CGCS2000_Gauss_Kruger_zone_20,
						CGCS2000_Gauss_Kruger_zone_21,
						CGCS2000_Gauss_Kruger_zone_22,
						CGCS2000_Gauss_Kruger_zone_23,
						CGCS2000_Gauss_Kruger_CM_75E,
						CGCS2000_Gauss_Kruger_CM_81E,
						CGCS2000_Gauss_Kruger_CM_87E,
						CGCS2000_Gauss_Kruger_CM_93E,
						CGCS2000_Gauss_Kruger_CM_99E,
						CGCS2000_Gauss_Kruger_CM_105E,
						CGCS2000_Gauss_Kruger_CM_111E,
						CGCS2000_Gauss_Kruger_CM_117E,
						CGCS2000_Gauss_Kruger_CM_123E,
						CGCS2000_Gauss_Kruger_CM_129E,
						CGCS2000_Gauss_Kruger_CM_135E,
						CGCS2000_3_degree_Gauss_Kruger_zone_25,
						CGCS2000_3_degree_Gauss_Kruger_zone_26,
						CGCS2000_3_degree_Gauss_Kruger_zone_27,
						CGCS2000_3_degree_Gauss_Kruger_zone_28,
						CGCS2000_3_degree_Gauss_Kruger_zone_29,
						CGCS2000_3_degree_Gauss_Kruger_zone_30,
						CGCS2000_3_degree_Gauss_Kruger_zone_31,
						CGCS2000_3_degree_Gauss_Kruger_zone_32,
						CGCS2000_3_degree_Gauss_Kruger_zone_33,
						CGCS2000_3_degree_Gauss_Kruger_zone_34,
						CGCS2000_3_degree_Gauss_Kruger_zone_35,
						CGCS2000_3_degree_Gauss_Kruger_zone_36,
						CGCS2000_3_degree_Gauss_Kruger_zone_37,
						CGCS2000_3_degree_Gauss_Kruger_zone_38,
						CGCS2000_3_degree_Gauss_Kruger_zone_39,
						CGCS2000_3_degree_Gauss_Kruger_zone_40,
						CGCS2000_3_degree_Gauss_Kruger_zone_41,
						CGCS2000_3_degree_Gauss_Kruger_zone_42,
						CGCS2000_3_degree_Gauss_Kruger_zone_43,
						CGCS2000_3_degree_Gauss_Kruger_zone_44,
						CGCS2000_3_degree_Gauss_Kruger_zone_45,
						CGCS2000_3_degree_Gauss_Kruger_CM_75E,
						CGCS2000_3_degree_Gauss_Kruger_CM_78E,
						CGCS2000_3_degree_Gauss_Kruger_CM_81E,
						CGCS2000_3_degree_Gauss_Kruger_CM_84E,
						CGCS2000_3_degree_Gauss_Kruger_CM_87E,
						CGCS2000_3_degree_Gauss_Kruger_CM_90E,
						CGCS2000_3_degree_Gauss_Kruger_CM_93E,
						CGCS2000_3_degree_Gauss_Kruger_CM_96E,
						CGCS2000_3_degree_Gauss_Kruger_CM_99E,
						CGCS2000_3_degree_Gauss_Kruger_CM_102E,
						CGCS2000_3_degree_Gauss_Kruger_CM_105E,
						CGCS2000_3_degree_Gauss_Kruger_CM_108E,
						CGCS2000_3_degree_Gauss_Kruger_CM_111E,
						CGCS2000_3_degree_Gauss_Kruger_CM_114E,
						CGCS2000_3_degree_Gauss_Kruger_CM_117E,
						CGCS2000_3_degree_Gauss_Kruger_CM_120E,
						CGCS2000_3_degree_Gauss_Kruger_CM_123E,
						CGCS2000_3_degree_Gauss_Kruger_CM_126E,
						CGCS2000_3_degree_Gauss_Kruger_CM_129E,
						CGCS2000_3_degree_Gauss_Kruger_CM_132E,
						CGCS2000_3_degree_Gauss_Kruger_CM_135E
					};
					jintArray array = __env->NewIntArray(316);
					__env->SetIntArrayRegion(array, 0, 316, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_utility_EVSpheriodHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						EV_UNKNOWN,
						EV_BEIJING54,
						EV_XIAN80,
						EV_WGS84,
						EV_CGCS2000
					};
					jintArray array = __env->NewIntArray(5);
					__env->SetIntArrayRegion(array, 0, 5, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_utility_EVProjectionTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						EV_PROJ_UNKNOWN,
						EV_PROJ_LATLONG,
						EV_PROJ_GUSSKRVGER,
						EV_PROJ_UTM,
						EV_PROJ_MERCATOR,
						EV_PROJ_MERCATOR_2SP,
						EV_PROJ_LARMBERT_COMFORMAL,
						EV_PROJ_LARMBERT_COMFORMAL_2SP
					};
					jintArray array = __env->NewIntArray(8);
					__env->SetIntArrayRegion(array, 0, 8, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_utility_EVPredefinedProjectionHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						EV_Gauss_Kruger_6_degree_zone_13,
						EV_Gauss_Kruger_6_degree_zone_14,
						EV_Gauss_Kruger_6_degree_zone_15,
						EV_Gauss_Kruger_6_degree_zone_16,
						EV_Gauss_Kruger_6_degree_zone_17,
						EV_Gauss_Kruger_6_degree_zone_18,
						EV_Gauss_Kruger_6_degree_zone_19,
						EV_Gauss_Kruger_6_degree_zone_20,
						EV_Gauss_Kruger_6_degree_zone_21,
						EV_Gauss_Kruger_6_degree_zone_22,
						EV_Gauss_Kruger_6_degree_zone_23,
						EV_Gauss_Kruger_3_degree_zone_25,
						EV_Gauss_Kruger_3_degree_zone_26,
						EV_Gauss_Kruger_3_degree_zone_27,
						EV_Gauss_Kruger_3_degree_zone_28,
						EV_Gauss_Kruger_3_degree_zone_29,
						EV_Gauss_Kruger_3_degree_zone_30,
						EV_Gauss_Kruger_3_degree_zone_31,
						EV_Gauss_Kruger_3_degree_zone_32,
						EV_Gauss_Kruger_3_degree_zone_33,
						EV_Gauss_Kruger_3_degree_zone_34,
						EV_Gauss_Kruger_3_degree_zone_35,
						EV_Gauss_Kruger_3_degree_zone_36,
						EV_Gauss_Kruger_3_degree_zone_37,
						EV_Gauss_Kruger_3_degree_zone_38,
						EV_Gauss_Kruger_3_degree_zone_39,
						EV_Gauss_Kruger_3_degree_zone_40,
						EV_Gauss_Kruger_3_degree_zone_41,
						EV_Gauss_Kruger_3_degree_zone_42,
						EV_Gauss_Kruger_3_degree_zone_43,
						EV_Gauss_Kruger_3_degree_zone_44,
						EV_Gauss_Kruger_3_degree_zone_45,
						EV_UTM_zone_1N,
						EV_UTM_zone_2N,
						EV_UTM_zone_3N,
						EV_UTM_zone_4N,
						EV_UTM_zone_5N,
						EV_UTM_zone_6N,
						EV_UTM_zone_7N,
						EV_UTM_zone_8N,
						EV_UTM_zone_9N,
						EV_UTM_zone_10N,
						EV_UTM_zone_11N,
						EV_UTM_zone_12N,
						EV_UTM_zone_13N,
						EV_UTM_zone_14N,
						EV_UTM_zone_15N,
						EV_UTM_zone_16N,
						EV_UTM_zone_17N,
						EV_UTM_zone_18N,
						EV_UTM_zone_19N,
						EV_UTM_zone_20N,
						EV_UTM_zone_21N,
						EV_UTM_zone_22N,
						EV_UTM_zone_23N,
						EV_UTM_zone_24N,
						EV_UTM_zone_25N,
						EV_UTM_zone_26N,
						EV_UTM_zone_27N,
						EV_UTM_zone_28N,
						EV_UTM_zone_29N,
						EV_UTM_zone_30N,
						EV_UTM_zone_31N,
						EV_UTM_zone_32N,
						EV_UTM_zone_33N,
						EV_UTM_zone_34N,
						EV_UTM_zone_35N,
						EV_UTM_zone_36N,
						EV_UTM_zone_37N,
						EV_UTM_zone_38N,
						EV_UTM_zone_39N,
						EV_UTM_zone_40N,
						EV_UTM_zone_41N,
						EV_UTM_zone_42N,
						EV_UTM_zone_43N,
						EV_UTM_zone_44N,
						EV_UTM_zone_45N,
						EV_UTM_zone_46N,
						EV_UTM_zone_47N,
						EV_UTM_zone_48N,
						EV_UTM_zone_49N,
						EV_UTM_zone_50N,
						EV_UTM_zone_51N,
						EV_UTM_zone_52N,
						EV_UTM_zone_53N,
						EV_UTM_zone_54N,
						EV_UTM_zone_55N,
						EV_UTM_zone_56N,
						EV_UTM_zone_57N,
						EV_UTM_zone_58N,
						EV_UTM_zone_59N,
						EV_UTM_zone_60N,
						EV_UTM_zone_1S,
						EV_UTM_zone_2S,
						EV_UTM_zone_3S,
						EV_UTM_zone_4S,
						EV_UTM_zone_5S,
						EV_UTM_zone_6S,
						EV_UTM_zone_7S,
						EV_UTM_zone_8S,
						EV_UTM_zone_9S,
						EV_UTM_zone_10S,
						EV_UTM_zone_11S,
						EV_UTM_zone_12S,
						EV_UTM_zone_13S,
						EV_UTM_zone_14S,
						EV_UTM_zone_15S,
						EV_UTM_zone_16S,
						EV_UTM_zone_17S,
						EV_UTM_zone_18S,
						EV_UTM_zone_19S,
						EV_UTM_zone_20S,
						EV_UTM_zone_21S,
						EV_UTM_zone_22S,
						EV_UTM_zone_23S,
						EV_UTM_zone_24S,
						EV_UTM_zone_25S,
						EV_UTM_zone_26S,
						EV_UTM_zone_27S,
						EV_UTM_zone_28S,
						EV_UTM_zone_29S,
						EV_UTM_zone_30S,
						EV_UTM_zone_31S,
						EV_UTM_zone_32S,
						EV_UTM_zone_33S,
						EV_UTM_zone_34S,
						EV_UTM_zone_35S,
						EV_UTM_zone_36S,
						EV_UTM_zone_37S,
						EV_UTM_zone_38S,
						EV_UTM_zone_39S,
						EV_UTM_zone_40S,
						EV_UTM_zone_41S,
						EV_UTM_zone_42S,
						EV_UTM_zone_43S,
						EV_UTM_zone_44S,
						EV_UTM_zone_45S,
						EV_UTM_zone_46S,
						EV_UTM_zone_47S,
						EV_UTM_zone_48S,
						EV_UTM_zone_49S,
						EV_UTM_zone_50S,
						EV_UTM_zone_51S,
						EV_UTM_zone_52S,
						EV_UTM_zone_53S,
						EV_UTM_zone_54S,
						EV_UTM_zone_55S,
						EV_UTM_zone_56S,
						EV_UTM_zone_57S,
						EV_UTM_zone_58S,
						EV_UTM_zone_59S,
						EV_UTM_zone_60S
					};
					jintArray array = __env->NewIntArray(152);
					__env->SetIntArrayRegion(array, 0, 152, enum_values);
					return array;
				}
			}
		}
	}
}
