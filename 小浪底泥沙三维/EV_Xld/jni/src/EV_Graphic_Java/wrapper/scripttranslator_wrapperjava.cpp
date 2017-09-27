/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/scripttranslator.h"
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
			class JCScriptTranslatorProxy : public EarthView::World::Graphic::CScriptTranslator
			{
			 private:
				EarthView::World::Core::ev_string m_translate_CScriptCompiler_AbstractNodePtr_callback;
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
			public:
				JCScriptTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CScriptTranslator(pList)
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
				void register_translate_CScriptCompiler_AbstractNodePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_translate_CScriptCompiler_AbstractNodePtr_callback = __method;
				}
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				virtual void translate(EarthView::World::Graphic::CScriptCompiler* compiler, const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if (this->_gRef != NULL && this->m_translate_CScriptCompiler_AbstractNodePtr_callback != "" && this->isCustomExtend())
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
						jlong compiler_j = (jlong) compiler;
						jlong node_j = (jlong) &node;
						jmethodID __method = __gr->getMethod("translate_CScriptCompiler_AbstractNodePtr_callback");
						__env->CallVoidMethod(__obj, __method , compiler_j, node_j);
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
						return this->CScriptTranslator::translate(compiler, node);
					}
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("ev_clone_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CScriptTranslator *__values1 = (EarthView::World::Graphic::CScriptTranslator*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CScriptTranslator::clone();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCScriptTranslatorProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptTranslator_translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CScriptTranslator *pObjectX = (EarthView::World::Graphic::CScriptTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScriptTranslatorProxy))
				{
					pObjectX->EarthView::World::Graphic::CScriptTranslator::translate(compiler, node);
				}
				else
				{
					pObjectX->translate(compiler, node);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptTranslator_register_1translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScriptTranslatorProxy *pObjectX = (JCScriptTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_translate_CScriptCompiler_AbstractNodePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"translate_CScriptCompiler_AbstractNodePtr_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptTranslator_translate_1CScriptCompiler_1AbstractNodePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CScriptTranslator *pObjectX = (EarthView::World::Graphic::CScriptTranslator*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CScriptTranslator::translate(compiler, node);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptTranslator_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CScriptTranslator *pObjectX = (EarthView::World::Graphic::CScriptTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScriptTranslatorProxy))
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CScriptTranslator::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptTranslator_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScriptTranslatorProxy *pObjectX = (JCScriptTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_ev_clone_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptTranslator_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CScriptTranslator *pObjectX = (EarthView::World::Graphic::CScriptTranslator*) pObjXXXX;
				EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CScriptTranslator::clone();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCScriptTranslatorManagerProxy : public EarthView::World::Graphic::CScriptTranslatorManager
			{
			 private:
				EarthView::World::Core::ev_string m_getNumTranslators_void_callback;
				EarthView::World::Core::ev_string m_getTranslator_AbstractNodePtr_callback;
			public:
				JCScriptTranslatorManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CScriptTranslatorManager(pList)
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
				void register_getNumTranslators_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNumTranslators_void_callback = __method;
				}
				void register_getTranslator_AbstractNodePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTranslator_AbstractNodePtr_callback = __method;
				}
				virtual ev_size_t getNumTranslators() const
				{
					if (this->_gRef != NULL && this->m_getNumTranslators_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getNumTranslators_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CScriptTranslatorManager::getNumTranslators();
					}
				}
				virtual EarthView::World::Graphic::CScriptTranslator* getTranslator(const EarthView::World::Graphic::AbstractNodePtr& nodes)
				{
					if (this->_gRef != NULL && this->m_getTranslator_AbstractNodePtr_callback != "" && this->isCustomExtend())
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
						jlong nodes_j = (jlong) &nodes;
						jmethodID __method = __gr->getMethod("getTranslator_AbstractNodePtr_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , nodes_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CScriptTranslator *__values1 = (EarthView::World::Graphic::CScriptTranslator*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CScriptTranslatorManager::getTranslator(nodes);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCScriptTranslatorManagerProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptTranslatorManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CScriptTranslatorManager& __values1 = EarthView::World::Graphic::CScriptTranslatorManager::getSingleton();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptTranslatorManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CScriptTranslatorManager* __values1 = EarthView::World::Graphic::CScriptTranslatorManager::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptTranslatorManager_getNumTranslators_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CScriptTranslatorManager *pObjectX = (EarthView::World::Graphic::CScriptTranslatorManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScriptTranslatorManagerProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CScriptTranslatorManager::getNumTranslators();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->getNumTranslators();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptTranslatorManager_register_1getNumTranslators_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScriptTranslatorManagerProxy *pObjectX = (JCScriptTranslatorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNumTranslators_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNumTranslators_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptTranslatorManager_getNumTranslators_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CScriptTranslatorManager *pObjectX = (EarthView::World::Graphic::CScriptTranslatorManager*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CScriptTranslatorManager::getNumTranslators();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptTranslatorManager_getTranslator_1AbstractNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong nodes_j)
			{
				const EarthView::World::Graphic::AbstractNodePtr &nodes = *(EarthView::World::Graphic::AbstractNodePtr*) nodes_j;
				EarthView::World::Graphic::CScriptTranslatorManager *pObjectX = (EarthView::World::Graphic::CScriptTranslatorManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScriptTranslatorManagerProxy))
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CScriptTranslatorManager::getTranslator(nodes);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->getTranslator(nodes);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptTranslatorManager_register_1getTranslator_1AbstractNodePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScriptTranslatorManagerProxy *pObjectX = (JCScriptTranslatorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTranslator_AbstractNodePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTranslator_AbstractNodePtr_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptTranslatorManager_getTranslator_1AbstractNodePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong nodes_j)
			{
				const EarthView::World::Graphic::AbstractNodePtr &nodes = *(EarthView::World::Graphic::AbstractNodePtr*) nodes_j;
				EarthView::World::Graphic::CScriptTranslatorManager *pObjectX = (EarthView::World::Graphic::CScriptTranslatorManager*) pObjXXXX;
				EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CScriptTranslatorManager::getTranslator(nodes);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCMaterialTranslatorProxy : public EarthView::World::Graphic::CMaterialTranslator
			{
			 private:
				EarthView::World::Core::ev_string m_translate_CScriptCompiler_AbstractNodePtr_callback;
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
			public:
				JCMaterialTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CMaterialTranslator(pList)
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
				void register_translate_CScriptCompiler_AbstractNodePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_translate_CScriptCompiler_AbstractNodePtr_callback = __method;
				}
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				virtual void translate(EarthView::World::Graphic::CScriptCompiler* compiler, const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if (this->_gRef != NULL && this->m_translate_CScriptCompiler_AbstractNodePtr_callback != "" && this->isCustomExtend())
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
						jlong compiler_j = (jlong) compiler;
						jlong node_j = (jlong) &node;
						jmethodID __method = __gr->getMethod("translate_CScriptCompiler_AbstractNodePtr_callback");
						__env->CallVoidMethod(__obj, __method , compiler_j, node_j);
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
						return this->CMaterialTranslator::translate(compiler, node);
					}
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("ev_clone_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CScriptTranslator *__values1 = (EarthView::World::Graphic::CScriptTranslator*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMaterialTranslator::clone();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCMaterialTranslatorProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialTranslator_translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CMaterialTranslator *pObjectX = (EarthView::World::Graphic::CMaterialTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMaterialTranslatorProxy))
				{
					pObjectX->EarthView::World::Graphic::CMaterialTranslator::translate(compiler, node);
				}
				else
				{
					pObjectX->translate(compiler, node);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialTranslator_register_1translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMaterialTranslatorProxy *pObjectX = (JCMaterialTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_translate_CScriptCompiler_AbstractNodePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"translate_CScriptCompiler_AbstractNodePtr_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialTranslator_translate_1CScriptCompiler_1AbstractNodePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CMaterialTranslator *pObjectX = (EarthView::World::Graphic::CMaterialTranslator*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CMaterialTranslator::translate(compiler, node);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MaterialTranslator_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMaterialTranslator *pObjectX = (EarthView::World::Graphic::CMaterialTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMaterialTranslatorProxy))
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CMaterialTranslator::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialTranslator_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMaterialTranslatorProxy *pObjectX = (JCMaterialTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_ev_clone_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MaterialTranslator_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMaterialTranslator *pObjectX = (EarthView::World::Graphic::CMaterialTranslator*) pObjXXXX;
				EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CMaterialTranslator::clone();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCTechniqueTranslatorProxy : public EarthView::World::Graphic::CTechniqueTranslator
			{
			 private:
				EarthView::World::Core::ev_string m_translate_CScriptCompiler_AbstractNodePtr_callback;
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
			public:
				JCTechniqueTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CTechniqueTranslator(pList)
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
				void register_translate_CScriptCompiler_AbstractNodePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_translate_CScriptCompiler_AbstractNodePtr_callback = __method;
				}
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				virtual void translate(EarthView::World::Graphic::CScriptCompiler* compiler, const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if (this->_gRef != NULL && this->m_translate_CScriptCompiler_AbstractNodePtr_callback != "" && this->isCustomExtend())
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
						jlong compiler_j = (jlong) compiler;
						jlong node_j = (jlong) &node;
						jmethodID __method = __gr->getMethod("translate_CScriptCompiler_AbstractNodePtr_callback");
						__env->CallVoidMethod(__obj, __method , compiler_j, node_j);
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
						return this->CTechniqueTranslator::translate(compiler, node);
					}
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("ev_clone_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CScriptTranslator *__values1 = (EarthView::World::Graphic::CScriptTranslator*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTechniqueTranslator::clone();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCTechniqueTranslatorProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TechniqueTranslator_translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CTechniqueTranslator *pObjectX = (EarthView::World::Graphic::CTechniqueTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTechniqueTranslatorProxy))
				{
					pObjectX->EarthView::World::Graphic::CTechniqueTranslator::translate(compiler, node);
				}
				else
				{
					pObjectX->translate(compiler, node);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TechniqueTranslator_register_1translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTechniqueTranslatorProxy *pObjectX = (JCTechniqueTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_translate_CScriptCompiler_AbstractNodePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"translate_CScriptCompiler_AbstractNodePtr_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TechniqueTranslator_translate_1CScriptCompiler_1AbstractNodePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CTechniqueTranslator *pObjectX = (EarthView::World::Graphic::CTechniqueTranslator*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTechniqueTranslator::translate(compiler, node);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TechniqueTranslator_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechniqueTranslator *pObjectX = (EarthView::World::Graphic::CTechniqueTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTechniqueTranslatorProxy))
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CTechniqueTranslator::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TechniqueTranslator_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTechniqueTranslatorProxy *pObjectX = (JCTechniqueTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_ev_clone_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TechniqueTranslator_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTechniqueTranslator *pObjectX = (EarthView::World::Graphic::CTechniqueTranslator*) pObjXXXX;
				EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CTechniqueTranslator::clone();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCPassTranslatorProxy : public EarthView::World::Graphic::CPassTranslator
			{
			 private:
				EarthView::World::Core::ev_string m_translate_CScriptCompiler_AbstractNodePtr_callback;
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
			public:
				JCPassTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CPassTranslator(pList)
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
				void register_translate_CScriptCompiler_AbstractNodePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_translate_CScriptCompiler_AbstractNodePtr_callback = __method;
				}
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				virtual void translate(EarthView::World::Graphic::CScriptCompiler* compiler, const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if (this->_gRef != NULL && this->m_translate_CScriptCompiler_AbstractNodePtr_callback != "" && this->isCustomExtend())
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
						jlong compiler_j = (jlong) compiler;
						jlong node_j = (jlong) &node;
						jmethodID __method = __gr->getMethod("translate_CScriptCompiler_AbstractNodePtr_callback");
						__env->CallVoidMethod(__obj, __method , compiler_j, node_j);
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
						return this->CPassTranslator::translate(compiler, node);
					}
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("ev_clone_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CScriptTranslator *__values1 = (EarthView::World::Graphic::CScriptTranslator*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPassTranslator::clone();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCPassTranslatorProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PassTranslator_translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CPassTranslator *pObjectX = (EarthView::World::Graphic::CPassTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPassTranslatorProxy))
				{
					pObjectX->EarthView::World::Graphic::CPassTranslator::translate(compiler, node);
				}
				else
				{
					pObjectX->translate(compiler, node);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PassTranslator_register_1translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPassTranslatorProxy *pObjectX = (JCPassTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_translate_CScriptCompiler_AbstractNodePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"translate_CScriptCompiler_AbstractNodePtr_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PassTranslator_translate_1CScriptCompiler_1AbstractNodePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CPassTranslator *pObjectX = (EarthView::World::Graphic::CPassTranslator*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CPassTranslator::translate(compiler, node);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PassTranslator_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPassTranslator *pObjectX = (EarthView::World::Graphic::CPassTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPassTranslatorProxy))
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CPassTranslator::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PassTranslator_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPassTranslatorProxy *pObjectX = (JCPassTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_ev_clone_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PassTranslator_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPassTranslator *pObjectX = (EarthView::World::Graphic::CPassTranslator*) pObjXXXX;
				EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CPassTranslator::clone();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCTextureUnitTranslatorProxy : public EarthView::World::Graphic::CTextureUnitTranslator
			{
			 private:
				EarthView::World::Core::ev_string m_translate_CScriptCompiler_AbstractNodePtr_callback;
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
			public:
				JCTextureUnitTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CTextureUnitTranslator(pList)
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
				void register_translate_CScriptCompiler_AbstractNodePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_translate_CScriptCompiler_AbstractNodePtr_callback = __method;
				}
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				virtual void translate(EarthView::World::Graphic::CScriptCompiler* compiler, const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if (this->_gRef != NULL && this->m_translate_CScriptCompiler_AbstractNodePtr_callback != "" && this->isCustomExtend())
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
						jlong compiler_j = (jlong) compiler;
						jlong node_j = (jlong) &node;
						jmethodID __method = __gr->getMethod("translate_CScriptCompiler_AbstractNodePtr_callback");
						__env->CallVoidMethod(__obj, __method , compiler_j, node_j);
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
						return this->CTextureUnitTranslator::translate(compiler, node);
					}
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("ev_clone_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CScriptTranslator *__values1 = (EarthView::World::Graphic::CScriptTranslator*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTextureUnitTranslator::clone();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCTextureUnitTranslatorProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitTranslator_translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CTextureUnitTranslator *pObjectX = (EarthView::World::Graphic::CTextureUnitTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureUnitTranslatorProxy))
				{
					pObjectX->EarthView::World::Graphic::CTextureUnitTranslator::translate(compiler, node);
				}
				else
				{
					pObjectX->translate(compiler, node);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitTranslator_register_1translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureUnitTranslatorProxy *pObjectX = (JCTextureUnitTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_translate_CScriptCompiler_AbstractNodePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"translate_CScriptCompiler_AbstractNodePtr_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitTranslator_translate_1CScriptCompiler_1AbstractNodePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CTextureUnitTranslator *pObjectX = (EarthView::World::Graphic::CTextureUnitTranslator*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTextureUnitTranslator::translate(compiler, node);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitTranslator_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitTranslator *pObjectX = (EarthView::World::Graphic::CTextureUnitTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureUnitTranslatorProxy))
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CTextureUnitTranslator::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureUnitTranslator_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureUnitTranslatorProxy *pObjectX = (JCTextureUnitTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_ev_clone_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureUnitTranslator_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureUnitTranslator *pObjectX = (EarthView::World::Graphic::CTextureUnitTranslator*) pObjXXXX;
				EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CTextureUnitTranslator::clone();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCTextureSourceTranslatorProxy : public EarthView::World::Graphic::CTextureSourceTranslator
			{
			 private:
				EarthView::World::Core::ev_string m_translate_CScriptCompiler_AbstractNodePtr_callback;
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
			public:
				JCTextureSourceTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CTextureSourceTranslator(pList)
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
				void register_translate_CScriptCompiler_AbstractNodePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_translate_CScriptCompiler_AbstractNodePtr_callback = __method;
				}
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				virtual void translate(EarthView::World::Graphic::CScriptCompiler* compiler, const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if (this->_gRef != NULL && this->m_translate_CScriptCompiler_AbstractNodePtr_callback != "" && this->isCustomExtend())
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
						jlong compiler_j = (jlong) compiler;
						jlong node_j = (jlong) &node;
						jmethodID __method = __gr->getMethod("translate_CScriptCompiler_AbstractNodePtr_callback");
						__env->CallVoidMethod(__obj, __method , compiler_j, node_j);
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
						return this->CTextureSourceTranslator::translate(compiler, node);
					}
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("ev_clone_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CScriptTranslator *__values1 = (EarthView::World::Graphic::CScriptTranslator*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTextureSourceTranslator::clone();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCTextureSourceTranslatorProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureSourceTranslator_translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CTextureSourceTranslator *pObjectX = (EarthView::World::Graphic::CTextureSourceTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureSourceTranslatorProxy))
				{
					pObjectX->EarthView::World::Graphic::CTextureSourceTranslator::translate(compiler, node);
				}
				else
				{
					pObjectX->translate(compiler, node);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureSourceTranslator_register_1translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureSourceTranslatorProxy *pObjectX = (JCTextureSourceTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_translate_CScriptCompiler_AbstractNodePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"translate_CScriptCompiler_AbstractNodePtr_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureSourceTranslator_translate_1CScriptCompiler_1AbstractNodePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CTextureSourceTranslator *pObjectX = (EarthView::World::Graphic::CTextureSourceTranslator*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTextureSourceTranslator::translate(compiler, node);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureSourceTranslator_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureSourceTranslator *pObjectX = (EarthView::World::Graphic::CTextureSourceTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureSourceTranslatorProxy))
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CTextureSourceTranslator::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureSourceTranslator_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureSourceTranslatorProxy *pObjectX = (JCTextureSourceTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_ev_clone_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureSourceTranslator_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureSourceTranslator *pObjectX = (EarthView::World::Graphic::CTextureSourceTranslator*) pObjXXXX;
				EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CTextureSourceTranslator::clone();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCGpuProgramTranslatorProxy : public EarthView::World::Graphic::CGpuProgramTranslator
			{
			 private:
				EarthView::World::Core::ev_string m_translate_CScriptCompiler_AbstractNodePtr_callback;
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
			public:
				JCGpuProgramTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CGpuProgramTranslator(pList)
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
				void register_translate_CScriptCompiler_AbstractNodePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_translate_CScriptCompiler_AbstractNodePtr_callback = __method;
				}
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				virtual void translate(EarthView::World::Graphic::CScriptCompiler* compiler, const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if (this->_gRef != NULL && this->m_translate_CScriptCompiler_AbstractNodePtr_callback != "" && this->isCustomExtend())
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
						jlong compiler_j = (jlong) compiler;
						jlong node_j = (jlong) &node;
						jmethodID __method = __gr->getMethod("translate_CScriptCompiler_AbstractNodePtr_callback");
						__env->CallVoidMethod(__obj, __method , compiler_j, node_j);
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
						return this->CGpuProgramTranslator::translate(compiler, node);
					}
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("ev_clone_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CScriptTranslator *__values1 = (EarthView::World::Graphic::CScriptTranslator*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CGpuProgramTranslator::clone();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCGpuProgramTranslatorProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramTranslator_translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CGpuProgramTranslator *pObjectX = (EarthView::World::Graphic::CGpuProgramTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramTranslatorProxy))
				{
					pObjectX->EarthView::World::Graphic::CGpuProgramTranslator::translate(compiler, node);
				}
				else
				{
					pObjectX->translate(compiler, node);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramTranslator_register_1translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramTranslatorProxy *pObjectX = (JCGpuProgramTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_translate_CScriptCompiler_AbstractNodePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"translate_CScriptCompiler_AbstractNodePtr_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramTranslator_translate_1CScriptCompiler_1AbstractNodePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CGpuProgramTranslator *pObjectX = (EarthView::World::Graphic::CGpuProgramTranslator*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CGpuProgramTranslator::translate(compiler, node);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramTranslator_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramTranslator *pObjectX = (EarthView::World::Graphic::CGpuProgramTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramTranslatorProxy))
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CGpuProgramTranslator::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramTranslator_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramTranslatorProxy *pObjectX = (JCGpuProgramTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_ev_clone_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramTranslator_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramTranslator *pObjectX = (EarthView::World::Graphic::CGpuProgramTranslator*) pObjXXXX;
				EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CGpuProgramTranslator::clone();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramTranslator_translateProgramParameters_1CScriptCompiler_1GpuProgramParametersSharedPtr_1CObjectAbstractNode(JNIEnv *__env , jclass __clazz, jlong compiler_j, jlong parameters_j, jlong obj_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				EarthView::World::Graphic::GpuProgramParametersSharedPtr parameters = *(EarthView::World::Graphic::GpuProgramParametersSharedPtr*) parameters_j;
				EarthView::World::Graphic::CObjectAbstractNode *obj = (EarthView::World::Graphic::CObjectAbstractNode*) obj_j;
				EarthView::World::Graphic::CGpuProgramTranslator::translateProgramParameters(compiler, parameters, obj);
			}
			class JCSharedParamsTranslatorProxy : public EarthView::World::Graphic::CSharedParamsTranslator
			{
			 private:
				EarthView::World::Core::ev_string m_translate_CScriptCompiler_AbstractNodePtr_callback;
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
			public:
				JCSharedParamsTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CSharedParamsTranslator(pList)
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
				void register_translate_CScriptCompiler_AbstractNodePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_translate_CScriptCompiler_AbstractNodePtr_callback = __method;
				}
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				virtual void translate(EarthView::World::Graphic::CScriptCompiler* compiler, const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if (this->_gRef != NULL && this->m_translate_CScriptCompiler_AbstractNodePtr_callback != "" && this->isCustomExtend())
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
						jlong compiler_j = (jlong) compiler;
						jlong node_j = (jlong) &node;
						jmethodID __method = __gr->getMethod("translate_CScriptCompiler_AbstractNodePtr_callback");
						__env->CallVoidMethod(__obj, __method , compiler_j, node_j);
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
						return this->CSharedParamsTranslator::translate(compiler, node);
					}
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("ev_clone_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CScriptTranslator *__values1 = (EarthView::World::Graphic::CScriptTranslator*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSharedParamsTranslator::clone();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCSharedParamsTranslatorProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SharedParamsTranslator_translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CSharedParamsTranslator *pObjectX = (EarthView::World::Graphic::CSharedParamsTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSharedParamsTranslatorProxy))
				{
					pObjectX->EarthView::World::Graphic::CSharedParamsTranslator::translate(compiler, node);
				}
				else
				{
					pObjectX->translate(compiler, node);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SharedParamsTranslator_register_1translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSharedParamsTranslatorProxy *pObjectX = (JCSharedParamsTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_translate_CScriptCompiler_AbstractNodePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"translate_CScriptCompiler_AbstractNodePtr_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SharedParamsTranslator_translate_1CScriptCompiler_1AbstractNodePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CSharedParamsTranslator *pObjectX = (EarthView::World::Graphic::CSharedParamsTranslator*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSharedParamsTranslator::translate(compiler, node);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SharedParamsTranslator_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSharedParamsTranslator *pObjectX = (EarthView::World::Graphic::CSharedParamsTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSharedParamsTranslatorProxy))
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CSharedParamsTranslator::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SharedParamsTranslator_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSharedParamsTranslatorProxy *pObjectX = (JCSharedParamsTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_ev_clone_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SharedParamsTranslator_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSharedParamsTranslator *pObjectX = (EarthView::World::Graphic::CSharedParamsTranslator*) pObjXXXX;
				EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CSharedParamsTranslator::clone();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCParticleSystemTranslatorProxy : public EarthView::World::Graphic::CParticleSystemTranslator
			{
			 private:
				EarthView::World::Core::ev_string m_translate_CScriptCompiler_AbstractNodePtr_callback;
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
			public:
				JCParticleSystemTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CParticleSystemTranslator(pList)
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
				void register_translate_CScriptCompiler_AbstractNodePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_translate_CScriptCompiler_AbstractNodePtr_callback = __method;
				}
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				virtual void translate(EarthView::World::Graphic::CScriptCompiler* compiler, const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if (this->_gRef != NULL && this->m_translate_CScriptCompiler_AbstractNodePtr_callback != "" && this->isCustomExtend())
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
						jlong compiler_j = (jlong) compiler;
						jlong node_j = (jlong) &node;
						jmethodID __method = __gr->getMethod("translate_CScriptCompiler_AbstractNodePtr_callback");
						__env->CallVoidMethod(__obj, __method , compiler_j, node_j);
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
						return this->CParticleSystemTranslator::translate(compiler, node);
					}
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("ev_clone_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CScriptTranslator *__values1 = (EarthView::World::Graphic::CScriptTranslator*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CParticleSystemTranslator::clone();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCParticleSystemTranslatorProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemTranslator_translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CParticleSystemTranslator *pObjectX = (EarthView::World::Graphic::CParticleSystemTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleSystemTranslatorProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleSystemTranslator::translate(compiler, node);
				}
				else
				{
					pObjectX->translate(compiler, node);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemTranslator_register_1translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleSystemTranslatorProxy *pObjectX = (JCParticleSystemTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_translate_CScriptCompiler_AbstractNodePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"translate_CScriptCompiler_AbstractNodePtr_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemTranslator_translate_1CScriptCompiler_1AbstractNodePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CParticleSystemTranslator *pObjectX = (EarthView::World::Graphic::CParticleSystemTranslator*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleSystemTranslator::translate(compiler, node);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemTranslator_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemTranslator *pObjectX = (EarthView::World::Graphic::CParticleSystemTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleSystemTranslatorProxy))
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CParticleSystemTranslator::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemTranslator_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleSystemTranslatorProxy *pObjectX = (JCParticleSystemTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_ev_clone_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemTranslator_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemTranslator *pObjectX = (EarthView::World::Graphic::CParticleSystemTranslator*) pObjXXXX;
				EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CParticleSystemTranslator::clone();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCParticleEmitterTranslatorProxy : public EarthView::World::Graphic::CParticleEmitterTranslator
			{
			 private:
				EarthView::World::Core::ev_string m_translate_CScriptCompiler_AbstractNodePtr_callback;
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
			public:
				JCParticleEmitterTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CParticleEmitterTranslator(pList)
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
				void register_translate_CScriptCompiler_AbstractNodePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_translate_CScriptCompiler_AbstractNodePtr_callback = __method;
				}
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				virtual void translate(EarthView::World::Graphic::CScriptCompiler* compiler, const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if (this->_gRef != NULL && this->m_translate_CScriptCompiler_AbstractNodePtr_callback != "" && this->isCustomExtend())
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
						jlong compiler_j = (jlong) compiler;
						jlong node_j = (jlong) &node;
						jmethodID __method = __gr->getMethod("translate_CScriptCompiler_AbstractNodePtr_callback");
						__env->CallVoidMethod(__obj, __method , compiler_j, node_j);
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
						return this->CParticleEmitterTranslator::translate(compiler, node);
					}
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("ev_clone_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CScriptTranslator *__values1 = (EarthView::World::Graphic::CScriptTranslator*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CParticleEmitterTranslator::clone();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCParticleEmitterTranslatorProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitterTranslator_translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CParticleEmitterTranslator *pObjectX = (EarthView::World::Graphic::CParticleEmitterTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterTranslatorProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitterTranslator::translate(compiler, node);
				}
				else
				{
					pObjectX->translate(compiler, node);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitterTranslator_register_1translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterTranslatorProxy *pObjectX = (JCParticleEmitterTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_translate_CScriptCompiler_AbstractNodePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"translate_CScriptCompiler_AbstractNodePtr_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitterTranslator_translate_1CScriptCompiler_1AbstractNodePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CParticleEmitterTranslator *pObjectX = (EarthView::World::Graphic::CParticleEmitterTranslator*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitterTranslator::translate(compiler, node);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleEmitterTranslator_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleEmitterTranslator *pObjectX = (EarthView::World::Graphic::CParticleEmitterTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterTranslatorProxy))
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitterTranslator::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitterTranslator_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterTranslatorProxy *pObjectX = (JCParticleEmitterTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_ev_clone_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleEmitterTranslator_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleEmitterTranslator *pObjectX = (EarthView::World::Graphic::CParticleEmitterTranslator*) pObjXXXX;
				EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitterTranslator::clone();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCParticleAffectorTranslatorProxy : public EarthView::World::Graphic::CParticleAffectorTranslator
			{
			 private:
				EarthView::World::Core::ev_string m_translate_CScriptCompiler_AbstractNodePtr_callback;
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
			public:
				JCParticleAffectorTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CParticleAffectorTranslator(pList)
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
				void register_translate_CScriptCompiler_AbstractNodePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_translate_CScriptCompiler_AbstractNodePtr_callback = __method;
				}
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				virtual void translate(EarthView::World::Graphic::CScriptCompiler* compiler, const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if (this->_gRef != NULL && this->m_translate_CScriptCompiler_AbstractNodePtr_callback != "" && this->isCustomExtend())
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
						jlong compiler_j = (jlong) compiler;
						jlong node_j = (jlong) &node;
						jmethodID __method = __gr->getMethod("translate_CScriptCompiler_AbstractNodePtr_callback");
						__env->CallVoidMethod(__obj, __method , compiler_j, node_j);
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
						return this->CParticleAffectorTranslator::translate(compiler, node);
					}
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("ev_clone_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CScriptTranslator *__values1 = (EarthView::World::Graphic::CScriptTranslator*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CParticleAffectorTranslator::clone();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCParticleAffectorTranslatorProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleAffectorTranslator_translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CParticleAffectorTranslator *pObjectX = (EarthView::World::Graphic::CParticleAffectorTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleAffectorTranslatorProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleAffectorTranslator::translate(compiler, node);
				}
				else
				{
					pObjectX->translate(compiler, node);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleAffectorTranslator_register_1translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleAffectorTranslatorProxy *pObjectX = (JCParticleAffectorTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_translate_CScriptCompiler_AbstractNodePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"translate_CScriptCompiler_AbstractNodePtr_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleAffectorTranslator_translate_1CScriptCompiler_1AbstractNodePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CParticleAffectorTranslator *pObjectX = (EarthView::World::Graphic::CParticleAffectorTranslator*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleAffectorTranslator::translate(compiler, node);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleAffectorTranslator_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleAffectorTranslator *pObjectX = (EarthView::World::Graphic::CParticleAffectorTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleAffectorTranslatorProxy))
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CParticleAffectorTranslator::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleAffectorTranslator_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleAffectorTranslatorProxy *pObjectX = (JCParticleAffectorTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_ev_clone_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleAffectorTranslator_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleAffectorTranslator *pObjectX = (EarthView::World::Graphic::CParticleAffectorTranslator*) pObjXXXX;
				EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CParticleAffectorTranslator::clone();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCCompositorTranslatorProxy : public EarthView::World::Graphic::CCompositorTranslator
			{
			 private:
				EarthView::World::Core::ev_string m_translate_CScriptCompiler_AbstractNodePtr_callback;
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
			public:
				JCCompositorTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CCompositorTranslator(pList)
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
				void register_translate_CScriptCompiler_AbstractNodePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_translate_CScriptCompiler_AbstractNodePtr_callback = __method;
				}
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				virtual void translate(EarthView::World::Graphic::CScriptCompiler* compiler, const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if (this->_gRef != NULL && this->m_translate_CScriptCompiler_AbstractNodePtr_callback != "" && this->isCustomExtend())
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
						jlong compiler_j = (jlong) compiler;
						jlong node_j = (jlong) &node;
						jmethodID __method = __gr->getMethod("translate_CScriptCompiler_AbstractNodePtr_callback");
						__env->CallVoidMethod(__obj, __method , compiler_j, node_j);
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
						return this->CCompositorTranslator::translate(compiler, node);
					}
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("ev_clone_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CScriptTranslator *__values1 = (EarthView::World::Graphic::CScriptTranslator*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorTranslator::clone();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCCompositorTranslatorProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorTranslator_translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CCompositorTranslator *pObjectX = (EarthView::World::Graphic::CCompositorTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositorTranslatorProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositorTranslator::translate(compiler, node);
				}
				else
				{
					pObjectX->translate(compiler, node);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorTranslator_register_1translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorTranslatorProxy *pObjectX = (JCCompositorTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_translate_CScriptCompiler_AbstractNodePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"translate_CScriptCompiler_AbstractNodePtr_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorTranslator_translate_1CScriptCompiler_1AbstractNodePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CCompositorTranslator *pObjectX = (EarthView::World::Graphic::CCompositorTranslator*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositorTranslator::translate(compiler, node);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorTranslator_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorTranslator *pObjectX = (EarthView::World::Graphic::CCompositorTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositorTranslatorProxy))
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CCompositorTranslator::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorTranslator_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorTranslatorProxy *pObjectX = (JCCompositorTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_ev_clone_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorTranslator_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorTranslator *pObjectX = (EarthView::World::Graphic::CCompositorTranslator*) pObjXXXX;
				EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CCompositorTranslator::clone();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCCompositionTechniqueTranslatorProxy : public EarthView::World::Graphic::CCompositionTechniqueTranslator
			{
			 private:
				EarthView::World::Core::ev_string m_translate_CScriptCompiler_AbstractNodePtr_callback;
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
			public:
				JCCompositionTechniqueTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CCompositionTechniqueTranslator(pList)
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
				void register_translate_CScriptCompiler_AbstractNodePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_translate_CScriptCompiler_AbstractNodePtr_callback = __method;
				}
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				virtual void translate(EarthView::World::Graphic::CScriptCompiler* compiler, const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if (this->_gRef != NULL && this->m_translate_CScriptCompiler_AbstractNodePtr_callback != "" && this->isCustomExtend())
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
						jlong compiler_j = (jlong) compiler;
						jlong node_j = (jlong) &node;
						jmethodID __method = __gr->getMethod("translate_CScriptCompiler_AbstractNodePtr_callback");
						__env->CallVoidMethod(__obj, __method , compiler_j, node_j);
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
						return this->CCompositionTechniqueTranslator::translate(compiler, node);
					}
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("ev_clone_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CScriptTranslator *__values1 = (EarthView::World::Graphic::CScriptTranslator*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositionTechniqueTranslator::clone();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCCompositionTechniqueTranslatorProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechniqueTranslator_translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CCompositionTechniqueTranslator *pObjectX = (EarthView::World::Graphic::CCompositionTechniqueTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositionTechniqueTranslatorProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositionTechniqueTranslator::translate(compiler, node);
				}
				else
				{
					pObjectX->translate(compiler, node);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechniqueTranslator_register_1translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositionTechniqueTranslatorProxy *pObjectX = (JCCompositionTechniqueTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_translate_CScriptCompiler_AbstractNodePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"translate_CScriptCompiler_AbstractNodePtr_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechniqueTranslator_translate_1CScriptCompiler_1AbstractNodePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CCompositionTechniqueTranslator *pObjectX = (EarthView::World::Graphic::CCompositionTechniqueTranslator*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositionTechniqueTranslator::translate(compiler, node);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechniqueTranslator_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechniqueTranslator *pObjectX = (EarthView::World::Graphic::CCompositionTechniqueTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositionTechniqueTranslatorProxy))
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CCompositionTechniqueTranslator::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechniqueTranslator_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositionTechniqueTranslatorProxy *pObjectX = (JCCompositionTechniqueTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_ev_clone_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechniqueTranslator_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechniqueTranslator *pObjectX = (EarthView::World::Graphic::CCompositionTechniqueTranslator*) pObjXXXX;
				EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CCompositionTechniqueTranslator::clone();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCCompositionTargetPassTranslatorProxy : public EarthView::World::Graphic::CCompositionTargetPassTranslator
			{
			 private:
				EarthView::World::Core::ev_string m_translate_CScriptCompiler_AbstractNodePtr_callback;
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
			public:
				JCCompositionTargetPassTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CCompositionTargetPassTranslator(pList)
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
				void register_translate_CScriptCompiler_AbstractNodePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_translate_CScriptCompiler_AbstractNodePtr_callback = __method;
				}
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				virtual void translate(EarthView::World::Graphic::CScriptCompiler* compiler, const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if (this->_gRef != NULL && this->m_translate_CScriptCompiler_AbstractNodePtr_callback != "" && this->isCustomExtend())
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
						jlong compiler_j = (jlong) compiler;
						jlong node_j = (jlong) &node;
						jmethodID __method = __gr->getMethod("translate_CScriptCompiler_AbstractNodePtr_callback");
						__env->CallVoidMethod(__obj, __method , compiler_j, node_j);
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
						return this->CCompositionTargetPassTranslator::translate(compiler, node);
					}
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("ev_clone_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CScriptTranslator *__values1 = (EarthView::World::Graphic::CScriptTranslator*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositionTargetPassTranslator::clone();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCCompositionTargetPassTranslatorProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTargetPassTranslator_translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CCompositionTargetPassTranslator *pObjectX = (EarthView::World::Graphic::CCompositionTargetPassTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositionTargetPassTranslatorProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositionTargetPassTranslator::translate(compiler, node);
				}
				else
				{
					pObjectX->translate(compiler, node);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTargetPassTranslator_register_1translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositionTargetPassTranslatorProxy *pObjectX = (JCCompositionTargetPassTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_translate_CScriptCompiler_AbstractNodePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"translate_CScriptCompiler_AbstractNodePtr_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTargetPassTranslator_translate_1CScriptCompiler_1AbstractNodePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CCompositionTargetPassTranslator *pObjectX = (EarthView::World::Graphic::CCompositionTargetPassTranslator*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositionTargetPassTranslator::translate(compiler, node);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTargetPassTranslator_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTargetPassTranslator *pObjectX = (EarthView::World::Graphic::CCompositionTargetPassTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositionTargetPassTranslatorProxy))
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CCompositionTargetPassTranslator::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTargetPassTranslator_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositionTargetPassTranslatorProxy *pObjectX = (JCCompositionTargetPassTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_ev_clone_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTargetPassTranslator_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTargetPassTranslator *pObjectX = (EarthView::World::Graphic::CCompositionTargetPassTranslator*) pObjXXXX;
				EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CCompositionTargetPassTranslator::clone();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCCompositionPassTranslatorProxy : public EarthView::World::Graphic::CCompositionPassTranslator
			{
			 private:
				EarthView::World::Core::ev_string m_translate_CScriptCompiler_AbstractNodePtr_callback;
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
			public:
				JCCompositionPassTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CCompositionPassTranslator(pList)
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
				void register_translate_CScriptCompiler_AbstractNodePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_translate_CScriptCompiler_AbstractNodePtr_callback = __method;
				}
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				virtual void translate(EarthView::World::Graphic::CScriptCompiler* compiler, const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if (this->_gRef != NULL && this->m_translate_CScriptCompiler_AbstractNodePtr_callback != "" && this->isCustomExtend())
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
						jlong compiler_j = (jlong) compiler;
						jlong node_j = (jlong) &node;
						jmethodID __method = __gr->getMethod("translate_CScriptCompiler_AbstractNodePtr_callback");
						__env->CallVoidMethod(__obj, __method , compiler_j, node_j);
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
						return this->CCompositionPassTranslator::translate(compiler, node);
					}
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("ev_clone_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CScriptTranslator *__values1 = (EarthView::World::Graphic::CScriptTranslator*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositionPassTranslator::clone();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCCompositionPassTranslatorProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPassTranslator_translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CCompositionPassTranslator *pObjectX = (EarthView::World::Graphic::CCompositionPassTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositionPassTranslatorProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositionPassTranslator::translate(compiler, node);
				}
				else
				{
					pObjectX->translate(compiler, node);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPassTranslator_register_1translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositionPassTranslatorProxy *pObjectX = (JCCompositionPassTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_translate_CScriptCompiler_AbstractNodePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"translate_CScriptCompiler_AbstractNodePtr_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPassTranslator_translate_1CScriptCompiler_1AbstractNodePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CCompositionPassTranslator *pObjectX = (EarthView::World::Graphic::CCompositionPassTranslator*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositionPassTranslator::translate(compiler, node);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionPassTranslator_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionPassTranslator *pObjectX = (EarthView::World::Graphic::CCompositionPassTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositionPassTranslatorProxy))
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CCompositionPassTranslator::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPassTranslator_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositionPassTranslatorProxy *pObjectX = (JCCompositionPassTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_ev_clone_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionPassTranslator_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionPassTranslator *pObjectX = (EarthView::World::Graphic::CCompositionPassTranslator*) pObjXXXX;
				EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CCompositionPassTranslator::clone();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCCompositionPassStencilTranslatorProxy : public EarthView::World::Graphic::CCompositionPassStencilTranslator
			{
			 private:
				EarthView::World::Core::ev_string m_translate_CScriptCompiler_AbstractNodePtr_callback;
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
			public:
				JCCompositionPassStencilTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CCompositionPassStencilTranslator(pList)
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
				void register_translate_CScriptCompiler_AbstractNodePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_translate_CScriptCompiler_AbstractNodePtr_callback = __method;
				}
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				virtual void translate(EarthView::World::Graphic::CScriptCompiler* compiler, const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if (this->_gRef != NULL && this->m_translate_CScriptCompiler_AbstractNodePtr_callback != "" && this->isCustomExtend())
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
						jlong compiler_j = (jlong) compiler;
						jlong node_j = (jlong) &node;
						jmethodID __method = __gr->getMethod("translate_CScriptCompiler_AbstractNodePtr_callback");
						__env->CallVoidMethod(__obj, __method , compiler_j, node_j);
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
						return this->CCompositionPassStencilTranslator::translate(compiler, node);
					}
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("ev_clone_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CScriptTranslator *__values1 = (EarthView::World::Graphic::CScriptTranslator*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositionPassStencilTranslator::clone();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCCompositionPassStencilTranslatorProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPassStencilTranslator_translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CCompositionPassStencilTranslator *pObjectX = (EarthView::World::Graphic::CCompositionPassStencilTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositionPassStencilTranslatorProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositionPassStencilTranslator::translate(compiler, node);
				}
				else
				{
					pObjectX->translate(compiler, node);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPassStencilTranslator_register_1translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositionPassStencilTranslatorProxy *pObjectX = (JCCompositionPassStencilTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_translate_CScriptCompiler_AbstractNodePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"translate_CScriptCompiler_AbstractNodePtr_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPassStencilTranslator_translate_1CScriptCompiler_1AbstractNodePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CCompositionPassStencilTranslator *pObjectX = (EarthView::World::Graphic::CCompositionPassStencilTranslator*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositionPassStencilTranslator::translate(compiler, node);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionPassStencilTranslator_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionPassStencilTranslator *pObjectX = (EarthView::World::Graphic::CCompositionPassStencilTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositionPassStencilTranslatorProxy))
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CCompositionPassStencilTranslator::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPassStencilTranslator_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositionPassStencilTranslatorProxy *pObjectX = (JCCompositionPassStencilTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_ev_clone_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionPassStencilTranslator_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionPassStencilTranslator *pObjectX = (EarthView::World::Graphic::CCompositionPassStencilTranslator*) pObjXXXX;
				EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CCompositionPassStencilTranslator::clone();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCBuiltinScriptTranslatorManagerProxy : public EarthView::World::Graphic::CBuiltinScriptTranslatorManager
			{
			 private:
				EarthView::World::Core::ev_string m_getNumTranslators_void_callback;
				EarthView::World::Core::ev_string m_getTranslator_AbstractNodePtr_callback;
			public:
				JCBuiltinScriptTranslatorManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CBuiltinScriptTranslatorManager(pList)
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
				void register_getNumTranslators_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNumTranslators_void_callback = __method;
				}
				void register_getTranslator_AbstractNodePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTranslator_AbstractNodePtr_callback = __method;
				}
				virtual ev_size_t getNumTranslators() const
				{
					if (this->_gRef != NULL && this->m_getNumTranslators_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getNumTranslators_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CBuiltinScriptTranslatorManager::getNumTranslators();
					}
				}
				virtual EarthView::World::Graphic::CScriptTranslator* getTranslator(const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if (this->_gRef != NULL && this->m_getTranslator_AbstractNodePtr_callback != "" && this->isCustomExtend())
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
						jlong node_j = (jlong) &node;
						jmethodID __method = __gr->getMethod("getTranslator_AbstractNodePtr_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , node_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CScriptTranslator *__values1 = (EarthView::World::Graphic::CScriptTranslator*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CBuiltinScriptTranslatorManager::getTranslator(node);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCBuiltinScriptTranslatorManagerProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_BuiltinScriptTranslatorManager_getNumTranslators_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBuiltinScriptTranslatorManager *pObjectX = (EarthView::World::Graphic::CBuiltinScriptTranslatorManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBuiltinScriptTranslatorManagerProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CBuiltinScriptTranslatorManager::getNumTranslators();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->getNumTranslators();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BuiltinScriptTranslatorManager_register_1getNumTranslators_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBuiltinScriptTranslatorManagerProxy *pObjectX = (JCBuiltinScriptTranslatorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNumTranslators_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNumTranslators_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_BuiltinScriptTranslatorManager_getNumTranslators_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBuiltinScriptTranslatorManager *pObjectX = (EarthView::World::Graphic::CBuiltinScriptTranslatorManager*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CBuiltinScriptTranslatorManager::getNumTranslators();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_BuiltinScriptTranslatorManager_getTranslator_1AbstractNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j)
			{
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CBuiltinScriptTranslatorManager *pObjectX = (EarthView::World::Graphic::CBuiltinScriptTranslatorManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBuiltinScriptTranslatorManagerProxy))
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CBuiltinScriptTranslatorManager::getTranslator(node);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->getTranslator(node);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BuiltinScriptTranslatorManager_register_1getTranslator_1AbstractNodePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBuiltinScriptTranslatorManagerProxy *pObjectX = (JCBuiltinScriptTranslatorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTranslator_AbstractNodePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTranslator_AbstractNodePtr_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_BuiltinScriptTranslatorManager_getTranslator_1AbstractNodePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j)
			{
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CBuiltinScriptTranslatorManager *pObjectX = (EarthView::World::Graphic::CBuiltinScriptTranslatorManager*) pObjXXXX;
				EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::CBuiltinScriptTranslatorManager::getTranslator(node);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
