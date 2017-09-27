/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/ikmlobserver.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace KmlManager
			{
				class JIKmlObserverProxy : public EarthView::World::Spatial3D::KmlManager::IKmlObserver
				{
				 private:
					EarthView::World::Core::ev_string m_update_void_callback;
					EarthView::World::Core::ev_string m_refresh_void_callback;
					EarthView::World::Core::ev_string m_toolDeactivatedUpdate_void_callback;
				public:
					JIKmlObserverProxy(EarthView::World::Core::CNameValuePairList *pList) : IKmlObserver(pList)
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
					void register_update_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_update_void_callback = __method;
					}
					void register_refresh_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_refresh_void_callback = __method;
					}
					void register_toolDeactivatedUpdate_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toolDeactivatedUpdate_void_callback = __method;
					}
					virtual void update()
					{
						if (this->_gRef != NULL && this->m_update_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("update_void_callback");
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
							return this->IKmlObserver::update();
						}
					}
					virtual void refresh()
					{
						if (this->_gRef != NULL && this->m_refresh_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("refresh_void_callback");
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
							return this->IKmlObserver::refresh();
						}
					}
					virtual void toolDeactivatedUpdate()
					{
						if (this->_gRef != NULL && this->m_toolDeactivatedUpdate_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("toolDeactivatedUpdate_void_callback");
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
							return this->IKmlObserver::toolDeactivatedUpdate();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIKmlObserverProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_Ikmlobserver_update_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::IKmlObserver *pObjectX = (EarthView::World::Spatial3D::KmlManager::IKmlObserver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIKmlObserverProxy))
					{
						pObjectX->EarthView::World::Spatial3D::KmlManager::IKmlObserver::update();
					}
					else
					{
						pObjectX->update();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_Ikmlobserver_register_1update_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIKmlObserverProxy *pObjectX = (JIKmlObserverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_update_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"update_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_Ikmlobserver_update_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::IKmlObserver *pObjectX = (EarthView::World::Spatial3D::KmlManager::IKmlObserver*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::KmlManager::IKmlObserver::update();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_Ikmlobserver_refresh_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::IKmlObserver *pObjectX = (EarthView::World::Spatial3D::KmlManager::IKmlObserver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIKmlObserverProxy))
					{
						pObjectX->EarthView::World::Spatial3D::KmlManager::IKmlObserver::refresh();
					}
					else
					{
						pObjectX->refresh();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_Ikmlobserver_register_1refresh_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIKmlObserverProxy *pObjectX = (JIKmlObserverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_refresh_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"refresh_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_Ikmlobserver_refresh_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::IKmlObserver *pObjectX = (EarthView::World::Spatial3D::KmlManager::IKmlObserver*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::KmlManager::IKmlObserver::refresh();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_Ikmlobserver_toolDeactivatedUpdate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::IKmlObserver *pObjectX = (EarthView::World::Spatial3D::KmlManager::IKmlObserver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIKmlObserverProxy))
					{
						pObjectX->EarthView::World::Spatial3D::KmlManager::IKmlObserver::toolDeactivatedUpdate();
					}
					else
					{
						pObjectX->toolDeactivatedUpdate();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_Ikmlobserver_register_1toolDeactivatedUpdate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIKmlObserverProxy *pObjectX = (JIKmlObserverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toolDeactivatedUpdate_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toolDeactivatedUpdate_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_Ikmlobserver_toolDeactivatedUpdate_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::IKmlObserver *pObjectX = (EarthView::World::Spatial3D::KmlManager::IKmlObserver*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::KmlManager::IKmlObserver::toolDeactivatedUpdate();
				}
			}
		}
	}
}
