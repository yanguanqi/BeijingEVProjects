/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/datasourcemanager/datasourcemanager.h"
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
		namespace FrameWorkProxy
		{
			namespace DataSourceManager
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEventArr_push_1back_1CDataSourceActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent &t = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) t_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEventArr_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEventArr_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) pObjXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEventArr_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) pObjXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEventArr_insert_1ev_1uint32_1CDataSourceActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent &t = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) t_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEventArr_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEventArr_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEventArr_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& pObjectX = *(EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEventArr_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) pObjXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEventArr_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEventArr_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEventArr_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceActiveEventArr_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStructArr_push_1back_1CDataSourceURLStruct(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct &t = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*) t_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStructArr_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStructArr_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr*) pObjXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStructArr_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr*) pObjXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStructArr_insert_1ev_1uint32_1CDataSourceURLStruct(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct &t = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*) t_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStructArr_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStructArr_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStructArr_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr& pObjectX = *(EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStructArr_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr*) pObjXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStructArr_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStructArr_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStructArr_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStructArr_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr*) pObjXXXX;
					pObjectX->clear();
				}
				class JCDataSourceManagerProxy : public EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager
				{
				 private:
					EarthView::World::Core::ev_string m_createDataSource_CDataSourceURL_callback;
					EarthView::World::Core::ev_string m_deleteDataSource_CDataSourceURL_callback;
					EarthView::World::Core::ev_string m_openDataSource_CDataSourceURL_callback;
					EarthView::World::Core::ev_string m_closeDataSource_CDataSourceActiveEvent_callback;
					EarthView::World::Core::ev_string m_openDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback;
					EarthView::World::Core::ev_string m_createDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback;
					EarthView::World::Core::ev_string m_closeDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback;
					EarthView::World::Core::ev_string m_closeAllDatasets_CDataSourceActiveEvent_EVDataSourceType_callback;
					EarthView::World::Core::ev_string m_getDataSourceName_EVString_callback;
					EarthView::World::Core::ev_string m_closeAllDatasets_CDataSourceActiveEvent_callback;
					EarthView::World::Core::ev_string m_importData_CDataSourceActiveEvent_CDatasetActiveEvent_callback;
					EarthView::World::Core::ev_string m_exportData_CDataSourceActiveEvent_CDatasetActiveEvent_callback;
					EarthView::World::Core::ev_string m_getDataSourceActiveEventArr_void_callback;
					EarthView::World::Core::ev_string m_getInternalDataSourceActiveEventArr_void_callback;
					EarthView::World::Core::ev_string m_getDataSourceActiveEventArr_CDataSourceURL_callback;
					EarthView::World::Core::ev_string m_getDataSourcePropertyStringInterfacePtr_void_callback;
					EarthView::World::Core::ev_string m_getDataSetPropertyStringInterfacePtr_void_callback;
				public:
					JCDataSourceManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CDataSourceManager(pList)
					{
					}
					ev_void unRegisterJavaReference()
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						if(__gr != NULL)
						{
							delete __gr;
							this->registerJavaReference(NULL);
						}
					}
				public:
					void register_createDataSource_CDataSourceURL_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createDataSource_CDataSourceURL_callback = __method;
					}
					void register_deleteDataSource_CDataSourceURL_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_deleteDataSource_CDataSourceURL_callback = __method;
					}
					void register_openDataSource_CDataSourceURL_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_openDataSource_CDataSourceURL_callback = __method;
					}
					void register_closeDataSource_CDataSourceActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_closeDataSource_CDataSourceActiveEvent_callback = __method;
					}
					void register_openDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_openDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback = __method;
					}
					void register_createDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback = __method;
					}
					void register_closeDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_closeDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback = __method;
					}
					void register_closeAllDatasets_CDataSourceActiveEvent_EVDataSourceType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_closeAllDatasets_CDataSourceActiveEvent_EVDataSourceType_callback = __method;
					}
					void register_getDataSourceName_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDataSourceName_EVString_callback = __method;
					}
					void register_closeAllDatasets_CDataSourceActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_closeAllDatasets_CDataSourceActiveEvent_callback = __method;
					}
					void register_importData_CDataSourceActiveEvent_CDatasetActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_importData_CDataSourceActiveEvent_CDatasetActiveEvent_callback = __method;
					}
					void register_exportData_CDataSourceActiveEvent_CDatasetActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_exportData_CDataSourceActiveEvent_CDatasetActiveEvent_callback = __method;
					}
					void register_getDataSourceActiveEventArr_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDataSourceActiveEventArr_void_callback = __method;
					}
					void register_getInternalDataSourceActiveEventArr_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getInternalDataSourceActiveEventArr_void_callback = __method;
					}
					void register_getDataSourceActiveEventArr_CDataSourceURL_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDataSourceActiveEventArr_CDataSourceURL_callback = __method;
					}
					void register_getDataSourcePropertyStringInterfacePtr_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDataSourcePropertyStringInterfacePtr_void_callback = __method;
					}
					void register_getDataSetPropertyStringInterfacePtr_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDataSetPropertyStringInterfacePtr_void_callback = __method;
					}
					virtual ev_bool createDataSource(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL)
					{
						if (this->_gRef != NULL && this->m_createDataSource_CDataSourceURL_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong datasourceURL_j = (jlong) &datasourceURL;
							jmethodID __method = __gr->getMethod("createDataSource_CDataSourceURL_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , datasourceURL_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDataSourceManager::createDataSource(datasourceURL);
						}
					}
					virtual ev_bool deleteDataSource(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL)
					{
						if (this->_gRef != NULL && this->m_deleteDataSource_CDataSourceURL_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong datasourceURL_j = (jlong) &datasourceURL;
							jmethodID __method = __gr->getMethod("deleteDataSource_CDataSourceURL_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , datasourceURL_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDataSourceManager::deleteDataSource(datasourceURL);
						}
					}
					virtual ev_bool openDataSource(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL)
					{
						if (this->_gRef != NULL && this->m_openDataSource_CDataSourceURL_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong datasourceURL_j = (jlong) &datasourceURL;
							jmethodID __method = __gr->getMethod("openDataSource_CDataSourceURL_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , datasourceURL_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDataSourceManager::openDataSource(datasourceURL);
						}
					}
					virtual ev_bool closeDataSource(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent)
					{
						if (this->_gRef != NULL && this->m_closeDataSource_CDataSourceActiveEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong dataSourceEvent_j = (jlong) &dataSourceEvent;
							jmethodID __method = __gr->getMethod("closeDataSource_CDataSourceActiveEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , dataSourceEvent_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDataSourceManager::closeDataSource(dataSourceEvent);
						}
					}
					virtual ev_bool openDataset(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent, const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& dataSetEvent)
					{
						if (this->_gRef != NULL && this->m_openDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong dataSourceEvent_j = (jlong) &dataSourceEvent;
							jlong dataSetEvent_j = (jlong) &dataSetEvent;
							jmethodID __method = __gr->getMethod("openDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , dataSourceEvent_j, dataSetEvent_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDataSourceManager::openDataset(dataSourceEvent, dataSetEvent);
						}
					}
					virtual ev_bool createDataset(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent, const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& dataSetEvent)
					{
						if (this->_gRef != NULL && this->m_createDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong dataSourceEvent_j = (jlong) &dataSourceEvent;
							jlong dataSetEvent_j = (jlong) &dataSetEvent;
							jmethodID __method = __gr->getMethod("createDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , dataSourceEvent_j, dataSetEvent_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDataSourceManager::createDataset(dataSourceEvent, dataSetEvent);
						}
					}
					virtual ev_bool closeDataset(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent, const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& dataSetEvent)
					{
						if (this->_gRef != NULL && this->m_closeDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong dataSourceEvent_j = (jlong) &dataSourceEvent;
							jlong dataSetEvent_j = (jlong) &dataSetEvent;
							jmethodID __method = __gr->getMethod("closeDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , dataSourceEvent_j, dataSetEvent_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDataSourceManager::closeDataset(dataSourceEvent, dataSetEvent);
						}
					}
					virtual ev_bool closeAllDatasets(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent, const EarthView::World::Spatial::GeoDataset::EVDataSourceType dataSourceType)
					{
						if (this->_gRef != NULL && this->m_closeAllDatasets_CDataSourceActiveEvent_EVDataSourceType_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong dataSourceEvent_j = (jlong) &dataSourceEvent;
							jint dataSourceType_j = (jint) dataSourceType;
							jmethodID __method = __gr->getMethod("closeAllDatasets_CDataSourceActiveEvent_EVDataSourceType_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , dataSourceEvent_j, dataSourceType_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDataSourceManager::closeAllDatasets(dataSourceEvent, dataSourceType);
						}
					}
					virtual EVString getDataSourceName(const EVString& aliasName)
					{
						if (this->_gRef != NULL && this->m_getDataSourceName_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring aliasName_wch = aliasName;
							jstring aliasName_j = __env->NewString((const jchar*)aliasName_wch.getString(), aliasName_wch.size());
							jmethodID __method = __gr->getMethod("getDataSourceName_EVString_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , aliasName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CDataSourceManager::getDataSourceName(aliasName);
						}
					}
					virtual ev_bool closeAllDatasets(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent)
					{
						if (this->_gRef != NULL && this->m_closeAllDatasets_CDataSourceActiveEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong dataSourceEvent_j = (jlong) &dataSourceEvent;
							jmethodID __method = __gr->getMethod("closeAllDatasets_CDataSourceActiveEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , dataSourceEvent_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDataSourceManager::closeAllDatasets(dataSourceEvent);
						}
					}
					virtual ev_bool importData(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent, const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& dataSetEvent)
					{
						if (this->_gRef != NULL && this->m_importData_CDataSourceActiveEvent_CDatasetActiveEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong dataSourceEvent_j = (jlong) &dataSourceEvent;
							jlong dataSetEvent_j = (jlong) &dataSetEvent;
							jmethodID __method = __gr->getMethod("importData_CDataSourceActiveEvent_CDatasetActiveEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , dataSourceEvent_j, dataSetEvent_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDataSourceManager::importData(dataSourceEvent, dataSetEvent);
						}
					}
					virtual ev_bool exportData(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent, const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& dataSetEvent)
					{
						if (this->_gRef != NULL && this->m_exportData_CDataSourceActiveEvent_CDatasetActiveEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong dataSourceEvent_j = (jlong) &dataSourceEvent;
							jlong dataSetEvent_j = (jlong) &dataSetEvent;
							jmethodID __method = __gr->getMethod("exportData_CDataSourceActiveEvent_CDatasetActiveEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , dataSourceEvent_j, dataSetEvent_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDataSourceManager::exportData(dataSourceEvent, dataSetEvent);
						}
					}
					virtual const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& getDataSourceActiveEventArr()
					{
						if (this->_gRef != NULL && this->m_getDataSourceActiveEventArr_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getDataSourceActiveEventArr_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr &__values1 = *(const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDataSourceManager::getDataSourceActiveEventArr();
						}
					}
					virtual EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& getInternalDataSourceActiveEventArr()
					{
						if (this->_gRef != NULL && this->m_getInternalDataSourceActiveEventArr_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getInternalDataSourceActiveEventArr_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr &__values1 = *(EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDataSourceManager::getInternalDataSourceActiveEventArr();
						}
					}
					virtual const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& getDataSourceActiveEventArr(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL)
					{
						if (this->_gRef != NULL && this->m_getDataSourceActiveEventArr_CDataSourceURL_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong datasourceURL_j = (jlong) &datasourceURL;
							jmethodID __method = __gr->getMethod("getDataSourceActiveEventArr_CDataSourceURL_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , datasourceURL_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr &__values1 = *(const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDataSourceManager::getDataSourceActiveEventArr(datasourceURL);
						}
					}
					virtual const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface* getDataSourcePropertyStringInterfacePtr()
					{
						if (this->_gRef != NULL && this->m_getDataSourcePropertyStringInterfacePtr_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getDataSourcePropertyStringInterfacePtr_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface *__values1 = (const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDataSourceManager::getDataSourcePropertyStringInterfacePtr();
						}
					}
					virtual const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface* getDataSetPropertyStringInterfacePtr()
					{
						if (this->_gRef != NULL && this->m_getDataSetPropertyStringInterfacePtr_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getDataSetPropertyStringInterfacePtr_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface *__values1 = (const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDataSourceManager::getDataSetPropertyStringInterfacePtr();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCDataSourceManagerProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager& __values1 = EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getSingleton();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* __values1 = EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getSingletonPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_createDataSource_1CDataSourceURL(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL &datasourceURL = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) datasourceURL_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::createDataSource(datasourceURL);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->createDataSource(datasourceURL);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_register_1createDataSource_1CDataSourceURL(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceManagerProxy *pObjectX = (JCDataSourceManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createDataSource_CDataSourceURL_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createDataSource_CDataSourceURL_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_createDataSource_1CDataSourceURL_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL &datasourceURL = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) datasourceURL_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::createDataSource(datasourceURL);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_deleteDataSource_1CDataSourceURL(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL &datasourceURL = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) datasourceURL_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::deleteDataSource(datasourceURL);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->deleteDataSource(datasourceURL);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_register_1deleteDataSource_1CDataSourceURL(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceManagerProxy *pObjectX = (JCDataSourceManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_deleteDataSource_CDataSourceURL_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"deleteDataSource_CDataSourceURL_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_deleteDataSource_1CDataSourceURL_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL &datasourceURL = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) datasourceURL_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::deleteDataSource(datasourceURL);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_openDataSource_1CDataSourceURL(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL &datasourceURL = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) datasourceURL_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::openDataSource(datasourceURL);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->openDataSource(datasourceURL);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_register_1openDataSource_1CDataSourceURL(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceManagerProxy *pObjectX = (JCDataSourceManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_openDataSource_CDataSourceURL_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"openDataSource_CDataSourceURL_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_openDataSource_1CDataSourceURL_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL &datasourceURL = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) datasourceURL_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::openDataSource(datasourceURL);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_closeDataSource_1CDataSourceURL(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL &datasourceURL = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) datasourceURL_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->closeDataSource(datasourceURL);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_createModelDataset_1CDataSourceURL_1EVString_1CFields_1ev_1bool_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j, jstring datasetName_j, jlong fields_j, jboolean isTemplate_j, jint coordSysType_j, jint coordSys_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL &datasourceURL = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) datasourceURL_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::CFields &fields = *(EarthView::World::Spatial::GeoDataset::CFields*) fields_j;
					ev_bool isTemplate = (ev_bool) isTemplate_j;
					ev_int32 coordSysType = (ev_int32) coordSysType_j;
					ev_int32 coordSys = (ev_int32) coordSys_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->createModelDataset(datasourceURL, datasetName, fields, isTemplate, coordSysType, coordSys);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_createEffectDataset_1CDataSourceURL_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j, jstring datasetName_j, jint coordsys_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL &datasourceURL = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) datasourceURL_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					ev_int32 coordsys = (ev_int32) coordsys_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->createEffectDataset(datasourceURL, datasetName, coordsys);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_createVectorDataset_1CDataSourceURL_1EVString_1EVGeometryType_1ev_1int32_1CFields(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j, jstring datasetName_j, jint type_j, jint coordSys_j, jlong attrFields_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL &datasourceURL = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) datasourceURL_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					const EarthView::World::Spatial::Geometry::EVGeometryType type = (const EarthView::World::Spatial::Geometry::EVGeometryType) type_j;
					const ev_int32 coordSys = (const ev_int32) coordSys_j;
					EarthView::World::Spatial::GeoDataset::CFields &attrFields = *(EarthView::World::Spatial::GeoDataset::CFields*) attrFields_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->createVectorDataset(datasourceURL, datasetName, type, coordSys, attrFields);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_createVectorDataset_1CDataSourceURL_1EVString_1EVGeometryType_1EVString_1CFields(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j, jstring datasetName_j, jint type_j, jstring wktCoordSys_j, jlong attrFields_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL &datasourceURL = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) datasourceURL_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					const EarthView::World::Spatial::Geometry::EVGeometryType type = (const EarthView::World::Spatial::Geometry::EVGeometryType) type_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* wktCoordSys_ch = (const ev_char*)__env->GetStringUTFChars(wktCoordSys_j,JNI_FALSE);
					const EVString wktCoordSys = wktCoordSys_ch;
					__env->ReleaseStringUTFChars(wktCoordSys_j, (const char *)wktCoordSys_ch);
					#else
					const ev_wchar* wktCoordSys_ch = (const ev_wchar*)__env->GetStringChars(wktCoordSys_j,JNI_FALSE);
					const EVString wktCoordSys = wktCoordSys_ch;
					__env->ReleaseStringChars(wktCoordSys_j, (const jchar *)wktCoordSys_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::CFields &attrFields = *(EarthView::World::Spatial::GeoDataset::CFields*) attrFields_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->createVectorDataset(datasourceURL, datasetName, type, wktCoordSys, attrFields);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_createKmlDataset_1CDataSourceURL_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j, jstring datasetName_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL &datasourceURL = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) datasourceURL_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->createKmlDataset(datasourceURL, datasetName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_addKmlDataset_1CDataSourceURL_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j, jstring datasetPath_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL &datasourceURL = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) datasourceURL_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetPath_ch = (const ev_char*)__env->GetStringUTFChars(datasetPath_j,JNI_FALSE);
					const EVString datasetPath = datasetPath_ch;
					__env->ReleaseStringUTFChars(datasetPath_j, (const char *)datasetPath_ch);
					#else
					const ev_wchar* datasetPath_ch = (const ev_wchar*)__env->GetStringChars(datasetPath_j,JNI_FALSE);
					const EVString datasetPath = datasetPath_ch;
					__env->ReleaseStringChars(datasetPath_j, (const jchar *)datasetPath_ch);
					#endif
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->addKmlDataset(datasourceURL, datasetPath);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_closeDataset_1CDataSourceURL_1EVString_1EVDataSourceType_1EVDatasetType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j, jstring datasetName_j, jint sourcetype_j, jint datasettype_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL &datasourceURL = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) datasourceURL_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::EVDataSourceType sourcetype = (EarthView::World::Spatial::GeoDataset::EVDataSourceType) sourcetype_j;
					EarthView::World::Spatial::GeoDataset::EVDatasetType datasettype = (EarthView::World::Spatial::GeoDataset::EVDatasetType) datasettype_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->closeDataset(datasourceURL, datasetName, sourcetype, datasettype);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_closeAllDatasets_1CDataSourceURL(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL &datasourceURL = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) datasourceURL_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->closeAllDatasets(datasourceURL);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_closeAllDatasets_1CDataSourceURL_1EVDataSourceType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j, jint datasourcetype_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL &datasourceURL = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) datasourceURL_j;
					EarthView::World::Spatial::GeoDataset::EVDataSourceType datasourcetype = (EarthView::World::Spatial::GeoDataset::EVDataSourceType) datasourcetype_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->closeAllDatasets(datasourceURL, datasourcetype);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_getDBDataSourceArr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr __values1 = pObjectX->getDBDataSourceArr();
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr *returnvalues = new EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_getFileDataSourceArr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr __values1 = pObjectX->getFileDataSourceArr();
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr *returnvalues = new EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_getWebDataSourceArr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr __values1 = pObjectX->getWebDataSourceArr();
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr *returnvalues = new EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_closeDataSource_1CDataSourceActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataSourceEvent_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent &dataSourceEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) dataSourceEvent_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::closeDataSource(dataSourceEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->closeDataSource(dataSourceEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_register_1closeDataSource_1CDataSourceActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceManagerProxy *pObjectX = (JCDataSourceManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_closeDataSource_CDataSourceActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"closeDataSource_CDataSourceActiveEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_closeDataSource_1CDataSourceActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataSourceEvent_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent &dataSourceEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) dataSourceEvent_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::closeDataSource(dataSourceEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_openDataset_1CDataSourceActiveEvent_1CDatasetActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataSourceEvent_j, jlong dataSetEvent_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent &dataSourceEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) dataSourceEvent_j;
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent &dataSetEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) dataSetEvent_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::openDataset(dataSourceEvent, dataSetEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->openDataset(dataSourceEvent, dataSetEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_register_1openDataset_1CDataSourceActiveEvent_1CDatasetActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceManagerProxy *pObjectX = (JCDataSourceManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_openDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"openDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_openDataset_1CDataSourceActiveEvent_1CDatasetActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataSourceEvent_j, jlong dataSetEvent_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent &dataSourceEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) dataSourceEvent_j;
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent &dataSetEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) dataSetEvent_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::openDataset(dataSourceEvent, dataSetEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_createDataset_1CDataSourceActiveEvent_1CDatasetActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataSourceEvent_j, jlong dataSetEvent_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent &dataSourceEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) dataSourceEvent_j;
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent &dataSetEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) dataSetEvent_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::createDataset(dataSourceEvent, dataSetEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->createDataset(dataSourceEvent, dataSetEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_register_1createDataset_1CDataSourceActiveEvent_1CDatasetActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceManagerProxy *pObjectX = (JCDataSourceManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_createDataset_1CDataSourceActiveEvent_1CDatasetActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataSourceEvent_j, jlong dataSetEvent_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent &dataSourceEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) dataSourceEvent_j;
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent &dataSetEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) dataSetEvent_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::createDataset(dataSourceEvent, dataSetEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_closeDataset_1CDataSourceActiveEvent_1CDatasetActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataSourceEvent_j, jlong dataSetEvent_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent &dataSourceEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) dataSourceEvent_j;
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent &dataSetEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) dataSetEvent_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::closeDataset(dataSourceEvent, dataSetEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->closeDataset(dataSourceEvent, dataSetEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_register_1closeDataset_1CDataSourceActiveEvent_1CDatasetActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceManagerProxy *pObjectX = (JCDataSourceManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_closeDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"closeDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_closeDataset_1CDataSourceActiveEvent_1CDatasetActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataSourceEvent_j, jlong dataSetEvent_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent &dataSourceEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) dataSourceEvent_j;
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent &dataSetEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) dataSetEvent_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::closeDataset(dataSourceEvent, dataSetEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_closeAllDatasets_1CDataSourceActiveEvent_1EVDataSourceType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataSourceEvent_j, jint dataSourceType_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent &dataSourceEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) dataSourceEvent_j;
					const EarthView::World::Spatial::GeoDataset::EVDataSourceType dataSourceType = (EarthView::World::Spatial::GeoDataset::EVDataSourceType) dataSourceType_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::closeAllDatasets(dataSourceEvent, dataSourceType);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->closeAllDatasets(dataSourceEvent, dataSourceType);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_register_1closeAllDatasets_1CDataSourceActiveEvent_1EVDataSourceType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceManagerProxy *pObjectX = (JCDataSourceManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_closeAllDatasets_CDataSourceActiveEvent_EVDataSourceType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"closeAllDatasets_CDataSourceActiveEvent_EVDataSourceType_callback", "(JI)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_closeAllDatasets_1CDataSourceActiveEvent_1EVDataSourceType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataSourceEvent_j, jint dataSourceType_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent &dataSourceEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) dataSourceEvent_j;
					const EarthView::World::Spatial::GeoDataset::EVDataSourceType dataSourceType = (EarthView::World::Spatial::GeoDataset::EVDataSourceType) dataSourceType_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::closeAllDatasets(dataSourceEvent, dataSourceType);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_getDataSourceName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring aliasName_j)
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
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceManagerProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getDataSourceName(aliasName);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getDataSourceName(aliasName);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_register_1getDataSourceName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceManagerProxy *pObjectX = (JCDataSourceManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDataSourceName_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDataSourceName_EVString_callback", "(Ljava/lang/String;)Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_getDataSourceName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring aliasName_j)
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
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getDataSourceName(aliasName);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_closeAllDatasets_1CDataSourceActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataSourceEvent_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent &dataSourceEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) dataSourceEvent_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::closeAllDatasets(dataSourceEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->closeAllDatasets(dataSourceEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_register_1closeAllDatasets_1CDataSourceActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceManagerProxy *pObjectX = (JCDataSourceManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_closeAllDatasets_CDataSourceActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"closeAllDatasets_CDataSourceActiveEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_closeAllDatasets_1CDataSourceActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataSourceEvent_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent &dataSourceEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) dataSourceEvent_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::closeAllDatasets(dataSourceEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_importData_1CDataSourceActiveEvent_1CDatasetActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataSourceEvent_j, jlong dataSetEvent_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent &dataSourceEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) dataSourceEvent_j;
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent &dataSetEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) dataSetEvent_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::importData(dataSourceEvent, dataSetEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->importData(dataSourceEvent, dataSetEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_register_1importData_1CDataSourceActiveEvent_1CDatasetActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceManagerProxy *pObjectX = (JCDataSourceManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_importData_CDataSourceActiveEvent_CDatasetActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"importData_CDataSourceActiveEvent_CDatasetActiveEvent_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_importData_1CDataSourceActiveEvent_1CDatasetActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataSourceEvent_j, jlong dataSetEvent_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent &dataSourceEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) dataSourceEvent_j;
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent &dataSetEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) dataSetEvent_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::importData(dataSourceEvent, dataSetEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_exportData_1CDataSourceActiveEvent_1CDatasetActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataSourceEvent_j, jlong dataSetEvent_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent &dataSourceEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) dataSourceEvent_j;
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent &dataSetEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) dataSetEvent_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::exportData(dataSourceEvent, dataSetEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->exportData(dataSourceEvent, dataSetEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_register_1exportData_1CDataSourceActiveEvent_1CDatasetActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceManagerProxy *pObjectX = (JCDataSourceManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_exportData_CDataSourceActiveEvent_CDatasetActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"exportData_CDataSourceActiveEvent_CDatasetActiveEvent_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_exportData_1CDataSourceActiveEvent_1CDatasetActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataSourceEvent_j, jlong dataSetEvent_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent &dataSourceEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) dataSourceEvent_j;
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent &dataSetEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) dataSetEvent_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::exportData(dataSourceEvent, dataSetEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_getDataSourceActiveEventArr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceManagerProxy))
					{
						const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getDataSourceActiveEventArr();
						jlong __values1_j = (jlong) &__values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& __values1 = pObjectX->getDataSourceActiveEventArr();
						jlong __values1_j = (jlong) &__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_register_1getDataSourceActiveEventArr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceManagerProxy *pObjectX = (JCDataSourceManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDataSourceActiveEventArr_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDataSourceActiveEventArr_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_getDataSourceActiveEventArr_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getDataSourceActiveEventArr();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_getInternalDataSourceActiveEventArr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceManagerProxy))
					{
						EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getInternalDataSourceActiveEventArr();
						jlong __values1_j = (jlong) &__values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& __values1 = pObjectX->getInternalDataSourceActiveEventArr();
						jlong __values1_j = (jlong) &__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_register_1getInternalDataSourceActiveEventArr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceManagerProxy *pObjectX = (JCDataSourceManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getInternalDataSourceActiveEventArr_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getInternalDataSourceActiveEventArr_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_getInternalDataSourceActiveEventArr_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getInternalDataSourceActiveEventArr();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_getDataSourceActiveEventArr_1CDataSourceURL(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL &datasourceURL = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) datasourceURL_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceManagerProxy))
					{
						const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getDataSourceActiveEventArr(datasourceURL);
						jlong __values1_j = (jlong) &__values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& __values1 = pObjectX->getDataSourceActiveEventArr(datasourceURL);
						jlong __values1_j = (jlong) &__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_register_1getDataSourceActiveEventArr_1CDataSourceURL(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceManagerProxy *pObjectX = (JCDataSourceManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDataSourceActiveEventArr_CDataSourceURL_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDataSourceActiveEventArr_CDataSourceURL_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_getDataSourceActiveEventArr_1CDataSourceURL_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL &datasourceURL = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) datasourceURL_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getDataSourceActiveEventArr(datasourceURL);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_sendActiveEvent_1CEvent(JNIEnv *__env , jclass __clazz, jlong pEvent_j)
				{
					EarthView::World::Core::CEvent *pEvent = (EarthView::World::Core::CEvent*) pEvent_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::sendActiveEvent(pEvent);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_showModelManager_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dataSourceName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* dataSourceName_ch = (const ev_char*)__env->GetStringUTFChars(dataSourceName_j,JNI_FALSE);
					const EVString dataSourceName = dataSourceName_ch;
					__env->ReleaseStringUTFChars(dataSourceName_j, (const char *)dataSourceName_ch);
					#else
					const ev_wchar* dataSourceName_ch = (const ev_wchar*)__env->GetStringChars(dataSourceName_j,JNI_FALSE);
					const EVString dataSourceName = dataSourceName_ch;
					__env->ReleaseStringChars(dataSourceName_j, (const jchar *)dataSourceName_ch);
					#endif
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					pObjectX->showModelManager(dataSourceName);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_showEffectManager_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dataSourceName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* dataSourceName_ch = (const ev_char*)__env->GetStringUTFChars(dataSourceName_j,JNI_FALSE);
					const EVString dataSourceName = dataSourceName_ch;
					__env->ReleaseStringUTFChars(dataSourceName_j, (const char *)dataSourceName_ch);
					#else
					const ev_wchar* dataSourceName_ch = (const ev_wchar*)__env->GetStringChars(dataSourceName_j,JNI_FALSE);
					const EVString dataSourceName = dataSourceName_ch;
					__env->ReleaseStringChars(dataSourceName_j, (const jchar *)dataSourceName_ch);
					#endif
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					pObjectX->showEffectManager(dataSourceName);
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_00024CopyRetCodeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CDataSourceManager::CopySuccess,
						CDataSourceManager::CopyFailed
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_copyDataSetTo_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sourceSourceName_j, jstring dsName_j, jstring targetSourceName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* sourceSourceName_ch = (const ev_char*)__env->GetStringUTFChars(sourceSourceName_j,JNI_FALSE);
					const EVString sourceSourceName = sourceSourceName_ch;
					__env->ReleaseStringUTFChars(sourceSourceName_j, (const char *)sourceSourceName_ch);
					#else
					const ev_wchar* sourceSourceName_ch = (const ev_wchar*)__env->GetStringChars(sourceSourceName_j,JNI_FALSE);
					const EVString sourceSourceName = sourceSourceName_ch;
					__env->ReleaseStringChars(sourceSourceName_j, (const jchar *)sourceSourceName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* dsName_ch = (const ev_char*)__env->GetStringUTFChars(dsName_j,JNI_FALSE);
					const EVString dsName = dsName_ch;
					__env->ReleaseStringUTFChars(dsName_j, (const char *)dsName_ch);
					#else
					const ev_wchar* dsName_ch = (const ev_wchar*)__env->GetStringChars(dsName_j,JNI_FALSE);
					const EVString dsName = dsName_ch;
					__env->ReleaseStringChars(dsName_j, (const jchar *)dsName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* targetSourceName_ch = (const ev_char*)__env->GetStringUTFChars(targetSourceName_j,JNI_FALSE);
					const EVString targetSourceName = targetSourceName_ch;
					__env->ReleaseStringUTFChars(targetSourceName_j, (const char *)targetSourceName_ch);
					#else
					const ev_wchar* targetSourceName_ch = (const ev_wchar*)__env->GetStringChars(targetSourceName_j,JNI_FALSE);
					const EVString targetSourceName = targetSourceName_ch;
					__env->ReleaseStringChars(targetSourceName_j, (const jchar *)targetSourceName_ch);
					#endif
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					ev_int32 __values1 = pObjectX->copyDataSetTo(sourceSourceName, dsName, targetSourceName);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_setLastErrorString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring error_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* error_ch = (const ev_char*)__env->GetStringUTFChars(error_j,JNI_FALSE);
					const EVString error = error_ch;
					__env->ReleaseStringUTFChars(error_j, (const char *)error_ch);
					#else
					const ev_wchar* error_ch = (const ev_wchar*)__env->GetStringChars(error_j,JNI_FALSE);
					const EVString error = error_ch;
					__env->ReleaseStringChars(error_j, (const jchar *)error_ch);
					#endif
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					pObjectX->setLastErrorString(error);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_getLastErrorString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					EVString __values1 = pObjectX->getLastErrorString();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_getModelDataSourcePath_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring modelDataSourceName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* modelDataSourceName_ch = (const ev_char*)__env->GetStringUTFChars(modelDataSourceName_j,JNI_FALSE);
					const EVString modelDataSourceName = modelDataSourceName_ch;
					__env->ReleaseStringUTFChars(modelDataSourceName_j, (const char *)modelDataSourceName_ch);
					#else
					const ev_wchar* modelDataSourceName_ch = (const ev_wchar*)__env->GetStringChars(modelDataSourceName_j,JNI_FALSE);
					const EVString modelDataSourceName = modelDataSourceName_ch;
					__env->ReleaseStringChars(modelDataSourceName_j, (const jchar *)modelDataSourceName_ch);
					#endif
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					EVString __values1 = pObjectX->getModelDataSourcePath(modelDataSourceName);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_getDBDataSourceURL_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourcename_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourcename_ch = (const ev_char*)__env->GetStringUTFChars(datasourcename_j,JNI_FALSE);
					const EVString datasourcename = datasourcename_ch;
					__env->ReleaseStringUTFChars(datasourcename_j, (const char *)datasourcename_ch);
					#else
					const ev_wchar* datasourcename_ch = (const ev_wchar*)__env->GetStringChars(datasourcename_j,JNI_FALSE);
					const EVString datasourcename = datasourcename_ch;
					__env->ReleaseStringChars(datasourcename_j, (const jchar *)datasourcename_ch);
					#endif
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL __values1 = pObjectX->getDBDataSourceURL(datasourcename);
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL *returnvalues = new EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_deleteDataset_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dataSourceAliasName_j, jstring datasetName_j)
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
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->deleteDataset(dataSourceAliasName, datasetName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				class JCDataSourcePropertyStringInterfaceProxy : public EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface
				{
				 private:
					EarthView::World::Core::ev_string m_setParameter_EVString_EVString_callback;
					EarthView::World::Core::ev_string m_setParameter_EVString_ev_bool_ev_bool_callback;
					EarthView::World::Core::ev_string m_setParameterList_CommonStringPairList_callback;
					EarthView::World::Core::ev_string m_getParameter_EVString_callback;
					EarthView::World::Core::ev_string m_copyParametersTo_CStringInterface_callback;
				public:
					JCDataSourcePropertyStringInterfaceProxy(EarthView::World::Core::CNameValuePairList *pList) : CDataSourcePropertyStringInterface(pList)
					{
					}
					ev_void unRegisterJavaReference()
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						if(__gr != NULL)
						{
							delete __gr;
							this->registerJavaReference(NULL);
						}
					}
				public:
					void register_setParameter_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setParameter_EVString_EVString_callback = __method;
					}
					void register_setParameter_EVString_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setParameter_EVString_ev_bool_ev_bool_callback = __method;
					}
					void register_setParameterList_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setParameterList_CommonStringPairList_callback = __method;
					}
					void register_getParameter_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getParameter_EVString_callback = __method;
					}
					void register_copyParametersTo_CStringInterface_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_copyParametersTo_CStringInterface_callback = __method;
					}
					virtual ev_bool setParameter(const EVString& name, const EVString& value)
					{
						if (this->_gRef != NULL && this->m_setParameter_EVString_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring name_wch = name;
							jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
							EarthView::World::Core::ev_wstring value_wch = value;
							jstring value_j = __env->NewString((const jchar*)value_wch.getString(), value_wch.size());
							jmethodID __method = __gr->getMethod("setParameter_EVString_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j, value_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDataSourcePropertyStringInterface::setParameter(name, value);
						}
					}
					virtual ev_bool setParameter(const EVString& name, ev_bool readOnly, ev_bool enable)
					{
						if (this->_gRef != NULL && this->m_setParameter_EVString_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring name_wch = name;
							jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
							jboolean readOnly_j = (jboolean) readOnly;
							jboolean enable_j = (jboolean) enable;
							jmethodID __method = __gr->getMethod("setParameter_EVString_ev_bool_ev_bool_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j, readOnly_j, enable_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDataSourcePropertyStringInterface::setParameter(name, readOnly, enable);
						}
					}
					virtual void setParameterList(const EarthView::World::Core::CommonStringPairList& paramList)
					{
						if (this->_gRef != NULL && this->m_setParameterList_CommonStringPairList_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong paramList_j = (jlong) &paramList;
							jmethodID __method = __gr->getMethod("setParameterList_CommonStringPairList_callback");
							__env->CallVoidMethod(__obj, __method , paramList_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CDataSourcePropertyStringInterface::setParameterList(paramList);
						}
					}
					virtual EVString getParameter(const EVString& name) const
					{
						if (this->_gRef != NULL && this->m_getParameter_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring name_wch = name;
							jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
							jmethodID __method = __gr->getMethod("getParameter_EVString_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , name_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CDataSourcePropertyStringInterface::getParameter(name);
						}
					}
					virtual void copyParametersTo(EarthView::World::Core::CStringInterface* dest) const
					{
						if (this->_gRef != NULL && this->m_copyParametersTo_CStringInterface_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong dest_j = (jlong) dest;
							jmethodID __method = __gr->getMethod("copyParametersTo_CStringInterface_callback");
							__env->CallVoidMethod(__obj, __method , dest_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CDataSourcePropertyStringInterface::copyParametersTo(dest);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCDataSourcePropertyStringInterfaceProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_00024DataSourcePropertyStringInterface_register_1setParameter_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourcePropertyStringInterfaceProxy *pObjectX = (JCDataSourcePropertyStringInterfaceProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setParameter_EVString_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setParameter_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_00024DataSourcePropertyStringInterface_register_1setParameter_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourcePropertyStringInterfaceProxy *pObjectX = (JCDataSourcePropertyStringInterfaceProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setParameter_EVString_ev_bool_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setParameter_EVString_ev_bool_ev_bool_callback", "(Ljava/lang/String;ZZ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_00024DataSourcePropertyStringInterface_register_1setParameterList_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourcePropertyStringInterfaceProxy *pObjectX = (JCDataSourcePropertyStringInterfaceProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setParameterList_CommonStringPairList_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setParameterList_CommonStringPairList_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_00024DataSourcePropertyStringInterface_register_1getParameter_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourcePropertyStringInterfaceProxy *pObjectX = (JCDataSourcePropertyStringInterfaceProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getParameter_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getParameter_EVString_callback", "(Ljava/lang/String;)Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_00024DataSourcePropertyStringInterface_register_1copyParametersTo_1CStringInterface(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourcePropertyStringInterfaceProxy *pObjectX = (JCDataSourcePropertyStringInterfaceProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_copyParametersTo_CStringInterface_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"copyParametersTo_CStringInterface_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				class JCDataSetPropertyStringInterfaceProxy : public EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface
				{
				 private:
					EarthView::World::Core::ev_string m_setParameter_EVString_EVString_callback;
					EarthView::World::Core::ev_string m_setParameter_EVString_ev_bool_ev_bool_callback;
					EarthView::World::Core::ev_string m_setParameterList_CommonStringPairList_callback;
					EarthView::World::Core::ev_string m_getParameter_EVString_callback;
					EarthView::World::Core::ev_string m_copyParametersTo_CStringInterface_callback;
				public:
					JCDataSetPropertyStringInterfaceProxy(EarthView::World::Core::CNameValuePairList *pList) : CDataSetPropertyStringInterface(pList)
					{
					}
					ev_void unRegisterJavaReference()
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						if(__gr != NULL)
						{
							delete __gr;
							this->registerJavaReference(NULL);
						}
					}
				public:
					void register_setParameter_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setParameter_EVString_EVString_callback = __method;
					}
					void register_setParameter_EVString_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setParameter_EVString_ev_bool_ev_bool_callback = __method;
					}
					void register_setParameterList_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setParameterList_CommonStringPairList_callback = __method;
					}
					void register_getParameter_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getParameter_EVString_callback = __method;
					}
					void register_copyParametersTo_CStringInterface_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_copyParametersTo_CStringInterface_callback = __method;
					}
					virtual ev_bool setParameter(const EVString& name, const EVString& value)
					{
						if (this->_gRef != NULL && this->m_setParameter_EVString_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring name_wch = name;
							jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
							EarthView::World::Core::ev_wstring value_wch = value;
							jstring value_j = __env->NewString((const jchar*)value_wch.getString(), value_wch.size());
							jmethodID __method = __gr->getMethod("setParameter_EVString_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j, value_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDataSetPropertyStringInterface::setParameter(name, value);
						}
					}
					virtual ev_bool setParameter(const EVString& name, ev_bool readOnly, ev_bool enable)
					{
						if (this->_gRef != NULL && this->m_setParameter_EVString_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring name_wch = name;
							jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
							jboolean readOnly_j = (jboolean) readOnly;
							jboolean enable_j = (jboolean) enable;
							jmethodID __method = __gr->getMethod("setParameter_EVString_ev_bool_ev_bool_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j, readOnly_j, enable_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDataSetPropertyStringInterface::setParameter(name, readOnly, enable);
						}
					}
					virtual void setParameterList(const EarthView::World::Core::CommonStringPairList& paramList)
					{
						if (this->_gRef != NULL && this->m_setParameterList_CommonStringPairList_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong paramList_j = (jlong) &paramList;
							jmethodID __method = __gr->getMethod("setParameterList_CommonStringPairList_callback");
							__env->CallVoidMethod(__obj, __method , paramList_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CDataSetPropertyStringInterface::setParameterList(paramList);
						}
					}
					virtual EVString getParameter(const EVString& name) const
					{
						if (this->_gRef != NULL && this->m_getParameter_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring name_wch = name;
							jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
							jmethodID __method = __gr->getMethod("getParameter_EVString_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , name_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CDataSetPropertyStringInterface::getParameter(name);
						}
					}
					virtual void copyParametersTo(EarthView::World::Core::CStringInterface* dest) const
					{
						if (this->_gRef != NULL && this->m_copyParametersTo_CStringInterface_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong dest_j = (jlong) dest;
							jmethodID __method = __gr->getMethod("copyParametersTo_CStringInterface_callback");
							__env->CallVoidMethod(__obj, __method , dest_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CDataSetPropertyStringInterface::copyParametersTo(dest);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCDataSetPropertyStringInterfaceProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_00024DataSetPropertyStringInterface_register_1setParameter_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSetPropertyStringInterfaceProxy *pObjectX = (JCDataSetPropertyStringInterfaceProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setParameter_EVString_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setParameter_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_00024DataSetPropertyStringInterface_register_1setParameter_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSetPropertyStringInterfaceProxy *pObjectX = (JCDataSetPropertyStringInterfaceProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setParameter_EVString_ev_bool_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setParameter_EVString_ev_bool_ev_bool_callback", "(Ljava/lang/String;ZZ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_00024DataSetPropertyStringInterface_register_1setParameterList_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSetPropertyStringInterfaceProxy *pObjectX = (JCDataSetPropertyStringInterfaceProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setParameterList_CommonStringPairList_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setParameterList_CommonStringPairList_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_00024DataSetPropertyStringInterface_register_1getParameter_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSetPropertyStringInterfaceProxy *pObjectX = (JCDataSetPropertyStringInterfaceProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getParameter_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getParameter_EVString_callback", "(Ljava/lang/String;)Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_00024DataSetPropertyStringInterface_register_1copyParametersTo_1CStringInterface(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSetPropertyStringInterfaceProxy *pObjectX = (JCDataSetPropertyStringInterfaceProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_copyParametersTo_CStringInterface_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"copyParametersTo_CStringInterface_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_getDataSourcePropertyStringInterfacePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceManagerProxy))
					{
						const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface* __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getDataSourcePropertyStringInterfacePtr();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface* __values1 = pObjectX->getDataSourcePropertyStringInterfacePtr();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_register_1getDataSourcePropertyStringInterfacePtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceManagerProxy *pObjectX = (JCDataSourceManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDataSourcePropertyStringInterfacePtr_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDataSourcePropertyStringInterfacePtr_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_getDataSourcePropertyStringInterfacePtr_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface* __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getDataSourcePropertyStringInterfacePtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_getDataSetPropertyStringInterfacePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceManagerProxy))
					{
						const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface* __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getDataSetPropertyStringInterfacePtr();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface* __values1 = pObjectX->getDataSetPropertyStringInterfacePtr();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_register_1getDataSetPropertyStringInterfacePtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceManagerProxy *pObjectX = (JCDataSourceManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDataSetPropertyStringInterfacePtr_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDataSetPropertyStringInterfacePtr_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_getDataSetPropertyStringInterfacePtr_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface* __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getDataSetPropertyStringInterfacePtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_00024SelectedDataSourceTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CDataSourceManager::SDST_NoSelected,
						CDataSourceManager::SDST_FileDataSourceRootItem,
						CDataSourceManager::SDST_DBDataSourceRootItem,
						CDataSourceManager::SDST_WebDataSourceRootItem
					};
					jintArray array = __env->NewIntArray(4);
					__env->SetIntArrayRegion(array, 0, 4, enum_values);
					return array;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_showDataSourceProperty_1EVString_1SelectedDataSourceType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourcename_j, jint datasourcetype_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourcename_ch = (const ev_char*)__env->GetStringUTFChars(datasourcename_j,JNI_FALSE);
					const EVString datasourcename = datasourcename_ch;
					__env->ReleaseStringUTFChars(datasourcename_j, (const char *)datasourcename_ch);
					#else
					const ev_wchar* datasourcename_ch = (const ev_wchar*)__env->GetStringChars(datasourcename_j,JNI_FALSE);
					const EVString datasourcename = datasourcename_ch;
					__env->ReleaseStringChars(datasourcename_j, (const jchar *)datasourcename_ch);
					#endif
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::SelectedDataSourceType datasourcetype = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::SelectedDataSourceType) datasourcetype_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					pObjectX->showDataSourceProperty(datasourcename, datasourcetype);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_showDataSetProperty_1EVString_1SelectedDataSourceType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourcename_j, jint datasourcetype_j, jstring datasetname_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourcename_ch = (const ev_char*)__env->GetStringUTFChars(datasourcename_j,JNI_FALSE);
					const EVString datasourcename = datasourcename_ch;
					__env->ReleaseStringUTFChars(datasourcename_j, (const char *)datasourcename_ch);
					#else
					const ev_wchar* datasourcename_ch = (const ev_wchar*)__env->GetStringChars(datasourcename_j,JNI_FALSE);
					const EVString datasourcename = datasourcename_ch;
					__env->ReleaseStringChars(datasourcename_j, (const jchar *)datasourcename_ch);
					#endif
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::SelectedDataSourceType datasourcetype = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::SelectedDataSourceType) datasourcetype_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetname_ch = (const ev_char*)__env->GetStringUTFChars(datasetname_j,JNI_FALSE);
					const EVString datasetname = datasetname_ch;
					__env->ReleaseStringUTFChars(datasetname_j, (const char *)datasetname_ch);
					#else
					const ev_wchar* datasetname_ch = (const ev_wchar*)__env->GetStringChars(datasetname_j,JNI_FALSE);
					const EVString datasetname = datasetname_ch;
					__env->ReleaseStringChars(datasetname_j, (const jchar *)datasetname_ch);
					#endif
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjXXXX;
					pObjectX->showDataSetProperty(datasourcename, datasourcetype, datasetname);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_strDatasetType_1EVDatasetType(JNIEnv *__env , jclass __clazz, jint type_j)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType type = (EarthView::World::Spatial::GeoDataset::EVDatasetType) type_j;
					EVString __values1 = EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::strDatasetType(type);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceManager_strCoordSys_1ev_1int32_1ev_1int32(JNIEnv *__env , jclass __clazz, jint coordSys_j, jint type_j)
				{
					ev_int32 coordSys = (ev_int32) coordSys_j;
					ev_int32 type = (ev_int32) type_j;
					EVString __values1 = EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::strCoordSys(coordSys, type);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
		}
	}
}
