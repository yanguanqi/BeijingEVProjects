/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/application.h"
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
			namespace SystemUI
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Core
		{
			class JCApplicationProxy : public EarthView::World::Core::CApplication
			{
			 private:
				EarthView::World::Core::ev_string m_onEvent_CEvent_callback;
				EarthView::World::Core::ev_string m_onTimerEvent_CTimerEvent_callback;
				EarthView::World::Core::ev_string m_onCustomEvent_CEvent_callback;
			public:
				JCApplicationProxy(EarthView::World::Core::CNameValuePairList *pList) : CApplication(pList)
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
				void register_onEvent_CEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onEvent_CEvent_callback = __method;
				}
				void register_onTimerEvent_CTimerEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onTimerEvent_CTimerEvent_callback = __method;
				}
				void register_onCustomEvent_CEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onCustomEvent_CEvent_callback = __method;
				}
				virtual ev_bool onEvent(EarthView::World::Core::CEvent* e)
				{
					if (this->_gRef != NULL && this->m_onEvent_CEvent_callback != "" && this->isCustomExtend())
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
						jlong e_j = (jlong) e;
						jmethodID __method = __gr->getMethod("onEvent_CEvent_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
						return this->CApplication::onEvent(e);
					}
				}
				virtual void onTimerEvent(EarthView::World::Core::CTimerEvent* e)
				{
					if (this->_gRef != NULL && this->m_onTimerEvent_CTimerEvent_callback != "" && this->isCustomExtend())
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
						jlong e_j = (jlong) e;
						jmethodID __method = __gr->getMethod("onTimerEvent_CTimerEvent_callback");
						__env->CallVoidMethod(__obj, __method , e_j);
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
						return this->CApplication::onTimerEvent(e);
					}
				}
				virtual void onCustomEvent(EarthView::World::Core::CEvent* e)
				{
					if (this->_gRef != NULL && this->m_onCustomEvent_CEvent_callback != "" && this->isCustomExtend())
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
						jlong e_j = (jlong) e;
						jmethodID __method = __gr->getMethod("onCustomEvent_CEvent_callback");
						__env->CallVoidMethod(__obj, __method , e_j);
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
						return this->CApplication::onCustomEvent(e);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCApplicationProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Application_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Core::CApplication* __values1 = EarthView::World::Core::CApplication::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Application_init_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CApplication *pObjectX = (EarthView::World::Core::CApplication*) pObjXXXX;
				bool __values1 = pObjectX->init();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Application_unInit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CApplication *pObjectX = (EarthView::World::Core::CApplication*) pObjXXXX;
				pObjectX->unInit();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Application_processEvents_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CApplication *pObjectX = (EarthView::World::Core::CApplication*) pObjXXXX;
				pObjectX->processEvents();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Application_getViewManager_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CApplication *pObjectX = (EarthView::World::Core::CApplication*) pObjXXXX;
				CViewManager* __values1 = pObjectX->getViewManager();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Application_getCommandPool_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CApplication *pObjectX = (EarthView::World::Core::CApplication*) pObjXXXX;
				CCommandPool* __values1 = pObjectX->getCommandPool();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Application_isInitialized_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CApplication *pObjectX = (EarthView::World::Core::CApplication*) pObjXXXX;
				ev_bool __values1 = pObjectX->isInitialized();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Application_getMenuCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CApplication *pObjectX = (EarthView::World::Core::CApplication*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getMenuCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Application_getMenu_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong type_j)
			{
				ev_uint32 type = (ev_uint32) type_j;
				const 				EarthView::World::Core::CApplication *pObjectX = (EarthView::World::Core::CApplication*) pObjXXXX;
				EarthView::World::Spatial::SystemUI::IMenu* __values1 = pObjectX->getMenu(type);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Application_addMenu_1IMenu(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_menu_j)
			{
				EarthView::World::Spatial::SystemUI::IMenu *ref_menu = (EarthView::World::Spatial::SystemUI::IMenu*) ref_menu_j;
				EarthView::World::Core::CApplication *pObjectX = (EarthView::World::Core::CApplication*) pObjXXXX;
				pObjectX->addMenu(ref_menu);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Application_removeMenu_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Core::CApplication *pObjectX = (EarthView::World::Core::CApplication*) pObjXXXX;
				pObjectX->removeMenu(index);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Application_getToolBarCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CApplication *pObjectX = (EarthView::World::Core::CApplication*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getToolBarCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Application_getToolBar_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong type_j)
			{
				ev_uint32 type = (ev_uint32) type_j;
				const 				EarthView::World::Core::CApplication *pObjectX = (EarthView::World::Core::CApplication*) pObjXXXX;
				EarthView::World::Spatial::SystemUI::IToolBar* __values1 = pObjectX->getToolBar(type);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Application_addToolBar_1IToolBar(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_bar_j)
			{
				EarthView::World::Spatial::SystemUI::IToolBar *ref_bar = (EarthView::World::Spatial::SystemUI::IToolBar*) ref_bar_j;
				EarthView::World::Core::CApplication *pObjectX = (EarthView::World::Core::CApplication*) pObjXXXX;
				pObjectX->addToolBar(ref_bar);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Application_removeToolBar_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Core::CApplication *pObjectX = (EarthView::World::Core::CApplication*) pObjXXXX;
				pObjectX->removeToolBar(index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Application_setActionFactory_1IActionFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_factory_j)
			{
				EarthView::World::Spatial::SystemUI::IActionFactory *ref_factory = (EarthView::World::Spatial::SystemUI::IActionFactory*) ref_factory_j;
				EarthView::World::Core::CApplication *pObjectX = (EarthView::World::Core::CApplication*) pObjXXXX;
				pObjectX->setActionFactory(ref_factory);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Application_getActionFactory_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CApplication *pObjectX = (EarthView::World::Core::CApplication*) pObjXXXX;
				EarthView::World::Spatial::SystemUI::IActionFactory* __values1 = pObjectX->getActionFactory();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Application_init1_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CApplication *pObjectX = (EarthView::World::Core::CApplication*) pObjXXXX;
				pObjectX->init1();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Application_init2_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CApplication *pObjectX = (EarthView::World::Core::CApplication*) pObjXXXX;
				pObjectX->init2();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Application_onEvent_1CEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
				EarthView::World::Core::CApplication *pObjectX = (EarthView::World::Core::CApplication*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCApplicationProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CApplication::onEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->onEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Application_register_1onEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCApplicationProxy *pObjectX = (JCApplicationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onEvent_CEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onEvent_CEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Application_onEvent_1CEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
				EarthView::World::Core::CApplication *pObjectX = (EarthView::World::Core::CApplication*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CApplication::onEvent(e);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Application_register_1onTimerEvent_1CTimerEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCApplicationProxy *pObjectX = (JCApplicationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onTimerEvent_CTimerEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onTimerEvent_CTimerEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Application_register_1onCustomEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCApplicationProxy *pObjectX = (JCApplicationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onCustomEvent_CEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onCustomEvent_CEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
