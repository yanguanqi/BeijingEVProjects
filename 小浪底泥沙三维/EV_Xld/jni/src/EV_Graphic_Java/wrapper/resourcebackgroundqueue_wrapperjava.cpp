/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/resourcebackgroundqueue.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class JCResourceBackgroundQueueProxy : public EarthView::World::Graphic::CResourceBackgroundQueue
			{
			 private:
				EarthView::World::Core::ev_string m_canHandleResponse_CResponse_CWorkQueue_callback;
				EarthView::World::Core::ev_string m_canHandleRequest_CRequest_CWorkQueue_callback;
				EarthView::World::Core::ev_string m_handleResponse_CResponse_CWorkQueue_callback;
				EarthView::World::Core::ev_string m_handleRequest_CRequest_CWorkQueue_callback;
				EarthView::World::Core::ev_string m_getRequestHandlerPtr_void_callback;
				EarthView::World::Core::ev_string m_getResponseHandlerPtr_void_callback;
				EarthView::World::Core::ev_string m_initialiseResourceGroup_EVString_CResourceBackgroundQueueListener_callback;
				EarthView::World::Core::ev_string m_initialiseResourceGroup_EVString_callback;
				EarthView::World::Core::ev_string m_initialiseAllResourceGroups_CResourceBackgroundQueueListener_callback;
				EarthView::World::Core::ev_string m_initialiseAllResourceGroups_void_callback;
				EarthView::World::Core::ev_string m_prepareResourceGroup_EVString_CResourceBackgroundQueueListener_callback;
				EarthView::World::Core::ev_string m_prepareResourceGroup_EVString_callback;
				EarthView::World::Core::ev_string m_loadResourceGroup_EVString_CResourceBackgroundQueueListener_callback;
				EarthView::World::Core::ev_string m_loadResourceGroup_EVString_callback;
				EarthView::World::Core::ev_string m_unload_EVString_EVString_CResourceBackgroundQueueListener_callback;
				EarthView::World::Core::ev_string m_unload_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_unload_EVString_ev_uint64_CResourceBackgroundQueueListener_callback;
				EarthView::World::Core::ev_string m_unload_EVString_ev_uint64_callback;
				EarthView::World::Core::ev_string m_unloadResourceGroup_EVString_CResourceBackgroundQueueListener_callback;
				EarthView::World::Core::ev_string m_unloadResourceGroup_EVString_callback;
				EarthView::World::Core::ev_string m_prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_callback;
				EarthView::World::Core::ev_string m_prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_callback;
				EarthView::World::Core::ev_string m_prepare_EVString_EVString_EVString_ev_bool_callback;
				EarthView::World::Core::ev_string m_prepare_EVString_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_callback;
				EarthView::World::Core::ev_string m_load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_callback;
				EarthView::World::Core::ev_string m_load_EVString_EVString_EVString_ev_bool_callback;
				EarthView::World::Core::ev_string m_load_EVString_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_isProcessComplete_ev_uint64_callback;
				EarthView::World::Core::ev_string m_initialise_void_callback;
				EarthView::World::Core::ev_string m_shutdown_void_callback;
				EarthView::World::Core::ev_string m_getGroupName_void_callback;
				EarthView::World::Core::ev_string m_getName_void_callback;
			public:
				JCResourceBackgroundQueueProxy(EarthView::World::Core::CNameValuePairList *pList) : CResourceBackgroundQueue(pList)
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
				void register_canHandleResponse_CResponse_CWorkQueue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_canHandleResponse_CResponse_CWorkQueue_callback = __method;
				}
				void register_canHandleRequest_CRequest_CWorkQueue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_canHandleRequest_CRequest_CWorkQueue_callback = __method;
				}
				void register_handleResponse_CResponse_CWorkQueue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_handleResponse_CResponse_CWorkQueue_callback = __method;
				}
				void register_handleRequest_CRequest_CWorkQueue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_handleRequest_CRequest_CWorkQueue_callback = __method;
				}
				void register_getRequestHandlerPtr_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getRequestHandlerPtr_void_callback = __method;
				}
				void register_getResponseHandlerPtr_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getResponseHandlerPtr_void_callback = __method;
				}
				void register_initialiseResourceGroup_EVString_CResourceBackgroundQueueListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_initialiseResourceGroup_EVString_CResourceBackgroundQueueListener_callback = __method;
				}
				void register_initialiseResourceGroup_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_initialiseResourceGroup_EVString_callback = __method;
				}
				void register_initialiseAllResourceGroups_CResourceBackgroundQueueListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_initialiseAllResourceGroups_CResourceBackgroundQueueListener_callback = __method;
				}
				void register_initialiseAllResourceGroups_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_initialiseAllResourceGroups_void_callback = __method;
				}
				void register_prepareResourceGroup_EVString_CResourceBackgroundQueueListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepareResourceGroup_EVString_CResourceBackgroundQueueListener_callback = __method;
				}
				void register_prepareResourceGroup_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepareResourceGroup_EVString_callback = __method;
				}
				void register_loadResourceGroup_EVString_CResourceBackgroundQueueListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_loadResourceGroup_EVString_CResourceBackgroundQueueListener_callback = __method;
				}
				void register_loadResourceGroup_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_loadResourceGroup_EVString_callback = __method;
				}
				void register_unload_EVString_EVString_CResourceBackgroundQueueListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unload_EVString_EVString_CResourceBackgroundQueueListener_callback = __method;
				}
				void register_unload_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unload_EVString_EVString_callback = __method;
				}
				void register_unload_EVString_ev_uint64_CResourceBackgroundQueueListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unload_EVString_ev_uint64_CResourceBackgroundQueueListener_callback = __method;
				}
				void register_unload_EVString_ev_uint64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unload_EVString_ev_uint64_callback = __method;
				}
				void register_unloadResourceGroup_EVString_CResourceBackgroundQueueListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unloadResourceGroup_EVString_CResourceBackgroundQueueListener_callback = __method;
				}
				void register_unloadResourceGroup_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unloadResourceGroup_EVString_callback = __method;
				}
				void register_prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_callback = __method;
				}
				void register_prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback = __method;
				}
				void register_prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_callback = __method;
				}
				void register_prepare_EVString_EVString_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepare_EVString_EVString_EVString_ev_bool_callback = __method;
				}
				void register_prepare_EVString_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepare_EVString_EVString_EVString_callback = __method;
				}
				void register_load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_callback = __method;
				}
				void register_load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback = __method;
				}
				void register_load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_callback = __method;
				}
				void register_load_EVString_EVString_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_EVString_EVString_EVString_ev_bool_callback = __method;
				}
				void register_load_EVString_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_EVString_EVString_EVString_callback = __method;
				}
				void register_isProcessComplete_ev_uint64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isProcessComplete_ev_uint64_callback = __method;
				}
				void register_initialise_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_initialise_void_callback = __method;
				}
				void register_shutdown_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_shutdown_void_callback = __method;
				}
				void register_getGroupName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getGroupName_void_callback = __method;
				}
				void register_getName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getName_void_callback = __method;
				}
				virtual EVString getGroupName() const
				{
					if (this->_gRef != NULL && this->m_getGroupName_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getGroupName_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
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
						return this->CResourceBackgroundQueue::getGroupName();
					}
				}
				virtual EVString getName() const
				{
					if (this->_gRef != NULL && this->m_getName_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getName_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
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
						return this->CResourceBackgroundQueue::getName();
					}
				}
				virtual ev_bool canHandleResponse(const EarthView::World::Core::CWorkQueue::CResponse* res, const EarthView::World::Core::CWorkQueue* srcQ)
				{
					if (this->_gRef != NULL && this->m_canHandleResponse_CResponse_CWorkQueue_callback != "" && this->isCustomExtend())
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
						jlong res_j = (jlong) res;
						jlong srcQ_j = (jlong) srcQ;
						jmethodID __method = __gr->getMethod("canHandleResponse_CResponse_CWorkQueue_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , res_j, srcQ_j);
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
						return this->CResourceBackgroundQueue::canHandleResponse(res, srcQ);
					}
				}
				virtual ev_bool canHandleRequest(const EarthView::World::Core::CWorkQueue::CRequest* res, const EarthView::World::Core::CWorkQueue* srcQ)
				{
					if (this->_gRef != NULL && this->m_canHandleRequest_CRequest_CWorkQueue_callback != "" && this->isCustomExtend())
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
						jlong res_j = (jlong) res;
						jlong srcQ_j = (jlong) srcQ;
						jmethodID __method = __gr->getMethod("canHandleRequest_CRequest_CWorkQueue_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , res_j, srcQ_j);
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
						return this->CResourceBackgroundQueue::canHandleRequest(res, srcQ);
					}
				}
				virtual void handleResponse(const EarthView::World::Core::CWorkQueue::CResponse* res, const EarthView::World::Core::CWorkQueue* srcQ)
				{
					if (this->_gRef != NULL && this->m_handleResponse_CResponse_CWorkQueue_callback != "" && this->isCustomExtend())
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
						jlong res_j = (jlong) res;
						jlong srcQ_j = (jlong) srcQ;
						jmethodID __method = __gr->getMethod("handleResponse_CResponse_CWorkQueue_callback");
						__env->CallVoidMethod(__obj, __method , res_j, srcQ_j);
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
						return this->CResourceBackgroundQueue::handleResponse(res, srcQ);
					}
				}
				virtual EarthView::World::Core::CWorkQueue::CResponse* handleRequest(const EarthView::World::Core::CWorkQueue::CRequest* req, const EarthView::World::Core::CWorkQueue* srcQ)
				{
					if (this->_gRef != NULL && this->m_handleRequest_CRequest_CWorkQueue_callback != "" && this->isCustomExtend())
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
						jlong req_j = (jlong) req;
						jlong srcQ_j = (jlong) srcQ;
						jmethodID __method = __gr->getMethod("handleRequest_CRequest_CWorkQueue_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , req_j, srcQ_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::CWorkQueue::CResponse *__values1 = (EarthView::World::Core::CWorkQueue::CResponse*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CResourceBackgroundQueue::handleRequest(req, srcQ);
					}
				}
				virtual const EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalRequestHandler* getRequestHandlerPtr()
				{
					if (this->_gRef != NULL && this->m_getRequestHandlerPtr_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getRequestHandlerPtr_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalRequestHandler *__values1 = (const EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalRequestHandler*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CResourceBackgroundQueue::getRequestHandlerPtr();
					}
				}
				virtual const EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalResponseHandler* getResponseHandlerPtr()
				{
					if (this->_gRef != NULL && this->m_getResponseHandlerPtr_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getResponseHandlerPtr_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalResponseHandler *__values1 = (const EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalResponseHandler*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CResourceBackgroundQueue::getResponseHandlerPtr();
					}
				}
				virtual void initialise()
				{
					if (this->_gRef != NULL && this->m_initialise_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("initialise_void_callback");
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
						return this->CResourceBackgroundQueue::initialise();
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
						return this->CResourceBackgroundQueue::shutdown();
					}
				}
				virtual ev_uint64 initialiseResourceGroup(const EVString& name, EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener* listener)
				{
					if (this->_gRef != NULL && this->m_initialiseResourceGroup_EVString_CResourceBackgroundQueueListener_callback != "" && this->isCustomExtend())
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
						jlong listener_j = (jlong) listener;
						jmethodID __method = __gr->getMethod("initialiseResourceGroup_EVString_CResourceBackgroundQueueListener_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , name_j, listener_j);
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
						return this->CResourceBackgroundQueue::initialiseResourceGroup(name, listener);
					}
				}
				virtual ev_uint64 initialiseResourceGroup(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_initialiseResourceGroup_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("initialiseResourceGroup_EVString_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , name_j);
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
						return this->CResourceBackgroundQueue::initialiseResourceGroup(name);
					}
				}
				virtual ev_uint64 initialiseAllResourceGroups(EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener* listener)
				{
					if (this->_gRef != NULL && this->m_initialiseAllResourceGroups_CResourceBackgroundQueueListener_callback != "" && this->isCustomExtend())
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
						jlong listener_j = (jlong) listener;
						jmethodID __method = __gr->getMethod("initialiseAllResourceGroups_CResourceBackgroundQueueListener_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , listener_j);
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
						return this->CResourceBackgroundQueue::initialiseAllResourceGroups(listener);
					}
				}
				virtual ev_uint64 initialiseAllResourceGroups()
				{
					if (this->_gRef != NULL && this->m_initialiseAllResourceGroups_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("initialiseAllResourceGroups_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
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
						return this->CResourceBackgroundQueue::initialiseAllResourceGroups();
					}
				}
				virtual ev_uint64 prepareResourceGroup(const EVString& name, EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener* listener)
				{
					if (this->_gRef != NULL && this->m_prepareResourceGroup_EVString_CResourceBackgroundQueueListener_callback != "" && this->isCustomExtend())
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
						jlong listener_j = (jlong) listener;
						jmethodID __method = __gr->getMethod("prepareResourceGroup_EVString_CResourceBackgroundQueueListener_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , name_j, listener_j);
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
						return this->CResourceBackgroundQueue::prepareResourceGroup(name, listener);
					}
				}
				virtual ev_uint64 prepareResourceGroup(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_prepareResourceGroup_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("prepareResourceGroup_EVString_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , name_j);
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
						return this->CResourceBackgroundQueue::prepareResourceGroup(name);
					}
				}
				virtual ev_uint64 loadResourceGroup(const EVString& name, EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener* listener)
				{
					if (this->_gRef != NULL && this->m_loadResourceGroup_EVString_CResourceBackgroundQueueListener_callback != "" && this->isCustomExtend())
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
						jlong listener_j = (jlong) listener;
						jmethodID __method = __gr->getMethod("loadResourceGroup_EVString_CResourceBackgroundQueueListener_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , name_j, listener_j);
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
						return this->CResourceBackgroundQueue::loadResourceGroup(name, listener);
					}
				}
				virtual ev_uint64 loadResourceGroup(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_loadResourceGroup_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("loadResourceGroup_EVString_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , name_j);
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
						return this->CResourceBackgroundQueue::loadResourceGroup(name);
					}
				}
				virtual ev_uint64 unload(const EVString& resType, const EVString& name, EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener* listener)
				{
					if (this->_gRef != NULL && this->m_unload_EVString_EVString_CResourceBackgroundQueueListener_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring resType_wch = resType;
						jstring resType_j = __env->NewString((const jchar*)resType_wch.getString(), resType_wch.size());
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jlong listener_j = (jlong) listener;
						jmethodID __method = __gr->getMethod("unload_EVString_EVString_CResourceBackgroundQueueListener_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , resType_j, name_j, listener_j);
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
						return this->CResourceBackgroundQueue::unload(resType, name, listener);
					}
				}
				virtual ev_uint64 unload(const EVString& resType, const EVString& name)
				{
					if (this->_gRef != NULL && this->m_unload_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring resType_wch = resType;
						jstring resType_j = __env->NewString((const jchar*)resType_wch.getString(), resType_wch.size());
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("unload_EVString_EVString_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , resType_j, name_j);
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
						return this->CResourceBackgroundQueue::unload(resType, name);
					}
				}
				virtual ev_uint64 unload(const EVString& resType, ev_uint64 handle, EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener* listener)
				{
					if (this->_gRef != NULL && this->m_unload_EVString_ev_uint64_CResourceBackgroundQueueListener_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring resType_wch = resType;
						jstring resType_j = __env->NewString((const jchar*)resType_wch.getString(), resType_wch.size());
						jlong handle_j = (jlong) &handle;
						jlong listener_j = (jlong) listener;
						jmethodID __method = __gr->getMethod("unload_EVString_ev_uint64_CResourceBackgroundQueueListener_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , resType_j, handle_j, listener_j);
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
						return this->CResourceBackgroundQueue::unload(resType, handle, listener);
					}
				}
				virtual ev_uint64 unload(const EVString& resType, ev_uint64 handle)
				{
					if (this->_gRef != NULL && this->m_unload_EVString_ev_uint64_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring resType_wch = resType;
						jstring resType_j = __env->NewString((const jchar*)resType_wch.getString(), resType_wch.size());
						jlong handle_j = (jlong) &handle;
						jmethodID __method = __gr->getMethod("unload_EVString_ev_uint64_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , resType_j, handle_j);
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
						return this->CResourceBackgroundQueue::unload(resType, handle);
					}
				}
				virtual ev_uint64 unloadResourceGroup(const EVString& name, EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener* listener)
				{
					if (this->_gRef != NULL && this->m_unloadResourceGroup_EVString_CResourceBackgroundQueueListener_callback != "" && this->isCustomExtend())
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
						jlong listener_j = (jlong) listener;
						jmethodID __method = __gr->getMethod("unloadResourceGroup_EVString_CResourceBackgroundQueueListener_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , name_j, listener_j);
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
						return this->CResourceBackgroundQueue::unloadResourceGroup(name, listener);
					}
				}
				virtual ev_uint64 unloadResourceGroup(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_unloadResourceGroup_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("unloadResourceGroup_EVString_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , name_j);
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
						return this->CResourceBackgroundQueue::unloadResourceGroup(name);
					}
				}
				virtual ev_uint64 prepare(const EVString& resType, const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader, const EarthView::World::Core::CommonStringPairList* loadParams, EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener* listener)
				{
					if (this->_gRef != NULL && this->m_prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring resType_wch = resType;
						jstring resType_j = __env->NewString((const jchar*)resType_wch.getString(), resType_wch.size());
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jlong loadParams_j = (jlong) loadParams;
						jlong listener_j = (jlong) listener;
						jmethodID __method = __gr->getMethod("prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , resType_j, name_j, group_j, isManual_j, ref_loader_j, loadParams_j, listener_j);
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
						return this->CResourceBackgroundQueue::prepare(resType, name, group, isManual, ref_loader, loadParams, listener);
					}
				}
				virtual ev_uint64 prepare(const EVString& resType, const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader, const EarthView::World::Core::CommonStringPairList* loadParams)
				{
					if (this->_gRef != NULL && this->m_prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring resType_wch = resType;
						jstring resType_j = __env->NewString((const jchar*)resType_wch.getString(), resType_wch.size());
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jlong loadParams_j = (jlong) loadParams;
						jmethodID __method = __gr->getMethod("prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , resType_j, name_j, group_j, isManual_j, ref_loader_j, loadParams_j);
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
						return this->CResourceBackgroundQueue::prepare(resType, name, group, isManual, ref_loader, loadParams);
					}
				}
				virtual ev_uint64 prepare(const EVString& resType, const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader)
				{
					if (this->_gRef != NULL && this->m_prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring resType_wch = resType;
						jstring resType_j = __env->NewString((const jchar*)resType_wch.getString(), resType_wch.size());
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jmethodID __method = __gr->getMethod("prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , resType_j, name_j, group_j, isManual_j, ref_loader_j);
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
						return this->CResourceBackgroundQueue::prepare(resType, name, group, isManual, ref_loader);
					}
				}
				virtual ev_uint64 prepare(const EVString& resType, const EVString& name, const EVString& group, ev_bool isManual)
				{
					if (this->_gRef != NULL && this->m_prepare_EVString_EVString_EVString_ev_bool_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring resType_wch = resType;
						jstring resType_j = __env->NewString((const jchar*)resType_wch.getString(), resType_wch.size());
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jmethodID __method = __gr->getMethod("prepare_EVString_EVString_EVString_ev_bool_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , resType_j, name_j, group_j, isManual_j);
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
						return this->CResourceBackgroundQueue::prepare(resType, name, group, isManual);
					}
				}
				virtual ev_uint64 prepare(const EVString& resType, const EVString& name, const EVString& group)
				{
					if (this->_gRef != NULL && this->m_prepare_EVString_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring resType_wch = resType;
						jstring resType_j = __env->NewString((const jchar*)resType_wch.getString(), resType_wch.size());
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jmethodID __method = __gr->getMethod("prepare_EVString_EVString_EVString_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , resType_j, name_j, group_j);
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
						return this->CResourceBackgroundQueue::prepare(resType, name, group);
					}
				}
				virtual ev_uint64 load(const EVString& resType, const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader, const EarthView::World::Core::CommonStringPairList* loadParams, EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener* listener)
				{
					if (this->_gRef != NULL && this->m_load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring resType_wch = resType;
						jstring resType_j = __env->NewString((const jchar*)resType_wch.getString(), resType_wch.size());
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jlong loadParams_j = (jlong) loadParams;
						jlong listener_j = (jlong) listener;
						jmethodID __method = __gr->getMethod("load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , resType_j, name_j, group_j, isManual_j, ref_loader_j, loadParams_j, listener_j);
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
						return this->CResourceBackgroundQueue::load(resType, name, group, isManual, ref_loader, loadParams, listener);
					}
				}
				virtual ev_uint64 load(const EVString& resType, const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader, const EarthView::World::Core::CommonStringPairList* loadParams)
				{
					if (this->_gRef != NULL && this->m_load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring resType_wch = resType;
						jstring resType_j = __env->NewString((const jchar*)resType_wch.getString(), resType_wch.size());
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jlong loadParams_j = (jlong) loadParams;
						jmethodID __method = __gr->getMethod("load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , resType_j, name_j, group_j, isManual_j, ref_loader_j, loadParams_j);
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
						return this->CResourceBackgroundQueue::load(resType, name, group, isManual, ref_loader, loadParams);
					}
				}
				virtual ev_uint64 load(const EVString& resType, const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader)
				{
					if (this->_gRef != NULL && this->m_load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring resType_wch = resType;
						jstring resType_j = __env->NewString((const jchar*)resType_wch.getString(), resType_wch.size());
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jmethodID __method = __gr->getMethod("load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , resType_j, name_j, group_j, isManual_j, ref_loader_j);
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
						return this->CResourceBackgroundQueue::load(resType, name, group, isManual, ref_loader);
					}
				}
				virtual ev_uint64 load(const EVString& resType, const EVString& name, const EVString& group, ev_bool isManual)
				{
					if (this->_gRef != NULL && this->m_load_EVString_EVString_EVString_ev_bool_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring resType_wch = resType;
						jstring resType_j = __env->NewString((const jchar*)resType_wch.getString(), resType_wch.size());
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jmethodID __method = __gr->getMethod("load_EVString_EVString_EVString_ev_bool_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , resType_j, name_j, group_j, isManual_j);
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
						return this->CResourceBackgroundQueue::load(resType, name, group, isManual);
					}
				}
				virtual ev_uint64 load(const EVString& resType, const EVString& name, const EVString& group)
				{
					if (this->_gRef != NULL && this->m_load_EVString_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring resType_wch = resType;
						jstring resType_j = __env->NewString((const jchar*)resType_wch.getString(), resType_wch.size());
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jmethodID __method = __gr->getMethod("load_EVString_EVString_EVString_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , resType_j, name_j, group_j);
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
						return this->CResourceBackgroundQueue::load(resType, name, group);
					}
				}
				virtual ev_bool isProcessComplete(ev_uint64 ticket)
				{
					if (this->_gRef != NULL && this->m_isProcessComplete_ev_uint64_callback != "" && this->isCustomExtend())
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
						jlong ticket_j = (jlong) &ticket;
						jmethodID __method = __gr->getMethod("isProcessComplete_ev_uint64_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , ticket_j);
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
						return this->CResourceBackgroundQueue::isProcessComplete(ticket);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCResourceBackgroundQueueProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_get_1msBackgroundQueueGroupName_1void(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Graphic::CResourceBackgroundQueue::msBackgroundQueueGroupName;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_set_1msBackgroundQueueGroupName_1EVString(JNIEnv *__env, jclass __clazz, jstring __values1_j)
			{
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				EarthView::World::Graphic::CResourceBackgroundQueue::msBackgroundQueueGroupName = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_get_1msBackgroundQueueName_1void(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Graphic::CResourceBackgroundQueue::msBackgroundQueueName;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_set_1msBackgroundQueueName_1EVString(JNIEnv *__env, jclass __clazz, jstring __values1_j)
			{
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				EarthView::World::Graphic::CResourceBackgroundQueue::msBackgroundQueueName = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_getGroupName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::getGroupName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getGroupName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1getGroupName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getGroupName_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getGroupName_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_getGroupName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::getGroupName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getName_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getName_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::getName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CResourceBackgroundQueue& __values1 = EarthView::World::Graphic::CResourceBackgroundQueue::getSingleton();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CResourceBackgroundQueue* __values1 = EarthView::World::Graphic::CResourceBackgroundQueue::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_canHandleResponse_1CResponse_1CWorkQueue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CResponse *res = (const EarthView::World::Core::CWorkQueue::CResponse*) res_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::canHandleResponse(res, srcQ);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->canHandleResponse(res, srcQ);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1canHandleResponse_1CResponse_1CWorkQueue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_canHandleResponse_CResponse_CWorkQueue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"canHandleResponse_CResponse_CWorkQueue_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_canHandleResponse_1CResponse_1CWorkQueue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CResponse *res = (const EarthView::World::Core::CWorkQueue::CResponse*) res_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::canHandleResponse(res, srcQ);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_canHandleRequest_1CRequest_1CWorkQueue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CRequest *res = (const EarthView::World::Core::CWorkQueue::CRequest*) res_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::canHandleRequest(res, srcQ);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->canHandleRequest(res, srcQ);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1canHandleRequest_1CRequest_1CWorkQueue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_canHandleRequest_CRequest_CWorkQueue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"canHandleRequest_CRequest_CWorkQueue_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_canHandleRequest_1CRequest_1CWorkQueue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CRequest *res = (const EarthView::World::Core::CWorkQueue::CRequest*) res_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::canHandleRequest(res, srcQ);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			class JCResourceBackgroundQueueInternalRequestHandlerProxy : public EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalRequestHandler
			{
			 private:
				EarthView::World::Core::ev_string m_canHandleRequest_CRequest_CWorkQueue_callback;
				EarthView::World::Core::ev_string m_handleRequest_CRequest_CWorkQueue_callback;
			public:
				JCResourceBackgroundQueueInternalRequestHandlerProxy(EarthView::World::Core::CNameValuePairList *pList) : CResourceBackgroundQueueInternalRequestHandler(pList)
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
				void register_canHandleRequest_CRequest_CWorkQueue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_canHandleRequest_CRequest_CWorkQueue_callback = __method;
				}
				void register_handleRequest_CRequest_CWorkQueue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_handleRequest_CRequest_CWorkQueue_callback = __method;
				}
				virtual ev_bool canHandleRequest(const EarthView::World::Core::CWorkQueue::CRequest* res, const EarthView::World::Core::CWorkQueue* srcQ)
				{
					if (this->_gRef != NULL && this->m_canHandleRequest_CRequest_CWorkQueue_callback != "" && this->isCustomExtend())
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
						jlong res_j = (jlong) res;
						jlong srcQ_j = (jlong) srcQ;
						jmethodID __method = __gr->getMethod("canHandleRequest_CRequest_CWorkQueue_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , res_j, srcQ_j);
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
						return this->CResourceBackgroundQueueInternalRequestHandler::canHandleRequest(res, srcQ);
					}
				}
				virtual EarthView::World::Core::CWorkQueue::CResponse* handleRequest(const EarthView::World::Core::CWorkQueue::CRequest* req, const EarthView::World::Core::CWorkQueue* srcQ)
				{
					if (this->_gRef != NULL && this->m_handleRequest_CRequest_CWorkQueue_callback != "" && this->isCustomExtend())
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
						jlong req_j = (jlong) req;
						jlong srcQ_j = (jlong) srcQ;
						jmethodID __method = __gr->getMethod("handleRequest_CRequest_CWorkQueue_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , req_j, srcQ_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::CWorkQueue::CResponse *__values1 = (EarthView::World::Core::CWorkQueue::CResponse*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CResourceBackgroundQueueInternalRequestHandler::handleRequest(req, srcQ);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCResourceBackgroundQueueInternalRequestHandlerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_00024ResourceBackgroundQueueInternalRequestHandler_canHandleRequest_1CRequest_1CWorkQueue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CRequest *res = (const EarthView::World::Core::CWorkQueue::CRequest*) res_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalRequestHandler *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalRequestHandler*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueInternalRequestHandlerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalRequestHandler::canHandleRequest(res, srcQ);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->canHandleRequest(res, srcQ);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_00024ResourceBackgroundQueueInternalRequestHandler_register_1canHandleRequest_1CRequest_1CWorkQueue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueInternalRequestHandlerProxy *pObjectX = (JCResourceBackgroundQueueInternalRequestHandlerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_canHandleRequest_CRequest_CWorkQueue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"canHandleRequest_CRequest_CWorkQueue_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_00024ResourceBackgroundQueueInternalRequestHandler_canHandleRequest_1CRequest_1CWorkQueue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CRequest *res = (const EarthView::World::Core::CWorkQueue::CRequest*) res_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalRequestHandler *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalRequestHandler*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalRequestHandler::canHandleRequest(res, srcQ);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_00024ResourceBackgroundQueueInternalRequestHandler_handleRequest_1CRequest_1CWorkQueue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong req_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CRequest *req = (const EarthView::World::Core::CWorkQueue::CRequest*) req_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalRequestHandler *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalRequestHandler*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueInternalRequestHandlerProxy))
				{
					EarthView::World::Core::CWorkQueue::CResponse* __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalRequestHandler::handleRequest(req, srcQ);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::CWorkQueue::CResponse* __values1 = pObjectX->handleRequest(req, srcQ);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_00024ResourceBackgroundQueueInternalRequestHandler_register_1handleRequest_1CRequest_1CWorkQueue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueInternalRequestHandlerProxy *pObjectX = (JCResourceBackgroundQueueInternalRequestHandlerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_handleRequest_CRequest_CWorkQueue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"handleRequest_CRequest_CWorkQueue_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_00024ResourceBackgroundQueueInternalRequestHandler_handleRequest_1CRequest_1CWorkQueue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong req_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CRequest *req = (const EarthView::World::Core::CWorkQueue::CRequest*) req_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalRequestHandler *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalRequestHandler*) pObjXXXX;
				EarthView::World::Core::CWorkQueue::CResponse* __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalRequestHandler::handleRequest(req, srcQ);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCResourceBackgroundQueueInternalResponseHandlerProxy : public EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalResponseHandler
			{
			 private:
				EarthView::World::Core::ev_string m_canHandleResponse_CResponse_CWorkQueue_callback;
				EarthView::World::Core::ev_string m_handleResponse_CResponse_CWorkQueue_callback;
			public:
				JCResourceBackgroundQueueInternalResponseHandlerProxy(EarthView::World::Core::CNameValuePairList *pList) : CResourceBackgroundQueueInternalResponseHandler(pList)
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
				void register_canHandleResponse_CResponse_CWorkQueue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_canHandleResponse_CResponse_CWorkQueue_callback = __method;
				}
				void register_handleResponse_CResponse_CWorkQueue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_handleResponse_CResponse_CWorkQueue_callback = __method;
				}
				virtual ev_bool canHandleResponse(const EarthView::World::Core::CWorkQueue::CResponse* res, const EarthView::World::Core::CWorkQueue* srcQ)
				{
					if (this->_gRef != NULL && this->m_canHandleResponse_CResponse_CWorkQueue_callback != "" && this->isCustomExtend())
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
						jlong res_j = (jlong) res;
						jlong srcQ_j = (jlong) srcQ;
						jmethodID __method = __gr->getMethod("canHandleResponse_CResponse_CWorkQueue_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , res_j, srcQ_j);
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
						return this->CResourceBackgroundQueueInternalResponseHandler::canHandleResponse(res, srcQ);
					}
				}
				virtual void handleResponse(const EarthView::World::Core::CWorkQueue::CResponse* res, const EarthView::World::Core::CWorkQueue* srcQ)
				{
					if (this->_gRef != NULL && this->m_handleResponse_CResponse_CWorkQueue_callback != "" && this->isCustomExtend())
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
						jlong res_j = (jlong) res;
						jlong srcQ_j = (jlong) srcQ;
						jmethodID __method = __gr->getMethod("handleResponse_CResponse_CWorkQueue_callback");
						__env->CallVoidMethod(__obj, __method , res_j, srcQ_j);
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
						return this->CResourceBackgroundQueueInternalResponseHandler::handleResponse(res, srcQ);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCResourceBackgroundQueueInternalResponseHandlerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_00024ResourceBackgroundQueueInternalResponseHandler_canHandleResponse_1CResponse_1CWorkQueue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CResponse *res = (const EarthView::World::Core::CWorkQueue::CResponse*) res_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalResponseHandler *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalResponseHandler*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueInternalResponseHandlerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalResponseHandler::canHandleResponse(res, srcQ);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->canHandleResponse(res, srcQ);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_00024ResourceBackgroundQueueInternalResponseHandler_register_1canHandleResponse_1CResponse_1CWorkQueue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueInternalResponseHandlerProxy *pObjectX = (JCResourceBackgroundQueueInternalResponseHandlerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_canHandleResponse_CResponse_CWorkQueue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"canHandleResponse_CResponse_CWorkQueue_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_00024ResourceBackgroundQueueInternalResponseHandler_canHandleResponse_1CResponse_1CWorkQueue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CResponse *res = (const EarthView::World::Core::CWorkQueue::CResponse*) res_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalResponseHandler *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalResponseHandler*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalResponseHandler::canHandleResponse(res, srcQ);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_00024ResourceBackgroundQueueInternalResponseHandler_handleResponse_1CResponse_1CWorkQueue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CResponse *res = (const EarthView::World::Core::CWorkQueue::CResponse*) res_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalResponseHandler *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalResponseHandler*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueInternalResponseHandlerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalResponseHandler::handleResponse(res, srcQ);
				}
				else
				{
					pObjectX->handleResponse(res, srcQ);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_00024ResourceBackgroundQueueInternalResponseHandler_register_1handleResponse_1CResponse_1CWorkQueue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueInternalResponseHandlerProxy *pObjectX = (JCResourceBackgroundQueueInternalResponseHandlerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_handleResponse_CResponse_CWorkQueue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"handleResponse_CResponse_CWorkQueue_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_00024ResourceBackgroundQueueInternalResponseHandler_handleResponse_1CResponse_1CWorkQueue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CResponse *res = (const EarthView::World::Core::CWorkQueue::CResponse*) res_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalResponseHandler *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalResponseHandler*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalResponseHandler::handleResponse(res, srcQ);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_handleResponse_1CResponse_1CWorkQueue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CResponse *res = (const EarthView::World::Core::CWorkQueue::CResponse*) res_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::handleResponse(res, srcQ);
				}
				else
				{
					pObjectX->handleResponse(res, srcQ);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1handleResponse_1CResponse_1CWorkQueue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_handleResponse_CResponse_CWorkQueue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"handleResponse_CResponse_CWorkQueue_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_handleResponse_1CResponse_1CWorkQueue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CResponse *res = (const EarthView::World::Core::CWorkQueue::CResponse*) res_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::handleResponse(res, srcQ);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_handleRequest_1CRequest_1CWorkQueue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong req_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CRequest *req = (const EarthView::World::Core::CWorkQueue::CRequest*) req_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					EarthView::World::Core::CWorkQueue::CResponse* __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::handleRequest(req, srcQ);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::CWorkQueue::CResponse* __values1 = pObjectX->handleRequest(req, srcQ);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1handleRequest_1CRequest_1CWorkQueue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_handleRequest_CRequest_CWorkQueue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"handleRequest_CRequest_CWorkQueue_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_handleRequest_1CRequest_1CWorkQueue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong req_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CRequest *req = (const EarthView::World::Core::CWorkQueue::CRequest*) req_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				EarthView::World::Core::CWorkQueue::CResponse* __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::handleRequest(req, srcQ);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_getRequestHandlerPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					const EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalRequestHandler* __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::getRequestHandlerPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalRequestHandler* __values1 = pObjectX->getRequestHandlerPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1getRequestHandlerPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getRequestHandlerPtr_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getRequestHandlerPtr_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_getRequestHandlerPtr_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				const EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalRequestHandler* __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::getRequestHandlerPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_getResponseHandlerPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					const EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalResponseHandler* __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::getResponseHandlerPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalResponseHandler* __values1 = pObjectX->getResponseHandlerPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1getResponseHandlerPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getResponseHandlerPtr_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getResponseHandlerPtr_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_getResponseHandlerPtr_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				const EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalResponseHandler* __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::getResponseHandlerPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCResourceBackgroundQueueListenerProxy : public EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener
			{
			 private:
				EarthView::World::Core::ev_string m_operationCompleted_ev_uint64_BackgroundProcessResult_callback;
			public:
				JCResourceBackgroundQueueListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CResourceBackgroundQueueListener(pList)
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
				void register_operationCompleted_ev_uint64_BackgroundProcessResult_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_operationCompleted_ev_uint64_BackgroundProcessResult_callback = __method;
				}
				virtual void operationCompleted(ev_uint64 ticket, const EarthView::World::Graphic::BackgroundProcessResult& result)
				{
					if (this->_gRef != NULL && this->m_operationCompleted_ev_uint64_BackgroundProcessResult_callback != "" && this->isCustomExtend())
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
						jlong ticket_j = (jlong) &ticket;
						jlong result_j = (jlong) &result;
						jmethodID __method = __gr->getMethod("operationCompleted_ev_uint64_BackgroundProcessResult_callback");
						__env->CallVoidMethod(__obj, __method , ticket_j, result_j);
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
						return this->CResourceBackgroundQueueListener::operationCompleted(ticket, result);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCResourceBackgroundQueueListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_00024ResourceBackgroundQueueListener_operationCompleted_1ev_1uint64_1BackgroundProcessResult(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ticket_j, jlong result_j)
			{
				ev_uint64 ticket = *(ev_uint64*) ticket_j;
				const EarthView::World::Graphic::BackgroundProcessResult &result = *(EarthView::World::Graphic::BackgroundProcessResult*) result_j;
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener::operationCompleted(ticket, result);
				}
				else
				{
					pObjectX->operationCompleted(ticket, result);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_00024ResourceBackgroundQueueListener_register_1operationCompleted_1ev_1uint64_1BackgroundProcessResult(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueListenerProxy *pObjectX = (JCResourceBackgroundQueueListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_operationCompleted_ev_uint64_BackgroundProcessResult_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"operationCompleted_ev_uint64_BackgroundProcessResult_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_00024ResourceBackgroundQueueListener_operationCompleted_1ev_1uint64_1BackgroundProcessResult_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ticket_j, jlong result_j)
			{
				ev_uint64 ticket = *(ev_uint64*) ticket_j;
				const EarthView::World::Graphic::BackgroundProcessResult &result = *(EarthView::World::Graphic::BackgroundProcessResult*) result_j;
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener::operationCompleted(ticket, result);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_initialise_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::initialise();
				}
				else
				{
					pObjectX->initialise();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1initialise_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_initialise_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"initialise_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_initialise_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::initialise();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_shutdown_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::shutdown();
				}
				else
				{
					pObjectX->shutdown();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1shutdown_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_shutdown_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::shutdown();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_initialiseResourceGroup_1EVString_1CResourceBackgroundQueueListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong listener_j)
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
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener*) listener_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::initialiseResourceGroup(name, listener);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->initialiseResourceGroup(name, listener);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1initialiseResourceGroup_1EVString_1CResourceBackgroundQueueListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_initialiseResourceGroup_EVString_CResourceBackgroundQueueListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"initialiseResourceGroup_EVString_CResourceBackgroundQueueListener_callback", "(Ljava/lang/String;J)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_initialiseResourceGroup_1EVString_1CResourceBackgroundQueueListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong listener_j)
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
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener*) listener_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::initialiseResourceGroup(name, listener);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_initialiseResourceGroup_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::initialiseResourceGroup(name);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->initialiseResourceGroup(name);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1initialiseResourceGroup_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_initialiseResourceGroup_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"initialiseResourceGroup_EVString_callback", "(Ljava/lang/String;)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_initialiseResourceGroup_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::initialiseResourceGroup(name);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_initialiseAllResourceGroups_1CResourceBackgroundQueueListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener*) listener_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::initialiseAllResourceGroups(listener);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->initialiseAllResourceGroups(listener);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1initialiseAllResourceGroups_1CResourceBackgroundQueueListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_initialiseAllResourceGroups_CResourceBackgroundQueueListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"initialiseAllResourceGroups_CResourceBackgroundQueueListener_callback", "(J)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_initialiseAllResourceGroups_1CResourceBackgroundQueueListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener*) listener_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::initialiseAllResourceGroups(listener);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_initialiseAllResourceGroups_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::initialiseAllResourceGroups();
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->initialiseAllResourceGroups();
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1initialiseAllResourceGroups_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_initialiseAllResourceGroups_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"initialiseAllResourceGroups_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_initialiseAllResourceGroups_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::initialiseAllResourceGroups();
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_prepareResourceGroup_1EVString_1CResourceBackgroundQueueListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong listener_j)
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
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener*) listener_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::prepareResourceGroup(name, listener);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->prepareResourceGroup(name, listener);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1prepareResourceGroup_1EVString_1CResourceBackgroundQueueListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepareResourceGroup_EVString_CResourceBackgroundQueueListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepareResourceGroup_EVString_CResourceBackgroundQueueListener_callback", "(Ljava/lang/String;J)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_prepareResourceGroup_1EVString_1CResourceBackgroundQueueListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong listener_j)
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
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener*) listener_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::prepareResourceGroup(name, listener);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_prepareResourceGroup_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::prepareResourceGroup(name);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->prepareResourceGroup(name);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1prepareResourceGroup_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepareResourceGroup_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepareResourceGroup_EVString_callback", "(Ljava/lang/String;)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_prepareResourceGroup_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::prepareResourceGroup(name);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_loadResourceGroup_1EVString_1CResourceBackgroundQueueListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong listener_j)
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
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener*) listener_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::loadResourceGroup(name, listener);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->loadResourceGroup(name, listener);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1loadResourceGroup_1EVString_1CResourceBackgroundQueueListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_loadResourceGroup_EVString_CResourceBackgroundQueueListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"loadResourceGroup_EVString_CResourceBackgroundQueueListener_callback", "(Ljava/lang/String;J)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_loadResourceGroup_1EVString_1CResourceBackgroundQueueListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong listener_j)
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
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener*) listener_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::loadResourceGroup(name, listener);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_loadResourceGroup_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::loadResourceGroup(name);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->loadResourceGroup(name);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1loadResourceGroup_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_loadResourceGroup_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"loadResourceGroup_EVString_callback", "(Ljava/lang/String;)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_loadResourceGroup_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::loadResourceGroup(name);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_unload_1EVString_1EVString_1CResourceBackgroundQueueListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jstring name_j, jlong listener_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener*) listener_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::unload(resType, name, listener);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->unload(resType, name, listener);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1unload_1EVString_1EVString_1CResourceBackgroundQueueListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unload_EVString_EVString_CResourceBackgroundQueueListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unload_EVString_EVString_CResourceBackgroundQueueListener_callback", "(Ljava/lang/String;Ljava/lang/String;J)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_unload_1EVString_1EVString_1CResourceBackgroundQueueListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jstring name_j, jlong listener_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener*) listener_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::unload(resType, name, listener);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_unload_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::unload(resType, name);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->unload(resType, name);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1unload_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unload_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unload_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_unload_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::unload(resType, name);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_unload_1EVString_1ev_1uint64_1CResourceBackgroundQueueListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jlong handle_j, jlong listener_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				ev_uint64 handle = *(ev_uint64*) handle_j;
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener*) listener_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::unload(resType, handle, listener);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->unload(resType, handle, listener);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1unload_1EVString_1ev_1uint64_1CResourceBackgroundQueueListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unload_EVString_ev_uint64_CResourceBackgroundQueueListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unload_EVString_ev_uint64_CResourceBackgroundQueueListener_callback", "(Ljava/lang/String;JJ)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_unload_1EVString_1ev_1uint64_1CResourceBackgroundQueueListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jlong handle_j, jlong listener_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				ev_uint64 handle = *(ev_uint64*) handle_j;
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener*) listener_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::unload(resType, handle, listener);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_unload_1EVString_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jlong handle_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				ev_uint64 handle = *(ev_uint64*) handle_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::unload(resType, handle);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->unload(resType, handle);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1unload_1EVString_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unload_EVString_ev_uint64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unload_EVString_ev_uint64_callback", "(Ljava/lang/String;J)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_unload_1EVString_1ev_1uint64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jlong handle_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				ev_uint64 handle = *(ev_uint64*) handle_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::unload(resType, handle);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_unloadResourceGroup_1EVString_1CResourceBackgroundQueueListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong listener_j)
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
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener*) listener_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::unloadResourceGroup(name, listener);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->unloadResourceGroup(name, listener);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1unloadResourceGroup_1EVString_1CResourceBackgroundQueueListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unloadResourceGroup_EVString_CResourceBackgroundQueueListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unloadResourceGroup_EVString_CResourceBackgroundQueueListener_callback", "(Ljava/lang/String;J)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_unloadResourceGroup_1EVString_1CResourceBackgroundQueueListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong listener_j)
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
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener*) listener_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::unloadResourceGroup(name, listener);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_unloadResourceGroup_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::unloadResourceGroup(name);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->unloadResourceGroup(name);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1unloadResourceGroup_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unloadResourceGroup_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unloadResourceGroup_EVString_callback", "(Ljava/lang/String;)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_unloadResourceGroup_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::unloadResourceGroup(name);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_prepare_1EVString_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1CResourceBackgroundQueueListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong loadParams_j, jlong listener_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList *loadParams = (const EarthView::World::Core::CommonStringPairList*) loadParams_j;
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener*) listener_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::prepare(resType, name, group, isManual, ref_loader, loadParams, listener);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->prepare(resType, name, group, isManual, ref_loader, loadParams, listener);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1prepare_1EVString_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1CResourceBackgroundQueueListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_callback", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZJJJ)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_prepare_1EVString_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1CResourceBackgroundQueueListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong loadParams_j, jlong listener_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList *loadParams = (const EarthView::World::Core::CommonStringPairList*) loadParams_j;
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener*) listener_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::prepare(resType, name, group, isManual, ref_loader, loadParams, listener);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_prepare_1EVString_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong loadParams_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList *loadParams = (const EarthView::World::Core::CommonStringPairList*) loadParams_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::prepare(resType, name, group, isManual, ref_loader, loadParams);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->prepare(resType, name, group, isManual, ref_loader, loadParams);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1prepare_1EVString_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZJJ)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_prepare_1EVString_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong loadParams_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList *loadParams = (const EarthView::World::Core::CommonStringPairList*) loadParams_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::prepare(resType, name, group, isManual, ref_loader, loadParams);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_prepare_1EVString_1EVString_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::prepare(resType, name, group, isManual, ref_loader);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->prepare(resType, name, group, isManual, ref_loader);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1prepare_1EVString_1EVString_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_callback", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZJ)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_prepare_1EVString_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::prepare(resType, name, group, isManual, ref_loader);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_prepare_1EVString_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jstring name_j, jstring group_j, jboolean isManual_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::prepare(resType, name, group, isManual);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->prepare(resType, name, group, isManual);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1prepare_1EVString_1EVString_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepare_EVString_EVString_EVString_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepare_EVString_EVString_EVString_ev_bool_callback", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_prepare_1EVString_1EVString_1EVString_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jstring name_j, jstring group_j, jboolean isManual_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::prepare(resType, name, group, isManual);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_prepare_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jstring name_j, jstring group_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::prepare(resType, name, group);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->prepare(resType, name, group);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1prepare_1EVString_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepare_EVString_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepare_EVString_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_prepare_1EVString_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jstring name_j, jstring group_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::prepare(resType, name, group);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_load_1EVString_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1CResourceBackgroundQueueListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong loadParams_j, jlong listener_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList *loadParams = (const EarthView::World::Core::CommonStringPairList*) loadParams_j;
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener*) listener_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::load(resType, name, group, isManual, ref_loader, loadParams, listener);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->load(resType, name, group, isManual, ref_loader, loadParams, listener);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1load_1EVString_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1CResourceBackgroundQueueListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_callback", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZJJJ)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_load_1EVString_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1CResourceBackgroundQueueListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong loadParams_j, jlong listener_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList *loadParams = (const EarthView::World::Core::CommonStringPairList*) loadParams_j;
				EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener = (EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener*) listener_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::load(resType, name, group, isManual, ref_loader, loadParams, listener);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_load_1EVString_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong loadParams_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList *loadParams = (const EarthView::World::Core::CommonStringPairList*) loadParams_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::load(resType, name, group, isManual, ref_loader, loadParams);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->load(resType, name, group, isManual, ref_loader, loadParams);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1load_1EVString_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZJJ)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_load_1EVString_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong loadParams_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList *loadParams = (const EarthView::World::Core::CommonStringPairList*) loadParams_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::load(resType, name, group, isManual, ref_loader, loadParams);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_load_1EVString_1EVString_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::load(resType, name, group, isManual, ref_loader);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->load(resType, name, group, isManual, ref_loader);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1load_1EVString_1EVString_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_callback", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZJ)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_load_1EVString_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::load(resType, name, group, isManual, ref_loader);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_load_1EVString_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jstring name_j, jstring group_j, jboolean isManual_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::load(resType, name, group, isManual);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->load(resType, name, group, isManual);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1load_1EVString_1EVString_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_EVString_EVString_EVString_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_EVString_EVString_EVString_ev_bool_callback", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_load_1EVString_1EVString_1EVString_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jstring name_j, jstring group_j, jboolean isManual_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::load(resType, name, group, isManual);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_load_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jstring name_j, jstring group_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::load(resType, name, group);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->load(resType, name, group);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1load_1EVString_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_EVString_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_EVString_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_load_1EVString_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resType_j, jstring name_j, jstring group_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resType_ch = (const ev_char*)__env->GetStringUTFChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringUTFChars(resType_j, (const char *)resType_ch);
				#else
				const ev_wchar* resType_ch = (const ev_wchar*)__env->GetStringChars(resType_j,JNI_FALSE);
				const EVString resType = resType_ch;
				__env->ReleaseStringChars(resType_j, (const jchar *)resType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::load(resType, name, group);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_isProcessComplete_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ticket_j)
			{
				ev_uint64 ticket = *(ev_uint64*) ticket_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceBackgroundQueueProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::isProcessComplete(ticket);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isProcessComplete(ticket);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_register_1isProcessComplete_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceBackgroundQueueProxy *pObjectX = (JCResourceBackgroundQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isProcessComplete_ev_uint64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isProcessComplete_ev_uint64_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_isProcessComplete_1ev_1uint64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ticket_j)
			{
				ev_uint64 ticket = *(ev_uint64*) ticket_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CResourceBackgroundQueue::isProcessComplete(ticket);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceBackgroundQueue_abortRequest_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ticket_j)
			{
				ev_uint64 ticket = *(ev_uint64*) ticket_j;
				EarthView::World::Graphic::CResourceBackgroundQueue *pObjectX = (EarthView::World::Graphic::CResourceBackgroundQueue*) pObjXXXX;
				pObjectX->abortRequest(ticket);
			}
		}
	}
}
