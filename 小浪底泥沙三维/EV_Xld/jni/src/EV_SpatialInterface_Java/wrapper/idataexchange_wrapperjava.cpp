/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/idataexchange.h"
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
			namespace Convertor
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_convertor_EVDataExchangeTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						DataExchangeType_Unknown,
						DataExchangeType_Spatial2D,
						DataExchangeType_Spatial3D
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				class JIDataExchangeProxy : public EarthView::World::Spatial::Convertor::IDataExchange
				{
				 private:
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_exchange_void_callback;
					EarthView::World::Core::ev_string m_setListener_IDataExchangeListener_callback;
					EarthView::World::Core::ev_string m_getListener_void_callback;
				public:
					JIDataExchangeProxy(EarthView::World::Core::CNameValuePairList *pList) : IDataExchange(pList)
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
					void register_getType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getType_void_callback = __method;
					}
					void register_exchange_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_exchange_void_callback = __method;
					}
					void register_setListener_IDataExchangeListener_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setListener_IDataExchangeListener_callback = __method;
					}
					void register_getListener_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getListener_void_callback = __method;
					}
					virtual EarthView::World::Spatial::Convertor::EVDataExchangeType getType() const
					{
						if (this->_gRef != NULL && this->m_getType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Convertor::EVDataExchangeType __values1 = (EarthView::World::Spatial::Convertor::EVDataExchangeType) __values1_j;
							return __values1;
						}
						else
						{
							return this->IDataExchange::getType();
						}
					}
					virtual ev_int32 exchange()
					{
						if (this->_gRef != NULL && this->m_exchange_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("exchange_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->IDataExchange::exchange();
						}
					}
					virtual void setListener(EarthView::World::Spatial::Convertor::IDataExchangeListener* ref_listener)
					{
						if (this->_gRef != NULL && this->m_setListener_IDataExchangeListener_callback != "" && this->isCustomExtend())
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
							jlong ref_listener_j = (jlong) ref_listener;
							jmethodID __method = __gr->getMethod("setListener_IDataExchangeListener_callback");
							__env->CallVoidMethod(__obj, __method , ref_listener_j);
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
							return this->IDataExchange::setListener(ref_listener);
						}
					}
					virtual const EarthView::World::Spatial::Convertor::IDataExchangeListener* getListener() const
					{
						if (this->_gRef != NULL && this->m_getListener_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getListener_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial::Convertor::IDataExchangeListener *__values1 = (const EarthView::World::Spatial::Convertor::IDataExchangeListener*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IDataExchange::getListener();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIDataExchangeProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_convertor_Idataexchange_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Convertor::IDataExchange *pObjectX = (EarthView::World::Spatial::Convertor::IDataExchange*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDataExchangeProxy))
					{
						EarthView::World::Spatial::Convertor::EVDataExchangeType __values1 = pObjectX->EarthView::World::Spatial::Convertor::IDataExchange::getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Convertor::EVDataExchangeType __values1 = pObjectX->getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_Idataexchange_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDataExchangeProxy *pObjectX = (JIDataExchangeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_convertor_Idataexchange_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Convertor::IDataExchange *pObjectX = (EarthView::World::Spatial::Convertor::IDataExchange*) pObjXXXX;
					EarthView::World::Spatial::Convertor::EVDataExchangeType __values1 = pObjectX->EarthView::World::Spatial::Convertor::IDataExchange::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_convertor_Idataexchange_exchange_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Convertor::IDataExchange *pObjectX = (EarthView::World::Spatial::Convertor::IDataExchange*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDataExchangeProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Convertor::IDataExchange::exchange();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->exchange();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_Idataexchange_register_1exchange_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDataExchangeProxy *pObjectX = (JIDataExchangeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_exchange_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"exchange_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_convertor_Idataexchange_exchange_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Convertor::IDataExchange *pObjectX = (EarthView::World::Spatial::Convertor::IDataExchange*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Convertor::IDataExchange::exchange();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_Idataexchange_setListener_1IDataExchangeListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
				{
					EarthView::World::Spatial::Convertor::IDataExchangeListener *ref_listener = (EarthView::World::Spatial::Convertor::IDataExchangeListener*) ref_listener_j;
					EarthView::World::Spatial::Convertor::IDataExchange *pObjectX = (EarthView::World::Spatial::Convertor::IDataExchange*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDataExchangeProxy))
					{
						pObjectX->EarthView::World::Spatial::Convertor::IDataExchange::setListener(ref_listener);
					}
					else
					{
						pObjectX->setListener(ref_listener);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_Idataexchange_register_1setListener_1IDataExchangeListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDataExchangeProxy *pObjectX = (JIDataExchangeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setListener_IDataExchangeListener_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setListener_IDataExchangeListener_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_Idataexchange_setListener_1IDataExchangeListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
				{
					EarthView::World::Spatial::Convertor::IDataExchangeListener *ref_listener = (EarthView::World::Spatial::Convertor::IDataExchangeListener*) ref_listener_j;
					EarthView::World::Spatial::Convertor::IDataExchange *pObjectX = (EarthView::World::Spatial::Convertor::IDataExchange*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Convertor::IDataExchange::setListener(ref_listener);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_convertor_Idataexchange_getListener_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Convertor::IDataExchange *pObjectX = (EarthView::World::Spatial::Convertor::IDataExchange*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDataExchangeProxy))
					{
						const EarthView::World::Spatial::Convertor::IDataExchangeListener* __values1 = pObjectX->EarthView::World::Spatial::Convertor::IDataExchange::getListener();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::Convertor::IDataExchangeListener* __values1 = pObjectX->getListener();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_Idataexchange_register_1getListener_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDataExchangeProxy *pObjectX = (JIDataExchangeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getListener_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getListener_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_convertor_Idataexchange_getListener_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Convertor::IDataExchange *pObjectX = (EarthView::World::Spatial::Convertor::IDataExchange*) pObjXXXX;
					const EarthView::World::Spatial::Convertor::IDataExchangeListener* __values1 = pObjectX->EarthView::World::Spatial::Convertor::IDataExchange::getListener();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
