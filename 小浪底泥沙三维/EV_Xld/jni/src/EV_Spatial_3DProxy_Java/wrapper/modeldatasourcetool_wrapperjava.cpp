/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dproxy/modeldatasourcetool.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3dproxy_ModelErrorIDHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					modelerror_noerror,
					modelerror_initscenefile,
					modelerror_savescenefile,
					modelerror_opendatasource_src,
					modelerror_opendataset_src,
					modelerror_opendatasource_des,
					modelerror_opendataset_des,
					modelerror_createdatasource,
					modelerror_createdataset,
					modelerror_isrunning,
					modelerror_parametererror,
					modelerror_desdataseterror,
					modelerror_loaddataseterror,
					modelerrorcount
				};
				jintArray array = __env->NewIntArray(14);
				__env->SetIntArrayRegion(array, 0, 14, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3dproxy_ModelDataSourceTool_00024WorkTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					ModelDataSourceTool::WT_Export,
					ModelDataSourceTool::WT_Import,
					ModelDataSourceTool::WT_Copy
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelDataSourceTool_initEnvironment_1WorkType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint worktype_j)
			{
				EarthView::World::Spatial3DProxy::ModelDataSourceTool::WorkType worktype = (EarthView::World::Spatial3DProxy::ModelDataSourceTool::WorkType) worktype_j;
				EarthView::World::Spatial3DProxy::ModelDataSourceTool *pObjectX = (EarthView::World::Spatial3DProxy::ModelDataSourceTool*) pObjXXXX;
				ev_bool __values1 = pObjectX->initEnvironment(worktype);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_ModelDataSourceTool_reset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3DProxy::ModelDataSourceTool *pObjectX = (EarthView::World::Spatial3DProxy::ModelDataSourceTool*) pObjXXXX;
				pObjectX->reset();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelDataSourceTool_isRun_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3DProxy::ModelDataSourceTool *pObjectX = (EarthView::World::Spatial3DProxy::ModelDataSourceTool*) pObjXXXX;
				ev_bool __values1 = pObjectX->isRun();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_ModelDataSourceTool_setRunable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean runable_j)
			{
				ev_bool runable = (ev_bool) runable_j;
				EarthView::World::Spatial3DProxy::ModelDataSourceTool *pObjectX = (EarthView::World::Spatial3DProxy::ModelDataSourceTool*) pObjXXXX;
				pObjectX->setRunable(runable);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_ModelDataSourceTool_exportModelDataSet_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceurl_j, jstring datasetname_j, jstring exportfolder_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceurl_ch = (const ev_char*)__env->GetStringUTFChars(datasourceurl_j,JNI_FALSE);
				const EVString datasourceurl = datasourceurl_ch;
				__env->ReleaseStringUTFChars(datasourceurl_j, (const char *)datasourceurl_ch);
				#else
				const ev_wchar* datasourceurl_ch = (const ev_wchar*)__env->GetStringChars(datasourceurl_j,JNI_FALSE);
				const EVString datasourceurl = datasourceurl_ch;
				__env->ReleaseStringChars(datasourceurl_j, (const jchar *)datasourceurl_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasetname_ch = (const ev_char*)__env->GetStringUTFChars(datasetname_j,JNI_FALSE);
				const EVString datasetname = datasetname_ch;
				__env->ReleaseStringUTFChars(datasetname_j, (const char *)datasetname_ch);
				#else
				const ev_wchar* datasetname_ch = (const ev_wchar*)__env->GetStringChars(datasetname_j,JNI_FALSE);
				const EVString datasetname = datasetname_ch;
				__env->ReleaseStringChars(datasetname_j, (const jchar *)datasetname_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* exportfolder_ch = (const ev_char*)__env->GetStringUTFChars(exportfolder_j,JNI_FALSE);
				const EVString exportfolder = exportfolder_ch;
				__env->ReleaseStringUTFChars(exportfolder_j, (const char *)exportfolder_ch);
				#else
				const ev_wchar* exportfolder_ch = (const ev_wchar*)__env->GetStringChars(exportfolder_j,JNI_FALSE);
				const EVString exportfolder = exportfolder_ch;
				__env->ReleaseStringChars(exportfolder_j, (const jchar *)exportfolder_ch);
				#endif
				EarthView::World::Spatial3DProxy::ModelDataSourceTool *pObjectX = (EarthView::World::Spatial3DProxy::ModelDataSourceTool*) pObjXXXX;
				ev_bool __values1 = pObjectX->exportModelDataSet(datasourceurl, datasetname, exportfolder);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3dproxy_ModelDataSourceTool_percentage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3DProxy::ModelDataSourceTool *pObjectX = (EarthView::World::Spatial3DProxy::ModelDataSourceTool*) pObjXXXX;
				ev_int32 __values1 = pObjectX->percentage();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_ModelDataSourceTool_setPercentage_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint percentage_j)
			{
				ev_int32 percentage = (ev_int32) percentage_j;
				EarthView::World::Spatial3DProxy::ModelDataSourceTool *pObjectX = (EarthView::World::Spatial3DProxy::ModelDataSourceTool*) pObjXXXX;
				pObjectX->setPercentage(percentage);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3dproxy_ModelDataSourceTool_getLastError_1void(JNIEnv *__env , jclass __clazz)
			{
				EVString __values1 = EarthView::World::Spatial3DProxy::ModelDataSourceTool::getLastError();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_ModelDataSourceTool_setLastErrorID_1ev_1int32(JNIEnv *__env , jclass __clazz, jint errorid_j)
			{
				ev_int32 errorid = (ev_int32) errorid_j;
				EarthView::World::Spatial3DProxy::ModelDataSourceTool::setLastErrorID(errorid);
			}
		}
	}
}
