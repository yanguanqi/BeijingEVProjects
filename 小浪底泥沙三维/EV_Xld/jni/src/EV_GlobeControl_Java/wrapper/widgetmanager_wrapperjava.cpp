/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/widgetmanager.h"
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetList_push_1back_1CWidget(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial3D::Controls::CWidget *&t = *(EarthView::World::Spatial3D::Controls::CWidget**) t_j;
					EarthView::World::Spatial3D::Controls::CWidgetList *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetList*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CWidgetList *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetList*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_WidgetList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CWidgetList *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetList*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CWidget*& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_WidgetList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CWidgetList *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetList*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CWidget*& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetList_insert_1ev_1uint32_1CWidget(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::Controls::CWidget *&t = *(EarthView::World::Spatial3D::Controls::CWidget**) t_j;
					EarthView::World::Spatial3D::Controls::CWidgetList *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetList*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial3D::Controls::CWidgetList *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetList*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_WidgetList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CWidgetList *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetList*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_WidgetList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial3D::Controls::CWidgetList& pObjectX = *(EarthView::World::Spatial3D::Controls::CWidgetList*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Controls::CWidget*& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_WidgetList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Controls::CWidgetList *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetList*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CWidget*& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_WidgetList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CWidgetList *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetList*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::Controls::CWidgetList *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetList*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial3D::Controls::CWidgetList *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetList*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CWidgetList *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetList*) pObjXXXX;
					pObjectX->clear();
				}
				class JCWidgetManagerProxy : public EarthView::World::Spatial3D::Controls::CWidgetManager
				{
				 private:
					EarthView::World::Core::ev_string m_handleMouseDownEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleMouseMoveEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleMouseUpEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handeMouseDbClickEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleKeyDownEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleKeyUpEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleUserEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleFrameEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleEvent_CGUIEvent_callback;
				public:
					JCWidgetManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CWidgetManager(pList)
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
					void register_handleMouseDownEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleMouseDownEvent_CGUIEvent_callback = __method;
					}
					void register_handleMouseMoveEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleMouseMoveEvent_CGUIEvent_callback = __method;
					}
					void register_handleMouseUpEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleMouseUpEvent_CGUIEvent_callback = __method;
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
					void register_handleFrameEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleFrameEvent_CGUIEvent_callback = __method;
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
							return this->CWidgetManager::handleEvent(guiEvent);
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
							return this->CWidgetManager::handleMouseDownEvent(guiEvent);
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
							return this->CWidgetManager::handleMouseMoveEvent(guiEvent);
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
							return this->CWidgetManager::handleMouseUpEvent(guiEvent);
						}
					}
					virtual ev_bool handeMouseDbClickEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
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
							jlong guiEvent_j = (jlong) guiEvent;
							jmethodID __method = __gr->getMethod("handeMouseDbClickEvent_CGUIEvent_callback");
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
							return this->CWidgetManager::handeMouseDbClickEvent(guiEvent);
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
							return this->CWidgetManager::handleKeyDownEvent(guiEvent);
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
							return this->CWidgetManager::handleKeyUpEvent(guiEvent);
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
							return this->CWidgetManager::handleUserEvent(guiEvent);
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
							return this->CWidgetManager::handleFrameEvent(guiEvent);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCWidgetManagerProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_setSceneManager_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_sceneManager_j)
				{
					EarthView::World::Graphic::CSceneManager *ref_sceneManager = (EarthView::World::Graphic::CSceneManager*) ref_sceneManager_j;
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					pObjectX->setSceneManager(ref_sceneManager);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_show_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					pObjectX->show();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_hide_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					pObjectX->hide();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_sort_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					pObjectX->sort();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_addWidget_1CWidget(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_widget_j)
				{
					EarthView::World::Spatial3D::Controls::CWidget *ref_widget = (EarthView::World::Spatial3D::Controls::CWidget*) ref_widget_j;
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					pObjectX->addWidget(ref_widget);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_removeWidget_1CWidget(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong widget_j)
				{
					EarthView::World::Spatial3D::Controls::CWidget *widget = (EarthView::World::Spatial3D::Controls::CWidget*) widget_j;
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					pObjectX->removeWidget(widget);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_removeWidget_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring widgetName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* widgetName_ch = (const ev_char*)__env->GetStringUTFChars(widgetName_j,JNI_FALSE);
					const EVString widgetName = widgetName_ch;
					__env->ReleaseStringUTFChars(widgetName_j, (const char *)widgetName_ch);
					#else
					const ev_wchar* widgetName_ch = (const ev_wchar*)__env->GetStringChars(widgetName_j,JNI_FALSE);
					const EVString widgetName = widgetName_ch;
					__env->ReleaseStringChars(widgetName_j, (const jchar *)widgetName_ch);
					#endif
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					pObjectX->removeWidget(widgetName);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_getWidget_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring widgetName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* widgetName_ch = (const ev_char*)__env->GetStringUTFChars(widgetName_j,JNI_FALSE);
					const EVString widgetName = widgetName_ch;
					__env->ReleaseStringUTFChars(widgetName_j, (const char *)widgetName_ch);
					#else
					const ev_wchar* widgetName_ch = (const ev_wchar*)__env->GetStringChars(widgetName_j,JNI_FALSE);
					const EVString widgetName = widgetName_ch;
					__env->ReleaseStringChars(widgetName_j, (const jchar *)widgetName_ch);
					#endif
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CWidget* __values1 = pObjectX->getWidget(widgetName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					EVString __values1 = pObjectX->getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_handleEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCWidgetManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CWidgetManager::handleEvent(guiEvent);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_register_1handleEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCWidgetManagerProxy *pObjectX = (JCWidgetManagerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_handleEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CWidgetManager::handleEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_handleMouseDownEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCWidgetManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CWidgetManager::handleMouseDownEvent(guiEvent);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_register_1handleMouseDownEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCWidgetManagerProxy *pObjectX = (JCWidgetManagerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_handleMouseDownEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CWidgetManager::handleMouseDownEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_handleMouseMoveEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCWidgetManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CWidgetManager::handleMouseMoveEvent(guiEvent);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_register_1handleMouseMoveEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCWidgetManagerProxy *pObjectX = (JCWidgetManagerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_handleMouseMoveEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CWidgetManager::handleMouseMoveEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_handleMouseUpEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCWidgetManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CWidgetManager::handleMouseUpEvent(guiEvent);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_register_1handleMouseUpEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCWidgetManagerProxy *pObjectX = (JCWidgetManagerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_handleMouseUpEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CWidgetManager::handleMouseUpEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_handeMouseDbClickEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCWidgetManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CWidgetManager::handeMouseDbClickEvent(guiEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handeMouseDbClickEvent(guiEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_register_1handeMouseDbClickEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCWidgetManagerProxy *pObjectX = (JCWidgetManagerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_handeMouseDbClickEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CWidgetManager::handeMouseDbClickEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_handleKeyDownEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCWidgetManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CWidgetManager::handleKeyDownEvent(guiEvent);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_register_1handleKeyDownEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCWidgetManagerProxy *pObjectX = (JCWidgetManagerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_handleKeyDownEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CWidgetManager::handleKeyDownEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_handleKeyUpEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCWidgetManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CWidgetManager::handleKeyUpEvent(guiEvent);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_register_1handleKeyUpEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCWidgetManagerProxy *pObjectX = (JCWidgetManagerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_handleKeyUpEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CWidgetManager::handleKeyUpEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_handleUserEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCWidgetManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CWidgetManager::handleUserEvent(guiEvent);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_register_1handleUserEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCWidgetManagerProxy *pObjectX = (JCWidgetManagerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_handleUserEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CWidgetManager::handleUserEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_handleFrameEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCWidgetManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CWidgetManager::handleFrameEvent(guiEvent);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_register_1handleFrameEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCWidgetManagerProxy *pObjectX = (JCWidgetManagerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_handleFrameEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CWidgetManager::handleFrameEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_OperatorAssign_1CWidgetManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager& pObjectX = *(EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CWidgetManager &rhs = *(EarthView::World::Spatial3D::Controls::CWidgetManager*) rhs_j;
					pObjectX = rhs;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_get_1mWidgetList_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mWidgetList);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_set_1mWidgetList_1CWidgetList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*)pObjXXXX;
					pObjectX->mWidgetList = *(EarthView::World::Spatial3D::Controls::CWidgetList*) __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_get_1mName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mName;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_set_1mName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mName = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_get_1mviewport_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mviewport);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_set_1mviewport_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*)pObjXXXX;
					pObjectX->mviewport = (EarthView::World::Graphic::CViewport*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_get_1mOverlayLayer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mOverlayLayer);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_WidgetManager_set_1mOverlayLayer_1COverlay(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager *pObjectX = (EarthView::World::Spatial3D::Controls::CWidgetManager*)pObjXXXX;
					pObjectX->mOverlayLayer = (EarthView::World::Graphic::COverlay*) __values1_j;
				}
			}
		}
	}
}
