/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/datasourcehelper.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_DatasourceHelper_openDatasource_1CDataSourceUrl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j)
				{
					const EarthView::World::Spatial3D::DataExchange::CDataSourceUrl &datasourceURL = *(EarthView::World::Spatial3D::DataExchange::CDataSourceUrl*) datasourceURL_j;
					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper *pObjectX = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjXXXX;
					ev_bool __values1 = pObjectX->openDatasource(datasourceURL);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_DatasourceHelper_createDatasource_1CDataSourceUrl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j)
				{
					const EarthView::World::Spatial3D::DataExchange::CDataSourceUrl &datasourceURL = *(EarthView::World::Spatial3D::DataExchange::CDataSourceUrl*) datasourceURL_j;
					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper *pObjectX = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjXXXX;
					ev_bool __values1 = pObjectX->createDatasource(datasourceURL);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_DatasourceHelper_getDatasource_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper *pObjectX = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CModelDataSource* __values1 = pObjectX->getDatasource();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_DatasourceHelper_setDatasource_1CModelDataSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pSource_j)
				{
					EarthView::World::Spatial3D::Dataset::CModelDataSource *ref_pSource = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) ref_pSource_j;
					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper *pObjectX = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjXXXX;
					pObjectX->setDatasource(ref_pSource);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_DatasourceHelper_openDatasetByName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper *pObjectX = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjXXXX;
					ev_bool __values1 = pObjectX->openDatasetByName(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_DatasourceHelper_deleteData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper *pObjectX = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjXXXX;
					ev_bool __values1 = pObjectX->deleteData();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_DatasourceHelper_clearDataset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper *pObjectX = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjXXXX;
					ev_bool __values1 = pObjectX->clearDataset();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_DatasourceHelper_clearModelDatabase_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper *pObjectX = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjXXXX;
					ev_bool __values1 = pObjectX->clearModelDatabase();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_DatasourceHelper_isExistModelDatabase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring meshName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
					EVString meshName = meshName_ch;
					__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
					#else
					const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
					EVString meshName = meshName_ch;
					__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper *pObjectX = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjXXXX;
					ev_bool __values1 = pObjectX->isExistModelDatabase(meshName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_DatasourceHelper_isExistModelInDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring meshName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
					EVString meshName = meshName_ch;
					__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
					#else
					const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
					EVString meshName = meshName_ch;
					__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper *pObjectX = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjXXXX;
					ev_bool __values1 = pObjectX->isExistModelInDataset(meshName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_DatasourceHelper_openModelDatabase_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper *pObjectX = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjXXXX;
					ev_bool __values1 = pObjectX->openModelDatabase();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_DatasourceHelper_getDataset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper *pObjectX = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEntityDataset* __values1 = pObjectX->getDataset();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_DatasourceHelper_getModelDatabase_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper *pObjectX = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* __values1 = pObjectX->getModelDatabase();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_DatasourceHelper_closeDateset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper *pObjectX = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjXXXX;
					ev_bool __values1 = pObjectX->closeDateset();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
