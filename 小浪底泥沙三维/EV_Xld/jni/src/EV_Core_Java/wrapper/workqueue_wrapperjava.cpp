/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/workqueue.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_core_WorkQueuePriorityHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					Work_Queue_Tile,
					Work_Queue_Vector,
					Work_Queue_Model,
					Work_Queue_Effect,
					Work_Queue_Kml,
					Work_Queue_Default,
					Work_Queue_Custom
				};
				jintArray array = __env->NewIntArray(7);
				__env->SetIntArrayRegion(array, 0, 7, enum_values);
				return array;
			}
			class JCWorkQueueChannelListenerProxy : public EarthView::World::Core::CWorkQueueChannelListener
			{
			 private:
				EarthView::World::Core::ev_string m_preRequestSorted_ev_uint16_callback;
				EarthView::World::Core::ev_string m_postRequestSorted_ev_uint16_callback;
			public:
				JCWorkQueueChannelListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CWorkQueueChannelListener(pList)
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
				void register_preRequestSorted_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_preRequestSorted_ev_uint16_callback = __method;
				}
				void register_postRequestSorted_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_postRequestSorted_ev_uint16_callback = __method;
				}
				virtual ev_bool preRequestSorted(ev_uint16 channelID)
				{
					if (this->_gRef != NULL && this->m_preRequestSorted_ev_uint16_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("preRequestSorted_ev_uint16_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , channelID_j);
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
						return this->CWorkQueueChannelListener::preRequestSorted(channelID);
					}
				}
				virtual void postRequestSorted(ev_uint16 channelID)
				{
					if (this->_gRef != NULL && this->m_postRequestSorted_ev_uint16_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("postRequestSorted_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , channelID_j);
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
						return this->CWorkQueueChannelListener::postRequestSorted(channelID);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCWorkQueueChannelListenerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_WorkQueueChannelListener_preRequestSorted_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channelID_j)
			{
				ev_uint16 channelID = (ev_uint16) channelID_j;
				EarthView::World::Core::CWorkQueueChannelListener *pObjectX = (EarthView::World::Core::CWorkQueueChannelListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueChannelListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CWorkQueueChannelListener::preRequestSorted(channelID);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->preRequestSorted(channelID);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueueChannelListener_register_1preRequestSorted_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueChannelListenerProxy *pObjectX = (JCWorkQueueChannelListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_preRequestSorted_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"preRequestSorted_ev_uint16_callback", "(I)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_WorkQueueChannelListener_preRequestSorted_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channelID_j)
			{
				ev_uint16 channelID = (ev_uint16) channelID_j;
				EarthView::World::Core::CWorkQueueChannelListener *pObjectX = (EarthView::World::Core::CWorkQueueChannelListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CWorkQueueChannelListener::preRequestSorted(channelID);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueueChannelListener_postRequestSorted_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channelID_j)
			{
				ev_uint16 channelID = (ev_uint16) channelID_j;
				EarthView::World::Core::CWorkQueueChannelListener *pObjectX = (EarthView::World::Core::CWorkQueueChannelListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueChannelListenerProxy))
				{
					pObjectX->EarthView::World::Core::CWorkQueueChannelListener::postRequestSorted(channelID);
				}
				else
				{
					pObjectX->postRequestSorted(channelID);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueueChannelListener_register_1postRequestSorted_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueChannelListenerProxy *pObjectX = (JCWorkQueueChannelListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_postRequestSorted_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"postRequestSorted_ev_uint16_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueueChannelListener_postRequestSorted_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channelID_j)
			{
				ev_uint16 channelID = (ev_uint16) channelID_j;
				EarthView::World::Core::CWorkQueueChannelListener *pObjectX = (EarthView::World::Core::CWorkQueueChannelListener*) pObjXXXX;
				pObjectX->EarthView::World::Core::CWorkQueueChannelListener::postRequestSorted(channelID);
			}
			class JCWorkQueueProxy : public EarthView::World::Core::CWorkQueue
			{
			 private:
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
				JCWorkQueueProxy(EarthView::World::Core::CNameValuePairList *pList) : CWorkQueue(pList)
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
						return this->CWorkQueue::startup(forceRestart);
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
						return this->CWorkQueue::startup();
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
						return this->CWorkQueue::addRequestHandler(channel, rh);
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
						return this->CWorkQueue::removeRequestHandler(channel, rh);
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
						return this->CWorkQueue::addResponseHandler(channel, rh);
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
						return this->CWorkQueue::removeResponseHandler(channel, rh);
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
						return this->CWorkQueue::addRequest(channel, requestType, rData, retryCount, forceSynchronous, filter);
					}
				}
				virtual ev_uint64 addRequest(ev_uint16 channel, ev_uint16 requestType, const EarthView::World::Core::CWorkQueue::RequestPara& rData, ev_uint8 retryCount, ev_bool forceSynchronous)
				{
					if (this->_gRef != NULL && this->m_addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , channel_j, requestType_j, rData_j, retryCount_j, forceSynchronous_j);
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
						return this->CWorkQueue::addRequest(channel, requestType, rData, retryCount, forceSynchronous);
					}
				}
				virtual ev_uint64 addRequest(ev_uint16 channel, ev_uint16 requestType, const EarthView::World::Core::CWorkQueue::RequestPara& rData, ev_uint8 retryCount)
				{
					if (this->_gRef != NULL && this->m_addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , channel_j, requestType_j, rData_j, retryCount_j);
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
						return this->CWorkQueue::addRequest(channel, requestType, rData, retryCount);
					}
				}
				virtual ev_uint64 addRequest(ev_uint16 channel, ev_uint16 requestType, const EarthView::World::Core::CWorkQueue::RequestPara& rData)
				{
					if (this->_gRef != NULL && this->m_addRequest_ev_uint16_ev_uint16_RequestPara_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("addRequest_ev_uint16_ev_uint16_RequestPara_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , channel_j, requestType_j, rData_j);
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
						return this->CWorkQueue::addRequest(channel, requestType, rData);
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
						return this->CWorkQueue::addRequest(request);
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
						return this->CWorkQueue::addOrReplaceRequest(channel, requestType, rData, retryCount, forceSynchronous, filter);
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
						return this->CWorkQueue::abortRequest(id);
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
						return this->CWorkQueue::abortRequestsByChannel(channel);
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
						return this->CWorkQueue::abortRequestsByFilter(channel, filter);
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
						return this->CWorkQueue::abortAllRequests();
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
						return this->CWorkQueue::setPaused(pause);
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
						return this->CWorkQueue::isPaused();
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
						return this->CWorkQueue::setRequestsAccepted(accept);
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
						return this->CWorkQueue::getRequestsAccepted();
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
						return this->CWorkQueue::processResponses();
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
						return this->CWorkQueue::getResponseProcessingTimeLimit();
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
						return this->CWorkQueue::setResponseProcessingTimeLimit(ms);
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
						return this->CWorkQueue::shutdown();
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
						return this->CWorkQueue::getChannel(priority);
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
						return this->CWorkQueue::setChannelListener(channelID, pListener);
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
						return this->CWorkQueue::getChannelListener(channelID);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCWorkQueueProxy);
			class JRequestParaProxy : public EarthView::World::Core::CWorkQueue::RequestPara
			{
			 private:
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
			public:
				JRequestParaProxy(EarthView::World::Core::CNameValuePairList *pList) : RequestPara(pList)
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
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				virtual EarthView::World::Core::CWorkQueue::RequestPara* clone() const
				{
					if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("ev_clone_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::CWorkQueue::RequestPara *__values1 = (EarthView::World::Core::CWorkQueue::RequestPara*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->RequestPara::clone();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JRequestParaProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_WorkQueue_00024RequestPara_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CWorkQueue::RequestPara *pObjectX = (EarthView::World::Core::CWorkQueue::RequestPara*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JRequestParaProxy))
				{
					EarthView::World::Core::CWorkQueue::RequestPara* __values1 = pObjectX->EarthView::World::Core::CWorkQueue::RequestPara::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::CWorkQueue::RequestPara* __values1 = pObjectX->clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_00024RequestPara_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JRequestParaProxy *pObjectX = (JRequestParaProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_ev_clone_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_WorkQueue_00024RequestPara_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CWorkQueue::RequestPara *pObjectX = (EarthView::World::Core::CWorkQueue::RequestPara*) pObjXXXX;
				EarthView::World::Core::CWorkQueue::RequestPara* __values1 = pObjectX->EarthView::World::Core::CWorkQueue::RequestPara::clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_WorkQueue_00024RequestPara_getRequest_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CWorkQueue::RequestPara *pObjectX = (EarthView::World::Core::CWorkQueue::RequestPara*) pObjXXXX;
				EarthView::World::Core::CWorkQueue::CRequest* __values1 = pObjectX->getRequest();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_00024RequestPara_setRequest_1CRequest(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong parent_j)
			{
				EarthView::World::Core::CWorkQueue::CRequest *parent = (EarthView::World::Core::CWorkQueue::CRequest*) parent_j;
				const 				EarthView::World::Core::CWorkQueue::RequestPara *pObjectX = (EarthView::World::Core::CWorkQueue::RequestPara*) pObjXXXX;
				pObjectX->setRequest(parent);
			}
			class JResponseParaProxy : public EarthView::World::Core::CWorkQueue::ResponsePara
			{
			 private:
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
			public:
				JResponseParaProxy(EarthView::World::Core::CNameValuePairList *pList) : ResponsePara(pList)
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
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				virtual EarthView::World::Core::CWorkQueue::ResponsePara* clone() const
				{
					if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("ev_clone_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::CWorkQueue::ResponsePara *__values1 = (EarthView::World::Core::CWorkQueue::ResponsePara*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->ResponsePara::clone();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JResponseParaProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_WorkQueue_00024ResponsePara_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CWorkQueue::ResponsePara *pObjectX = (EarthView::World::Core::CWorkQueue::ResponsePara*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JResponseParaProxy))
				{
					EarthView::World::Core::CWorkQueue::ResponsePara* __values1 = pObjectX->EarthView::World::Core::CWorkQueue::ResponsePara::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::CWorkQueue::ResponsePara* __values1 = pObjectX->clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_00024ResponsePara_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JResponseParaProxy *pObjectX = (JResponseParaProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_ev_clone_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_WorkQueue_00024ResponsePara_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CWorkQueue::ResponsePara *pObjectX = (EarthView::World::Core::CWorkQueue::ResponsePara*) pObjXXXX;
				EarthView::World::Core::CWorkQueue::ResponsePara* __values1 = pObjectX->EarthView::World::Core::CWorkQueue::ResponsePara::clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_WorkQueue_00024ResponsePara_getResponse_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CWorkQueue::ResponsePara *pObjectX = (EarthView::World::Core::CWorkQueue::ResponsePara*) pObjXXXX;
				EarthView::World::Core::CWorkQueue::CResponse* __values1 = pObjectX->getResponse();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_00024ResponsePara_setResponse_1CResponse(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong parent_j)
			{
				EarthView::World::Core::CWorkQueue::CResponse *parent = (EarthView::World::Core::CWorkQueue::CResponse*) parent_j;
				const 				EarthView::World::Core::CWorkQueue::ResponsePara *pObjectX = (EarthView::World::Core::CWorkQueue::ResponsePara*) pObjXXXX;
				pObjectX->setResponse(parent);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_WorkQueue_00024Request_get_1mID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CWorkQueue::CRequest *pObjectX = (EarthView::World::Core::CWorkQueue::CRequest*)pObjXXXX;
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<(pObjectX->mID);
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_00024Request_set_1mID_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Core::CWorkQueue::CRequest *pObjectX = (EarthView::World::Core::CWorkQueue::CRequest*)pObjXXXX;
				pObjectX->mID = *(ev_uint64*) __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_00024Request_abortRequest_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CWorkQueue::CRequest *pObjectX = (EarthView::World::Core::CWorkQueue::CRequest*) pObjXXXX;
				pObjectX->abortRequest();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_WorkQueue_00024Request_getChannel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CWorkQueue::CRequest *pObjectX = (EarthView::World::Core::CWorkQueue::CRequest*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getChannel();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_WorkQueue_00024Request_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CWorkQueue::CRequest *pObjectX = (EarthView::World::Core::CWorkQueue::CRequest*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_WorkQueue_00024Request_getData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CWorkQueue::CRequest *pObjectX = (EarthView::World::Core::CWorkQueue::CRequest*) pObjXXXX;
				const EarthView::World::Core::CWorkQueue::RequestPara& __values1 = pObjectX->getData();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_core_WorkQueue_00024Request_getRetryCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CWorkQueue::CRequest *pObjectX = (EarthView::World::Core::CWorkQueue::CRequest*) pObjXXXX;
				ev_uint8 __values1 = pObjectX->getRetryCount();
				jshort __values1_j = (jshort) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_WorkQueue_00024Request_getID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CWorkQueue::CRequest *pObjectX = (EarthView::World::Core::CWorkQueue::CRequest*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->getID();
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_WorkQueue_00024Request_getAborted_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CWorkQueue::CRequest *pObjectX = (EarthView::World::Core::CWorkQueue::CRequest*) pObjXXXX;
				ev_bool __values1 = pObjectX->getAborted();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_WorkQueue_00024Request_getFilter_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CWorkQueue::CRequest *pObjectX = (EarthView::World::Core::CWorkQueue::CRequest*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->getFilter();
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_WorkQueue_00024Response_getRequest_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CWorkQueue::CResponse *pObjectX = (EarthView::World::Core::CWorkQueue::CResponse*) pObjXXXX;
				const EarthView::World::Core::CWorkQueue::CRequest* __values1 = pObjectX->getRequest();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_WorkQueue_00024Response_succeeded_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CWorkQueue::CResponse *pObjectX = (EarthView::World::Core::CWorkQueue::CResponse*) pObjXXXX;
				ev_bool __values1 = pObjectX->succeeded();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_WorkQueue_00024Response_getMessages_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CWorkQueue::CResponse *pObjectX = (EarthView::World::Core::CWorkQueue::CResponse*) pObjXXXX;
				const EVString& __values1 = pObjectX->getMessages();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_00024Response_abortRequest_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CWorkQueue::CResponse *pObjectX = (EarthView::World::Core::CWorkQueue::CResponse*) pObjXXXX;
				pObjectX->abortRequest();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_WorkQueue_00024Response_getData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CWorkQueue::CResponse *pObjectX = (EarthView::World::Core::CWorkQueue::CResponse*) pObjXXXX;
				const EarthView::World::Core::CWorkQueue::ResponsePara& __values1 = pObjectX->getData();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			class JCRequestHandlerProxy : public EarthView::World::Core::CWorkQueue::CRequestHandler
			{
			 private:
				EarthView::World::Core::ev_string m_canHandleRequest_CRequest_CWorkQueue_callback;
				EarthView::World::Core::ev_string m_handleRequest_CRequest_CWorkQueue_callback;
			public:
				JCRequestHandlerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRequestHandler(pList)
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
				virtual ev_bool canHandleRequest(const EarthView::World::Core::CWorkQueue::CRequest* req, const EarthView::World::Core::CWorkQueue* srcQ)
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
						jlong req_j = (jlong) req;
						jlong srcQ_j = (jlong) srcQ;
						jmethodID __method = __gr->getMethod("canHandleRequest_CRequest_CWorkQueue_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , req_j, srcQ_j);
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
						return this->CRequestHandler::canHandleRequest(req, srcQ);
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
						return this->CRequestHandler::handleRequest(req, srcQ);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCRequestHandlerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_WorkQueue_00024RequestHandler_canHandleRequest_1CRequest_1CWorkQueue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong req_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CRequest *req = (const EarthView::World::Core::CWorkQueue::CRequest*) req_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Core::CWorkQueue::CRequestHandler *pObjectX = (EarthView::World::Core::CWorkQueue::CRequestHandler*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRequestHandlerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CWorkQueue::CRequestHandler::canHandleRequest(req, srcQ);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->canHandleRequest(req, srcQ);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_00024RequestHandler_register_1canHandleRequest_1CRequest_1CWorkQueue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRequestHandlerProxy *pObjectX = (JCRequestHandlerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_WorkQueue_00024RequestHandler_canHandleRequest_1CRequest_1CWorkQueue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong req_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CRequest *req = (const EarthView::World::Core::CWorkQueue::CRequest*) req_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Core::CWorkQueue::CRequestHandler *pObjectX = (EarthView::World::Core::CWorkQueue::CRequestHandler*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CWorkQueue::CRequestHandler::canHandleRequest(req, srcQ);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_WorkQueue_00024RequestHandler_handleRequest_1CRequest_1CWorkQueue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong req_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CRequest *req = (const EarthView::World::Core::CWorkQueue::CRequest*) req_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Core::CWorkQueue::CRequestHandler *pObjectX = (EarthView::World::Core::CWorkQueue::CRequestHandler*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRequestHandlerProxy))
				{
					EarthView::World::Core::CWorkQueue::CResponse* __values1 = pObjectX->EarthView::World::Core::CWorkQueue::CRequestHandler::handleRequest(req, srcQ);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_00024RequestHandler_register_1handleRequest_1CRequest_1CWorkQueue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRequestHandlerProxy *pObjectX = (JCRequestHandlerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_WorkQueue_00024RequestHandler_handleRequest_1CRequest_1CWorkQueue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong req_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CRequest *req = (const EarthView::World::Core::CWorkQueue::CRequest*) req_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Core::CWorkQueue::CRequestHandler *pObjectX = (EarthView::World::Core::CWorkQueue::CRequestHandler*) pObjXXXX;
				EarthView::World::Core::CWorkQueue::CResponse* __values1 = pObjectX->EarthView::World::Core::CWorkQueue::CRequestHandler::handleRequest(req, srcQ);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCResponseHandlerProxy : public EarthView::World::Core::CWorkQueue::CResponseHandler
			{
			 private:
				EarthView::World::Core::ev_string m_canHandleResponse_CResponse_CWorkQueue_callback;
				EarthView::World::Core::ev_string m_handleResponse_CResponse_CWorkQueue_callback;
			public:
				JCResponseHandlerProxy(EarthView::World::Core::CNameValuePairList *pList) : CResponseHandler(pList)
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
						return this->CResponseHandler::canHandleResponse(res, srcQ);
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
						return this->CResponseHandler::handleResponse(res, srcQ);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCResponseHandlerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_WorkQueue_00024ResponseHandler_canHandleResponse_1CResponse_1CWorkQueue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CResponse *res = (const EarthView::World::Core::CWorkQueue::CResponse*) res_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Core::CWorkQueue::CResponseHandler *pObjectX = (EarthView::World::Core::CWorkQueue::CResponseHandler*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResponseHandlerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CWorkQueue::CResponseHandler::canHandleResponse(res, srcQ);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_00024ResponseHandler_register_1canHandleResponse_1CResponse_1CWorkQueue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResponseHandlerProxy *pObjectX = (JCResponseHandlerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_WorkQueue_00024ResponseHandler_canHandleResponse_1CResponse_1CWorkQueue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CResponse *res = (const EarthView::World::Core::CWorkQueue::CResponse*) res_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Core::CWorkQueue::CResponseHandler *pObjectX = (EarthView::World::Core::CWorkQueue::CResponseHandler*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CWorkQueue::CResponseHandler::canHandleResponse(res, srcQ);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_00024ResponseHandler_handleResponse_1CResponse_1CWorkQueue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CResponse *res = (const EarthView::World::Core::CWorkQueue::CResponse*) res_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Core::CWorkQueue::CResponseHandler *pObjectX = (EarthView::World::Core::CWorkQueue::CResponseHandler*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResponseHandlerProxy))
				{
					pObjectX->EarthView::World::Core::CWorkQueue::CResponseHandler::handleResponse(res, srcQ);
				}
				else
				{
					pObjectX->handleResponse(res, srcQ);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_00024ResponseHandler_register_1handleResponse_1CResponse_1CWorkQueue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResponseHandlerProxy *pObjectX = (JCResponseHandlerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_00024ResponseHandler_handleResponse_1CResponse_1CWorkQueue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CResponse *res = (const EarthView::World::Core::CWorkQueue::CResponse*) res_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Core::CWorkQueue::CResponseHandler *pObjectX = (EarthView::World::Core::CWorkQueue::CResponseHandler*) pObjXXXX;
				pObjectX->EarthView::World::Core::CWorkQueue::CResponseHandler::handleResponse(res, srcQ);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_startup_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean forceRestart_j)
			{
				ev_bool forceRestart = (ev_bool) forceRestart_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					pObjectX->EarthView::World::Core::CWorkQueue::startup(forceRestart);
				}
				else
				{
					pObjectX->startup(forceRestart);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1startup_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_startup_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean forceRestart_j)
			{
				ev_bool forceRestart = (ev_bool) forceRestart_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				pObjectX->EarthView::World::Core::CWorkQueue::startup(forceRestart);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_startup_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					pObjectX->EarthView::World::Core::CWorkQueue::startup();
				}
				else
				{
					pObjectX->startup();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1startup_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_startup_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				pObjectX->EarthView::World::Core::CWorkQueue::startup();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_addRequestHandler_1ev_1uint16_1CRequestHandler(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jlong rh_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				EarthView::World::Core::CWorkQueue::CRequestHandler *rh = (EarthView::World::Core::CWorkQueue::CRequestHandler*) rh_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					pObjectX->EarthView::World::Core::CWorkQueue::addRequestHandler(channel, rh);
				}
				else
				{
					pObjectX->addRequestHandler(channel, rh);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1addRequestHandler_1ev_1uint16_1CRequestHandler(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_addRequestHandler_1ev_1uint16_1CRequestHandler_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jlong rh_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				EarthView::World::Core::CWorkQueue::CRequestHandler *rh = (EarthView::World::Core::CWorkQueue::CRequestHandler*) rh_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				pObjectX->EarthView::World::Core::CWorkQueue::addRequestHandler(channel, rh);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_removeRequestHandler_1ev_1uint16_1CRequestHandler(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jlong rh_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				EarthView::World::Core::CWorkQueue::CRequestHandler *rh = (EarthView::World::Core::CWorkQueue::CRequestHandler*) rh_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					pObjectX->EarthView::World::Core::CWorkQueue::removeRequestHandler(channel, rh);
				}
				else
				{
					pObjectX->removeRequestHandler(channel, rh);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1removeRequestHandler_1ev_1uint16_1CRequestHandler(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_removeRequestHandler_1ev_1uint16_1CRequestHandler_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jlong rh_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				EarthView::World::Core::CWorkQueue::CRequestHandler *rh = (EarthView::World::Core::CWorkQueue::CRequestHandler*) rh_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				pObjectX->EarthView::World::Core::CWorkQueue::removeRequestHandler(channel, rh);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_addResponseHandler_1ev_1uint16_1CResponseHandler(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jlong rh_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				EarthView::World::Core::CWorkQueue::CResponseHandler *rh = (EarthView::World::Core::CWorkQueue::CResponseHandler*) rh_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					pObjectX->EarthView::World::Core::CWorkQueue::addResponseHandler(channel, rh);
				}
				else
				{
					pObjectX->addResponseHandler(channel, rh);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1addResponseHandler_1ev_1uint16_1CResponseHandler(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_addResponseHandler_1ev_1uint16_1CResponseHandler_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jlong rh_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				EarthView::World::Core::CWorkQueue::CResponseHandler *rh = (EarthView::World::Core::CWorkQueue::CResponseHandler*) rh_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				pObjectX->EarthView::World::Core::CWorkQueue::addResponseHandler(channel, rh);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_removeResponseHandler_1ev_1uint16_1CResponseHandler(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jlong rh_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				EarthView::World::Core::CWorkQueue::CResponseHandler *rh = (EarthView::World::Core::CWorkQueue::CResponseHandler*) rh_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					pObjectX->EarthView::World::Core::CWorkQueue::removeResponseHandler(channel, rh);
				}
				else
				{
					pObjectX->removeResponseHandler(channel, rh);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1removeResponseHandler_1ev_1uint16_1CResponseHandler(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_removeResponseHandler_1ev_1uint16_1CResponseHandler_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jlong rh_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				EarthView::World::Core::CWorkQueue::CResponseHandler *rh = (EarthView::World::Core::CWorkQueue::CResponseHandler*) rh_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				pObjectX->EarthView::World::Core::CWorkQueue::removeResponseHandler(channel, rh);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_WorkQueue_addRequest_1ev_1uint16_1ev_1uint16_1RequestPara_1ev_1uint8_1ev_1bool_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jint requestType_j, jlong rData_j, jshort retryCount_j, jboolean forceSynchronous_j, jlong filter_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				ev_uint16 requestType = (ev_uint16) requestType_j;
				const EarthView::World::Core::CWorkQueue::RequestPara &rData = *(EarthView::World::Core::CWorkQueue::RequestPara*) rData_j;
				ev_uint8 retryCount = (ev_uint8) retryCount_j;
				ev_bool forceSynchronous = (ev_bool) forceSynchronous_j;
				ev_uint64 filter = *(ev_uint64*) filter_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Core::CWorkQueue::addRequest(channel, requestType, rData, retryCount, forceSynchronous, filter);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->addRequest(channel, requestType, rData, retryCount, forceSynchronous, filter);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1addRequest_1ev_1uint16_1ev_1uint16_1RequestPara_1ev_1uint8_1ev_1bool_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_WorkQueue_addRequest_1ev_1uint16_1ev_1uint16_1RequestPara_1ev_1uint8_1ev_1bool_1ev_1uint64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jint requestType_j, jlong rData_j, jshort retryCount_j, jboolean forceSynchronous_j, jlong filter_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				ev_uint16 requestType = (ev_uint16) requestType_j;
				const EarthView::World::Core::CWorkQueue::RequestPara &rData = *(EarthView::World::Core::CWorkQueue::RequestPara*) rData_j;
				ev_uint8 retryCount = (ev_uint8) retryCount_j;
				ev_bool forceSynchronous = (ev_bool) forceSynchronous_j;
				ev_uint64 filter = *(ev_uint64*) filter_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Core::CWorkQueue::addRequest(channel, requestType, rData, retryCount, forceSynchronous, filter);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_WorkQueue_addRequest_1ev_1uint16_1ev_1uint16_1RequestPara_1ev_1uint8_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jint requestType_j, jlong rData_j, jshort retryCount_j, jboolean forceSynchronous_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				ev_uint16 requestType = (ev_uint16) requestType_j;
				const EarthView::World::Core::CWorkQueue::RequestPara &rData = *(EarthView::World::Core::CWorkQueue::RequestPara*) rData_j;
				ev_uint8 retryCount = (ev_uint8) retryCount_j;
				ev_bool forceSynchronous = (ev_bool) forceSynchronous_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Core::CWorkQueue::addRequest(channel, requestType, rData, retryCount, forceSynchronous);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->addRequest(channel, requestType, rData, retryCount, forceSynchronous);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1addRequest_1ev_1uint16_1ev_1uint16_1RequestPara_1ev_1uint8_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_WorkQueue_addRequest_1ev_1uint16_1ev_1uint16_1RequestPara_1ev_1uint8_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jint requestType_j, jlong rData_j, jshort retryCount_j, jboolean forceSynchronous_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				ev_uint16 requestType = (ev_uint16) requestType_j;
				const EarthView::World::Core::CWorkQueue::RequestPara &rData = *(EarthView::World::Core::CWorkQueue::RequestPara*) rData_j;
				ev_uint8 retryCount = (ev_uint8) retryCount_j;
				ev_bool forceSynchronous = (ev_bool) forceSynchronous_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Core::CWorkQueue::addRequest(channel, requestType, rData, retryCount, forceSynchronous);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_WorkQueue_addRequest_1ev_1uint16_1ev_1uint16_1RequestPara_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jint requestType_j, jlong rData_j, jshort retryCount_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				ev_uint16 requestType = (ev_uint16) requestType_j;
				const EarthView::World::Core::CWorkQueue::RequestPara &rData = *(EarthView::World::Core::CWorkQueue::RequestPara*) rData_j;
				ev_uint8 retryCount = (ev_uint8) retryCount_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Core::CWorkQueue::addRequest(channel, requestType, rData, retryCount);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->addRequest(channel, requestType, rData, retryCount);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1addRequest_1ev_1uint16_1ev_1uint16_1RequestPara_1ev_1uint8(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_WorkQueue_addRequest_1ev_1uint16_1ev_1uint16_1RequestPara_1ev_1uint8_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jint requestType_j, jlong rData_j, jshort retryCount_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				ev_uint16 requestType = (ev_uint16) requestType_j;
				const EarthView::World::Core::CWorkQueue::RequestPara &rData = *(EarthView::World::Core::CWorkQueue::RequestPara*) rData_j;
				ev_uint8 retryCount = (ev_uint8) retryCount_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Core::CWorkQueue::addRequest(channel, requestType, rData, retryCount);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_WorkQueue_addRequest_1ev_1uint16_1ev_1uint16_1RequestPara(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jint requestType_j, jlong rData_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				ev_uint16 requestType = (ev_uint16) requestType_j;
				const EarthView::World::Core::CWorkQueue::RequestPara &rData = *(EarthView::World::Core::CWorkQueue::RequestPara*) rData_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Core::CWorkQueue::addRequest(channel, requestType, rData);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->addRequest(channel, requestType, rData);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1addRequest_1ev_1uint16_1ev_1uint16_1RequestPara(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_WorkQueue_addRequest_1ev_1uint16_1ev_1uint16_1RequestPara_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jint requestType_j, jlong rData_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				ev_uint16 requestType = (ev_uint16) requestType_j;
				const EarthView::World::Core::CWorkQueue::RequestPara &rData = *(EarthView::World::Core::CWorkQueue::RequestPara*) rData_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Core::CWorkQueue::addRequest(channel, requestType, rData);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_WorkQueue_addRequest_1CRequest(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong request_j)
			{
				EarthView::World::Core::CWorkQueue::CRequest *request = (EarthView::World::Core::CWorkQueue::CRequest*) request_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Core::CWorkQueue::addRequest(request);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->addRequest(request);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1addRequest_1CRequest(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_WorkQueue_addRequest_1CRequest_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong request_j)
			{
				EarthView::World::Core::CWorkQueue::CRequest *request = (EarthView::World::Core::CWorkQueue::CRequest*) request_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Core::CWorkQueue::addRequest(request);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_WorkQueue_addOrReplaceRequest_1ev_1uint16_1ev_1uint16_1RequestPara_1ev_1uint8_1ev_1bool_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jint requestType_j, jlong rData_j, jshort retryCount_j, jboolean forceSynchronous_j, jlong filter_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				ev_uint16 requestType = (ev_uint16) requestType_j;
				const EarthView::World::Core::CWorkQueue::RequestPara &rData = *(EarthView::World::Core::CWorkQueue::RequestPara*) rData_j;
				ev_uint8 retryCount = (ev_uint8) retryCount_j;
				ev_bool forceSynchronous = (ev_bool) forceSynchronous_j;
				ev_uint64 filter = *(ev_uint64*) filter_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Core::CWorkQueue::addOrReplaceRequest(channel, requestType, rData, retryCount, forceSynchronous, filter);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->addOrReplaceRequest(channel, requestType, rData, retryCount, forceSynchronous, filter);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1addOrReplaceRequest_1ev_1uint16_1ev_1uint16_1RequestPara_1ev_1uint8_1ev_1bool_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_WorkQueue_addOrReplaceRequest_1ev_1uint16_1ev_1uint16_1RequestPara_1ev_1uint8_1ev_1bool_1ev_1uint64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jint requestType_j, jlong rData_j, jshort retryCount_j, jboolean forceSynchronous_j, jlong filter_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				ev_uint16 requestType = (ev_uint16) requestType_j;
				const EarthView::World::Core::CWorkQueue::RequestPara &rData = *(EarthView::World::Core::CWorkQueue::RequestPara*) rData_j;
				ev_uint8 retryCount = (ev_uint8) retryCount_j;
				ev_bool forceSynchronous = (ev_bool) forceSynchronous_j;
				ev_uint64 filter = *(ev_uint64*) filter_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Core::CWorkQueue::addOrReplaceRequest(channel, requestType, rData, retryCount, forceSynchronous, filter);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_abortRequest_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
			{
				ev_uint64 id = *(ev_uint64*) id_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					pObjectX->EarthView::World::Core::CWorkQueue::abortRequest(id);
				}
				else
				{
					pObjectX->abortRequest(id);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1abortRequest_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_abortRequest_1ev_1uint64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
			{
				ev_uint64 id = *(ev_uint64*) id_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				pObjectX->EarthView::World::Core::CWorkQueue::abortRequest(id);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_abortRequestsByChannel_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					pObjectX->EarthView::World::Core::CWorkQueue::abortRequestsByChannel(channel);
				}
				else
				{
					pObjectX->abortRequestsByChannel(channel);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1abortRequestsByChannel_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_abortRequestsByChannel_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				pObjectX->EarthView::World::Core::CWorkQueue::abortRequestsByChannel(channel);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_abortRequestsByFilter_1ev_1uint16_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jlong filter_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				ev_uint64 filter = *(ev_uint64*) filter_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					pObjectX->EarthView::World::Core::CWorkQueue::abortRequestsByFilter(channel, filter);
				}
				else
				{
					pObjectX->abortRequestsByFilter(channel, filter);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1abortRequestsByFilter_1ev_1uint16_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_abortRequestsByFilter_1ev_1uint16_1ev_1uint64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jlong filter_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				ev_uint64 filter = *(ev_uint64*) filter_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				pObjectX->EarthView::World::Core::CWorkQueue::abortRequestsByFilter(channel, filter);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_abortAllRequests_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					pObjectX->EarthView::World::Core::CWorkQueue::abortAllRequests();
				}
				else
				{
					pObjectX->abortAllRequests();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1abortAllRequests_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_abortAllRequests_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				pObjectX->EarthView::World::Core::CWorkQueue::abortAllRequests();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_setPaused_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean pause_j)
			{
				ev_bool pause = (ev_bool) pause_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					pObjectX->EarthView::World::Core::CWorkQueue::setPaused(pause);
				}
				else
				{
					pObjectX->setPaused(pause);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1setPaused_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_setPaused_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean pause_j)
			{
				ev_bool pause = (ev_bool) pause_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				pObjectX->EarthView::World::Core::CWorkQueue::setPaused(pause);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_WorkQueue_isPaused_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CWorkQueue::isPaused();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isPaused();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1isPaused_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_WorkQueue_isPaused_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CWorkQueue::isPaused();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_setRequestsAccepted_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean accept_j)
			{
				ev_bool accept = (ev_bool) accept_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					pObjectX->EarthView::World::Core::CWorkQueue::setRequestsAccepted(accept);
				}
				else
				{
					pObjectX->setRequestsAccepted(accept);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1setRequestsAccepted_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_setRequestsAccepted_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean accept_j)
			{
				ev_bool accept = (ev_bool) accept_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				pObjectX->EarthView::World::Core::CWorkQueue::setRequestsAccepted(accept);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_WorkQueue_getRequestsAccepted_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CWorkQueue::getRequestsAccepted();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getRequestsAccepted();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1getRequestsAccepted_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_WorkQueue_getRequestsAccepted_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CWorkQueue::getRequestsAccepted();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_processResponses_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					pObjectX->EarthView::World::Core::CWorkQueue::processResponses();
				}
				else
				{
					pObjectX->processResponses();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1processResponses_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_processResponses_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				pObjectX->EarthView::World::Core::CWorkQueue::processResponses();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_WorkQueue_getResponseProcessingTimeLimit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Core::CWorkQueue::getResponseProcessingTimeLimit();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->getResponseProcessingTimeLimit();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1getResponseProcessingTimeLimit_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_WorkQueue_getResponseProcessingTimeLimit_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Core::CWorkQueue::getResponseProcessingTimeLimit();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_setResponseProcessingTimeLimit_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ms_j)
			{
				ev_uint32 ms = (ev_uint32) ms_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					pObjectX->EarthView::World::Core::CWorkQueue::setResponseProcessingTimeLimit(ms);
				}
				else
				{
					pObjectX->setResponseProcessingTimeLimit(ms);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1setResponseProcessingTimeLimit_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_setResponseProcessingTimeLimit_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ms_j)
			{
				ev_uint32 ms = (ev_uint32) ms_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				pObjectX->EarthView::World::Core::CWorkQueue::setResponseProcessingTimeLimit(ms);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_shutdown_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					pObjectX->EarthView::World::Core::CWorkQueue::shutdown();
				}
				else
				{
					pObjectX->shutdown();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1shutdown_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_shutdown_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				pObjectX->EarthView::World::Core::CWorkQueue::shutdown();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_WorkQueue_getChannel_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong priority_j)
			{
				ev_uint32 priority = (ev_uint32) priority_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Core::CWorkQueue::getChannel(priority);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint16 __values1 = pObjectX->getChannel(priority);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1getChannel_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_WorkQueue_getChannel_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong priority_j)
			{
				ev_uint32 priority = (ev_uint32) priority_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Core::CWorkQueue::getChannel(priority);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_WorkQueue_setChannelListener_1ev_1uint16_1CWorkQueueChannelListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channelID_j, jlong pListener_j)
			{
				ev_uint16 channelID = (ev_uint16) channelID_j;
				EarthView::World::Core::CWorkQueueChannelListener *pListener = (EarthView::World::Core::CWorkQueueChannelListener*) pListener_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CWorkQueue::setChannelListener(channelID, pListener);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->setChannelListener(channelID, pListener);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1setChannelListener_1ev_1uint16_1CWorkQueueChannelListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_WorkQueue_setChannelListener_1ev_1uint16_1CWorkQueueChannelListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channelID_j, jlong pListener_j)
			{
				ev_uint16 channelID = (ev_uint16) channelID_j;
				EarthView::World::Core::CWorkQueueChannelListener *pListener = (EarthView::World::Core::CWorkQueueChannelListener*) pListener_j;
				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CWorkQueue::setChannelListener(channelID, pListener);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_WorkQueue_getChannelListener_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channelID_j)
			{
				ev_uint16 channelID = (ev_uint16) channelID_j;
				const 				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWorkQueueProxy))
				{
					EarthView::World::Core::CWorkQueueChannelListener* __values1 = pObjectX->EarthView::World::Core::CWorkQueue::getChannelListener(channelID);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::CWorkQueueChannelListener* __values1 = pObjectX->getChannelListener(channelID);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_WorkQueue_register_1getChannelListener_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWorkQueueProxy *pObjectX = (JCWorkQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_WorkQueue_getChannelListener_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channelID_j)
			{
				ev_uint16 channelID = (ev_uint16) channelID_j;
				const 				EarthView::World::Core::CWorkQueue *pObjectX = (EarthView::World::Core::CWorkQueue*) pObjXXXX;
				EarthView::World::Core::CWorkQueueChannelListener* __values1 = pObjectX->EarthView::World::Core::CWorkQueue::getChannelListener(channelID);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCDefaultWorkQueueBaseProxy : public EarthView::World::Core::CDefaultWorkQueueBase
			{
			 private:
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
				JCDefaultWorkQueueBaseProxy(EarthView::World::Core::CNameValuePairList *pList) : CDefaultWorkQueueBase(pList)
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
						return this->CDefaultWorkQueueBase::getWorkerThreadCount();
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
						return this->CDefaultWorkQueueBase::setWorkerThreadCount(c);
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
						return this->CDefaultWorkQueueBase::getWorkersCanAccessRenderSystem();
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
						return this->CDefaultWorkQueueBase::setWorkersCanAccessRenderSystem(access);
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
						return this->CDefaultWorkQueueBase::_processNextRequest();
					}
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
						return this->CDefaultWorkQueueBase::_threadMain();
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
						return this->CDefaultWorkQueueBase::isShuttingDown();
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
						return this->CDefaultWorkQueueBase::addRequestHandler(channel, rh);
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
						return this->CDefaultWorkQueueBase::removeRequestHandler(channel, rh);
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
						return this->CDefaultWorkQueueBase::addResponseHandler(channel, rh);
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
						return this->CDefaultWorkQueueBase::removeResponseHandler(channel, rh);
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
						return this->CDefaultWorkQueueBase::addRequest(channel, requestType, rData, retryCount, forceSynchronous, filter);
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
						return this->CDefaultWorkQueueBase::addRequest(request);
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
						return this->CDefaultWorkQueueBase::addOrReplaceRequest(channel, requestType, rData, retryCount, forceSynchronous, filter);
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
						return this->CDefaultWorkQueueBase::abortRequest(id);
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
						return this->CDefaultWorkQueueBase::abortRequestsByChannel(channel);
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
						return this->CDefaultWorkQueueBase::abortRequestsByFilter(channel, filter);
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
						return this->CDefaultWorkQueueBase::abortAllRequests();
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
						return this->CDefaultWorkQueueBase::setPaused(pause);
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
						return this->CDefaultWorkQueueBase::isPaused();
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
						return this->CDefaultWorkQueueBase::setRequestsAccepted(accept);
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
						return this->CDefaultWorkQueueBase::getRequestsAccepted();
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
						return this->CDefaultWorkQueueBase::processResponses();
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
						return this->CDefaultWorkQueueBase::getResponseProcessingTimeLimit();
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
						return this->CDefaultWorkQueueBase::setResponseProcessingTimeLimit(ms);
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
						return this->CDefaultWorkQueueBase::notifyWorkers();
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
						return this->CDefaultWorkQueueBase::startup(forceRestart);
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
						return this->CDefaultWorkQueueBase::startup();
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
						return this->CDefaultWorkQueueBase::shutdown();
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
						return this->CDefaultWorkQueueBase::getChannel(priority);
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
						return this->CDefaultWorkQueueBase::setChannelListener(channelID, pListener);
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
						return this->CDefaultWorkQueueBase::getChannelListener(channelID);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDefaultWorkQueueBaseProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_registerPreExtraThreadsStartedFunc_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong preExtraThreadsStartedFunc_j)
			{
				void *preExtraThreadsStartedFunc = (void*) preExtraThreadsStartedFunc_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->registerPreExtraThreadsStartedFunc(preExtraThreadsStartedFunc);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_registerPostExtraThreadsStartedFunc_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong postExtraThreadsStartedFunc_j)
			{
				void *postExtraThreadsStartedFunc = (void*) postExtraThreadsStartedFunc_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->registerPostExtraThreadsStartedFunc(postExtraThreadsStartedFunc);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_registerThreadFunc_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pThreadFunc_j)
			{
				void *pThreadFunc = (void*) pThreadFunc_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->registerThreadFunc(pThreadFunc);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_registerThreadFunc2_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pThreadFunc_j)
			{
				void *pThreadFunc = (void*) pThreadFunc_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->registerThreadFunc2(pThreadFunc);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_registerflushRenderSystemFunc_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pflushRenderSystemFunc_j)
			{
				void *pflushRenderSystemFunc = (void*) pflushRenderSystemFunc_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->registerflushRenderSystemFunc(pflushRenderSystemFunc);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_unregisterPreExtraThreadsStartedFunc_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->unregisterPreExtraThreadsStartedFunc();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_unregisterPostExtraThreadsStartedFunc_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->unregisterPostExtraThreadsStartedFunc();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_unregisterThreadFunc_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->unregisterThreadFunc();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_unregisterThreadFunc2_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->unregisterThreadFunc2();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_unregisterflushRenderSystemFunc_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->unregisterflushRenderSystemFunc();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				const EVString& __values1 = pObjectX->getName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_getWorkerThreadCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueBaseProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::getWorkerThreadCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->getWorkerThreadCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1getWorkerThreadCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_getWorkerThreadCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::getWorkerThreadCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_setWorkerThreadCount_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong c_j)
			{
				ev_size_t c = (ev_size_t) c_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueBaseProxy))
				{
					pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::setWorkerThreadCount(c);
				}
				else
				{
					pObjectX->setWorkerThreadCount(c);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1setWorkerThreadCount_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_setWorkerThreadCount_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong c_j)
			{
				ev_size_t c = (ev_size_t) c_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::setWorkerThreadCount(c);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_getWorkersCanAccessRenderSystem_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueBaseProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::getWorkersCanAccessRenderSystem();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getWorkersCanAccessRenderSystem();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1getWorkersCanAccessRenderSystem_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_getWorkersCanAccessRenderSystem_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::getWorkersCanAccessRenderSystem();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_setWorkersCanAccessRenderSystem_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean access_j)
			{
				ev_bool access = (ev_bool) access_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueBaseProxy))
				{
					pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::setWorkersCanAccessRenderSystem(access);
				}
				else
				{
					pObjectX->setWorkersCanAccessRenderSystem(access);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1setWorkersCanAccessRenderSystem_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_setWorkersCanAccessRenderSystem_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean access_j)
			{
				ev_bool access = (ev_bool) access_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::setWorkersCanAccessRenderSystem(access);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase__1processNextRequest_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueBaseProxy))
				{
					pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::_processNextRequest();
				}
				else
				{
					pObjectX->_processNextRequest();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1_1processNextRequest_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase__1processNextRequest_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::_processNextRequest();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase__1threadMain_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueBaseProxy))
				{
					pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::_threadMain();
				}
				else
				{
					pObjectX->_threadMain();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1_1threadMain_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase__1threadMain_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::_threadMain();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_isShuttingDown_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueBaseProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::isShuttingDown();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isShuttingDown();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1isShuttingDown_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_isShuttingDown_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::isShuttingDown();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_addRequestHandler_1ev_1uint16_1CRequestHandler(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jlong rh_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				EarthView::World::Core::CWorkQueue::CRequestHandler *rh = (EarthView::World::Core::CWorkQueue::CRequestHandler*) rh_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueBaseProxy))
				{
					pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::addRequestHandler(channel, rh);
				}
				else
				{
					pObjectX->addRequestHandler(channel, rh);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1addRequestHandler_1ev_1uint16_1CRequestHandler(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_addRequestHandler_1ev_1uint16_1CRequestHandler_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jlong rh_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				EarthView::World::Core::CWorkQueue::CRequestHandler *rh = (EarthView::World::Core::CWorkQueue::CRequestHandler*) rh_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::addRequestHandler(channel, rh);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_removeRequestHandler_1ev_1uint16_1CRequestHandler(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jlong rh_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				EarthView::World::Core::CWorkQueue::CRequestHandler *rh = (EarthView::World::Core::CWorkQueue::CRequestHandler*) rh_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueBaseProxy))
				{
					pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::removeRequestHandler(channel, rh);
				}
				else
				{
					pObjectX->removeRequestHandler(channel, rh);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1removeRequestHandler_1ev_1uint16_1CRequestHandler(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_removeRequestHandler_1ev_1uint16_1CRequestHandler_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jlong rh_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				EarthView::World::Core::CWorkQueue::CRequestHandler *rh = (EarthView::World::Core::CWorkQueue::CRequestHandler*) rh_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::removeRequestHandler(channel, rh);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_addResponseHandler_1ev_1uint16_1CResponseHandler(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jlong rh_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				EarthView::World::Core::CWorkQueue::CResponseHandler *rh = (EarthView::World::Core::CWorkQueue::CResponseHandler*) rh_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueBaseProxy))
				{
					pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::addResponseHandler(channel, rh);
				}
				else
				{
					pObjectX->addResponseHandler(channel, rh);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1addResponseHandler_1ev_1uint16_1CResponseHandler(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_addResponseHandler_1ev_1uint16_1CResponseHandler_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jlong rh_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				EarthView::World::Core::CWorkQueue::CResponseHandler *rh = (EarthView::World::Core::CWorkQueue::CResponseHandler*) rh_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::addResponseHandler(channel, rh);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_removeResponseHandler_1ev_1uint16_1CResponseHandler(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jlong rh_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				EarthView::World::Core::CWorkQueue::CResponseHandler *rh = (EarthView::World::Core::CWorkQueue::CResponseHandler*) rh_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueBaseProxy))
				{
					pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::removeResponseHandler(channel, rh);
				}
				else
				{
					pObjectX->removeResponseHandler(channel, rh);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1removeResponseHandler_1ev_1uint16_1CResponseHandler(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_removeResponseHandler_1ev_1uint16_1CResponseHandler_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jlong rh_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				EarthView::World::Core::CWorkQueue::CResponseHandler *rh = (EarthView::World::Core::CWorkQueue::CResponseHandler*) rh_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::removeResponseHandler(channel, rh);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_addRequest_1ev_1uint16_1ev_1uint16_1RequestPara_1ev_1uint8_1ev_1bool_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jint requestType_j, jlong rData_j, jshort retryCount_j, jboolean forceSynchronous_j, jlong filter_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				ev_uint16 requestType = (ev_uint16) requestType_j;
				const EarthView::World::Core::CWorkQueue::RequestPara &rData = *(EarthView::World::Core::CWorkQueue::RequestPara*) rData_j;
				ev_uint8 retryCount = (ev_uint8) retryCount_j;
				ev_bool forceSynchronous = (ev_bool) forceSynchronous_j;
				ev_uint64 filter = *(ev_uint64*) filter_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueBaseProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::addRequest(channel, requestType, rData, retryCount, forceSynchronous, filter);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->addRequest(channel, requestType, rData, retryCount, forceSynchronous, filter);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1addRequest_1ev_1uint16_1ev_1uint16_1RequestPara_1ev_1uint8_1ev_1bool_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_addRequest_1ev_1uint16_1ev_1uint16_1RequestPara_1ev_1uint8_1ev_1bool_1ev_1uint64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jint requestType_j, jlong rData_j, jshort retryCount_j, jboolean forceSynchronous_j, jlong filter_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				ev_uint16 requestType = (ev_uint16) requestType_j;
				const EarthView::World::Core::CWorkQueue::RequestPara &rData = *(EarthView::World::Core::CWorkQueue::RequestPara*) rData_j;
				ev_uint8 retryCount = (ev_uint8) retryCount_j;
				ev_bool forceSynchronous = (ev_bool) forceSynchronous_j;
				ev_uint64 filter = *(ev_uint64*) filter_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::addRequest(channel, requestType, rData, retryCount, forceSynchronous, filter);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_addRequest_1CRequest(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong request_j)
			{
				EarthView::World::Core::CWorkQueue::CRequest *request = (EarthView::World::Core::CWorkQueue::CRequest*) request_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueBaseProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::addRequest(request);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->addRequest(request);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1addRequest_1CRequest(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_addRequest_1CRequest_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong request_j)
			{
				EarthView::World::Core::CWorkQueue::CRequest *request = (EarthView::World::Core::CWorkQueue::CRequest*) request_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::addRequest(request);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_addOrReplaceRequest_1ev_1uint16_1ev_1uint16_1RequestPara_1ev_1uint8_1ev_1bool_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jint requestType_j, jlong rData_j, jshort retryCount_j, jboolean forceSynchronous_j, jlong filter_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				ev_uint16 requestType = (ev_uint16) requestType_j;
				const EarthView::World::Core::CWorkQueue::RequestPara &rData = *(EarthView::World::Core::CWorkQueue::RequestPara*) rData_j;
				ev_uint8 retryCount = (ev_uint8) retryCount_j;
				ev_bool forceSynchronous = (ev_bool) forceSynchronous_j;
				ev_uint64 filter = *(ev_uint64*) filter_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueBaseProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::addOrReplaceRequest(channel, requestType, rData, retryCount, forceSynchronous, filter);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->addOrReplaceRequest(channel, requestType, rData, retryCount, forceSynchronous, filter);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1addOrReplaceRequest_1ev_1uint16_1ev_1uint16_1RequestPara_1ev_1uint8_1ev_1bool_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_addOrReplaceRequest_1ev_1uint16_1ev_1uint16_1RequestPara_1ev_1uint8_1ev_1bool_1ev_1uint64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jint requestType_j, jlong rData_j, jshort retryCount_j, jboolean forceSynchronous_j, jlong filter_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				ev_uint16 requestType = (ev_uint16) requestType_j;
				const EarthView::World::Core::CWorkQueue::RequestPara &rData = *(EarthView::World::Core::CWorkQueue::RequestPara*) rData_j;
				ev_uint8 retryCount = (ev_uint8) retryCount_j;
				ev_bool forceSynchronous = (ev_bool) forceSynchronous_j;
				ev_uint64 filter = *(ev_uint64*) filter_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::addOrReplaceRequest(channel, requestType, rData, retryCount, forceSynchronous, filter);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_abortRequest_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
			{
				ev_uint64 id = *(ev_uint64*) id_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueBaseProxy))
				{
					pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::abortRequest(id);
				}
				else
				{
					pObjectX->abortRequest(id);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1abortRequest_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_abortRequest_1ev_1uint64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
			{
				ev_uint64 id = *(ev_uint64*) id_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::abortRequest(id);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_abortRequestsByChannel_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueBaseProxy))
				{
					pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::abortRequestsByChannel(channel);
				}
				else
				{
					pObjectX->abortRequestsByChannel(channel);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1abortRequestsByChannel_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_abortRequestsByChannel_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::abortRequestsByChannel(channel);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_abortRequestsByFilter_1ev_1uint16_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jlong filter_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				ev_uint64 filter = *(ev_uint64*) filter_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueBaseProxy))
				{
					pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::abortRequestsByFilter(channel, filter);
				}
				else
				{
					pObjectX->abortRequestsByFilter(channel, filter);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1abortRequestsByFilter_1ev_1uint16_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_abortRequestsByFilter_1ev_1uint16_1ev_1uint64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j, jlong filter_j)
			{
				ev_uint16 channel = (ev_uint16) channel_j;
				ev_uint64 filter = *(ev_uint64*) filter_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::abortRequestsByFilter(channel, filter);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_abortAllRequests_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueBaseProxy))
				{
					pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::abortAllRequests();
				}
				else
				{
					pObjectX->abortAllRequests();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1abortAllRequests_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_abortAllRequests_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::abortAllRequests();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_setPaused_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean pause_j)
			{
				ev_bool pause = (ev_bool) pause_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueBaseProxy))
				{
					pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::setPaused(pause);
				}
				else
				{
					pObjectX->setPaused(pause);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1setPaused_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_setPaused_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean pause_j)
			{
				ev_bool pause = (ev_bool) pause_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::setPaused(pause);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_isPaused_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueBaseProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::isPaused();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isPaused();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1isPaused_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_isPaused_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::isPaused();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_setRequestsAccepted_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean accept_j)
			{
				ev_bool accept = (ev_bool) accept_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueBaseProxy))
				{
					pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::setRequestsAccepted(accept);
				}
				else
				{
					pObjectX->setRequestsAccepted(accept);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1setRequestsAccepted_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_setRequestsAccepted_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean accept_j)
			{
				ev_bool accept = (ev_bool) accept_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::setRequestsAccepted(accept);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_getRequestsAccepted_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueBaseProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::getRequestsAccepted();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getRequestsAccepted();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1getRequestsAccepted_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_getRequestsAccepted_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::getRequestsAccepted();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_processResponses_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueBaseProxy))
				{
					pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::processResponses();
				}
				else
				{
					pObjectX->processResponses();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1processResponses_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_processResponses_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::processResponses();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_getResponseProcessingTimeLimit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueBaseProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::getResponseProcessingTimeLimit();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->getResponseProcessingTimeLimit();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1getResponseProcessingTimeLimit_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_getResponseProcessingTimeLimit_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::getResponseProcessingTimeLimit();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_setResponseProcessingTimeLimit_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ms_j)
			{
				ev_uint32 ms = (ev_uint32) ms_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueBaseProxy))
				{
					pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::setResponseProcessingTimeLimit(ms);
				}
				else
				{
					pObjectX->setResponseProcessingTimeLimit(ms);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1setResponseProcessingTimeLimit_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_setResponseProcessingTimeLimit_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ms_j)
			{
				ev_uint32 ms = (ev_uint32) ms_j;
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::setResponseProcessingTimeLimit(ms);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_00024RequestHandlerHolder_disconnectHandler_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueueBase::CRequestHandlerHolder *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase::CRequestHandlerHolder*) pObjXXXX;
				pObjectX->disconnectHandler();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_00024RequestHandlerHolder_getHandler_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueueBase::CRequestHandlerHolder *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase::CRequestHandlerHolder*) pObjXXXX;
				EarthView::World::Core::CWorkQueue::CRequestHandler* __values1 = pObjectX->getHandler();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_00024RequestHandlerHolder_handleRequest_1CRequest_1CWorkQueue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong req_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CRequest *req = (const EarthView::World::Core::CWorkQueue::CRequest*) req_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Core::CDefaultWorkQueueBase::CRequestHandlerHolder *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase::CRequestHandlerHolder*) pObjXXXX;
				EarthView::World::Core::CWorkQueue::CResponse* __values1 = pObjectX->handleRequest(req, srcQ);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_notifyWorkers_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultWorkQueueBaseProxy))
				{
					pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::notifyWorkers();
				}
				else
				{
					pObjectX->notifyWorkers();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1notifyWorkers_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_notifyWorkers_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDefaultWorkQueueBase *pObjectX = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDefaultWorkQueueBase::notifyWorkers();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1startup_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1startup_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1addRequest_1ev_1uint16_1ev_1uint16_1RequestPara_1ev_1uint8_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1addRequest_1ev_1uint16_1ev_1uint16_1RequestPara_1ev_1uint8(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1addRequest_1ev_1uint16_1ev_1uint16_1RequestPara(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1shutdown_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1getChannel_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1setChannelListener_1ev_1uint16_1CWorkQueueChannelListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DefaultWorkQueueBase_register_1getChannelListener_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultWorkQueueBaseProxy *pObjectX = (JCDefaultWorkQueueBaseProxy*) pObjXXXX;
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
			class JCBackgroundQueueProxy : public EarthView::World::Core::CBackgroundQueue
			{
			 private:
				EarthView::World::Core::ev_string m_initialise_void_callback;
				EarthView::World::Core::ev_string m_shutdown_void_callback;
				EarthView::World::Core::ev_string m_getGroupName_void_callback;
				EarthView::World::Core::ev_string m_getName_void_callback;
			public:
				JCBackgroundQueueProxy(EarthView::World::Core::CNameValuePairList *pList) : CBackgroundQueue(pList)
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
						return this->CBackgroundQueue::initialise();
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
						return this->CBackgroundQueue::shutdown();
					}
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
						return this->CBackgroundQueue::getGroupName();
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
						return this->CBackgroundQueue::getName();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCBackgroundQueueProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BackgroundQueue_initialise_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CBackgroundQueue *pObjectX = (EarthView::World::Core::CBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBackgroundQueueProxy))
				{
					pObjectX->EarthView::World::Core::CBackgroundQueue::initialise();
				}
				else
				{
					pObjectX->initialise();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BackgroundQueue_register_1initialise_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBackgroundQueueProxy *pObjectX = (JCBackgroundQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BackgroundQueue_initialise_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CBackgroundQueue *pObjectX = (EarthView::World::Core::CBackgroundQueue*) pObjXXXX;
				pObjectX->EarthView::World::Core::CBackgroundQueue::initialise();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BackgroundQueue_shutdown_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CBackgroundQueue *pObjectX = (EarthView::World::Core::CBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBackgroundQueueProxy))
				{
					pObjectX->EarthView::World::Core::CBackgroundQueue::shutdown();
				}
				else
				{
					pObjectX->shutdown();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BackgroundQueue_register_1shutdown_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBackgroundQueueProxy *pObjectX = (JCBackgroundQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BackgroundQueue_shutdown_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CBackgroundQueue *pObjectX = (EarthView::World::Core::CBackgroundQueue*) pObjXXXX;
				pObjectX->EarthView::World::Core::CBackgroundQueue::shutdown();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_BackgroundQueue_getGroupName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CBackgroundQueue *pObjectX = (EarthView::World::Core::CBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBackgroundQueueProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Core::CBackgroundQueue::getGroupName();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BackgroundQueue_register_1getGroupName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBackgroundQueueProxy *pObjectX = (JCBackgroundQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_BackgroundQueue_getGroupName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CBackgroundQueue *pObjectX = (EarthView::World::Core::CBackgroundQueue*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Core::CBackgroundQueue::getGroupName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_BackgroundQueue_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CBackgroundQueue *pObjectX = (EarthView::World::Core::CBackgroundQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBackgroundQueueProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Core::CBackgroundQueue::getName();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BackgroundQueue_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBackgroundQueueProxy *pObjectX = (JCBackgroundQueueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_BackgroundQueue_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CBackgroundQueue *pObjectX = (EarthView::World::Core::CBackgroundQueue*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Core::CBackgroundQueue::getName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_BackgroundQueueManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Core::CBackgroundQueueManager* __values1 = EarthView::World::Core::CBackgroundQueueManager::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_BackgroundQueueManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Core::CBackgroundQueueManager& __values1 = EarthView::World::Core::CBackgroundQueueManager::getSingleton();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BackgroundQueueManager_registerBackgroundQueue_1CBackgroundQueue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong queue_j)
			{
				EarthView::World::Core::CBackgroundQueue *queue = (EarthView::World::Core::CBackgroundQueue*) queue_j;
				EarthView::World::Core::CBackgroundQueueManager *pObjectX = (EarthView::World::Core::CBackgroundQueueManager*) pObjXXXX;
				pObjectX->registerBackgroundQueue(queue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BackgroundQueueManager_unregisterBackgroundQueue_1CBackgroundQueue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong queue_j)
			{
				EarthView::World::Core::CBackgroundQueue *queue = (EarthView::World::Core::CBackgroundQueue*) queue_j;
				EarthView::World::Core::CBackgroundQueueManager *pObjectX = (EarthView::World::Core::CBackgroundQueueManager*) pObjXXXX;
				pObjectX->unregisterBackgroundQueue(queue);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_BackgroundQueueManager_getBackgroundQueue_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Core::CBackgroundQueueManager *pObjectX = (EarthView::World::Core::CBackgroundQueueManager*) pObjXXXX;
				EarthView::World::Core::CBackgroundQueue* __values1 = pObjectX->getBackgroundQueue(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_BackgroundQueueManager_getRegisterBackgroundQueueNames_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CBackgroundQueueManager *pObjectX = (EarthView::World::Core::CBackgroundQueueManager*) pObjXXXX;
				EarthView::World::Core::StringVector __values1 = pObjectX->getRegisterBackgroundQueueNames();
				EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_BackgroundQueueManager_getRegisterBackgroundGroupNames_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CBackgroundQueueManager *pObjectX = (EarthView::World::Core::CBackgroundQueueManager*) pObjXXXX;
				EarthView::World::Core::StringVector __values1 = pObjectX->getRegisterBackgroundGroupNames();
				EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BackgroundQueueManager_clearBackgroundQueues_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CBackgroundQueueManager *pObjectX = (EarthView::World::Core::CBackgroundQueueManager*) pObjXXXX;
				pObjectX->clearBackgroundQueues();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BackgroundQueueManager_initialiseAllGroups_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CBackgroundQueueManager *pObjectX = (EarthView::World::Core::CBackgroundQueueManager*) pObjXXXX;
				pObjectX->initialiseAllGroups();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BackgroundQueueManager_initialise_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Core::CBackgroundQueueManager *pObjectX = (EarthView::World::Core::CBackgroundQueueManager*) pObjXXXX;
				pObjectX->initialise(groupName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BackgroundQueueManager_shutdownAllGroups_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CBackgroundQueueManager *pObjectX = (EarthView::World::Core::CBackgroundQueueManager*) pObjXXXX;
				pObjectX->shutdownAllGroups();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BackgroundQueueManager_shutdown_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Core::CBackgroundQueueManager *pObjectX = (EarthView::World::Core::CBackgroundQueueManager*) pObjXXXX;
				pObjectX->shutdown(groupName);
			}
		}
	}
}
