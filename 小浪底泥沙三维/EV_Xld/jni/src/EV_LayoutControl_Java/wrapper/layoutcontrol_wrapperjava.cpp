/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "layoutcontrol/layoutcontrol.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Layout
		{
			namespace Controls
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_layout_controls_EVPageCursorHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						PC_ArrowCursor,
						PC_CrossCursor,
						PC_OpenHandCursor,
						PC_CloseHandCursor,
						PC_PointingHandCursor,
						PC_ZoomInCursor,
						PC_ZoomOutCursor,
						PC_PageZoomInCursor,
						PC_PageZoomOutCursor,
						PC_ElementSelectCursor,
						PC_MoveElementCursor,
						PC_MoveRightDownCursor,
						PC_MoveLeftDownCursor,
						PC_MoveHorizontal,
						PC_MoveVertical,
						PC_OpenHandCursorOnPage,
						PC_CloseHandCursorOnPage
					};
					jintArray array = __env->NewIntArray(17);
					__env->SetIntArrayRegion(array, 0, 17, enum_values);
					return array;
				}
				class JCLayoutControlAgentProxy : public EarthView::World::Layout::Controls::CLayoutControlAgent
				{
				 private:
					EarthView::World::Core::ev_string m_onGetLayoutCanvas_void_callback;
					EarthView::World::Core::ev_string m_onRepaint_void_callback;
					EarthView::World::Core::ev_string m_onSetCursor_ev_int32_callback;
				public:
					JCLayoutControlAgentProxy(EarthView::World::Core::CNameValuePairList *pList) : CLayoutControlAgent(pList)
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
					void register_onGetLayoutCanvas_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onGetLayoutCanvas_void_callback = __method;
					}
					void register_onRepaint_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onRepaint_void_callback = __method;
					}
					void register_onSetCursor_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onSetCursor_ev_int32_callback = __method;
					}
					virtual EarthView::World::Display::IPaintDevice* onGetLayoutCanvas() const
					{
						if (this->_gRef != NULL && this->m_onGetLayoutCanvas_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onGetLayoutCanvas_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Display::IPaintDevice *__values1 = (EarthView::World::Display::IPaintDevice*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CLayoutControlAgent::onGetLayoutCanvas();
						}
					}
					virtual void onRepaint()
					{
						if (this->_gRef != NULL && this->m_onRepaint_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onRepaint_void_callback");
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
							return this->CLayoutControlAgent::onRepaint();
						}
					}
					virtual void onSetCursor(ev_int32 value)
					{
						if (this->_gRef != NULL && this->m_onSetCursor_ev_int32_callback != "" && this->isCustomExtend())
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
							jint value_j = (jint) value;
							jmethodID __method = __gr->getMethod("onSetCursor_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
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
							return this->CLayoutControlAgent::onSetCursor(value);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCLayoutControlAgentProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_layout_controls_LayoutControlAgent_onGetLayoutCanvas_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutControlAgent *pObjectX = (EarthView::World::Layout::Controls::CLayoutControlAgent*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLayoutControlAgentProxy))
					{
						EarthView::World::Display::IPaintDevice* __values1 = pObjectX->EarthView::World::Layout::Controls::CLayoutControlAgent::onGetLayoutCanvas();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Display::IPaintDevice* __values1 = pObjectX->onGetLayoutCanvas();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControlAgent_register_1onGetLayoutCanvas_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayoutControlAgentProxy *pObjectX = (JCLayoutControlAgentProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onGetLayoutCanvas_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onGetLayoutCanvas_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_layout_controls_LayoutControlAgent_onGetLayoutCanvas_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutControlAgent *pObjectX = (EarthView::World::Layout::Controls::CLayoutControlAgent*) pObjXXXX;
					EarthView::World::Display::IPaintDevice* __values1 = pObjectX->EarthView::World::Layout::Controls::CLayoutControlAgent::onGetLayoutCanvas();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControlAgent_onRepaint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Layout::Controls::CLayoutControlAgent *pObjectX = (EarthView::World::Layout::Controls::CLayoutControlAgent*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLayoutControlAgentProxy))
					{
						pObjectX->EarthView::World::Layout::Controls::CLayoutControlAgent::onRepaint();
					}
					else
					{
						pObjectX->onRepaint();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControlAgent_register_1onRepaint_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayoutControlAgentProxy *pObjectX = (JCLayoutControlAgentProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onRepaint_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onRepaint_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControlAgent_onRepaint_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Layout::Controls::CLayoutControlAgent *pObjectX = (EarthView::World::Layout::Controls::CLayoutControlAgent*) pObjXXXX;
					pObjectX->EarthView::World::Layout::Controls::CLayoutControlAgent::onRepaint();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControlAgent_onSetCursor_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
				{
					ev_int32 value = (ev_int32) value_j;
					EarthView::World::Layout::Controls::CLayoutControlAgent *pObjectX = (EarthView::World::Layout::Controls::CLayoutControlAgent*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLayoutControlAgentProxy))
					{
						pObjectX->EarthView::World::Layout::Controls::CLayoutControlAgent::onSetCursor(value);
					}
					else
					{
						pObjectX->onSetCursor(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControlAgent_register_1onSetCursor_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayoutControlAgentProxy *pObjectX = (JCLayoutControlAgentProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onSetCursor_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onSetCursor_ev_int32_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControlAgent_onSetCursor_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
				{
					ev_int32 value = (ev_int32) value_j;
					EarthView::World::Layout::Controls::CLayoutControlAgent *pObjectX = (EarthView::World::Layout::Controls::CLayoutControlAgent*) pObjXXXX;
					pObjectX->EarthView::World::Layout::Controls::CLayoutControlAgent::onSetCursor(value);
				}
				class JCLayoutControlProxy : public EarthView::World::Layout::Controls::CLayoutControl
				{
				 private:
					EarthView::World::Core::ev_string m_addElement_IElement_callback;
					EarthView::World::Core::ev_string m_removeElement_IElement_callback;
					EarthView::World::Core::ev_string m_removeSelectedElement_void_callback;
					EarthView::World::Core::ev_string m_replaceElement_IElement_IElement_callback;
					EarthView::World::Core::ev_string m_exchangeElement_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_getTypeString_void_callback;
					EarthView::World::Core::ev_string m_notifyViewChanged_IViewArgs_callback;
					EarthView::World::Core::ev_string m_addViewListener_IViewListener_callback;
					EarthView::World::Core::ev_string m_getViewListenerCount_void_callback;
					EarthView::World::Core::ev_string m_getViewListener_ev_uint32_callback;
					EarthView::World::Core::ev_string m_existViewListener_IViewListener_callback;
					EarthView::World::Core::ev_string m_removeViewListener_ev_uint32_callback;
					EarthView::World::Core::ev_string m_removeViewListener_IViewListener_callback;
					EarthView::World::Core::ev_string m_clearViewListeners_void_callback;
				public:
					JCLayoutControlProxy(EarthView::World::Core::CNameValuePairList *pList) : CLayoutControl(pList)
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
				protected:
					C_DISABLE_COPY(JCLayoutControlProxy)
				public:
					void register_addElement_IElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addElement_IElement_callback = __method;
					}
					void register_removeElement_IElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeElement_IElement_callback = __method;
					}
					void register_removeSelectedElement_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeSelectedElement_void_callback = __method;
					}
					void register_replaceElement_IElement_IElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_replaceElement_IElement_IElement_callback = __method;
					}
					void register_exchangeElement_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_exchangeElement_ev_int32_ev_int32_callback = __method;
					}
					void register_getType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getType_void_callback = __method;
					}
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_getTypeString_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getTypeString_void_callback = __method;
					}
					void register_notifyViewChanged_IViewArgs_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_notifyViewChanged_IViewArgs_callback = __method;
					}
					void register_addViewListener_IViewListener_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addViewListener_IViewListener_callback = __method;
					}
					void register_getViewListenerCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getViewListenerCount_void_callback = __method;
					}
					void register_getViewListener_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getViewListener_ev_uint32_callback = __method;
					}
					void register_existViewListener_IViewListener_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_existViewListener_IViewListener_callback = __method;
					}
					void register_removeViewListener_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeViewListener_ev_uint32_callback = __method;
					}
					void register_removeViewListener_IViewListener_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeViewListener_IViewListener_callback = __method;
					}
					void register_clearViewListeners_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_clearViewListeners_void_callback = __method;
					}
					virtual EarthView::World::Spatial::Atlas::EVSpatialControlType getType() const
					{
						if (this->_gRef != NULL && this->m_getType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Atlas::EVSpatialControlType __values1 = (EarthView::World::Spatial::Atlas::EVSpatialControlType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CLayoutControl::getType();
						}
					}
					virtual EVString getName() const
					{
						if (this->_gRef != NULL && this->m_getName_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getName_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CLayoutControl::getName();
						}
					}
					virtual EVString getTypeString() const
					{
						if (this->_gRef != NULL && this->m_getTypeString_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getTypeString_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CLayoutControl::getTypeString();
						}
					}
					virtual void notifyViewChanged(EarthView::World::Spatial::IViewArgs* args)
					{
						if (this->_gRef != NULL && this->m_notifyViewChanged_IViewArgs_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("notifyViewChanged_IViewArgs_callback");
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
							return this->CLayoutControl::notifyViewChanged(args);
						}
					}
					virtual void addElement(EarthView::World::Spatial::Carto::IElement* ref_element)
					{
						if (this->_gRef != NULL && this->m_addElement_IElement_callback != "" && this->isCustomExtend())
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
							jlong ref_element_j = (jlong) ref_element;
							jmethodID __method = __gr->getMethod("addElement_IElement_callback");
							__env->CallVoidMethod(__obj, __method , ref_element_j);
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
							return this->CLayoutControl::addElement(ref_element);
						}
					}
					virtual void removeElement(EarthView::World::Spatial::Carto::IElement* element)
					{
						if (this->_gRef != NULL && this->m_removeElement_IElement_callback != "" && this->isCustomExtend())
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
							jlong element_j = (jlong) element;
							jmethodID __method = __gr->getMethod("removeElement_IElement_callback");
							__env->CallVoidMethod(__obj, __method , element_j);
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
							return this->CLayoutControl::removeElement(element);
						}
					}
					virtual void removeSelectedElement()
					{
						if (this->_gRef != NULL && this->m_removeSelectedElement_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("removeSelectedElement_void_callback");
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
							return this->CLayoutControl::removeSelectedElement();
						}
					}
					virtual ev_bool replaceElement(EarthView::World::Spatial::Carto::IElement* pOldElement, EarthView::World::Spatial::Carto::IElement* pNewElement)
					{
						if (this->_gRef != NULL && this->m_replaceElement_IElement_IElement_callback != "" && this->isCustomExtend())
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
							jlong pOldElement_j = (jlong) pOldElement;
							jlong pNewElement_j = (jlong) pNewElement;
							jmethodID __method = __gr->getMethod("replaceElement_IElement_IElement_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pOldElement_j, pNewElement_j);
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
							return this->CLayoutControl::replaceElement(pOldElement, pNewElement);
						}
					}
					virtual ev_bool exchangeElement(ev_int32 srcIndex, ev_int32 destIndex)
					{
						if (this->_gRef != NULL && this->m_exchangeElement_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
							jint srcIndex_j = (jint) srcIndex;
							jint destIndex_j = (jint) destIndex;
							jmethodID __method = __gr->getMethod("exchangeElement_ev_int32_ev_int32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , srcIndex_j, destIndex_j);
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
							return this->CLayoutControl::exchangeElement(srcIndex, destIndex);
						}
					}
					virtual ev_bool addViewListener(EarthView::World::Spatial::IViewListener* ref_externalListener)
					{
						if (this->_gRef != NULL && this->m_addViewListener_IViewListener_callback != "" && this->isCustomExtend())
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
							jlong ref_externalListener_j = (jlong) ref_externalListener;
							jmethodID __method = __gr->getMethod("addViewListener_IViewListener_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , ref_externalListener_j);
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
							return this->CLayoutControl::addViewListener(ref_externalListener);
						}
					}
					virtual ev_uint32 getViewListenerCount() const
					{
						if (this->_gRef != NULL && this->m_getViewListenerCount_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getViewListenerCount_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_uint32 __values1 = (ev_uint32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CLayoutControl::getViewListenerCount();
						}
					}
					virtual EarthView::World::Spatial::IViewListener* getViewListener(ev_uint32 index) const
					{
						if (this->_gRef != NULL && this->m_getViewListener_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong index_j = (jlong) index;
							jmethodID __method = __gr->getMethod("getViewListener_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::IViewListener *__values1 = (EarthView::World::Spatial::IViewListener*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CLayoutControl::getViewListener(index);
						}
					}
					virtual ev_bool existViewListener(EarthView::World::Spatial::IViewListener* externalListener) const
					{
						if (this->_gRef != NULL && this->m_existViewListener_IViewListener_callback != "" && this->isCustomExtend())
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
							jlong externalListener_j = (jlong) externalListener;
							jmethodID __method = __gr->getMethod("existViewListener_IViewListener_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , externalListener_j);
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
							return this->CLayoutControl::existViewListener(externalListener);
						}
					}
					virtual ev_bool removeViewListener(ev_uint32 index)
					{
						if (this->_gRef != NULL && this->m_removeViewListener_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong index_j = (jlong) index;
							jmethodID __method = __gr->getMethod("removeViewListener_ev_uint32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , index_j);
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
							return this->CLayoutControl::removeViewListener(index);
						}
					}
					virtual ev_bool removeViewListener(EarthView::World::Spatial::IViewListener* externalListener)
					{
						if (this->_gRef != NULL && this->m_removeViewListener_IViewListener_callback != "" && this->isCustomExtend())
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
							jlong externalListener_j = (jlong) externalListener;
							jmethodID __method = __gr->getMethod("removeViewListener_IViewListener_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , externalListener_j);
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
							return this->CLayoutControl::removeViewListener(externalListener);
						}
					}
					virtual void clearViewListeners()
					{
						if (this->_gRef != NULL && this->m_clearViewListeners_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("clearViewListeners_void_callback");
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
							return this->CLayoutControl::clearViewListeners();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCLayoutControlProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_layout_controls_LayoutControl_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLayoutControlProxy))
					{
						EarthView::World::Spatial::Atlas::EVSpatialControlType __values1 = pObjectX->EarthView::World::Layout::Controls::CLayoutControl::getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVSpatialControlType __values1 = pObjectX->getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayoutControlProxy *pObjectX = (JCLayoutControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_layout_controls_LayoutControl_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					EarthView::World::Spatial::Atlas::EVSpatialControlType __values1 = pObjectX->EarthView::World::Layout::Controls::CLayoutControl::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_layout_controls_LayoutControl_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLayoutControlProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Layout::Controls::CLayoutControl::getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayoutControlProxy *pObjectX = (JCLayoutControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getName_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getName_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_layout_controls_LayoutControl_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Layout::Controls::CLayoutControl::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_layout_controls_LayoutControl_getTypeString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLayoutControlProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Layout::Controls::CLayoutControl::getTypeString();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getTypeString();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_register_1getTypeString_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayoutControlProxy *pObjectX = (JCLayoutControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getTypeString_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getTypeString_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_layout_controls_LayoutControl_getTypeString_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Layout::Controls::CLayoutControl::getTypeString();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_layout_controls_LayoutControl_getPage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					EarthView::World::Spatial::Carto::IPage* __values1 = pObjectX->getPage();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_layout_controls_LayoutControl_getMap_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->getMap();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_setMap_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pMap_j)
				{
					EarthView::World::Spatial::Atlas::IMap *ref_pMap = (EarthView::World::Spatial::Atlas::IMap*) ref_pMap_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->setMap(ref_pMap);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_layout_controls_LayoutControl_getPageLayout_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					EarthView::World::Spatial::Carto::IPageLayout* __values1 = pObjectX->getPageLayout();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_layout_controls_LayoutControl_getBackground_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->getBackground();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_setBackground_1IColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
				{
					EarthView::World::Spatial::Display::IColor *color = (EarthView::World::Spatial::Display::IColor*) color_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->setBackground(color);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_layout_controls_LayoutControl_getPageSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getPageSize();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_setPageSize_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong width_j, jlong height_j)
				{
					ev_real64 &width = *(ev_real64*) width_j;
					ev_real64 &height = *(ev_real64*) height_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->setPageSize(width, height);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_layout_controls_LayoutControl_getPageUnits_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					EarthView::World::Spatial::Carto::EVPageUnits __values1 = pObjectX->getPageUnits();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_setPageUnits_1EVPageUnits(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint pageUnits_j)
				{
					EarthView::World::Spatial::Carto::EVPageUnits pageUnits = (EarthView::World::Spatial::Carto::EVPageUnits) pageUnits_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->setPageUnits(pageUnits);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_layout_controls_LayoutControl_getMapControl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CMapControl* __values1 = pObjectX->getMapControl();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_setMapControl_1CMapControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pMapControl_j)
				{
					EarthView::World::Spatial2D::Controls::CMapControl *ref_pMapControl = (EarthView::World::Spatial2D::Controls::CMapControl*) ref_pMapControl_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->setMapControl(ref_pMapControl);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_fullExtent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->fullExtent();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_updateLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->updateLayer(layer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_setCurrentTool_1ITool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pTool_j)
				{
					EarthView::World::Spatial::SystemUI::ITool *ref_pTool = (EarthView::World::Spatial::SystemUI::ITool*) ref_pTool_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->setCurrentTool(ref_pTool);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_layout_controls_LayoutControl_getCurrentTool_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::ITool* __values1 = pObjectX->getCurrentTool();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_layout_controls_LayoutControl_getPreviousTool_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::ITool* __values1 = pObjectX->getPreviousTool();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_setScaleAt_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble pX_j, jdouble pY_j, jdouble scale_j)
				{
					ev_real64 pX = (ev_real64) pX_j;
					ev_real64 pY = (ev_real64) pY_j;
					ev_real64 scale = (ev_real64) scale_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->setScaleAt(pX, pY, scale);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_layout_controls_LayoutControl_getCurrentScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getCurrentScale();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_setCurrentScale_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dValue_j)
				{
					ev_real64 dValue = (ev_real64) dValue_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->setCurrentScale(dValue);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_getCenter_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cx_j, jlong cy_j)
				{
					ev_real64 *cx = (ev_real64*) cx_j;
					ev_real64 *cy = (ev_real64*) cy_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->getCenter(cx, cy);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_setCenter_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble cx_j, jdouble cy_j)
				{
					ev_real64 cx = (ev_real64) cx_j;
					ev_real64 cy = (ev_real64) cy_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->setCenter(cx, cy);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_notifyViewChanged_1IViewArgs(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong args_j)
				{
					EarthView::World::Spatial::IViewArgs *args = (EarthView::World::Spatial::IViewArgs*) args_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLayoutControlProxy))
					{
						pObjectX->EarthView::World::Layout::Controls::CLayoutControl::notifyViewChanged(args);
					}
					else
					{
						pObjectX->notifyViewChanged(args);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_register_1notifyViewChanged_1IViewArgs(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayoutControlProxy *pObjectX = (JCLayoutControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_notifyViewChanged_IViewArgs_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"notifyViewChanged_IViewArgs_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_notifyViewChanged_1IViewArgs_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong args_j)
				{
					EarthView::World::Spatial::IViewArgs *args = (EarthView::World::Spatial::IViewArgs*) args_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->EarthView::World::Layout::Controls::CLayoutControl::notifyViewChanged(args);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_previousView_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->previousView();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_nextView_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->nextView();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_refresh_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->refresh();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_layout_controls_LayoutControl_isDrawing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->isDrawing();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_freezeDraw_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->freezeDraw();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_layout_controls_LayoutControl_getPageDisplay_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					EarthView::World::Spatial::Display::ISpatialDisplay* __values1 = pObjectX->getPageDisplay();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_layout_controls_LayoutControl_getMapFrame_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					EarthView::World::Spatial::Carto::IMapFrame* __values1 = pObjectX->getMapFrame();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_layout_controls_LayoutControl_onContextMenu_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j)
				{
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->onContextMenu(x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_onDoubleClick_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->onDoubleClick(button, shift, x, y);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_onKeyDown_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint keyCode_j, jint shift_j)
				{
					ev_int32 keyCode = (ev_int32) keyCode_j;
					ev_int32 shift = (ev_int32) shift_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->onKeyDown(keyCode, shift);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_onKeyUp_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint keyCode_j, jint shift_j)
				{
					ev_int32 keyCode = (ev_int32) keyCode_j;
					ev_int32 shift = (ev_int32) shift_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->onKeyUp(keyCode, shift);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_onMouseDown_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->onMouseDown(button, shift, x, y);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_onMouseMove_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->onMouseMove(button, shift, x, y);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_onMouseUp_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->onMouseUp(button, shift, x, y);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_onMouseWheel_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint delta_j, jint x_j, jint y_j, jint flag_j)
				{
					ev_int32 delta = (ev_int32) delta_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_int32 flag = (ev_int32) flag_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->onMouseWheel(delta, x, y, flag);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_onResize_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint width_j, jint height_j)
				{
					ev_int32 width = (ev_int32) width_j;
					ev_int32 height = (ev_int32) height_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->onResize(width, height);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_setProxy_1CLayoutControlAgent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pxy_j)
				{
					EarthView::World::Layout::Controls::CLayoutControlAgent *ref_pxy = (EarthView::World::Layout::Controls::CLayoutControlAgent*) ref_pxy_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->setProxy(ref_pxy);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_layout_controls_LayoutControl_getLayoutCanvas_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					EarthView::World::Display::IPaintDevice* __values1 = pObjectX->getLayoutCanvas();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_toMapPixelPoint_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x_j, jlong y_j)
				{
					ev_real64 &x = *(ev_real64*) x_j;
					ev_real64 &y = *(ev_real64*) y_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->toMapPixelPoint(x, y);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_repaint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->repaint();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_setCursor_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
				{
					ev_int32 value = (ev_int32) value_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->setCursor(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_addElement_1IElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_element_j)
				{
					EarthView::World::Spatial::Carto::IElement *ref_element = (EarthView::World::Spatial::Carto::IElement*) ref_element_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLayoutControlProxy))
					{
						pObjectX->EarthView::World::Layout::Controls::CLayoutControl::addElement(ref_element);
					}
					else
					{
						pObjectX->addElement(ref_element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_register_1addElement_1IElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayoutControlProxy *pObjectX = (JCLayoutControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addElement_IElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addElement_IElement_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_addElement_1IElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_element_j)
				{
					EarthView::World::Spatial::Carto::IElement *ref_element = (EarthView::World::Spatial::Carto::IElement*) ref_element_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->EarthView::World::Layout::Controls::CLayoutControl::addElement(ref_element);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_removeElement_1IElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Spatial::Carto::IElement *element = (EarthView::World::Spatial::Carto::IElement*) element_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLayoutControlProxy))
					{
						pObjectX->EarthView::World::Layout::Controls::CLayoutControl::removeElement(element);
					}
					else
					{
						pObjectX->removeElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_register_1removeElement_1IElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayoutControlProxy *pObjectX = (JCLayoutControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeElement_IElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeElement_IElement_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_removeElement_1IElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Spatial::Carto::IElement *element = (EarthView::World::Spatial::Carto::IElement*) element_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->EarthView::World::Layout::Controls::CLayoutControl::removeElement(element);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_removeSelectedElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLayoutControlProxy))
					{
						pObjectX->EarthView::World::Layout::Controls::CLayoutControl::removeSelectedElement();
					}
					else
					{
						pObjectX->removeSelectedElement();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_register_1removeSelectedElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayoutControlProxy *pObjectX = (JCLayoutControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeSelectedElement_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeSelectedElement_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_removeSelectedElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->EarthView::World::Layout::Controls::CLayoutControl::removeSelectedElement();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_layout_controls_LayoutControl_replaceElement_1IElement_1IElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pOldElement_j, jlong pNewElement_j)
				{
					EarthView::World::Spatial::Carto::IElement *pOldElement = (EarthView::World::Spatial::Carto::IElement*) pOldElement_j;
					EarthView::World::Spatial::Carto::IElement *pNewElement = (EarthView::World::Spatial::Carto::IElement*) pNewElement_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLayoutControlProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Layout::Controls::CLayoutControl::replaceElement(pOldElement, pNewElement);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->replaceElement(pOldElement, pNewElement);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_register_1replaceElement_1IElement_1IElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayoutControlProxy *pObjectX = (JCLayoutControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_replaceElement_IElement_IElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"replaceElement_IElement_IElement_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_layout_controls_LayoutControl_replaceElement_1IElement_1IElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pOldElement_j, jlong pNewElement_j)
				{
					EarthView::World::Spatial::Carto::IElement *pOldElement = (EarthView::World::Spatial::Carto::IElement*) pOldElement_j;
					EarthView::World::Spatial::Carto::IElement *pNewElement = (EarthView::World::Spatial::Carto::IElement*) pNewElement_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Layout::Controls::CLayoutControl::replaceElement(pOldElement, pNewElement);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_layout_controls_LayoutControl_exchangeElement_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint srcIndex_j, jint destIndex_j)
				{
					ev_int32 srcIndex = (ev_int32) srcIndex_j;
					ev_int32 destIndex = (ev_int32) destIndex_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLayoutControlProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Layout::Controls::CLayoutControl::exchangeElement(srcIndex, destIndex);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->exchangeElement(srcIndex, destIndex);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_register_1exchangeElement_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayoutControlProxy *pObjectX = (JCLayoutControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_exchangeElement_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"exchangeElement_ev_int32_ev_int32_callback", "(II)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_layout_controls_LayoutControl_exchangeElement_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint srcIndex_j, jint destIndex_j)
				{
					ev_int32 srcIndex = (ev_int32) srcIndex_j;
					ev_int32 destIndex = (ev_int32) destIndex_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Layout::Controls::CLayoutControl::exchangeElement(srcIndex, destIndex);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_layout_controls_LayoutControl_getCacheBitmap_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					EarthView::World::Display::CCacheBitmap* __values1 = pObjectX->getCacheBitmap();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_layout_controls_LayoutControl_getOperationManager_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					EarthView::World::Layout::Controls::CLayoutOperationManager* __values1 = pObjectX->getOperationManager();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_notifyOtherView_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					pObjectX->notifyOtherView();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_layout_controls_LayoutControl_getViewportManager_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::CWorkCommandManager* __values1 = pObjectX->getViewportManager();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_layout_controls_LayoutControl_onMapPan_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->onMapPan(button, shift, x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_layout_controls_LayoutControl_onMapPanBegin_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->onMapPanBegin(button, shift, x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_layout_controls_LayoutControl_onMapPanEnd_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->onMapPanEnd(button, shift, x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_layout_controls_LayoutControl_exportViewToMetafile_1IEnvelope_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataEnv_j, jlong dpi_j)
				{
					EarthView::World::Spatial::Geometry::IEnvelope *pDataEnv = (EarthView::World::Spatial::Geometry::IEnvelope*) pDataEnv_j;
					ev_uint32 dpi = (ev_uint32) dpi_j;
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					EarthView::World::Display::CMetaFile* __values1 = pObjectX->exportViewToMetafile(pDataEnv, dpi);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_layout_controls_LayoutControl_print_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Layout::Controls::CLayoutControl *pObjectX = (EarthView::World::Layout::Controls::CLayoutControl*) pObjXXXX;
					ev_int32 __values1 = pObjectX->print();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_register_1addViewListener_1IViewListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayoutControlProxy *pObjectX = (JCLayoutControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addViewListener_IViewListener_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addViewListener_IViewListener_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_register_1getViewListenerCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayoutControlProxy *pObjectX = (JCLayoutControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getViewListenerCount_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getViewListenerCount_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_register_1getViewListener_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayoutControlProxy *pObjectX = (JCLayoutControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getViewListener_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getViewListener_ev_uint32_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_register_1existViewListener_1IViewListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayoutControlProxy *pObjectX = (JCLayoutControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_existViewListener_IViewListener_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"existViewListener_IViewListener_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_register_1removeViewListener_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayoutControlProxy *pObjectX = (JCLayoutControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeViewListener_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeViewListener_ev_uint32_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_register_1removeViewListener_1IViewListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayoutControlProxy *pObjectX = (JCLayoutControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeViewListener_IViewListener_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeViewListener_IViewListener_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutControl_register_1clearViewListeners_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayoutControlProxy *pObjectX = (JCLayoutControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_clearViewListeners_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"clearViewListeners_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
