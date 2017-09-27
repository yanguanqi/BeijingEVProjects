/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "download/webserviceconnection.h"
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
			namespace Download
			{
				class JCWebServiceConnectionProxy : public EarthView::World::Spatial::Download::CWebServiceConnection
				{
				 private:
					EarthView::World::Core::ev_string m_setConnectionImp_ConnectionImp_callback;
					EarthView::World::Core::ev_string m_closeConnect_void_callback;
					EarthView::World::Core::ev_string m_openConnect_void_callback;
				public:
					JCWebServiceConnectionProxy(EarthView::World::Core::CNameValuePairList *pList) : CWebServiceConnection(pList)
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
					void register_setConnectionImp_ConnectionImp_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setConnectionImp_ConnectionImp_callback = __method;
					}
					void register_closeConnect_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_closeConnect_void_callback = __method;
					}
					void register_openConnect_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_openConnect_void_callback = __method;
					}
					virtual void setConnectionImp(EarthView::World::Spatial::Download::ConnectionImp* ref_pImp)
					{
						if (this->_gRef != NULL && this->m_setConnectionImp_ConnectionImp_callback != "" && this->isCustomExtend())
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
							jlong ref_pImp_j = (jlong) ref_pImp;
							jmethodID __method = __gr->getMethod("setConnectionImp_ConnectionImp_callback");
							__env->CallVoidMethod(__obj, __method , ref_pImp_j);
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
							return this->CWebServiceConnection::setConnectionImp(ref_pImp);
						}
					}
					virtual void closeConnect()
					{
						if (this->_gRef != NULL && this->m_closeConnect_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("closeConnect_void_callback");
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
							return this->CWebServiceConnection::closeConnect();
						}
					}
					virtual void openConnect()
					{
						if (this->_gRef != NULL && this->m_openConnect_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("openConnect_void_callback");
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
							return this->CWebServiceConnection::openConnect();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCWebServiceConnectionProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_WebServiceConnection_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::CWebServiceConnection *pObjectX = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjXXXX;
					const EVString& __values1 = pObjectX->getName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_WebServiceConnection_getUrl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::CWebServiceConnection *pObjectX = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjXXXX;
					const EVString& __values1 = pObjectX->getUrl();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_WebServiceConnection_getPluginFile_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::CWebServiceConnection *pObjectX = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjXXXX;
					const EVString& __values1 = pObjectX->getPluginFile();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_WebServiceConnection_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::CWebServiceConnection *pObjectX = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getType();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_WebServiceConnection_setConnectionImp_1ConnectionImp(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pImp_j)
				{
					EarthView::World::Spatial::Download::ConnectionImp *ref_pImp = (EarthView::World::Spatial::Download::ConnectionImp*) ref_pImp_j;
					EarthView::World::Spatial::Download::CWebServiceConnection *pObjectX = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCWebServiceConnectionProxy))
					{
						pObjectX->EarthView::World::Spatial::Download::CWebServiceConnection::setConnectionImp(ref_pImp);
					}
					else
					{
						pObjectX->setConnectionImp(ref_pImp);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_WebServiceConnection_register_1setConnectionImp_1ConnectionImp(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCWebServiceConnectionProxy *pObjectX = (JCWebServiceConnectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setConnectionImp_ConnectionImp_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setConnectionImp_ConnectionImp_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_WebServiceConnection_setConnectionImp_1ConnectionImp_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pImp_j)
				{
					EarthView::World::Spatial::Download::ConnectionImp *ref_pImp = (EarthView::World::Spatial::Download::ConnectionImp*) ref_pImp_j;
					EarthView::World::Spatial::Download::CWebServiceConnection *pObjectX = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Download::CWebServiceConnection::setConnectionImp(ref_pImp);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_WebServiceConnection_closeConnect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CWebServiceConnection *pObjectX = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCWebServiceConnectionProxy))
					{
						pObjectX->EarthView::World::Spatial::Download::CWebServiceConnection::closeConnect();
					}
					else
					{
						pObjectX->closeConnect();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_WebServiceConnection_register_1closeConnect_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCWebServiceConnectionProxy *pObjectX = (JCWebServiceConnectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_closeConnect_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"closeConnect_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_WebServiceConnection_closeConnect_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CWebServiceConnection *pObjectX = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Download::CWebServiceConnection::closeConnect();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_WebServiceConnection_openConnect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CWebServiceConnection *pObjectX = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCWebServiceConnectionProxy))
					{
						pObjectX->EarthView::World::Spatial::Download::CWebServiceConnection::openConnect();
					}
					else
					{
						pObjectX->openConnect();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_WebServiceConnection_register_1openConnect_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCWebServiceConnectionProxy *pObjectX = (JCWebServiceConnectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_openConnect_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"openConnect_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_WebServiceConnection_openConnect_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CWebServiceConnection *pObjectX = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Download::CWebServiceConnection::openConnect();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_WebServiceConnection_reConnect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CWebServiceConnection *pObjectX = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjXXXX;
					pObjectX->reConnect();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_WebServiceConnection_setConnectAble_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean connectAble_j)
				{
					ev_bool connectAble = (ev_bool) connectAble_j;
					EarthView::World::Spatial::Download::CWebServiceConnection *pObjectX = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjXXXX;
					pObjectX->setConnectAble(connectAble);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_WebServiceConnection_setConnected_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean connected_j)
				{
					ev_bool connected = (ev_bool) connected_j;
					EarthView::World::Spatial::Download::CWebServiceConnection *pObjectX = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjXXXX;
					pObjectX->setConnected(connected);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_download_WebServiceConnection_isConnectAble_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CWebServiceConnection *pObjectX = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjXXXX;
					ev_bool __values1 = pObjectX->isConnectAble();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_WebServiceConnection_convertSendStringCode_1EVString(JNIEnv *__env , jclass __clazz, jlong sendStr_j)
				{
					EVString &sendStr = *(EVString*) sendStr_j;
					EVString& __values1 = EarthView::World::Spatial::Download::CWebServiceConnection::convertSendStringCode(sendStr);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_WebServiceConnection_convertRecvStringCode_1EVString(JNIEnv *__env , jclass __clazz, jlong recvStr_j)
				{
					EVString &recvStr = *(EVString*) recvStr_j;
					EVString& __values1 = EarthView::World::Spatial::Download::CWebServiceConnection::convertRecvStringCode(recvStr);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_download_WebServiceConnection_host_1EVString(JNIEnv *__env , jclass __clazz, jstring url_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* url_ch = (const ev_char*)__env->GetStringUTFChars(url_j,JNI_FALSE);
					const EVString url = url_ch;
					__env->ReleaseStringUTFChars(url_j, (const char *)url_ch);
					#else
					const ev_wchar* url_ch = (const ev_wchar*)__env->GetStringChars(url_j,JNI_FALSE);
					const EVString url = url_ch;
					__env->ReleaseStringChars(url_j, (const jchar *)url_ch);
					#endif
					EVString __values1 = EarthView::World::Spatial::Download::CWebServiceConnection::host(url);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
		}
	}
}
