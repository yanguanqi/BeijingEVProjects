/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/datasourcemanager/datasourceactiveevent.h"
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEventArr_push_1back_1CDatasetActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent &t = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) t_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEventArr_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEventArr_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr*) pObjXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEventArr_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr*) pObjXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEventArr_insert_1ev_1uint32_1CDatasetActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent &t = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) t_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEventArr_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEventArr_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEventArr_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr& pObjectX = *(EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEventArr_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr*) pObjXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEventArr_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEventArr_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEventArr_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DatasetActiveEventArr_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEvent_00024DataSourceStateHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CDataSourceActiveEvent::DSS_Open,
						CDataSourceActiveEvent::DSS_Close
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEvent_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pObjXXXX;
					const EVString& __values1 = pObjectX->getName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEvent_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pObjXXXX;
					pObjectX->setName(name);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEvent_getDatasetActiveEventArr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pObjXXXX;
					const EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr& __values1 = pObjectX->getDatasetActiveEventArr();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEvent_getDatasetActiveEvent_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pObjXXXX;
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& __values1 = pObjectX->getDatasetActiveEvent(name);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEvent_dataSourceURL_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pObjXXXX;
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& __values1 = pObjectX->dataSourceURL();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEvent_setDataSourceURL_1CDataSourceURL(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong url_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL &url = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) url_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pObjXXXX;
					pObjectX->setDataSourceURL(url);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEvent_addDatasetActiveEvent_1CDatasetActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasetActiveEvent_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent &datasetActiveEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) datasetActiveEvent_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pObjXXXX;
					pObjectX->addDatasetActiveEvent(datasetActiveEvent);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEvent_removeDatasetActiveEvent_1CDatasetActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasetActiveEvent_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent &datasetActiveEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) datasetActiveEvent_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pObjXXXX;
					pObjectX->removeDatasetActiveEvent(datasetActiveEvent);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEvent_getResponseState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->getResponseState();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEvent_setResponseState_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean state_j)
				{
					ev_bool state = (ev_bool) state_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pObjXXXX;
					pObjectX->setResponseState(state);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEvent_getErrorMessage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pObjXXXX;
					EVString __values1 = pObjectX->getErrorMessage();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEvent_setErrorMessage_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring msg_j)
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
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pObjXXXX;
					pObjectX->setErrorMessage(msg);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEvent_getState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pObjXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent::DataSourceState __values1 = pObjectX->getState();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
		}
	}
}
