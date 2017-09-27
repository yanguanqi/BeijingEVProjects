/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/idatasourcefactory.h"
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
			namespace GeoDataset
			{
				class JIDataSourceFactoryProxy : public EarthView::World::Spatial::GeoDataset::IDataSourceFactory
				{
				 private:
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_createFromXML_EVString_callback;
					EarthView::World::Core::ev_string m_openDataSource_EVString_EVString_callback;
					EarthView::World::Core::ev_string m_openDataSource_IPropertySet_callback;
					EarthView::World::Core::ev_string m_createDataSource_EVString_EVString_callback;
					EarthView::World::Core::ev_string m_createDataSource_IPropertySet_callback;
					EarthView::World::Core::ev_string m_destroyDataSource_IDataSource_callback;
					EarthView::World::Core::ev_string m_existDataSource_IDataSource_callback;
				public:
					JIDataSourceFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : IDataSourceFactory(pList)
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
							return this->IDataSourceFactory::getType();
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
							return this->IDataSourceFactory::createFromXML(xml);
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
							return this->IDataSourceFactory::openDataSource(path, fileName);
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
							return this->IDataSourceFactory::openDataSource(connection);
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* createDataSource(const EVString& path, const EVString& fileName)
					{
						if (this->_gRef != NULL && this->m_createDataSource_EVString_EVString_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("createDataSource_EVString_EVString_callback");
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
							return this->IDataSourceFactory::createDataSource(path, fileName);
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
							return this->IDataSourceFactory::createDataSource(connection);
						}
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
							return this->IDataSourceFactory::destroyDataSource(pDataSource);
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
							return this->IDataSourceFactory::existDataSource(pDataSource);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIDataSourceFactoryProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_Idatasourcefactory_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IDataSourceFactory *pObjectX = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDataSourceFactoryProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::getType();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Idatasourcefactory_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDataSourceFactoryProxy *pObjectX = (JIDataSourceFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_Idatasourcefactory_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IDataSourceFactory *pObjectX = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::getType();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Idatasourcefactory_createFromXML_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring xml_j)
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
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory *pObjectX = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDataSourceFactoryProxy))
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::createFromXML(xml);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Idatasourcefactory_register_1createFromXML_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDataSourceFactoryProxy *pObjectX = (JIDataSourceFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Idatasourcefactory_createFromXML_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring xml_j)
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
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory *pObjectX = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::createFromXML(xml);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Idatasourcefactory_openDataSource_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring path_j, jstring fileName_j)
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
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* fileName_ch = (const ev_char*)__env->GetStringUTFChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringUTFChars(fileName_j, (const char *)fileName_ch);
					#else
					const ev_wchar* fileName_ch = (const ev_wchar*)__env->GetStringChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringChars(fileName_j, (const jchar *)fileName_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory *pObjectX = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDataSourceFactoryProxy))
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::openDataSource(path, fileName);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->openDataSource(path, fileName);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Idatasourcefactory_register_1openDataSource_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDataSourceFactoryProxy *pObjectX = (JIDataSourceFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Idatasourcefactory_openDataSource_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring path_j, jstring fileName_j)
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
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* fileName_ch = (const ev_char*)__env->GetStringUTFChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringUTFChars(fileName_j, (const char *)fileName_ch);
					#else
					const ev_wchar* fileName_ch = (const ev_wchar*)__env->GetStringChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringChars(fileName_j, (const jchar *)fileName_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory *pObjectX = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::openDataSource(path, fileName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Idatasourcefactory_openDataSource_1IPropertySet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong connection_j)
				{
					EarthView::World::Spatial::GeoDataset::IPropertySet *connection = (EarthView::World::Spatial::GeoDataset::IPropertySet*) connection_j;
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory *pObjectX = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDataSourceFactoryProxy))
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::openDataSource(connection);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->openDataSource(connection);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Idatasourcefactory_register_1openDataSource_1IPropertySet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDataSourceFactoryProxy *pObjectX = (JIDataSourceFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Idatasourcefactory_openDataSource_1IPropertySet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong connection_j)
				{
					EarthView::World::Spatial::GeoDataset::IPropertySet *connection = (EarthView::World::Spatial::GeoDataset::IPropertySet*) connection_j;
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory *pObjectX = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::openDataSource(connection);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Idatasourcefactory_createDataSource_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring path_j, jstring fileName_j)
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
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* fileName_ch = (const ev_char*)__env->GetStringUTFChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringUTFChars(fileName_j, (const char *)fileName_ch);
					#else
					const ev_wchar* fileName_ch = (const ev_wchar*)__env->GetStringChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringChars(fileName_j, (const jchar *)fileName_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory *pObjectX = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDataSourceFactoryProxy))
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::createDataSource(path, fileName);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->createDataSource(path, fileName);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Idatasourcefactory_register_1createDataSource_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDataSourceFactoryProxy *pObjectX = (JIDataSourceFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Idatasourcefactory_createDataSource_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring path_j, jstring fileName_j)
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
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* fileName_ch = (const ev_char*)__env->GetStringUTFChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringUTFChars(fileName_j, (const char *)fileName_ch);
					#else
					const ev_wchar* fileName_ch = (const ev_wchar*)__env->GetStringChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringChars(fileName_j, (const jchar *)fileName_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory *pObjectX = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::createDataSource(path, fileName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Idatasourcefactory_createDataSource_1IPropertySet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong connection_j)
				{
					EarthView::World::Spatial::GeoDataset::IPropertySet *connection = (EarthView::World::Spatial::GeoDataset::IPropertySet*) connection_j;
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory *pObjectX = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDataSourceFactoryProxy))
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::createDataSource(connection);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Idatasourcefactory_register_1createDataSource_1IPropertySet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDataSourceFactoryProxy *pObjectX = (JIDataSourceFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Idatasourcefactory_createDataSource_1IPropertySet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong connection_j)
				{
					EarthView::World::Spatial::GeoDataset::IPropertySet *connection = (EarthView::World::Spatial::GeoDataset::IPropertySet*) connection_j;
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory *pObjectX = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::createDataSource(connection);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Idatasourcefactory_destroyDataSource_1IDataSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataSource_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource *pDataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) pDataSource_j;
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory *pObjectX = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDataSourceFactoryProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::destroyDataSource(pDataSource);
					}
					else
					{
						pObjectX->destroyDataSource(pDataSource);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Idatasourcefactory_register_1destroyDataSource_1IDataSource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDataSourceFactoryProxy *pObjectX = (JIDataSourceFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Idatasourcefactory_destroyDataSource_1IDataSource_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataSource_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource *pDataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) pDataSource_j;
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory *pObjectX = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::destroyDataSource(pDataSource);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_Idatasourcefactory_existDataSource_1IDataSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataSource_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource *pDataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) pDataSource_j;
					const 					EarthView::World::Spatial::GeoDataset::IDataSourceFactory *pObjectX = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDataSourceFactoryProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::existDataSource(pDataSource);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->existDataSource(pDataSource);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Idatasourcefactory_register_1existDataSource_1IDataSource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDataSourceFactoryProxy *pObjectX = (JIDataSourceFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_Idatasourcefactory_existDataSource_1IDataSource_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataSource_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource *pDataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) pDataSource_j;
					const 					EarthView::World::Spatial::GeoDataset::IDataSourceFactory *pObjectX = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::existDataSource(pDataSource);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Idatasourcefactory_setDefaultDataSourcePath_1EVString(JNIEnv *__env , jclass __clazz, jstring dsPath_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* dsPath_ch = (const ev_char*)__env->GetStringUTFChars(dsPath_j,JNI_FALSE);
					const EVString dsPath = dsPath_ch;
					__env->ReleaseStringUTFChars(dsPath_j, (const char *)dsPath_ch);
					#else
					const ev_wchar* dsPath_ch = (const ev_wchar*)__env->GetStringChars(dsPath_j,JNI_FALSE);
					const EVString dsPath = dsPath_ch;
					__env->ReleaseStringChars(dsPath_j, (const jchar *)dsPath_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory::setDefaultDataSourcePath(dsPath);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_Idatasourcefactory_getDefaultDataSourcePath_1void(JNIEnv *__env , jclass __clazz)
				{
					EVString __values1 = EarthView::World::Spatial::GeoDataset::IDataSourceFactory::getDefaultDataSourcePath();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_DataSourceFactoryEnumerator_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator* __values1 = EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator::getSingletonPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_DataSourceFactoryEnumerator_getSingleton_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator& __values1 = EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator::getSingleton();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_DataSourceFactoryEnumerator_existDataSourceFactory_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint typeOfDataSource_j)
				{
					ev_int32 typeOfDataSource = (ev_int32) typeOfDataSource_j;
					EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator*) pObjXXXX;
					ev_bool __values1 = pObjectX->existDataSourceFactory(typeOfDataSource);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_DataSourceFactoryEnumerator_getDataSourceFactory_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint typeOfDataSource_j)
				{
					ev_int32 typeOfDataSource = (ev_int32) typeOfDataSource_j;
					EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory* __values1 = pObjectX->getDataSourceFactory(typeOfDataSource);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_DataSourceFactoryEnumerator_addDataSourceFactory_1IDataSourceFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_factory_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory *ref_factory = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) ref_factory_j;
					EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator*) pObjXXXX;
					ev_bool __values1 = pObjectX->addDataSourceFactory(ref_factory);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_DataSourceFactoryEnumerator_removeDataSourceFactory_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint typeOfDataSource_j)
				{
					ev_int32 typeOfDataSource = (ev_int32) typeOfDataSource_j;
					EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeDataSourceFactory(typeOfDataSource);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_DataSourceFactoryEnumerator_removeDataSourceFactory_1IDataSourceFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong factory_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory *factory = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) factory_j;
					EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeDataSourceFactory(factory);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataSourceFactoryEnumerator_clearDataSourceFactory_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator*) pObjXXXX;
					pObjectX->clearDataSourceFactory();
				}
			}
		}
	}
}
