/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/imapfactory.h"
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
			namespace Atlas
			{
				class JIMapFactoryProxy : public EarthView::World::Spatial::Atlas::IMapFactory
				{
				 private:
					EarthView::World::Core::ev_string m_createMapFromStream_CDataStream_callback;
					EarthView::World::Core::ev_string m_createMapFromXML_EVString_callback;
					EarthView::World::Core::ev_string m_createMapFromXMLElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_createMap_EVString_callback;
					EarthView::World::Core::ev_string m_destroyInstance_IMap_callback;
				public:
					JIMapFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : IMapFactory(pList)
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
				protected:
					C_DISABLE_COPY(JIMapFactoryProxy)
				public:
					void register_createMapFromStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createMapFromStream_CDataStream_callback = __method;
					}
					void register_createMapFromXML_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createMapFromXML_EVString_callback = __method;
					}
					void register_createMapFromXMLElement_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createMapFromXMLElement_CXmlElement_callback = __method;
					}
					void register_createMap_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createMap_EVString_callback = __method;
					}
					void register_destroyInstance_IMap_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_destroyInstance_IMap_callback = __method;
					}
					virtual EarthView::World::Spatial::Atlas::IMap* createMapFromStream(EarthView::World::Core::CDataStream& stream)
					{
						if (this->_gRef != NULL && this->m_createMapFromStream_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("createMapFromStream_CDataStream_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , stream_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Atlas::IMap *__values1 = (EarthView::World::Spatial::Atlas::IMap*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IMapFactory::createMapFromStream(stream);
						}
					}
					virtual EarthView::World::Spatial::Atlas::IMap* createMapFromXML(const EVString& strXml)
					{
						if (this->_gRef != NULL && this->m_createMapFromXML_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring strXml_wch = strXml;
							jstring strXml_j = __env->NewString((const jchar*)strXml_wch.getString(), strXml_wch.size());
							jmethodID __method = __gr->getMethod("createMapFromXML_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , strXml_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Atlas::IMap *__values1 = (EarthView::World::Spatial::Atlas::IMap*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IMapFactory::createMapFromXML(strXml);
						}
					}
					virtual EarthView::World::Spatial::Atlas::IMap* createMapFromXMLElement(EarthView::World::Core::CXmlElement& element)
					{
						if (this->_gRef != NULL && this->m_createMapFromXMLElement_CXmlElement_callback != "" && this->isCustomExtend())
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
							jlong element_j = (jlong) &element;
							jmethodID __method = __gr->getMethod("createMapFromXMLElement_CXmlElement_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , element_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Atlas::IMap *__values1 = (EarthView::World::Spatial::Atlas::IMap*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IMapFactory::createMapFromXMLElement(element);
						}
					}
					virtual EarthView::World::Spatial::Atlas::IMap* createMap(const EVString& mapName)
					{
						if (this->_gRef != NULL && this->m_createMap_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring mapName_wch = mapName;
							jstring mapName_j = __env->NewString((const jchar*)mapName_wch.getString(), mapName_wch.size());
							jmethodID __method = __gr->getMethod("createMap_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , mapName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Atlas::IMap *__values1 = (EarthView::World::Spatial::Atlas::IMap*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IMapFactory::createMap(mapName);
						}
					}
					virtual ev_bool destroyInstance(EarthView::World::Spatial::Atlas::IMap* map)
					{
						if (this->_gRef != NULL && this->m_destroyInstance_IMap_callback != "" && this->isCustomExtend())
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
							jlong map_j = (jlong) map;
							jmethodID __method = __gr->getMethod("destroyInstance_IMap_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , map_j);
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
							return this->IMapFactory::destroyInstance(map);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIMapFactoryProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Imapfactory_createMapFromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Atlas::IMapFactory *pObjectX = (EarthView::World::Spatial::Atlas::IMapFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapFactoryProxy))
					{
						EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->EarthView::World::Spatial::Atlas::IMapFactory::createMapFromStream(stream);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->createMapFromStream(stream);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Imapfactory_register_1createMapFromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapFactoryProxy *pObjectX = (JIMapFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createMapFromStream_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createMapFromStream_CDataStream_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Imapfactory_createMapFromStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Atlas::IMapFactory *pObjectX = (EarthView::World::Spatial::Atlas::IMapFactory*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->EarthView::World::Spatial::Atlas::IMapFactory::createMapFromStream(stream);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Imapfactory_createMapFromXML_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strXml_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strXml_ch = (const ev_char*)__env->GetStringUTFChars(strXml_j,JNI_FALSE);
					const EVString strXml = strXml_ch;
					__env->ReleaseStringUTFChars(strXml_j, (const char *)strXml_ch);
					#else
					const ev_wchar* strXml_ch = (const ev_wchar*)__env->GetStringChars(strXml_j,JNI_FALSE);
					const EVString strXml = strXml_ch;
					__env->ReleaseStringChars(strXml_j, (const jchar *)strXml_ch);
					#endif
					EarthView::World::Spatial::Atlas::IMapFactory *pObjectX = (EarthView::World::Spatial::Atlas::IMapFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapFactoryProxy))
					{
						EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->EarthView::World::Spatial::Atlas::IMapFactory::createMapFromXML(strXml);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->createMapFromXML(strXml);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Imapfactory_register_1createMapFromXML_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapFactoryProxy *pObjectX = (JIMapFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createMapFromXML_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createMapFromXML_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Imapfactory_createMapFromXML_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strXml_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strXml_ch = (const ev_char*)__env->GetStringUTFChars(strXml_j,JNI_FALSE);
					const EVString strXml = strXml_ch;
					__env->ReleaseStringUTFChars(strXml_j, (const char *)strXml_ch);
					#else
					const ev_wchar* strXml_ch = (const ev_wchar*)__env->GetStringChars(strXml_j,JNI_FALSE);
					const EVString strXml = strXml_ch;
					__env->ReleaseStringChars(strXml_j, (const jchar *)strXml_ch);
					#endif
					EarthView::World::Spatial::Atlas::IMapFactory *pObjectX = (EarthView::World::Spatial::Atlas::IMapFactory*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->EarthView::World::Spatial::Atlas::IMapFactory::createMapFromXML(strXml);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Imapfactory_createMapFromXMLElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Atlas::IMapFactory *pObjectX = (EarthView::World::Spatial::Atlas::IMapFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapFactoryProxy))
					{
						EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->EarthView::World::Spatial::Atlas::IMapFactory::createMapFromXMLElement(element);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->createMapFromXMLElement(element);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Imapfactory_register_1createMapFromXMLElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapFactoryProxy *pObjectX = (JIMapFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createMapFromXMLElement_CXmlElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createMapFromXMLElement_CXmlElement_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Imapfactory_createMapFromXMLElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Atlas::IMapFactory *pObjectX = (EarthView::World::Spatial::Atlas::IMapFactory*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->EarthView::World::Spatial::Atlas::IMapFactory::createMapFromXMLElement(element);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Imapfactory_createMap_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring mapName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* mapName_ch = (const ev_char*)__env->GetStringUTFChars(mapName_j,JNI_FALSE);
					const EVString mapName = mapName_ch;
					__env->ReleaseStringUTFChars(mapName_j, (const char *)mapName_ch);
					#else
					const ev_wchar* mapName_ch = (const ev_wchar*)__env->GetStringChars(mapName_j,JNI_FALSE);
					const EVString mapName = mapName_ch;
					__env->ReleaseStringChars(mapName_j, (const jchar *)mapName_ch);
					#endif
					EarthView::World::Spatial::Atlas::IMapFactory *pObjectX = (EarthView::World::Spatial::Atlas::IMapFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapFactoryProxy))
					{
						EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->EarthView::World::Spatial::Atlas::IMapFactory::createMap(mapName);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->createMap(mapName);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Imapfactory_register_1createMap_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapFactoryProxy *pObjectX = (JIMapFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createMap_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createMap_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Imapfactory_createMap_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring mapName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* mapName_ch = (const ev_char*)__env->GetStringUTFChars(mapName_j,JNI_FALSE);
					const EVString mapName = mapName_ch;
					__env->ReleaseStringUTFChars(mapName_j, (const char *)mapName_ch);
					#else
					const ev_wchar* mapName_ch = (const ev_wchar*)__env->GetStringChars(mapName_j,JNI_FALSE);
					const EVString mapName = mapName_ch;
					__env->ReleaseStringChars(mapName_j, (const jchar *)mapName_ch);
					#endif
					EarthView::World::Spatial::Atlas::IMapFactory *pObjectX = (EarthView::World::Spatial::Atlas::IMapFactory*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->EarthView::World::Spatial::Atlas::IMapFactory::createMap(mapName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Imapfactory_destroyInstance_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					EarthView::World::Spatial::Atlas::IMapFactory *pObjectX = (EarthView::World::Spatial::Atlas::IMapFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapFactoryProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::IMapFactory::destroyInstance(map);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->destroyInstance(map);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Imapfactory_register_1destroyInstance_1IMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapFactoryProxy *pObjectX = (JIMapFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_destroyInstance_IMap_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"destroyInstance_IMap_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Imapfactory_destroyInstance_1IMap_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					EarthView::World::Spatial::Atlas::IMapFactory *pObjectX = (EarthView::World::Spatial::Atlas::IMapFactory*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::IMapFactory::destroyInstance(map);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
