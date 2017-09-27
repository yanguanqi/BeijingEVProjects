/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddisplay/drawthemefactory.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Renderer
			{
				class JCDrawThemeFactoryProxy : public EarthView::World::Spatial2D::Renderer::CDrawThemeFactory
				{
				 private:
					EarthView::World::Core::ev_string m_create_EVString_callback;
				public:
					JCDrawThemeFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CDrawThemeFactory(pList)
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
					C_DISABLE_COPY(JCDrawThemeFactoryProxy)
				public:
					void register_create_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_create_EVString_callback = __method;
					}
					virtual EarthView::World::Spatial2D::Renderer::CDrawTheme* create(const EVString& key)
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
							EarthView::World::Spatial2D::Renderer::CDrawTheme *__values1 = (EarthView::World::Spatial2D::Renderer::CDrawTheme*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDrawThemeFactory::create(key);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCDrawThemeFactoryProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_renderer_DrawThemeFactory_getKeys_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Renderer::CDrawThemeFactory *pObjectX = (EarthView::World::Spatial2D::Renderer::CDrawThemeFactory*) pObjXXXX;
					EarthView::World::Core::CStringArray __values1 = pObjectX->getKeys();
					EarthView::World::Core::CStringArray *returnvalues = new EarthView::World::Core::CStringArray(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_renderer_DrawThemeFactory_isSupported_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
					const 					EarthView::World::Spatial2D::Renderer::CDrawThemeFactory *pObjectX = (EarthView::World::Spatial2D::Renderer::CDrawThemeFactory*) pObjXXXX;
					ev_bool __values1 = pObjectX->isSupported(key);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_renderer_DrawThemeFactory_create_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
					EarthView::World::Spatial2D::Renderer::CDrawThemeFactory *pObjectX = (EarthView::World::Spatial2D::Renderer::CDrawThemeFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDrawThemeFactoryProxy))
					{
						EarthView::World::Spatial2D::Renderer::CDrawTheme* __values1 = pObjectX->EarthView::World::Spatial2D::Renderer::CDrawThemeFactory::create(key);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial2D::Renderer::CDrawTheme* __values1 = pObjectX->create(key);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_DrawThemeFactory_register_1create_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDrawThemeFactoryProxy *pObjectX = (JCDrawThemeFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_renderer_DrawThemeFactory_create_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
					EarthView::World::Spatial2D::Renderer::CDrawThemeFactory *pObjectX = (EarthView::World::Spatial2D::Renderer::CDrawThemeFactory*) pObjXXXX;
					EarthView::World::Spatial2D::Renderer::CDrawTheme* __values1 = pObjectX->EarthView::World::Spatial2D::Renderer::CDrawThemeFactory::create(key);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_DrawThemeFactory_destroy_1CDrawTheme(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j)
				{
					EarthView::World::Spatial2D::Renderer::CDrawTheme *obj = (EarthView::World::Spatial2D::Renderer::CDrawTheme*) obj_j;
					EarthView::World::Spatial2D::Renderer::CDrawThemeFactory *pObjectX = (EarthView::World::Spatial2D::Renderer::CDrawThemeFactory*) pObjXXXX;
					pObjectX->destroy(obj);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_DrawThemeFactory_initialize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Renderer::CDrawThemeFactory *pObjectX = (EarthView::World::Spatial2D::Renderer::CDrawThemeFactory*) pObjXXXX;
					pObjectX->initialize();
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_renderer_DrawThemeFactoryRegistry_registryFactory_1CDrawThemeFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong factory_j)
				{
					EarthView::World::Spatial2D::Renderer::CDrawThemeFactory *factory = (EarthView::World::Spatial2D::Renderer::CDrawThemeFactory*) factory_j;
					EarthView::World::Spatial2D::Renderer::CDrawThemeFactoryRegistry *pObjectX = (EarthView::World::Spatial2D::Renderer::CDrawThemeFactoryRegistry*) pObjXXXX;
					int __values1 = pObjectX->registryFactory(factory);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_renderer_DrawThemeFactoryRegistry_getFactory_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
					const 					EarthView::World::Spatial2D::Renderer::CDrawThemeFactoryRegistry *pObjectX = (EarthView::World::Spatial2D::Renderer::CDrawThemeFactoryRegistry*) pObjXXXX;
					EarthView::World::Spatial2D::Renderer::CDrawThemeFactory* __values1 = pObjectX->getFactory(key);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
