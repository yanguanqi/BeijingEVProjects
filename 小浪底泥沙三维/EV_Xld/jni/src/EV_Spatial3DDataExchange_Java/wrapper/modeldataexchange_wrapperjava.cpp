/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/modeldataexchange.h"
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
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
			}
		}
	}
}
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
		namespace Spatial3D
		{
			namespace DataExchange
			{
				class JCModelDataExchangeProxy : public EarthView::World::Spatial3D::DataExchange::CModelDataExchange
				{
				 private:
					EarthView::World::Core::ev_string m_setSrcDataDriver_CModelDataDriver_callback;
					EarthView::World::Core::ev_string m_setDestDataDriver_CModelDataDriver_callback;
					EarthView::World::Core::ev_string m_shutdown_void_callback;
					EarthView::World::Core::ev_string m_startup_void_callback;
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_exchange_void_callback;
					EarthView::World::Core::ev_string m_setListener_IDataExchangeListener_callback;
					EarthView::World::Core::ev_string m_getListener_void_callback;
				public:
					JCModelDataExchangeProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelDataExchange(pList)
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
					void register_setSrcDataDriver_CModelDataDriver_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSrcDataDriver_CModelDataDriver_callback = __method;
					}
					void register_setDestDataDriver_CModelDataDriver_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDestDataDriver_CModelDataDriver_callback = __method;
					}
					void register_shutdown_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_shutdown_void_callback = __method;
					}
					void register_startup_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_startup_void_callback = __method;
					}
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
							return this->CModelDataExchange::exchange();
						}
					}
					virtual void setSrcDataDriver(const EarthView::World::Spatial3D::DataExchange::CModelDataDriver* ref_driver)
					{
						if (this->_gRef != NULL && this->m_setSrcDataDriver_CModelDataDriver_callback != "" && this->isCustomExtend())
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
							jlong ref_driver_j = (jlong) ref_driver;
							jmethodID __method = __gr->getMethod("setSrcDataDriver_CModelDataDriver_callback");
							__env->CallVoidMethod(__obj, __method , ref_driver_j);
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
							return this->CModelDataExchange::setSrcDataDriver(ref_driver);
						}
					}
					virtual void setDestDataDriver(const EarthView::World::Spatial3D::DataExchange::CModelDataDriver* ref_driver)
					{
						if (this->_gRef != NULL && this->m_setDestDataDriver_CModelDataDriver_callback != "" && this->isCustomExtend())
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
							jlong ref_driver_j = (jlong) ref_driver;
							jmethodID __method = __gr->getMethod("setDestDataDriver_CModelDataDriver_callback");
							__env->CallVoidMethod(__obj, __method , ref_driver_j);
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
							return this->CModelDataExchange::setDestDataDriver(ref_driver);
						}
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
							return this->CModelDataExchange::getType();
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
							return this->CModelDataExchange::shutdown();
						}
					}
					virtual ev_bool startup()
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
							return this->CModelDataExchange::startup();
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
							return this->CModelDataExchange::setListener(ref_listener);
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
							return this->CModelDataExchange::getListener();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCModelDataExchangeProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_exchange_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCModelDataExchangeProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial3D::DataExchange::CModelDataExchange::exchange();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_register_1exchange_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCModelDataExchangeProxy *pObjectX = (JCModelDataExchangeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_exchange_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial3D::DataExchange::CModelDataExchange::exchange();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_setSrcDataDriver_1CModelDataDriver(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_driver_j)
				{
					const EarthView::World::Spatial3D::DataExchange::CModelDataDriver *ref_driver = (const EarthView::World::Spatial3D::DataExchange::CModelDataDriver*) ref_driver_j;
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCModelDataExchangeProxy))
					{
						pObjectX->EarthView::World::Spatial3D::DataExchange::CModelDataExchange::setSrcDataDriver(ref_driver);
					}
					else
					{
						pObjectX->setSrcDataDriver(ref_driver);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_register_1setSrcDataDriver_1CModelDataDriver(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCModelDataExchangeProxy *pObjectX = (JCModelDataExchangeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSrcDataDriver_CModelDataDriver_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSrcDataDriver_CModelDataDriver_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_setSrcDataDriver_1CModelDataDriver_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_driver_j)
				{
					const EarthView::World::Spatial3D::DataExchange::CModelDataDriver *ref_driver = (const EarthView::World::Spatial3D::DataExchange::CModelDataDriver*) ref_driver_j;
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::DataExchange::CModelDataExchange::setSrcDataDriver(ref_driver);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_setDestDataDriver_1CModelDataDriver(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_driver_j)
				{
					const EarthView::World::Spatial3D::DataExchange::CModelDataDriver *ref_driver = (const EarthView::World::Spatial3D::DataExchange::CModelDataDriver*) ref_driver_j;
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCModelDataExchangeProxy))
					{
						pObjectX->EarthView::World::Spatial3D::DataExchange::CModelDataExchange::setDestDataDriver(ref_driver);
					}
					else
					{
						pObjectX->setDestDataDriver(ref_driver);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_register_1setDestDataDriver_1CModelDataDriver(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCModelDataExchangeProxy *pObjectX = (JCModelDataExchangeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDestDataDriver_CModelDataDriver_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDestDataDriver_CModelDataDriver_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_setDestDataDriver_1CModelDataDriver_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_driver_j)
				{
					const EarthView::World::Spatial3D::DataExchange::CModelDataDriver *ref_driver = (const EarthView::World::Spatial3D::DataExchange::CModelDataDriver*) ref_driver_j;
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::DataExchange::CModelDataExchange::setDestDataDriver(ref_driver);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_setSource_1CModelDataSource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSource_j, jstring dSetName_j)
				{
					EarthView::World::Spatial3D::Dataset::CModelDataSource *pSource = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pSource_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* dSetName_ch = (const ev_char*)__env->GetStringUTFChars(dSetName_j,JNI_FALSE);
					const EVString dSetName = dSetName_ch;
					__env->ReleaseStringUTFChars(dSetName_j, (const char *)dSetName_ch);
					#else
					const ev_wchar* dSetName_ch = (const ev_wchar*)__env->GetStringChars(dSetName_j,JNI_FALSE);
					const EVString dSetName = dSetName_ch;
					__env->ReleaseStringChars(dSetName_j, (const jchar *)dSetName_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjXXXX;
					pObjectX->setSource(pSource, dSetName);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_setPath_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring path_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* path_ch = (const ev_char*)__env->GetStringUTFChars(path_j,JNI_FALSE);
					const EVString path = path_ch;
					__env->ReleaseStringUTFChars(path_j, (const char *)path_ch);
					#else
					const ev_wchar* path_ch = (const ev_wchar*)__env->GetStringChars(path_j,JNI_FALSE);
					const EVString path = path_ch;
					__env->ReleaseStringChars(path_j, (const jchar *)path_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjXXXX;
					pObjectX->setPath(path);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_setParams_1CMeshParams(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong params_j)
				{
					const EarthView::World::Spatial3D::DataExchange::CMeshParams &params = *(EarthView::World::Spatial3D::DataExchange::CMeshParams*) params_j;
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjXXXX;
					pObjectX->setParams(params);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::DataExchange::CModelDataExchange *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCModelDataExchangeProxy))
					{
						EarthView::World::Spatial::Convertor::EVDataExchangeType __values1 = pObjectX->EarthView::World::Spatial3D::DataExchange::CModelDataExchange::getType();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCModelDataExchangeProxy *pObjectX = (JCModelDataExchangeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::DataExchange::CModelDataExchange *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjXXXX;
					EarthView::World::Spatial::Convertor::EVDataExchangeType __values1 = pObjectX->EarthView::World::Spatial3D::DataExchange::CModelDataExchange::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_addListener_1CModelDataExchangeListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener *ref_listener = (EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener*) ref_listener_j;
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjXXXX;
					pObjectX->addListener(ref_listener);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_shutdown_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCModelDataExchangeProxy))
					{
						pObjectX->EarthView::World::Spatial3D::DataExchange::CModelDataExchange::shutdown();
					}
					else
					{
						pObjectX->shutdown();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_register_1shutdown_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCModelDataExchangeProxy *pObjectX = (JCModelDataExchangeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_shutdown_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::DataExchange::CModelDataExchange::shutdown();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_IsStart_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjXXXX;
					ev_bool __values1 = pObjectX->IsStart();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_startup_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCModelDataExchangeProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::DataExchange::CModelDataExchange::startup();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->startup();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_register_1startup_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCModelDataExchangeProxy *pObjectX = (JCModelDataExchangeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_startup_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"startup_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_startup_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::DataExchange::CModelDataExchange::startup();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_stop_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjXXXX;
					pObjectX->stop();
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_getExportPercentage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getExportPercentage();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_resetImportIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjXXXX;
					pObjectX->resetImportIndex();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_register_1setListener_1IDataExchangeListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCModelDataExchangeProxy *pObjectX = (JCModelDataExchangeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataExchange_register_1getListener_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCModelDataExchangeProxy *pObjectX = (JCModelDataExchangeProxy*) pObjXXXX;
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
			}
		}
	}
}
