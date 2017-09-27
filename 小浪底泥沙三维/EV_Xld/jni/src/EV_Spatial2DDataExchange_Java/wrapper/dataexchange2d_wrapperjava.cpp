/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddataexchange/dataexchange2d.h"
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
				class JCDataExchange2DProxy : public EarthView::World::Spatial::Convertor::CDataExchange2D
				{
				 private:
					EarthView::World::Core::ev_string m_setSrcDataDriver_CDataDriver_callback;
					EarthView::World::Core::ev_string m_setDestDataDriver_CDataDriver_callback;
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_exchange_void_callback;
					EarthView::World::Core::ev_string m_setListener_IDataExchangeListener_callback;
					EarthView::World::Core::ev_string m_getListener_void_callback;
				public:
					JCDataExchange2DProxy(EarthView::World::Core::CNameValuePairList *pList) : CDataExchange2D(pList)
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
					void register_setSrcDataDriver_CDataDriver_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSrcDataDriver_CDataDriver_callback = __method;
					}
					void register_setDestDataDriver_CDataDriver_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDestDataDriver_CDataDriver_callback = __method;
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
							return this->CDataExchange2D::exchange();
						}
					}
					virtual void setSrcDataDriver(const EarthView::World::Spatial::Convertor::CDataDriver* ref_driver)
					{
						if (this->_gRef != NULL && this->m_setSrcDataDriver_CDataDriver_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("setSrcDataDriver_CDataDriver_callback");
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
							return this->CDataExchange2D::setSrcDataDriver(ref_driver);
						}
					}
					virtual void setDestDataDriver(const EarthView::World::Spatial::Convertor::CDataDriver* ref_driver)
					{
						if (this->_gRef != NULL && this->m_setDestDataDriver_CDataDriver_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("setDestDataDriver_CDataDriver_callback");
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
							return this->CDataExchange2D::setDestDataDriver(ref_driver);
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
							return this->CDataExchange2D::getType();
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
							return this->CDataExchange2D::setListener(ref_listener);
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
							return this->CDataExchange2D::getListener();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCDataExchange2DProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_convertor_DataExchange2D_exchange_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Convertor::CDataExchange2D *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataExchange2DProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Convertor::CDataExchange2D::exchange();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchange2D_register_1exchange_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataExchange2DProxy *pObjectX = (JCDataExchange2DProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_convertor_DataExchange2D_exchange_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Convertor::CDataExchange2D *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Convertor::CDataExchange2D::exchange();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchange2D_setSrcSource_1IDataSource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_dataSource_j, jstring datasetName_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource *ref_dataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) ref_dataSource_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					EarthView::World::Spatial::Convertor::CDataExchange2D *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjXXXX;
					pObjectX->setSrcSource(ref_dataSource, datasetName);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchange2D_setSrcSource_1IPropertySet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pPropettySet_j)
				{
					EarthView::World::Spatial::GeoDataset::IPropertySet *pPropettySet = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pPropettySet_j;
					EarthView::World::Spatial::Convertor::CDataExchange2D *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjXXXX;
					pObjectX->setSrcSource(pPropettySet);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_convertor_DataExchange2D_getSrcFormat_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Convertor::CDataExchange2D *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjXXXX;
					const EVString __values1 = pObjectX->getSrcFormat();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchange2D_setDestSource_1IDataSource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_dataSource_j, jstring dataName_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource *ref_dataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) ref_dataSource_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* dataName_ch = (const ev_char*)__env->GetStringUTFChars(dataName_j,JNI_FALSE);
					const EVString dataName = dataName_ch;
					__env->ReleaseStringUTFChars(dataName_j, (const char *)dataName_ch);
					#else
					const ev_wchar* dataName_ch = (const ev_wchar*)__env->GetStringChars(dataName_j,JNI_FALSE);
					const EVString dataName = dataName_ch;
					__env->ReleaseStringChars(dataName_j, (const jchar *)dataName_ch);
					#endif
					EarthView::World::Spatial::Convertor::CDataExchange2D *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjXXXX;
					pObjectX->setDestSource(ref_dataSource, dataName);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchange2D_setDestSource_1IPropertySet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pPropettySet_j)
				{
					EarthView::World::Spatial::GeoDataset::IPropertySet *pPropettySet = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pPropettySet_j;
					EarthView::World::Spatial::Convertor::CDataExchange2D *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjXXXX;
					pObjectX->setDestSource(pPropettySet);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_convertor_DataExchange2D_getDestFormat_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Convertor::CDataExchange2D *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjXXXX;
					const EVString __values1 = pObjectX->getDestFormat();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_convertor_DataExchange2D_getSrcName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Convertor::CDataExchange2D *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjXXXX;
					const EVString __values1 = pObjectX->getSrcName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_convertor_DataExchange2D_getDestname_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Convertor::CDataExchange2D *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjXXXX;
					const EVString __values1 = pObjectX->getDestname();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_convertor_DataExchange2D_getSrcPath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Convertor::CDataExchange2D *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjXXXX;
					const EVString __values1 = pObjectX->getSrcPath();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_convertor_DataExchange2D_getDestPath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Convertor::CDataExchange2D *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjXXXX;
					const EVString __values1 = pObjectX->getDestPath();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_convertor_DataExchange2D_getSrcDataName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Convertor::CDataExchange2D *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjXXXX;
					const EVString __values1 = pObjectX->getSrcDataName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_convertor_DataExchange2D_getDestDataName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Convertor::CDataExchange2D *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjXXXX;
					const EVString __values1 = pObjectX->getDestDataName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchange2D_setDataExchangeParam_1CDataExchangeParam(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong param_j)
				{
					EarthView::World::Spatial::Convertor::CDataExchangeParam *param = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) param_j;
					EarthView::World::Spatial::Convertor::CDataExchange2D *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjXXXX;
					pObjectX->setDataExchangeParam(param);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_convertor_DataExchange2D_getDataExchangeParam_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Convertor::CDataExchange2D *pObjectX = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjXXXX;
					EarthView::World::Spatial::Convertor::CDataExchangeParam* __values1 = pObjectX->getDataExchangeParam();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchange2D_register_1setSrcDataDriver_1CDataDriver(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataExchange2DProxy *pObjectX = (JCDataExchange2DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSrcDataDriver_CDataDriver_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSrcDataDriver_CDataDriver_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchange2D_register_1setDestDataDriver_1CDataDriver(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataExchange2DProxy *pObjectX = (JCDataExchange2DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDestDataDriver_CDataDriver_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDestDataDriver_CDataDriver_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchange2D_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataExchange2DProxy *pObjectX = (JCDataExchange2DProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchange2D_register_1setListener_1IDataExchangeListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataExchange2DProxy *pObjectX = (JCDataExchange2DProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataExchange2D_register_1getListener_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataExchange2DProxy *pObjectX = (JCDataExchange2DProxy*) pObjXXXX;
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
