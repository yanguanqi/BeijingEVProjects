/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/datasourcemanager/datasetactiveevent.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace FrameWorkProxy
		{
			namespace DataSourceManager
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_getDatasetName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					const EVString& __values1 = pObjectX->getDatasetName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_setDatasetName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					pObjectX->setDatasetName(name);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_getDataSourceName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					const EVString& __values1 = pObjectX->getDataSourceName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_setDataSourceName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					pObjectX->setDataSourceName(name);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_getSourceType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::EVDataSourceType __values1 = pObjectX->getSourceType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_setSourceType_1EVDataSourceType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::GeoDataset::EVDataSourceType type = (EarthView::World::Spatial::GeoDataset::EVDataSourceType) type_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					pObjectX->setSourceType(type);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_getDatasetType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->getDatasetType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_setDatasetType_1EVDatasetType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType type = (EarthView::World::Spatial::GeoDataset::EVDatasetType) type_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					pObjectX->setDatasetType(type);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_setModelDatasetAttrFilds_1CFields(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fields_j)
				{
					EarthView::World::Spatial::GeoDataset::CFields &fields = *(EarthView::World::Spatial::GeoDataset::CFields*) fields_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					pObjectX->setModelDatasetAttrFilds(fields);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_setVectorDatasetAttrFilds_1CFields(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fields_j)
				{
					EarthView::World::Spatial::GeoDataset::CFields &fields = *(EarthView::World::Spatial::GeoDataset::CFields*) fields_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					pObjectX->setVectorDatasetAttrFilds(fields);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_getModelDatasetAttrFilds_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					const EarthView::World::Spatial::GeoDataset::CFields* __values1 = pObjectX->getModelDatasetAttrFilds();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_setVectorDatasetInfo_1EVGeometryType_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j, jint coordSys_j)
				{
					EarthView::World::Spatial::Geometry::EVGeometryType type = (EarthView::World::Spatial::Geometry::EVGeometryType) type_j;
					ev_int32 coordSys = (ev_int32) coordSys_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					pObjectX->setVectorDatasetInfo(type, coordSys);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_setVectorDatasetInfo_1EVGeometryType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j, jstring wktCoordSys_j)
				{
					EarthView::World::Spatial::Geometry::EVGeometryType type = (EarthView::World::Spatial::Geometry::EVGeometryType) type_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* wktCoordSys_ch = (const ev_char*)__env->GetStringUTFChars(wktCoordSys_j,JNI_FALSE);
					EVString wktCoordSys = wktCoordSys_ch;
					__env->ReleaseStringUTFChars(wktCoordSys_j, (const char *)wktCoordSys_ch);
					#else
					const ev_wchar* wktCoordSys_ch = (const ev_wchar*)__env->GetStringChars(wktCoordSys_j,JNI_FALSE);
					EVString wktCoordSys = wktCoordSys_ch;
					__env->ReleaseStringChars(wktCoordSys_j, (const jchar *)wktCoordSys_ch);
					#endif
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					pObjectX->setVectorDatasetInfo(type, wktCoordSys);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_getVectorDatasetInfo_1EVGeometryType_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong type_j, jlong coordSys_j)
				{
					EarthView::World::Spatial::Geometry::EVGeometryType &type = *(EarthView::World::Spatial::Geometry::EVGeometryType*) type_j;
					ev_int32 &coordSys = *(ev_int32*) coordSys_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					pObjectX->getVectorDatasetInfo(type, coordSys);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_getVectorDatasetInfo_1EVGeometryType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong type_j, jlong wktCoordSys_j)
				{
					EarthView::World::Spatial::Geometry::EVGeometryType &type = *(EarthView::World::Spatial::Geometry::EVGeometryType*) type_j;
					EVString &wktCoordSys = *(EVString*) wktCoordSys_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					pObjectX->getVectorDatasetInfo(type, wktCoordSys);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_getVectorDatasetAttrFilds_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					const EarthView::World::Spatial::GeoDataset::CFields* __values1 = pObjectX->getVectorDatasetAttrFilds();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_setModelDatasetType_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isModelTemplateDataset_j)
				{
					ev_bool isModelTemplateDataset = (ev_bool) isModelTemplateDataset_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					pObjectX->setModelDatasetType(isModelTemplateDataset);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_getModelDatasetType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->getModelDatasetType();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_setModelDatasetCoordSys_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j, jint coordSys_j)
				{
					ev_int32 type = (ev_int32) type_j;
					ev_int32 coordSys = (ev_int32) coordSys_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					pObjectX->setModelDatasetCoordSys(type, coordSys);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_setCoordianteSystemName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong name_j)
				{
					EVString &name = *(EVString*) name_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					pObjectX->setCoordianteSystemName(name);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_getCoordianteSystemName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					const EVString& __values1 = pObjectX->getCoordianteSystemName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_getModelDatasetCoordSysType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getModelDatasetCoordSysType();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_getModelDatasetGeoCSType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					EarthView::World::Spatial::Utility::EVWellKnownGeoCSType __values1 = pObjectX->getModelDatasetGeoCSType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_getModelDatasetProjCSType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					EarthView::World::Spatial::Utility::EVWellKnownProjCSType __values1 = pObjectX->getModelDatasetProjCSType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_getCoordSys_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getCoordSys();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_getWKTCoordSys_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					EVString __values1 = pObjectX->getWKTCoordSys();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_getResponseState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->getResponseState();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_setResponseState_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean state_j)
				{
					ev_bool state = (ev_bool) state_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					pObjectX->setResponseState(state);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_setErrorMsg_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring msg_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* msg_ch = (const ev_char*)__env->GetStringUTFChars(msg_j,JNI_FALSE);
					const EVString msg = msg_ch;
					__env->ReleaseStringUTFChars(msg_j, (const char *)msg_ch);
					#else
					const ev_wchar* msg_ch = (const ev_wchar*)__env->GetStringChars(msg_j,JNI_FALSE);
					const EVString msg = msg_ch;
					__env->ReleaseStringChars(msg_j, (const jchar *)msg_ch);
					#endif
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					pObjectX->setErrorMsg(msg);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEvent_getErrorMsg_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjXXXX;
					EVString __values1 = pObjectX->getErrorMsg();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
		}
	}
}
