/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dserver/drawserverlayerthemefactory.h"
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
			namespace Display
			{
				class JCDrawServerLayerThemeFactoryProxy : public EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory
				{
				 private:
					EarthView::World::Core::ev_string m_create_EVString_callback;
					EarthView::World::Core::ev_string m_createRenderFromStream_CDataStream_callback;
					EarthView::World::Core::ev_string m_createThemeFromXmlElement_CXmlElement_callback;
				public:
					JCDrawServerLayerThemeFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CDrawServerLayerThemeFactory(pList)
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
					void register_create_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_create_EVString_callback = __method;
					}
					void register_createRenderFromStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createRenderFromStream_CDataStream_callback = __method;
					}
					void register_createThemeFromXmlElement_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createThemeFromXmlElement_CXmlElement_callback = __method;
					}
					virtual EarthView::World::Spatial::Display::CDrawServerLayerTheme* create(const EVString& key)
					{
						if (this->_gRef != NULL && this->m_create_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring key_wch = key;
							jstring key_j = __env->NewString((const jchar*)key_wch.getString(), key_wch.size());
							jmethodID __method = __gr->getMethod("create_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , key_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::CDrawServerLayerTheme *__values1 = (EarthView::World::Spatial::Display::CDrawServerLayerTheme*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDrawServerLayerThemeFactory::create(key);
						}
					}
					virtual EarthView::World::Spatial::Display::CDrawServerLayerTheme* createRenderFromStream(EarthView::World::Core::CDataStream& stream)
					{
						if (this->_gRef != NULL && this->m_createRenderFromStream_CDataStream_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("createRenderFromStream_CDataStream_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , stream_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::CDrawServerLayerTheme *__values1 = (EarthView::World::Spatial::Display::CDrawServerLayerTheme*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDrawServerLayerThemeFactory::createRenderFromStream(stream);
						}
					}
					virtual EarthView::World::Spatial::Display::CDrawServerLayerTheme* createThemeFromXmlElement(EarthView::World::Core::CXmlElement& element)
					{
						if (this->_gRef != NULL && this->m_createThemeFromXmlElement_CXmlElement_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("createThemeFromXmlElement_CXmlElement_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , element_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::CDrawServerLayerTheme *__values1 = (EarthView::World::Spatial::Display::CDrawServerLayerTheme*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDrawServerLayerThemeFactory::createThemeFromXmlElement(element);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCDrawServerLayerThemeFactoryProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_DrawServerLayerThemeFactory_getKeys_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory *pObjectX = (EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*) pObjXXXX;
					EarthView::World::Core::CStringArray __values1 = pObjectX->getKeys();
					EarthView::World::Core::CStringArray *returnvalues = new EarthView::World::Core::CStringArray(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_DrawServerLayerThemeFactory_isSupported_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					const 					EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory *pObjectX = (EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*) pObjXXXX;
					ev_bool __values1 = pObjectX->isSupported(key);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_DrawServerLayerThemeFactory_create_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory *pObjectX = (EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDrawServerLayerThemeFactoryProxy))
					{
						EarthView::World::Spatial::Display::CDrawServerLayerTheme* __values1 = pObjectX->EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory::create(key);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::CDrawServerLayerTheme* __values1 = pObjectX->create(key);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_DrawServerLayerThemeFactory_register_1create_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDrawServerLayerThemeFactoryProxy *pObjectX = (JCDrawServerLayerThemeFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_create_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"create_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_DrawServerLayerThemeFactory_create_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory *pObjectX = (EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*) pObjXXXX;
					EarthView::World::Spatial::Display::CDrawServerLayerTheme* __values1 = pObjectX->EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory::create(key);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_DrawServerLayerThemeFactory_createRenderFromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory *pObjectX = (EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDrawServerLayerThemeFactoryProxy))
					{
						EarthView::World::Spatial::Display::CDrawServerLayerTheme* __values1 = pObjectX->EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory::createRenderFromStream(stream);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::CDrawServerLayerTheme* __values1 = pObjectX->createRenderFromStream(stream);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_DrawServerLayerThemeFactory_register_1createRenderFromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDrawServerLayerThemeFactoryProxy *pObjectX = (JCDrawServerLayerThemeFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createRenderFromStream_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createRenderFromStream_CDataStream_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_DrawServerLayerThemeFactory_createRenderFromStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory *pObjectX = (EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*) pObjXXXX;
					EarthView::World::Spatial::Display::CDrawServerLayerTheme* __values1 = pObjectX->EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory::createRenderFromStream(stream);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_DrawServerLayerThemeFactory_createThemeFromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory *pObjectX = (EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDrawServerLayerThemeFactoryProxy))
					{
						EarthView::World::Spatial::Display::CDrawServerLayerTheme* __values1 = pObjectX->EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory::createThemeFromXmlElement(element);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::CDrawServerLayerTheme* __values1 = pObjectX->createThemeFromXmlElement(element);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_DrawServerLayerThemeFactory_register_1createThemeFromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDrawServerLayerThemeFactoryProxy *pObjectX = (JCDrawServerLayerThemeFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createThemeFromXmlElement_CXmlElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createThemeFromXmlElement_CXmlElement_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_DrawServerLayerThemeFactory_createThemeFromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory *pObjectX = (EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*) pObjXXXX;
					EarthView::World::Spatial::Display::CDrawServerLayerTheme* __values1 = pObjectX->EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory::createThemeFromXmlElement(element);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_DrawServerLayerThemeFactory_destroyRender_1CDrawServerLayerTheme(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pRender_j)
				{
					EarthView::World::Spatial::Display::CDrawServerLayerTheme *pRender = (EarthView::World::Spatial::Display::CDrawServerLayerTheme*) pRender_j;
					EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory *pObjectX = (EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*) pObjXXXX;
					pObjectX->destroyRender(pRender);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_DrawServerLayerThemeFactory_initialize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory *pObjectX = (EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*) pObjXXXX;
					pObjectX->initialize();
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_DrawServerLayerThemeFactoryRegistry_registryFactory_1CDrawServerLayerThemeFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong factory_j)
				{
					EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory *factory = (EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*) factory_j;
					EarthView::World::Spatial::Display::CDrawServerLayerThemeFactoryRegistry *pObjectX = (EarthView::World::Spatial::Display::CDrawServerLayerThemeFactoryRegistry*) pObjXXXX;
					int __values1 = pObjectX->registryFactory(factory);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_DrawServerLayerThemeFactoryRegistry_getFactory_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					const 					EarthView::World::Spatial::Display::CDrawServerLayerThemeFactoryRegistry *pObjectX = (EarthView::World::Spatial::Display::CDrawServerLayerThemeFactoryRegistry*) pObjXXXX;
					EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory* __values1 = pObjectX->getFactory(key);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
