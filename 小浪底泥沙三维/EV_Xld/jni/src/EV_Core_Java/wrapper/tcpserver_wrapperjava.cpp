/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/tcpserver.h"
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
			class JCTcpServerProxy : public EarthView::World::Core::CTcpServer
			{
			 private:
				EarthView::World::Core::ev_string m_createJob_void_callback;
				EarthView::World::Core::ev_string m_onError_ev_int32_callback;
				EarthView::World::Core::ev_string m_onEvent_CEvent_callback;
				EarthView::World::Core::ev_string m_onTimerEvent_CTimerEvent_callback;
				EarthView::World::Core::ev_string m_onCustomEvent_CEvent_callback;
			public:
				JCTcpServerProxy(EarthView::World::Core::CNameValuePairList *pList) : CTcpServer(pList)
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
				void register_createJob_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createJob_void_callback = __method;
				}
				void register_onError_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onError_ev_int32_callback = __method;
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
				virtual EarthView::World::Core::CBaseTcpServerJob* createJob()
				{
					if (this->_gRef != NULL && this->m_createJob_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("createJob_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::CBaseTcpServerJob *__values1 = (EarthView::World::Core::CBaseTcpServerJob*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTcpServer::createJob();
					}
				}
				virtual void onError(ev_int32 eErrorNo)
				{
					if (this->_gRef != NULL && this->m_onError_ev_int32_callback != "" && this->isCustomExtend())
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
						jint eErrorNo_j = (jint) eErrorNo;
						jmethodID __method = __gr->getMethod("onError_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , eErrorNo_j);
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
						return this->CTcpServer::onError(eErrorNo);
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
						return this->CTcpServer::onEvent(e);
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
						return this->CTcpServer::onTimerEvent(e);
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
						return this->CTcpServer::onCustomEvent(e);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCTcpServerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_TcpServer_start_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CTcpServer *pObjectX = (EarthView::World::Core::CTcpServer*) pObjXXXX;
				pObjectX->start();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_TcpServer_shutDown_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CTcpServer *pObjectX = (EarthView::World::Core::CTcpServer*) pObjXXXX;
				pObjectX->shutDown();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_TcpServer_setMaxClientCount_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint iClientCount_j)
			{
				ev_int32 iClientCount = (ev_int32) iClientCount_j;
				EarthView::World::Core::CTcpServer *pObjectX = (EarthView::World::Core::CTcpServer*) pObjXXXX;
				pObjectX->setMaxClientCount(iClientCount);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_TcpServer_setTcpListenPort_1ev_1int16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort iPort_j)
			{
				ev_int16 iPort = (ev_int16) iPort_j;
				EarthView::World::Core::CTcpServer *pObjectX = (EarthView::World::Core::CTcpServer*) pObjXXXX;
				pObjectX->setTcpListenPort(iPort);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_TcpServer_setBufByteSize_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint iBufSize_j)
			{
				ev_int32 iBufSize = (ev_int32) iBufSize_j;
				EarthView::World::Core::CTcpServer *pObjectX = (EarthView::World::Core::CTcpServer*) pObjXXXX;
				pObjectX->setBufByteSize(iBufSize);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_TcpServer_createJob_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CTcpServer *pObjectX = (EarthView::World::Core::CTcpServer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTcpServerProxy))
				{
					EarthView::World::Core::CBaseTcpServerJob* __values1 = pObjectX->EarthView::World::Core::CTcpServer::createJob();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::CBaseTcpServerJob* __values1 = pObjectX->createJob();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_TcpServer_register_1createJob_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTcpServerProxy *pObjectX = (JCTcpServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createJob_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createJob_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_TcpServer_createJob_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CTcpServer *pObjectX = (EarthView::World::Core::CTcpServer*) pObjXXXX;
				EarthView::World::Core::CBaseTcpServerJob* __values1 = pObjectX->EarthView::World::Core::CTcpServer::createJob();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_TcpServer_onError_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint eErrorNo_j)
			{
				ev_int32 eErrorNo = (ev_int32) eErrorNo_j;
				EarthView::World::Core::CTcpServer *pObjectX = (EarthView::World::Core::CTcpServer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTcpServerProxy))
				{
					pObjectX->EarthView::World::Core::CTcpServer::onError(eErrorNo);
				}
				else
				{
					pObjectX->onError(eErrorNo);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_TcpServer_register_1onError_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTcpServerProxy *pObjectX = (JCTcpServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onError_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onError_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_TcpServer_onError_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint eErrorNo_j)
			{
				ev_int32 eErrorNo = (ev_int32) eErrorNo_j;
				EarthView::World::Core::CTcpServer *pObjectX = (EarthView::World::Core::CTcpServer*) pObjXXXX;
				pObjectX->EarthView::World::Core::CTcpServer::onError(eErrorNo);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_TcpServer_register_1onEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTcpServerProxy *pObjectX = (JCTcpServerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_TcpServer_register_1onTimerEvent_1CTimerEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTcpServerProxy *pObjectX = (JCTcpServerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_TcpServer_register_1onCustomEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTcpServerProxy *pObjectX = (JCTcpServerProxy*) pObjXXXX;
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
