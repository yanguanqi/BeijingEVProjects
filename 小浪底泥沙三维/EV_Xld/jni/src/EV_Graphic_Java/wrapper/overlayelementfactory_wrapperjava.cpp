/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/overlayelementfactory.h"
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
			class JCOverlayElementFactoryProxy : public EarthView::World::Graphic::COverlayElementFactory
			{
			 private:
				EarthView::World::Core::ev_string m_createOverlayElement_EVString_callback;
				EarthView::World::Core::ev_string m_destroyOverlayElement_COverlayElement_callback;
				EarthView::World::Core::ev_string m_getTypeName_void_callback;
			public:
				JCOverlayElementFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : COverlayElementFactory(pList)
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
				void register_createOverlayElement_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createOverlayElement_EVString_callback = __method;
				}
				void register_destroyOverlayElement_COverlayElement_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyOverlayElement_COverlayElement_callback = __method;
				}
				void register_getTypeName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTypeName_void_callback = __method;
				}
				virtual EarthView::World::Graphic::COverlayElement* createOverlayElement(const EVString& instanceName)
				{
					if (this->_gRef != NULL && this->m_createOverlayElement_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring instanceName_wch = instanceName;
						jstring instanceName_j = __env->NewString((const jchar*)instanceName_wch.getString(), instanceName_wch.size());
						jmethodID __method = __gr->getMethod("createOverlayElement_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , instanceName_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::COverlayElement *__values1 = (EarthView::World::Graphic::COverlayElement*) __values1_j;
						return __values1;
					}
					else
					{
						return this->COverlayElementFactory::createOverlayElement(instanceName);
					}
				}
				virtual void destroyOverlayElement(EarthView::World::Graphic::COverlayElement* pElement)
				{
					if (this->_gRef != NULL && this->m_destroyOverlayElement_COverlayElement_callback != "" && this->isCustomExtend())
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
						jlong pElement_j = (jlong) pElement;
						jmethodID __method = __gr->getMethod("destroyOverlayElement_COverlayElement_callback");
						__env->CallVoidMethod(__obj, __method , pElement_j);
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
						return this->COverlayElementFactory::destroyOverlayElement(pElement);
					}
				}
				virtual EVString getTypeName() const
				{
					if (this->_gRef != NULL && this->m_getTypeName_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getTypeName_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->COverlayElementFactory::getTypeName();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCOverlayElementFactoryProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayElementFactory_createOverlayElement_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring instanceName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* instanceName_ch = (const ev_char*)__env->GetStringUTFChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringUTFChars(instanceName_j, (const char *)instanceName_ch);
				#else
				const ev_wchar* instanceName_ch = (const ev_wchar*)__env->GetStringChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringChars(instanceName_j, (const jchar *)instanceName_ch);
				#endif
				EarthView::World::Graphic::COverlayElementFactory *pObjectX = (EarthView::World::Graphic::COverlayElementFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementFactoryProxy))
				{
					EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->EarthView::World::Graphic::COverlayElementFactory::createOverlayElement(instanceName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->createOverlayElement(instanceName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElementFactory_register_1createOverlayElement_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementFactoryProxy *pObjectX = (JCOverlayElementFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createOverlayElement_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createOverlayElement_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayElementFactory_createOverlayElement_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring instanceName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* instanceName_ch = (const ev_char*)__env->GetStringUTFChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringUTFChars(instanceName_j, (const char *)instanceName_ch);
				#else
				const ev_wchar* instanceName_ch = (const ev_wchar*)__env->GetStringChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringChars(instanceName_j, (const jchar *)instanceName_ch);
				#endif
				EarthView::World::Graphic::COverlayElementFactory *pObjectX = (EarthView::World::Graphic::COverlayElementFactory*) pObjXXXX;
				EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->EarthView::World::Graphic::COverlayElementFactory::createOverlayElement(instanceName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElementFactory_destroyOverlayElement_1COverlayElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pElement_j)
			{
				EarthView::World::Graphic::COverlayElement *pElement = (EarthView::World::Graphic::COverlayElement*) pElement_j;
				EarthView::World::Graphic::COverlayElementFactory *pObjectX = (EarthView::World::Graphic::COverlayElementFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementFactoryProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElementFactory::destroyOverlayElement(pElement);
				}
				else
				{
					pObjectX->destroyOverlayElement(pElement);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElementFactory_register_1destroyOverlayElement_1COverlayElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementFactoryProxy *pObjectX = (JCOverlayElementFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyOverlayElement_COverlayElement_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyOverlayElement_COverlayElement_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElementFactory_destroyOverlayElement_1COverlayElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pElement_j)
			{
				EarthView::World::Graphic::COverlayElement *pElement = (EarthView::World::Graphic::COverlayElement*) pElement_j;
				EarthView::World::Graphic::COverlayElementFactory *pObjectX = (EarthView::World::Graphic::COverlayElementFactory*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElementFactory::destroyOverlayElement(pElement);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_OverlayElementFactory_getTypeName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElementFactory *pObjectX = (EarthView::World::Graphic::COverlayElementFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementFactoryProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::COverlayElementFactory::getTypeName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getTypeName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElementFactory_register_1getTypeName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementFactoryProxy *pObjectX = (JCOverlayElementFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTypeName_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTypeName_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_OverlayElementFactory_getTypeName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElementFactory *pObjectX = (EarthView::World::Graphic::COverlayElementFactory*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::COverlayElementFactory::getTypeName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			class JCPanelOverlayElementFactoryProxy : public EarthView::World::Graphic::CPanelOverlayElementFactory
			{
			 private:
				EarthView::World::Core::ev_string m_createOverlayElement_EVString_callback;
				EarthView::World::Core::ev_string m_destroyOverlayElement_COverlayElement_callback;
				EarthView::World::Core::ev_string m_getTypeName_void_callback;
			public:
				JCPanelOverlayElementFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CPanelOverlayElementFactory(pList)
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
				void register_createOverlayElement_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createOverlayElement_EVString_callback = __method;
				}
				void register_destroyOverlayElement_COverlayElement_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyOverlayElement_COverlayElement_callback = __method;
				}
				void register_getTypeName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTypeName_void_callback = __method;
				}
				virtual EarthView::World::Graphic::COverlayElement* createOverlayElement(const EVString& instanceName)
				{
					if (this->_gRef != NULL && this->m_createOverlayElement_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring instanceName_wch = instanceName;
						jstring instanceName_j = __env->NewString((const jchar*)instanceName_wch.getString(), instanceName_wch.size());
						jmethodID __method = __gr->getMethod("createOverlayElement_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , instanceName_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::COverlayElement *__values1 = (EarthView::World::Graphic::COverlayElement*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPanelOverlayElementFactory::createOverlayElement(instanceName);
					}
				}
				virtual EVString getTypeName() const
				{
					if (this->_gRef != NULL && this->m_getTypeName_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getTypeName_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CPanelOverlayElementFactory::getTypeName();
					}
				}
				virtual void destroyOverlayElement(EarthView::World::Graphic::COverlayElement* pElement)
				{
					if (this->_gRef != NULL && this->m_destroyOverlayElement_COverlayElement_callback != "" && this->isCustomExtend())
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
						jlong pElement_j = (jlong) pElement;
						jmethodID __method = __gr->getMethod("destroyOverlayElement_COverlayElement_callback");
						__env->CallVoidMethod(__obj, __method , pElement_j);
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
						return this->CPanelOverlayElementFactory::destroyOverlayElement(pElement);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCPanelOverlayElementFactoryProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PanelOverlayElementFactory_createOverlayElement_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring instanceName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* instanceName_ch = (const ev_char*)__env->GetStringUTFChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringUTFChars(instanceName_j, (const char *)instanceName_ch);
				#else
				const ev_wchar* instanceName_ch = (const ev_wchar*)__env->GetStringChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringChars(instanceName_j, (const jchar *)instanceName_ch);
				#endif
				EarthView::World::Graphic::CPanelOverlayElementFactory *pObjectX = (EarthView::World::Graphic::CPanelOverlayElementFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPanelOverlayElementFactoryProxy))
				{
					EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->EarthView::World::Graphic::CPanelOverlayElementFactory::createOverlayElement(instanceName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->createOverlayElement(instanceName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PanelOverlayElementFactory_register_1createOverlayElement_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPanelOverlayElementFactoryProxy *pObjectX = (JCPanelOverlayElementFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createOverlayElement_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createOverlayElement_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PanelOverlayElementFactory_createOverlayElement_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring instanceName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* instanceName_ch = (const ev_char*)__env->GetStringUTFChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringUTFChars(instanceName_j, (const char *)instanceName_ch);
				#else
				const ev_wchar* instanceName_ch = (const ev_wchar*)__env->GetStringChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringChars(instanceName_j, (const jchar *)instanceName_ch);
				#endif
				EarthView::World::Graphic::CPanelOverlayElementFactory *pObjectX = (EarthView::World::Graphic::CPanelOverlayElementFactory*) pObjXXXX;
				EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->EarthView::World::Graphic::CPanelOverlayElementFactory::createOverlayElement(instanceName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_PanelOverlayElementFactory_getTypeName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPanelOverlayElementFactory *pObjectX = (EarthView::World::Graphic::CPanelOverlayElementFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPanelOverlayElementFactoryProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CPanelOverlayElementFactory::getTypeName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getTypeName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PanelOverlayElementFactory_register_1getTypeName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPanelOverlayElementFactoryProxy *pObjectX = (JCPanelOverlayElementFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTypeName_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTypeName_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_PanelOverlayElementFactory_getTypeName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPanelOverlayElementFactory *pObjectX = (EarthView::World::Graphic::CPanelOverlayElementFactory*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CPanelOverlayElementFactory::getTypeName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PanelOverlayElementFactory_register_1destroyOverlayElement_1COverlayElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPanelOverlayElementFactoryProxy *pObjectX = (JCPanelOverlayElementFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyOverlayElement_COverlayElement_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyOverlayElement_COverlayElement_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCBorderPanelOverlayElementFactoryProxy : public EarthView::World::Graphic::CBorderPanelOverlayElementFactory
			{
			 private:
				EarthView::World::Core::ev_string m_createOverlayElement_EVString_callback;
				EarthView::World::Core::ev_string m_destroyOverlayElement_COverlayElement_callback;
				EarthView::World::Core::ev_string m_getTypeName_void_callback;
			public:
				JCBorderPanelOverlayElementFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CBorderPanelOverlayElementFactory(pList)
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
				void register_createOverlayElement_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createOverlayElement_EVString_callback = __method;
				}
				void register_destroyOverlayElement_COverlayElement_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyOverlayElement_COverlayElement_callback = __method;
				}
				void register_getTypeName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTypeName_void_callback = __method;
				}
				virtual EarthView::World::Graphic::COverlayElement* createOverlayElement(const EVString& instanceName)
				{
					if (this->_gRef != NULL && this->m_createOverlayElement_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring instanceName_wch = instanceName;
						jstring instanceName_j = __env->NewString((const jchar*)instanceName_wch.getString(), instanceName_wch.size());
						jmethodID __method = __gr->getMethod("createOverlayElement_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , instanceName_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::COverlayElement *__values1 = (EarthView::World::Graphic::COverlayElement*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CBorderPanelOverlayElementFactory::createOverlayElement(instanceName);
					}
				}
				virtual EVString getTypeName() const
				{
					if (this->_gRef != NULL && this->m_getTypeName_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getTypeName_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CBorderPanelOverlayElementFactory::getTypeName();
					}
				}
				virtual void destroyOverlayElement(EarthView::World::Graphic::COverlayElement* pElement)
				{
					if (this->_gRef != NULL && this->m_destroyOverlayElement_COverlayElement_callback != "" && this->isCustomExtend())
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
						jlong pElement_j = (jlong) pElement;
						jmethodID __method = __gr->getMethod("destroyOverlayElement_COverlayElement_callback");
						__env->CallVoidMethod(__obj, __method , pElement_j);
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
						return this->CBorderPanelOverlayElementFactory::destroyOverlayElement(pElement);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCBorderPanelOverlayElementFactoryProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_BorderPanelOverlayElementFactory_createOverlayElement_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring instanceName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* instanceName_ch = (const ev_char*)__env->GetStringUTFChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringUTFChars(instanceName_j, (const char *)instanceName_ch);
				#else
				const ev_wchar* instanceName_ch = (const ev_wchar*)__env->GetStringChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringChars(instanceName_j, (const jchar *)instanceName_ch);
				#endif
				EarthView::World::Graphic::CBorderPanelOverlayElementFactory *pObjectX = (EarthView::World::Graphic::CBorderPanelOverlayElementFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBorderPanelOverlayElementFactoryProxy))
				{
					EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->EarthView::World::Graphic::CBorderPanelOverlayElementFactory::createOverlayElement(instanceName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->createOverlayElement(instanceName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BorderPanelOverlayElementFactory_register_1createOverlayElement_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBorderPanelOverlayElementFactoryProxy *pObjectX = (JCBorderPanelOverlayElementFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createOverlayElement_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createOverlayElement_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_BorderPanelOverlayElementFactory_createOverlayElement_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring instanceName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* instanceName_ch = (const ev_char*)__env->GetStringUTFChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringUTFChars(instanceName_j, (const char *)instanceName_ch);
				#else
				const ev_wchar* instanceName_ch = (const ev_wchar*)__env->GetStringChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringChars(instanceName_j, (const jchar *)instanceName_ch);
				#endif
				EarthView::World::Graphic::CBorderPanelOverlayElementFactory *pObjectX = (EarthView::World::Graphic::CBorderPanelOverlayElementFactory*) pObjXXXX;
				EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->EarthView::World::Graphic::CBorderPanelOverlayElementFactory::createOverlayElement(instanceName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_BorderPanelOverlayElementFactory_getTypeName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBorderPanelOverlayElementFactory *pObjectX = (EarthView::World::Graphic::CBorderPanelOverlayElementFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBorderPanelOverlayElementFactoryProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CBorderPanelOverlayElementFactory::getTypeName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getTypeName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BorderPanelOverlayElementFactory_register_1getTypeName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBorderPanelOverlayElementFactoryProxy *pObjectX = (JCBorderPanelOverlayElementFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTypeName_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTypeName_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_BorderPanelOverlayElementFactory_getTypeName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBorderPanelOverlayElementFactory *pObjectX = (EarthView::World::Graphic::CBorderPanelOverlayElementFactory*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CBorderPanelOverlayElementFactory::getTypeName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BorderPanelOverlayElementFactory_register_1destroyOverlayElement_1COverlayElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBorderPanelOverlayElementFactoryProxy *pObjectX = (JCBorderPanelOverlayElementFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyOverlayElement_COverlayElement_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyOverlayElement_COverlayElement_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCTextAreaOverlayElementFactoryProxy : public EarthView::World::Graphic::CTextAreaOverlayElementFactory
			{
			 private:
				EarthView::World::Core::ev_string m_createOverlayElement_EVString_callback;
				EarthView::World::Core::ev_string m_destroyOverlayElement_COverlayElement_callback;
				EarthView::World::Core::ev_string m_getTypeName_void_callback;
			public:
				JCTextAreaOverlayElementFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CTextAreaOverlayElementFactory(pList)
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
				void register_createOverlayElement_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createOverlayElement_EVString_callback = __method;
				}
				void register_destroyOverlayElement_COverlayElement_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyOverlayElement_COverlayElement_callback = __method;
				}
				void register_getTypeName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTypeName_void_callback = __method;
				}
				virtual EarthView::World::Graphic::COverlayElement* createOverlayElement(const EVString& instanceName)
				{
					if (this->_gRef != NULL && this->m_createOverlayElement_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring instanceName_wch = instanceName;
						jstring instanceName_j = __env->NewString((const jchar*)instanceName_wch.getString(), instanceName_wch.size());
						jmethodID __method = __gr->getMethod("createOverlayElement_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , instanceName_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::COverlayElement *__values1 = (EarthView::World::Graphic::COverlayElement*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTextAreaOverlayElementFactory::createOverlayElement(instanceName);
					}
				}
				virtual EVString getTypeName() const
				{
					if (this->_gRef != NULL && this->m_getTypeName_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getTypeName_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CTextAreaOverlayElementFactory::getTypeName();
					}
				}
				virtual void destroyOverlayElement(EarthView::World::Graphic::COverlayElement* pElement)
				{
					if (this->_gRef != NULL && this->m_destroyOverlayElement_COverlayElement_callback != "" && this->isCustomExtend())
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
						jlong pElement_j = (jlong) pElement;
						jmethodID __method = __gr->getMethod("destroyOverlayElement_COverlayElement_callback");
						__env->CallVoidMethod(__obj, __method , pElement_j);
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
						return this->CTextAreaOverlayElementFactory::destroyOverlayElement(pElement);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCTextAreaOverlayElementFactoryProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextAreaOverlayElementFactory_createOverlayElement_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring instanceName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* instanceName_ch = (const ev_char*)__env->GetStringUTFChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringUTFChars(instanceName_j, (const char *)instanceName_ch);
				#else
				const ev_wchar* instanceName_ch = (const ev_wchar*)__env->GetStringChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringChars(instanceName_j, (const jchar *)instanceName_ch);
				#endif
				EarthView::World::Graphic::CTextAreaOverlayElementFactory *pObjectX = (EarthView::World::Graphic::CTextAreaOverlayElementFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextAreaOverlayElementFactoryProxy))
				{
					EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->EarthView::World::Graphic::CTextAreaOverlayElementFactory::createOverlayElement(instanceName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->createOverlayElement(instanceName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextAreaOverlayElementFactory_register_1createOverlayElement_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextAreaOverlayElementFactoryProxy *pObjectX = (JCTextAreaOverlayElementFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createOverlayElement_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createOverlayElement_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextAreaOverlayElementFactory_createOverlayElement_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring instanceName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* instanceName_ch = (const ev_char*)__env->GetStringUTFChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringUTFChars(instanceName_j, (const char *)instanceName_ch);
				#else
				const ev_wchar* instanceName_ch = (const ev_wchar*)__env->GetStringChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringChars(instanceName_j, (const jchar *)instanceName_ch);
				#endif
				EarthView::World::Graphic::CTextAreaOverlayElementFactory *pObjectX = (EarthView::World::Graphic::CTextAreaOverlayElementFactory*) pObjXXXX;
				EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->EarthView::World::Graphic::CTextAreaOverlayElementFactory::createOverlayElement(instanceName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_TextAreaOverlayElementFactory_getTypeName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextAreaOverlayElementFactory *pObjectX = (EarthView::World::Graphic::CTextAreaOverlayElementFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextAreaOverlayElementFactoryProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CTextAreaOverlayElementFactory::getTypeName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getTypeName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextAreaOverlayElementFactory_register_1getTypeName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextAreaOverlayElementFactoryProxy *pObjectX = (JCTextAreaOverlayElementFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTypeName_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTypeName_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_TextAreaOverlayElementFactory_getTypeName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextAreaOverlayElementFactory *pObjectX = (EarthView::World::Graphic::CTextAreaOverlayElementFactory*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CTextAreaOverlayElementFactory::getTypeName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextAreaOverlayElementFactory_register_1destroyOverlayElement_1COverlayElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextAreaOverlayElementFactoryProxy *pObjectX = (JCTextAreaOverlayElementFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyOverlayElement_COverlayElement_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyOverlayElement_COverlayElement_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCCharOverlayElementFactoryProxy : public EarthView::World::Graphic::CCharOverlayElementFactory
			{
			 private:
				EarthView::World::Core::ev_string m_createOverlayElement_EVString_callback;
				EarthView::World::Core::ev_string m_destroyOverlayElement_COverlayElement_callback;
				EarthView::World::Core::ev_string m_getTypeName_void_callback;
			public:
				JCCharOverlayElementFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CCharOverlayElementFactory(pList)
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
				void register_createOverlayElement_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createOverlayElement_EVString_callback = __method;
				}
				void register_destroyOverlayElement_COverlayElement_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyOverlayElement_COverlayElement_callback = __method;
				}
				void register_getTypeName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTypeName_void_callback = __method;
				}
				virtual EarthView::World::Graphic::COverlayElement* createOverlayElement(const EVString& instanceName)
				{
					if (this->_gRef != NULL && this->m_createOverlayElement_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring instanceName_wch = instanceName;
						jstring instanceName_j = __env->NewString((const jchar*)instanceName_wch.getString(), instanceName_wch.size());
						jmethodID __method = __gr->getMethod("createOverlayElement_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , instanceName_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::COverlayElement *__values1 = (EarthView::World::Graphic::COverlayElement*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCharOverlayElementFactory::createOverlayElement(instanceName);
					}
				}
				virtual EVString getTypeName() const
				{
					if (this->_gRef != NULL && this->m_getTypeName_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getTypeName_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CCharOverlayElementFactory::getTypeName();
					}
				}
				virtual void destroyOverlayElement(EarthView::World::Graphic::COverlayElement* pElement)
				{
					if (this->_gRef != NULL && this->m_destroyOverlayElement_COverlayElement_callback != "" && this->isCustomExtend())
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
						jlong pElement_j = (jlong) pElement;
						jmethodID __method = __gr->getMethod("destroyOverlayElement_COverlayElement_callback");
						__env->CallVoidMethod(__obj, __method , pElement_j);
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
						return this->CCharOverlayElementFactory::destroyOverlayElement(pElement);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCCharOverlayElementFactoryProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CharOverlayElementFactory_createOverlayElement_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring instanceName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* instanceName_ch = (const ev_char*)__env->GetStringUTFChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringUTFChars(instanceName_j, (const char *)instanceName_ch);
				#else
				const ev_wchar* instanceName_ch = (const ev_wchar*)__env->GetStringChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringChars(instanceName_j, (const jchar *)instanceName_ch);
				#endif
				EarthView::World::Graphic::CCharOverlayElementFactory *pObjectX = (EarthView::World::Graphic::CCharOverlayElementFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCharOverlayElementFactoryProxy))
				{
					EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->EarthView::World::Graphic::CCharOverlayElementFactory::createOverlayElement(instanceName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->createOverlayElement(instanceName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CharOverlayElementFactory_register_1createOverlayElement_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCharOverlayElementFactoryProxy *pObjectX = (JCCharOverlayElementFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createOverlayElement_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createOverlayElement_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CharOverlayElementFactory_createOverlayElement_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring instanceName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* instanceName_ch = (const ev_char*)__env->GetStringUTFChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringUTFChars(instanceName_j, (const char *)instanceName_ch);
				#else
				const ev_wchar* instanceName_ch = (const ev_wchar*)__env->GetStringChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringChars(instanceName_j, (const jchar *)instanceName_ch);
				#endif
				EarthView::World::Graphic::CCharOverlayElementFactory *pObjectX = (EarthView::World::Graphic::CCharOverlayElementFactory*) pObjXXXX;
				EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->EarthView::World::Graphic::CCharOverlayElementFactory::createOverlayElement(instanceName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CharOverlayElementFactory_getTypeName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCharOverlayElementFactory *pObjectX = (EarthView::World::Graphic::CCharOverlayElementFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCharOverlayElementFactoryProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CCharOverlayElementFactory::getTypeName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getTypeName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CharOverlayElementFactory_register_1getTypeName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCharOverlayElementFactoryProxy *pObjectX = (JCCharOverlayElementFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTypeName_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTypeName_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CharOverlayElementFactory_getTypeName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCharOverlayElementFactory *pObjectX = (EarthView::World::Graphic::CCharOverlayElementFactory*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CCharOverlayElementFactory::getTypeName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CharOverlayElementFactory_register_1destroyOverlayElement_1COverlayElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCharOverlayElementFactoryProxy *pObjectX = (JCCharOverlayElementFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyOverlayElement_COverlayElement_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyOverlayElement_COverlayElement_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
