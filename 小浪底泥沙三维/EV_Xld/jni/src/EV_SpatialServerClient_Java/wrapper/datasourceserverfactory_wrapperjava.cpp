/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/datasourceserverfactory.h"
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
			class JCDataSourceServerFactoryProxy : public EarthView::World::Spatial::CDataSourceServerFactory
			{
			 private:
				EarthView::World::Core::ev_string m_open_CServerConnection_callback;
				EarthView::World::Core::ev_string m_getType_void_callback;
				EarthView::World::Core::ev_string m_createFromXML_EVString_callback;
				EarthView::World::Core::ev_string m_openDataSource_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_openDataSource_IPropertySet_callback;
				EarthView::World::Core::ev_string m_createDataSource_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_createDataSource_IPropertySet_callback;
				EarthView::World::Core::ev_string m_destroyDataSource_IDataSource_callback;
				EarthView::World::Core::ev_string m_existDataSource_IDataSource_callback;
			public:
				JCDataSourceServerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CDataSourceServerFactory(pList)
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
				void register_open_CServerConnection_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_open_CServerConnection_callback = __method;
				}
				void register_getType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getType_void_callback = __method;
				}
				void register_createFromXML_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createFromXML_EVString_callback = __method;
				}
				void register_openDataSource_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_openDataSource_EVString_EVString_callback = __method;
				}
				void register_openDataSource_IPropertySet_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_openDataSource_IPropertySet_callback = __method;
				}
				void register_createDataSource_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createDataSource_EVString_EVString_callback = __method;
				}
				void register_createDataSource_IPropertySet_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createDataSource_IPropertySet_callback = __method;
				}
				void register_destroyDataSource_IDataSource_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyDataSource_IDataSource_callback = __method;
				}
				void register_existDataSource_IDataSource_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_existDataSource_IDataSource_callback = __method;
				}
				virtual void destroyDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource)
				{
					if (this->_gRef != NULL && this->m_destroyDataSource_IDataSource_callback != "" && this->isCustomExtend())
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
						jlong pDataSource_j = (jlong) pDataSource;
						jmethodID __method = __gr->getMethod("destroyDataSource_IDataSource_callback");
						__env->CallVoidMethod(__obj, __method , pDataSource_j);
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
						return this->CDataSourceServerFactory::destroyDataSource(pDataSource);
					}
				}
				virtual ev_int32 getType() const
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
						ev_int32 __values1 = (ev_int32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDataSourceServerFactory::getType();
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* createFromXML(const EVString& xml)
				{
					if (this->_gRef != NULL && this->m_createFromXML_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring xml_wch = xml;
						jstring xml_j = __env->NewString((const jchar*)xml_wch.getString(), xml_wch.size());
						jmethodID __method = __gr->getMethod("createFromXML_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , xml_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDataSourceServerFactory::createFromXML(xml);
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* open(const EarthView::World::Spatial::CServerConnection* connection)
				{
					if (this->_gRef != NULL && this->m_open_CServerConnection_callback != "" && this->isCustomExtend())
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
						jlong connection_j = (jlong) connection;
						jmethodID __method = __gr->getMethod("open_CServerConnection_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , connection_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDataSourceServerFactory::open(connection);
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* createDataSource(EarthView::World::Spatial::GeoDataset::IPropertySet* connection)
				{
					if (this->_gRef != NULL && this->m_createDataSource_IPropertySet_callback != "" && this->isCustomExtend())
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
						jlong connection_j = (jlong) connection;
						jmethodID __method = __gr->getMethod("createDataSource_IPropertySet_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , connection_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDataSourceServerFactory::createDataSource(connection);
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(const EVString& path, const EVString& fileName)
				{
					if (this->_gRef != NULL && this->m_openDataSource_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring path_wch = path;
						jstring path_j = __env->NewString((const jchar*)path_wch.getString(), path_wch.size());
						EarthView::World::Core::ev_wstring fileName_wch = fileName;
						jstring fileName_j = __env->NewString((const jchar*)fileName_wch.getString(), fileName_wch.size());
						jmethodID __method = __gr->getMethod("openDataSource_EVString_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , path_j, fileName_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDataSourceServerFactory::openDataSource(path, fileName);
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(EarthView::World::Spatial::GeoDataset::IPropertySet* connection)
				{
					if (this->_gRef != NULL && this->m_openDataSource_IPropertySet_callback != "" && this->isCustomExtend())
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
						jlong connection_j = (jlong) connection;
						jmethodID __method = __gr->getMethod("openDataSource_IPropertySet_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , connection_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDataSourceServerFactory::openDataSource(connection);
					}
				}
				virtual ev_bool existDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource) const
				{
					if (this->_gRef != NULL && this->m_existDataSource_IDataSource_callback != "" && this->isCustomExtend())
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
						jlong pDataSource_j = (jlong) pDataSource;
						jmethodID __method = __gr->getMethod("existDataSource_IDataSource_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pDataSource_j);
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
						return this->CDataSourceServerFactory::existDataSource(pDataSource);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDataSourceServerFactoryProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_DataSourceServerFactory_close_1IDataSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong server_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *server = (const EarthView::World::Spatial::GeoDataset::IDataSource*) server_j;
				EarthView::World::Spatial::CDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::CDataSourceServerFactory*) pObjXXXX;
				ev_bool __values1 = pObjectX->close(server);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_DataSourceServerFactory_destroyDataSource_1IDataSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataSource_j)
			{
				EarthView::World::Spatial::GeoDataset::IDataSource *pDataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) pDataSource_j;
				EarthView::World::Spatial::CDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::CDataSourceServerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataSourceServerFactoryProxy))
				{
					pObjectX->EarthView::World::Spatial::CDataSourceServerFactory::destroyDataSource(pDataSource);
				}
				else
				{
					pObjectX->destroyDataSource(pDataSource);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_DataSourceServerFactory_register_1destroyDataSource_1IDataSource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataSourceServerFactoryProxy *pObjectX = (JCDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyDataSource_IDataSource_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyDataSource_IDataSource_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_DataSourceServerFactory_destroyDataSource_1IDataSource_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataSource_j)
			{
				EarthView::World::Spatial::GeoDataset::IDataSource *pDataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) pDataSource_j;
				EarthView::World::Spatial::CDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::CDataSourceServerFactory*) pObjXXXX;
				pObjectX->EarthView::World::Spatial::CDataSourceServerFactory::destroyDataSource(pDataSource);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_DataSourceServerFactory_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::CDataSourceServerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataSourceServerFactoryProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::CDataSourceServerFactory::getType();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getType();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_DataSourceServerFactory_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataSourceServerFactoryProxy *pObjectX = (JCDataSourceServerFactoryProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_DataSourceServerFactory_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::CDataSourceServerFactory*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::World::Spatial::CDataSourceServerFactory::getType();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_DataSourceServerFactory_createFromXML_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring xml_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* xml_ch = (const ev_char*)__env->GetStringUTFChars(xml_j,JNI_FALSE);
				const EVString xml = xml_ch;
				__env->ReleaseStringUTFChars(xml_j, (const char *)xml_ch);
				#else
				const ev_wchar* xml_ch = (const ev_wchar*)__env->GetStringChars(xml_j,JNI_FALSE);
				const EVString xml = xml_ch;
				__env->ReleaseStringChars(xml_j, (const jchar *)xml_ch);
				#endif
				EarthView::World::Spatial::CDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::CDataSourceServerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataSourceServerFactoryProxy))
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::CDataSourceServerFactory::createFromXML(xml);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->createFromXML(xml);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_DataSourceServerFactory_register_1createFromXML_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataSourceServerFactoryProxy *pObjectX = (JCDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createFromXML_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createFromXML_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_DataSourceServerFactory_createFromXML_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring xml_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* xml_ch = (const ev_char*)__env->GetStringUTFChars(xml_j,JNI_FALSE);
				const EVString xml = xml_ch;
				__env->ReleaseStringUTFChars(xml_j, (const char *)xml_ch);
				#else
				const ev_wchar* xml_ch = (const ev_wchar*)__env->GetStringChars(xml_j,JNI_FALSE);
				const EVString xml = xml_ch;
				__env->ReleaseStringChars(xml_j, (const jchar *)xml_ch);
				#endif
				EarthView::World::Spatial::CDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::CDataSourceServerFactory*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::CDataSourceServerFactory::createFromXML(xml);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_DataSourceServerFactory_open_1CServerConnection(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong connection_j)
			{
				const EarthView::World::Spatial::CServerConnection *connection = (const EarthView::World::Spatial::CServerConnection*) connection_j;
				EarthView::World::Spatial::CDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::CDataSourceServerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataSourceServerFactoryProxy))
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::CDataSourceServerFactory::open(connection);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->open(connection);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_DataSourceServerFactory_register_1open_1CServerConnection(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataSourceServerFactoryProxy *pObjectX = (JCDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_open_CServerConnection_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"open_CServerConnection_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_DataSourceServerFactory_open_1CServerConnection_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong connection_j)
			{
				const EarthView::World::Spatial::CServerConnection *connection = (const EarthView::World::Spatial::CServerConnection*) connection_j;
				EarthView::World::Spatial::CDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::CDataSourceServerFactory*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::CDataSourceServerFactory::open(connection);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_DataSourceServerFactory_createDataSource_1IPropertySet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong connection_j)
			{
				EarthView::World::Spatial::GeoDataset::IPropertySet *connection = (EarthView::World::Spatial::GeoDataset::IPropertySet*) connection_j;
				EarthView::World::Spatial::CDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::CDataSourceServerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataSourceServerFactoryProxy))
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::CDataSourceServerFactory::createDataSource(connection);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->createDataSource(connection);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_DataSourceServerFactory_register_1createDataSource_1IPropertySet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataSourceServerFactoryProxy *pObjectX = (JCDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createDataSource_IPropertySet_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createDataSource_IPropertySet_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_DataSourceServerFactory_createDataSource_1IPropertySet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong connection_j)
			{
				EarthView::World::Spatial::GeoDataset::IPropertySet *connection = (EarthView::World::Spatial::GeoDataset::IPropertySet*) connection_j;
				EarthView::World::Spatial::CDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::CDataSourceServerFactory*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::CDataSourceServerFactory::createDataSource(connection);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_DataSourceServerFactory_getInstance_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Spatial::CDataSourceServerFactory* __values1 = EarthView::World::Spatial::CDataSourceServerFactory::getInstance();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_DataSourceServerFactory_register_1openDataSource_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataSourceServerFactoryProxy *pObjectX = (JCDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_openDataSource_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"openDataSource_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_DataSourceServerFactory_register_1openDataSource_1IPropertySet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataSourceServerFactoryProxy *pObjectX = (JCDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_openDataSource_IPropertySet_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"openDataSource_IPropertySet_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_DataSourceServerFactory_register_1createDataSource_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataSourceServerFactoryProxy *pObjectX = (JCDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createDataSource_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createDataSource_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_DataSourceServerFactory_register_1existDataSource_1IDataSource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataSourceServerFactoryProxy *pObjectX = (JCDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_existDataSource_IDataSource_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"existDataSource_IDataSource_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCOGCWMSDataSourceServerFactoryProxy : public EarthView::World::Spatial::COGCWMSDataSourceServerFactory
			{
			 private:
				EarthView::World::Core::ev_string m_open_CServerConnection_callback;
				EarthView::World::Core::ev_string m_getType_void_callback;
				EarthView::World::Core::ev_string m_createFromXML_EVString_callback;
				EarthView::World::Core::ev_string m_openDataSource_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_openDataSource_IPropertySet_callback;
				EarthView::World::Core::ev_string m_createDataSource_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_createDataSource_IPropertySet_callback;
				EarthView::World::Core::ev_string m_destroyDataSource_IDataSource_callback;
				EarthView::World::Core::ev_string m_existDataSource_IDataSource_callback;
			public:
				JCOGCWMSDataSourceServerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : COGCWMSDataSourceServerFactory(pList)
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
				void register_open_CServerConnection_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_open_CServerConnection_callback = __method;
				}
				void register_getType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getType_void_callback = __method;
				}
				void register_createFromXML_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createFromXML_EVString_callback = __method;
				}
				void register_openDataSource_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_openDataSource_EVString_EVString_callback = __method;
				}
				void register_openDataSource_IPropertySet_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_openDataSource_IPropertySet_callback = __method;
				}
				void register_createDataSource_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createDataSource_EVString_EVString_callback = __method;
				}
				void register_createDataSource_IPropertySet_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createDataSource_IPropertySet_callback = __method;
				}
				void register_destroyDataSource_IDataSource_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyDataSource_IDataSource_callback = __method;
				}
				void register_existDataSource_IDataSource_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_existDataSource_IDataSource_callback = __method;
				}
				virtual void destroyDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource)
				{
					if (this->_gRef != NULL && this->m_destroyDataSource_IDataSource_callback != "" && this->isCustomExtend())
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
						jlong pDataSource_j = (jlong) pDataSource;
						jmethodID __method = __gr->getMethod("destroyDataSource_IDataSource_callback");
						__env->CallVoidMethod(__obj, __method , pDataSource_j);
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
						return this->COGCWMSDataSourceServerFactory::destroyDataSource(pDataSource);
					}
				}
				virtual ev_int32 getType() const
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
						ev_int32 __values1 = (ev_int32) __values1_j;
						return __values1;
					}
					else
					{
						return this->COGCWMSDataSourceServerFactory::getType();
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* createFromXML(const EVString& xml)
				{
					if (this->_gRef != NULL && this->m_createFromXML_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring xml_wch = xml;
						jstring xml_j = __env->NewString((const jchar*)xml_wch.getString(), xml_wch.size());
						jmethodID __method = __gr->getMethod("createFromXML_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , xml_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
						return __values1;
					}
					else
					{
						return this->COGCWMSDataSourceServerFactory::createFromXML(xml);
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* open(const EarthView::World::Spatial::CServerConnection* connection)
				{
					if (this->_gRef != NULL && this->m_open_CServerConnection_callback != "" && this->isCustomExtend())
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
						jlong connection_j = (jlong) connection;
						jmethodID __method = __gr->getMethod("open_CServerConnection_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , connection_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
						return __values1;
					}
					else
					{
						return this->COGCWMSDataSourceServerFactory::open(connection);
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* createDataSource(EarthView::World::Spatial::GeoDataset::IPropertySet* connection)
				{
					if (this->_gRef != NULL && this->m_createDataSource_IPropertySet_callback != "" && this->isCustomExtend())
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
						jlong connection_j = (jlong) connection;
						jmethodID __method = __gr->getMethod("createDataSource_IPropertySet_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , connection_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
						return __values1;
					}
					else
					{
						return this->COGCWMSDataSourceServerFactory::createDataSource(connection);
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(const EVString& path, const EVString& fileName)
				{
					if (this->_gRef != NULL && this->m_openDataSource_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring path_wch = path;
						jstring path_j = __env->NewString((const jchar*)path_wch.getString(), path_wch.size());
						EarthView::World::Core::ev_wstring fileName_wch = fileName;
						jstring fileName_j = __env->NewString((const jchar*)fileName_wch.getString(), fileName_wch.size());
						jmethodID __method = __gr->getMethod("openDataSource_EVString_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , path_j, fileName_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
						return __values1;
					}
					else
					{
						return this->COGCWMSDataSourceServerFactory::openDataSource(path, fileName);
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(EarthView::World::Spatial::GeoDataset::IPropertySet* connection)
				{
					if (this->_gRef != NULL && this->m_openDataSource_IPropertySet_callback != "" && this->isCustomExtend())
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
						jlong connection_j = (jlong) connection;
						jmethodID __method = __gr->getMethod("openDataSource_IPropertySet_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , connection_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
						return __values1;
					}
					else
					{
						return this->COGCWMSDataSourceServerFactory::openDataSource(connection);
					}
				}
				virtual ev_bool existDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource) const
				{
					if (this->_gRef != NULL && this->m_existDataSource_IDataSource_callback != "" && this->isCustomExtend())
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
						jlong pDataSource_j = (jlong) pDataSource;
						jmethodID __method = __gr->getMethod("existDataSource_IDataSource_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pDataSource_j);
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
						return this->COGCWMSDataSourceServerFactory::existDataSource(pDataSource);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCOGCWMSDataSourceServerFactoryProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Ogcwmsdatasourceserverfactory_close_1IDataSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong server_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *server = (const EarthView::World::Spatial::GeoDataset::IDataSource*) server_j;
				EarthView::World::Spatial::COGCWMSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjXXXX;
				ev_bool __values1 = pObjectX->close(server);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsdatasourceserverfactory_destroyDataSource_1IDataSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataSource_j)
			{
				EarthView::World::Spatial::GeoDataset::IDataSource *pDataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) pDataSource_j;
				EarthView::World::Spatial::COGCWMSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOGCWMSDataSourceServerFactoryProxy))
				{
					pObjectX->EarthView::World::Spatial::COGCWMSDataSourceServerFactory::destroyDataSource(pDataSource);
				}
				else
				{
					pObjectX->destroyDataSource(pDataSource);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsdatasourceserverfactory_register_1destroyDataSource_1IDataSource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWMSDataSourceServerFactoryProxy *pObjectX = (JCOGCWMSDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyDataSource_IDataSource_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyDataSource_IDataSource_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsdatasourceserverfactory_destroyDataSource_1IDataSource_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataSource_j)
			{
				EarthView::World::Spatial::GeoDataset::IDataSource *pDataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) pDataSource_j;
				EarthView::World::Spatial::COGCWMSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjXXXX;
				pObjectX->EarthView::World::Spatial::COGCWMSDataSourceServerFactory::destroyDataSource(pDataSource);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Ogcwmsdatasourceserverfactory_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOGCWMSDataSourceServerFactoryProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::COGCWMSDataSourceServerFactory::getType();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getType();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsdatasourceserverfactory_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWMSDataSourceServerFactoryProxy *pObjectX = (JCOGCWMSDataSourceServerFactoryProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Ogcwmsdatasourceserverfactory_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::World::Spatial::COGCWMSDataSourceServerFactory::getType();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsdatasourceserverfactory_createFromXML_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring xml_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* xml_ch = (const ev_char*)__env->GetStringUTFChars(xml_j,JNI_FALSE);
				const EVString xml = xml_ch;
				__env->ReleaseStringUTFChars(xml_j, (const char *)xml_ch);
				#else
				const ev_wchar* xml_ch = (const ev_wchar*)__env->GetStringChars(xml_j,JNI_FALSE);
				const EVString xml = xml_ch;
				__env->ReleaseStringChars(xml_j, (const jchar *)xml_ch);
				#endif
				EarthView::World::Spatial::COGCWMSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOGCWMSDataSourceServerFactoryProxy))
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::COGCWMSDataSourceServerFactory::createFromXML(xml);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->createFromXML(xml);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsdatasourceserverfactory_register_1createFromXML_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWMSDataSourceServerFactoryProxy *pObjectX = (JCOGCWMSDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createFromXML_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createFromXML_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsdatasourceserverfactory_createFromXML_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring xml_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* xml_ch = (const ev_char*)__env->GetStringUTFChars(xml_j,JNI_FALSE);
				const EVString xml = xml_ch;
				__env->ReleaseStringUTFChars(xml_j, (const char *)xml_ch);
				#else
				const ev_wchar* xml_ch = (const ev_wchar*)__env->GetStringChars(xml_j,JNI_FALSE);
				const EVString xml = xml_ch;
				__env->ReleaseStringChars(xml_j, (const jchar *)xml_ch);
				#endif
				EarthView::World::Spatial::COGCWMSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::COGCWMSDataSourceServerFactory::createFromXML(xml);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsdatasourceserverfactory_open_1CServerConnection(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong connection_j)
			{
				const EarthView::World::Spatial::CServerConnection *connection = (const EarthView::World::Spatial::CServerConnection*) connection_j;
				EarthView::World::Spatial::COGCWMSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOGCWMSDataSourceServerFactoryProxy))
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::COGCWMSDataSourceServerFactory::open(connection);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->open(connection);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsdatasourceserverfactory_register_1open_1CServerConnection(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWMSDataSourceServerFactoryProxy *pObjectX = (JCOGCWMSDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_open_CServerConnection_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"open_CServerConnection_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsdatasourceserverfactory_open_1CServerConnection_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong connection_j)
			{
				const EarthView::World::Spatial::CServerConnection *connection = (const EarthView::World::Spatial::CServerConnection*) connection_j;
				EarthView::World::Spatial::COGCWMSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::COGCWMSDataSourceServerFactory::open(connection);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsdatasourceserverfactory_createDataSource_1IPropertySet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong connection_j)
			{
				EarthView::World::Spatial::GeoDataset::IPropertySet *connection = (EarthView::World::Spatial::GeoDataset::IPropertySet*) connection_j;
				EarthView::World::Spatial::COGCWMSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOGCWMSDataSourceServerFactoryProxy))
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::COGCWMSDataSourceServerFactory::createDataSource(connection);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->createDataSource(connection);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsdatasourceserverfactory_register_1createDataSource_1IPropertySet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWMSDataSourceServerFactoryProxy *pObjectX = (JCOGCWMSDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createDataSource_IPropertySet_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createDataSource_IPropertySet_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsdatasourceserverfactory_createDataSource_1IPropertySet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong connection_j)
			{
				EarthView::World::Spatial::GeoDataset::IPropertySet *connection = (EarthView::World::Spatial::GeoDataset::IPropertySet*) connection_j;
				EarthView::World::Spatial::COGCWMSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::COGCWMSDataSourceServerFactory::createDataSource(connection);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsdatasourceserverfactory_getInstance_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Spatial::COGCWMSDataSourceServerFactory* __values1 = EarthView::World::Spatial::COGCWMSDataSourceServerFactory::getInstance();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsdatasourceserverfactory_register_1openDataSource_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWMSDataSourceServerFactoryProxy *pObjectX = (JCOGCWMSDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_openDataSource_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"openDataSource_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsdatasourceserverfactory_register_1openDataSource_1IPropertySet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWMSDataSourceServerFactoryProxy *pObjectX = (JCOGCWMSDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_openDataSource_IPropertySet_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"openDataSource_IPropertySet_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsdatasourceserverfactory_register_1createDataSource_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWMSDataSourceServerFactoryProxy *pObjectX = (JCOGCWMSDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createDataSource_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createDataSource_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsdatasourceserverfactory_register_1existDataSource_1IDataSource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWMSDataSourceServerFactoryProxy *pObjectX = (JCOGCWMSDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_existDataSource_IDataSource_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"existDataSource_IDataSource_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCOGCWMTSDataSourceServerFactoryProxy : public EarthView::World::Spatial::COGCWMTSDataSourceServerFactory
			{
			 private:
				EarthView::World::Core::ev_string m_open_CServerConnection_callback;
				EarthView::World::Core::ev_string m_getType_void_callback;
				EarthView::World::Core::ev_string m_createFromXML_EVString_callback;
				EarthView::World::Core::ev_string m_openDataSource_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_openDataSource_IPropertySet_callback;
				EarthView::World::Core::ev_string m_createDataSource_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_createDataSource_IPropertySet_callback;
				EarthView::World::Core::ev_string m_destroyDataSource_IDataSource_callback;
				EarthView::World::Core::ev_string m_existDataSource_IDataSource_callback;
			public:
				JCOGCWMTSDataSourceServerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : COGCWMTSDataSourceServerFactory(pList)
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
				void register_open_CServerConnection_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_open_CServerConnection_callback = __method;
				}
				void register_getType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getType_void_callback = __method;
				}
				void register_createFromXML_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createFromXML_EVString_callback = __method;
				}
				void register_openDataSource_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_openDataSource_EVString_EVString_callback = __method;
				}
				void register_openDataSource_IPropertySet_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_openDataSource_IPropertySet_callback = __method;
				}
				void register_createDataSource_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createDataSource_EVString_EVString_callback = __method;
				}
				void register_createDataSource_IPropertySet_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createDataSource_IPropertySet_callback = __method;
				}
				void register_destroyDataSource_IDataSource_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyDataSource_IDataSource_callback = __method;
				}
				void register_existDataSource_IDataSource_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_existDataSource_IDataSource_callback = __method;
				}
				virtual void destroyDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource)
				{
					if (this->_gRef != NULL && this->m_destroyDataSource_IDataSource_callback != "" && this->isCustomExtend())
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
						jlong pDataSource_j = (jlong) pDataSource;
						jmethodID __method = __gr->getMethod("destroyDataSource_IDataSource_callback");
						__env->CallVoidMethod(__obj, __method , pDataSource_j);
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
						return this->COGCWMTSDataSourceServerFactory::destroyDataSource(pDataSource);
					}
				}
				virtual ev_int32 getType() const
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
						ev_int32 __values1 = (ev_int32) __values1_j;
						return __values1;
					}
					else
					{
						return this->COGCWMTSDataSourceServerFactory::getType();
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* createFromXML(const EVString& xml)
				{
					if (this->_gRef != NULL && this->m_createFromXML_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring xml_wch = xml;
						jstring xml_j = __env->NewString((const jchar*)xml_wch.getString(), xml_wch.size());
						jmethodID __method = __gr->getMethod("createFromXML_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , xml_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
						return __values1;
					}
					else
					{
						return this->COGCWMTSDataSourceServerFactory::createFromXML(xml);
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* open(const EarthView::World::Spatial::CServerConnection* connection)
				{
					if (this->_gRef != NULL && this->m_open_CServerConnection_callback != "" && this->isCustomExtend())
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
						jlong connection_j = (jlong) connection;
						jmethodID __method = __gr->getMethod("open_CServerConnection_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , connection_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
						return __values1;
					}
					else
					{
						return this->COGCWMTSDataSourceServerFactory::open(connection);
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* createDataSource(EarthView::World::Spatial::GeoDataset::IPropertySet* connection)
				{
					if (this->_gRef != NULL && this->m_createDataSource_IPropertySet_callback != "" && this->isCustomExtend())
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
						jlong connection_j = (jlong) connection;
						jmethodID __method = __gr->getMethod("createDataSource_IPropertySet_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , connection_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
						return __values1;
					}
					else
					{
						return this->COGCWMTSDataSourceServerFactory::createDataSource(connection);
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(const EVString& path, const EVString& fileName)
				{
					if (this->_gRef != NULL && this->m_openDataSource_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring path_wch = path;
						jstring path_j = __env->NewString((const jchar*)path_wch.getString(), path_wch.size());
						EarthView::World::Core::ev_wstring fileName_wch = fileName;
						jstring fileName_j = __env->NewString((const jchar*)fileName_wch.getString(), fileName_wch.size());
						jmethodID __method = __gr->getMethod("openDataSource_EVString_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , path_j, fileName_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
						return __values1;
					}
					else
					{
						return this->COGCWMTSDataSourceServerFactory::openDataSource(path, fileName);
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(EarthView::World::Spatial::GeoDataset::IPropertySet* connection)
				{
					if (this->_gRef != NULL && this->m_openDataSource_IPropertySet_callback != "" && this->isCustomExtend())
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
						jlong connection_j = (jlong) connection;
						jmethodID __method = __gr->getMethod("openDataSource_IPropertySet_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , connection_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
						return __values1;
					}
					else
					{
						return this->COGCWMTSDataSourceServerFactory::openDataSource(connection);
					}
				}
				virtual ev_bool existDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource) const
				{
					if (this->_gRef != NULL && this->m_existDataSource_IDataSource_callback != "" && this->isCustomExtend())
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
						jlong pDataSource_j = (jlong) pDataSource;
						jmethodID __method = __gr->getMethod("existDataSource_IDataSource_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pDataSource_j);
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
						return this->COGCWMTSDataSourceServerFactory::existDataSource(pDataSource);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCOGCWMTSDataSourceServerFactoryProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Ogcwmtsdatasourceserverfactory_close_1IDataSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong server_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *server = (const EarthView::World::Spatial::GeoDataset::IDataSource*) server_j;
				EarthView::World::Spatial::COGCWMTSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjXXXX;
				ev_bool __values1 = pObjectX->close(server);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmtsdatasourceserverfactory_destroyDataSource_1IDataSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataSource_j)
			{
				EarthView::World::Spatial::GeoDataset::IDataSource *pDataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) pDataSource_j;
				EarthView::World::Spatial::COGCWMTSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOGCWMTSDataSourceServerFactoryProxy))
				{
					pObjectX->EarthView::World::Spatial::COGCWMTSDataSourceServerFactory::destroyDataSource(pDataSource);
				}
				else
				{
					pObjectX->destroyDataSource(pDataSource);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmtsdatasourceserverfactory_register_1destroyDataSource_1IDataSource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWMTSDataSourceServerFactoryProxy *pObjectX = (JCOGCWMTSDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyDataSource_IDataSource_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyDataSource_IDataSource_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmtsdatasourceserverfactory_destroyDataSource_1IDataSource_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataSource_j)
			{
				EarthView::World::Spatial::GeoDataset::IDataSource *pDataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) pDataSource_j;
				EarthView::World::Spatial::COGCWMTSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjXXXX;
				pObjectX->EarthView::World::Spatial::COGCWMTSDataSourceServerFactory::destroyDataSource(pDataSource);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Ogcwmtsdatasourceserverfactory_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMTSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOGCWMTSDataSourceServerFactoryProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::COGCWMTSDataSourceServerFactory::getType();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getType();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmtsdatasourceserverfactory_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWMTSDataSourceServerFactoryProxy *pObjectX = (JCOGCWMTSDataSourceServerFactoryProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Ogcwmtsdatasourceserverfactory_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMTSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::World::Spatial::COGCWMTSDataSourceServerFactory::getType();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtsdatasourceserverfactory_createFromXML_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring xml_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* xml_ch = (const ev_char*)__env->GetStringUTFChars(xml_j,JNI_FALSE);
				const EVString xml = xml_ch;
				__env->ReleaseStringUTFChars(xml_j, (const char *)xml_ch);
				#else
				const ev_wchar* xml_ch = (const ev_wchar*)__env->GetStringChars(xml_j,JNI_FALSE);
				const EVString xml = xml_ch;
				__env->ReleaseStringChars(xml_j, (const jchar *)xml_ch);
				#endif
				EarthView::World::Spatial::COGCWMTSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOGCWMTSDataSourceServerFactoryProxy))
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::COGCWMTSDataSourceServerFactory::createFromXML(xml);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->createFromXML(xml);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmtsdatasourceserverfactory_register_1createFromXML_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWMTSDataSourceServerFactoryProxy *pObjectX = (JCOGCWMTSDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createFromXML_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createFromXML_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtsdatasourceserverfactory_createFromXML_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring xml_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* xml_ch = (const ev_char*)__env->GetStringUTFChars(xml_j,JNI_FALSE);
				const EVString xml = xml_ch;
				__env->ReleaseStringUTFChars(xml_j, (const char *)xml_ch);
				#else
				const ev_wchar* xml_ch = (const ev_wchar*)__env->GetStringChars(xml_j,JNI_FALSE);
				const EVString xml = xml_ch;
				__env->ReleaseStringChars(xml_j, (const jchar *)xml_ch);
				#endif
				EarthView::World::Spatial::COGCWMTSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::COGCWMTSDataSourceServerFactory::createFromXML(xml);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtsdatasourceserverfactory_open_1CServerConnection(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong connection_j)
			{
				const EarthView::World::Spatial::CServerConnection *connection = (const EarthView::World::Spatial::CServerConnection*) connection_j;
				EarthView::World::Spatial::COGCWMTSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOGCWMTSDataSourceServerFactoryProxy))
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::COGCWMTSDataSourceServerFactory::open(connection);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->open(connection);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmtsdatasourceserverfactory_register_1open_1CServerConnection(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWMTSDataSourceServerFactoryProxy *pObjectX = (JCOGCWMTSDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_open_CServerConnection_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"open_CServerConnection_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtsdatasourceserverfactory_open_1CServerConnection_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong connection_j)
			{
				const EarthView::World::Spatial::CServerConnection *connection = (const EarthView::World::Spatial::CServerConnection*) connection_j;
				EarthView::World::Spatial::COGCWMTSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::COGCWMTSDataSourceServerFactory::open(connection);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtsdatasourceserverfactory_createDataSource_1IPropertySet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong connection_j)
			{
				EarthView::World::Spatial::GeoDataset::IPropertySet *connection = (EarthView::World::Spatial::GeoDataset::IPropertySet*) connection_j;
				EarthView::World::Spatial::COGCWMTSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOGCWMTSDataSourceServerFactoryProxy))
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::COGCWMTSDataSourceServerFactory::createDataSource(connection);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->createDataSource(connection);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmtsdatasourceserverfactory_register_1createDataSource_1IPropertySet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWMTSDataSourceServerFactoryProxy *pObjectX = (JCOGCWMTSDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createDataSource_IPropertySet_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createDataSource_IPropertySet_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtsdatasourceserverfactory_createDataSource_1IPropertySet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong connection_j)
			{
				EarthView::World::Spatial::GeoDataset::IPropertySet *connection = (EarthView::World::Spatial::GeoDataset::IPropertySet*) connection_j;
				EarthView::World::Spatial::COGCWMTSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::COGCWMTSDataSourceServerFactory::createDataSource(connection);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtsdatasourceserverfactory_getInstance_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Spatial::COGCWMTSDataSourceServerFactory* __values1 = EarthView::World::Spatial::COGCWMTSDataSourceServerFactory::getInstance();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmtsdatasourceserverfactory_register_1openDataSource_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWMTSDataSourceServerFactoryProxy *pObjectX = (JCOGCWMTSDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_openDataSource_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"openDataSource_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmtsdatasourceserverfactory_register_1openDataSource_1IPropertySet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWMTSDataSourceServerFactoryProxy *pObjectX = (JCOGCWMTSDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_openDataSource_IPropertySet_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"openDataSource_IPropertySet_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmtsdatasourceserverfactory_register_1createDataSource_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWMTSDataSourceServerFactoryProxy *pObjectX = (JCOGCWMTSDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createDataSource_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createDataSource_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmtsdatasourceserverfactory_register_1existDataSource_1IDataSource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWMTSDataSourceServerFactoryProxy *pObjectX = (JCOGCWMTSDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_existDataSource_IDataSource_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"existDataSource_IDataSource_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCOGCWFSDataSourceServerFactoryProxy : public EarthView::World::Spatial::COGCWFSDataSourceServerFactory
			{
			 private:
				EarthView::World::Core::ev_string m_open_CServerConnection_callback;
				EarthView::World::Core::ev_string m_getType_void_callback;
				EarthView::World::Core::ev_string m_createFromXML_EVString_callback;
				EarthView::World::Core::ev_string m_openDataSource_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_openDataSource_IPropertySet_callback;
				EarthView::World::Core::ev_string m_createDataSource_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_createDataSource_IPropertySet_callback;
				EarthView::World::Core::ev_string m_destroyDataSource_IDataSource_callback;
				EarthView::World::Core::ev_string m_existDataSource_IDataSource_callback;
			public:
				JCOGCWFSDataSourceServerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : COGCWFSDataSourceServerFactory(pList)
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
				void register_open_CServerConnection_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_open_CServerConnection_callback = __method;
				}
				void register_getType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getType_void_callback = __method;
				}
				void register_createFromXML_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createFromXML_EVString_callback = __method;
				}
				void register_openDataSource_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_openDataSource_EVString_EVString_callback = __method;
				}
				void register_openDataSource_IPropertySet_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_openDataSource_IPropertySet_callback = __method;
				}
				void register_createDataSource_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createDataSource_EVString_EVString_callback = __method;
				}
				void register_createDataSource_IPropertySet_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createDataSource_IPropertySet_callback = __method;
				}
				void register_destroyDataSource_IDataSource_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyDataSource_IDataSource_callback = __method;
				}
				void register_existDataSource_IDataSource_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_existDataSource_IDataSource_callback = __method;
				}
				virtual void destroyDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource)
				{
					if (this->_gRef != NULL && this->m_destroyDataSource_IDataSource_callback != "" && this->isCustomExtend())
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
						jlong pDataSource_j = (jlong) pDataSource;
						jmethodID __method = __gr->getMethod("destroyDataSource_IDataSource_callback");
						__env->CallVoidMethod(__obj, __method , pDataSource_j);
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
						return this->COGCWFSDataSourceServerFactory::destroyDataSource(pDataSource);
					}
				}
				virtual ev_int32 getType() const
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
						ev_int32 __values1 = (ev_int32) __values1_j;
						return __values1;
					}
					else
					{
						return this->COGCWFSDataSourceServerFactory::getType();
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* createFromXML(const EVString& xml)
				{
					if (this->_gRef != NULL && this->m_createFromXML_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring xml_wch = xml;
						jstring xml_j = __env->NewString((const jchar*)xml_wch.getString(), xml_wch.size());
						jmethodID __method = __gr->getMethod("createFromXML_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , xml_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
						return __values1;
					}
					else
					{
						return this->COGCWFSDataSourceServerFactory::createFromXML(xml);
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* open(const EarthView::World::Spatial::CServerConnection* connection)
				{
					if (this->_gRef != NULL && this->m_open_CServerConnection_callback != "" && this->isCustomExtend())
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
						jlong connection_j = (jlong) connection;
						jmethodID __method = __gr->getMethod("open_CServerConnection_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , connection_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
						return __values1;
					}
					else
					{
						return this->COGCWFSDataSourceServerFactory::open(connection);
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* createDataSource(EarthView::World::Spatial::GeoDataset::IPropertySet* connection)
				{
					if (this->_gRef != NULL && this->m_createDataSource_IPropertySet_callback != "" && this->isCustomExtend())
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
						jlong connection_j = (jlong) connection;
						jmethodID __method = __gr->getMethod("createDataSource_IPropertySet_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , connection_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
						return __values1;
					}
					else
					{
						return this->COGCWFSDataSourceServerFactory::createDataSource(connection);
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(const EVString& path, const EVString& fileName)
				{
					if (this->_gRef != NULL && this->m_openDataSource_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring path_wch = path;
						jstring path_j = __env->NewString((const jchar*)path_wch.getString(), path_wch.size());
						EarthView::World::Core::ev_wstring fileName_wch = fileName;
						jstring fileName_j = __env->NewString((const jchar*)fileName_wch.getString(), fileName_wch.size());
						jmethodID __method = __gr->getMethod("openDataSource_EVString_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , path_j, fileName_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
						return __values1;
					}
					else
					{
						return this->COGCWFSDataSourceServerFactory::openDataSource(path, fileName);
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(EarthView::World::Spatial::GeoDataset::IPropertySet* connection)
				{
					if (this->_gRef != NULL && this->m_openDataSource_IPropertySet_callback != "" && this->isCustomExtend())
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
						jlong connection_j = (jlong) connection;
						jmethodID __method = __gr->getMethod("openDataSource_IPropertySet_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , connection_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
						return __values1;
					}
					else
					{
						return this->COGCWFSDataSourceServerFactory::openDataSource(connection);
					}
				}
				virtual ev_bool existDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource) const
				{
					if (this->_gRef != NULL && this->m_existDataSource_IDataSource_callback != "" && this->isCustomExtend())
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
						jlong pDataSource_j = (jlong) pDataSource;
						jmethodID __method = __gr->getMethod("existDataSource_IDataSource_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pDataSource_j);
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
						return this->COGCWFSDataSourceServerFactory::existDataSource(pDataSource);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCOGCWFSDataSourceServerFactoryProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Ogcwfsdatasourceserverfactory_close_1IDataSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong server_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *server = (const EarthView::World::Spatial::GeoDataset::IDataSource*) server_j;
				EarthView::World::Spatial::COGCWFSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjXXXX;
				ev_bool __values1 = pObjectX->close(server);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwfsdatasourceserverfactory_destroyDataSource_1IDataSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataSource_j)
			{
				EarthView::World::Spatial::GeoDataset::IDataSource *pDataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) pDataSource_j;
				EarthView::World::Spatial::COGCWFSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOGCWFSDataSourceServerFactoryProxy))
				{
					pObjectX->EarthView::World::Spatial::COGCWFSDataSourceServerFactory::destroyDataSource(pDataSource);
				}
				else
				{
					pObjectX->destroyDataSource(pDataSource);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwfsdatasourceserverfactory_register_1destroyDataSource_1IDataSource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWFSDataSourceServerFactoryProxy *pObjectX = (JCOGCWFSDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyDataSource_IDataSource_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyDataSource_IDataSource_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwfsdatasourceserverfactory_destroyDataSource_1IDataSource_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataSource_j)
			{
				EarthView::World::Spatial::GeoDataset::IDataSource *pDataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) pDataSource_j;
				EarthView::World::Spatial::COGCWFSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjXXXX;
				pObjectX->EarthView::World::Spatial::COGCWFSDataSourceServerFactory::destroyDataSource(pDataSource);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Ogcwfsdatasourceserverfactory_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWFSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOGCWFSDataSourceServerFactoryProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::COGCWFSDataSourceServerFactory::getType();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getType();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwfsdatasourceserverfactory_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWFSDataSourceServerFactoryProxy *pObjectX = (JCOGCWFSDataSourceServerFactoryProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Ogcwfsdatasourceserverfactory_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWFSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::World::Spatial::COGCWFSDataSourceServerFactory::getType();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwfsdatasourceserverfactory_createFromXML_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring xml_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* xml_ch = (const ev_char*)__env->GetStringUTFChars(xml_j,JNI_FALSE);
				const EVString xml = xml_ch;
				__env->ReleaseStringUTFChars(xml_j, (const char *)xml_ch);
				#else
				const ev_wchar* xml_ch = (const ev_wchar*)__env->GetStringChars(xml_j,JNI_FALSE);
				const EVString xml = xml_ch;
				__env->ReleaseStringChars(xml_j, (const jchar *)xml_ch);
				#endif
				EarthView::World::Spatial::COGCWFSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOGCWFSDataSourceServerFactoryProxy))
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::COGCWFSDataSourceServerFactory::createFromXML(xml);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->createFromXML(xml);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwfsdatasourceserverfactory_register_1createFromXML_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWFSDataSourceServerFactoryProxy *pObjectX = (JCOGCWFSDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createFromXML_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createFromXML_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwfsdatasourceserverfactory_createFromXML_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring xml_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* xml_ch = (const ev_char*)__env->GetStringUTFChars(xml_j,JNI_FALSE);
				const EVString xml = xml_ch;
				__env->ReleaseStringUTFChars(xml_j, (const char *)xml_ch);
				#else
				const ev_wchar* xml_ch = (const ev_wchar*)__env->GetStringChars(xml_j,JNI_FALSE);
				const EVString xml = xml_ch;
				__env->ReleaseStringChars(xml_j, (const jchar *)xml_ch);
				#endif
				EarthView::World::Spatial::COGCWFSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::COGCWFSDataSourceServerFactory::createFromXML(xml);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwfsdatasourceserverfactory_open_1CServerConnection(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong connection_j)
			{
				const EarthView::World::Spatial::CServerConnection *connection = (const EarthView::World::Spatial::CServerConnection*) connection_j;
				EarthView::World::Spatial::COGCWFSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOGCWFSDataSourceServerFactoryProxy))
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::COGCWFSDataSourceServerFactory::open(connection);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->open(connection);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwfsdatasourceserverfactory_register_1open_1CServerConnection(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWFSDataSourceServerFactoryProxy *pObjectX = (JCOGCWFSDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_open_CServerConnection_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"open_CServerConnection_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwfsdatasourceserverfactory_open_1CServerConnection_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong connection_j)
			{
				const EarthView::World::Spatial::CServerConnection *connection = (const EarthView::World::Spatial::CServerConnection*) connection_j;
				EarthView::World::Spatial::COGCWFSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::COGCWFSDataSourceServerFactory::open(connection);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwfsdatasourceserverfactory_createDataSource_1IPropertySet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong connection_j)
			{
				EarthView::World::Spatial::GeoDataset::IPropertySet *connection = (EarthView::World::Spatial::GeoDataset::IPropertySet*) connection_j;
				EarthView::World::Spatial::COGCWFSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOGCWFSDataSourceServerFactoryProxy))
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::COGCWFSDataSourceServerFactory::createDataSource(connection);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->createDataSource(connection);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwfsdatasourceserverfactory_register_1createDataSource_1IPropertySet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWFSDataSourceServerFactoryProxy *pObjectX = (JCOGCWFSDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createDataSource_IPropertySet_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createDataSource_IPropertySet_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwfsdatasourceserverfactory_createDataSource_1IPropertySet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong connection_j)
			{
				EarthView::World::Spatial::GeoDataset::IPropertySet *connection = (EarthView::World::Spatial::GeoDataset::IPropertySet*) connection_j;
				EarthView::World::Spatial::COGCWFSDataSourceServerFactory *pObjectX = (EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::COGCWFSDataSourceServerFactory::createDataSource(connection);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwfsdatasourceserverfactory_getInstance_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Spatial::COGCWFSDataSourceServerFactory* __values1 = EarthView::World::Spatial::COGCWFSDataSourceServerFactory::getInstance();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwfsdatasourceserverfactory_register_1openDataSource_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWFSDataSourceServerFactoryProxy *pObjectX = (JCOGCWFSDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_openDataSource_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"openDataSource_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwfsdatasourceserverfactory_register_1openDataSource_1IPropertySet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWFSDataSourceServerFactoryProxy *pObjectX = (JCOGCWFSDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_openDataSource_IPropertySet_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"openDataSource_IPropertySet_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwfsdatasourceserverfactory_register_1createDataSource_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWFSDataSourceServerFactoryProxy *pObjectX = (JCOGCWFSDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createDataSource_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createDataSource_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwfsdatasourceserverfactory_register_1existDataSource_1IDataSource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOGCWFSDataSourceServerFactoryProxy *pObjectX = (JCOGCWFSDataSourceServerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_existDataSource_IDataSource_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"existDataSource_IDataSource_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
