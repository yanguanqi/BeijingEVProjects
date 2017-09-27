/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "color/colorrampfactory.h"
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
				class JCColorRampFactoryProxy : public EarthView::World::Spatial::Display::CColorRampFactory
				{
				 private:
					EarthView::World::Core::ev_string m_createColorRampFromStream_CDataStream_callback;
					EarthView::World::Core::ev_string m_createColorRampFromXmlElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_destroyColorRamp_CColorRamp_callback;
					EarthView::World::Core::ev_string m_destroyColorRamps_void_callback;
				public:
					JCColorRampFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CColorRampFactory(pList)
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
					void register_createColorRampFromStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createColorRampFromStream_CDataStream_callback = __method;
					}
					void register_createColorRampFromXmlElement_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createColorRampFromXmlElement_CXmlElement_callback = __method;
					}
					void register_destroyColorRamp_CColorRamp_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_destroyColorRamp_CColorRamp_callback = __method;
					}
					void register_destroyColorRamps_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_destroyColorRamps_void_callback = __method;
					}
					virtual EarthView::World::Spatial::Display::CColorRamp* createColorRampFromStream(EarthView::World::Core::CDataStream& stream)
					{
						if (this->_gRef != NULL && this->m_createColorRampFromStream_CDataStream_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("createColorRampFromStream_CDataStream_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , stream_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::CColorRamp *__values1 = (EarthView::World::Spatial::Display::CColorRamp*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CColorRampFactory::createColorRampFromStream(stream);
						}
					}
					virtual EarthView::World::Spatial::Display::CColorRamp* createColorRampFromXmlElement(EarthView::World::Core::CXmlElement& element)
					{
						if (this->_gRef != NULL && this->m_createColorRampFromXmlElement_CXmlElement_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("createColorRampFromXmlElement_CXmlElement_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , element_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::CColorRamp *__values1 = (EarthView::World::Spatial::Display::CColorRamp*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CColorRampFactory::createColorRampFromXmlElement(element);
						}
					}
					virtual void destroyColorRamp(EarthView::World::Spatial::Display::CColorRamp* pColorRamp)
					{
						if (this->_gRef != NULL && this->m_destroyColorRamp_CColorRamp_callback != "" && this->isCustomExtend())
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
							jlong pColorRamp_j = (jlong) pColorRamp;
							jmethodID __method = __gr->getMethod("destroyColorRamp_CColorRamp_callback");
							__env->CallVoidMethod(__obj, __method , pColorRamp_j);
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
							return this->CColorRampFactory::destroyColorRamp(pColorRamp);
						}
					}
					virtual void destroyColorRamps()
					{
						if (this->_gRef != NULL && this->m_destroyColorRamps_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("destroyColorRamps_void_callback");
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
							return this->CColorRampFactory::destroyColorRamps();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCColorRampFactoryProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_ColorRampFactory_getInstance_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial::Display::CColorRampFactory* __values1 = EarthView::World::Spatial::Display::CColorRampFactory::getInstance();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_ColorRampFactory_createColorRampFromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Display::CColorRampFactory *pObjectX = (EarthView::World::Spatial::Display::CColorRampFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCColorRampFactoryProxy))
					{
						EarthView::World::Spatial::Display::CColorRamp* __values1 = pObjectX->EarthView::World::Spatial::Display::CColorRampFactory::createColorRampFromStream(stream);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::CColorRamp* __values1 = pObjectX->createColorRampFromStream(stream);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ColorRampFactory_register_1createColorRampFromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCColorRampFactoryProxy *pObjectX = (JCColorRampFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createColorRampFromStream_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createColorRampFromStream_CDataStream_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_ColorRampFactory_createColorRampFromStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Display::CColorRampFactory *pObjectX = (EarthView::World::Spatial::Display::CColorRampFactory*) pObjXXXX;
					EarthView::World::Spatial::Display::CColorRamp* __values1 = pObjectX->EarthView::World::Spatial::Display::CColorRampFactory::createColorRampFromStream(stream);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_ColorRampFactory_createColorRampFromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Display::CColorRampFactory *pObjectX = (EarthView::World::Spatial::Display::CColorRampFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCColorRampFactoryProxy))
					{
						EarthView::World::Spatial::Display::CColorRamp* __values1 = pObjectX->EarthView::World::Spatial::Display::CColorRampFactory::createColorRampFromXmlElement(element);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::CColorRamp* __values1 = pObjectX->createColorRampFromXmlElement(element);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ColorRampFactory_register_1createColorRampFromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCColorRampFactoryProxy *pObjectX = (JCColorRampFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createColorRampFromXmlElement_CXmlElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createColorRampFromXmlElement_CXmlElement_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_ColorRampFactory_createColorRampFromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Display::CColorRampFactory *pObjectX = (EarthView::World::Spatial::Display::CColorRampFactory*) pObjXXXX;
					EarthView::World::Spatial::Display::CColorRamp* __values1 = pObjectX->EarthView::World::Spatial::Display::CColorRampFactory::createColorRampFromXmlElement(element);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ColorRampFactory_destroyColorRamp_1CColorRamp(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pColorRamp_j)
				{
					EarthView::World::Spatial::Display::CColorRamp *pColorRamp = (EarthView::World::Spatial::Display::CColorRamp*) pColorRamp_j;
					EarthView::World::Spatial::Display::CColorRampFactory *pObjectX = (EarthView::World::Spatial::Display::CColorRampFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCColorRampFactoryProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CColorRampFactory::destroyColorRamp(pColorRamp);
					}
					else
					{
						pObjectX->destroyColorRamp(pColorRamp);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ColorRampFactory_register_1destroyColorRamp_1CColorRamp(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCColorRampFactoryProxy *pObjectX = (JCColorRampFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_destroyColorRamp_CColorRamp_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"destroyColorRamp_CColorRamp_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ColorRampFactory_destroyColorRamp_1CColorRamp_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pColorRamp_j)
				{
					EarthView::World::Spatial::Display::CColorRamp *pColorRamp = (EarthView::World::Spatial::Display::CColorRamp*) pColorRamp_j;
					EarthView::World::Spatial::Display::CColorRampFactory *pObjectX = (EarthView::World::Spatial::Display::CColorRampFactory*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CColorRampFactory::destroyColorRamp(pColorRamp);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ColorRampFactory_destroyColorRamps_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CColorRampFactory *pObjectX = (EarthView::World::Spatial::Display::CColorRampFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCColorRampFactoryProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CColorRampFactory::destroyColorRamps();
					}
					else
					{
						pObjectX->destroyColorRamps();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ColorRampFactory_register_1destroyColorRamps_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCColorRampFactoryProxy *pObjectX = (JCColorRampFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_destroyColorRamps_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"destroyColorRamps_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ColorRampFactory_destroyColorRamps_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CColorRampFactory *pObjectX = (EarthView::World::Spatial::Display::CColorRampFactory*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CColorRampFactory::destroyColorRamps();
				}
			}
		}
	}
}
