/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/compassWidget.h"
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidgetVisibleEvent_get_1mvisibleMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEvent*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mvisibleMode);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidgetVisibleEvent_set_1mvisibleMode_1VisibleMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEvent*)pObjXXXX;
					pObjectX->mvisibleMode = (EarthView::World::Spatial3D::Controls::VisibleMode)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidgetVisibleEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidgetVisibleEventPtr_OperatorAssign_1CCompassWidgetVisibleEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr &r = *(EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidgetVisibleEventPtr_OperatorAssign_1CCompassWidgetVisibleEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEvent *rep = (EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidgetVisibleEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidgetVisibleEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				class JCCompassWidgetProxy : public EarthView::World::Spatial3D::Controls::CCompassWidget
				{
				 private:
					EarthView::World::Core::ev_string m_additionMouseUp_void_callback;
					EarthView::World::Core::ev_string m_handleMouseUpEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleMouseMoveEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleMouseDownEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handeMouseDbClickEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleKeyDownEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleKeyUpEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleUserEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleFrameEvent_CGUIEvent_CViewport_callback;
				public:
					JCCompassWidgetProxy(EarthView::World::Core::CNameValuePairList *pList) : CCompassWidget(pList)
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
					void register_additionMouseUp_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_additionMouseUp_void_callback = __method;
					}
					void register_handleMouseUpEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleMouseUpEvent_CGUIEvent_callback = __method;
					}
					void register_handleMouseMoveEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleMouseMoveEvent_CGUIEvent_callback = __method;
					}
					void register_handleMouseDownEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleMouseDownEvent_CGUIEvent_callback = __method;
					}
					void register_handeMouseDbClickEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handeMouseDbClickEvent_CGUIEvent_callback = __method;
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
					void register_handleFrameEvent_CGUIEvent_CViewport_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleFrameEvent_CGUIEvent_CViewport_callback = __method;
					}
					virtual void additionMouseUp()
					{
						if (this->_gRef != NULL && this->m_additionMouseUp_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("additionMouseUp_void_callback");
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
							return this->CCompassWidget::additionMouseUp();
						}
					}
					virtual ev_bool handleFrameEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* event, EarthView::World::Graphic::CViewport* viewport)
					{
						if (this->_gRef != NULL && this->m_handleFrameEvent_CGUIEvent_CViewport_callback != "" && this->isCustomExtend())
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
							jlong event_j = (jlong) event;
							jlong viewport_j = (jlong) viewport;
							jmethodID __method = __gr->getMethod("handleFrameEvent_CGUIEvent_CViewport_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , event_j, viewport_j);
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
							return this->CCompassWidget::handleFrameEvent(event, viewport);
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
							return this->CCompassWidget::handleMouseDownEvent(guiEvent);
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
							return this->CCompassWidget::handleMouseUpEvent(guiEvent);
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
							return this->CCompassWidget::handleMouseMoveEvent(guiEvent);
						}
					}
					virtual ev_bool handleUserEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* event)
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
							jlong event_j = (jlong) event;
							jmethodID __method = __gr->getMethod("handleUserEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , event_j);
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
							return this->CCompassWidget::handleUserEvent(event);
						}
					}
					virtual ev_bool handeMouseDbClickEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if (this->_gRef != NULL && this->m_handeMouseDbClickEvent_CGUIEvent_callback != "" && this->isCustomExtend())
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
							jlong event_j = (jlong) event;
							jmethodID __method = __gr->getMethod("handeMouseDbClickEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , event_j);
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
							return this->CCompassWidget::handeMouseDbClickEvent(event);
						}
					}
					virtual ev_bool handleKeyDownEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* event)
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
							jlong event_j = (jlong) event;
							jmethodID __method = __gr->getMethod("handleKeyDownEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , event_j);
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
							return this->CCompassWidget::handleKeyDownEvent(event);
						}
					}
					virtual ev_bool handleKeyUpEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* event)
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
							jlong event_j = (jlong) event;
							jmethodID __method = __gr->getMethod("handleKeyUpEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , event_j);
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
							return this->CCompassWidget::handleKeyUpEvent(event);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCCompassWidgetProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidget_setHandleEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean canHandle_j)
				{
					ev_bool canHandle = (ev_bool) canHandle_j;
					EarthView::World::Spatial3D::Controls::CCompassWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjXXXX;
					pObjectX->setHandleEnable(canHandle);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidget_additionMouseUp_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CCompassWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCompassWidgetProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::CCompassWidget::additionMouseUp();
					}
					else
					{
						pObjectX->additionMouseUp();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidget_register_1additionMouseUp_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCompassWidgetProxy *pObjectX = (JCCompassWidgetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_additionMouseUp_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"additionMouseUp_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidget_additionMouseUp_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CCompassWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::CCompassWidget::additionMouseUp();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidget_handleFrameEvent_1CGUIEvent_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong event_j, jlong viewport_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *event = (EarthView::World::Spatial::SystemUI::CGUIEvent*) event_j;
					EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
					EarthView::World::Spatial3D::Controls::CCompassWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCompassWidgetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CCompassWidget::handleFrameEvent(event, viewport);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleFrameEvent(event, viewport);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidget_register_1handleFrameEvent_1CGUIEvent_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCompassWidgetProxy *pObjectX = (JCCompassWidgetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleFrameEvent_CGUIEvent_CViewport_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleFrameEvent_CGUIEvent_CViewport_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidget_handleFrameEvent_1CGUIEvent_1CViewport_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong event_j, jlong viewport_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *event = (EarthView::World::Spatial::SystemUI::CGUIEvent*) event_j;
					EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
					EarthView::World::Spatial3D::Controls::CCompassWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CCompassWidget::handleFrameEvent(event, viewport);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidget_handleMouseDownEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CCompassWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCompassWidgetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CCompassWidget::handleMouseDownEvent(guiEvent);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidget_register_1handleMouseDownEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCompassWidgetProxy *pObjectX = (JCCompassWidgetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidget_handleMouseDownEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CCompassWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CCompassWidget::handleMouseDownEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidget_handleMouseUpEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CCompassWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCompassWidgetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CCompassWidget::handleMouseUpEvent(guiEvent);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidget_register_1handleMouseUpEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCompassWidgetProxy *pObjectX = (JCCompassWidgetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidget_handleMouseUpEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CCompassWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CCompassWidget::handleMouseUpEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidget_handleMouseMoveEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CCompassWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCompassWidgetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CCompassWidget::handleMouseMoveEvent(guiEvent);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidget_register_1handleMouseMoveEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCompassWidgetProxy *pObjectX = (JCCompassWidgetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidget_handleMouseMoveEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CCompassWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CCompassWidget::handleMouseMoveEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidget_handleUserEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong event_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *event = (EarthView::World::Spatial::SystemUI::CGUIEvent*) event_j;
					EarthView::World::Spatial3D::Controls::CCompassWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCompassWidgetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CCompassWidget::handleUserEvent(event);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleUserEvent(event);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidget_register_1handleUserEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCompassWidgetProxy *pObjectX = (JCCompassWidgetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidget_handleUserEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong event_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *event = (EarthView::World::Spatial::SystemUI::CGUIEvent*) event_j;
					EarthView::World::Spatial3D::Controls::CCompassWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CCompassWidget::handleUserEvent(event);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidget_register_1handeMouseDbClickEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCompassWidgetProxy *pObjectX = (JCCompassWidgetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handeMouseDbClickEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handeMouseDbClickEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidget_register_1handleKeyDownEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCompassWidgetProxy *pObjectX = (JCCompassWidgetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CompassWidget_register_1handleKeyUpEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCompassWidgetProxy *pObjectX = (JCCompassWidgetProxy*) pObjXXXX;
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
			}
		}
	}
}
