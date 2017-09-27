/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "ga/globeanimationhandler.h"
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
			namespace Math
			{
			}
		}
		namespace Graphic
		{
		}
		namespace Spatial3D
		{
			namespace Dataset
			{
			}
			namespace ModelManager
			{
			}
			namespace Controls
			{
				class JCRouteFlyListenerProxy : public EarthView::World::Spatial3D::Controls::CRouteFlyListener
				{
				 private:
					EarthView::World::Core::ev_string m_startRouteFly_CModelBaseObject_callback;
					EarthView::World::Core::ev_string m_onRouteFlyStarted_CModelBaseObject_callback;
					EarthView::World::Core::ev_string m_stopRouteFly_CModelBaseObject_callback;
					EarthView::World::Core::ev_string m_onRouteFlyStoped_CModelBaseObject_callback;
					EarthView::World::Core::ev_string m_pauseRouteFly_CModelBaseObject_callback;
					EarthView::World::Core::ev_string m_onRouteFlyPaused_CModelBaseObject_callback;
					EarthView::World::Core::ev_string m_continueRouteFly_CModelBaseObject_callback;
					EarthView::World::Core::ev_string m_onRouteFlyContinued_CModelBaseObject_callback;
					EarthView::World::Core::ev_string m_onRouteFlyFinished_void_callback;
				public:
					JCRouteFlyListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRouteFlyListener(pList)
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
					void register_startRouteFly_CModelBaseObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_startRouteFly_CModelBaseObject_callback = __method;
					}
					void register_onRouteFlyStarted_CModelBaseObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onRouteFlyStarted_CModelBaseObject_callback = __method;
					}
					void register_stopRouteFly_CModelBaseObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_stopRouteFly_CModelBaseObject_callback = __method;
					}
					void register_onRouteFlyStoped_CModelBaseObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onRouteFlyStoped_CModelBaseObject_callback = __method;
					}
					void register_pauseRouteFly_CModelBaseObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_pauseRouteFly_CModelBaseObject_callback = __method;
					}
					void register_onRouteFlyPaused_CModelBaseObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onRouteFlyPaused_CModelBaseObject_callback = __method;
					}
					void register_continueRouteFly_CModelBaseObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_continueRouteFly_CModelBaseObject_callback = __method;
					}
					void register_onRouteFlyContinued_CModelBaseObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onRouteFlyContinued_CModelBaseObject_callback = __method;
					}
					void register_onRouteFlyFinished_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onRouteFlyFinished_void_callback = __method;
					}
					virtual void startRouteFly(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject)
					{
						if (this->_gRef != NULL && this->m_startRouteFly_CModelBaseObject_callback != "" && this->isCustomExtend())
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
							jlong pManualModelObject_j = (jlong) pManualModelObject;
							jmethodID __method = __gr->getMethod("startRouteFly_CModelBaseObject_callback");
							__env->CallVoidMethod(__obj, __method , pManualModelObject_j);
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
							return this->CRouteFlyListener::startRouteFly(pManualModelObject);
						}
					}
					virtual void onRouteFlyStarted(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject)
					{
						if (this->_gRef != NULL && this->m_onRouteFlyStarted_CModelBaseObject_callback != "" && this->isCustomExtend())
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
							jlong pManualModelObject_j = (jlong) pManualModelObject;
							jmethodID __method = __gr->getMethod("onRouteFlyStarted_CModelBaseObject_callback");
							__env->CallVoidMethod(__obj, __method , pManualModelObject_j);
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
							return this->CRouteFlyListener::onRouteFlyStarted(pManualModelObject);
						}
					}
					virtual void stopRouteFly(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject)
					{
						if (this->_gRef != NULL && this->m_stopRouteFly_CModelBaseObject_callback != "" && this->isCustomExtend())
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
							jlong pManualModelObject_j = (jlong) pManualModelObject;
							jmethodID __method = __gr->getMethod("stopRouteFly_CModelBaseObject_callback");
							__env->CallVoidMethod(__obj, __method , pManualModelObject_j);
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
							return this->CRouteFlyListener::stopRouteFly(pManualModelObject);
						}
					}
					virtual void onRouteFlyStoped(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject)
					{
						if (this->_gRef != NULL && this->m_onRouteFlyStoped_CModelBaseObject_callback != "" && this->isCustomExtend())
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
							jlong pManualModelObject_j = (jlong) pManualModelObject;
							jmethodID __method = __gr->getMethod("onRouteFlyStoped_CModelBaseObject_callback");
							__env->CallVoidMethod(__obj, __method , pManualModelObject_j);
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
							return this->CRouteFlyListener::onRouteFlyStoped(pManualModelObject);
						}
					}
					virtual void pauseRouteFly(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject)
					{
						if (this->_gRef != NULL && this->m_pauseRouteFly_CModelBaseObject_callback != "" && this->isCustomExtend())
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
							jlong pManualModelObject_j = (jlong) pManualModelObject;
							jmethodID __method = __gr->getMethod("pauseRouteFly_CModelBaseObject_callback");
							__env->CallVoidMethod(__obj, __method , pManualModelObject_j);
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
							return this->CRouteFlyListener::pauseRouteFly(pManualModelObject);
						}
					}
					virtual void onRouteFlyPaused(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject)
					{
						if (this->_gRef != NULL && this->m_onRouteFlyPaused_CModelBaseObject_callback != "" && this->isCustomExtend())
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
							jlong pManualModelObject_j = (jlong) pManualModelObject;
							jmethodID __method = __gr->getMethod("onRouteFlyPaused_CModelBaseObject_callback");
							__env->CallVoidMethod(__obj, __method , pManualModelObject_j);
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
							return this->CRouteFlyListener::onRouteFlyPaused(pManualModelObject);
						}
					}
					virtual void continueRouteFly(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject)
					{
						if (this->_gRef != NULL && this->m_continueRouteFly_CModelBaseObject_callback != "" && this->isCustomExtend())
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
							jlong pManualModelObject_j = (jlong) pManualModelObject;
							jmethodID __method = __gr->getMethod("continueRouteFly_CModelBaseObject_callback");
							__env->CallVoidMethod(__obj, __method , pManualModelObject_j);
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
							return this->CRouteFlyListener::continueRouteFly(pManualModelObject);
						}
					}
					virtual void onRouteFlyContinued(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject)
					{
						if (this->_gRef != NULL && this->m_onRouteFlyContinued_CModelBaseObject_callback != "" && this->isCustomExtend())
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
							jlong pManualModelObject_j = (jlong) pManualModelObject;
							jmethodID __method = __gr->getMethod("onRouteFlyContinued_CModelBaseObject_callback");
							__env->CallVoidMethod(__obj, __method , pManualModelObject_j);
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
							return this->CRouteFlyListener::onRouteFlyContinued(pManualModelObject);
						}
					}
					virtual void onRouteFlyFinished()
					{
						if (this->_gRef != NULL && this->m_onRouteFlyFinished_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onRouteFlyFinished_void_callback");
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
							return this->CRouteFlyListener::onRouteFlyFinished();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCRouteFlyListenerProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_startRouteFly_1CModelBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pManualModelObject_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pManualModelObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pManualModelObject_j;
					EarthView::World::Spatial3D::Controls::CRouteFlyListener *pObjectX = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRouteFlyListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::CRouteFlyListener::startRouteFly(pManualModelObject);
					}
					else
					{
						pObjectX->startRouteFly(pManualModelObject);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_register_1startRouteFly_1CModelBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRouteFlyListenerProxy *pObjectX = (JCRouteFlyListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_startRouteFly_CModelBaseObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"startRouteFly_CModelBaseObject_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_startRouteFly_1CModelBaseObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pManualModelObject_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pManualModelObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pManualModelObject_j;
					EarthView::World::Spatial3D::Controls::CRouteFlyListener *pObjectX = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::CRouteFlyListener::startRouteFly(pManualModelObject);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_onRouteFlyStarted_1CModelBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pManualModelObject_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pManualModelObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pManualModelObject_j;
					EarthView::World::Spatial3D::Controls::CRouteFlyListener *pObjectX = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRouteFlyListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::CRouteFlyListener::onRouteFlyStarted(pManualModelObject);
					}
					else
					{
						pObjectX->onRouteFlyStarted(pManualModelObject);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_register_1onRouteFlyStarted_1CModelBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRouteFlyListenerProxy *pObjectX = (JCRouteFlyListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onRouteFlyStarted_CModelBaseObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onRouteFlyStarted_CModelBaseObject_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_onRouteFlyStarted_1CModelBaseObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pManualModelObject_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pManualModelObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pManualModelObject_j;
					EarthView::World::Spatial3D::Controls::CRouteFlyListener *pObjectX = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::CRouteFlyListener::onRouteFlyStarted(pManualModelObject);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_stopRouteFly_1CModelBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pManualModelObject_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pManualModelObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pManualModelObject_j;
					EarthView::World::Spatial3D::Controls::CRouteFlyListener *pObjectX = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRouteFlyListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::CRouteFlyListener::stopRouteFly(pManualModelObject);
					}
					else
					{
						pObjectX->stopRouteFly(pManualModelObject);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_register_1stopRouteFly_1CModelBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRouteFlyListenerProxy *pObjectX = (JCRouteFlyListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_stopRouteFly_CModelBaseObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"stopRouteFly_CModelBaseObject_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_stopRouteFly_1CModelBaseObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pManualModelObject_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pManualModelObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pManualModelObject_j;
					EarthView::World::Spatial3D::Controls::CRouteFlyListener *pObjectX = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::CRouteFlyListener::stopRouteFly(pManualModelObject);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_onRouteFlyStoped_1CModelBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pManualModelObject_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pManualModelObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pManualModelObject_j;
					EarthView::World::Spatial3D::Controls::CRouteFlyListener *pObjectX = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRouteFlyListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::CRouteFlyListener::onRouteFlyStoped(pManualModelObject);
					}
					else
					{
						pObjectX->onRouteFlyStoped(pManualModelObject);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_register_1onRouteFlyStoped_1CModelBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRouteFlyListenerProxy *pObjectX = (JCRouteFlyListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onRouteFlyStoped_CModelBaseObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onRouteFlyStoped_CModelBaseObject_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_onRouteFlyStoped_1CModelBaseObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pManualModelObject_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pManualModelObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pManualModelObject_j;
					EarthView::World::Spatial3D::Controls::CRouteFlyListener *pObjectX = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::CRouteFlyListener::onRouteFlyStoped(pManualModelObject);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_pauseRouteFly_1CModelBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pManualModelObject_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pManualModelObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pManualModelObject_j;
					EarthView::World::Spatial3D::Controls::CRouteFlyListener *pObjectX = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRouteFlyListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::CRouteFlyListener::pauseRouteFly(pManualModelObject);
					}
					else
					{
						pObjectX->pauseRouteFly(pManualModelObject);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_register_1pauseRouteFly_1CModelBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRouteFlyListenerProxy *pObjectX = (JCRouteFlyListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_pauseRouteFly_CModelBaseObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"pauseRouteFly_CModelBaseObject_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_pauseRouteFly_1CModelBaseObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pManualModelObject_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pManualModelObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pManualModelObject_j;
					EarthView::World::Spatial3D::Controls::CRouteFlyListener *pObjectX = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::CRouteFlyListener::pauseRouteFly(pManualModelObject);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_onRouteFlyPaused_1CModelBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pManualModelObject_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pManualModelObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pManualModelObject_j;
					EarthView::World::Spatial3D::Controls::CRouteFlyListener *pObjectX = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRouteFlyListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::CRouteFlyListener::onRouteFlyPaused(pManualModelObject);
					}
					else
					{
						pObjectX->onRouteFlyPaused(pManualModelObject);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_register_1onRouteFlyPaused_1CModelBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRouteFlyListenerProxy *pObjectX = (JCRouteFlyListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onRouteFlyPaused_CModelBaseObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onRouteFlyPaused_CModelBaseObject_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_onRouteFlyPaused_1CModelBaseObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pManualModelObject_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pManualModelObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pManualModelObject_j;
					EarthView::World::Spatial3D::Controls::CRouteFlyListener *pObjectX = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::CRouteFlyListener::onRouteFlyPaused(pManualModelObject);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_continueRouteFly_1CModelBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pManualModelObject_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pManualModelObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pManualModelObject_j;
					EarthView::World::Spatial3D::Controls::CRouteFlyListener *pObjectX = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRouteFlyListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::CRouteFlyListener::continueRouteFly(pManualModelObject);
					}
					else
					{
						pObjectX->continueRouteFly(pManualModelObject);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_register_1continueRouteFly_1CModelBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRouteFlyListenerProxy *pObjectX = (JCRouteFlyListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_continueRouteFly_CModelBaseObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"continueRouteFly_CModelBaseObject_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_continueRouteFly_1CModelBaseObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pManualModelObject_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pManualModelObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pManualModelObject_j;
					EarthView::World::Spatial3D::Controls::CRouteFlyListener *pObjectX = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::CRouteFlyListener::continueRouteFly(pManualModelObject);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_onRouteFlyContinued_1CModelBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pManualModelObject_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pManualModelObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pManualModelObject_j;
					EarthView::World::Spatial3D::Controls::CRouteFlyListener *pObjectX = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRouteFlyListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::CRouteFlyListener::onRouteFlyContinued(pManualModelObject);
					}
					else
					{
						pObjectX->onRouteFlyContinued(pManualModelObject);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_register_1onRouteFlyContinued_1CModelBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRouteFlyListenerProxy *pObjectX = (JCRouteFlyListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onRouteFlyContinued_CModelBaseObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onRouteFlyContinued_CModelBaseObject_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_onRouteFlyContinued_1CModelBaseObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pManualModelObject_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pManualModelObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pManualModelObject_j;
					EarthView::World::Spatial3D::Controls::CRouteFlyListener *pObjectX = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::CRouteFlyListener::onRouteFlyContinued(pManualModelObject);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_onRouteFlyFinished_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CRouteFlyListener *pObjectX = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRouteFlyListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::CRouteFlyListener::onRouteFlyFinished();
					}
					else
					{
						pObjectX->onRouteFlyFinished();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_register_1onRouteFlyFinished_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRouteFlyListenerProxy *pObjectX = (JCRouteFlyListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onRouteFlyFinished_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onRouteFlyFinished_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RouteFlyListener_onRouteFlyFinished_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CRouteFlyListener *pObjectX = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::CRouteFlyListener::onRouteFlyFinished();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_ControlPoints_push_1back_1CManualObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Graphic::CManualObject *&t = *(EarthView::World::Graphic::CManualObject**) t_j;
					EarthView::World::Spatial3D::Controls::CControlPoints *pObjectX = (EarthView::World::Spatial3D::Controls::CControlPoints*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_ControlPoints_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CControlPoints *pObjectX = (EarthView::World::Spatial3D::Controls::CControlPoints*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_ControlPoints_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CControlPoints *pObjectX = (EarthView::World::Spatial3D::Controls::CControlPoints*) pObjXXXX;
					EarthView::World::Graphic::CManualObject*& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_ControlPoints_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CControlPoints *pObjectX = (EarthView::World::Spatial3D::Controls::CControlPoints*) pObjXXXX;
					EarthView::World::Graphic::CManualObject*& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_ControlPoints_insert_1ev_1uint32_1CManualObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Graphic::CManualObject *&t = *(EarthView::World::Graphic::CManualObject**) t_j;
					EarthView::World::Spatial3D::Controls::CControlPoints *pObjectX = (EarthView::World::Spatial3D::Controls::CControlPoints*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_ControlPoints_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial3D::Controls::CControlPoints *pObjectX = (EarthView::World::Spatial3D::Controls::CControlPoints*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_ControlPoints_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CControlPoints *pObjectX = (EarthView::World::Spatial3D::Controls::CControlPoints*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_ControlPoints_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial3D::Controls::CControlPoints& pObjectX = *(EarthView::World::Spatial3D::Controls::CControlPoints*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Graphic::CManualObject*& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_ControlPoints_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Controls::CControlPoints *pObjectX = (EarthView::World::Spatial3D::Controls::CControlPoints*) pObjXXXX;
					EarthView::World::Graphic::CManualObject*& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_ControlPoints_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CControlPoints *pObjectX = (EarthView::World::Spatial3D::Controls::CControlPoints*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_ControlPoints_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::Controls::CControlPoints *pObjectX = (EarthView::World::Spatial3D::Controls::CControlPoints*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_ControlPoints_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial3D::Controls::CControlPoints *pObjectX = (EarthView::World::Spatial3D::Controls::CControlPoints*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_ControlPoints_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CControlPoints *pObjectX = (EarthView::World::Spatial3D::Controls::CControlPoints*) pObjXXXX;
					pObjectX->clear();
				}
				class JCGlobeAnimationHandlerProxy : public EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler
				{
				 private:
					EarthView::World::Core::ev_string m_handleMouseUpEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleKeyDownEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleKeyUpEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleUserEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_drawFlyLine_void_callback;
					EarthView::World::Core::ev_string m_handleUseEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleFrameEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleMouseDownEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleMouseMoveEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleMouseUp_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleMouseWheelEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_computeAltitudeDelta_CVector3_callback;
					EarthView::World::Core::ev_string m_handleEvent_CGUIEvent_callback;
				public:
					JCGlobeAnimationHandlerProxy(EarthView::World::Core::CNameValuePairList *pList) : CGlobeAnimationHandler(pList)
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
					void register_handleMouseUpEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleMouseUpEvent_CGUIEvent_callback = __method;
					}
					void register_handleKeyDownEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleKeyDownEvent_CGUIEvent_callback = __method;
					}
					void register_handleKeyUpEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleKeyUpEvent_CGUIEvent_callback = __method;
					}
					void register_handleUserEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleUserEvent_CGUIEvent_callback = __method;
					}
					void register_drawFlyLine_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_drawFlyLine_void_callback = __method;
					}
					void register_handleUseEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleUseEvent_CGUIEvent_callback = __method;
					}
					void register_handleFrameEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleFrameEvent_CGUIEvent_callback = __method;
					}
					void register_handleMouseDownEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleMouseDownEvent_CGUIEvent_callback = __method;
					}
					void register_handleMouseMoveEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleMouseMoveEvent_CGUIEvent_callback = __method;
					}
					void register_handleMouseUp_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleMouseUp_CGUIEvent_callback = __method;
					}
					void register_handleMouseWheelEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleMouseWheelEvent_CGUIEvent_callback = __method;
					}
					void register_computeAltitudeDelta_CVector3_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_computeAltitudeDelta_CVector3_callback = __method;
					}
					void register_handleEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleEvent_CGUIEvent_callback = __method;
					}
					virtual ev_bool handleEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if (this->_gRef != NULL && this->m_handleEvent_CGUIEvent_callback != "" && this->isCustomExtend())
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
							jlong guiEvent_j = (jlong) guiEvent;
							jmethodID __method = __gr->getMethod("handleEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , guiEvent_j);
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
							return this->CGlobeAnimationHandler::handleEvent(guiEvent);
						}
					}
					virtual ev_bool handleMouseUpEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if (this->_gRef != NULL && this->m_handleMouseUpEvent_CGUIEvent_callback != "" && this->isCustomExtend())
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
							jlong guiEvent_j = (jlong) guiEvent;
							jmethodID __method = __gr->getMethod("handleMouseUpEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , guiEvent_j);
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
							return this->CGlobeAnimationHandler::handleMouseUpEvent(guiEvent);
						}
					}
					virtual ev_bool handleKeyDownEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if (this->_gRef != NULL && this->m_handleKeyDownEvent_CGUIEvent_callback != "" && this->isCustomExtend())
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
							jlong guiEvent_j = (jlong) guiEvent;
							jmethodID __method = __gr->getMethod("handleKeyDownEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , guiEvent_j);
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
							return this->CGlobeAnimationHandler::handleKeyDownEvent(guiEvent);
						}
					}
					virtual ev_bool handleKeyUpEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if (this->_gRef != NULL && this->m_handleKeyUpEvent_CGUIEvent_callback != "" && this->isCustomExtend())
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
							jlong guiEvent_j = (jlong) guiEvent;
							jmethodID __method = __gr->getMethod("handleKeyUpEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , guiEvent_j);
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
							return this->CGlobeAnimationHandler::handleKeyUpEvent(guiEvent);
						}
					}
					virtual ev_bool handleFrameEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if (this->_gRef != NULL && this->m_handleFrameEvent_CGUIEvent_callback != "" && this->isCustomExtend())
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
							jlong guiEvent_j = (jlong) guiEvent;
							jmethodID __method = __gr->getMethod("handleFrameEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , guiEvent_j);
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
							return this->CGlobeAnimationHandler::handleFrameEvent(guiEvent);
						}
					}
					virtual ev_bool handleUserEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if (this->_gRef != NULL && this->m_handleUserEvent_CGUIEvent_callback != "" && this->isCustomExtend())
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
							jlong guiEvent_j = (jlong) guiEvent;
							jmethodID __method = __gr->getMethod("handleUserEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , guiEvent_j);
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
							return this->CGlobeAnimationHandler::handleUserEvent(guiEvent);
						}
					}
					virtual ev_bool handleMouseDownEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if (this->_gRef != NULL && this->m_handleMouseDownEvent_CGUIEvent_callback != "" && this->isCustomExtend())
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
							jlong guiEvent_j = (jlong) guiEvent;
							jmethodID __method = __gr->getMethod("handleMouseDownEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , guiEvent_j);
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
							return this->CGlobeAnimationHandler::handleMouseDownEvent(guiEvent);
						}
					}
					virtual ev_bool handleMouseMoveEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if (this->_gRef != NULL && this->m_handleMouseMoveEvent_CGUIEvent_callback != "" && this->isCustomExtend())
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
							jlong guiEvent_j = (jlong) guiEvent;
							jmethodID __method = __gr->getMethod("handleMouseMoveEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , guiEvent_j);
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
							return this->CGlobeAnimationHandler::handleMouseMoveEvent(guiEvent);
						}
					}
					virtual ev_bool handleMouseWheelEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if (this->_gRef != NULL && this->m_handleMouseWheelEvent_CGUIEvent_callback != "" && this->isCustomExtend())
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
							jlong guiEvent_j = (jlong) guiEvent;
							jmethodID __method = __gr->getMethod("handleMouseWheelEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , guiEvent_j);
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
							return this->CGlobeAnimationHandler::handleMouseWheelEvent(guiEvent);
						}
					}
					virtual ev_bool drawFlyLine()
					{
						if (this->_gRef != NULL && this->m_drawFlyLine_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("drawFlyLine_void_callback");
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
							return this->CGlobeAnimationHandler::drawFlyLine();
						}
					}
					virtual ev_bool handleUseEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent)
					{
						if (this->_gRef != NULL && this->m_handleUseEvent_CGUIEvent_callback != "" && this->isCustomExtend())
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
							jlong userEvent_j = (jlong) userEvent;
							jmethodID __method = __gr->getMethod("handleUseEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , userEvent_j);
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
							return this->CGlobeAnimationHandler::handleUseEvent(userEvent);
						}
					}
					virtual ev_bool handleMouseUp(EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent)
					{
						if (this->_gRef != NULL && this->m_handleMouseUp_CGUIEvent_callback != "" && this->isCustomExtend())
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
							jlong mouseEvent_j = (jlong) mouseEvent;
							jmethodID __method = __gr->getMethod("handleMouseUp_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , mouseEvent_j);
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
							return this->CGlobeAnimationHandler::handleMouseUp(mouseEvent);
						}
					}
					virtual ev_real64 computeAltitudeDelta(const EarthView::World::Spatial::Math::CVector3& v)
					{
						if (this->_gRef != NULL && this->m_computeAltitudeDelta_CVector3_callback != "" && this->isCustomExtend())
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
							jlong v_j = (jlong) &v;
							jmethodID __method = __gr->getMethod("computeAltitudeDelta_CVector3_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , v_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CGlobeAnimationHandler::computeAltitudeDelta(v);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCGlobeAnimationHandlerProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_addRouteFlyListener_1CRouteFlyListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong routeFlyListener_j)
				{
					EarthView::World::Spatial3D::Controls::CRouteFlyListener *routeFlyListener = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) routeFlyListener_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					pObjectX->addRouteFlyListener(routeFlyListener);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_removeRouteFlyListener_1CRouteFlyListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
				{
					EarthView::World::Spatial3D::Controls::CRouteFlyListener *listener = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) listener_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					pObjectX->removeRouteFlyListener(listener);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_clearEffectWidthNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					pObjectX->clearEffectWidthNode();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_handleEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeAnimationHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleEvent(guiEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleEvent(guiEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_register_1handleEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAnimationHandlerProxy *pObjectX = (JCGlobeAnimationHandlerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_handleEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_handleMouseUpEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeAnimationHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleMouseUpEvent(guiEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleMouseUpEvent(guiEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_register_1handleMouseUpEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAnimationHandlerProxy *pObjectX = (JCGlobeAnimationHandlerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleMouseUpEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleMouseUpEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_handleMouseUpEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleMouseUpEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_handleKeyDownEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeAnimationHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleKeyDownEvent(guiEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleKeyDownEvent(guiEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_register_1handleKeyDownEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAnimationHandlerProxy *pObjectX = (JCGlobeAnimationHandlerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleKeyDownEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleKeyDownEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_handleKeyDownEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleKeyDownEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_handleKeyUpEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeAnimationHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleKeyUpEvent(guiEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleKeyUpEvent(guiEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_register_1handleKeyUpEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAnimationHandlerProxy *pObjectX = (JCGlobeAnimationHandlerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleKeyUpEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleKeyUpEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_handleKeyUpEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleKeyUpEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_handleFrameEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeAnimationHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleFrameEvent(guiEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleFrameEvent(guiEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_register_1handleFrameEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAnimationHandlerProxy *pObjectX = (JCGlobeAnimationHandlerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleFrameEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleFrameEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_handleFrameEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleFrameEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_handleUserEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeAnimationHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleUserEvent(guiEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleUserEvent(guiEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_register_1handleUserEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAnimationHandlerProxy *pObjectX = (JCGlobeAnimationHandlerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleUserEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleUserEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_handleUserEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleUserEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_handleMouseDownEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeAnimationHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleMouseDownEvent(guiEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleMouseDownEvent(guiEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_register_1handleMouseDownEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAnimationHandlerProxy *pObjectX = (JCGlobeAnimationHandlerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleMouseDownEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleMouseDownEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_handleMouseDownEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleMouseDownEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_handleMouseMoveEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeAnimationHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleMouseMoveEvent(guiEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleMouseMoveEvent(guiEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_register_1handleMouseMoveEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAnimationHandlerProxy *pObjectX = (JCGlobeAnimationHandlerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleMouseMoveEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleMouseMoveEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_handleMouseMoveEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleMouseMoveEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_handleMouseWheelEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeAnimationHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleMouseWheelEvent(guiEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleMouseWheelEvent(guiEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_register_1handleMouseWheelEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAnimationHandlerProxy *pObjectX = (JCGlobeAnimationHandlerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleMouseWheelEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleMouseWheelEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_handleMouseWheelEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleMouseWheelEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_createEditPointOverlay_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					pObjectX->createEditPointOverlay();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_destroyEditPointOverlay_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					pObjectX->destroyEditPointOverlay();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_createPoints_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint selectIndex_j)
				{
					int selectIndex = (int) selectIndex_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					pObjectX->createPoints(selectIndex);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_destroyPoints_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					pObjectX->destroyPoints();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_attachPoints_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					pObjectX->attachPoints();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_detachPoints_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					pObjectX->detachPoints();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_loadFromDataSource_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					pObjectX->loadFromDataSource();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_readModel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					pObjectX->readModel();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_createLine_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					pObjectX->createLine();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_createRealControlLine_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isEdit_j)
				{
					ev_bool isEdit = (ev_bool) isEdit_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					pObjectX->createRealControlLine(isEdit);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_createRealControlLine_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					pObjectX->createRealControlLine();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_destroyLine_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					pObjectX->destroyLine();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_destroyRealControlLine_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					pObjectX->destroyRealControlLine();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_createGlobeNodeTrack_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					pObjectX->createGlobeNodeTrack();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_destroyGlobeNodeTrack_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					pObjectX->destroyGlobeNodeTrack();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_createNodeTack_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					pObjectX->createNodeTack();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_destroyNodeTack_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					pObjectX->destroyNodeTack();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_screenToScene_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat x_j, jfloat y_j)
				{
					ev_real32 x = (ev_real32) x_j;
					ev_real32 y = (ev_real32) y_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					EarthView::World::Spatial::Math::CRay __values1 = pObjectX->screenToScene(x, y);
					EarthView::World::Spatial::Math::CRay *returnvalues = new EarthView::World::Spatial::Math::CRay(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_drawFlyLine_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeAnimationHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::drawFlyLine();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->drawFlyLine();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_register_1drawFlyLine_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAnimationHandlerProxy *pObjectX = (JCGlobeAnimationHandlerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_drawFlyLine_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"drawFlyLine_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_drawFlyLine_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::drawFlyLine();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_setRenderWindow_1CRenderWindow(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_window_j)
				{
					EarthView::World::Graphic::CRenderWindow *ref_window = (EarthView::World::Graphic::CRenderWindow*) ref_window_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					pObjectX->setRenderWindow(ref_window);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_createPlaneOverlay_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					pObjectX->createPlaneOverlay();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_destroyPlaneOverlay_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					pObjectX->destroyPlaneOverlay();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_initializeThreeAxis_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					pObjectX->initializeThreeAxis();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_destroyThreeAxis_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					pObjectX->destroyThreeAxis();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_isFlyFinished_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->isFlyFinished();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_register_1handleUseEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAnimationHandlerProxy *pObjectX = (JCGlobeAnimationHandlerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleUseEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleUseEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_register_1handleMouseUp_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAnimationHandlerProxy *pObjectX = (JCGlobeAnimationHandlerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleMouseUp_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleMouseUp_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationHandler_register_1computeAltitudeDelta_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeAnimationHandlerProxy *pObjectX = (JCGlobeAnimationHandlerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_computeAltitudeDelta_CVector3_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"computeAltitudeDelta_CVector3_callback", "(J)D");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
