/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/compositorlogic.h"
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
			class JCCompositorLogicProxy : public EarthView::World::Graphic::CCompositorLogic
			{
			 private:
				EarthView::World::Core::ev_string m_compositorInstanceCreated_CCompositorInstance_callback;
				EarthView::World::Core::ev_string m_compositorInstanceDestroyed_CCompositorInstance_callback;
			public:
				JCCompositorLogicProxy(EarthView::World::Core::CNameValuePairList *pList) : CCompositorLogic(pList)
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
				void register_compositorInstanceCreated_CCompositorInstance_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_compositorInstanceCreated_CCompositorInstance_callback = __method;
				}
				void register_compositorInstanceDestroyed_CCompositorInstance_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_compositorInstanceDestroyed_CCompositorInstance_callback = __method;
				}
				virtual void compositorInstanceCreated(EarthView::World::Graphic::CCompositorInstance* newInstance)
				{
					if (this->_gRef != NULL && this->m_compositorInstanceCreated_CCompositorInstance_callback != "" && this->isCustomExtend())
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
						jlong newInstance_j = (jlong) newInstance;
						jmethodID __method = __gr->getMethod("compositorInstanceCreated_CCompositorInstance_callback");
						__env->CallVoidMethod(__obj, __method , newInstance_j);
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
						return this->CCompositorLogic::compositorInstanceCreated(newInstance);
					}
				}
				virtual void compositorInstanceDestroyed(EarthView::World::Graphic::CCompositorInstance* destroyedInstance)
				{
					if (this->_gRef != NULL && this->m_compositorInstanceDestroyed_CCompositorInstance_callback != "" && this->isCustomExtend())
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
						jlong destroyedInstance_j = (jlong) destroyedInstance;
						jmethodID __method = __gr->getMethod("compositorInstanceDestroyed_CCompositorInstance_callback");
						__env->CallVoidMethod(__obj, __method , destroyedInstance_j);
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
						return this->CCompositorLogic::compositorInstanceDestroyed(destroyedInstance);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCCompositorLogicProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorLogic_compositorInstanceCreated_1CCompositorInstance(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newInstance_j)
			{
				EarthView::World::Graphic::CCompositorInstance *newInstance = (EarthView::World::Graphic::CCompositorInstance*) newInstance_j;
				EarthView::World::Graphic::CCompositorLogic *pObjectX = (EarthView::World::Graphic::CCompositorLogic*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositorLogicProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositorLogic::compositorInstanceCreated(newInstance);
				}
				else
				{
					pObjectX->compositorInstanceCreated(newInstance);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorLogic_register_1compositorInstanceCreated_1CCompositorInstance(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorLogicProxy *pObjectX = (JCCompositorLogicProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_compositorInstanceCreated_CCompositorInstance_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"compositorInstanceCreated_CCompositorInstance_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorLogic_compositorInstanceCreated_1CCompositorInstance_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newInstance_j)
			{
				EarthView::World::Graphic::CCompositorInstance *newInstance = (EarthView::World::Graphic::CCompositorInstance*) newInstance_j;
				EarthView::World::Graphic::CCompositorLogic *pObjectX = (EarthView::World::Graphic::CCompositorLogic*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositorLogic::compositorInstanceCreated(newInstance);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorLogic_compositorInstanceDestroyed_1CCompositorInstance(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destroyedInstance_j)
			{
				EarthView::World::Graphic::CCompositorInstance *destroyedInstance = (EarthView::World::Graphic::CCompositorInstance*) destroyedInstance_j;
				EarthView::World::Graphic::CCompositorLogic *pObjectX = (EarthView::World::Graphic::CCompositorLogic*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositorLogicProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositorLogic::compositorInstanceDestroyed(destroyedInstance);
				}
				else
				{
					pObjectX->compositorInstanceDestroyed(destroyedInstance);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorLogic_register_1compositorInstanceDestroyed_1CCompositorInstance(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorLogicProxy *pObjectX = (JCCompositorLogicProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_compositorInstanceDestroyed_CCompositorInstance_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"compositorInstanceDestroyed_CCompositorInstance_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorLogic_compositorInstanceDestroyed_1CCompositorInstance_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destroyedInstance_j)
			{
				EarthView::World::Graphic::CCompositorInstance *destroyedInstance = (EarthView::World::Graphic::CCompositorInstance*) destroyedInstance_j;
				EarthView::World::Graphic::CCompositorLogic *pObjectX = (EarthView::World::Graphic::CCompositorLogic*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositorLogic::compositorInstanceDestroyed(destroyedInstance);
			}
		}
	}
}
