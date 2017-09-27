/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/3dcontrol.h"
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
		namespace Graphic
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
			}
		}
		namespace Spatial3D
		{
			namespace Controls
			{
				class JC3DControlProxy : public EarthView::World::Spatial3D::Controls::C3DControl
				{
				 private:
					EarthView::World::Core::ev_string m_windowResized_void_callback;
					EarthView::World::Core::ev_string m_mouseButtonPress_ev_int32_ev_int32_ev_uint32_callback;
					EarthView::World::Core::ev_string m_mouseDoubleButtonPress_ev_int32_ev_int32_ev_uint32_callback;
					EarthView::World::Core::ev_string m_mouseButtonRelease_ev_int32_ev_int32_ev_uint32_callback;
					EarthView::World::Core::ev_string m_mouseMove_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_mouseWheel_ev_real32_callback;
					EarthView::World::Core::ev_string m_eventStage_void_callback;
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
					JC3DControlProxy(EarthView::World::Core::CNameValuePairList *pList) : C3DControl(pList)
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
					void register_windowResized_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_windowResized_void_callback = __method;
					}
					void register_mouseButtonPress_ev_int32_ev_int32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_mouseButtonPress_ev_int32_ev_int32_ev_uint32_callback = __method;
					}
					void register_mouseDoubleButtonPress_ev_int32_ev_int32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_mouseDoubleButtonPress_ev_int32_ev_int32_ev_uint32_callback = __method;
					}
					void register_mouseButtonRelease_ev_int32_ev_int32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_mouseButtonRelease_ev_int32_ev_int32_ev_uint32_callback = __method;
					}
					void register_mouseMove_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_mouseMove_ev_int32_ev_int32_callback = __method;
					}
					void register_mouseWheel_ev_real32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_mouseWheel_ev_real32_callback = __method;
					}
					void register_eventStage_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_eventStage_void_callback = __method;
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
					virtual void windowResized()
					{
						if (this->_gRef != NULL && this->m_windowResized_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("windowResized_void_callback");
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
							return this->C3DControl::windowResized();
						}
					}
					virtual void mouseButtonPress(ev_int32 x, ev_int32 y, ev_uint32 button)
					{
						if (this->_gRef != NULL && this->m_mouseButtonPress_ev_int32_ev_int32_ev_uint32_callback != "" && this->isCustomExtend())
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
							jint x_j = (jint) x;
							jint y_j = (jint) y;
							jlong button_j = (jlong) button;
							jmethodID __method = __gr->getMethod("mouseButtonPress_ev_int32_ev_int32_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , x_j, y_j, button_j);
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
							return this->C3DControl::mouseButtonPress(x, y, button);
						}
					}
					virtual void mouseDoubleButtonPress(ev_int32 x, ev_int32 y, ev_uint32 button)
					{
						if (this->_gRef != NULL && this->m_mouseDoubleButtonPress_ev_int32_ev_int32_ev_uint32_callback != "" && this->isCustomExtend())
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
							jint x_j = (jint) x;
							jint y_j = (jint) y;
							jlong button_j = (jlong) button;
							jmethodID __method = __gr->getMethod("mouseDoubleButtonPress_ev_int32_ev_int32_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , x_j, y_j, button_j);
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
							return this->C3DControl::mouseDoubleButtonPress(x, y, button);
						}
					}
					virtual void mouseButtonRelease(ev_int32 x, ev_int32 y, ev_uint32 button)
					{
						if (this->_gRef != NULL && this->m_mouseButtonRelease_ev_int32_ev_int32_ev_uint32_callback != "" && this->isCustomExtend())
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
							jint x_j = (jint) x;
							jint y_j = (jint) y;
							jlong button_j = (jlong) button;
							jmethodID __method = __gr->getMethod("mouseButtonRelease_ev_int32_ev_int32_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , x_j, y_j, button_j);
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
							return this->C3DControl::mouseButtonRelease(x, y, button);
						}
					}
					virtual void mouseMove(ev_int32 x, ev_int32 y)
					{
						if (this->_gRef != NULL && this->m_mouseMove_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
							jint x_j = (jint) x;
							jint y_j = (jint) y;
							jmethodID __method = __gr->getMethod("mouseMove_ev_int32_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , x_j, y_j);
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
							return this->C3DControl::mouseMove(x, y);
						}
					}
					virtual void mouseWheel(ev_real32 delta)
					{
						if (this->_gRef != NULL && this->m_mouseWheel_ev_real32_callback != "" && this->isCustomExtend())
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
							jfloat delta_j = (jfloat) delta;
							jmethodID __method = __gr->getMethod("mouseWheel_ev_real32_callback");
							__env->CallVoidMethod(__obj, __method , delta_j);
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
							return this->C3DControl::mouseWheel(delta);
						}
					}
					virtual ev_bool eventStage()
					{
						if (this->_gRef != NULL && this->m_eventStage_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("eventStage_void_callback");
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
							return this->C3DControl::eventStage();
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
							return this->C3DControl::getName();
						}
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
							return this->C3DControl::getType();
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
							return this->C3DControl::getTypeString();
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
							return this->C3DControl::notifyViewChanged(args);
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
							return this->C3DControl::addViewListener(ref_externalListener);
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
							return this->C3DControl::getViewListenerCount();
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
							return this->C3DControl::getViewListener(index);
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
							return this->C3DControl::existViewListener(externalListener);
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
							return this->C3DControl::removeViewListener(index);
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
							return this->C3DControl::removeViewListener(externalListener);
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
							return this->C3DControl::clearViewListeners();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JC3DControlProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_addGuiHandler_1CGUIEventHandler(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_guiEventHandler_j)
				{
					EarthView::World::Spatial3D::Controls::CGUIEventHandler *ref_guiEventHandler = (EarthView::World::Spatial3D::Controls::CGUIEventHandler*) ref_guiEventHandler_j;
					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					pObjectX->addGuiHandler(ref_guiEventHandler);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_removeHandler_1CGUIEventHandler(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEventHandler_j)
				{
					EarthView::World::Spatial3D::Controls::CGUIEventHandler *guiEventHandler = (EarthView::World::Spatial3D::Controls::CGUIEventHandler*) guiEventHandler_j;
					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					pObjectX->removeHandler(guiEventHandler);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_addMovable_1CMovableObject_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_movable_j, jlong pos_j)
				{
					EarthView::World::Graphic::CMovableObject *ref_movable = (EarthView::World::Graphic::CMovableObject*) ref_movable_j;
					const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					pObjectX->addMovable(ref_movable, pos);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_removeMovable_1CMovableObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong movable_j)
				{
					EarthView::World::Graphic::CMovableObject *movable = (EarthView::World::Graphic::CMovableObject*) movable_j;
					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					pObjectX->removeMovable(movable);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_removeMovable_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					pObjectX->removeMovable(name);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_windowResized_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JC3DControlProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::C3DControl::windowResized();
					}
					else
					{
						pObjectX->windowResized();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_register_1windowResized_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JC3DControlProxy *pObjectX = (JC3DControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_windowResized_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"windowResized_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_windowResized_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::C3DControl::windowResized();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_resize_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong width_j, jlong height_j)
				{
					ev_uint32 width = (ev_uint32) width_j;
					ev_uint32 height = (ev_uint32) height_j;
					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					pObjectX->resize(width, height);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_mouseButtonPress_1ev_1int32_1ev_1int32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j, jlong button_j)
				{
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_uint32 button = (ev_uint32) button_j;
					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JC3DControlProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::C3DControl::mouseButtonPress(x, y, button);
					}
					else
					{
						pObjectX->mouseButtonPress(x, y, button);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_register_1mouseButtonPress_1ev_1int32_1ev_1int32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JC3DControlProxy *pObjectX = (JC3DControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_mouseButtonPress_ev_int32_ev_int32_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"mouseButtonPress_ev_int32_ev_int32_ev_uint32_callback", "(IIJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_mouseButtonPress_1ev_1int32_1ev_1int32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j, jlong button_j)
				{
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_uint32 button = (ev_uint32) button_j;
					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::C3DControl::mouseButtonPress(x, y, button);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_mouseDoubleButtonPress_1ev_1int32_1ev_1int32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j, jlong button_j)
				{
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_uint32 button = (ev_uint32) button_j;
					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JC3DControlProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::C3DControl::mouseDoubleButtonPress(x, y, button);
					}
					else
					{
						pObjectX->mouseDoubleButtonPress(x, y, button);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_register_1mouseDoubleButtonPress_1ev_1int32_1ev_1int32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JC3DControlProxy *pObjectX = (JC3DControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_mouseDoubleButtonPress_ev_int32_ev_int32_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"mouseDoubleButtonPress_ev_int32_ev_int32_ev_uint32_callback", "(IIJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_mouseDoubleButtonPress_1ev_1int32_1ev_1int32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j, jlong button_j)
				{
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_uint32 button = (ev_uint32) button_j;
					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::C3DControl::mouseDoubleButtonPress(x, y, button);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_mouseButtonRelease_1ev_1int32_1ev_1int32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j, jlong button_j)
				{
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_uint32 button = (ev_uint32) button_j;
					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JC3DControlProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::C3DControl::mouseButtonRelease(x, y, button);
					}
					else
					{
						pObjectX->mouseButtonRelease(x, y, button);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_register_1mouseButtonRelease_1ev_1int32_1ev_1int32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JC3DControlProxy *pObjectX = (JC3DControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_mouseButtonRelease_ev_int32_ev_int32_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"mouseButtonRelease_ev_int32_ev_int32_ev_uint32_callback", "(IIJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_mouseButtonRelease_1ev_1int32_1ev_1int32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j, jlong button_j)
				{
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_uint32 button = (ev_uint32) button_j;
					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::C3DControl::mouseButtonRelease(x, y, button);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_mouseMove_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j)
				{
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JC3DControlProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::C3DControl::mouseMove(x, y);
					}
					else
					{
						pObjectX->mouseMove(x, y);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_register_1mouseMove_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JC3DControlProxy *pObjectX = (JC3DControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_mouseMove_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"mouseMove_ev_int32_ev_int32_callback", "(II)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_mouseMove_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j)
				{
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::C3DControl::mouseMove(x, y);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_mouseWheel_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat delta_j)
				{
					ev_real32 delta = (ev_real32) delta_j;
					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JC3DControlProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::C3DControl::mouseWheel(delta);
					}
					else
					{
						pObjectX->mouseWheel(delta);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_register_1mouseWheel_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JC3DControlProxy *pObjectX = (JC3DControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_mouseWheel_ev_real32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"mouseWheel_ev_real32_callback", "(F)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_mouseWheel_1ev_1real32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat delta_j)
				{
					ev_real32 delta = (ev_real32) delta_j;
					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::C3DControl::mouseWheel(delta);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_keyPress_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j, jint virtualKey_j)
				{
					ev_int32 key = (ev_int32) key_j;
					ev_int32 virtualKey = (ev_int32) virtualKey_j;
					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					pObjectX->keyPress(key, virtualKey);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_keyRelease_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j, jint virtualKey_j)
				{
					ev_int32 key = (ev_int32) key_j;
					ev_int32 virtualKey = (ev_int32) virtualKey_j;
					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					pObjectX->keyRelease(key, virtualKey);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_windowLoseFocus_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					pObjectX->windowLoseFocus();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_eventStage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JC3DControlProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::C3DControl::eventStage();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->eventStage();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_register_1eventStage_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JC3DControlProxy *pObjectX = (JC3DControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_eventStage_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"eventStage_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_eventStage_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::C3DControl::eventStage();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_getRenderWindow_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					EarthView::World::Graphic::CRenderWindow* __values1 = pObjectX->getRenderWindow();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_getSceneManager_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					EarthView::World::Graphic::CSceneManager* __values1 = pObjectX->getSceneManager();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_getCamera_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					EarthView::World::Graphic::CCamera* __values1 = pObjectX->getCamera();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_getViewport_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					EarthView::World::Graphic::CViewport* __values1 = pObjectX->getViewport();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_getScene_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IScene* __values1 = pObjectX->getScene();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JC3DControlProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial3D::Controls::C3DControl::getName();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JC3DControlProxy *pObjectX = (JC3DControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial3D::Controls::C3DControl::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_userEvent_1CGUIEventPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					const EarthView::World::Spatial::SystemUI::CGUIEventPtr &e = *(EarthView::World::Spatial::SystemUI::CGUIEventPtr*) e_j;
					EarthView::World::Spatial3D::Controls::C3DControl *pObjectX = (EarthView::World::Spatial3D::Controls::C3DControl*) pObjXXXX;
					pObjectX->userEvent(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JC3DControlProxy *pObjectX = (JC3DControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_register_1getTypeString_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JC3DControlProxy *pObjectX = (JC3DControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_register_1notifyViewChanged_1IViewArgs(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JC3DControlProxy *pObjectX = (JC3DControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_register_1addViewListener_1IViewListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JC3DControlProxy *pObjectX = (JC3DControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_register_1getViewListenerCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JC3DControlProxy *pObjectX = (JC3DControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_register_1getViewListener_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JC3DControlProxy *pObjectX = (JC3DControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_register_1existViewListener_1IViewListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JC3DControlProxy *pObjectX = (JC3DControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_register_1removeViewListener_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JC3DControlProxy *pObjectX = (JC3DControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_register_1removeViewListener_1IViewListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JC3DControlProxy *pObjectX = (JC3DControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_C3DControl_register_1clearViewListeners_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JC3DControlProxy *pObjectX = (JC3DControlProxy*) pObjXXXX;
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
