/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/globecontrol.h"
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
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
			}
			namespace Atlas
			{
			}
		}
		namespace Spatial
		{
			namespace Atlas
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Effect3D
			{
			}
		}
		namespace Spatial3D
		{
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_Compositor3DTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					C3DT_Unknown,
					C3DT_Gray,
					C3DT_Infrared
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			namespace Controls
			{
				class JCGlobeControlProxy : public EarthView::World::Spatial3D::Controls::CGlobeControl
				{
				 private:
					EarthView::World::Core::ev_string m_createGlobeScene_void_callback;
					EarthView::World::Core::ev_string m_destroyGlobeScene_void_callback;
					EarthView::World::Core::ev_string m_pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool_callback;
					EarthView::World::Core::ev_string m_pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_callback;
					EarthView::World::Core::ev_string m_pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool_callback;
					EarthView::World::Core::ev_string m_pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_callback;
					EarthView::World::Core::ev_string m_windowResized_int_int_callback;
					EarthView::World::Core::ev_string m_setCurrentTool_ITool_callback;
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
					JCGlobeControlProxy(EarthView::World::Core::CNameValuePairList *pList) : CGlobeControl(pList)
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
					C_DISABLE_COPY(JCGlobeControlProxy)
				public:
					void register_createGlobeScene_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createGlobeScene_void_callback = __method;
					}
					void register_destroyGlobeScene_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_destroyGlobeScene_void_callback = __method;
					}
					void register_pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64_callback = __method;
					}
					void register_pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool_callback = __method;
					}
					void register_pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_callback = __method;
					}
					void register_pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool_callback = __method;
					}
					void register_pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_callback = __method;
					}
					void register_windowResized_int_int_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_windowResized_int_int_callback = __method;
					}
					void register_setCurrentTool_ITool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setCurrentTool_ITool_callback = __method;
					}
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
							return this->CGlobeControl::notifyViewChanged(args);
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
							return this->CGlobeControl::mouseButtonPress(x, y, button);
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
							return this->CGlobeControl::getName();
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
							return this->CGlobeControl::getType();
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
							return this->CGlobeControl::getTypeString();
						}
					}
					virtual void createGlobeScene()
					{
						if (this->_gRef != NULL && this->m_createGlobeScene_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("createGlobeScene_void_callback");
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
							return this->CGlobeControl::createGlobeScene();
						}
					}
					virtual void destroyGlobeScene()
					{
						if (this->_gRef != NULL && this->m_destroyGlobeScene_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("destroyGlobeScene_void_callback");
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
							return this->CGlobeControl::destroyGlobeScene();
						}
					}
					virtual ev_bool pickingRayIntersection(ev_int32 screenX, ev_int32 screenY, ev_real64& latitude, ev_real64& longitude)
					{
						if (this->_gRef != NULL && this->m_pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jint screenX_j = (jint) screenX;
							jint screenY_j = (jint) screenY;
							jlong latitude_j = (jlong) &latitude;
							jlong longitude_j = (jlong) &longitude;
							jmethodID __method = __gr->getMethod("pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , screenX_j, screenY_j, latitude_j, longitude_j);
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
							return this->CGlobeControl::pickingRayIntersection(screenX, screenY, latitude, longitude);
						}
					}
					virtual ev_bool pickingRayIntersection(ev_int32 screenX, ev_int32 screenY, ev_real64& latitude, ev_real64& longitude, ev_bool intersectModel)
					{
						if (this->_gRef != NULL && this->m_pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool_callback != "" && this->isCustomExtend())
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
							jint screenX_j = (jint) screenX;
							jint screenY_j = (jint) screenY;
							jlong latitude_j = (jlong) &latitude;
							jlong longitude_j = (jlong) &longitude;
							jboolean intersectModel_j = (jboolean) intersectModel;
							jmethodID __method = __gr->getMethod("pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , screenX_j, screenY_j, latitude_j, longitude_j, intersectModel_j);
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
							return this->CGlobeControl::pickingRayIntersection(screenX, screenY, latitude, longitude, intersectModel);
						}
					}
					virtual ev_bool pickingRayIntersection(ev_int32 screenX, ev_int32 screenY, ev_bool intersectModel, ev_bool intersectSea, ev_real64& latitude, ev_real64& longitude, ev_real64& altitude, ev_bool& modelIntersected)
					{
						if (this->_gRef != NULL && this->m_pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_callback != "" && this->isCustomExtend())
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
							jint screenX_j = (jint) screenX;
							jint screenY_j = (jint) screenY;
							jboolean intersectModel_j = (jboolean) intersectModel;
							jboolean intersectSea_j = (jboolean) intersectSea;
							jlong latitude_j = (jlong) &latitude;
							jlong longitude_j = (jlong) &longitude;
							jlong altitude_j = (jlong) &altitude;
							jlong modelIntersected_j = (jlong) &modelIntersected;
							jmethodID __method = __gr->getMethod("pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , screenX_j, screenY_j, intersectModel_j, intersectSea_j, latitude_j, longitude_j, altitude_j, modelIntersected_j);
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
							return this->CGlobeControl::pickingRayIntersection(screenX, screenY, intersectModel, intersectSea, latitude, longitude, altitude, modelIntersected);
						}
					}
					virtual ev_bool pickingRayIntersection(ev_int32 screenX, ev_int32 screenY, ev_bool intersectModel, ev_bool intersectSea, ev_bool intersectOBQ, ev_real64& latitude, ev_real64& longitude, ev_real64& altitude, ev_bool& modelIntersected, ev_bool& seaIntersected, ev_bool& OBQIntersected)
					{
						if (this->_gRef != NULL && this->m_pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
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
							jint screenX_j = (jint) screenX;
							jint screenY_j = (jint) screenY;
							jboolean intersectModel_j = (jboolean) intersectModel;
							jboolean intersectSea_j = (jboolean) intersectSea;
							jboolean intersectOBQ_j = (jboolean) intersectOBQ;
							jlong latitude_j = (jlong) &latitude;
							jlong longitude_j = (jlong) &longitude;
							jlong altitude_j = (jlong) &altitude;
							jlong modelIntersected_j = (jlong) &modelIntersected;
							jlong seaIntersected_j = (jlong) &seaIntersected;
							jlong OBQIntersected_j = (jlong) &OBQIntersected;
							jmethodID __method = __gr->getMethod("pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , screenX_j, screenY_j, intersectModel_j, intersectSea_j, intersectOBQ_j, latitude_j, longitude_j, altitude_j, modelIntersected_j, seaIntersected_j, OBQIntersected_j);
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
							return this->CGlobeControl::pickingRayIntersection(screenX, screenY, intersectModel, intersectSea, intersectOBQ, latitude, longitude, altitude, modelIntersected, seaIntersected, OBQIntersected);
						}
					}
					virtual ev_bool pickingRayIntersection(ev_int32 screenX, ev_int32 screenY, ev_bool intersectModel, ev_bool intersectSea, ev_real64& latitude, ev_real64& longitude, ev_real64& altitude, ev_bool& modelIntersected, ev_bool& seaIntersected)
					{
						if (this->_gRef != NULL && this->m_pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
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
							jint screenX_j = (jint) screenX;
							jint screenY_j = (jint) screenY;
							jboolean intersectModel_j = (jboolean) intersectModel;
							jboolean intersectSea_j = (jboolean) intersectSea;
							jlong latitude_j = (jlong) &latitude;
							jlong longitude_j = (jlong) &longitude;
							jlong altitude_j = (jlong) &altitude;
							jlong modelIntersected_j = (jlong) &modelIntersected;
							jlong seaIntersected_j = (jlong) &seaIntersected;
							jmethodID __method = __gr->getMethod("pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , screenX_j, screenY_j, intersectModel_j, intersectSea_j, latitude_j, longitude_j, altitude_j, modelIntersected_j, seaIntersected_j);
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
							return this->CGlobeControl::pickingRayIntersection(screenX, screenY, intersectModel, intersectSea, latitude, longitude, altitude, modelIntersected, seaIntersected);
						}
					}
					virtual void windowResized(int width, int height)
					{
						if (this->_gRef != NULL && this->m_windowResized_int_int_callback != "" && this->isCustomExtend())
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
							jint width_j = (jint) width;
							jint height_j = (jint) height;
							jmethodID __method = __gr->getMethod("windowResized_int_int_callback");
							__env->CallVoidMethod(__obj, __method , width_j, height_j);
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
							return this->CGlobeControl::windowResized(width, height);
						}
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
							return this->CGlobeControl::windowResized();
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
							return this->CGlobeControl::eventStage();
						}
					}
					virtual ev_bool setCurrentTool(EarthView::World::Spatial::SystemUI::ITool* ref_tool)
					{
						if (this->_gRef != NULL && this->m_setCurrentTool_ITool_callback != "" && this->isCustomExtend())
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
							jlong ref_tool_j = (jlong) ref_tool;
							jmethodID __method = __gr->getMethod("setCurrentTool_ITool_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , ref_tool_j);
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
							return this->CGlobeControl::setCurrentTool(ref_tool);
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
							return this->CGlobeControl::mouseDoubleButtonPress(x, y, button);
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
							return this->CGlobeControl::mouseButtonRelease(x, y, button);
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
							return this->CGlobeControl::mouseMove(x, y);
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
							return this->CGlobeControl::mouseWheel(delta);
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
							return this->CGlobeControl::addViewListener(ref_externalListener);
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
							return this->CGlobeControl::getViewListenerCount();
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
							return this->CGlobeControl::getViewListener(index);
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
							return this->CGlobeControl::existViewListener(externalListener);
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
							return this->CGlobeControl::removeViewListener(index);
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
							return this->CGlobeControl::removeViewListener(externalListener);
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
							return this->CGlobeControl::clearViewListeners();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCGlobeControlProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_notifyViewChanged_1IViewArgs(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong args_j)
				{
					EarthView::World::Spatial::IViewArgs *args = (EarthView::World::Spatial::IViewArgs*) args_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeControlProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::notifyViewChanged(args);
					}
					else
					{
						pObjectX->notifyViewChanged(args);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1notifyViewChanged_1IViewArgs(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_notifyViewChanged_1IViewArgs_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong args_j)
				{
					EarthView::World::Spatial::IViewArgs *args = (EarthView::World::Spatial::IViewArgs*) args_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::notifyViewChanged(args);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_mouseButtonPress_1ev_1int32_1ev_1int32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j, jlong button_j)
				{
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_uint32 button = (ev_uint32) button_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeControlProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::mouseButtonPress(x, y, button);
					}
					else
					{
						pObjectX->mouseButtonPress(x, y, button);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1mouseButtonPress_1ev_1int32_1ev_1int32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_mouseButtonPress_1ev_1int32_1ev_1int32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j, jlong button_j)
				{
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_uint32 button = (ev_uint32) button_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::mouseButtonPress(x, y, button);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_goTo_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jdouble heading_j, jdouble tilt_j, jdouble altitude_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 heading = (ev_real64) heading_j;
					ev_real64 tilt = (ev_real64) tilt_j;
					ev_real64 altitude = (ev_real64) altitude_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->goTo(latitude, longitude, heading, tilt, altitude);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_stopGoto_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->stopGoto();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCameraTiltRange_1CDegree_1CDegree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong min_j, jlong max_j)
				{
					const EarthView::World::Spatial::Math::CDegree &min = *(EarthView::World::Spatial::Math::CDegree*) min_j;
					const EarthView::World::Spatial::Math::CDegree &max = *(EarthView::World::Spatial::Math::CDegree*) max_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setCameraTiltRange(min, max);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_notifyAnalysisStart_1ITool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tool_j)
				{
					EarthView::World::Spatial::SystemUI::ITool *tool = (EarthView::World::Spatial::SystemUI::ITool*) tool_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->notifyAnalysisStart(tool);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_notifyAnalysisEnd_1ITool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tool_j)
				{
					EarthView::World::Spatial::SystemUI::ITool *tool = (EarthView::World::Spatial::SystemUI::ITool*) tool_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->notifyAnalysisEnd(tool);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_addGlobeControlListener_1CGlobeControlListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlListener *ref_listener = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) ref_listener_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->addGlobeControlListener(ref_listener);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_removeGlobeControlListener_1CGlobeControlListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlListener *listener = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) listener_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->removeGlobeControlListener(listener);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_addGotoListener_1CGoToTargetListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
				{
					EarthView::World::Spatial3D::Controls::CGoToTargetListener *ref_listener = (EarthView::World::Spatial3D::Controls::CGoToTargetListener*) ref_listener_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->addGotoListener(ref_listener);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_removeGotoListener_1CGoToTargetListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
				{
					EarthView::World::Spatial3D::Controls::CGoToTargetListener *listener = (EarthView::World::Spatial3D::Controls::CGoToTargetListener*) listener_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->removeGotoListener(listener);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_addRouteFlyListener_1CRouteFlyListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
				{
					EarthView::World::Spatial3D::Controls::CRouteFlyListener *ref_listener = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) ref_listener_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->addRouteFlyListener(ref_listener);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_removeRouteFlyListener_1CRouteFlyListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
				{
					EarthView::World::Spatial3D::Controls::CRouteFlyListener *ref_listener = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) ref_listener_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->removeRouteFlyListener(ref_listener);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_goTo_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jdouble heading_j, jdouble tilt_j, jdouble altitude_j, jdouble moditifAltitude_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 heading = (ev_real64) heading_j;
					ev_real64 tilt = (ev_real64) tilt_j;
					ev_real64 altitude = (ev_real64) altitude_j;
					ev_real64 moditifAltitude = (ev_real64) moditifAltitude_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->goTo(latitude, longitude, heading, tilt, altitude, moditifAltitude);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_goTo_1CDegree_1CDegree_1ev_1real64_1CDegree_1CDegree_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong latitude_j, jlong longitude_j, jdouble targetAltitude_j, jlong heading_j, jlong tilt_j, jdouble distance_j)
				{
					const EarthView::World::Spatial::Math::CDegree &latitude = *(EarthView::World::Spatial::Math::CDegree*) latitude_j;
					const EarthView::World::Spatial::Math::CDegree &longitude = *(EarthView::World::Spatial::Math::CDegree*) longitude_j;
					ev_real64 targetAltitude = (ev_real64) targetAltitude_j;
					const EarthView::World::Spatial::Math::CDegree &heading = *(EarthView::World::Spatial::Math::CDegree*) heading_j;
					const EarthView::World::Spatial::Math::CDegree &tilt = *(EarthView::World::Spatial::Math::CDegree*) tilt_j;
					ev_real64 distance = (ev_real64) distance_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->goTo(latitude, longitude, targetAltitude, heading, tilt, distance);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setScene_1IScene(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_scene_j)
				{
					EarthView::World::Spatial::Atlas::IScene *ref_scene = (EarthView::World::Spatial::Atlas::IScene*) ref_scene_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->setScene(ref_scene);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getScene_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IScene* __values1 = pObjectX->getScene();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getCameraIsLocked_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->getCameraIsLocked();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_lockCameraToTarget_1CSceneNode_1CDegree_1CDegree_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jlong heading_j, jlong tilt_j, jdouble distance_j)
				{
					EarthView::World::Graphic::CSceneNode *target = (EarthView::World::Graphic::CSceneNode*) target_j;
					const EarthView::World::Spatial::Math::CDegree &heading = *(EarthView::World::Spatial::Math::CDegree*) heading_j;
					const EarthView::World::Spatial::Math::CDegree &tilt = *(EarthView::World::Spatial::Math::CDegree*) tilt_j;
					ev_real64 distance = (ev_real64) distance_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->lockCameraToTarget(target, heading, tilt, distance);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_lockCameraToTarget_1CSceneNode_1CDegree_1CDegree_1ev_1real64_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jlong heading_j, jlong tilt_j, jdouble distance_j, jboolean isThirdPersonMode_j)
				{
					EarthView::World::Graphic::CSceneNode *target = (EarthView::World::Graphic::CSceneNode*) target_j;
					const EarthView::World::Spatial::Math::CDegree &heading = *(EarthView::World::Spatial::Math::CDegree*) heading_j;
					const EarthView::World::Spatial::Math::CDegree &tilt = *(EarthView::World::Spatial::Math::CDegree*) tilt_j;
					ev_real64 distance = (ev_real64) distance_j;
					ev_bool isThirdPersonMode = (ev_bool) isThirdPersonMode_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->lockCameraToTarget(target, heading, tilt, distance, isThirdPersonMode);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_lockCameraToTarget_1CSceneNode_1CDegree_1CDegree_1ev_1real64_1ev_1bool_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jlong heading_j, jlong tilt_j, jdouble distance_j, jboolean canChangeTilt_j, jboolean canChangeHeading_j, jboolean canChangeDistance_j)
				{
					EarthView::World::Graphic::CSceneNode *target = (EarthView::World::Graphic::CSceneNode*) target_j;
					const EarthView::World::Spatial::Math::CDegree &heading = *(EarthView::World::Spatial::Math::CDegree*) heading_j;
					const EarthView::World::Spatial::Math::CDegree &tilt = *(EarthView::World::Spatial::Math::CDegree*) tilt_j;
					ev_real64 distance = (ev_real64) distance_j;
					ev_bool canChangeTilt = (ev_bool) canChangeTilt_j;
					ev_bool canChangeHeading = (ev_bool) canChangeHeading_j;
					ev_bool canChangeDistance = (ev_bool) canChangeDistance_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->lockCameraToTarget(target, heading, tilt, distance, canChangeTilt, canChangeHeading, canChangeDistance);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_lockCameraToTarget_1CSceneNode_1CDegree_1CDegree_1ev_1real64_1ev_1bool_1ev_1bool_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jlong heading_j, jlong tilt_j, jdouble distance_j, jboolean canChangeTilt_j, jboolean canChangeHeading_j, jboolean canChangeDistance_j, jboolean isThirdPersonMode_j)
				{
					EarthView::World::Graphic::CSceneNode *target = (EarthView::World::Graphic::CSceneNode*) target_j;
					const EarthView::World::Spatial::Math::CDegree &heading = *(EarthView::World::Spatial::Math::CDegree*) heading_j;
					const EarthView::World::Spatial::Math::CDegree &tilt = *(EarthView::World::Spatial::Math::CDegree*) tilt_j;
					ev_real64 distance = (ev_real64) distance_j;
					ev_bool canChangeTilt = (ev_bool) canChangeTilt_j;
					ev_bool canChangeHeading = (ev_bool) canChangeHeading_j;
					ev_bool canChangeDistance = (ev_bool) canChangeDistance_j;
					ev_bool isThirdPersonMode = (ev_bool) isThirdPersonMode_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->lockCameraToTarget(target, heading, tilt, distance, canChangeTilt, canChangeHeading, canChangeDistance, isThirdPersonMode);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCameraLockHeading_1CDegree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong heading_j)
				{
					const EarthView::World::Spatial::Math::CDegree &heading = *(EarthView::World::Spatial::Math::CDegree*) heading_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setCameraLockHeading(heading);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCameraLockTilt_1CDegree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tilt_j)
				{
					const EarthView::World::Spatial::Math::CDegree &tilt = *(EarthView::World::Spatial::Math::CDegree*) tilt_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setCameraLockTilt(tilt);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCameraLockDistance_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble distance_j)
				{
					ev_real64 distance = (ev_real64) distance_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setCameraLockDistance(distance);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCameraLockMode_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isThirdPersonMode_j)
				{
					ev_bool isThirdPersonMode = (ev_bool) isThirdPersonMode_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setCameraLockMode(isThirdPersonMode);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_unlockCamera_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->unlockCamera();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCameraManipulatorIntersectModel_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean intersectModel_j)
				{
					ev_bool intersectModel = (ev_bool) intersectModel_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setCameraManipulatorIntersectModel(intersectModel);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getCameraManipulatorIntersectModel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->getCameraManipulatorIntersectModel();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCameraManipulatorIntersectOBQ_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean intersectOBQ_j)
				{
					ev_bool intersectOBQ = (ev_bool) intersectOBQ_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setCameraManipulatorIntersectOBQ(intersectOBQ);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getCameraManipulatorIntersectOBQ_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->getCameraManipulatorIntersectOBQ();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCameraManipulatorIntersectFloor_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean intersectFloor_j)
				{
					ev_bool intersectFloor = (ev_bool) intersectFloor_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setCameraManipulatorIntersectFloor(intersectFloor);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getCameraManipulatorIntersectFloor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->getCameraManipulatorIntersectFloor();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getCameraPostion_1CDegree_1CDegree_1CDegree_1CDegree_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lat_j, jlong lon_j, jlong heading_j, jlong tilt_j, jdouble altitude_j)
				{
					EarthView::World::Spatial::Math::CDegree &lat = *(EarthView::World::Spatial::Math::CDegree*) lat_j;
					EarthView::World::Spatial::Math::CDegree &lon = *(EarthView::World::Spatial::Math::CDegree*) lon_j;
					EarthView::World::Spatial::Math::CDegree &heading = *(EarthView::World::Spatial::Math::CDegree*) heading_j;
					EarthView::World::Spatial::Math::CDegree &tilt = *(EarthView::World::Spatial::Math::CDegree*) tilt_j;
					ev_real64 altitude = (ev_real64) altitude_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->getCameraPostion(lat, lon, heading, tilt, altitude);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCameraPostion_1CDegree_1CDegree_1CDegree_1CDegree_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lat_j, jlong lon_j, jlong heading_j, jlong tilt_j, jdouble altitude_j)
				{
					const EarthView::World::Spatial::Math::CDegree &lat = *(EarthView::World::Spatial::Math::CDegree*) lat_j;
					const EarthView::World::Spatial::Math::CDegree &lon = *(EarthView::World::Spatial::Math::CDegree*) lon_j;
					const EarthView::World::Spatial::Math::CDegree &heading = *(EarthView::World::Spatial::Math::CDegree*) heading_j;
					const EarthView::World::Spatial::Math::CDegree &tilt = *(EarthView::World::Spatial::Math::CDegree*) tilt_j;
					ev_real64 altitude = (ev_real64) altitude_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setCameraPostion(lat, lon, heading, tilt, altitude);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getCameraIsUnderGroundMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->getCameraIsUnderGroundMode();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCameraIsUnderGroundMode_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean underGroundMode_j)
				{
					ev_bool underGroundMode = (ev_bool) underGroundMode_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setCameraIsUnderGroundMode(underGroundMode);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getCameraIsPlaneBase_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->getCameraIsPlaneBase();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCameraIsPlaneBase_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean planeBase_j)
				{
					ev_bool planeBase = (ev_bool) planeBase_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setCameraIsPlaneBase(planeBase);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getCameraControlDepth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getCameraControlDepth();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCameraControlDepth_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble cameraDepth_j)
				{
					ev_real64 cameraDepth = (ev_real64) cameraDepth_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setCameraControlDepth(cameraDepth);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeControlProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::getName();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeControlProxy))
					{
						EarthView::World::Spatial::Atlas::EVSpatialControlType __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::getType();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					EarthView::World::Spatial::Atlas::EVSpatialControlType __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getTypeString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeControlProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::getTypeString();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1getTypeString_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getTypeString_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::getTypeString();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_addViewport_1EVString_1ev_1int32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring cameraName_j, jint zorder_j, jfloat left_j, jfloat top_j, jfloat width_j, jfloat height_j, jdouble cameraTilt_j, jdouble cameraHeading_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* cameraName_ch = (const ev_char*)__env->GetStringUTFChars(cameraName_j,JNI_FALSE);
					const EVString cameraName = cameraName_ch;
					__env->ReleaseStringUTFChars(cameraName_j, (const char *)cameraName_ch);
					#else
					const ev_wchar* cameraName_ch = (const ev_wchar*)__env->GetStringChars(cameraName_j,JNI_FALSE);
					const EVString cameraName = cameraName_ch;
					__env->ReleaseStringChars(cameraName_j, (const jchar *)cameraName_ch);
					#endif
					ev_int32 zorder = (ev_int32) zorder_j;
					ev_real32 left = (ev_real32) left_j;
					ev_real32 top = (ev_real32) top_j;
					ev_real32 width = (ev_real32) width_j;
					ev_real32 height = (ev_real32) height_j;
					ev_real64 cameraTilt = (ev_real64) cameraTilt_j;
					ev_real64 cameraHeading = (ev_real64) cameraHeading_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->addViewport(cameraName, zorder, left, top, width, height, cameraTilt, cameraHeading);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_removeViewport_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring cameraName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* cameraName_ch = (const ev_char*)__env->GetStringUTFChars(cameraName_j,JNI_FALSE);
					const EVString cameraName = cameraName_ch;
					__env->ReleaseStringUTFChars(cameraName_j, (const char *)cameraName_ch);
					#else
					const ev_wchar* cameraName_ch = (const ev_wchar*)__env->GetStringChars(cameraName_j,JNI_FALSE);
					const EVString cameraName = cameraName_ch;
					__env->ReleaseStringChars(cameraName_j, (const jchar *)cameraName_ch);
					#endif
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeViewport(cameraName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getViewport_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring cameraName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* cameraName_ch = (const ev_char*)__env->GetStringUTFChars(cameraName_j,JNI_FALSE);
					const EVString cameraName = cameraName_ch;
					__env->ReleaseStringUTFChars(cameraName_j, (const char *)cameraName_ch);
					#else
					const ev_wchar* cameraName_ch = (const ev_wchar*)__env->GetStringChars(cameraName_j,JNI_FALSE);
					const EVString cameraName = cameraName_ch;
					__env->ReleaseStringChars(cameraName_j, (const jchar *)cameraName_ch);
					#endif
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					EarthView::World::Graphic::CViewport* __values1 = pObjectX->getViewport(cameraName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getViewport_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					EarthView::World::Graphic::CViewport* __values1 = pObjectX->getViewport();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setChildViewportCameraPosition_1EVString_1CDegree_1CDegree_1CDegree_1CDegree_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring cameraName_j, jlong latitude_j, jlong longitude_j, jlong heading_j, jlong tilt_j, jdouble altitude_j, jdouble moditifAltitude_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* cameraName_ch = (const ev_char*)__env->GetStringUTFChars(cameraName_j,JNI_FALSE);
					const EVString cameraName = cameraName_ch;
					__env->ReleaseStringUTFChars(cameraName_j, (const char *)cameraName_ch);
					#else
					const ev_wchar* cameraName_ch = (const ev_wchar*)__env->GetStringChars(cameraName_j,JNI_FALSE);
					const EVString cameraName = cameraName_ch;
					__env->ReleaseStringChars(cameraName_j, (const jchar *)cameraName_ch);
					#endif
					const EarthView::World::Spatial::Math::CDegree &latitude = *(EarthView::World::Spatial::Math::CDegree*) latitude_j;
					const EarthView::World::Spatial::Math::CDegree &longitude = *(EarthView::World::Spatial::Math::CDegree*) longitude_j;
					const EarthView::World::Spatial::Math::CDegree &heading = *(EarthView::World::Spatial::Math::CDegree*) heading_j;
					const EarthView::World::Spatial::Math::CDegree &tilt = *(EarthView::World::Spatial::Math::CDegree*) tilt_j;
					ev_real64 altitude = (ev_real64) altitude_j;
					ev_real64 moditifAltitude = (ev_real64) moditifAltitude_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setChildViewportCameraPosition(cameraName, latitude, longitude, heading, tilt, altitude, moditifAltitude);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setNeedCopyMasterCameraTarget_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring cameraName_j, jboolean needCopyMasterCameraTarget_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* cameraName_ch = (const ev_char*)__env->GetStringUTFChars(cameraName_j,JNI_FALSE);
					const EVString cameraName = cameraName_ch;
					__env->ReleaseStringUTFChars(cameraName_j, (const char *)cameraName_ch);
					#else
					const ev_wchar* cameraName_ch = (const ev_wchar*)__env->GetStringChars(cameraName_j,JNI_FALSE);
					const EVString cameraName = cameraName_ch;
					__env->ReleaseStringChars(cameraName_j, (const jchar *)cameraName_ch);
					#endif
					ev_bool needCopyMasterCameraTarget = (ev_bool) needCopyMasterCameraTarget_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setNeedCopyMasterCameraTarget(cameraName, needCopyMasterCameraTarget);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getNeedCopyMasterCameraTarget_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring cameraName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* cameraName_ch = (const ev_char*)__env->GetStringUTFChars(cameraName_j,JNI_FALSE);
					const EVString cameraName = cameraName_ch;
					__env->ReleaseStringUTFChars(cameraName_j, (const char *)cameraName_ch);
					#else
					const ev_wchar* cameraName_ch = (const ev_wchar*)__env->GetStringChars(cameraName_j,JNI_FALSE);
					const EVString cameraName = cameraName_ch;
					__env->ReleaseStringChars(cameraName_j, (const jchar *)cameraName_ch);
					#endif
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->getNeedCopyMasterCameraTarget(cameraName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCurrentFlyPath_1CGlobeFlyPathPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong flyPath_j)
				{
					const EarthView::World::Spatial3D::CGlobeFlyPathPtr &flyPath = *(EarthView::World::Spatial3D::CGlobeFlyPathPtr*) flyPath_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setCurrentFlyPath(flyPath);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_showModelAxis_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->showModelAxis();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_hideModelAxis_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->hideModelAxis();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_startEditControlPoint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->startEditControlPoint();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_stopEditControlPoint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->stopEditControlPoint();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_startFly_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->startFly();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_stopFly_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->stopFly();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_pauseFly_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->pauseFly();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setLockHandleRotationMode_1RotationMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint rotationMode_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::RotationMode rotationMode = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::RotationMode) rotationMode_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setLockHandleRotationMode(rotationMode);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getLockHandleRotationMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::RotationMode __values1 = pObjectX->getLockHandleRotationMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setGotoTimeRatio_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble gotoRatio_j)
				{
					ev_real64 gotoRatio = (ev_real64) gotoRatio_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setGotoTimeRatio(gotoRatio);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getGotoTimeRatio_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getGotoTimeRatio();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_createGlobeScene_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeControlProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::createGlobeScene();
					}
					else
					{
						pObjectX->createGlobeScene();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1createGlobeScene_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createGlobeScene_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createGlobeScene_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_createGlobeScene_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::createGlobeScene();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_destroyGlobeScene_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeControlProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::destroyGlobeScene();
					}
					else
					{
						pObjectX->destroyGlobeScene();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1destroyGlobeScene_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_destroyGlobeScene_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"destroyGlobeScene_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_destroyGlobeScene_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::destroyGlobeScene();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCameraManipulatorMoveToEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setCameraManipulatorMoveToEnable(enable);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getCameraManipulatorMoveToEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->getCameraManipulatorMoveToEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCameraManipulatorMouseWheelRatio_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble mouseWheelRatio_j)
				{
					ev_real64 mouseWheelRatio = (ev_real64) mouseWheelRatio_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setCameraManipulatorMouseWheelRatio(mouseWheelRatio);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getCameraManipulatorMouseWheelRatio_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getCameraManipulatorMouseWheelRatio();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_screenToScene_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat x_j, jfloat y_j)
				{
					ev_real32 x = (ev_real32) x_j;
					ev_real32 y = (ev_real32) y_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					EarthView::World::Spatial::Math::CRay __values1 = pObjectX->screenToScene(x, y);
					EarthView::World::Spatial::Math::CRay *returnvalues = new EarthView::World::Spatial::Math::CRay(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_pickingRayIntersection_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint screenX_j, jint screenY_j, jlong latitude_j, jlong longitude_j)
				{
					ev_int32 screenX = (ev_int32) screenX_j;
					ev_int32 screenY = (ev_int32) screenY_j;
					ev_real64 &latitude = *(ev_real64*) latitude_j;
					ev_real64 &longitude = *(ev_real64*) longitude_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeControlProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::pickingRayIntersection(screenX, screenY, latitude, longitude);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->pickingRayIntersection(screenX, screenY, latitude, longitude);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1pickingRayIntersection_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64_callback", "(IIJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_pickingRayIntersection_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint screenX_j, jint screenY_j, jlong latitude_j, jlong longitude_j)
				{
					ev_int32 screenX = (ev_int32) screenX_j;
					ev_int32 screenY = (ev_int32) screenY_j;
					ev_real64 &latitude = *(ev_real64*) latitude_j;
					ev_real64 &longitude = *(ev_real64*) longitude_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::pickingRayIntersection(screenX, screenY, latitude, longitude);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_pickingRayIntersection_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint screenX_j, jint screenY_j, jlong latitude_j, jlong longitude_j, jboolean intersectModel_j)
				{
					ev_int32 screenX = (ev_int32) screenX_j;
					ev_int32 screenY = (ev_int32) screenY_j;
					ev_real64 &latitude = *(ev_real64*) latitude_j;
					ev_real64 &longitude = *(ev_real64*) longitude_j;
					ev_bool intersectModel = (ev_bool) intersectModel_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeControlProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::pickingRayIntersection(screenX, screenY, latitude, longitude, intersectModel);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->pickingRayIntersection(screenX, screenY, latitude, longitude, intersectModel);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1pickingRayIntersection_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool_callback", "(IIJJZ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_pickingRayIntersection_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint screenX_j, jint screenY_j, jlong latitude_j, jlong longitude_j, jboolean intersectModel_j)
				{
					ev_int32 screenX = (ev_int32) screenX_j;
					ev_int32 screenY = (ev_int32) screenY_j;
					ev_real64 &latitude = *(ev_real64*) latitude_j;
					ev_real64 &longitude = *(ev_real64*) longitude_j;
					ev_bool intersectModel = (ev_bool) intersectModel_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::pickingRayIntersection(screenX, screenY, latitude, longitude, intersectModel);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_pickingRayIntersection_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1bool_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint screenX_j, jint screenY_j, jboolean intersectModel_j, jboolean intersectSea_j, jlong latitude_j, jlong longitude_j, jlong altitude_j, jlong modelIntersected_j)
				{
					ev_int32 screenX = (ev_int32) screenX_j;
					ev_int32 screenY = (ev_int32) screenY_j;
					ev_bool intersectModel = (ev_bool) intersectModel_j;
					ev_bool intersectSea = (ev_bool) intersectSea_j;
					ev_real64 &latitude = *(ev_real64*) latitude_j;
					ev_real64 &longitude = *(ev_real64*) longitude_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					ev_bool &modelIntersected = *(ev_bool*) modelIntersected_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeControlProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::pickingRayIntersection(screenX, screenY, intersectModel, intersectSea, latitude, longitude, altitude, modelIntersected);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->pickingRayIntersection(screenX, screenY, intersectModel, intersectSea, latitude, longitude, altitude, modelIntersected);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1pickingRayIntersection_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1bool_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_callback", "(IIZZJJJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_pickingRayIntersection_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1bool_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint screenX_j, jint screenY_j, jboolean intersectModel_j, jboolean intersectSea_j, jlong latitude_j, jlong longitude_j, jlong altitude_j, jlong modelIntersected_j)
				{
					ev_int32 screenX = (ev_int32) screenX_j;
					ev_int32 screenY = (ev_int32) screenY_j;
					ev_bool intersectModel = (ev_bool) intersectModel_j;
					ev_bool intersectSea = (ev_bool) intersectSea_j;
					ev_real64 &latitude = *(ev_real64*) latitude_j;
					ev_real64 &longitude = *(ev_real64*) longitude_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					ev_bool &modelIntersected = *(ev_bool*) modelIntersected_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::pickingRayIntersection(screenX, screenY, intersectModel, intersectSea, latitude, longitude, altitude, modelIntersected);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_pickingRayIntersection_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1bool_1ev_1bool_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1bool_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint screenX_j, jint screenY_j, jboolean intersectModel_j, jboolean intersectSea_j, jboolean intersectOBQ_j, jlong latitude_j, jlong longitude_j, jlong altitude_j, jlong modelIntersected_j, jlong seaIntersected_j, jlong OBQIntersected_j)
				{
					ev_int32 screenX = (ev_int32) screenX_j;
					ev_int32 screenY = (ev_int32) screenY_j;
					ev_bool intersectModel = (ev_bool) intersectModel_j;
					ev_bool intersectSea = (ev_bool) intersectSea_j;
					ev_bool intersectOBQ = (ev_bool) intersectOBQ_j;
					ev_real64 &latitude = *(ev_real64*) latitude_j;
					ev_real64 &longitude = *(ev_real64*) longitude_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					ev_bool &modelIntersected = *(ev_bool*) modelIntersected_j;
					ev_bool &seaIntersected = *(ev_bool*) seaIntersected_j;
					ev_bool &OBQIntersected = *(ev_bool*) OBQIntersected_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeControlProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::pickingRayIntersection(screenX, screenY, intersectModel, intersectSea, intersectOBQ, latitude, longitude, altitude, modelIntersected, seaIntersected, OBQIntersected);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->pickingRayIntersection(screenX, screenY, intersectModel, intersectSea, intersectOBQ, latitude, longitude, altitude, modelIntersected, seaIntersected, OBQIntersected);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1pickingRayIntersection_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1bool_1ev_1bool_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1bool_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool_callback", "(IIZZZJJJJJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_pickingRayIntersection_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1bool_1ev_1bool_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1bool_1ev_1bool_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint screenX_j, jint screenY_j, jboolean intersectModel_j, jboolean intersectSea_j, jboolean intersectOBQ_j, jlong latitude_j, jlong longitude_j, jlong altitude_j, jlong modelIntersected_j, jlong seaIntersected_j, jlong OBQIntersected_j)
				{
					ev_int32 screenX = (ev_int32) screenX_j;
					ev_int32 screenY = (ev_int32) screenY_j;
					ev_bool intersectModel = (ev_bool) intersectModel_j;
					ev_bool intersectSea = (ev_bool) intersectSea_j;
					ev_bool intersectOBQ = (ev_bool) intersectOBQ_j;
					ev_real64 &latitude = *(ev_real64*) latitude_j;
					ev_real64 &longitude = *(ev_real64*) longitude_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					ev_bool &modelIntersected = *(ev_bool*) modelIntersected_j;
					ev_bool &seaIntersected = *(ev_bool*) seaIntersected_j;
					ev_bool &OBQIntersected = *(ev_bool*) OBQIntersected_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::pickingRayIntersection(screenX, screenY, intersectModel, intersectSea, intersectOBQ, latitude, longitude, altitude, modelIntersected, seaIntersected, OBQIntersected);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_pickingRayIntersection_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1bool_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint screenX_j, jint screenY_j, jboolean intersectModel_j, jboolean intersectSea_j, jlong latitude_j, jlong longitude_j, jlong altitude_j, jlong modelIntersected_j, jlong seaIntersected_j)
				{
					ev_int32 screenX = (ev_int32) screenX_j;
					ev_int32 screenY = (ev_int32) screenY_j;
					ev_bool intersectModel = (ev_bool) intersectModel_j;
					ev_bool intersectSea = (ev_bool) intersectSea_j;
					ev_real64 &latitude = *(ev_real64*) latitude_j;
					ev_real64 &longitude = *(ev_real64*) longitude_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					ev_bool &modelIntersected = *(ev_bool*) modelIntersected_j;
					ev_bool &seaIntersected = *(ev_bool*) seaIntersected_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeControlProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::pickingRayIntersection(screenX, screenY, intersectModel, intersectSea, latitude, longitude, altitude, modelIntersected, seaIntersected);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->pickingRayIntersection(screenX, screenY, intersectModel, intersectSea, latitude, longitude, altitude, modelIntersected, seaIntersected);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1pickingRayIntersection_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1bool_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_callback", "(IIZZJJJJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_pickingRayIntersection_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1bool_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1bool_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint screenX_j, jint screenY_j, jboolean intersectModel_j, jboolean intersectSea_j, jlong latitude_j, jlong longitude_j, jlong altitude_j, jlong modelIntersected_j, jlong seaIntersected_j)
				{
					ev_int32 screenX = (ev_int32) screenX_j;
					ev_int32 screenY = (ev_int32) screenY_j;
					ev_bool intersectModel = (ev_bool) intersectModel_j;
					ev_bool intersectSea = (ev_bool) intersectSea_j;
					ev_real64 &latitude = *(ev_real64*) latitude_j;
					ev_real64 &longitude = *(ev_real64*) longitude_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					ev_bool &modelIntersected = *(ev_bool*) modelIntersected_j;
					ev_bool &seaIntersected = *(ev_bool*) seaIntersected_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::pickingRayIntersection(screenX, screenY, intersectModel, intersectSea, latitude, longitude, altitude, modelIntersected, seaIntersected);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_windowResized_1int_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint width_j, jint height_j)
				{
					int width = (int) width_j;
					int height = (int) height_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeControlProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::windowResized(width, height);
					}
					else
					{
						pObjectX->windowResized(width, height);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1windowResized_1int_1int(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_windowResized_int_int_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"windowResized_int_int_callback", "(II)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_windowResized_1int_1int_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint width_j, jint height_j)
				{
					int width = (int) width_j;
					int height = (int) height_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::windowResized(width, height);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_windowResized_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeControlProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::windowResized();
					}
					else
					{
						pObjectX->windowResized();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1windowResized_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_windowResized_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::windowResized();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCompassWidgetVisibleMode_1VisibleMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint visibleMode_j)
				{
					EarthView::World::Spatial3D::Controls::VisibleMode visibleMode = (EarthView::World::Spatial3D::Controls::VisibleMode) visibleMode_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setCompassWidgetVisibleMode(visibleMode);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCompassWidgetPosition_1GuiHorizontalAlignment_1GuiVerticalAlignment_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint gha_j, jint gva_j, jint x_j, jint y_j)
				{
					EarthView::World::Graphic::GuiHorizontalAlignment gha = (EarthView::World::Graphic::GuiHorizontalAlignment) gha_j;
					EarthView::World::Graphic::GuiVerticalAlignment gva = (EarthView::World::Graphic::GuiVerticalAlignment) gva_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setCompassWidgetPosition(gha, gva, x, y);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setLatitudeLonitudeTextBoxVisibleMode_1VisibleMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint visibleMode_j)
				{
					EarthView::World::Spatial3D::Controls::VisibleMode visibleMode = (EarthView::World::Spatial3D::Controls::VisibleMode) visibleMode_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setLatitudeLonitudeTextBoxVisibleMode(visibleMode);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_tiltCamera_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble tiltDegree_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					ev_real64 tiltDegree = (ev_real64) tiltDegree_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->tiltCamera(x, y, tiltDegree);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_beginCameraFadeInFadeOut_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j)
				{
					ev_real64 time = (ev_real64) time_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->beginCameraFadeInFadeOut(time);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_endCameraFadeInFadeOut_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->endCameraFadeInFadeOut();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_rotationCamera_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble rotationDegree_j, jdouble zoomRatio_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					ev_real64 rotationDegree = (ev_real64) rotationDegree_j;
					ev_real64 zoomRatio = (ev_real64) zoomRatio_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->rotationCamera(x, y, rotationDegree, zoomRatio);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCameraRatio_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble cameraRatio_j)
				{
					ev_real64 cameraRatio = (ev_real64) cameraRatio_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setCameraRatio(cameraRatio);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_eventStage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeControlProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::eventStage();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1eventStage_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_eventStage_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::eventStage();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCurrentTool_1ITool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_tool_j)
				{
					EarthView::World::Spatial::SystemUI::ITool *ref_tool = (EarthView::World::Spatial::SystemUI::ITool*) ref_tool_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeControlProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::setCurrentTool(ref_tool);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->setCurrentTool(ref_tool);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1setCurrentTool_1ITool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setCurrentTool_ITool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setCurrentTool_ITool_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCurrentTool_1ITool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_tool_j)
				{
					EarthView::World::Spatial::SystemUI::ITool *ref_tool = (EarthView::World::Spatial::SystemUI::ITool*) ref_tool_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControl::setCurrentTool(ref_tool);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getCurrentTool_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::ITool* __values1 = pObjectX->getCurrentTool();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getCurrentAtmosphere_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* __values1 = pObjectX->getCurrentAtmosphere();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_cartesion2pixel_1CVector3_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong worldPt_j, jlong px_j, jlong py_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &worldPt = *(EarthView::World::Spatial::Math::CVector3*) worldPt_j;
					ev_real64 &px = *(ev_real64*) px_j;
					ev_real64 &py = *(ev_real64*) py_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->cartesion2pixel(worldPt, px, py);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_cartesion2pixel_1CVector3_1CViewport_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong worldPt_j, jlong vp_j, jlong px_j, jlong py_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &worldPt = *(EarthView::World::Spatial::Math::CVector3*) worldPt_j;
					EarthView::World::Graphic::CViewport *vp = (EarthView::World::Graphic::CViewport*) vp_j;
					ev_real64 &px = *(ev_real64*) px_j;
					ev_real64 &py = *(ev_real64*) py_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->cartesion2pixel(worldPt, vp, px, py);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCustomStatusbarTextEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
				{
					ev_bool enabled = (ev_bool) enabled_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setCustomStatusbarTextEnabled(enabled);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCustomStatusbarText_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring text_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* text_ch = (const ev_char*)__env->GetStringUTFChars(text_j,JNI_FALSE);
					const EVString text = text_ch;
					__env->ReleaseStringUTFChars(text_j, (const char *)text_ch);
					#else
					const ev_wchar* text_ch = (const ev_wchar*)__env->GetStringChars(text_j,JNI_FALSE);
					const EVString text = text_ch;
					__env->ReleaseStringChars(text_j, (const jchar *)text_ch);
					#endif
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setCustomStatusbarText(text);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCustomStatusbarTextFontName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring fontName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* fontName_ch = (const ev_char*)__env->GetStringUTFChars(fontName_j,JNI_FALSE);
					const EVString fontName = fontName_ch;
					__env->ReleaseStringUTFChars(fontName_j, (const char *)fontName_ch);
					#else
					const ev_wchar* fontName_ch = (const ev_wchar*)__env->GetStringChars(fontName_j,JNI_FALSE);
					const EVString fontName = fontName_ch;
					__env->ReleaseStringChars(fontName_j, (const jchar *)fontName_ch);
					#endif
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setCustomStatusbarTextFontName(fontName);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCustomStatusbarTextFontColor_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
				{
					const EarthView::World::Graphic::CColourValue &color = *(EarthView::World::Graphic::CColourValue*) color_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setCustomStatusbarTextFontColor(color);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCustomStatusbarText_1EVString_1EVString_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring text_j, jstring fontName_j, jlong color_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* text_ch = (const ev_char*)__env->GetStringUTFChars(text_j,JNI_FALSE);
					const EVString text = text_ch;
					__env->ReleaseStringUTFChars(text_j, (const char *)text_ch);
					#else
					const ev_wchar* text_ch = (const ev_wchar*)__env->GetStringChars(text_j,JNI_FALSE);
					const EVString text = text_ch;
					__env->ReleaseStringChars(text_j, (const jchar *)text_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* fontName_ch = (const ev_char*)__env->GetStringUTFChars(fontName_j,JNI_FALSE);
					const EVString fontName = fontName_ch;
					__env->ReleaseStringUTFChars(fontName_j, (const char *)fontName_ch);
					#else
					const ev_wchar* fontName_ch = (const ev_wchar*)__env->GetStringChars(fontName_j,JNI_FALSE);
					const EVString fontName = fontName_ch;
					__env->ReleaseStringChars(fontName_j, (const jchar *)fontName_ch);
					#endif
					const EarthView::World::Graphic::CColourValue &color = *(EarthView::World::Graphic::CColourValue*) color_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setCustomStatusbarText(text, fontName, color);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCustomStatusbarPosition_1Real_1Real_1Real_1Real_1Real_1Real_1GuiHorizontalAlignment_1GuiVerticalAlignment(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble width_j, jdouble height_j, jdouble textOffsetX_j, jdouble textOffsetY_j, jint gha_j, jint gva_j)
				{
					Real x = (Real) x_j;
					Real y = (Real) y_j;
					Real width = (Real) width_j;
					Real height = (Real) height_j;
					Real textOffsetX = (Real) textOffsetX_j;
					Real textOffsetY = (Real) textOffsetY_j;
					EarthView::World::Graphic::GuiHorizontalAlignment gha = (EarthView::World::Graphic::GuiHorizontalAlignment) gha_j;
					EarthView::World::Graphic::GuiVerticalAlignment gva = (EarthView::World::Graphic::GuiVerticalAlignment) gva_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setCustomStatusbarPosition(x, y, width, height, textOffsetX, textOffsetY, gha, gva);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_addQueryListener_1IGlobeQueryListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
				{
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener *ref_listener = (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) ref_listener_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->addQueryListener(ref_listener);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_removeQueryListener_1IGlobeQueryListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
				{
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener *listener = (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) listener_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeQueryListener(listener);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getQueryListenerCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getQueryListenerCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getQueryListener_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener* __values1 = pObjectX->getQueryListener(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_clearQueryListeners_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->clearQueryListeners();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_fireSelectionChanged_1RaySceneQueryResult(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong result_j)
				{
					EarthView::World::Graphic::RaySceneQueryResult &result = *(EarthView::World::Graphic::RaySceneQueryResult*) result_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->fireSelectionChanged(result);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_fireSelectionChanged_1SceneQueryResult(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong result_j)
				{
					EarthView::World::Graphic::SceneQueryResult &result = *(EarthView::World::Graphic::SceneQueryResult*) result_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->fireSelectionChanged(result);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_fireSelectionChanged_1CGlobeSelection(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong result_j)
				{
					EarthView::World::Spatial3D::CGlobeSelection &result = *(EarthView::World::Spatial3D::CGlobeSelection*) result_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->fireSelectionChanged(result);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_fireSelectionChanged_1RaySceneQueryResult_1CGlobeSelection(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rayResult_j, jlong clamplayerResult_j)
				{
					EarthView::World::Graphic::RaySceneQueryResult &rayResult = *(EarthView::World::Graphic::RaySceneQueryResult*) rayResult_j;
					EarthView::World::Spatial3D::CGlobeSelection &clamplayerResult = *(EarthView::World::Spatial3D::CGlobeSelection*) clamplayerResult_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->fireSelectionChanged(rayResult, clamplayerResult);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getGlobeSelection_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					EarthView::World::Spatial3D::CGlobeSelection __values1 = pObjectX->getGlobeSelection();
					EarthView::World::Spatial3D::CGlobeSelection *returnvalues = new EarthView::World::Spatial3D::CGlobeSelection(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_fireSelectedObjectMoved_1RaySceneQueryResultEntry_1CMatrix4_1MouseOpType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong entry_j, jlong newMatrix_j, jint type_j)
				{
					EarthView::World::Graphic::RaySceneQueryResultEntry &entry = *(EarthView::World::Graphic::RaySceneQueryResultEntry*) entry_j;
					const EarthView::World::Spatial::Math::CMatrix4 &newMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) newMatrix_j;
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::MouseOpType type = (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::MouseOpType) type_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->fireSelectedObjectMoved(entry, newMatrix, type);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_fireDeleteKeyPressed_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->fireDeleteKeyPressed();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setGridVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setGridVisible(visible);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getGridVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->getGridVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setSeaType_1SeaType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint seaType_j)
				{
					EarthView::World::Spatial3D::SeaType seaType = (EarthView::World::Spatial3D::SeaType) seaType_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setSeaType(seaType);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getSeaType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					EarthView::World::Spatial3D::SeaType __values1 = pObjectX->getSeaType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setSeaVertexNum_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint vertexNum_j)
				{
					ev_int32 vertexNum = (ev_int32) vertexNum_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setSeaVertexNum(vertexNum);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getSeaVertexNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getSeaVertexNum();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_refreshSeaQuadMapType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->refreshSeaQuadMapType();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getWidgetManager_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CWidgetManager* __values1 = pObjectX->getWidgetManager();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getModelLayerEditor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					EarthView::World::Spatial3D::CLayer3DEditor* __values1 = pObjectX->getModelLayerEditor();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getEffectLayerEditor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					EarthView::World::Spatial3D::CLayer3DEditor* __values1 = pObjectX->getEffectLayerEditor();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_endEditing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->endEditing();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_clearLayerSelection_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->clearLayerSelection();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setIsFlying_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flying_j)
				{
					const ev_bool flying = (ev_bool) flying_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setIsFlying(flying);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getIsFlying_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->getIsFlying();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getCompositorEnabled_1Compositor3DType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial3D::Compositor3DType type = (EarthView::World::Spatial3D::Compositor3DType) type_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->getCompositorEnabled(type);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCompositorEnabled_1Compositor3DType_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j, jboolean enabled_j)
				{
					EarthView::World::Spatial3D::Compositor3DType type = (EarthView::World::Spatial3D::Compositor3DType) type_j;
					ev_bool enabled = (ev_bool) enabled_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->setCompositorEnabled(type, enabled);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getNumEnabledCompositors_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getNumEnabledCompositors();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getEnabledCompositor_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					EarthView::World::Spatial3D::Compositor3DType __values1 = pObjectX->getEnabledCompositor(index);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_locate2_1CVector3_1CDegree_1CDegree_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jlong tilt_j, jlong heading_j, jdouble distance_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &target = *(EarthView::World::Spatial::Math::CVector3*) target_j;
					const EarthView::World::Spatial::Math::CDegree &tilt = *(EarthView::World::Spatial::Math::CDegree*) tilt_j;
					const EarthView::World::Spatial::Math::CDegree &heading = *(EarthView::World::Spatial::Math::CDegree*) heading_j;
					ev_real64 distance = (ev_real64) distance_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->locate2(target, tilt, heading, distance);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_disableAllCompositors_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->disableAllCompositors();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCameraMaxLimitAltitude_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble maxAltitude_j)
				{
					ev_real64 maxAltitude = (ev_real64) maxAltitude_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setCameraMaxLimitAltitude(maxAltitude);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getCameraMaxLimitAltitude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getCameraMaxLimitAltitude();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setGlobeLockCameraHandlerEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setGlobeLockCameraHandlerEnable(enable);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getGlobeLockCameraHandlerEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->getGlobeLockCameraHandlerEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setGlobeCamUnderGroundHandlerEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setGlobeCamUnderGroundHandlerEnable(enable);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getGlobeCamUnderGroundHandlerEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->getGlobeCamUnderGroundHandlerEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setGoogleCameraManipulatorEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setGoogleCameraManipulatorEnabled(enable);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getGoogleCameraManipulatorEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->getGoogleCameraManipulatorEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setInertialPanEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setInertialPanEnabled(enable);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setUnderGroundCameraMoveAtPlane_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setUnderGroundCameraMoveAtPlane(enable);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getUnderGroundCameraMoveAtPlane_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->getUnderGroundCameraMoveAtPlane();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setShowLayerInfo_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean show_j)
				{
					ev_bool show = (ev_bool) show_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setShowLayerInfo(show);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setAutoCalculateCameraFov_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setAutoCalculateCameraFov(enable);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getAutoCalculateCameraFov_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->getAutoCalculateCameraFov();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_resetCamera_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->resetCamera();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_setCameraUpToNorth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					pObjectX->setCameraUpToNorth();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getGrid_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					EarthView::World::Spatial3D::CGlobeGrid* __values1 = pObjectX->getGrid();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_get_1winId_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->winId);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_set_1winId_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*)pObjXXXX;
					pObjectX->winId = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_getStringInterface_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControl *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControl*) pObjXXXX;
					const EarthView::World::Core::CStringInterface& __values1 = pObjectX->getStringInterface();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1mouseDoubleButtonPress_1ev_1int32_1ev_1int32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1mouseButtonRelease_1ev_1int32_1ev_1int32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1mouseMove_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1mouseWheel_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1addViewListener_1IViewListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1getViewListenerCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1getViewListener_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1existViewListener_1IViewListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1removeViewListener_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1removeViewListener_1IViewListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControl_register_1clearViewListeners_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlProxy *pObjectX = (JCGlobeControlProxy*) pObjXXXX;
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
