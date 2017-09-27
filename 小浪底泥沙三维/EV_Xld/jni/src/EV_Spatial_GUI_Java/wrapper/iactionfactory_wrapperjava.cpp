/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/iactionfactory.h"
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
				class JIActionFactoryProxy : public EarthView::World::Spatial::SystemUI::IActionFactory
				{
				 private:
					EarthView::World::Core::ev_string m_createToolBar_ev_uint32_callback;
					EarthView::World::Core::ev_string m_createMenu_ev_uint32_callback;
					EarthView::World::Core::ev_string m_destoryToolBar_IToolBar_callback;
					EarthView::World::Core::ev_string m_destoryMenu_IMenu_callback;
					EarthView::World::Core::ev_string m_getItem_ICommand_callback;
					EarthView::World::Core::ev_string m_question_EVString_callback;
					EarthView::World::Core::ev_string m_information_EVString_callback;
				public:
					JIActionFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : IActionFactory(pList)
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
					C_DISABLE_COPY(JIActionFactoryProxy)
				public:
					void register_createToolBar_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createToolBar_ev_uint32_callback = __method;
					}
					void register_createMenu_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createMenu_ev_uint32_callback = __method;
					}
					void register_destoryToolBar_IToolBar_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_destoryToolBar_IToolBar_callback = __method;
					}
					void register_destoryMenu_IMenu_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_destoryMenu_IMenu_callback = __method;
					}
					void register_getItem_ICommand_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getItem_ICommand_callback = __method;
					}
					void register_question_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_question_EVString_callback = __method;
					}
					void register_information_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_information_EVString_callback = __method;
					}
					virtual EarthView::World::Spatial::SystemUI::IToolBar* createToolBar(ev_uint32 type)
					{
						if (this->_gRef != NULL && this->m_createToolBar_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong type_j = (jlong) type;
							jmethodID __method = __gr->getMethod("createToolBar_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , type_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::SystemUI::IToolBar *__values1 = (EarthView::World::Spatial::SystemUI::IToolBar*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->IActionFactory::createToolBar(type);
						}
					}
					virtual EarthView::World::Spatial::SystemUI::IMenu* createMenu(ev_uint32 type) const
					{
						if (this->_gRef != NULL && this->m_createMenu_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong type_j = (jlong) type;
							jmethodID __method = __gr->getMethod("createMenu_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , type_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::SystemUI::IMenu *__values1 = (EarthView::World::Spatial::SystemUI::IMenu*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->IActionFactory::createMenu(type);
						}
					}
					virtual void destoryToolBar(EarthView::World::Spatial::SystemUI::IToolBar* bar) const
					{
						if (this->_gRef != NULL && this->m_destoryToolBar_IToolBar_callback != "" && this->isCustomExtend())
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
							jlong bar_j = (jlong) bar;
							jmethodID __method = __gr->getMethod("destoryToolBar_IToolBar_callback");
							__env->CallVoidMethod(__obj, __method , bar_j);
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
							return this->IActionFactory::destoryToolBar(bar);
						}
					}
					virtual void destoryMenu(EarthView::World::Spatial::SystemUI::IMenu* menu) const
					{
						if (this->_gRef != NULL && this->m_destoryMenu_IMenu_callback != "" && this->isCustomExtend())
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
							jlong menu_j = (jlong) menu;
							jmethodID __method = __gr->getMethod("destoryMenu_IMenu_callback");
							__env->CallVoidMethod(__obj, __method , menu_j);
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
							return this->IActionFactory::destoryMenu(menu);
						}
					}
					virtual EarthView::World::Spatial::SystemUI::IItem* getItem(EarthView::World::Spatial::SystemUI::ICommand* cmd) const
					{
						if (this->_gRef != NULL && this->m_getItem_ICommand_callback != "" && this->isCustomExtend())
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
							jlong cmd_j = (jlong) cmd;
							jmethodID __method = __gr->getMethod("getItem_ICommand_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , cmd_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::SystemUI::IItem *__values1 = (EarthView::World::Spatial::SystemUI::IItem*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IActionFactory::getItem(cmd);
						}
					}
					virtual ev_bool question(const EVString& text) const
					{
						if (this->_gRef != NULL && this->m_question_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring text_wch = text;
							jstring text_j = __env->NewString((const jchar*)text_wch.getString(), text_wch.size());
							jmethodID __method = __gr->getMethod("question_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , text_j);
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
							return this->IActionFactory::question(text);
						}
					}
					virtual void information(const EVString& text) const
					{
						if (this->_gRef != NULL && this->m_information_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring text_wch = text;
							jstring text_j = __env->NewString((const jchar*)text_wch.getString(), text_wch.size());
							jmethodID __method = __gr->getMethod("information_EVString_callback");
							__env->CallVoidMethod(__obj, __method , text_j);
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
							return this->IActionFactory::information(text);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIActionFactoryProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_Iactionfactory_createToolBar_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong type_j)
				{
					ev_uint32 type = (ev_uint32) type_j;
					EarthView::World::Spatial::SystemUI::IActionFactory *pObjectX = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIActionFactoryProxy))
					{
						EarthView::World::Spatial::SystemUI::IToolBar* __values1 = pObjectX->EarthView::World::Spatial::SystemUI::IActionFactory::createToolBar(type);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::SystemUI::IToolBar* __values1 = pObjectX->createToolBar(type);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Iactionfactory_register_1createToolBar_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIActionFactoryProxy *pObjectX = (JIActionFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createToolBar_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createToolBar_ev_uint32_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_Iactionfactory_createToolBar_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong type_j)
				{
					ev_uint32 type = (ev_uint32) type_j;
					EarthView::World::Spatial::SystemUI::IActionFactory *pObjectX = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::IToolBar* __values1 = pObjectX->EarthView::World::Spatial::SystemUI::IActionFactory::createToolBar(type);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_Iactionfactory_createMenu_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong type_j)
				{
					ev_uint32 type = (ev_uint32) type_j;
					const 					EarthView::World::Spatial::SystemUI::IActionFactory *pObjectX = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIActionFactoryProxy))
					{
						EarthView::World::Spatial::SystemUI::IMenu* __values1 = pObjectX->EarthView::World::Spatial::SystemUI::IActionFactory::createMenu(type);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::SystemUI::IMenu* __values1 = pObjectX->createMenu(type);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Iactionfactory_register_1createMenu_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIActionFactoryProxy *pObjectX = (JIActionFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createMenu_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createMenu_ev_uint32_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_Iactionfactory_createMenu_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong type_j)
				{
					ev_uint32 type = (ev_uint32) type_j;
					const 					EarthView::World::Spatial::SystemUI::IActionFactory *pObjectX = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::IMenu* __values1 = pObjectX->EarthView::World::Spatial::SystemUI::IActionFactory::createMenu(type);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Iactionfactory_destoryToolBar_1IToolBar(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bar_j)
				{
					EarthView::World::Spatial::SystemUI::IToolBar *bar = (EarthView::World::Spatial::SystemUI::IToolBar*) bar_j;
					const 					EarthView::World::Spatial::SystemUI::IActionFactory *pObjectX = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIActionFactoryProxy))
					{
						pObjectX->EarthView::World::Spatial::SystemUI::IActionFactory::destoryToolBar(bar);
					}
					else
					{
						pObjectX->destoryToolBar(bar);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Iactionfactory_register_1destoryToolBar_1IToolBar(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIActionFactoryProxy *pObjectX = (JIActionFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_destoryToolBar_IToolBar_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"destoryToolBar_IToolBar_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Iactionfactory_destoryToolBar_1IToolBar_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bar_j)
				{
					EarthView::World::Spatial::SystemUI::IToolBar *bar = (EarthView::World::Spatial::SystemUI::IToolBar*) bar_j;
					const 					EarthView::World::Spatial::SystemUI::IActionFactory *pObjectX = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::SystemUI::IActionFactory::destoryToolBar(bar);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Iactionfactory_destoryMenu_1IMenu(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong menu_j)
				{
					EarthView::World::Spatial::SystemUI::IMenu *menu = (EarthView::World::Spatial::SystemUI::IMenu*) menu_j;
					const 					EarthView::World::Spatial::SystemUI::IActionFactory *pObjectX = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIActionFactoryProxy))
					{
						pObjectX->EarthView::World::Spatial::SystemUI::IActionFactory::destoryMenu(menu);
					}
					else
					{
						pObjectX->destoryMenu(menu);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Iactionfactory_register_1destoryMenu_1IMenu(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIActionFactoryProxy *pObjectX = (JIActionFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_destoryMenu_IMenu_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"destoryMenu_IMenu_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Iactionfactory_destoryMenu_1IMenu_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong menu_j)
				{
					EarthView::World::Spatial::SystemUI::IMenu *menu = (EarthView::World::Spatial::SystemUI::IMenu*) menu_j;
					const 					EarthView::World::Spatial::SystemUI::IActionFactory *pObjectX = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::SystemUI::IActionFactory::destoryMenu(menu);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_Iactionfactory_getItem_1ICommand(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cmd_j)
				{
					EarthView::World::Spatial::SystemUI::ICommand *cmd = (EarthView::World::Spatial::SystemUI::ICommand*) cmd_j;
					const 					EarthView::World::Spatial::SystemUI::IActionFactory *pObjectX = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIActionFactoryProxy))
					{
						EarthView::World::Spatial::SystemUI::IItem* __values1 = pObjectX->EarthView::World::Spatial::SystemUI::IActionFactory::getItem(cmd);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::SystemUI::IItem* __values1 = pObjectX->getItem(cmd);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Iactionfactory_register_1getItem_1ICommand(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIActionFactoryProxy *pObjectX = (JIActionFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getItem_ICommand_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getItem_ICommand_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_Iactionfactory_getItem_1ICommand_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cmd_j)
				{
					EarthView::World::Spatial::SystemUI::ICommand *cmd = (EarthView::World::Spatial::SystemUI::ICommand*) cmd_j;
					const 					EarthView::World::Spatial::SystemUI::IActionFactory *pObjectX = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::IItem* __values1 = pObjectX->EarthView::World::Spatial::SystemUI::IActionFactory::getItem(cmd);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Iactionfactory_question_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring text_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* text_ch = (const ev_char*)__env->GetStringUTFChars(text_j,JNI_FALSE);
					const EVString text = text_ch;
					__env->ReleaseStringUTFChars(text_j, (const char *)text_ch);
					#else
					const ev_wchar* text_ch = (const ev_wchar*)__env->GetStringChars(text_j,JNI_FALSE);
					const EVString text = text_ch;
					__env->ReleaseStringChars(text_j, (const jchar *)text_ch);
					#endif
					const 					EarthView::World::Spatial::SystemUI::IActionFactory *pObjectX = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIActionFactoryProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::IActionFactory::question(text);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->question(text);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Iactionfactory_register_1question_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIActionFactoryProxy *pObjectX = (JIActionFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_question_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"question_EVString_callback", "(Ljava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Iactionfactory_question_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring text_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* text_ch = (const ev_char*)__env->GetStringUTFChars(text_j,JNI_FALSE);
					const EVString text = text_ch;
					__env->ReleaseStringUTFChars(text_j, (const char *)text_ch);
					#else
					const ev_wchar* text_ch = (const ev_wchar*)__env->GetStringChars(text_j,JNI_FALSE);
					const EVString text = text_ch;
					__env->ReleaseStringChars(text_j, (const jchar *)text_ch);
					#endif
					const 					EarthView::World::Spatial::SystemUI::IActionFactory *pObjectX = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::IActionFactory::question(text);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Iactionfactory_information_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring text_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* text_ch = (const ev_char*)__env->GetStringUTFChars(text_j,JNI_FALSE);
					const EVString text = text_ch;
					__env->ReleaseStringUTFChars(text_j, (const char *)text_ch);
					#else
					const ev_wchar* text_ch = (const ev_wchar*)__env->GetStringChars(text_j,JNI_FALSE);
					const EVString text = text_ch;
					__env->ReleaseStringChars(text_j, (const jchar *)text_ch);
					#endif
					const 					EarthView::World::Spatial::SystemUI::IActionFactory *pObjectX = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIActionFactoryProxy))
					{
						pObjectX->EarthView::World::Spatial::SystemUI::IActionFactory::information(text);
					}
					else
					{
						pObjectX->information(text);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Iactionfactory_register_1information_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIActionFactoryProxy *pObjectX = (JIActionFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_information_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"information_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Iactionfactory_information_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring text_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* text_ch = (const ev_char*)__env->GetStringUTFChars(text_j,JNI_FALSE);
					const EVString text = text_ch;
					__env->ReleaseStringUTFChars(text_j, (const char *)text_ch);
					#else
					const ev_wchar* text_ch = (const ev_wchar*)__env->GetStringChars(text_j,JNI_FALSE);
					const EVString text = text_ch;
					__env->ReleaseStringChars(text_j, (const jchar *)text_ch);
					#endif
					const 					EarthView::World::Spatial::SystemUI::IActionFactory *pObjectX = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::SystemUI::IActionFactory::information(text);
				}
			}
		}
	}
}
