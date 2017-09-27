/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/iscenefactory.h"
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
				class JISceneFactoryProxy : public EarthView::World::Spatial::Atlas::ISceneFactory
				{
				 private:
					EarthView::World::Core::ev_string m_newScene_EVString_callback;
					EarthView::World::Core::ev_string m_createScene_CDataStream_callback;
					EarthView::World::Core::ev_string m_createScene_EVString_callback;
					EarthView::World::Core::ev_string m_destroyScene_IScene_callback;
				public:
					JISceneFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : ISceneFactory(pList)
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
					C_DISABLE_COPY(JISceneFactoryProxy)
				public:
					void register_newScene_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_newScene_EVString_callback = __method;
					}
					void register_createScene_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createScene_CDataStream_callback = __method;
					}
					void register_createScene_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createScene_EVString_callback = __method;
					}
					void register_destroyScene_IScene_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_destroyScene_IScene_callback = __method;
					}
					virtual EarthView::World::Spatial::Atlas::IScene* newScene(const EVString& strSceneName) const
					{
						if (this->_gRef != NULL && this->m_newScene_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring strSceneName_wch = strSceneName;
							jstring strSceneName_j = __env->NewString((const jchar*)strSceneName_wch.getString(), strSceneName_wch.size());
							jmethodID __method = __gr->getMethod("newScene_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , strSceneName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Atlas::IScene *__values1 = (EarthView::World::Spatial::Atlas::IScene*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ISceneFactory::newScene(strSceneName);
						}
					}
					virtual EarthView::World::Spatial::Atlas::IScene* createScene(EarthView::World::Core::CDataStream& stream) const
					{
						if (this->_gRef != NULL && this->m_createScene_CDataStream_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("createScene_CDataStream_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , stream_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Atlas::IScene *__values1 = (EarthView::World::Spatial::Atlas::IScene*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ISceneFactory::createScene(stream);
						}
					}
					virtual EarthView::World::Spatial::Atlas::IScene* createScene(const EVString& xml) const
					{
						if (this->_gRef != NULL && this->m_createScene_EVString_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("createScene_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , xml_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Atlas::IScene *__values1 = (EarthView::World::Spatial::Atlas::IScene*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ISceneFactory::createScene(xml);
						}
					}
					virtual void destroyScene(EarthView::World::Spatial::Atlas::IScene* pScene) const
					{
						if (this->_gRef != NULL && this->m_destroyScene_IScene_callback != "" && this->isCustomExtend())
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
							jlong pScene_j = (jlong) pScene;
							jmethodID __method = __gr->getMethod("destroyScene_IScene_callback");
							__env->CallVoidMethod(__obj, __method , pScene_j);
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
							return this->ISceneFactory::destroyScene(pScene);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JISceneFactoryProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Iscenefactory_newScene_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strSceneName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strSceneName_ch = (const ev_char*)__env->GetStringUTFChars(strSceneName_j,JNI_FALSE);
					const EVString strSceneName = strSceneName_ch;
					__env->ReleaseStringUTFChars(strSceneName_j, (const char *)strSceneName_ch);
					#else
					const ev_wchar* strSceneName_ch = (const ev_wchar*)__env->GetStringChars(strSceneName_j,JNI_FALSE);
					const EVString strSceneName = strSceneName_ch;
					__env->ReleaseStringChars(strSceneName_j, (const jchar *)strSceneName_ch);
					#endif
					const 					EarthView::World::Spatial::Atlas::ISceneFactory *pObjectX = (EarthView::World::Spatial::Atlas::ISceneFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISceneFactoryProxy))
					{
						EarthView::World::Spatial::Atlas::IScene* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISceneFactory::newScene(strSceneName);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::IScene* __values1 = pObjectX->newScene(strSceneName);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Iscenefactory_register_1newScene_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISceneFactoryProxy *pObjectX = (JISceneFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_newScene_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"newScene_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Iscenefactory_newScene_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strSceneName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strSceneName_ch = (const ev_char*)__env->GetStringUTFChars(strSceneName_j,JNI_FALSE);
					const EVString strSceneName = strSceneName_ch;
					__env->ReleaseStringUTFChars(strSceneName_j, (const char *)strSceneName_ch);
					#else
					const ev_wchar* strSceneName_ch = (const ev_wchar*)__env->GetStringChars(strSceneName_j,JNI_FALSE);
					const EVString strSceneName = strSceneName_ch;
					__env->ReleaseStringChars(strSceneName_j, (const jchar *)strSceneName_ch);
					#endif
					const 					EarthView::World::Spatial::Atlas::ISceneFactory *pObjectX = (EarthView::World::Spatial::Atlas::ISceneFactory*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IScene* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISceneFactory::newScene(strSceneName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Iscenefactory_createScene_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Atlas::ISceneFactory *pObjectX = (EarthView::World::Spatial::Atlas::ISceneFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISceneFactoryProxy))
					{
						EarthView::World::Spatial::Atlas::IScene* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISceneFactory::createScene(stream);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::IScene* __values1 = pObjectX->createScene(stream);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Iscenefactory_register_1createScene_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISceneFactoryProxy *pObjectX = (JISceneFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createScene_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createScene_CDataStream_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Iscenefactory_createScene_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Atlas::ISceneFactory *pObjectX = (EarthView::World::Spatial::Atlas::ISceneFactory*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IScene* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISceneFactory::createScene(stream);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Iscenefactory_createScene_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring xml_j)
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
					const 					EarthView::World::Spatial::Atlas::ISceneFactory *pObjectX = (EarthView::World::Spatial::Atlas::ISceneFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISceneFactoryProxy))
					{
						EarthView::World::Spatial::Atlas::IScene* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISceneFactory::createScene(xml);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::IScene* __values1 = pObjectX->createScene(xml);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Iscenefactory_register_1createScene_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISceneFactoryProxy *pObjectX = (JISceneFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createScene_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createScene_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Iscenefactory_createScene_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring xml_j)
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
					const 					EarthView::World::Spatial::Atlas::ISceneFactory *pObjectX = (EarthView::World::Spatial::Atlas::ISceneFactory*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IScene* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISceneFactory::createScene(xml);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Iscenefactory_destroyScene_1IScene(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pScene_j)
				{
					EarthView::World::Spatial::Atlas::IScene *pScene = (EarthView::World::Spatial::Atlas::IScene*) pScene_j;
					const 					EarthView::World::Spatial::Atlas::ISceneFactory *pObjectX = (EarthView::World::Spatial::Atlas::ISceneFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISceneFactoryProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ISceneFactory::destroyScene(pScene);
					}
					else
					{
						pObjectX->destroyScene(pScene);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Iscenefactory_register_1destroyScene_1IScene(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISceneFactoryProxy *pObjectX = (JISceneFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_destroyScene_IScene_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"destroyScene_IScene_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Iscenefactory_destroyScene_1IScene_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pScene_j)
				{
					EarthView::World::Spatial::Atlas::IScene *pScene = (EarthView::World::Spatial::Atlas::IScene*) pScene_j;
					const 					EarthView::World::Spatial::Atlas::ISceneFactory *pObjectX = (EarthView::World::Spatial::Atlas::ISceneFactory*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ISceneFactory::destroyScene(pScene);
				}
			}
		}
	}
}
