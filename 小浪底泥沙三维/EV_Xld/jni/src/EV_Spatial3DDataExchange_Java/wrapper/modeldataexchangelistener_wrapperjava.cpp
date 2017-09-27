/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/modeldataexchangelistener.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				class JCModelDataExchangeListenerProxy : public EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener
				{
				 private:
					EarthView::World::Core::ev_string m_processLog_EVString_callback;
					EarthView::World::Core::ev_string m_getCurrentCount_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_pauseOrStop_EVString_callback;
				public:
					JCModelDataExchangeListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelDataExchangeListener(pList)
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
					void register_processLog_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_processLog_EVString_callback = __method;
					}
					void register_getCurrentCount_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getCurrentCount_ev_int32_ev_int32_callback = __method;
					}
					void register_pauseOrStop_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_pauseOrStop_EVString_callback = __method;
					}
					virtual void processLog(EVString info)
					{
						if (this->_gRef != NULL && this->m_processLog_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring info_wch = info;
							jstring info_j = __env->NewString((const jchar*)info_wch.getString(), info_wch.size());
							jmethodID __method = __gr->getMethod("processLog_EVString_callback");
							__env->CallVoidMethod(__obj, __method , info_j);
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
							return this->CModelDataExchangeListener::processLog(info);
						}
					}
					virtual void getCurrentCount(ev_int32 num, ev_int32 count)
					{
						if (this->_gRef != NULL && this->m_getCurrentCount_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
							jint num_j = (jint) num;
							jint count_j = (jint) count;
							jmethodID __method = __gr->getMethod("getCurrentCount_ev_int32_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , num_j, count_j);
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
							return this->CModelDataExchangeListener::getCurrentCount(num, count);
						}
					}
					virtual void pauseOrStop(EVString info)
					{
						if (this->_gRef != NULL && this->m_pauseOrStop_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring info_wch = info;
							jstring info_j = __env->NewString((const jchar*)info_wch.getString(), info_wch.size());
							jmethodID __method = __gr->getMethod("pauseOrStop_EVString_callback");
							__env->CallVoidMethod(__obj, __method , info_j);
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
							return this->CModelDataExchangeListener::pauseOrStop(info);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCModelDataExchangeListenerProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchangeListener_processLog_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring info_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* info_ch = (const ev_char*)__env->GetStringUTFChars(info_j,JNI_FALSE);
					EVString info = info_ch;
					__env->ReleaseStringUTFChars(info_j, (const char *)info_ch);
					#else
					const ev_wchar* info_ch = (const ev_wchar*)__env->GetStringChars(info_j,JNI_FALSE);
					EVString info = info_ch;
					__env->ReleaseStringChars(info_j, (const jchar *)info_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCModelDataExchangeListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener::processLog(info);
					}
					else
					{
						pObjectX->processLog(info);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchangeListener_register_1processLog_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCModelDataExchangeListenerProxy *pObjectX = (JCModelDataExchangeListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_processLog_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"processLog_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchangeListener_processLog_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring info_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* info_ch = (const ev_char*)__env->GetStringUTFChars(info_j,JNI_FALSE);
					EVString info = info_ch;
					__env->ReleaseStringUTFChars(info_j, (const char *)info_ch);
					#else
					const ev_wchar* info_ch = (const ev_wchar*)__env->GetStringChars(info_j,JNI_FALSE);
					EVString info = info_ch;
					__env->ReleaseStringChars(info_j, (const jchar *)info_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener::processLog(info);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchangeListener_getCurrentCount_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint num_j, jint count_j)
				{
					ev_int32 num = (ev_int32) num_j;
					ev_int32 count = (ev_int32) count_j;
					EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCModelDataExchangeListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener::getCurrentCount(num, count);
					}
					else
					{
						pObjectX->getCurrentCount(num, count);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchangeListener_register_1getCurrentCount_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCModelDataExchangeListenerProxy *pObjectX = (JCModelDataExchangeListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getCurrentCount_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getCurrentCount_ev_int32_ev_int32_callback", "(II)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchangeListener_getCurrentCount_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint num_j, jint count_j)
				{
					ev_int32 num = (ev_int32) num_j;
					ev_int32 count = (ev_int32) count_j;
					EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener::getCurrentCount(num, count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchangeListener_pauseOrStop_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring info_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* info_ch = (const ev_char*)__env->GetStringUTFChars(info_j,JNI_FALSE);
					EVString info = info_ch;
					__env->ReleaseStringUTFChars(info_j, (const char *)info_ch);
					#else
					const ev_wchar* info_ch = (const ev_wchar*)__env->GetStringChars(info_j,JNI_FALSE);
					EVString info = info_ch;
					__env->ReleaseStringChars(info_j, (const jchar *)info_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCModelDataExchangeListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener::pauseOrStop(info);
					}
					else
					{
						pObjectX->pauseOrStop(info);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchangeListener_register_1pauseOrStop_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCModelDataExchangeListenerProxy *pObjectX = (JCModelDataExchangeListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_pauseOrStop_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"pauseOrStop_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchangeListener_pauseOrStop_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring info_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* info_ch = (const ev_char*)__env->GetStringUTFChars(info_j,JNI_FALSE);
					EVString info = info_ch;
					__env->ReleaseStringUTFChars(info_j, (const char *)info_ch);
					#else
					const ev_wchar* info_ch = (const ev_wchar*)__env->GetStringChars(info_j,JNI_FALSE);
					EVString info = info_ch;
					__env->ReleaseStringChars(info_j, (const jchar *)info_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener::pauseOrStop(info);
				}
			}
		}
	}
}
