/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "projectmanager/projectmanager.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			namespace Database
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Utility
			{
				class JIProjectManagerListenerProxy : public EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener
				{
				 private:
					EarthView::World::Core::ev_string m_onProjectFilePreLoaded_void_callback;
					EarthView::World::Core::ev_string m_onProjectFileLoaded_void_callback;
					EarthView::World::Core::ev_string m_isProjectFileCanLoad_void_callback;
					EarthView::World::Core::ev_string m_onProjectLoadingProcessChanged_EVString_ev_uint8_callback;
				public:
					JIProjectManagerListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : IProjectManagerListener(pList)
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
					void register_onProjectFilePreLoaded_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onProjectFilePreLoaded_void_callback = __method;
					}
					void register_onProjectFileLoaded_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onProjectFileLoaded_void_callback = __method;
					}
					void register_isProjectFileCanLoad_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isProjectFileCanLoad_void_callback = __method;
					}
					void register_onProjectLoadingProcessChanged_EVString_ev_uint8_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onProjectLoadingProcessChanged_EVString_ev_uint8_callback = __method;
					}
					virtual void onProjectFilePreLoaded()
					{
						if (this->_gRef != NULL && this->m_onProjectFilePreLoaded_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onProjectFilePreLoaded_void_callback");
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
							return this->IProjectManagerListener::onProjectFilePreLoaded();
						}
					}
					virtual void onProjectFileLoaded()
					{
						if (this->_gRef != NULL && this->m_onProjectFileLoaded_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onProjectFileLoaded_void_callback");
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
							return this->IProjectManagerListener::onProjectFileLoaded();
						}
					}
					virtual ev_bool isProjectFileCanLoad()
					{
						if (this->_gRef != NULL && this->m_isProjectFileCanLoad_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isProjectFileCanLoad_void_callback");
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
							return this->IProjectManagerListener::isProjectFileCanLoad();
						}
					}
					virtual void onProjectLoadingProcessChanged(const EVString& tips, ev_uint8 percent)
					{
						if (this->_gRef != NULL && this->m_onProjectLoadingProcessChanged_EVString_ev_uint8_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring tips_wch = tips;
							jstring tips_j = __env->NewString((const jchar*)tips_wch.getString(), tips_wch.size());
							jshort percent_j = (jshort) percent;
							jmethodID __method = __gr->getMethod("onProjectLoadingProcessChanged_EVString_ev_uint8_callback");
							__env->CallVoidMethod(__obj, __method , tips_j, percent_j);
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
							return this->IProjectManagerListener::onProjectLoadingProcessChanged(tips, percent);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIProjectManagerListenerProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_00024Iprojectmanagerlistener_onProjectFilePreLoaded_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIProjectManagerListenerProxy))
					{
						pObjectX->EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener::onProjectFilePreLoaded();
					}
					else
					{
						pObjectX->onProjectFilePreLoaded();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_00024Iprojectmanagerlistener_register_1onProjectFilePreLoaded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIProjectManagerListenerProxy *pObjectX = (JIProjectManagerListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onProjectFilePreLoaded_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onProjectFilePreLoaded_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_00024Iprojectmanagerlistener_onProjectFilePreLoaded_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener::onProjectFilePreLoaded();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_00024Iprojectmanagerlistener_onProjectFileLoaded_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIProjectManagerListenerProxy))
					{
						pObjectX->EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener::onProjectFileLoaded();
					}
					else
					{
						pObjectX->onProjectFileLoaded();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_00024Iprojectmanagerlistener_register_1onProjectFileLoaded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIProjectManagerListenerProxy *pObjectX = (JIProjectManagerListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onProjectFileLoaded_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onProjectFileLoaded_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_00024Iprojectmanagerlistener_onProjectFileLoaded_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener::onProjectFileLoaded();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_00024Iprojectmanagerlistener_isProjectFileCanLoad_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIProjectManagerListenerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener::isProjectFileCanLoad();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isProjectFileCanLoad();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_00024Iprojectmanagerlistener_register_1isProjectFileCanLoad_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIProjectManagerListenerProxy *pObjectX = (JIProjectManagerListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isProjectFileCanLoad_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isProjectFileCanLoad_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_00024Iprojectmanagerlistener_isProjectFileCanLoad_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener::isProjectFileCanLoad();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_00024Iprojectmanagerlistener_onProjectLoadingProcessChanged_1EVString_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring tips_j, jshort percent_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* tips_ch = (const ev_char*)__env->GetStringUTFChars(tips_j,JNI_FALSE);
					const EVString tips = tips_ch;
					__env->ReleaseStringUTFChars(tips_j, (const char *)tips_ch);
					#else
					const ev_wchar* tips_ch = (const ev_wchar*)__env->GetStringChars(tips_j,JNI_FALSE);
					const EVString tips = tips_ch;
					__env->ReleaseStringChars(tips_j, (const jchar *)tips_ch);
					#endif
					ev_uint8 percent = (ev_uint8) percent_j;
					EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIProjectManagerListenerProxy))
					{
						pObjectX->EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener::onProjectLoadingProcessChanged(tips, percent);
					}
					else
					{
						pObjectX->onProjectLoadingProcessChanged(tips, percent);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_00024Iprojectmanagerlistener_register_1onProjectLoadingProcessChanged_1EVString_1ev_1uint8(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIProjectManagerListenerProxy *pObjectX = (JIProjectManagerListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onProjectLoadingProcessChanged_EVString_ev_uint8_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onProjectLoadingProcessChanged_EVString_ev_uint8_callback", "(Ljava/lang/String;S)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_00024Iprojectmanagerlistener_onProjectLoadingProcessChanged_1EVString_1ev_1uint8_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring tips_j, jshort percent_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* tips_ch = (const ev_char*)__env->GetStringUTFChars(tips_j,JNI_FALSE);
					const EVString tips = tips_ch;
					__env->ReleaseStringUTFChars(tips_j, (const char *)tips_ch);
					#else
					const ev_wchar* tips_ch = (const ev_wchar*)__env->GetStringChars(tips_j,JNI_FALSE);
					const EVString tips = tips_ch;
					__env->ReleaseStringChars(tips_j, (const jchar *)tips_ch);
					#endif
					ev_uint8 percent = (ev_uint8) percent_j;
					EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener::onProjectLoadingProcessChanged(tips, percent);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial::Utility::CProjectManager& __values1 = EarthView::World::Spatial::Utility::CProjectManager::getSingleton();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial::Utility::CProjectManager* __values1 = EarthView::World::Spatial::Utility::CProjectManager::getSingletonPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_setSymbolListener_1ISymbolListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pListener_j)
				{
					EarthView::World::Spatial::Display::ISymbolListener *ref_pListener = (EarthView::World::Spatial::Display::ISymbolListener*) ref_pListener_j;
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					pObjectX->setSymbolListener(ref_pListener);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getSymbolListener_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbolListener* __values1 = pObjectX->getSymbolListener();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_setMapFactory_1IMapFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pFactory_j)
				{
					EarthView::World::Spatial::Atlas::IMapFactory *ref_pFactory = (EarthView::World::Spatial::Atlas::IMapFactory*) ref_pFactory_j;
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					pObjectX->setMapFactory(ref_pFactory);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getMapFactory_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IMapFactory* __values1 = pObjectX->getMapFactory();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_setSceneFactory_1ISceneFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pFactory_j)
				{
					EarthView::World::Spatial::Atlas::ISceneFactory *ref_pFactory = (EarthView::World::Spatial::Atlas::ISceneFactory*) ref_pFactory_j;
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					pObjectX->setSceneFactory(ref_pFactory);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getSceneFactory_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ISceneFactory* __values1 = pObjectX->getSceneFactory();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_load_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strPrjFilePath_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strPrjFilePath_ch = (const ev_char*)__env->GetStringUTFChars(strPrjFilePath_j,JNI_FALSE);
					const EVString strPrjFilePath = strPrjFilePath_ch;
					__env->ReleaseStringUTFChars(strPrjFilePath_j, (const char *)strPrjFilePath_ch);
					#else
					const ev_wchar* strPrjFilePath_ch = (const ev_wchar*)__env->GetStringChars(strPrjFilePath_j,JNI_FALSE);
					const EVString strPrjFilePath = strPrjFilePath_ch;
					__env->ReleaseStringChars(strPrjFilePath_j, (const jchar *)strPrjFilePath_ch);
					#endif
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_int32 __values1 = pObjectX->load(strPrjFilePath);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_autoLoad_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strPrjFilePath_j, jboolean isDefaultPro_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strPrjFilePath_ch = (const ev_char*)__env->GetStringUTFChars(strPrjFilePath_j,JNI_FALSE);
					const EVString strPrjFilePath = strPrjFilePath_ch;
					__env->ReleaseStringUTFChars(strPrjFilePath_j, (const char *)strPrjFilePath_ch);
					#else
					const ev_wchar* strPrjFilePath_ch = (const ev_wchar*)__env->GetStringChars(strPrjFilePath_j,JNI_FALSE);
					const EVString strPrjFilePath = strPrjFilePath_ch;
					__env->ReleaseStringChars(strPrjFilePath_j, (const jchar *)strPrjFilePath_ch);
					#endif
					ev_bool isDefaultPro = (ev_bool) isDefaultPro_j;
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_int32 __values1 = pObjectX->autoLoad(strPrjFilePath, isDefaultPro);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_isLoading_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->isLoading();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_canRenew_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->canRenew();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_renew_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					pObjectX->renew();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_save_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->save();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_autoSave_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strPrjFilePath_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strPrjFilePath_ch = (const ev_char*)__env->GetStringUTFChars(strPrjFilePath_j,JNI_FALSE);
					const EVString strPrjFilePath = strPrjFilePath_ch;
					__env->ReleaseStringUTFChars(strPrjFilePath_j, (const char *)strPrjFilePath_ch);
					#else
					const ev_wchar* strPrjFilePath_ch = (const ev_wchar*)__env->GetStringChars(strPrjFilePath_j,JNI_FALSE);
					const EVString strPrjFilePath = strPrjFilePath_ch;
					__env->ReleaseStringChars(strPrjFilePath_j, (const jchar *)strPrjFilePath_ch);
					#endif
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->autoSave(strPrjFilePath);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_saveAs_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strPrjFilePath_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strPrjFilePath_ch = (const ev_char*)__env->GetStringUTFChars(strPrjFilePath_j,JNI_FALSE);
					const EVString strPrjFilePath = strPrjFilePath_ch;
					__env->ReleaseStringUTFChars(strPrjFilePath_j, (const char *)strPrjFilePath_ch);
					#else
					const ev_wchar* strPrjFilePath_ch = (const ev_wchar*)__env->GetStringChars(strPrjFilePath_j,JNI_FALSE);
					const EVString strPrjFilePath = strPrjFilePath_ch;
					__env->ReleaseStringChars(strPrjFilePath_j, (const jchar *)strPrjFilePath_ch);
					#endif
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->saveAs(strPrjFilePath);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_isProjectChanged_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->isProjectChanged();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_setProjectChanged_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					pObjectX->setProjectChanged();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getDataSourceCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getDataSourceCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_addDataSource_1EVString_1IDataSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strName_j, jlong ref_ds_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strName_ch = (const ev_char*)__env->GetStringUTFChars(strName_j,JNI_FALSE);
					const EVString strName = strName_ch;
					__env->ReleaseStringUTFChars(strName_j, (const char *)strName_ch);
					#else
					const ev_wchar* strName_ch = (const ev_wchar*)__env->GetStringChars(strName_j,JNI_FALSE);
					const EVString strName = strName_ch;
					__env->ReleaseStringChars(strName_j, (const jchar *)strName_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::IDataSource *ref_ds = (EarthView::World::Spatial::GeoDataset::IDataSource*) ref_ds_j;
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->addDataSource(strName, ref_ds);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_existDataSource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strName_ch = (const ev_char*)__env->GetStringUTFChars(strName_j,JNI_FALSE);
					const EVString strName = strName_ch;
					__env->ReleaseStringUTFChars(strName_j, (const char *)strName_ch);
					#else
					const ev_wchar* strName_ch = (const ev_wchar*)__env->GetStringChars(strName_j,JNI_FALSE);
					const EVString strName = strName_ch;
					__env->ReleaseStringChars(strName_j, (const jchar *)strName_ch);
					#endif
					const 					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->existDataSource(strName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getDataSource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strName_ch = (const ev_char*)__env->GetStringUTFChars(strName_j,JNI_FALSE);
					const EVString strName = strName_ch;
					__env->ReleaseStringUTFChars(strName_j, (const char *)strName_ch);
					#else
					const ev_wchar* strName_ch = (const ev_wchar*)__env->GetStringChars(strName_j,JNI_FALSE);
					const EVString strName = strName_ch;
					__env->ReleaseStringChars(strName_j, (const jchar *)strName_ch);
					#endif
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->getDataSource(strName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getDataSource_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->getDataSource(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_setDataSource_1EVString_1IDataSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strName_j, jlong ref_ds_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strName_ch = (const ev_char*)__env->GetStringUTFChars(strName_j,JNI_FALSE);
					const EVString strName = strName_ch;
					__env->ReleaseStringUTFChars(strName_j, (const char *)strName_ch);
					#else
					const ev_wchar* strName_ch = (const ev_wchar*)__env->GetStringChars(strName_j,JNI_FALSE);
					const EVString strName = strName_ch;
					__env->ReleaseStringChars(strName_j, (const jchar *)strName_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::IDataSource *ref_ds = (EarthView::World::Spatial::GeoDataset::IDataSource*) ref_ds_j;
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->setDataSource(strName, ref_ds);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_removeDataSource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strName_ch = (const ev_char*)__env->GetStringUTFChars(strName_j,JNI_FALSE);
					const EVString strName = strName_ch;
					__env->ReleaseStringUTFChars(strName_j, (const char *)strName_ch);
					#else
					const ev_wchar* strName_ch = (const ev_wchar*)__env->GetStringChars(strName_j,JNI_FALSE);
					const EVString strName = strName_ch;
					__env->ReleaseStringChars(strName_j, (const jchar *)strName_ch);
					#endif
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeDataSource(strName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_clearDataSource_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->clearDataSource();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_setDataSourceChanged_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					pObjectX->setDataSourceChanged();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_setSymbolFactory_1ISymbolFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pFactory_j)
				{
					EarthView::World::Spatial::Display::ISymbolFactory *pFactory = (EarthView::World::Spatial::Display::ISymbolFactory*) pFactory_j;
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					pObjectX->setSymbolFactory(pFactory);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getSymbolFactory_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbolFactory* __values1 = pObjectX->getSymbolFactory();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getSymbolCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getSymbolCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_addSymbol_1EVString_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strID_j, jlong sym_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strID_ch = (const ev_char*)__env->GetStringUTFChars(strID_j,JNI_FALSE);
					const EVString strID = strID_ch;
					__env->ReleaseStringUTFChars(strID_j, (const char *)strID_ch);
					#else
					const ev_wchar* strID_ch = (const ev_wchar*)__env->GetStringChars(strID_j,JNI_FALSE);
					const EVString strID = strID_ch;
					__env->ReleaseStringChars(strID_j, (const jchar *)strID_ch);
					#endif
					EarthView::World::Spatial::Display::ISymbol *sym = (EarthView::World::Spatial::Display::ISymbol*) sym_j;
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->addSymbol(strID, sym);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_existSymbol_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strID_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strID_ch = (const ev_char*)__env->GetStringUTFChars(strID_j,JNI_FALSE);
					const EVString strID = strID_ch;
					__env->ReleaseStringUTFChars(strID_j, (const char *)strID_ch);
					#else
					const ev_wchar* strID_ch = (const ev_wchar*)__env->GetStringChars(strID_j,JNI_FALSE);
					const EVString strID = strID_ch;
					__env->ReleaseStringChars(strID_j, (const jchar *)strID_ch);
					#endif
					const 					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->existSymbol(strID);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_existImageInAnySymbol_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strImageID_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strImageID_ch = (const ev_char*)__env->GetStringUTFChars(strImageID_j,JNI_FALSE);
					const EVString strImageID = strImageID_ch;
					__env->ReleaseStringUTFChars(strImageID_j, (const char *)strImageID_ch);
					#else
					const ev_wchar* strImageID_ch = (const ev_wchar*)__env->GetStringChars(strImageID_j,JNI_FALSE);
					const EVString strImageID = strImageID_ch;
					__env->ReleaseStringChars(strImageID_j, (const jchar *)strImageID_ch);
					#endif
					const 					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->existImageInAnySymbol(strImageID);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getSymbol_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strID_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strID_ch = (const ev_char*)__env->GetStringUTFChars(strID_j,JNI_FALSE);
					const EVString strID = strID_ch;
					__env->ReleaseStringUTFChars(strID_j, (const char *)strID_ch);
					#else
					const ev_wchar* strID_ch = (const ev_wchar*)__env->GetStringChars(strID_j,JNI_FALSE);
					const EVString strID = strID_ch;
					__env->ReleaseStringChars(strID_j, (const jchar *)strID_ch);
					#endif
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getSymbol(strID);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getSymbol_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getSymbol(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_setSymbol_1EVString_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strID_j, jlong sym_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strID_ch = (const ev_char*)__env->GetStringUTFChars(strID_j,JNI_FALSE);
					const EVString strID = strID_ch;
					__env->ReleaseStringUTFChars(strID_j, (const char *)strID_ch);
					#else
					const ev_wchar* strID_ch = (const ev_wchar*)__env->GetStringChars(strID_j,JNI_FALSE);
					const EVString strID = strID_ch;
					__env->ReleaseStringChars(strID_j, (const jchar *)strID_ch);
					#endif
					EarthView::World::Spatial::Display::ISymbol *sym = (EarthView::World::Spatial::Display::ISymbol*) sym_j;
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->setSymbol(strID, sym);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_removeSymbol_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strID_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strID_ch = (const ev_char*)__env->GetStringUTFChars(strID_j,JNI_FALSE);
					const EVString strID = strID_ch;
					__env->ReleaseStringUTFChars(strID_j, (const char *)strID_ch);
					#else
					const ev_wchar* strID_ch = (const ev_wchar*)__env->GetStringChars(strID_j,JNI_FALSE);
					const EVString strID = strID_ch;
					__env->ReleaseStringChars(strID_j, (const jchar *)strID_ch);
					#endif
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeSymbol(strID);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_clearSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->clearSymbol();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getMapCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getMapCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_addMap_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pMap_j)
				{
					EarthView::World::Spatial::Atlas::IMap *ref_pMap = (EarthView::World::Spatial::Atlas::IMap*) ref_pMap_j;
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->addMap(ref_pMap);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getMap_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->getMap(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getMap_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strMapName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strMapName_ch = (const ev_char*)__env->GetStringUTFChars(strMapName_j,JNI_FALSE);
					const EVString strMapName = strMapName_ch;
					__env->ReleaseStringUTFChars(strMapName_j, (const char *)strMapName_ch);
					#else
					const ev_wchar* strMapName_ch = (const ev_wchar*)__env->GetStringChars(strMapName_j,JNI_FALSE);
					const EVString strMapName = strMapName_ch;
					__env->ReleaseStringChars(strMapName_j, (const jchar *)strMapName_ch);
					#endif
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->getMap(strMapName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_renameMap_1IMap_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMap_j, jstring newName_j)
				{
					EarthView::World::Spatial::Atlas::IMap *pMap = (EarthView::World::Spatial::Atlas::IMap*) pMap_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
					const EVString newName = newName_ch;
					__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
					#else
					const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
					const EVString newName = newName_ch;
					__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
					#endif
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					pObjectX->renameMap(pMap, newName);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_existMap_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strMapName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strMapName_ch = (const ev_char*)__env->GetStringUTFChars(strMapName_j,JNI_FALSE);
					const EVString strMapName = strMapName_ch;
					__env->ReleaseStringUTFChars(strMapName_j, (const char *)strMapName_ch);
					#else
					const ev_wchar* strMapName_ch = (const ev_wchar*)__env->GetStringChars(strMapName_j,JNI_FALSE);
					const EVString strMapName = strMapName_ch;
					__env->ReleaseStringChars(strMapName_j, (const jchar *)strMapName_ch);
					#endif
					const 					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->existMap(strMapName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_removeMap_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeMap(index);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_removeMap_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strMapName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strMapName_ch = (const ev_char*)__env->GetStringUTFChars(strMapName_j,JNI_FALSE);
					const EVString strMapName = strMapName_ch;
					__env->ReleaseStringUTFChars(strMapName_j, (const char *)strMapName_ch);
					#else
					const ev_wchar* strMapName_ch = (const ev_wchar*)__env->GetStringChars(strMapName_j,JNI_FALSE);
					const EVString strMapName = strMapName_ch;
					__env->ReleaseStringChars(strMapName_j, (const jchar *)strMapName_ch);
					#endif
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeMap(strMapName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_clearMap_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					pObjectX->clearMap();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_setCurrentMap_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strMapName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strMapName_ch = (const ev_char*)__env->GetStringUTFChars(strMapName_j,JNI_FALSE);
					const EVString strMapName = strMapName_ch;
					__env->ReleaseStringUTFChars(strMapName_j, (const char *)strMapName_ch);
					#else
					const ev_wchar* strMapName_ch = (const ev_wchar*)__env->GetStringChars(strMapName_j,JNI_FALSE);
					const EVString strMapName = strMapName_ch;
					__env->ReleaseStringChars(strMapName_j, (const jchar *)strMapName_ch);
					#endif
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->setCurrentMap(strMapName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getCurrentMap_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					const EVString& __values1 = pObjectX->getCurrentMap();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_setMapChanged_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					pObjectX->setMapChanged();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_setSceneChanged_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					pObjectX->setSceneChanged();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getSceneCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getSceneCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_addScene_1IScene(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pScene_j)
				{
					EarthView::World::Spatial::Atlas::IScene *ref_pScene = (EarthView::World::Spatial::Atlas::IScene*) ref_pScene_j;
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->addScene(ref_pScene);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getScene_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IScene* __values1 = pObjectX->getScene(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getScene_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strSceneName_j)
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
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IScene* __values1 = pObjectX->getScene(strSceneName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_existScene_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strSceneName_j)
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
					const 					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->existScene(strSceneName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_removeScene_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeScene(index);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_removeScene_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strSceneName_j)
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
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeScene(strSceneName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_clearScene_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					pObjectX->clearScene();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_addLayout_1IPageLayout(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layout_j)
				{
					EarthView::World::Spatial::Carto::IPageLayout *ref_layout = (EarthView::World::Spatial::Carto::IPageLayout*) ref_layout_j;
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->addLayout(ref_layout);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getLayoutCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getLayoutCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getLayout_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					EarthView::World::Spatial::Carto::IPageLayout* __values1 = pObjectX->getLayout(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getLayout_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strLayoutName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strLayoutName_ch = (const ev_char*)__env->GetStringUTFChars(strLayoutName_j,JNI_FALSE);
					const EVString strLayoutName = strLayoutName_ch;
					__env->ReleaseStringUTFChars(strLayoutName_j, (const char *)strLayoutName_ch);
					#else
					const ev_wchar* strLayoutName_ch = (const ev_wchar*)__env->GetStringChars(strLayoutName_j,JNI_FALSE);
					const EVString strLayoutName = strLayoutName_ch;
					__env->ReleaseStringChars(strLayoutName_j, (const jchar *)strLayoutName_ch);
					#endif
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					EarthView::World::Spatial::Carto::IPageLayout* __values1 = pObjectX->getLayout(strLayoutName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_renameLayout_1IPageLayout_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pLayout_j, jstring newName_j)
				{
					EarthView::World::Spatial::Carto::IPageLayout *pLayout = (EarthView::World::Spatial::Carto::IPageLayout*) pLayout_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
					const EVString newName = newName_ch;
					__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
					#else
					const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
					const EVString newName = newName_ch;
					__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
					#endif
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					pObjectX->renameLayout(pLayout, newName);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_existLayout_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strLayoutName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strLayoutName_ch = (const ev_char*)__env->GetStringUTFChars(strLayoutName_j,JNI_FALSE);
					const EVString strLayoutName = strLayoutName_ch;
					__env->ReleaseStringUTFChars(strLayoutName_j, (const char *)strLayoutName_ch);
					#else
					const ev_wchar* strLayoutName_ch = (const ev_wchar*)__env->GetStringChars(strLayoutName_j,JNI_FALSE);
					const EVString strLayoutName = strLayoutName_ch;
					__env->ReleaseStringChars(strLayoutName_j, (const jchar *)strLayoutName_ch);
					#endif
					const 					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->existLayout(strLayoutName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_removeLayout_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeLayout(index);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_removeLayout_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strLayoutName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strLayoutName_ch = (const ev_char*)__env->GetStringUTFChars(strLayoutName_j,JNI_FALSE);
					const EVString strLayoutName = strLayoutName_ch;
					__env->ReleaseStringUTFChars(strLayoutName_j, (const char *)strLayoutName_ch);
					#else
					const ev_wchar* strLayoutName_ch = (const ev_wchar*)__env->GetStringChars(strLayoutName_j,JNI_FALSE);
					const EVString strLayoutName = strLayoutName_ch;
					__env->ReleaseStringChars(strLayoutName_j, (const jchar *)strLayoutName_ch);
					#endif
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeLayout(strLayoutName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_clearLayout_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					pObjectX->clearLayout();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_setCurrentLayout_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strLayoutName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strLayoutName_ch = (const ev_char*)__env->GetStringUTFChars(strLayoutName_j,JNI_FALSE);
					const EVString strLayoutName = strLayoutName_ch;
					__env->ReleaseStringUTFChars(strLayoutName_j, (const char *)strLayoutName_ch);
					#else
					const ev_wchar* strLayoutName_ch = (const ev_wchar*)__env->GetStringChars(strLayoutName_j,JNI_FALSE);
					const EVString strLayoutName = strLayoutName_ch;
					__env->ReleaseStringChars(strLayoutName_j, (const jchar *)strLayoutName_ch);
					#endif
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->setCurrentLayout(strLayoutName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getCurrentLayout_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					const EVString& __values1 = pObjectX->getCurrentLayout();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_setCurrentScene_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strSceneName_j)
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
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->setCurrentScene(strSceneName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getCurrentScene_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					const EVString& __values1 = pObjectX->getCurrentScene();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_setExtension_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring NodeTxt_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* NodeTxt_ch = (const ev_char*)__env->GetStringUTFChars(NodeTxt_j,JNI_FALSE);
					const EVString NodeTxt = NodeTxt_ch;
					__env->ReleaseStringUTFChars(NodeTxt_j, (const char *)NodeTxt_ch);
					#else
					const ev_wchar* NodeTxt_ch = (const ev_wchar*)__env->GetStringChars(NodeTxt_j,JNI_FALSE);
					const EVString NodeTxt = NodeTxt_ch;
					__env->ReleaseStringChars(NodeTxt_j, (const jchar *)NodeTxt_ch);
					#endif
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					pObjectX->setExtension(NodeTxt);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getExtension_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					const EVString& __values1 = pObjectX->getExtension();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getProjectFilePath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					const EVString& __values1 = pObjectX->getProjectFilePath();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getRelativePathReferToProjectPath_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring fullpath_j, jlong relpath_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* fullpath_ch = (const ev_char*)__env->GetStringUTFChars(fullpath_j,JNI_FALSE);
					const EVString fullpath = fullpath_ch;
					__env->ReleaseStringUTFChars(fullpath_j, (const char *)fullpath_ch);
					#else
					const ev_wchar* fullpath_ch = (const ev_wchar*)__env->GetStringChars(fullpath_j,JNI_FALSE);
					const EVString fullpath = fullpath_ch;
					__env->ReleaseStringChars(fullpath_j, (const jchar *)fullpath_ch);
					#endif
					EVString &relpath = *(EVString*) relpath_j;
					const 					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->getRelativePathReferToProjectPath(fullpath, relpath);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_getFullPathReferToProjectPath_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring relpath_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* relpath_ch = (const ev_char*)__env->GetStringUTFChars(relpath_j,JNI_FALSE);
					const EVString relpath = relpath_ch;
					__env->ReleaseStringUTFChars(relpath_j, (const char *)relpath_ch);
					#else
					const ev_wchar* relpath_ch = (const ev_wchar*)__env->GetStringChars(relpath_j,JNI_FALSE);
					const EVString relpath = relpath_ch;
					__env->ReleaseStringChars(relpath_j, (const jchar *)relpath_ch);
					#endif
					const 					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					EVString __values1 = pObjectX->getFullPathReferToProjectPath(relpath);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_addListener_1IProjectManagerListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
				{
					EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener *ref_listener = (EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*) ref_listener_j;
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->addListener(ref_listener);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjectManager_removeListener_1IProjectManagerListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
				{
					EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener *listener = (EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*) listener_j;
					EarthView::World::Spatial::Utility::CProjectManager *pObjectX = (EarthView::World::Spatial::Utility::CProjectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeListener(listener);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
