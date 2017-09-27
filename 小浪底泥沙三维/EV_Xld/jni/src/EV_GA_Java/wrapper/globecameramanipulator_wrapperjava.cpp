/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "ga/globecameramanipulator.h"
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
		namespace Spatial3D
		{
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
		namespace Spatial3D
		{
			namespace Controls
			{
				class JCGoToTargetListenerProxy : public EarthView::World::Spatial3D::Controls::CGoToTargetListener
				{
				 private:
					EarthView::World::Core::ev_string m_cameraHasGetAtTarget_CGlobeCamera_callback;
					EarthView::World::Core::ev_string m_stopGoto_CGlobeCamera_callback;
				public:
					JCGoToTargetListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CGoToTargetListener(pList)
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
							return this->CGoToTargetListener::cameraHasGetAtTarget(globeCamera);
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
							return this->CGoToTargetListener::stopGoto(globeCamera);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCGoToTargetListenerProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GoToTargetListener_cameraHasGetAtTarget_1CGlobeCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeCamera_j)
				{
					EarthView::World::Spatial3D::CGlobeCamera *globeCamera = (EarthView::World::Spatial3D::CGlobeCamera*) globeCamera_j;
					EarthView::World::Spatial3D::Controls::CGoToTargetListener *pObjectX = (EarthView::World::Spatial3D::Controls::CGoToTargetListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGoToTargetListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::CGoToTargetListener::cameraHasGetAtTarget(globeCamera);
					}
					else
					{
						pObjectX->cameraHasGetAtTarget(globeCamera);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GoToTargetListener_register_1cameraHasGetAtTarget_1CGlobeCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGoToTargetListenerProxy *pObjectX = (JCGoToTargetListenerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GoToTargetListener_cameraHasGetAtTarget_1CGlobeCamera_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeCamera_j)
				{
					EarthView::World::Spatial3D::CGlobeCamera *globeCamera = (EarthView::World::Spatial3D::CGlobeCamera*) globeCamera_j;
					EarthView::World::Spatial3D::Controls::CGoToTargetListener *pObjectX = (EarthView::World::Spatial3D::Controls::CGoToTargetListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::CGoToTargetListener::cameraHasGetAtTarget(globeCamera);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GoToTargetListener_stopGoto_1CGlobeCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeCamera_j)
				{
					EarthView::World::Spatial3D::CGlobeCamera *globeCamera = (EarthView::World::Spatial3D::CGlobeCamera*) globeCamera_j;
					EarthView::World::Spatial3D::Controls::CGoToTargetListener *pObjectX = (EarthView::World::Spatial3D::Controls::CGoToTargetListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGoToTargetListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::CGoToTargetListener::stopGoto(globeCamera);
					}
					else
					{
						pObjectX->stopGoto(globeCamera);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GoToTargetListener_register_1stopGoto_1CGlobeCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGoToTargetListenerProxy *pObjectX = (JCGoToTargetListenerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GoToTargetListener_stopGoto_1CGlobeCamera_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeCamera_j)
				{
					EarthView::World::Spatial3D::CGlobeCamera *globeCamera = (EarthView::World::Spatial3D::CGlobeCamera*) globeCamera_j;
					EarthView::World::Spatial3D::Controls::CGoToTargetListener *pObjectX = (EarthView::World::Spatial3D::Controls::CGoToTargetListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::CGoToTargetListener::stopGoto(globeCamera);
				}
				class JCGlobeCameraManipulatorProxy : public EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator
				{
				 private:
					EarthView::World::Core::ev_string m_handleMouseWheelEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleMouseEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleUserEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleKeyEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleFrameEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_reset_void_callback;
					EarthView::World::Core::ev_string m_computeViewportMatrix_void_callback;
					EarthView::World::Core::ev_string m_handleEvent_CGUIEvent_callback;
				public:
					JCGlobeCameraManipulatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CGlobeCameraManipulator(pList)
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
					void register_handleMouseWheelEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleMouseWheelEvent_CGUIEvent_callback = __method;
					}
					void register_handleMouseEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleMouseEvent_CGUIEvent_callback = __method;
					}
					void register_handleUserEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleUserEvent_CGUIEvent_callback = __method;
					}
					void register_handleKeyEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleKeyEvent_CGUIEvent_callback = __method;
					}
					void register_handleFrameEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleFrameEvent_CGUIEvent_callback = __method;
					}
					void register_reset_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_reset_void_callback = __method;
					}
					void register_computeViewportMatrix_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_computeViewportMatrix_void_callback = __method;
					}
					void register_handleEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleEvent_CGUIEvent_callback = __method;
					}
					virtual ev_bool handleMouseEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent)
					{
						if (this->_gRef != NULL && this->m_handleMouseEvent_CGUIEvent_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("handleMouseEvent_CGUIEvent_callback");
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
							return this->CGlobeCameraManipulator::handleMouseEvent(mouseEvent);
						}
					}
					virtual ev_bool handleFrameEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* frameEvent)
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
							jlong frameEvent_j = (jlong) frameEvent;
							jmethodID __method = __gr->getMethod("handleFrameEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , frameEvent_j);
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
							return this->CGlobeCameraManipulator::handleFrameEvent(frameEvent);
						}
					}
					virtual ev_bool handleKeyEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent)
					{
						if (this->_gRef != NULL && this->m_handleKeyEvent_CGUIEvent_callback != "" && this->isCustomExtend())
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
							jlong keyEvent_j = (jlong) keyEvent;
							jmethodID __method = __gr->getMethod("handleKeyEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , keyEvent_j);
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
							return this->CGlobeCameraManipulator::handleKeyEvent(keyEvent);
						}
					}
					virtual ev_bool handleMouseWheelEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent)
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
							jlong mouseEvent_j = (jlong) mouseEvent;
							jmethodID __method = __gr->getMethod("handleMouseWheelEvent_CGUIEvent_callback");
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
							return this->CGlobeCameraManipulator::handleMouseWheelEvent(mouseEvent);
						}
					}
					virtual ev_bool handleUserEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* useEvent)
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
							jlong useEvent_j = (jlong) useEvent;
							jmethodID __method = __gr->getMethod("handleUserEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , useEvent_j);
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
							return this->CGlobeCameraManipulator::handleUserEvent(useEvent);
						}
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
							return this->CGlobeCameraManipulator::handleEvent(guiEvent);
						}
					}
					virtual void reset()
					{
						if (this->_gRef != NULL && this->m_reset_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("reset_void_callback");
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
							return this->CGlobeCameraManipulator::reset();
						}
					}
					virtual EarthView::World::Spatial::Math::CMatrix4 computeViewportMatrix()
					{
						if (this->_gRef != NULL && this->m_computeViewportMatrix_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("computeViewportMatrix_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Math::CMatrix4 __values1 = *(EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CGlobeCameraManipulator::computeViewportMatrix();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCGlobeCameraManipulatorProxy);
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_00024IntersectModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CGlobeCameraManipulator::RAY_INTERSECT,
						CGlobeCameraManipulator::CIRCLE_INTERSECT
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_screenToScene_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat x_j, jfloat y_j)
				{
					ev_real32 x = (ev_real32) x_j;
					ev_real32 y = (ev_real32) y_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					EarthView::World::Spatial::Math::CRay __values1 = pObjectX->screenToScene(x, y);
					EarthView::World::Spatial::Math::CRay *returnvalues = new EarthView::World::Spatial::Math::CRay(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_createOverlay_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					pObjectX->createOverlay();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_setIntersectModel_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean intersectModel_j)
				{
					ev_bool intersectModel = (ev_bool) intersectModel_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					pObjectX->setIntersectModel(intersectModel);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_getIntersectModel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->getIntersectModel();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_setIntersectOBQ_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean intersectOBQ_j)
				{
					ev_bool intersectOBQ = (ev_bool) intersectOBQ_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					pObjectX->setIntersectOBQ(intersectOBQ);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_getIntersectOBQ_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->getIntersectOBQ();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_setIntersectMode_1IntersectMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint intersectMode_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator::IntersectMode intersectMode = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator::IntersectMode) intersectMode_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					pObjectX->setIntersectMode(intersectMode);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_getIntersectMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator::IntersectMode __values1 = pObjectX->getIntersectMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_intersect_1ev_1real32_1ev_1real32_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat x_j, jfloat y_j, jlong interectPoint_j)
				{
					ev_real32 x = (ev_real32) x_j;
					ev_real32 y = (ev_real32) y_j;
					EarthView::World::Spatial::Math::CVector3 &interectPoint = *(EarthView::World::Spatial::Math::CVector3*) interectPoint_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->intersect(x, y, interectPoint);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_intersect_1ev_1real32_1ev_1real32_1CVector3_1ev_1bool_1ev_1bool_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat x_j, jfloat y_j, jlong interectPoint_j, jboolean intersecModel_j, jboolean intersectSea_j, jboolean positiveSide_j, jboolean negativeSide_j)
				{
					ev_real32 x = (ev_real32) x_j;
					ev_real32 y = (ev_real32) y_j;
					EarthView::World::Spatial::Math::CVector3 &interectPoint = *(EarthView::World::Spatial::Math::CVector3*) interectPoint_j;
					ev_bool intersecModel = (ev_bool) intersecModel_j;
					ev_bool intersectSea = (ev_bool) intersectSea_j;
					ev_bool positiveSide = (ev_bool) positiveSide_j;
					ev_bool negativeSide = (ev_bool) negativeSide_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->intersect(x, y, interectPoint, intersecModel, intersectSea, positiveSide, negativeSide);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_intersect_1ev_1real32_1ev_1real32_1CVector3_1ev_1bool_1ev_1bool_1ev_1bool_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat x_j, jfloat y_j, jlong interectPoint_j, jboolean intersecModel_j, jboolean intersectSea_j, jboolean positiveSide_j, jboolean negativeSide_j, jlong modelIntersected_j)
				{
					ev_real32 x = (ev_real32) x_j;
					ev_real32 y = (ev_real32) y_j;
					EarthView::World::Spatial::Math::CVector3 &interectPoint = *(EarthView::World::Spatial::Math::CVector3*) interectPoint_j;
					ev_bool intersecModel = (ev_bool) intersecModel_j;
					ev_bool intersectSea = (ev_bool) intersectSea_j;
					ev_bool positiveSide = (ev_bool) positiveSide_j;
					ev_bool negativeSide = (ev_bool) negativeSide_j;
					ev_bool &modelIntersected = *(ev_bool*) modelIntersected_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->intersect(x, y, interectPoint, intersecModel, intersectSea, positiveSide, negativeSide, modelIntersected);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_setCameraTiltRange_1CDegree_1CDegree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong min_j, jlong max_j)
				{
					const EarthView::World::Spatial::Math::CDegree &min = *(EarthView::World::Spatial::Math::CDegree*) min_j;
					const EarthView::World::Spatial::Math::CDegree &max = *(EarthView::World::Spatial::Math::CDegree*) max_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					pObjectX->setCameraTiltRange(min, max);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_computeAltitudeDelta_1CVector3_1CGeoSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong v_j, jlong manager_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &v = *(EarthView::World::Spatial::Math::CVector3*) v_j;
					EarthView::World::Spatial3D::CGeoSceneManager *manager = (EarthView::World::Spatial3D::CGeoSceneManager*) manager_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					ev_real64 __values1 = pObjectX->computeAltitudeDelta(v, manager);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_needResetCamera_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong m_j)
				{
					const EarthView::World::Spatial::Math::CMatrix4 &m = *(EarthView::World::Spatial::Math::CMatrix4*) m_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->needResetCamera(m);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_needResetCamera_1CMatrix4_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong m_j, jlong distance_j)
				{
					const EarthView::World::Spatial::Math::CMatrix4 &m = *(EarthView::World::Spatial::Math::CMatrix4*) m_j;
					ev_real64 &distance = *(ev_real64*) distance_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->needResetCamera(m, distance);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_computeRotationRatio_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble cameraAltitude_j)
				{
					ev_real64 cameraAltitude = (ev_real64) cameraAltitude_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					ev_real64 __values1 = pObjectX->computeRotationRatio(cameraAltitude);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_handleMouseEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeCameraManipulatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator::handleMouseEvent(mouseEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleMouseEvent(mouseEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_register_1handleMouseEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeCameraManipulatorProxy *pObjectX = (JCGlobeCameraManipulatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleMouseEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleMouseEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_handleMouseEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator::handleMouseEvent(mouseEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_handleFrameEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong frameEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *frameEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) frameEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeCameraManipulatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator::handleFrameEvent(frameEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleFrameEvent(frameEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_register_1handleFrameEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeCameraManipulatorProxy *pObjectX = (JCGlobeCameraManipulatorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_handleFrameEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong frameEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *frameEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) frameEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator::handleFrameEvent(frameEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_handleKeyEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong keyEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *keyEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) keyEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeCameraManipulatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator::handleKeyEvent(keyEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleKeyEvent(keyEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_register_1handleKeyEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeCameraManipulatorProxy *pObjectX = (JCGlobeCameraManipulatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleKeyEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleKeyEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_handleKeyEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong keyEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *keyEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) keyEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator::handleKeyEvent(keyEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_handleMouseWheelEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeCameraManipulatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator::handleMouseWheelEvent(mouseEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleMouseWheelEvent(mouseEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_register_1handleMouseWheelEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeCameraManipulatorProxy *pObjectX = (JCGlobeCameraManipulatorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_handleMouseWheelEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator::handleMouseWheelEvent(mouseEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_handleUserEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong useEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *useEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) useEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeCameraManipulatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator::handleUserEvent(useEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleUserEvent(useEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_register_1handleUserEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeCameraManipulatorProxy *pObjectX = (JCGlobeCameraManipulatorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_handleUserEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong useEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *useEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) useEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator::handleUserEvent(useEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_rotationAtCameraRight_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angleRadian_j)
				{
					const EarthView::World::Spatial::Math::CRadian &angleRadian = *(EarthView::World::Spatial::Math::CRadian*) angleRadian_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					pObjectX->rotationAtCameraRight(angleRadian);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_rotationAtTargetRight_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angleRadian_j)
				{
					const EarthView::World::Spatial::Math::CRadian &angleRadian = *(EarthView::World::Spatial::Math::CRadian*) angleRadian_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					pObjectX->rotationAtTargetRight(angleRadian);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_rightButtonMoveImpl_1CGUIEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lastEvent_j, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *lastEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) lastEvent_j;
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->rightButtonMoveImpl(lastEvent, mouseEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_leftButtonMoveImpl_1CGUIEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lastEvent_j, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *lastEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) lastEvent_j;
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->leftButtonMoveImpl(lastEvent, mouseEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_calculateMoveable_1CGUIEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong firstEvent_j, jlong secondEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *firstEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) firstEvent_j;
					EarthView::World::Spatial::SystemUI::CGUIEvent *secondEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) secondEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->calculateMoveable(firstEvent, secondEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_calculateZoomFactor_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat mouseWheelDelta_j)
				{
					ev_real32 mouseWheelDelta = (ev_real32) mouseWheelDelta_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					ev_real64 __values1 = pObjectX->calculateZoomFactor(mouseWheelDelta);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_computeRoll_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong currentVector_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &currentVector = *(EarthView::World::Spatial::Math::CVector3*) currentVector_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					ev_real64 __values1 = pObjectX->computeRoll(currentVector);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_getGlobeCamera_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					EarthView::World::Spatial3D::CGlobeCamera* __values1 = pObjectX->getGlobeCamera();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_rotationAndZoomCamera_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble degree_j, jdouble zoomRatio_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					ev_real64 degree = (ev_real64) degree_j;
					ev_real64 zoomRatio = (ev_real64) zoomRatio_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					pObjectX->rotationAndZoomCamera(x, y, degree, zoomRatio);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_tiltCamera_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble degree_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					ev_real64 degree = (ev_real64) degree_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					pObjectX->tiltCamera(x, y, degree);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_enterUnderGroundMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					pObjectX->enterUnderGroundMode();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_exitUnderGroundMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					pObjectX->exitUnderGroundMode();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_resetCamAltitude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					pObjectX->resetCamAltitude();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_fadeInOut_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j)
				{
					ev_real64 time = (ev_real64) time_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					pObjectX->fadeInOut(time);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_addGotoListener_1CGoToTargetListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
				{
					EarthView::World::Spatial3D::Controls::CGoToTargetListener *ref_listener = (EarthView::World::Spatial3D::Controls::CGoToTargetListener*) ref_listener_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					pObjectX->addGotoListener(ref_listener);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_removeGotoListener_1CGoToTargetListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
				{
					EarthView::World::Spatial3D::Controls::CGoToTargetListener *listener = (EarthView::World::Spatial3D::Controls::CGoToTargetListener*) listener_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					pObjectX->removeGotoListener(listener);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_stopInertiaPan_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					pObjectX->stopInertiaPan();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_setInertialPanEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					pObjectX->setInertialPanEnabled(enable);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_setMoveToEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					pObjectX->setMoveToEnable(enable);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_getMoveToEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->getMoveToEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_setMouseWheelRatio_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble mouseWheelRatio_j)
				{
					ev_real64 mouseWheelRatio = (ev_real64) mouseWheelRatio_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					pObjectX->setMouseWheelRatio(mouseWheelRatio);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_getMouseWheelRatio_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getMouseWheelRatio();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_setGotoTimeRatio_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble gotoRatio_j)
				{
					ev_real64 gotoRatio = (ev_real64) gotoRatio_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					pObjectX->setGotoTimeRatio(gotoRatio);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_getGotoTimeRatio_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getGotoTimeRatio();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_calculateTiltAble_1CVector3_1CMatrix3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cameraZAxis_j, jlong rotation_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &cameraZAxis = *(EarthView::World::Spatial::Math::CVector3*) cameraZAxis_j;
					const EarthView::World::Spatial::Math::CMatrix3 &rotation = *(EarthView::World::Spatial::Math::CMatrix3*) rotation_j;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->calculateTiltAble(cameraZAxis, rotation);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_register_1reset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeCameraManipulatorProxy *pObjectX = (JCGlobeCameraManipulatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_reset_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"reset_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_register_1computeViewportMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeCameraManipulatorProxy *pObjectX = (JCGlobeCameraManipulatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_computeViewportMatrix_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"computeViewportMatrix_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCameraManipulator_register_1handleEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeCameraManipulatorProxy *pObjectX = (JCGlobeCameraManipulatorProxy*) pObjXXXX;
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
				class JCGlobeCamUnderGroundHandlerProxy : public EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler
				{
				 private:
					EarthView::World::Core::ev_string m_handleUseEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleFrameEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleMouseDownEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleMouseMoveEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleMouseUp_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleMouseWheelEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_computeAltitudeDelta_CVector3_callback;
					EarthView::World::Core::ev_string m_handleEvent_CGUIEvent_callback;
				public:
					JCGlobeCamUnderGroundHandlerProxy(EarthView::World::Core::CNameValuePairList *pList) : CGlobeCamUnderGroundHandler(pList)
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
							return this->CGlobeCamUnderGroundHandler::handleEvent(guiEvent);
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
							return this->CGlobeCamUnderGroundHandler::computeAltitudeDelta(v);
						}
					}
					virtual ev_bool handleMouseMoveEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent)
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
							jlong mouseEvent_j = (jlong) mouseEvent;
							jmethodID __method = __gr->getMethod("handleMouseMoveEvent_CGUIEvent_callback");
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
							return this->CGlobeCamUnderGroundHandler::handleMouseMoveEvent(mouseEvent);
						}
					}
					virtual ev_bool handleMouseWheelEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent)
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
							jlong mouseEvent_j = (jlong) mouseEvent;
							jmethodID __method = __gr->getMethod("handleMouseWheelEvent_CGUIEvent_callback");
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
							return this->CGlobeCamUnderGroundHandler::handleMouseWheelEvent(mouseEvent);
						}
					}
					virtual ev_bool handleMouseDownEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent)
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
							jlong mouseEvent_j = (jlong) mouseEvent;
							jmethodID __method = __gr->getMethod("handleMouseDownEvent_CGUIEvent_callback");
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
							return this->CGlobeCamUnderGroundHandler::handleMouseDownEvent(mouseEvent);
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
							return this->CGlobeCamUnderGroundHandler::handleMouseUp(mouseEvent);
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
							return this->CGlobeCamUnderGroundHandler::handleUseEvent(userEvent);
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
							return this->CGlobeCamUnderGroundHandler::handleFrameEvent(guiEvent);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCGlobeCamUnderGroundHandlerProxy);
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCamUnderGroundHandler_handleEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeCamUnderGroundHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler::handleEvent(guiEvent);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCamUnderGroundHandler_register_1handleEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeCamUnderGroundHandlerProxy *pObjectX = (JCGlobeCamUnderGroundHandlerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCamUnderGroundHandler_handleEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler::handleEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCamUnderGroundHandler_computeAltitudeDelta_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong v_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &v = *(EarthView::World::Spatial::Math::CVector3*) v_j;
					EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeCamUnderGroundHandlerProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler::computeAltitudeDelta(v);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->computeAltitudeDelta(v);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCamUnderGroundHandler_register_1computeAltitudeDelta_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeCamUnderGroundHandlerProxy *pObjectX = (JCGlobeCamUnderGroundHandlerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCamUnderGroundHandler_computeAltitudeDelta_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong v_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &v = *(EarthView::World::Spatial::Math::CVector3*) v_j;
					EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler::computeAltitudeDelta(v);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCamUnderGroundHandler_handleMouseMoveEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeCamUnderGroundHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler::handleMouseMoveEvent(mouseEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleMouseMoveEvent(mouseEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCamUnderGroundHandler_register_1handleMouseMoveEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeCamUnderGroundHandlerProxy *pObjectX = (JCGlobeCamUnderGroundHandlerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCamUnderGroundHandler_handleMouseMoveEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler::handleMouseMoveEvent(mouseEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCamUnderGroundHandler_handleMouseWheelEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeCamUnderGroundHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler::handleMouseWheelEvent(mouseEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleMouseWheelEvent(mouseEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCamUnderGroundHandler_register_1handleMouseWheelEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeCamUnderGroundHandlerProxy *pObjectX = (JCGlobeCamUnderGroundHandlerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCamUnderGroundHandler_handleMouseWheelEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler::handleMouseWheelEvent(mouseEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCamUnderGroundHandler_handleMouseDownEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeCamUnderGroundHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler::handleMouseDownEvent(mouseEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleMouseDownEvent(mouseEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCamUnderGroundHandler_register_1handleMouseDownEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeCamUnderGroundHandlerProxy *pObjectX = (JCGlobeCamUnderGroundHandlerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCamUnderGroundHandler_handleMouseDownEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler::handleMouseDownEvent(mouseEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCamUnderGroundHandler_handleMouseUp_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeCamUnderGroundHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler::handleMouseUp(mouseEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleMouseUp(mouseEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCamUnderGroundHandler_register_1handleMouseUp_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeCamUnderGroundHandlerProxy *pObjectX = (JCGlobeCamUnderGroundHandlerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCamUnderGroundHandler_handleMouseUp_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler::handleMouseUp(mouseEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCamUnderGroundHandler_register_1handleUseEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeCamUnderGroundHandlerProxy *pObjectX = (JCGlobeCamUnderGroundHandlerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeCamUnderGroundHandler_register_1handleFrameEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeCamUnderGroundHandlerProxy *pObjectX = (JCGlobeCamUnderGroundHandlerProxy*) pObjXXXX;
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
			}
		}
	}
}
