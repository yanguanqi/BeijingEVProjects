/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/coordinatesystem/coordinatefactory.h"
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_CoordinateSystemFactory_createCoordSys_1EVWellKnownGeoCSType(JNIEnv *__env , jclass __clazz, jint eWellKnownCS_j)
				{
					EarthView::World::Spatial::Utility::EVWellKnownGeoCSType eWellKnownCS = (EarthView::World::Spatial::Utility::EVWellKnownGeoCSType) eWellKnownCS_j;
					EarthView::World::Spatial::Utility::CSpatialReference* __values1 = EarthView::World::Spatial::Utility::CCoordinateSystemFactory::createCoordSys(eWellKnownCS);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_CoordinateSystemFactory_createCoordSys_1EVWellKnownProjCSType(JNIEnv *__env , jclass __clazz, jint eWelKnProjCS_j)
				{
					EarthView::World::Spatial::Utility::EVWellKnownProjCSType eWelKnProjCS = (EarthView::World::Spatial::Utility::EVWellKnownProjCSType) eWelKnProjCS_j;
					EarthView::World::Spatial::Utility::CSpatialReference* __values1 = EarthView::World::Spatial::Utility::CCoordinateSystemFactory::createCoordSys(eWelKnProjCS);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_CoordinateSystemFactory_createCoordSys_1IEllipseSpheriod_1CProjParameter(JNIEnv *__env , jclass __clazz, jlong pobjEllipseSphere_j, jlong pObjProjParameter_j)
				{
					const EarthView::World::Spatial::Geometry::IEllipseSpheriod *pobjEllipseSphere = (const EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pobjEllipseSphere_j;
					const EarthView::World::Spatial::Utility::CProjParameter *pObjProjParameter = (const EarthView::World::Spatial::Utility::CProjParameter*) pObjProjParameter_j;
					EarthView::World::Spatial::Utility::CSpatialReference* __values1 = EarthView::World::Spatial::Utility::CCoordinateSystemFactory::createCoordSys(pobjEllipseSphere, pObjProjParameter);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_CoordinateSystemFactory_createCoordSys_1EVSpatialReferenceStringType_1EVString(JNIEnv *__env , jclass __clazz, jint eStrType_j, jstring pszReference_j)
				{
					EarthView::World::Spatial::Utility::EVSpatialReferenceStringType eStrType = (EarthView::World::Spatial::Utility::EVSpatialReferenceStringType) eStrType_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* pszReference_ch = (const ev_char*)__env->GetStringUTFChars(pszReference_j,JNI_FALSE);
					const EVString pszReference = pszReference_ch;
					__env->ReleaseStringUTFChars(pszReference_j, (const char *)pszReference_ch);
					#else
					const ev_wchar* pszReference_ch = (const ev_wchar*)__env->GetStringChars(pszReference_j,JNI_FALSE);
					const EVString pszReference = pszReference_ch;
					__env->ReleaseStringChars(pszReference_j, (const jchar *)pszReference_ch);
					#endif
					EarthView::World::Spatial::Utility::CSpatialReference* __values1 = EarthView::World::Spatial::Utility::CCoordinateSystemFactory::createCoordSys(eStrType, pszReference);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_CoordinateSystemFactory_createCoordSys_1ev_1int32(JNIEnv *__env , jclass __clazz, jint ESPG_j)
				{
					ev_int32 ESPG = (ev_int32) ESPG_j;
					EarthView::World::Spatial::Utility::CSpatialReference* __values1 = EarthView::World::Spatial::Utility::CCoordinateSystemFactory::createCoordSys(ESPG);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_CoordinateSystemFactory_createCoordSys_1CDataStream(JNIEnv *__env , jclass __clazz, jlong objStream_j)
				{
					EarthView::World::Core::CDataStream &objStream = *(EarthView::World::Core::CDataStream*) objStream_j;
					EarthView::World::Spatial::Utility::CSpatialReference* __values1 = EarthView::World::Spatial::Utility::CCoordinateSystemFactory::createCoordSys(objStream);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_CoordinateSystemFactory_releaseCoordSys_1CSpatialReference(JNIEnv *__env , jclass __clazz, jlong pCorSys_j)
				{
					EarthView::World::Spatial::Utility::CSpatialReference *pCorSys = (EarthView::World::Spatial::Utility::CSpatialReference*) pCorSys_j;
					EarthView::World::Spatial::Utility::CCoordinateSystemFactory::releaseCoordSys(pCorSys);
				}
			}
		}
	}
}
