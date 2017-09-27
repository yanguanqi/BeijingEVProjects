/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/datasourcemanager/datasourceeventobject.h"
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
				class JCDataSourceEventObjectProxy : public EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject
				{
				 private:
					EarthView::World::Core::ev_string m_onDeleteDataSource_CDataSourceActiveEvent_callback;
					EarthView::World::Core::ev_string m_onCreateDataSource_CDataSourceActiveEvent_callback;
					EarthView::World::Core::ev_string m_onOpenDataSource_CDataSourceActiveEvent_callback;
					EarthView::World::Core::ev_string m_onCloseDataSource_CDataSourceActiveEvent_callback;
					EarthView::World::Core::ev_string m_onCreateDataset_CDatasetActiveEvent_callback;
					EarthView::World::Core::ev_string m_onOpenDataset_CDatasetActiveEvent_callback;
					EarthView::World::Core::ev_string m_onCloseDataset_CDatasetActiveEvent_callback;
					EarthView::World::Core::ev_string m_onCloseAllDatasets_CDataSourceActiveEvent_callback;
					EarthView::World::Core::ev_string m_onImportData_void_callback;
					EarthView::World::Core::ev_string m_onExportData_void_callback;
					EarthView::World::Core::ev_string m_onEvent_CEvent_callback;
					EarthView::World::Core::ev_string m_onTimerEvent_CTimerEvent_callback;
					EarthView::World::Core::ev_string m_onCustomEvent_CEvent_callback;
				public:
					JCDataSourceEventObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CDataSourceEventObject(pList)
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
					void register_onDeleteDataSource_CDataSourceActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onDeleteDataSource_CDataSourceActiveEvent_callback = __method;
					}
					void register_onCreateDataSource_CDataSourceActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onCreateDataSource_CDataSourceActiveEvent_callback = __method;
					}
					void register_onOpenDataSource_CDataSourceActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onOpenDataSource_CDataSourceActiveEvent_callback = __method;
					}
					void register_onCloseDataSource_CDataSourceActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onCloseDataSource_CDataSourceActiveEvent_callback = __method;
					}
					void register_onCreateDataset_CDatasetActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onCreateDataset_CDatasetActiveEvent_callback = __method;
					}
					void register_onOpenDataset_CDatasetActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onOpenDataset_CDatasetActiveEvent_callback = __method;
					}
					void register_onCloseDataset_CDatasetActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onCloseDataset_CDatasetActiveEvent_callback = __method;
					}
					void register_onCloseAllDatasets_CDataSourceActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onCloseAllDatasets_CDataSourceActiveEvent_callback = __method;
					}
					void register_onImportData_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onImportData_void_callback = __method;
					}
					void register_onExportData_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onExportData_void_callback = __method;
					}
					void register_onEvent_CEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onEvent_CEvent_callback = __method;
					}
					void register_onTimerEvent_CTimerEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onTimerEvent_CTimerEvent_callback = __method;
					}
					void register_onCustomEvent_CEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onCustomEvent_CEvent_callback = __method;
					}
					virtual void onDeleteDataSource(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe)
					{
						if (this->_gRef != NULL && this->m_onDeleteDataSource_CDataSourceActiveEvent_callback != "" && this->isCustomExtend())
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
							jlong pe_j = (jlong) pe;
							jmethodID __method = __gr->getMethod("onDeleteDataSource_CDataSourceActiveEvent_callback");
							__env->CallVoidMethod(__obj, __method , pe_j);
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
							return this->CDataSourceEventObject::onDeleteDataSource(pe);
						}
					}
					virtual void onCreateDataSource(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe)
					{
						if (this->_gRef != NULL && this->m_onCreateDataSource_CDataSourceActiveEvent_callback != "" && this->isCustomExtend())
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
							jlong pe_j = (jlong) pe;
							jmethodID __method = __gr->getMethod("onCreateDataSource_CDataSourceActiveEvent_callback");
							__env->CallVoidMethod(__obj, __method , pe_j);
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
							return this->CDataSourceEventObject::onCreateDataSource(pe);
						}
					}
					virtual void onOpenDataSource(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe)
					{
						if (this->_gRef != NULL && this->m_onOpenDataSource_CDataSourceActiveEvent_callback != "" && this->isCustomExtend())
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
							jlong pe_j = (jlong) pe;
							jmethodID __method = __gr->getMethod("onOpenDataSource_CDataSourceActiveEvent_callback");
							__env->CallVoidMethod(__obj, __method , pe_j);
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
							return this->CDataSourceEventObject::onOpenDataSource(pe);
						}
					}
					virtual void onCloseDataSource(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe)
					{
						if (this->_gRef != NULL && this->m_onCloseDataSource_CDataSourceActiveEvent_callback != "" && this->isCustomExtend())
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
							jlong pe_j = (jlong) pe;
							jmethodID __method = __gr->getMethod("onCloseDataSource_CDataSourceActiveEvent_callback");
							__env->CallVoidMethod(__obj, __method , pe_j);
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
							return this->CDataSourceEventObject::onCloseDataSource(pe);
						}
					}
					virtual void onCreateDataset(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* pe)
					{
						if (this->_gRef != NULL && this->m_onCreateDataset_CDatasetActiveEvent_callback != "" && this->isCustomExtend())
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
							jlong pe_j = (jlong) pe;
							jmethodID __method = __gr->getMethod("onCreateDataset_CDatasetActiveEvent_callback");
							__env->CallVoidMethod(__obj, __method , pe_j);
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
							return this->CDataSourceEventObject::onCreateDataset(pe);
						}
					}
					virtual void onOpenDataset(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* pe)
					{
						if (this->_gRef != NULL && this->m_onOpenDataset_CDatasetActiveEvent_callback != "" && this->isCustomExtend())
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
							jlong pe_j = (jlong) pe;
							jmethodID __method = __gr->getMethod("onOpenDataset_CDatasetActiveEvent_callback");
							__env->CallVoidMethod(__obj, __method , pe_j);
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
							return this->CDataSourceEventObject::onOpenDataset(pe);
						}
					}
					virtual void onCloseDataset(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* pe)
					{
						if (this->_gRef != NULL && this->m_onCloseDataset_CDatasetActiveEvent_callback != "" && this->isCustomExtend())
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
							jlong pe_j = (jlong) pe;
							jmethodID __method = __gr->getMethod("onCloseDataset_CDatasetActiveEvent_callback");
							__env->CallVoidMethod(__obj, __method , pe_j);
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
							return this->CDataSourceEventObject::onCloseDataset(pe);
						}
					}
					virtual void onCloseAllDatasets(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe)
					{
						if (this->_gRef != NULL && this->m_onCloseAllDatasets_CDataSourceActiveEvent_callback != "" && this->isCustomExtend())
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
							jlong pe_j = (jlong) pe;
							jmethodID __method = __gr->getMethod("onCloseAllDatasets_CDataSourceActiveEvent_callback");
							__env->CallVoidMethod(__obj, __method , pe_j);
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
							return this->CDataSourceEventObject::onCloseAllDatasets(pe);
						}
					}
					virtual void onImportData()
					{
						if (this->_gRef != NULL && this->m_onImportData_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onImportData_void_callback");
							__env->CallVoidMethod(__obj, __method );
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
							return this->CDataSourceEventObject::onImportData();
						}
					}
					virtual void onExportData()
					{
						if (this->_gRef != NULL && this->m_onExportData_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onExportData_void_callback");
							__env->CallVoidMethod(__obj, __method );
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
							return this->CDataSourceEventObject::onExportData();
						}
					}
					virtual ev_bool onEvent(EarthView::World::Core::CEvent* e)
					{
						if (this->_gRef != NULL && this->m_onEvent_CEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onEvent_CEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
							return this->CDataSourceEventObject::onEvent(e);
						}
					}
					virtual void onTimerEvent(EarthView::World::Core::CTimerEvent* e)
					{
						if (this->_gRef != NULL && this->m_onTimerEvent_CTimerEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onTimerEvent_CTimerEvent_callback");
							__env->CallVoidMethod(__obj, __method , e_j);
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
							return this->CDataSourceEventObject::onTimerEvent(e);
						}
					}
					virtual void onCustomEvent(EarthView::World::Core::CEvent* e)
					{
						if (this->_gRef != NULL && this->m_onCustomEvent_CEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onCustomEvent_CEvent_callback");
							__env->CallVoidMethod(__obj, __method , e_j);
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
							return this->CDataSourceEventObject::onCustomEvent(e);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCDataSourceEventObjectProxy);
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_deleteDataSource_1CDataSourceURL(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL &datasourceURL = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) datasourceURL_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->deleteDataSource(datasourceURL);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_onDeleteDataSource_1CDataSourceActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pe_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pe = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pe_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onDeleteDataSource(pe);
					}
					else
					{
						pObjectX->onDeleteDataSource(pe);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_register_1onDeleteDataSource_1CDataSourceActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceEventObjectProxy *pObjectX = (JCDataSourceEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onDeleteDataSource_CDataSourceActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onDeleteDataSource_CDataSourceActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_onDeleteDataSource_1CDataSourceActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pe_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pe = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pe_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onDeleteDataSource(pe);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_closeDataSource_1CDataSourceURL(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL &datasourceURL = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) datasourceURL_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->closeDataSource(datasourceURL);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_createModelDataset_1CDataSourceURL_1EVString_1CFields_1ev_1bool_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j, jstring datasetName_j, jlong fields_j, jboolean isTemplate_j, jint coordSysType_j, jint coordSys_j)
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
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->createModelDataset(datasourceURL, datasetName, fields, isTemplate, coordSysType, coordSys);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_createEffectDataset_1CDataSourceURL_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j, jstring datasetName_j, jint coordsys_j)
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
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->createEffectDataset(datasourceURL, datasetName, coordsys);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_createVectorDataset_1CDataSourceURL_1EVString_1EVGeometryType_1ev_1int32_1CFields(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j, jstring datasetName_j, jint type_j, jint coordSys_j, jlong fields_j)
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
					EarthView::World::Spatial::GeoDataset::CFields &fields = *(EarthView::World::Spatial::GeoDataset::CFields*) fields_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->createVectorDataset(datasourceURL, datasetName, type, coordSys, fields);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_createKmlDataset_1CDataSourceURL_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j, jstring datasetName_j)
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
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->createKmlDataset(datasourceURL, datasetName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_addKmlDataset_1CDataSourceActiveEvent_1CDatasetActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasource_j, jlong dataset_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent &datasource = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) datasource_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent &dataset = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) dataset_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->addKmlDataset(datasource, dataset);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_closeDataset_1CDataSourceURL_1EVString_1EVDataSourceType_1EVDatasetType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j, jstring datasetName_j, jint sourcetype_j, jint datasettype_j)
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
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->closeDataset(datasourceURL, datasetName, sourcetype, datasettype);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_closeAllDatasets_1CDataSourceURL(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL &datasourceURL = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) datasourceURL_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->closeAllDatasets(datasourceURL);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_closeAllDatasets_1CDataSourceURL_1EVDataSourceType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j, jint datasourcetype_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL &datasourceURL = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) datasourceURL_j;
					EarthView::World::Spatial::GeoDataset::EVDataSourceType datasourcetype = (EarthView::World::Spatial::GeoDataset::EVDataSourceType) datasourcetype_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->closeAllDatasets(datasourceURL, datasourcetype);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_createDataSource_1CDataSourceURL(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL &datasourceURL = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) datasourceURL_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					pObjectX->createDataSource(datasourceURL);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_onCreateDataSource_1CDataSourceActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pe_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pe = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pe_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onCreateDataSource(pe);
					}
					else
					{
						pObjectX->onCreateDataSource(pe);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_register_1onCreateDataSource_1CDataSourceActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceEventObjectProxy *pObjectX = (JCDataSourceEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onCreateDataSource_CDataSourceActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onCreateDataSource_CDataSourceActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_onCreateDataSource_1CDataSourceActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pe_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pe = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pe_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onCreateDataSource(pe);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_openDataSource_1CDataSourceURL(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasourceURL_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL &datasourceURL = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) datasourceURL_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					pObjectX->openDataSource(datasourceURL);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_onOpenDataSource_1CDataSourceActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pe_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pe = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pe_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onOpenDataSource(pe);
					}
					else
					{
						pObjectX->onOpenDataSource(pe);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_register_1onOpenDataSource_1CDataSourceActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceEventObjectProxy *pObjectX = (JCDataSourceEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onOpenDataSource_CDataSourceActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onOpenDataSource_CDataSourceActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_onOpenDataSource_1CDataSourceActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pe_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pe = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pe_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onOpenDataSource(pe);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_closeDataSource_1CDataSourceActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataSourceEvent_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent &dataSourceEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) dataSourceEvent_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->closeDataSource(dataSourceEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_onCloseDataSource_1CDataSourceActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pe_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pe = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pe_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onCloseDataSource(pe);
					}
					else
					{
						pObjectX->onCloseDataSource(pe);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_register_1onCloseDataSource_1CDataSourceActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceEventObjectProxy *pObjectX = (JCDataSourceEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onCloseDataSource_CDataSourceActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onCloseDataSource_CDataSourceActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_onCloseDataSource_1CDataSourceActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pe_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pe = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pe_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onCloseDataSource(pe);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_createDataset_1CDataSourceActiveEvent_1CDatasetActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataSourceEvent_j, jlong dataSetEvent_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent &dataSourceEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) dataSourceEvent_j;
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent &dataSetEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) dataSetEvent_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					pObjectX->createDataset(dataSourceEvent, dataSetEvent);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_onCreateDataset_1CDatasetActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pe_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pe = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pe_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onCreateDataset(pe);
					}
					else
					{
						pObjectX->onCreateDataset(pe);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_register_1onCreateDataset_1CDatasetActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceEventObjectProxy *pObjectX = (JCDataSourceEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onCreateDataset_CDatasetActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onCreateDataset_CDatasetActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_onCreateDataset_1CDatasetActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pe_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pe = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pe_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onCreateDataset(pe);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_onOpenDataset_1CDatasetActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pe_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pe = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pe_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onOpenDataset(pe);
					}
					else
					{
						pObjectX->onOpenDataset(pe);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_register_1onOpenDataset_1CDatasetActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceEventObjectProxy *pObjectX = (JCDataSourceEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onOpenDataset_CDatasetActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onOpenDataset_CDatasetActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_onOpenDataset_1CDatasetActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pe_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pe = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pe_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onOpenDataset(pe);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_closeDataset_1CDataSourceActiveEvent_1CDatasetActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataSourceEvent_j, jlong dataSetEvent_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent &dataSourceEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) dataSourceEvent_j;
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent &dataSetEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) dataSetEvent_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					pObjectX->closeDataset(dataSourceEvent, dataSetEvent);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_onCloseDataset_1CDatasetActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pe_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pe = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pe_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onCloseDataset(pe);
					}
					else
					{
						pObjectX->onCloseDataset(pe);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_register_1onCloseDataset_1CDatasetActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceEventObjectProxy *pObjectX = (JCDataSourceEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onCloseDataset_CDatasetActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onCloseDataset_CDatasetActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_onCloseDataset_1CDatasetActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pe_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pe = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pe_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onCloseDataset(pe);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_closeAllDatasets_1CDataSourceActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataSourceEvent_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent &dataSourceEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) dataSourceEvent_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					pObjectX->closeAllDatasets(dataSourceEvent);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_closeAllDatasets_1CDataSourceActiveEvent_1EVDataSourceType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataSourceEvent_j, jint dataSourceType_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent &dataSourceEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) dataSourceEvent_j;
					const EarthView::World::Spatial::GeoDataset::EVDataSourceType dataSourceType = (EarthView::World::Spatial::GeoDataset::EVDataSourceType) dataSourceType_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					pObjectX->closeAllDatasets(dataSourceEvent, dataSourceType);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_onCloseAllDatasets_1CDataSourceActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pe_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pe = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pe_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onCloseAllDatasets(pe);
					}
					else
					{
						pObjectX->onCloseAllDatasets(pe);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_register_1onCloseAllDatasets_1CDataSourceActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceEventObjectProxy *pObjectX = (JCDataSourceEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onCloseAllDatasets_CDataSourceActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onCloseAllDatasets_CDataSourceActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_onCloseAllDatasets_1CDataSourceActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pe_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pe = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pe_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onCloseAllDatasets(pe);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_importData_1CDataSourceActiveEvent_1CDatasetActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataSourceEvent_j, jlong dataSetEvent_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent &dataSourceEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) dataSourceEvent_j;
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent &dataSetEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) dataSetEvent_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					pObjectX->importData(dataSourceEvent, dataSetEvent);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_onImportData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onImportData();
					}
					else
					{
						pObjectX->onImportData();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_register_1onImportData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceEventObjectProxy *pObjectX = (JCDataSourceEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onImportData_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onImportData_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_onImportData_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onImportData();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_exportData_1CDataSourceActiveEvent_1CDatasetActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataSourceEvent_j, jlong dataSetEvent_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent &dataSourceEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) dataSourceEvent_j;
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent &dataSetEvent = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) dataSetEvent_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					pObjectX->exportData(dataSourceEvent, dataSetEvent);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_onExportData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onExportData();
					}
					else
					{
						pObjectX->onExportData();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_register_1onExportData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceEventObjectProxy *pObjectX = (JCDataSourceEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onExportData_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onExportData_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_onExportData_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onExportData();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_onEvent_1CEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataSourceEventObjectProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onEvent(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onEvent(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_register_1onEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceEventObjectProxy *pObjectX = (JCDataSourceEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onEvent_CEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onEvent_CEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_onEvent_1CEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_register_1onTimerEvent_1CTimerEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceEventObjectProxy *pObjectX = (JCDataSourceEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onTimerEvent_CTimerEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onTimerEvent_CTimerEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceEventObject_register_1onCustomEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataSourceEventObjectProxy *pObjectX = (JCDataSourceEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onCustomEvent_CEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onCustomEvent_CEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
