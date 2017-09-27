/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/defaultworkqueuestandard.h"
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
			class JCDefaultWorkQueueProxy : public EarthView::World::Core::CDefaultWorkQueue
			{
			 private:
				EarthView::World::Core::ev_string m_isQueueRunningByFilter_ev_uint16_ev_uint64_callback;
				EarthView::World::Core::ev_string m_waitForNextRequest_void_callback;
				EarthView::World::Core::ev_string m_notifyThreadRegistered_void_callback;
				EarthView::World::Core::ev_string m_getWorkerThreadCount_void_callback;
				EarthView::World::Core::ev_string m_setWorkerThreadCount_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getWorkersCanAccessRenderSystem_void_callback;
				EarthView::World::Core::ev_string m_setWorkersCanAccessRenderSystem_ev_bool_callback;
				EarthView::World::Core::ev_string m__processNextRequest_void_callback;
				EarthView::World::Core::ev_string m__threadMain_void_callback;
				EarthView::World::Core::ev_string m_isShuttingDown_void_callback;
				EarthView::World::Core::ev_string m_notifyWorkers_void_callback;
				EarthView::World::Core::ev_string m_startup_ev_bool_callback;
				EarthView::World::Core::ev_string m_startup_void_callback;
				EarthView::World::Core::ev_string m_addRequestHandler_ev_uint16_CRequestHandler_callback;
				EarthView::World::Core::ev_string m_removeRequestHandler_ev_uint16_CRequestHandler_callback;
				EarthView::World::Core::ev_string m_addResponseHandler_ev_uint16_CResponseHandler_callback;
				EarthView::World::Core::ev_string m_removeResponseHandler_ev_uint16_CResponseHandler_callback;
				EarthView::World::Core::ev_string m_addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_callback;
				EarthView::World::Core::ev_string m_addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_callback;
				EarthView::World::Core::ev_string m_addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_callback;
				EarthView::World::Core::ev_string m_addRequest_ev_uint16_ev_uint16_RequestPara_callback;
				EarthView::World::Core::ev_string m_addRequest_CRequest_callback;
				EarthView::World::Core::ev_string m_addOrReplaceRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_callback;
				EarthView::World::Core::ev_string m_abortRequest_ev_uint64_callback;
				EarthView::World::Core::ev_string m_abortRequestsByChannel_ev_uint16_callback;
				EarthView::World::Core::ev_string m_abortRequestsByFilter_ev_uint16_ev_uint64_callback;
				EarthView::World::Core::ev_string m_abortAllRequests_void_callback;
				EarthView::World::Core::ev_string m_setPaused_ev_bool_callback;
				EarthView::World::Core::ev_string m_isPaused_void_callback;
				EarthView::World::Core::ev_string m_setRequestsAccepted_ev_bool_callback;
				EarthView::World::Core::ev_string m_getRequestsAccepted_void_callback;
				EarthView::World::Core::ev_string m_processResponses_void_callback;
				EarthView::World::Core::ev_string m_getResponseProcessingTimeLimit_void_callback;
				EarthView::World::Core::ev_string m_setResponseProcessingTimeLimit_ev_uint32_callback;
				EarthView::World::Core::ev_string m_shutdown_void_callback;
				EarthView::World::Core::ev_string m_getChannel_ev_uint32_callback;
				EarthView::World::Core::ev_string m_setChannelListener_ev_uint16_CWorkQueueChannelListener_callback;
				EarthView::World::Core::ev_string m_getChannelListener_ev_uint16_callback;
			public:
				JCDefaultWorkQueueProxy(EarthView::World::Core::CNameValuePairList *pList) : CDefaultWorkQueue(pList)
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
				void register_isQueueRunningByFilter_ev_uint16_ev_uint64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isQueueRunningByFilter_ev_uint16_ev_uint64_callback = __method;
				}
				void register_waitForNextRequest_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_waitForNextRequest_void_callback = __method;
				}
				void register_notifyThreadRegistered_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_notifyThreadRegistered_void_callback = __method;
				}
				void register_getWorkerThreadCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWorkerThreadCount_void_callback = __method;
				}
				void register_setWorkerThreadCount_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setWorkerThreadCount_ev_size_t_callback = __method;
				}
				void register_getWorkersCanAccessRenderSystem_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWorkersCanAccessRenderSystem_void_callback = __method;
				}
				void register_setWorkersCanAccessRenderSystem_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setWorkersCanAccessRenderSystem_ev_bool_callback = __method;
				}
				void register__processNextRequest_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__processNextRequest_void_callback = __method;
				}
				void register__threadMain_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__threadMain_void_callback = __method;
				}
				void register_isShuttingDown_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isShuttingDown_void_callback = __method;
				}
				void register_notifyWorkers_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_notifyWorkers_void_callback = __method;
				}
				void register_startup_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_startup_ev_bool_callback = __method;
				}
				void register_startup_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_startup_void_callback = __method;
				}
				void register_addRequestHandler_ev_uint16_CRequestHandler_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addRequestHandler_ev_uint16_CRequestHandler_callback = __method;
				}
				void register_removeRequestHandler_ev_uint16_CRequestHandler_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeRequestHandler_ev_uint16_CRequestHandler_callback = __method;
				}
				void register_addResponseHandler_ev_uint16_CResponseHandler_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addResponseHandler_ev_uint16_CResponseHandler_callback = __method;
				}
				void register_removeResponseHandler_ev_uint16_CResponseHandler_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeResponseHandler_ev_uint16_CResponseHandler_callback = __method;
				}
				void register_addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_callback = __method;
				}
				void register_addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_callback = __method;
				}
				void register_addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_callback = __method;
				}
				void register_addRequest_ev_uint16_ev_uint16_RequestPara_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addRequest_ev_uint16_ev_uint16_RequestPara_callback = __method;
				}
				void register_addRequest_CRequest_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addRequest_CRequest_callback = __method;
				}
				void register_addOrReplaceRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addOrReplaceRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_callback = __method;
				}
				void register_abortRequest_ev_uint64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_abortRequest_ev_uint64_callback = __method;
				}
				void register_abortRequestsByChannel_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_abortRequestsByChannel_ev_uint16_callback = __method;
				}
				void register_abortRequestsByFilter_ev_uint16_ev_uint64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_abortRequestsByFilter_ev_uint16_ev_uint64_callback = __method;
				}
				void register_abortAllRequests_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_abortAllRequests_void_callback = __method;
				}
				void register_setPaused_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setPaused_ev_bool_callback = __method;
				}
				void register_isPaused_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isPaused_void_callback = __method;
				}
				void register_setRequestsAccepted_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setRequestsAccepted_ev_bool_callback = __method;
				}
				void register_getRequestsAccepted_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getRequestsAccepted_void_callback = __method;
				}
				void register_processResponses_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_processResponses_void_callback = __method;
				}
				void register_getResponseProcessingTimeLimit_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getResponseProcessingTimeLimit_void_callback = __method;
				}
				void register_setResponseProcessingTimeLimit_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setResponseProcessingTimeLimit_ev_uint32_callback = __method;
				}
				void register_shutdown_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_shutdown_void_callback = __method;
				}
				void register_getChannel_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getChannel_ev_uint32_callback = __method;
				}
				void register_setChannelListener_ev_uint16_CWorkQueueChannelListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setChannelListener_ev_uint16_CWorkQueueChannelListener_callback = __method;
				}
				void register_getChannelListener_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getChannelListener_ev_uint16_callback = __method;
				}
				virtual void _threadMain()
				{
					if (this->_gRef != NULL && this->m__threadMain_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_threadMain_void_callback");
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
						return this->CDefaultWorkQueue::_threadMain();
					}
				}
				virtual void shutdown()
				{
					if (this->_gRef != NULL && this->m_shutdown_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("shutdown_void_callback");
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
						return this->CDefaultWorkQueue::shutdown();
					}
				}
				virtual void startup(ev_bool forceRestart)
				{
					if (this->_gRef != NULL && this->m_startup_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean forceRestart_j = (jboolean) forceRestart;
						jmethodID __method = __gr->getMethod("startup_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , forceRestart_j);
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
						return this->CDefaultWorkQueue::startup(forceRestart);
					}
				}
				virtual void startup()
				{
					if (this->_gRef != NULL && this->m_startup_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("startup_void_callback");
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
						return this->CDefaultWorkQueue::startup();
					}
				}
				virtual ev_bool isQueueRunningByFilter(ev_uint16 channel, ev_uint64 filter)
				{
					if (this->_gRef != NULL && this->m_isQueueRunningByFilter_ev_uint16_ev_uint64_callback != "" && this->isCustomExtend())
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
						jint channel_j = (jint) channel;
						jlong filter_j = (jlong) &filter;
						jmethodID __method = __gr->getMethod("isQueueRunningByFilter_ev_uint16_ev_uint64_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , channel_j, filter_j);
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
						return this->CDefaultWorkQueue::isQueueRunningByFilter(channel, filter);
					}
				}
				virtual void waitForNextRequest()
				{
					if (this->_gRef != NULL && this->m_waitForNextRequest_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("waitForNextRequest_void_callback");
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
						return this->CDefaultWorkQueue::waitForNextRequest();
					}
				}
				virtual void notifyThreadRegistered()
				{
					if (this->_gRef != NULL && this->m_notifyThreadRegistered_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("notifyThreadRegistered_void_callback");
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
						return this->CDefaultWorkQueue::notifyThreadRegistered();
					}
				}
				virtual void notifyWorkers()
				{
					if (this->_gRef != NULL && this->m_notifyWorkers_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("notifyWorkers_void_callback");
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
						return this->CDefaultWorkQueue::notifyWorkers();
					}
				}
				virtual ev_size_t getWorkerThreadCount() const
				{
					if (this->_gRef != NULL && this->m_getWorkerThreadCount_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getWorkerThreadCount_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultWorkQueue::getWorkerThreadCount();
					}
				}
				virtual void setWorkerThreadCount(ev_size_t c)
				{
					if (this->_gRef != NULL && this->m_setWorkerThreadCount_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong c_j = (jlong) c;
						jmethodID __method = __gr->getMethod("setWorkerThreadCount_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , c_j);
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
						return this->CDefaultWorkQueue::setWorkerThreadCount(c);
					}
				}
				virtual ev_bool getWorkersCanAccessRenderSystem() const
				{
					if (this->_gRef != NULL && this->m_getWorkersCanAccessRenderSystem_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getWorkersCanAccessRenderSystem_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
						return this->CDefaultWorkQueue::getWorkersCanAccessRenderSystem();
					}
				}
				virtual void setWorkersCanAccessRenderSystem(ev_bool access)
				{
					if (this->_gRef != NULL && this->m_setWorkersCanAccessRenderSystem_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean access_j = (jboolean) access;
						jmethodID __method = __gr->getMethod("setWorkersCanAccessRenderSystem_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , access_j);
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
						return this->CDefaultWorkQueue::setWorkersCanAccessRenderSystem(access);
					}
				}
				virtual void _processNextRequest()
				{
					if (this->_gRef != NULL && this->m__processNextRequest_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_processNextRequest_void_callback");
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
						return this->CDefaultWorkQueue::_processNextRequest();
					}
				}
				virtual ev_bool isShuttingDown() const
				{
					if (this->_gRef != NULL && this->m_isShuttingDown_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isShuttingDown_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
						return this->CDefaultWorkQueue::isShuttingDown();
					}
				}
				virtual void addRequestHandler(ev_uint16 channel, EarthView::World::Core::CWorkQueue::CRequestHandler* rh)
				{
					if (this->_gRef != NULL && this->m_addRequestHandler_ev_uint16_CRequestHandler_callback != "" && this->isCustomExtend())
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
						jint channel_j = (jint) channel;
						jlong rh_j = (jlong) rh;
						jmethodID __method = __gr->getMethod("addRequestHandler_ev_uint16_CRequestHandler_callback");
						__env->CallVoidMethod(__obj, __method , channel_j, rh_j);
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
						return this->CDefaultWorkQueue::addRequestHandler(channel, rh);
					}
				}
				virtual void removeRequestHandler(ev_uint16 channel, EarthView::World::Core::CWorkQueue::CRequestHandler* rh)
				{
					if (this->_gRef != NULL && this->m_removeRequestHandler_ev_uint16_CRequestHandler_callback != "" && this->isCustomExtend())
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
						jint channel_j = (jint) channel;
						jlong rh_j = (jlong) rh;
						jmethodID __method = __gr->getMethod("removeRequestHandler_ev_uint16_CRequestHandler_callback");
						__env->CallVoidMethod(__obj, __method , channel_j, rh_j);
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
						return this->CDefaultWorkQueue::removeRequestHandler(channel, rh);
					}
				}
				virtual void addResponseHandler(ev_uint16 channel, EarthView::World::Core::CWorkQueue::CResponseHandler* rh)
				{
					if (this->_gRef != NULL && this->m_addResponseHandler_ev_uint16_CResponseHandler_callback != "" && this->isCustomExtend())
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
						jint channel_j = (jint) channel;
						jlong rh_j = (jlong) rh;
						jmethodID __method = __gr->getMethod("addResponseHandler_ev_uint16_CResponseHandler_callback");
						__env->CallVoidMethod(__obj, __method , channel_j, rh_j);
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
						return this->CDefaultWorkQueue::addResponseHandler(channel, rh);
					}
				}
				virtual void removeResponseHandler(ev_uint16 channel, EarthView::World::Core::CWorkQueue::CResponseHandler* rh)
				{
					if (this->_gRef != NULL && this->m_removeResponseHandler_ev_uint16_CResponseHandler_callback != "" && this->isCustomExtend())
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
						jint channel_j = (jint) channel;
						jlong rh_j = (jlong) rh;
						jmethodID __method = __gr->getMethod("removeResponseHandler_ev_uint16_CResponseHandler_callback");
						__env->CallVoidMethod(__obj, __method , channel_j, rh_j);
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
						return this->CDefaultWorkQueue::removeResponseHandler(channel, rh);
					}
				}
				virtual ev_uint64 addRequest(ev_uint16 channel, ev_uint16 requestType, const EarthView::World::Core::CWorkQueue::RequestPara& rData, ev_uint8 retryCount, ev_bool forceSynchronous, ev_uint64 filter)
				{
					if (this->_gRef != NULL && this->m_addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_callback != "" && this->isCustomExtend())
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
						jint channel_j = (jint) channel;
						jint requestType_j = (jint) requestType;
						jlong rData_j = (jlong) &rData;
						jshort retryCount_j = (jshort) retryCount;
						jboolean forceSynchronous_j = (jboolean) forceSynchronous;
						jlong filter_j = (jlong) &filter;
						jmethodID __method = __gr->getMethod("addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , channel_j, requestType_j, rData_j, retryCount_j, forceSynchronous_j, filter_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1_s = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						ev_uint64 __values1 = __values1_s.getUint64();
						return __values1;
					}
					else
					{
						return this->CDefaultWorkQueue::addRequest(channel, requestType, rData, retryCount, forceSynchronous, filter);
					}
				}
				virtual ev_uint64 addRequest(EarthView::World::Core::CWorkQueue::CRequest* request)
				{
					if (this->_gRef != NULL && this->m_addRequest_CRequest_callback != "" && this->isCustomExtend())
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
						jlong request_j = (jlong) request;
						jmethodID __method = __gr->getMethod("addRequest_CRequest_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , request_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1_s = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						ev_uint64 __values1 = __values1_s.getUint64();
						return __values1;
					}
					else
					{
						return this->CDefaultWorkQueue::addRequest(request);
					}
				}
				virtual ev_uint64 addOrReplaceRequest(ev_uint16 channel, ev_uint16 requestType, const EarthView::World::Core::CWorkQueue::RequestPara& rData, ev_uint8 retryCount, ev_bool forceSynchronous, ev_uint64 filter)
				{
					if (this->_gRef != NULL && this->m_addOrReplaceRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_callback != "" && this->isCustomExtend())
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
						jint channel_j = (jint) channel;
						jint requestType_j = (jint) requestType;
						jlong rData_j = (jlong) &rData;
						jshort retryCount_j = (jshort) retryCount;
						jboolean forceSynchronous_j = (jboolean) forceSynchronous;
						jlong filter_j = (jlong) &filter;
						jmethodID __method = __gr->getMethod("addOrReplaceRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , channel_j, requestType_j, rData_j, retryCount_j, forceSynchronous_j, filter_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1_s = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						ev_uint64 __values1 = __values1_s.getUint64();
						return __values1;
					}
					else
					{
						return this->CDefaultWorkQueue::addOrReplaceRequest(channel, requestType, rData, retryCount, forceSynchronous, filter);
					}
				}
				virtual void abortRequest(ev_uint64 id)
				{
					if (this->_gRef != NULL && this->m_abortRequest_ev_uint64_callback != "" && this->isCustomExtend())
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
						jlong id_j = (jlong) &id;
						jmethodID __method = __gr->getMethod("abortRequest_ev_uint64_callback");
						__env->CallVoidMethod(__obj, __method , id_j);
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
						return this->CDefaultWorkQueue::abortRequest(id);
					}
				}
				virtual void abortRequestsByChannel(ev_uint16 channel)
				{
					if (this->_gRef != NULL && this->m_abortRequestsByChannel_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint channel_j = (jint) channel;
						jmethodID __method = __gr->getMethod("abortRequestsByChannel_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , channel_j);
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
						return this->CDefaultWorkQueue::abortRequestsByChannel(channel);
					}
				}
				virtual void abortRequestsByFilter(ev_uint16 channel, ev_uint64 filter)
				{
					if (this->_gRef != NULL && this->m_abortRequestsByFilter_ev_uint16_ev_uint64_callback != "" && this->isCustomExtend())
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
						jint channel_j = (jint) channel;
						jlong filter_j = (jlong) &filter;
						jmethodID __method = __gr->getMethod("abortRequestsByFilter_ev_uint16_ev_uint64_callback");
						__env->CallVoidMethod(__obj, __method , channel_j, filter_j);
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
						return this->CDefaultWorkQueue::abortRequestsByFilter(channel, filter);
					}
				}
				virtual void abortAllRequests()
				{
					if (this->_gRef != NULL && this->m_abortAllRequests_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("abortAllRequests_void_callback");
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
						return this->CDefaultWorkQueue::abortAllRequests();
					}
				}
				virtual void setPaused(ev_bool pause)
				{
					if (this->_gRef != NULL && this->m_setPaused_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean pause_j = (jboolean) pause;
						jmethodID __method = __gr->getMethod("setPaused_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , pause_j);
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
						return this->CDefaultWorkQueue::setPaused(pause);
					}
				}
				virtual ev_bool isPaused() const
				{
					if (this->_gRef != NULL && this->m_isPaused_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isPaused_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
						return this->CDefaultWorkQueue::isPaused();
					}
				}
				virtual void setRequestsAccepted(ev_bool accept)
				{
					if (this->_gRef != NULL && this->m_setRequestsAccepted_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean accept_j = (jboolean) accept;
						jmethodID __method = __gr->getMethod("setRequestsAccepted_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , accept_j);
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
						return this->CDefaultWorkQueue::setRequestsAccepted(accept);
					}
				}
				virtual ev_bool getRequestsAccepted() const
				{
					if (this->_gRef != NULL && this->m_getRequestsAccepted_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getRequestsAccepted_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
						return this->CDefaultWorkQueue::getRequestsAccepted();
					}
				}
				virtual void processResponses()
				{
					if (this->_gRef != NULL && this->m_processResponses_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("processResponses_void_callback");
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
						return this->CDefaultWorkQueue::processResponses();
					}
				}
				virtual ev_uint32 getResponseProcessingTimeLimit() const
				{
					if (this->_gRef != NULL && this->m_getResponseProcessingTimeLimit_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getResponseProcessingTimeLimit_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultWorkQueue::getResponseProcessingTimeLimit();
					}
				}
				virtual void setResponseProcessingTimeLimit(ev_uint32 ms)
				{
					if (this->_gRef != NULL && this->m_setResponseProcessingTimeLimit_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong ms_j = (jlong) ms;
						jmethodID __method = __gr->getMethod("setResponseProcessingTimeLimit_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , ms_j);
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
						return this->CDefaultWorkQueue::setResponseProcessingTimeLimit(ms);
					}
				}
				virtual ev_uint16 getChannel(ev_uint32 priority)
				{
					if (this->_gRef != NULL && this->m_getChannel_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong priority_j = (jlong) priority;
						jmethodID __method = __gr->getMethod("getChannel_ev_uint32_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , priority_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint16 __values1 = (ev_uint16) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultWorkQueue::getChannel(priority);
					}
				}
				virtual ev_bool setChannelListener(ev_uint16 channelID, EarthView::World::Core::CWorkQueueChannelListener* pListener)
				{
					if (this->_gRef != NULL && this->m_setChannelListener_ev_uint16_CWorkQueueChannelListener_callback != "" && this->isCustomExtend())
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
						jint channelID_j = (jint) channelID;
						jlong pListener_j = (jlong) pListener;
						jmethodID __method = __gr->getMethod("setChannelListener_ev_uint16_CWorkQueueChannelListener_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , channelID_j, pListener_j);
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
						return this->CDefaultWorkQueue::setChannelListener(channelID, pListener);
					}
				}
				virtual EarthView::World::Core::CWorkQueueChannelListener* getChannelListener(ev_uint16 channelID) const
				{
					if (this->_gRef != NULL && this->m_getChannelListener_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint channelID_j = (jint) channelID;
						jmethodID __method = __gr->getMethod("getChannelListener_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , channelID_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::CWorkQueueChannelListener *__values1 = (EarthView::World::Core::CWorkQueueChannelListener*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultWorkQueue::getChannelListener(channelID);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDefaultWorkQueueProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue__1threadMain_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueue *pObjectX = (EarthView::World::Core::CDefaultWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueProxy))
				{
					pObjectX->EarthView::World::Core::CDefaultWorkQueue::_threadMain();
				}
				else
				{
					pObjectX->_threadMain();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1_1threadMain_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__threadMain_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_threadMain_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue__1threadMain_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueue *pObjectX = (EarthView::World::Core::CDefaultWorkQueue*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDefaultWorkQueue::_threadMain();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_shutdown_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueue *pObjectX = (EarthView::World::Core::CDefaultWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueProxy))
				{
					pObjectX->EarthView::World::Core::CDefaultWorkQueue::shutdown();
				}
				else
				{
					pObjectX->shutdown();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1shutdown_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_shutdown_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"shutdown_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_shutdown_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueue *pObjectX = (EarthView::World::Core::CDefaultWorkQueue*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDefaultWorkQueue::shutdown();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_startup_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean forceRestart_j)
			{
				ev_bool forceRestart = (ev_bool) forceRestart_j;
				EarthView::World::Core::CDefaultWorkQueue *pObjectX = (EarthView::World::Core::CDefaultWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueProxy))
				{
					pObjectX->EarthView::World::Core::CDefaultWorkQueue::startup(forceRestart);
				}
				else
				{
					pObjectX->startup(forceRestart);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1startup_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_startup_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"startup_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_startup_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean forceRestart_j)
			{
				ev_bool forceRestart = (ev_bool) forceRestart_j;
				EarthView::World::Core::CDefaultWorkQueue *pObjectX = (EarthView::World::Core::CDefaultWorkQueue*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDefaultWorkQueue::startup(forceRestart);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_startup_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueue *pObjectX = (EarthView::World::Core::CDefaultWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueProxy))
				{
					pObjectX->EarthView::World::Core::CDefaultWorkQueue::startup();
				}
				else
				{
					pObjectX->startup();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1startup_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_startup_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"startup_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_startup_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueue *pObjectX = (EarthView::World::Core::CDefaultWorkQueue*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDefaultWorkQueue::startup();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_DefaultWorkQueue_isQueueRunningByFilter_1ev_1uint16_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jlong filter_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				ev_uint64 filter = *(ev_uint64*) filter_j;
				EarthView::World::Core::CDefaultWorkQueue *pObjectX = (EarthView::World::Core::CDefaultWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CDefaultWorkQueue::isQueueRunningByFilter(channel, filter);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isQueueRunningByFilter(channel, filter);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1isQueueRunningByFilter_1ev_1uint16_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isQueueRunningByFilter_ev_uint16_ev_uint64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isQueueRunningByFilter_ev_uint16_ev_uint64_callback", "(IJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_DefaultWorkQueue_isQueueRunningByFilter_1ev_1uint16_1ev_1uint64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jlong filter_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				ev_uint64 filter = *(ev_uint64*) filter_j;
				EarthView::World::Core::CDefaultWorkQueue *pObjectX = (EarthView::World::Core::CDefaultWorkQueue*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CDefaultWorkQueue::isQueueRunningByFilter(channel, filter);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_waitForNextRequest_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueue *pObjectX = (EarthView::World::Core::CDefaultWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueProxy))
				{
					pObjectX->EarthView::World::Core::CDefaultWorkQueue::waitForNextRequest();
				}
				else
				{
					pObjectX->waitForNextRequest();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1waitForNextRequest_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_waitForNextRequest_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"waitForNextRequest_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_waitForNextRequest_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueue *pObjectX = (EarthView::World::Core::CDefaultWorkQueue*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDefaultWorkQueue::waitForNextRequest();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_notifyThreadRegistered_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueue *pObjectX = (EarthView::World::Core::CDefaultWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueProxy))
				{
					pObjectX->EarthView::World::Core::CDefaultWorkQueue::notifyThreadRegistered();
				}
				else
				{
					pObjectX->notifyThreadRegistered();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1notifyThreadRegistered_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_notifyThreadRegistered_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"notifyThreadRegistered_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_notifyThreadRegistered_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueue *pObjectX = (EarthView::World::Core::CDefaultWorkQueue*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDefaultWorkQueue::notifyThreadRegistered();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_notifyWorkers_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueue *pObjectX = (EarthView::World::Core::CDefaultWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueProxy))
				{
					pObjectX->EarthView::World::Core::CDefaultWorkQueue::notifyWorkers();
				}
				else
				{
					pObjectX->notifyWorkers();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1notifyWorkers_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_notifyWorkers_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"notifyWorkers_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_notifyWorkers_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueue *pObjectX = (EarthView::World::Core::CDefaultWorkQueue*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDefaultWorkQueue::notifyWorkers();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1getWorkerThreadCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWorkerThreadCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWorkerThreadCount_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1setWorkerThreadCount_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setWorkerThreadCount_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setWorkerThreadCount_ev_size_t_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1getWorkersCanAccessRenderSystem_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWorkersCanAccessRenderSystem_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWorkersCanAccessRenderSystem_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1setWorkersCanAccessRenderSystem_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setWorkersCanAccessRenderSystem_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setWorkersCanAccessRenderSystem_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1_1processNextRequest_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__processNextRequest_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_processNextRequest_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1isShuttingDown_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isShuttingDown_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isShuttingDown_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1addRequestHandler_1ev_1uint16_1CRequestHandler(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addRequestHandler_ev_uint16_CRequestHandler_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addRequestHandler_ev_uint16_CRequestHandler_callback", "(IJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1removeRequestHandler_1ev_1uint16_1CRequestHandler(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeRequestHandler_ev_uint16_CRequestHandler_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeRequestHandler_ev_uint16_CRequestHandler_callback", "(IJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1addResponseHandler_1ev_1uint16_1CResponseHandler(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addResponseHandler_ev_uint16_CResponseHandler_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addResponseHandler_ev_uint16_CResponseHandler_callback", "(IJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1removeResponseHandler_1ev_1uint16_1CResponseHandler(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeResponseHandler_ev_uint16_CResponseHandler_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeResponseHandler_ev_uint16_CResponseHandler_callback", "(IJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1addRequest_1ev_1uint16_1ev_1uint16_1RequestPara_1ev_1uint8_1ev_1bool_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_callback", "(IIJSZJ)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1addRequest_1ev_1uint16_1ev_1uint16_1RequestPara_1ev_1uint8_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_callback", "(IIJSZ)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1addRequest_1ev_1uint16_1ev_1uint16_1RequestPara_1ev_1uint8(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_callback", "(IIJS)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1addRequest_1ev_1uint16_1ev_1uint16_1RequestPara(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addRequest_ev_uint16_ev_uint16_RequestPara_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addRequest_ev_uint16_ev_uint16_RequestPara_callback", "(IIJ)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1addRequest_1CRequest(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addRequest_CRequest_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addRequest_CRequest_callback", "(J)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1addOrReplaceRequest_1ev_1uint16_1ev_1uint16_1RequestPara_1ev_1uint8_1ev_1bool_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addOrReplaceRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addOrReplaceRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_callback", "(IIJSZJ)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1abortRequest_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_abortRequest_ev_uint64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"abortRequest_ev_uint64_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1abortRequestsByChannel_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_abortRequestsByChannel_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"abortRequestsByChannel_ev_uint16_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1abortRequestsByFilter_1ev_1uint16_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_abortRequestsByFilter_ev_uint16_ev_uint64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"abortRequestsByFilter_ev_uint16_ev_uint64_callback", "(IJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1abortAllRequests_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_abortAllRequests_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"abortAllRequests_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1setPaused_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setPaused_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setPaused_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1isPaused_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isPaused_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isPaused_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1setRequestsAccepted_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setRequestsAccepted_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setRequestsAccepted_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1getRequestsAccepted_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getRequestsAccepted_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getRequestsAccepted_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1processResponses_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_processResponses_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"processResponses_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1getResponseProcessingTimeLimit_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getResponseProcessingTimeLimit_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getResponseProcessingTimeLimit_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1setResponseProcessingTimeLimit_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setResponseProcessingTimeLimit_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setResponseProcessingTimeLimit_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1getChannel_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getChannel_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getChannel_ev_uint32_callback", "(J)I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1setChannelListener_1ev_1uint16_1CWorkQueueChannelListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setChannelListener_ev_uint16_CWorkQueueChannelListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setChannelListener_ev_uint16_CWorkQueueChannelListener_callback", "(IJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueue_register_1getChannelListener_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueProxy *pObjectX = (JCDefaultWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getChannelListener_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getChannelListener_ev_uint16_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
