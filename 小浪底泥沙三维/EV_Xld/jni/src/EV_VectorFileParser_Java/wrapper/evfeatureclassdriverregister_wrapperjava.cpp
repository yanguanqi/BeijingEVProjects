/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "vectorfileparser/evfeatureclassdriverregister.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace VectorFileParser
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Evfeatureclassdriverregister_getRegisterDrivers_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial::VectorFileParser::EVFeatureClassDriverRegister* __values1 = EarthView::World::Spatial::VectorFileParser::EVFeatureClassDriverRegister::getRegisterDrivers();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Evfeatureclassdriverregister_openDataset_1IFileDataSource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataSource_j, jstring name_j)
				{
					EarthView::World::Spatial::GeoDataset::IFileDataSource *pDataSource = (EarthView::World::Spatial::GeoDataset::IFileDataSource*) pDataSource_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::Spatial::VectorFileParser::EVFeatureClassDriverRegister *pObjectX = (EarthView::World::Spatial::VectorFileParser::EVFeatureClassDriverRegister*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->openDataset(pDataSource, name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Evfeatureclassdriverregister_EVRegisterDriver_1CFeatureClassDriver(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDriver_j)
				{
					EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver *pDriver = (EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver*) pDriver_j;
					EarthView::World::Spatial::VectorFileParser::EVFeatureClassDriverRegister *pObjectX = (EarthView::World::Spatial::VectorFileParser::EVFeatureClassDriverRegister*) pObjXXXX;
					pObjectX->EVRegisterDriver(pDriver);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Evfeatureclassdriverregister_getDriverByName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring driverName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* driverName_ch = (const ev_char*)__env->GetStringUTFChars(driverName_j,JNI_FALSE);
					const EVString driverName = driverName_ch;
					__env->ReleaseStringUTFChars(driverName_j, (const char *)driverName_ch);
					#else
					const ev_wchar* driverName_ch = (const ev_wchar*)__env->GetStringChars(driverName_j,JNI_FALSE);
					const EVString driverName = driverName_ch;
					__env->ReleaseStringChars(driverName_j, (const jchar *)driverName_ch);
					#endif
					EarthView::World::Spatial::VectorFileParser::EVFeatureClassDriverRegister *pObjectX = (EarthView::World::Spatial::VectorFileParser::EVFeatureClassDriverRegister*) pObjXXXX;
					EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver* __values1 = pObjectX->getDriverByName(driverName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
