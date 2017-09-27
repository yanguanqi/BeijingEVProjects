/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/iviewlistener.h"
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
			class JIViewListenerProxy : public EarthView::World::Spatial::IViewListener
			{
			 private:
				EarthView::World::Core::ev_string m_onViewChanged_IViewArgs_callback;
			public:
				JIViewListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : IViewListener(pList)
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
				void register_onViewChanged_IViewArgs_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onViewChanged_IViewArgs_callback = __method;
				}
				virtual void onViewChanged(EarthView::World::Spatial::IViewArgs* args)
				{
					if (this->_gRef != NULL && this->m_onViewChanged_IViewArgs_callback != "" && this->isCustomExtend())
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
						jlong args_j = (jlong) args;
						jmethodID __method = __gr->getMethod("onViewChanged_IViewArgs_callback");
						__env->CallVoidMethod(__obj, __method , args_j);
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
						return this->IViewListener::onViewChanged(args);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JIViewListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Iviewlistener_onViewChanged_1IViewArgs(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong args_j)
			{
				EarthView::World::Spatial::IViewArgs *args = (EarthView::World::Spatial::IViewArgs*) args_j;
				EarthView::World::Spatial::IViewListener *pObjectX = (EarthView::World::Spatial::IViewListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIViewListenerProxy))
				{
					pObjectX->EarthView::World::Spatial::IViewListener::onViewChanged(args);
				}
				else
				{
					pObjectX->onViewChanged(args);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Iviewlistener_register_1onViewChanged_1IViewArgs(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIViewListenerProxy *pObjectX = (JIViewListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onViewChanged_IViewArgs_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onViewChanged_IViewArgs_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Iviewlistener_onViewChanged_1IViewArgs_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong args_j)
			{
				EarthView::World::Spatial::IViewArgs *args = (EarthView::World::Spatial::IViewArgs*) args_j;
				EarthView::World::Spatial::IViewListener *pObjectX = (EarthView::World::Spatial::IViewListener*) pObjXXXX;
				pObjectX->EarthView::World::Spatial::IViewListener::onViewChanged(args);
			}
		}
	}
}
