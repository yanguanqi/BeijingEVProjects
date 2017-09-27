/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "ga/globelockcamerahandler.h"
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
		namespace Spatial
		{
			namespace Math
			{
			}
		}
		namespace Spatial3D
		{
			namespace Controls
			{
				class JCGlobeLockCameraHandlerProxy : public EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler
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
					JCGlobeLockCameraHandlerProxy(EarthView::World::Core::CNameValuePairList *pList) : CGlobeLockCameraHandler(pList)
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
							return this->CGlobeLockCameraHandler::handleUseEvent(userEvent);
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
							return this->CGlobeLockCameraHandler::handleEvent(guiEvent);
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
							return this->CGlobeLockCameraHandler::handleFrameEvent(guiEvent);
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
							return this->CGlobeLockCameraHandler::handleMouseDownEvent(mouseEvent);
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
							return this->CGlobeLockCameraHandler::handleMouseMoveEvent(mouseEvent);
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
							return this->CGlobeLockCameraHandler::handleMouseUp(mouseEvent);
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
							return this->CGlobeLockCameraHandler::handleMouseWheelEvent(mouseEvent);
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
							return this->CGlobeLockCameraHandler::computeAltitudeDelta(v);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCGlobeLockCameraHandlerProxy);
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_00024RotationModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CGlobeLockCameraHandler::ROTATIONBYUP,
						CGlobeLockCameraHandler::ROTATIONBYLOOK
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_00024LockModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CGlobeLockCameraHandler::FirstPersonMode,
						CGlobeLockCameraHandler::ThirdPersonMode
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_handleUseEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong userEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *userEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) userEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeLockCameraHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleUseEvent(userEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleUseEvent(userEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_register_1handleUseEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeLockCameraHandlerProxy *pObjectX = (JCGlobeLockCameraHandlerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_handleUseEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong userEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *userEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) userEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleUseEvent(userEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_handleEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeLockCameraHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleEvent(guiEvent);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_register_1handleEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeLockCameraHandlerProxy *pObjectX = (JCGlobeLockCameraHandlerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_handleEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_handleFrameEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeLockCameraHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleFrameEvent(guiEvent);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_register_1handleFrameEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeLockCameraHandlerProxy *pObjectX = (JCGlobeLockCameraHandlerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_handleFrameEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleFrameEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_handleMouseDownEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeLockCameraHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleMouseDownEvent(mouseEvent);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_register_1handleMouseDownEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeLockCameraHandlerProxy *pObjectX = (JCGlobeLockCameraHandlerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_handleMouseDownEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleMouseDownEvent(mouseEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_handleMouseMoveEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeLockCameraHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleMouseMoveEvent(mouseEvent);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_register_1handleMouseMoveEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeLockCameraHandlerProxy *pObjectX = (JCGlobeLockCameraHandlerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_handleMouseMoveEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleMouseMoveEvent(mouseEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_handleMouseUp_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeLockCameraHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleMouseUp(mouseEvent);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_register_1handleMouseUp_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeLockCameraHandlerProxy *pObjectX = (JCGlobeLockCameraHandlerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_handleMouseUp_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleMouseUp(mouseEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_handleMouseWheelEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeLockCameraHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleMouseWheelEvent(mouseEvent);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_register_1handleMouseWheelEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeLockCameraHandlerProxy *pObjectX = (JCGlobeLockCameraHandlerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_handleMouseWheelEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mouseEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *mouseEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) mouseEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleMouseWheelEvent(mouseEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_calculateMoveable_1CGUIEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong firstEvent_j, jlong secondEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *firstEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) firstEvent_j;
					EarthView::World::Spatial::SystemUI::CGUIEvent *secondEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) secondEvent_j;
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->calculateMoveable(firstEvent, secondEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_computeAltitudeDelta_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong v_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &v = *(EarthView::World::Spatial::Math::CVector3*) v_j;
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeLockCameraHandlerProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::computeAltitudeDelta(v);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_register_1computeAltitudeDelta_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeLockCameraHandlerProxy *pObjectX = (JCGlobeLockCameraHandlerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_computeAltitudeDelta_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong v_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &v = *(EarthView::World::Spatial::Math::CVector3*) v_j;
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::computeAltitudeDelta(v);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_needResetCamera_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->needResetCamera();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_calculateZoomFactor_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat mouseWheelDelta_j)
				{
					ev_real32 mouseWheelDelta = (ev_real32) mouseWheelDelta_j;
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjXXXX;
					ev_real64 __values1 = pObjectX->calculateZoomFactor(mouseWheelDelta);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_reset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjXXXX;
					pObjectX->reset();
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_getRotationMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::RotationMode __values1 = pObjectX->getRotationMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_setRotationMode_1RotationMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint rotationMode_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::RotationMode rotationMode = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::RotationMode) rotationMode_j;
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjXXXX;
					pObjectX->setRotationMode(rotationMode);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_setEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enbale_j)
				{
					ev_bool enbale = (ev_bool) enbale_j;
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjXXXX;
					pObjectX->setEnable(enbale);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeLockCameraHandler_getEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->getEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
