/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "plugin_particlefx/pointextendemitterfactory.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Plugin
		{
			namespace ParticleFX
			{
				class JCPointExtendEmitterFactoryProxy : public EarthView::World::Plugin::ParticleFX::CPointExtendEmitterFactory
				{
				 private:
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_createEmitter_CParticleSystem_callback;
					EarthView::World::Core::ev_string m_destroyEmitter_CParticleEmitter_callback;
				public:
					JCPointExtendEmitterFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CPointExtendEmitterFactory(pList)
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
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_createEmitter_CParticleSystem_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createEmitter_CParticleSystem_callback = __method;
					}
					void register_destroyEmitter_CParticleEmitter_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_destroyEmitter_CParticleEmitter_callback = __method;
					}
					virtual EVString getName() const
					{
						if (this->_gRef != NULL && this->m_getName_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getName_void_callback");
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
							return this->CPointExtendEmitterFactory::getName();
						}
					}
					virtual EarthView::World::Graphic::CParticleEmitter* createEmitter(EarthView::World::Graphic::CParticleSystem* psys)
					{
						if (this->_gRef != NULL && this->m_createEmitter_CParticleSystem_callback != "" && this->isCustomExtend())
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
							jlong psys_j = (jlong) psys;
							jmethodID __method = __gr->getMethod("createEmitter_CParticleSystem_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , psys_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CParticleEmitter *__values1 = (EarthView::World::Graphic::CParticleEmitter*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CPointExtendEmitterFactory::createEmitter(psys);
						}
					}
					virtual void destroyEmitter(EarthView::World::Graphic::CParticleEmitter* e)
					{
						if (this->_gRef != NULL && this->m_destroyEmitter_CParticleEmitter_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("destroyEmitter_CParticleEmitter_callback");
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
							return this->CPointExtendEmitterFactory::destroyEmitter(e);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCPointExtendEmitterFactoryProxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_PointExtendEmitterFactory_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Plugin::ParticleFX::CPointExtendEmitterFactory *pObjectX = (EarthView::World::Plugin::ParticleFX::CPointExtendEmitterFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCPointExtendEmitterFactoryProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CPointExtendEmitterFactory::getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_PointExtendEmitterFactory_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCPointExtendEmitterFactoryProxy *pObjectX = (JCPointExtendEmitterFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getName_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getName_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_plugin_particlefx_PointExtendEmitterFactory_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Plugin::ParticleFX::CPointExtendEmitterFactory *pObjectX = (EarthView::World::Plugin::ParticleFX::CPointExtendEmitterFactory*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CPointExtendEmitterFactory::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_plugin_particlefx_PointExtendEmitterFactory_createEmitter_1CParticleSystem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong psys_j)
				{
					EarthView::World::Graphic::CParticleSystem *psys = (EarthView::World::Graphic::CParticleSystem*) psys_j;
					EarthView::World::Plugin::ParticleFX::CPointExtendEmitterFactory *pObjectX = (EarthView::World::Plugin::ParticleFX::CPointExtendEmitterFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCPointExtendEmitterFactoryProxy))
					{
						EarthView::World::Graphic::CParticleEmitter* __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CPointExtendEmitterFactory::createEmitter(psys);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Graphic::CParticleEmitter* __values1 = pObjectX->createEmitter(psys);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_PointExtendEmitterFactory_register_1createEmitter_1CParticleSystem(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCPointExtendEmitterFactoryProxy *pObjectX = (JCPointExtendEmitterFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createEmitter_CParticleSystem_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createEmitter_CParticleSystem_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_plugin_particlefx_PointExtendEmitterFactory_createEmitter_1CParticleSystem_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong psys_j)
				{
					EarthView::World::Graphic::CParticleSystem *psys = (EarthView::World::Graphic::CParticleSystem*) psys_j;
					EarthView::World::Plugin::ParticleFX::CPointExtendEmitterFactory *pObjectX = (EarthView::World::Plugin::ParticleFX::CPointExtendEmitterFactory*) pObjXXXX;
					EarthView::World::Graphic::CParticleEmitter* __values1 = pObjectX->EarthView::World::Plugin::ParticleFX::CPointExtendEmitterFactory::createEmitter(psys);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_plugin_particlefx_PointExtendEmitterFactory_register_1destroyEmitter_1CParticleEmitter(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCPointExtendEmitterFactoryProxy *pObjectX = (JCPointExtendEmitterFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_destroyEmitter_CParticleEmitter_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"destroyEmitter_CParticleEmitter_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
