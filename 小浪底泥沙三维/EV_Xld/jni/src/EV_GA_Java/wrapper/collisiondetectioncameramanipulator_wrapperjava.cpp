/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "ga/collisiondetectioncameramanipulator.h"
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
		}
		namespace Spatial3D
		{
			namespace Controls
			{
				class JCCollisionDetectionCameraManipulatorProxy : public EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator
				{
				 private:
					EarthView::World::Core::ev_string m_handleMouseEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleUserEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleKeyEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleFrameEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_reset_void_callback;
					EarthView::World::Core::ev_string m_computeViewportMatrix_void_callback;
					EarthView::World::Core::ev_string m_handleEvent_CGUIEvent_callback;
				public:
					JCCollisionDetectionCameraManipulatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CCollisionDetectionCameraManipulator(pList)
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
							return this->CCollisionDetectionCameraManipulator::handleMouseEvent(mouseEvent);
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
							return this->CCollisionDetectionCameraManipulator::handleFrameEvent(frameEvent);
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
							return this->CCollisionDetectionCameraManipulator::handleKeyEvent(keyEvent);
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
							return this->CCollisionDetectionCameraManipulator::handleEvent(guiEvent);
						}
					}
					virtual ev_bool handleUserEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent)
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
							jlong userEvent_j = (jlong) userEvent;
							jmethodID __method = __gr->getMethod("handleUserEvent_CGUIEvent_callback");
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
							return this->CCollisionDetectionCameraManipulator::handleUserEvent(userEvent);
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
							return this->CCollisionDetectionCameraManipulator::reset();
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
							return this->CCollisionDetectionCameraManipulator::computeViewportMatrix();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCCollisionDetectionCameraManipulatorProxy);
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CollisionDetectionCameraManipulator_handleMouseEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCollisionDetectionCameraManipulatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator::handleMouseEvent(mouseEvent);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CollisionDetectionCameraManipulator_register_1handleMouseEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCollisionDetectionCameraManipulatorProxy *pObjectX = (JCCollisionDetectionCameraManipulatorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CollisionDetectionCameraManipulator_handleMouseEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator::handleMouseEvent(mouseEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CollisionDetectionCameraManipulator_handleMouseDownEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->handleMouseDownEvent(mouseEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CollisionDetectionCameraManipulator_handleMouseMoveEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->handleMouseMoveEvent(mouseEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CollisionDetectionCameraManipulator_handleMouseUpEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->handleMouseUpEvent(mouseEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CollisionDetectionCameraManipulator_handleFrameEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong frameEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *frameEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) frameEvent_j;
					EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCollisionDetectionCameraManipulatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator::handleFrameEvent(frameEvent);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CollisionDetectionCameraManipulator_register_1handleFrameEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCollisionDetectionCameraManipulatorProxy *pObjectX = (JCCollisionDetectionCameraManipulatorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CollisionDetectionCameraManipulator_handleFrameEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong frameEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *frameEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) frameEvent_j;
					EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator::handleFrameEvent(frameEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CollisionDetectionCameraManipulator_handleKeyEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong keyEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *keyEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) keyEvent_j;
					EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCollisionDetectionCameraManipulatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator::handleKeyEvent(keyEvent);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CollisionDetectionCameraManipulator_register_1handleKeyEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCollisionDetectionCameraManipulatorProxy *pObjectX = (JCCollisionDetectionCameraManipulatorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CollisionDetectionCameraManipulator_handleKeyEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong keyEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *keyEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) keyEvent_j;
					EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator::handleKeyEvent(keyEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CollisionDetectionCameraManipulator_handleKeyDownEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong keyEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *keyEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) keyEvent_j;
					EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->handleKeyDownEvent(keyEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CollisionDetectionCameraManipulator_handleKeyUpEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong keyEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *keyEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) keyEvent_j;
					EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->handleKeyUpEvent(keyEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_CollisionDetectionCameraManipulator_screenToScene_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat x_j, jfloat y_j)
				{
					ev_real32 x = (ev_real32) x_j;
					ev_real32 y = (ev_real32) y_j;
					EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator*) pObjXXXX;
					EarthView::World::Spatial::Math::CRay __values1 = pObjectX->screenToScene(x, y);
					EarthView::World::Spatial::Math::CRay *returnvalues = new EarthView::World::Spatial::Math::CRay(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CollisionDetectionCameraManipulator_register_1handleUserEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCollisionDetectionCameraManipulatorProxy *pObjectX = (JCCollisionDetectionCameraManipulatorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CollisionDetectionCameraManipulator_register_1reset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCollisionDetectionCameraManipulatorProxy *pObjectX = (JCCollisionDetectionCameraManipulatorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CollisionDetectionCameraManipulator_register_1computeViewportMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCollisionDetectionCameraManipulatorProxy *pObjectX = (JCCollisionDetectionCameraManipulatorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CollisionDetectionCameraManipulator_register_1handleEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCollisionDetectionCameraManipulatorProxy *pObjectX = (JCCollisionDetectionCameraManipulatorProxy*) pObjXXXX;
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
			}
		}
	}
}
