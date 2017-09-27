/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dproxy/kmlpanoramahandle.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			namespace KmlManager
			{
				class JCGui360EventHandlerProxy : public EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler
				{
				 private:
					EarthView::World::Core::ev_string m_handleEvent_CGUIEvent_callback;
				public:
					JCGui360EventHandlerProxy(EarthView::World::Core::CNameValuePairList *pList) : CGui360EventHandler(pList)
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
							return this->CGui360EventHandler::handleEvent(guiEvent);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCGui360EventHandlerProxy);
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_Gui360EventHandler_handleEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGui360EventHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler::handleEvent(guiEvent);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_Gui360EventHandler_register_1handleEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGui360EventHandlerProxy *pObjectX = (JCGui360EventHandlerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_Gui360EventHandler_handleEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler::handleEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_Gui360EventHandler_create_1CPanoramaTile(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tile_j)
				{
					EarthView::World::Spatial3D::Atlas::CPanoramaTile *tile = (EarthView::World::Spatial3D::Atlas::CPanoramaTile*) tile_j;
					EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler*) pObjXXXX;
					pObjectX->create(tile);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_Gui360EventHandler_setCameraInPanorama_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isIn_j)
				{
					ev_bool isIn = (ev_bool) isIn_j;
					EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler*) pObjXXXX;
					pObjectX->setCameraInPanorama(isIn);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_Gui360EventHandler_isCameraInPanorama_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->isCameraInPanorama();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				class JCGotoListener360Proxy : public EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360
				{
				 private:
					EarthView::World::Core::ev_string m_cameraHasGetAtTarget_CGlobeCamera_callback;
					EarthView::World::Core::ev_string m_stopGoto_CGlobeCamera_callback;
				public:
					JCGotoListener360Proxy(EarthView::World::Core::CNameValuePairList *pList) : CGotoListener360(pList)
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
					void register_cameraHasGetAtTarget_CGlobeCamera_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_cameraHasGetAtTarget_CGlobeCamera_callback = __method;
					}
					void register_stopGoto_CGlobeCamera_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_stopGoto_CGlobeCamera_callback = __method;
					}
					virtual void cameraHasGetAtTarget(EarthView::World::Spatial3D::CGlobeCamera* globeCamera)
					{
						if (this->_gRef != NULL && this->m_cameraHasGetAtTarget_CGlobeCamera_callback != "" && this->isCustomExtend())
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
							jlong globeCamera_j = (jlong) globeCamera;
							jmethodID __method = __gr->getMethod("cameraHasGetAtTarget_CGlobeCamera_callback");
							__env->CallVoidMethod(__obj, __method , globeCamera_j);
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
							return this->CGotoListener360::cameraHasGetAtTarget(globeCamera);
						}
					}
					virtual void stopGoto(EarthView::World::Spatial3D::CGlobeCamera* globeCamera)
					{
						if (this->_gRef != NULL && this->m_stopGoto_CGlobeCamera_callback != "" && this->isCustomExtend())
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
							jlong globeCamera_j = (jlong) globeCamera;
							jmethodID __method = __gr->getMethod("stopGoto_CGlobeCamera_callback");
							__env->CallVoidMethod(__obj, __method , globeCamera_j);
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
							return this->CGotoListener360::stopGoto(globeCamera);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCGotoListener360Proxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_GotoListener360_cameraHasGetAtTarget_1CGlobeCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeCamera_j)
				{
					EarthView::World::Spatial3D::CGlobeCamera *globeCamera = (EarthView::World::Spatial3D::CGlobeCamera*) globeCamera_j;
					EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360 *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGotoListener360Proxy))
					{
						pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360::cameraHasGetAtTarget(globeCamera);
					}
					else
					{
						pObjectX->cameraHasGetAtTarget(globeCamera);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_GotoListener360_register_1cameraHasGetAtTarget_1CGlobeCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGotoListener360Proxy *pObjectX = (JCGotoListener360Proxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_cameraHasGetAtTarget_CGlobeCamera_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"cameraHasGetAtTarget_CGlobeCamera_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_GotoListener360_cameraHasGetAtTarget_1CGlobeCamera_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeCamera_j)
				{
					EarthView::World::Spatial3D::CGlobeCamera *globeCamera = (EarthView::World::Spatial3D::CGlobeCamera*) globeCamera_j;
					EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360 *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360::cameraHasGetAtTarget(globeCamera);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_GotoListener360_create_1CPanoramaTile(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tile_j)
				{
					EarthView::World::Spatial3D::Atlas::CPanoramaTile *tile = (EarthView::World::Spatial3D::Atlas::CPanoramaTile*) tile_j;
					EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360 *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360*) pObjXXXX;
					pObjectX->create(tile);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_GotoListener360_register_1stopGoto_1CGlobeCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGotoListener360Proxy *pObjectX = (JCGotoListener360Proxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_stopGoto_CGlobeCamera_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"stopGoto_CGlobeCamera_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
