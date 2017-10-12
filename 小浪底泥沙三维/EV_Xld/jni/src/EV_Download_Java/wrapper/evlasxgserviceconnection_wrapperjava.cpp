/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "download/evlasxgserviceconnection.h"
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
				class JEVLasXGServiceConnectionProxy : public EarthView::World::Spatial::Download::EVLasXGServiceConnection
				{
				 private:
					EarthView::World::Core::ev_string m_readInitData_EVString_MemoryDataStreamPtr_callback;
					EarthView::World::Core::ev_string m_readTileData_EVString_EVString_MemoryDataStreamPtr_callback;
					EarthView::World::Core::ev_string m_readDem_EVString_EVString_MemoryDataStreamPtr_callback;
					EarthView::World::Core::ev_string m_getWFSMetaData_EVString_CDataMetaInfo_callback;
					EarthView::World::Core::ev_string m_getFields_EVString_CFields_callback;
					EarthView::World::Core::ev_string m_getFeatures_EVString_ev_int32_EVLasFeatureVector_callback;
					EarthView::World::Core::ev_string m_setConnectionImp_ConnectionImp_callback;
					EarthView::World::Core::ev_string m_closeConnect_void_callback;
					EarthView::World::Core::ev_string m_openConnect_void_callback;
				public:
					JEVLasXGServiceConnectionProxy(EarthView::World::Core::CNameValuePairList *pList) : EVLasXGServiceConnection(pList)
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
					void register_readInitData_EVString_MemoryDataStreamPtr_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_readInitData_EVString_MemoryDataStreamPtr_callback = __method;
					}
					void register_readTileData_EVString_EVString_MemoryDataStreamPtr_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_readTileData_EVString_EVString_MemoryDataStreamPtr_callback = __method;
					}
					void register_readDem_EVString_EVString_MemoryDataStreamPtr_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_readDem_EVString_EVString_MemoryDataStreamPtr_callback = __method;
					}
					void register_getWFSMetaData_EVString_CDataMetaInfo_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getWFSMetaData_EVString_CDataMetaInfo_callback = __method;
					}
					void register_getFields_EVString_CFields_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFields_EVString_CFields_callback = __method;
					}
					void register_getFeatures_EVString_ev_int32_EVLasFeatureVector_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFeatures_EVString_ev_int32_EVLasFeatureVector_callback = __method;
					}
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
							return this->EVLasXGServiceConnection::setConnectionImp(ref_pImp);
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
							return this->EVLasXGServiceConnection::closeConnect();
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
							return this->EVLasXGServiceConnection::openConnect();
						}
					}
					virtual ev_int32 readInitData(const EVString& servicename, EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
					{
						if (this->_gRef != NULL && this->m_readInitData_EVString_MemoryDataStreamPtr_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring servicename_wch = servicename;
							jstring servicename_j = __env->NewString((const jchar*)servicename_wch.getString(), servicename_wch.size());
							jlong streamPackage_j = (jlong) &streamPackage;
							jmethodID __method = __gr->getMethod("readInitData_EVString_MemoryDataStreamPtr_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , servicename_j, streamPackage_j);
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
							return this->EVLasXGServiceConnection::readInitData(servicename, streamPackage);
						}
					}
					virtual ev_int32 readTileData(const EVString& servicename, const EVString& url, EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
					{
						if (this->_gRef != NULL && this->m_readTileData_EVString_EVString_MemoryDataStreamPtr_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring servicename_wch = servicename;
							jstring servicename_j = __env->NewString((const jchar*)servicename_wch.getString(), servicename_wch.size());
							EarthView::World::Core::ev_wstring url_wch = url;
							jstring url_j = __env->NewString((const jchar*)url_wch.getString(), url_wch.size());
							jlong streamPackage_j = (jlong) &streamPackage;
							jmethodID __method = __gr->getMethod("readTileData_EVString_EVString_MemoryDataStreamPtr_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , servicename_j, url_j, streamPackage_j);
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
							return this->EVLasXGServiceConnection::readTileData(servicename, url, streamPackage);
						}
					}
					virtual ev_int32 readDem(const EVString& servicename, const EVString& url, EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
					{
						if (this->_gRef != NULL && this->m_readDem_EVString_EVString_MemoryDataStreamPtr_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring servicename_wch = servicename;
							jstring servicename_j = __env->NewString((const jchar*)servicename_wch.getString(), servicename_wch.size());
							EarthView::World::Core::ev_wstring url_wch = url;
							jstring url_j = __env->NewString((const jchar*)url_wch.getString(), url_wch.size());
							jlong streamPackage_j = (jlong) &streamPackage;
							jmethodID __method = __gr->getMethod("readDem_EVString_EVString_MemoryDataStreamPtr_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , servicename_j, url_j, streamPackage_j);
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
							return this->EVLasXGServiceConnection::readDem(servicename, url, streamPackage);
						}
					}
					virtual ev_int32 getWFSMetaData(const EVString& servicename, CDataMetaInfo& metadata)
					{
						if (this->_gRef != NULL && this->m_getWFSMetaData_EVString_CDataMetaInfo_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring servicename_wch = servicename;
							jstring servicename_j = __env->NewString((const jchar*)servicename_wch.getString(), servicename_wch.size());
							jlong metadata_j = (jlong) &metadata;
							jmethodID __method = __gr->getMethod("getWFSMetaData_EVString_CDataMetaInfo_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , servicename_j, metadata_j);
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
							return this->EVLasXGServiceConnection::getWFSMetaData(servicename, metadata);
						}
					}
					virtual ev_int32 getFields(const EVString& servicename, CFields& fields)
					{
						if (this->_gRef != NULL && this->m_getFields_EVString_CFields_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring servicename_wch = servicename;
							jstring servicename_j = __env->NewString((const jchar*)servicename_wch.getString(), servicename_wch.size());
							jlong fields_j = (jlong) &fields;
							jmethodID __method = __gr->getMethod("getFields_EVString_CFields_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , servicename_j, fields_j);
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
							return this->EVLasXGServiceConnection::getFields(servicename, fields);
						}
					}
					virtual ev_int32 getFeatures(const EVString& servicename, ev_int32 type, EarthView::World::Spatial::Download::EVLasFeatureVector& featurevector)
					{
						if (this->_gRef != NULL && this->m_getFeatures_EVString_ev_int32_EVLasFeatureVector_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring servicename_wch = servicename;
							jstring servicename_j = __env->NewString((const jchar*)servicename_wch.getString(), servicename_wch.size());
							jint type_j = (jint) type;
							jlong featurevector_j = (jlong) &featurevector;
							jmethodID __method = __gr->getMethod("getFeatures_EVString_ev_int32_EVLasFeatureVector_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , servicename_j, type_j, featurevector_j);
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
							return this->EVLasXGServiceConnection::getFeatures(servicename, type, featurevector);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JEVLasXGServiceConnectionProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_setConnectionImp_1ConnectionImp(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pImp_j)
				{
					EarthView::World::Spatial::Download::ConnectionImp *ref_pImp = (EarthView::World::Spatial::Download::ConnectionImp*) ref_pImp_j;
					EarthView::World::Spatial::Download::EVLasXGServiceConnection *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JEVLasXGServiceConnectionProxy))
					{
						pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnection::setConnectionImp(ref_pImp);
					}
					else
					{
						pObjectX->setConnectionImp(ref_pImp);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_register_1setConnectionImp_1ConnectionImp(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JEVLasXGServiceConnectionProxy *pObjectX = (JEVLasXGServiceConnectionProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_setConnectionImp_1ConnectionImp_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pImp_j)
				{
					EarthView::World::Spatial::Download::ConnectionImp *ref_pImp = (EarthView::World::Spatial::Download::ConnectionImp*) ref_pImp_j;
					EarthView::World::Spatial::Download::EVLasXGServiceConnection *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnection::setConnectionImp(ref_pImp);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_closeConnect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::EVLasXGServiceConnection *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JEVLasXGServiceConnectionProxy))
					{
						pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnection::closeConnect();
					}
					else
					{
						pObjectX->closeConnect();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_register_1closeConnect_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JEVLasXGServiceConnectionProxy *pObjectX = (JEVLasXGServiceConnectionProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_closeConnect_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::EVLasXGServiceConnection *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnection::closeConnect();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_openConnect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::EVLasXGServiceConnection *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JEVLasXGServiceConnectionProxy))
					{
						pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnection::openConnect();
					}
					else
					{
						pObjectX->openConnect();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_register_1openConnect_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JEVLasXGServiceConnectionProxy *pObjectX = (JEVLasXGServiceConnectionProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_openConnect_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::EVLasXGServiceConnection *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnection::openConnect();
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_readInitData_1EVString_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jlong streamPackage_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					EarthView::World::Core::MemoryDataStreamPtr &streamPackage = *(EarthView::World::Core::MemoryDataStreamPtr*) streamPackage_j;
					EarthView::World::Spatial::Download::EVLasXGServiceConnection *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JEVLasXGServiceConnectionProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnection::readInitData(servicename, streamPackage);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->readInitData(servicename, streamPackage);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_register_1readInitData_1EVString_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JEVLasXGServiceConnectionProxy *pObjectX = (JEVLasXGServiceConnectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_readInitData_EVString_MemoryDataStreamPtr_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"readInitData_EVString_MemoryDataStreamPtr_callback", "(Ljava/lang/String;J)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_readInitData_1EVString_1MemoryDataStreamPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jlong streamPackage_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					EarthView::World::Core::MemoryDataStreamPtr &streamPackage = *(EarthView::World::Core::MemoryDataStreamPtr*) streamPackage_j;
					EarthView::World::Spatial::Download::EVLasXGServiceConnection *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnection::readInitData(servicename, streamPackage);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_readTileData_1EVString_1EVString_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jstring url_j, jlong streamPackage_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* url_ch = (const ev_char*)__env->GetStringUTFChars(url_j,JNI_FALSE);
					const EVString url = url_ch;
					__env->ReleaseStringUTFChars(url_j, (const char *)url_ch);
					#else
					const ev_wchar* url_ch = (const ev_wchar*)__env->GetStringChars(url_j,JNI_FALSE);
					const EVString url = url_ch;
					__env->ReleaseStringChars(url_j, (const jchar *)url_ch);
					#endif
					EarthView::World::Core::MemoryDataStreamPtr &streamPackage = *(EarthView::World::Core::MemoryDataStreamPtr*) streamPackage_j;
					EarthView::World::Spatial::Download::EVLasXGServiceConnection *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JEVLasXGServiceConnectionProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnection::readTileData(servicename, url, streamPackage);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->readTileData(servicename, url, streamPackage);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_register_1readTileData_1EVString_1EVString_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JEVLasXGServiceConnectionProxy *pObjectX = (JEVLasXGServiceConnectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_readTileData_EVString_EVString_MemoryDataStreamPtr_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"readTileData_EVString_EVString_MemoryDataStreamPtr_callback", "(Ljava/lang/String;Ljava/lang/String;J)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_readTileData_1EVString_1EVString_1MemoryDataStreamPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jstring url_j, jlong streamPackage_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* url_ch = (const ev_char*)__env->GetStringUTFChars(url_j,JNI_FALSE);
					const EVString url = url_ch;
					__env->ReleaseStringUTFChars(url_j, (const char *)url_ch);
					#else
					const ev_wchar* url_ch = (const ev_wchar*)__env->GetStringChars(url_j,JNI_FALSE);
					const EVString url = url_ch;
					__env->ReleaseStringChars(url_j, (const jchar *)url_ch);
					#endif
					EarthView::World::Core::MemoryDataStreamPtr &streamPackage = *(EarthView::World::Core::MemoryDataStreamPtr*) streamPackage_j;
					EarthView::World::Spatial::Download::EVLasXGServiceConnection *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnection::readTileData(servicename, url, streamPackage);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_readDem_1EVString_1EVString_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jstring url_j, jlong streamPackage_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* url_ch = (const ev_char*)__env->GetStringUTFChars(url_j,JNI_FALSE);
					const EVString url = url_ch;
					__env->ReleaseStringUTFChars(url_j, (const char *)url_ch);
					#else
					const ev_wchar* url_ch = (const ev_wchar*)__env->GetStringChars(url_j,JNI_FALSE);
					const EVString url = url_ch;
					__env->ReleaseStringChars(url_j, (const jchar *)url_ch);
					#endif
					EarthView::World::Core::MemoryDataStreamPtr &streamPackage = *(EarthView::World::Core::MemoryDataStreamPtr*) streamPackage_j;
					EarthView::World::Spatial::Download::EVLasXGServiceConnection *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JEVLasXGServiceConnectionProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnection::readDem(servicename, url, streamPackage);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->readDem(servicename, url, streamPackage);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_register_1readDem_1EVString_1EVString_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JEVLasXGServiceConnectionProxy *pObjectX = (JEVLasXGServiceConnectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_readDem_EVString_EVString_MemoryDataStreamPtr_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"readDem_EVString_EVString_MemoryDataStreamPtr_callback", "(Ljava/lang/String;Ljava/lang/String;J)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_readDem_1EVString_1EVString_1MemoryDataStreamPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jstring url_j, jlong streamPackage_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* url_ch = (const ev_char*)__env->GetStringUTFChars(url_j,JNI_FALSE);
					const EVString url = url_ch;
					__env->ReleaseStringUTFChars(url_j, (const char *)url_ch);
					#else
					const ev_wchar* url_ch = (const ev_wchar*)__env->GetStringChars(url_j,JNI_FALSE);
					const EVString url = url_ch;
					__env->ReleaseStringChars(url_j, (const jchar *)url_ch);
					#endif
					EarthView::World::Core::MemoryDataStreamPtr &streamPackage = *(EarthView::World::Core::MemoryDataStreamPtr*) streamPackage_j;
					EarthView::World::Spatial::Download::EVLasXGServiceConnection *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnection::readDem(servicename, url, streamPackage);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_getWFSMetaData_1EVString_1CDataMetaInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jlong metadata_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					CDataMetaInfo &metadata = *(CDataMetaInfo*) metadata_j;
					EarthView::World::Spatial::Download::EVLasXGServiceConnection *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JEVLasXGServiceConnectionProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnection::getWFSMetaData(servicename, metadata);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getWFSMetaData(servicename, metadata);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_register_1getWFSMetaData_1EVString_1CDataMetaInfo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JEVLasXGServiceConnectionProxy *pObjectX = (JEVLasXGServiceConnectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getWFSMetaData_EVString_CDataMetaInfo_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getWFSMetaData_EVString_CDataMetaInfo_callback", "(Ljava/lang/String;J)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_getWFSMetaData_1EVString_1CDataMetaInfo_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jlong metadata_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					CDataMetaInfo &metadata = *(CDataMetaInfo*) metadata_j;
					EarthView::World::Spatial::Download::EVLasXGServiceConnection *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnection::getWFSMetaData(servicename, metadata);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_getFields_1EVString_1CFields(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jlong fields_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					CFields &fields = *(CFields*) fields_j;
					EarthView::World::Spatial::Download::EVLasXGServiceConnection *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JEVLasXGServiceConnectionProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnection::getFields(servicename, fields);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getFields(servicename, fields);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_register_1getFields_1EVString_1CFields(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JEVLasXGServiceConnectionProxy *pObjectX = (JEVLasXGServiceConnectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFields_EVString_CFields_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFields_EVString_CFields_callback", "(Ljava/lang/String;J)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_getFields_1EVString_1CFields_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jlong fields_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					CFields &fields = *(CFields*) fields_j;
					EarthView::World::Spatial::Download::EVLasXGServiceConnection *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnection::getFields(servicename, fields);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_getFeatures_1EVString_1ev_1int32_1EVLasFeatureVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jint type_j, jlong featurevector_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					ev_int32 type = (ev_int32) type_j;
					EarthView::World::Spatial::Download::EVLasFeatureVector &featurevector = *(EarthView::World::Spatial::Download::EVLasFeatureVector*) featurevector_j;
					EarthView::World::Spatial::Download::EVLasXGServiceConnection *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JEVLasXGServiceConnectionProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnection::getFeatures(servicename, type, featurevector);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getFeatures(servicename, type, featurevector);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_register_1getFeatures_1EVString_1ev_1int32_1EVLasFeatureVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JEVLasXGServiceConnectionProxy *pObjectX = (JEVLasXGServiceConnectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFeatures_EVString_ev_int32_EVLasFeatureVector_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFeatures_EVString_ev_int32_EVLasFeatureVector_callback", "(Ljava/lang/String;IJ)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnection_getFeatures_1EVString_1ev_1int32_1EVLasFeatureVector_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jint type_j, jlong featurevector_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					ev_int32 type = (ev_int32) type_j;
					EarthView::World::Spatial::Download::EVLasFeatureVector &featurevector = *(EarthView::World::Spatial::Download::EVLasFeatureVector*) featurevector_j;
					EarthView::World::Spatial::Download::EVLasXGServiceConnection *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnection::getFeatures(servicename, type, featurevector);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				class JEVLasXGServiceConnectionImpProxy : public EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp
				{
				 private:
					EarthView::World::Core::ev_string m_readInitData_EVString_MemoryDataStreamPtr_callback;
					EarthView::World::Core::ev_string m_readTileData_EVString_EVString_MemoryDataStreamPtr_callback;
					EarthView::World::Core::ev_string m_readDem_EVString_EVString_MemoryDataStreamPtr_callback;
					EarthView::World::Core::ev_string m_getWFSMetaData_EVString_CDataMetaInfo_callback;
					EarthView::World::Core::ev_string m_getFields_EVString_CFields_callback;
					EarthView::World::Core::ev_string m_getFeatures_EVString_ev_int32_EVLasFeatureVector_callback;
					EarthView::World::Core::ev_string m_openConnection_void_callback;
					EarthView::World::Core::ev_string m_closeConnection_void_callback;
					EarthView::World::Core::ev_string m_setConnectTimeout_ev_int32_callback;
				public:
					JEVLasXGServiceConnectionImpProxy(EarthView::World::Core::CNameValuePairList *pList) : EVLasXGServiceConnectionImp(pList)
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
					void register_readInitData_EVString_MemoryDataStreamPtr_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_readInitData_EVString_MemoryDataStreamPtr_callback = __method;
					}
					void register_readTileData_EVString_EVString_MemoryDataStreamPtr_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_readTileData_EVString_EVString_MemoryDataStreamPtr_callback = __method;
					}
					void register_readDem_EVString_EVString_MemoryDataStreamPtr_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_readDem_EVString_EVString_MemoryDataStreamPtr_callback = __method;
					}
					void register_getWFSMetaData_EVString_CDataMetaInfo_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getWFSMetaData_EVString_CDataMetaInfo_callback = __method;
					}
					void register_getFields_EVString_CFields_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFields_EVString_CFields_callback = __method;
					}
					void register_getFeatures_EVString_ev_int32_EVLasFeatureVector_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFeatures_EVString_ev_int32_EVLasFeatureVector_callback = __method;
					}
					void register_openConnection_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_openConnection_void_callback = __method;
					}
					void register_closeConnection_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_closeConnection_void_callback = __method;
					}
					void register_setConnectTimeout_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setConnectTimeout_ev_int32_callback = __method;
					}
					virtual ev_int32 readInitData(const EVString& servicename, EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
					{
						if (this->_gRef != NULL && this->m_readInitData_EVString_MemoryDataStreamPtr_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring servicename_wch = servicename;
							jstring servicename_j = __env->NewString((const jchar*)servicename_wch.getString(), servicename_wch.size());
							jlong streamPackage_j = (jlong) &streamPackage;
							jmethodID __method = __gr->getMethod("readInitData_EVString_MemoryDataStreamPtr_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , servicename_j, streamPackage_j);
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
							return this->EVLasXGServiceConnectionImp::readInitData(servicename, streamPackage);
						}
					}
					virtual ev_int32 readTileData(const EVString& servicename, const EVString& url, EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
					{
						if (this->_gRef != NULL && this->m_readTileData_EVString_EVString_MemoryDataStreamPtr_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring servicename_wch = servicename;
							jstring servicename_j = __env->NewString((const jchar*)servicename_wch.getString(), servicename_wch.size());
							EarthView::World::Core::ev_wstring url_wch = url;
							jstring url_j = __env->NewString((const jchar*)url_wch.getString(), url_wch.size());
							jlong streamPackage_j = (jlong) &streamPackage;
							jmethodID __method = __gr->getMethod("readTileData_EVString_EVString_MemoryDataStreamPtr_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , servicename_j, url_j, streamPackage_j);
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
							return this->EVLasXGServiceConnectionImp::readTileData(servicename, url, streamPackage);
						}
					}
					virtual ev_int32 readDem(const EVString& servicename, const EVString& levelrowcols, EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
					{
						if (this->_gRef != NULL && this->m_readDem_EVString_EVString_MemoryDataStreamPtr_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring servicename_wch = servicename;
							jstring servicename_j = __env->NewString((const jchar*)servicename_wch.getString(), servicename_wch.size());
							EarthView::World::Core::ev_wstring levelrowcols_wch = levelrowcols;
							jstring levelrowcols_j = __env->NewString((const jchar*)levelrowcols_wch.getString(), levelrowcols_wch.size());
							jlong streamPackage_j = (jlong) &streamPackage;
							jmethodID __method = __gr->getMethod("readDem_EVString_EVString_MemoryDataStreamPtr_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , servicename_j, levelrowcols_j, streamPackage_j);
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
							return this->EVLasXGServiceConnectionImp::readDem(servicename, levelrowcols, streamPackage);
						}
					}
					virtual ev_int32 getWFSMetaData(const EVString& servicename, CDataMetaInfo& metadata)
					{
						if (this->_gRef != NULL && this->m_getWFSMetaData_EVString_CDataMetaInfo_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring servicename_wch = servicename;
							jstring servicename_j = __env->NewString((const jchar*)servicename_wch.getString(), servicename_wch.size());
							jlong metadata_j = (jlong) &metadata;
							jmethodID __method = __gr->getMethod("getWFSMetaData_EVString_CDataMetaInfo_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , servicename_j, metadata_j);
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
							return this->EVLasXGServiceConnectionImp::getWFSMetaData(servicename, metadata);
						}
					}
					virtual ev_int32 getFields(const EVString& servicename, CFields& fields)
					{
						if (this->_gRef != NULL && this->m_getFields_EVString_CFields_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring servicename_wch = servicename;
							jstring servicename_j = __env->NewString((const jchar*)servicename_wch.getString(), servicename_wch.size());
							jlong fields_j = (jlong) &fields;
							jmethodID __method = __gr->getMethod("getFields_EVString_CFields_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , servicename_j, fields_j);
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
							return this->EVLasXGServiceConnectionImp::getFields(servicename, fields);
						}
					}
					virtual ev_int32 getFeatures(const EVString& servicename, ev_int32 type, EarthView::World::Spatial::Download::EVLasFeatureVector& featurevector)
					{
						if (this->_gRef != NULL && this->m_getFeatures_EVString_ev_int32_EVLasFeatureVector_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring servicename_wch = servicename;
							jstring servicename_j = __env->NewString((const jchar*)servicename_wch.getString(), servicename_wch.size());
							jint type_j = (jint) type;
							jlong featurevector_j = (jlong) &featurevector;
							jmethodID __method = __gr->getMethod("getFeatures_EVString_ev_int32_EVLasFeatureVector_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , servicename_j, type_j, featurevector_j);
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
							return this->EVLasXGServiceConnectionImp::getFeatures(servicename, type, featurevector);
						}
					}
					virtual ev_bool openConnection()
					{
						if (this->_gRef != NULL && this->m_openConnection_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("openConnection_void_callback");
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
							return this->EVLasXGServiceConnectionImp::openConnection();
						}
					}
					virtual ev_bool closeConnection()
					{
						if (this->_gRef != NULL && this->m_closeConnection_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("closeConnection_void_callback");
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
							return this->EVLasXGServiceConnectionImp::closeConnection();
						}
					}
					virtual void setConnectTimeout(ev_int32 timeout)
					{
						if (this->_gRef != NULL && this->m_setConnectTimeout_ev_int32_callback != "" && this->isCustomExtend())
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
							jint timeout_j = (jint) timeout;
							jmethodID __method = __gr->getMethod("setConnectTimeout_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , timeout_j);
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
							return this->EVLasXGServiceConnectionImp::setConnectTimeout(timeout);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JEVLasXGServiceConnectionImpProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnectionimp_readInitData_1EVString_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jlong streamPackage_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					EarthView::World::Core::MemoryDataStreamPtr &streamPackage = *(EarthView::World::Core::MemoryDataStreamPtr*) streamPackage_j;
					EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JEVLasXGServiceConnectionImpProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp::readInitData(servicename, streamPackage);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->readInitData(servicename, streamPackage);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnectionimp_register_1readInitData_1EVString_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JEVLasXGServiceConnectionImpProxy *pObjectX = (JEVLasXGServiceConnectionImpProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_readInitData_EVString_MemoryDataStreamPtr_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"readInitData_EVString_MemoryDataStreamPtr_callback", "(Ljava/lang/String;J)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnectionimp_readInitData_1EVString_1MemoryDataStreamPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jlong streamPackage_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					EarthView::World::Core::MemoryDataStreamPtr &streamPackage = *(EarthView::World::Core::MemoryDataStreamPtr*) streamPackage_j;
					EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp::readInitData(servicename, streamPackage);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnectionimp_readTileData_1EVString_1EVString_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jstring url_j, jlong streamPackage_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* url_ch = (const ev_char*)__env->GetStringUTFChars(url_j,JNI_FALSE);
					const EVString url = url_ch;
					__env->ReleaseStringUTFChars(url_j, (const char *)url_ch);
					#else
					const ev_wchar* url_ch = (const ev_wchar*)__env->GetStringChars(url_j,JNI_FALSE);
					const EVString url = url_ch;
					__env->ReleaseStringChars(url_j, (const jchar *)url_ch);
					#endif
					EarthView::World::Core::MemoryDataStreamPtr &streamPackage = *(EarthView::World::Core::MemoryDataStreamPtr*) streamPackage_j;
					EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JEVLasXGServiceConnectionImpProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp::readTileData(servicename, url, streamPackage);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->readTileData(servicename, url, streamPackage);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnectionimp_register_1readTileData_1EVString_1EVString_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JEVLasXGServiceConnectionImpProxy *pObjectX = (JEVLasXGServiceConnectionImpProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_readTileData_EVString_EVString_MemoryDataStreamPtr_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"readTileData_EVString_EVString_MemoryDataStreamPtr_callback", "(Ljava/lang/String;Ljava/lang/String;J)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnectionimp_readTileData_1EVString_1EVString_1MemoryDataStreamPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jstring url_j, jlong streamPackage_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* url_ch = (const ev_char*)__env->GetStringUTFChars(url_j,JNI_FALSE);
					const EVString url = url_ch;
					__env->ReleaseStringUTFChars(url_j, (const char *)url_ch);
					#else
					const ev_wchar* url_ch = (const ev_wchar*)__env->GetStringChars(url_j,JNI_FALSE);
					const EVString url = url_ch;
					__env->ReleaseStringChars(url_j, (const jchar *)url_ch);
					#endif
					EarthView::World::Core::MemoryDataStreamPtr &streamPackage = *(EarthView::World::Core::MemoryDataStreamPtr*) streamPackage_j;
					EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp::readTileData(servicename, url, streamPackage);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnectionimp_readDem_1EVString_1EVString_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jstring levelrowcols_j, jlong streamPackage_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* levelrowcols_ch = (const ev_char*)__env->GetStringUTFChars(levelrowcols_j,JNI_FALSE);
					const EVString levelrowcols = levelrowcols_ch;
					__env->ReleaseStringUTFChars(levelrowcols_j, (const char *)levelrowcols_ch);
					#else
					const ev_wchar* levelrowcols_ch = (const ev_wchar*)__env->GetStringChars(levelrowcols_j,JNI_FALSE);
					const EVString levelrowcols = levelrowcols_ch;
					__env->ReleaseStringChars(levelrowcols_j, (const jchar *)levelrowcols_ch);
					#endif
					EarthView::World::Core::MemoryDataStreamPtr &streamPackage = *(EarthView::World::Core::MemoryDataStreamPtr*) streamPackage_j;
					EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JEVLasXGServiceConnectionImpProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp::readDem(servicename, levelrowcols, streamPackage);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->readDem(servicename, levelrowcols, streamPackage);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnectionimp_register_1readDem_1EVString_1EVString_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JEVLasXGServiceConnectionImpProxy *pObjectX = (JEVLasXGServiceConnectionImpProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_readDem_EVString_EVString_MemoryDataStreamPtr_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"readDem_EVString_EVString_MemoryDataStreamPtr_callback", "(Ljava/lang/String;Ljava/lang/String;J)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnectionimp_readDem_1EVString_1EVString_1MemoryDataStreamPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jstring levelrowcols_j, jlong streamPackage_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* levelrowcols_ch = (const ev_char*)__env->GetStringUTFChars(levelrowcols_j,JNI_FALSE);
					const EVString levelrowcols = levelrowcols_ch;
					__env->ReleaseStringUTFChars(levelrowcols_j, (const char *)levelrowcols_ch);
					#else
					const ev_wchar* levelrowcols_ch = (const ev_wchar*)__env->GetStringChars(levelrowcols_j,JNI_FALSE);
					const EVString levelrowcols = levelrowcols_ch;
					__env->ReleaseStringChars(levelrowcols_j, (const jchar *)levelrowcols_ch);
					#endif
					EarthView::World::Core::MemoryDataStreamPtr &streamPackage = *(EarthView::World::Core::MemoryDataStreamPtr*) streamPackage_j;
					EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp::readDem(servicename, levelrowcols, streamPackage);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnectionimp_getWFSMetaData_1EVString_1CDataMetaInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jlong metadata_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					CDataMetaInfo &metadata = *(CDataMetaInfo*) metadata_j;
					EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JEVLasXGServiceConnectionImpProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp::getWFSMetaData(servicename, metadata);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getWFSMetaData(servicename, metadata);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnectionimp_register_1getWFSMetaData_1EVString_1CDataMetaInfo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JEVLasXGServiceConnectionImpProxy *pObjectX = (JEVLasXGServiceConnectionImpProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getWFSMetaData_EVString_CDataMetaInfo_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getWFSMetaData_EVString_CDataMetaInfo_callback", "(Ljava/lang/String;J)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnectionimp_getWFSMetaData_1EVString_1CDataMetaInfo_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jlong metadata_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					CDataMetaInfo &metadata = *(CDataMetaInfo*) metadata_j;
					EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp::getWFSMetaData(servicename, metadata);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnectionimp_getFields_1EVString_1CFields(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jlong fields_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					CFields &fields = *(CFields*) fields_j;
					EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JEVLasXGServiceConnectionImpProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp::getFields(servicename, fields);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getFields(servicename, fields);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnectionimp_register_1getFields_1EVString_1CFields(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JEVLasXGServiceConnectionImpProxy *pObjectX = (JEVLasXGServiceConnectionImpProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFields_EVString_CFields_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFields_EVString_CFields_callback", "(Ljava/lang/String;J)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnectionimp_getFields_1EVString_1CFields_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jlong fields_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					CFields &fields = *(CFields*) fields_j;
					EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp::getFields(servicename, fields);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnectionimp_getFeatures_1EVString_1ev_1int32_1EVLasFeatureVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jint type_j, jlong featurevector_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					ev_int32 type = (ev_int32) type_j;
					EarthView::World::Spatial::Download::EVLasFeatureVector &featurevector = *(EarthView::World::Spatial::Download::EVLasFeatureVector*) featurevector_j;
					EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JEVLasXGServiceConnectionImpProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp::getFeatures(servicename, type, featurevector);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getFeatures(servicename, type, featurevector);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnectionimp_register_1getFeatures_1EVString_1ev_1int32_1EVLasFeatureVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JEVLasXGServiceConnectionImpProxy *pObjectX = (JEVLasXGServiceConnectionImpProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFeatures_EVString_ev_int32_EVLasFeatureVector_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFeatures_EVString_ev_int32_EVLasFeatureVector_callback", "(Ljava/lang/String;IJ)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnectionimp_getFeatures_1EVString_1ev_1int32_1EVLasFeatureVector_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring servicename_j, jint type_j, jlong featurevector_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* servicename_ch = (const ev_char*)__env->GetStringUTFChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringUTFChars(servicename_j, (const char *)servicename_ch);
					#else
					const ev_wchar* servicename_ch = (const ev_wchar*)__env->GetStringChars(servicename_j,JNI_FALSE);
					const EVString servicename = servicename_ch;
					__env->ReleaseStringChars(servicename_j, (const jchar *)servicename_ch);
					#endif
					ev_int32 type = (ev_int32) type_j;
					EarthView::World::Spatial::Download::EVLasFeatureVector &featurevector = *(EarthView::World::Spatial::Download::EVLasFeatureVector*) featurevector_j;
					EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp *pObjectX = (EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp::getFeatures(servicename, type, featurevector);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnectionimp_register_1openConnection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JEVLasXGServiceConnectionImpProxy *pObjectX = (JEVLasXGServiceConnectionImpProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_openConnection_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"openConnection_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnectionimp_register_1closeConnection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JEVLasXGServiceConnectionImpProxy *pObjectX = (JEVLasXGServiceConnectionImpProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_closeConnection_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"closeConnection_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Evlasxgserviceconnectionimp_register_1setConnectTimeout_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JEVLasXGServiceConnectionImpProxy *pObjectX = (JEVLasXGServiceConnectionImpProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setConnectTimeout_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setConnectTimeout_ev_int32_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
