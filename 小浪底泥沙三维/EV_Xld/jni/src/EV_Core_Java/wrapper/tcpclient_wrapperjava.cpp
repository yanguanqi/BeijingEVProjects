/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/tcpclient.h"
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
			class JCTcpClientProxy : public EarthView::World::Core::CTcpClient
			{
			 private:
				EarthView::World::Core::ev_string m_onError_ev_int32_callback;
				EarthView::World::Core::ev_string m_onReceive_ev_byte_ev_int32_callback;
				EarthView::World::Core::ev_string m_onEvent_CEvent_callback;
				EarthView::World::Core::ev_string m_onTimerEvent_CTimerEvent_callback;
				EarthView::World::Core::ev_string m_onCustomEvent_CEvent_callback;
			public:
				JCTcpClientProxy(EarthView::World::Core::CNameValuePairList *pList) : CTcpClient(pList)
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
				void register_onError_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onError_ev_int32_callback = __method;
				}
				void register_onReceive_ev_byte_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onReceive_ev_byte_ev_int32_callback = __method;
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
						return this->CTcpClient::onError(eErrorNo);
					}
				}
				virtual ev_bool onReceive(ev_byte* byBuf, ev_int32 iLen)
				{
					if (this->_gRef != NULL && this->m_onReceive_ev_byte_ev_int32_callback != "" && this->isCustomExtend())
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
						jlong byBuf_j = (jlong) byBuf;
						jint iLen_j = (jint) iLen;
						jmethodID __method = __gr->getMethod("onReceive_ev_byte_ev_int32_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , byBuf_j, iLen_j);
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
						return this->CTcpClient::onReceive(byBuf, iLen);
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
						return this->CTcpClient::onEvent(e);
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
						return this->CTcpClient::onTimerEvent(e);
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
						return this->CTcpClient::onCustomEvent(e);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCTcpClientProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_TcpClient_connect_1ev_1string_1ev_1int16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strIp_j, jshort iPort_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strIp_ch = (const ev_char*)__env->GetStringUTFChars(strIp_j,JNI_FALSE);
				const ev_string strIp = strIp_ch;
				__env->ReleaseStringUTFChars(strIp_j, (const char *)strIp_ch);
				#else
				const ev_wchar* strIp_ch = (const ev_wchar*)__env->GetStringChars(strIp_j,JNI_FALSE);
				const ev_string strIp = strIp_ch;
				__env->ReleaseStringChars(strIp_j, (const jchar *)strIp_ch);
				#endif
				ev_int16 iPort = (ev_int16) iPort_j;
				EarthView::World::Core::CTcpClient *pObjectX = (EarthView::World::Core::CTcpClient*) pObjXXXX;
				pObjectX->connect(strIp, iPort);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_TcpClient_send_1ev_1byte_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong byBuf_j, jint iLen_j)
			{
				ev_byte *byBuf = (ev_byte*) byBuf_j;
				ev_int32 iLen = (ev_int32) iLen_j;
				EarthView::World::Core::CTcpClient *pObjectX = (EarthView::World::Core::CTcpClient*) pObjXXXX;
				ev_int32 __values1 = pObjectX->send(byBuf, iLen);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_TcpClient_setBufByteSize_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint iBufSize_j)
			{
				ev_int32 iBufSize = (ev_int32) iBufSize_j;
				EarthView::World::Core::CTcpClient *pObjectX = (EarthView::World::Core::CTcpClient*) pObjXXXX;
				pObjectX->setBufByteSize(iBufSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_TcpClient_setConnTimeOut_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint iTimeOut_j)
			{
				ev_int32 iTimeOut = (ev_int32) iTimeOut_j;
				EarthView::World::Core::CTcpClient *pObjectX = (EarthView::World::Core::CTcpClient*) pObjXXXX;
				pObjectX->setConnTimeOut(iTimeOut);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_TcpClient_close_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CTcpClient *pObjectX = (EarthView::World::Core::CTcpClient*) pObjXXXX;
				ev_bool __values1 = pObjectX->close();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_TcpClient_isConnected_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CTcpClient *pObjectX = (EarthView::World::Core::CTcpClient*) pObjXXXX;
				ev_bool __values1 = pObjectX->isConnected();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_TcpClient_onError_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint eErrorNo_j)
			{
				ev_int32 eErrorNo = (ev_int32) eErrorNo_j;
				EarthView::World::Core::CTcpClient *pObjectX = (EarthView::World::Core::CTcpClient*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTcpClientProxy))
				{
					pObjectX->EarthView::World::Core::CTcpClient::onError(eErrorNo);
				}
				else
				{
					pObjectX->onError(eErrorNo);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_TcpClient_register_1onError_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTcpClientProxy *pObjectX = (JCTcpClientProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_TcpClient_onError_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint eErrorNo_j)
			{
				ev_int32 eErrorNo = (ev_int32) eErrorNo_j;
				EarthView::World::Core::CTcpClient *pObjectX = (EarthView::World::Core::CTcpClient*) pObjXXXX;
				pObjectX->EarthView::World::Core::CTcpClient::onError(eErrorNo);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_TcpClient_onReceive_1ev_1byte_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong byBuf_j, jint iLen_j)
			{
				ev_byte *byBuf = (ev_byte*) byBuf_j;
				ev_int32 iLen = (ev_int32) iLen_j;
				EarthView::World::Core::CTcpClient *pObjectX = (EarthView::World::Core::CTcpClient*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTcpClientProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CTcpClient::onReceive(byBuf, iLen);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->onReceive(byBuf, iLen);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_TcpClient_register_1onReceive_1ev_1byte_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTcpClientProxy *pObjectX = (JCTcpClientProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onReceive_ev_byte_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onReceive_ev_byte_ev_int32_callback", "(JI)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_TcpClient_onReceive_1ev_1byte_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong byBuf_j, jint iLen_j)
			{
				ev_byte *byBuf = (ev_byte*) byBuf_j;
				ev_int32 iLen = (ev_int32) iLen_j;
				EarthView::World::Core::CTcpClient *pObjectX = (EarthView::World::Core::CTcpClient*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CTcpClient::onReceive(byBuf, iLen);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_TcpClient_register_1onEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTcpClientProxy *pObjectX = (JCTcpClientProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_TcpClient_register_1onTimerEvent_1CTimerEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTcpClientProxy *pObjectX = (JCTcpClientProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_TcpClient_register_1onCustomEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTcpClientProxy *pObjectX = (JCTcpClientProxy*) pObjXXXX;
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
