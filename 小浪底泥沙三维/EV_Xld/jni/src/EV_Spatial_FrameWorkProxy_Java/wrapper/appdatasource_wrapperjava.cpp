/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/appdatasource.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Utilities
		{
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_utilities_AppDataSource_00024DataSourceTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					AppDataSource::FileChart,
					AppDataSource::FileKML,
					AppDataSource::FileRaster,
					AppDataSource::FileVector,
					AppDataSource::FileSmart3D,
					AppDataSource::FileMeshX,
					AppDataSource::FileMeshXG,
					AppDataSource::FileLas,
					AppDataSource::DBModel,
					AppDataSource::DBVector,
					AppDataSource::DBEffect,
					AppDataSource::DBRaster,
					AppDataSource::WebEVServer,
					AppDataSource::WebOGCWMSServer,
					AppDataSource::WebOGCWMTSServer,
					AppDataSource::WebOGCWFSServer
				};
				jintArray array = __env->NewIntArray(16);
				__env->SetIntArrayRegion(array, 0, 16, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_utilities_AppDataSource_openDataSource_1EVString_1DataSourceOption(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring aliasName_j, jlong option_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* aliasName_ch = (const ev_char*)__env->GetStringUTFChars(aliasName_j,JNI_FALSE);
				const EVString aliasName = aliasName_ch;
				__env->ReleaseStringUTFChars(aliasName_j, (const char *)aliasName_ch);
				#else
				const ev_wchar* aliasName_ch = (const ev_wchar*)__env->GetStringChars(aliasName_j,JNI_FALSE);
				const EVString aliasName = aliasName_ch;
				__env->ReleaseStringChars(aliasName_j, (const jchar *)aliasName_ch);
				#endif
				const EarthView::World::Utilities::DataSourceOption &option = *(EarthView::World::Utilities::DataSourceOption*) option_j;
				EarthView::World::Utilities::AppDataSource *pObjectX = (EarthView::World::Utilities::AppDataSource*) pObjXXXX;
				bool __values1 = pObjectX->openDataSource(aliasName, option);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_AppDataSource_getDataSource_1EVString_1DataSourceType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dataSourceAliasName_j, jint type_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dataSourceAliasName_ch = (const ev_char*)__env->GetStringUTFChars(dataSourceAliasName_j,JNI_FALSE);
				const EVString dataSourceAliasName = dataSourceAliasName_ch;
				__env->ReleaseStringUTFChars(dataSourceAliasName_j, (const char *)dataSourceAliasName_ch);
				#else
				const ev_wchar* dataSourceAliasName_ch = (const ev_wchar*)__env->GetStringChars(dataSourceAliasName_j,JNI_FALSE);
				const EVString dataSourceAliasName = dataSourceAliasName_ch;
				__env->ReleaseStringChars(dataSourceAliasName_j, (const jchar *)dataSourceAliasName_ch);
				#endif
				EarthView::World::Utilities::AppDataSource::DataSourceType type = (EarthView::World::Utilities::AppDataSource::DataSourceType) type_j;
				const 				EarthView::World::Utilities::AppDataSource *pObjectX = (EarthView::World::Utilities::AppDataSource*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->getDataSource(dataSourceAliasName, type);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_utilities_AppDataSource_closeDataSource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring aliasName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* aliasName_ch = (const ev_char*)__env->GetStringUTFChars(aliasName_j,JNI_FALSE);
				const EVString aliasName = aliasName_ch;
				__env->ReleaseStringUTFChars(aliasName_j, (const char *)aliasName_ch);
				#else
				const ev_wchar* aliasName_ch = (const ev_wchar*)__env->GetStringChars(aliasName_j,JNI_FALSE);
				const EVString aliasName = aliasName_ch;
				__env->ReleaseStringChars(aliasName_j, (const jchar *)aliasName_ch);
				#endif
				EarthView::World::Utilities::AppDataSource *pObjectX = (EarthView::World::Utilities::AppDataSource*) pObjXXXX;
				bool __values1 = pObjectX->closeDataSource(aliasName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_utilities_AppDataSource_deleteDataSource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring aliasName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* aliasName_ch = (const ev_char*)__env->GetStringUTFChars(aliasName_j,JNI_FALSE);
				const EVString aliasName = aliasName_ch;
				__env->ReleaseStringUTFChars(aliasName_j, (const char *)aliasName_ch);
				#else
				const ev_wchar* aliasName_ch = (const ev_wchar*)__env->GetStringChars(aliasName_j,JNI_FALSE);
				const EVString aliasName = aliasName_ch;
				__env->ReleaseStringChars(aliasName_j, (const jchar *)aliasName_ch);
				#endif
				EarthView::World::Utilities::AppDataSource *pObjectX = (EarthView::World::Utilities::AppDataSource*) pObjXXXX;
				bool __values1 = pObjectX->deleteDataSource(aliasName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_utilities_AppDataSource_createDataSource_1EVString_1DataSourceOption(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring aliasName_j, jlong option_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* aliasName_ch = (const ev_char*)__env->GetStringUTFChars(aliasName_j,JNI_FALSE);
				const EVString aliasName = aliasName_ch;
				__env->ReleaseStringUTFChars(aliasName_j, (const char *)aliasName_ch);
				#else
				const ev_wchar* aliasName_ch = (const ev_wchar*)__env->GetStringChars(aliasName_j,JNI_FALSE);
				const EVString aliasName = aliasName_ch;
				__env->ReleaseStringChars(aliasName_j, (const jchar *)aliasName_ch);
				#endif
				const EarthView::World::Utilities::DataSourceOption &option = *(EarthView::World::Utilities::DataSourceOption*) option_j;
				EarthView::World::Utilities::AppDataSource *pObjectX = (EarthView::World::Utilities::AppDataSource*) pObjXXXX;
				bool __values1 = pObjectX->createDataSource(aliasName, option);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_utilities_AppDataSource_createDataset_1EVString_1EVString_1DatasetOption(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dataSourceAliasName_j, jstring datasetName_j, jlong option_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dataSourceAliasName_ch = (const ev_char*)__env->GetStringUTFChars(dataSourceAliasName_j,JNI_FALSE);
				const EVString dataSourceAliasName = dataSourceAliasName_ch;
				__env->ReleaseStringUTFChars(dataSourceAliasName_j, (const char *)dataSourceAliasName_ch);
				#else
				const ev_wchar* dataSourceAliasName_ch = (const ev_wchar*)__env->GetStringChars(dataSourceAliasName_j,JNI_FALSE);
				const EVString dataSourceAliasName = dataSourceAliasName_ch;
				__env->ReleaseStringChars(dataSourceAliasName_j, (const jchar *)dataSourceAliasName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
				const EVString datasetName = datasetName_ch;
				__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
				#else
				const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
				const EVString datasetName = datasetName_ch;
				__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
				#endif
				const EarthView::World::Utilities::DatasetOption &option = *(EarthView::World::Utilities::DatasetOption*) option_j;
				EarthView::World::Utilities::AppDataSource *pObjectX = (EarthView::World::Utilities::AppDataSource*) pObjXXXX;
				bool __values1 = pObjectX->createDataset(dataSourceAliasName, datasetName, option);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_utilities_AppDataSource_deleteDataset_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dataSourceAliasName_j, jstring datasetName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dataSourceAliasName_ch = (const ev_char*)__env->GetStringUTFChars(dataSourceAliasName_j,JNI_FALSE);
				const EVString dataSourceAliasName = dataSourceAliasName_ch;
				__env->ReleaseStringUTFChars(dataSourceAliasName_j, (const char *)dataSourceAliasName_ch);
				#else
				const ev_wchar* dataSourceAliasName_ch = (const ev_wchar*)__env->GetStringChars(dataSourceAliasName_j,JNI_FALSE);
				const EVString dataSourceAliasName = dataSourceAliasName_ch;
				__env->ReleaseStringChars(dataSourceAliasName_j, (const jchar *)dataSourceAliasName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
				const EVString datasetName = datasetName_ch;
				__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
				#else
				const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
				const EVString datasetName = datasetName_ch;
				__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
				#endif
				EarthView::World::Utilities::AppDataSource *pObjectX = (EarthView::World::Utilities::AppDataSource*) pObjXXXX;
				bool __values1 = pObjectX->deleteDataset(dataSourceAliasName, datasetName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_AppDataSource_openDataset_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dataSourceAliasName_j, jstring datasetName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dataSourceAliasName_ch = (const ev_char*)__env->GetStringUTFChars(dataSourceAliasName_j,JNI_FALSE);
				const EVString dataSourceAliasName = dataSourceAliasName_ch;
				__env->ReleaseStringUTFChars(dataSourceAliasName_j, (const char *)dataSourceAliasName_ch);
				#else
				const ev_wchar* dataSourceAliasName_ch = (const ev_wchar*)__env->GetStringChars(dataSourceAliasName_j,JNI_FALSE);
				const EVString dataSourceAliasName = dataSourceAliasName_ch;
				__env->ReleaseStringChars(dataSourceAliasName_j, (const jchar *)dataSourceAliasName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
				const EVString datasetName = datasetName_ch;
				__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
				#else
				const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
				const EVString datasetName = datasetName_ch;
				__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
				#endif
				EarthView::World::Utilities::AppDataSource *pObjectX = (EarthView::World::Utilities::AppDataSource*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->openDataset(dataSourceAliasName, datasetName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_utilities_AppDataSource_getLastErrorString_1void(JNIEnv *__env , jclass __clazz)
			{
				EVString __values1 = EarthView::World::Utilities::AppDataSource::getLastErrorString();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
		}
	}
}
