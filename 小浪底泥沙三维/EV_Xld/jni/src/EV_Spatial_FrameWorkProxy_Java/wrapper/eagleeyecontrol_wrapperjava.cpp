/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/eagleeyecontrol.h"
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
			namespace Display
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
			namespace Geometry
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				class JCEagleEyeControlAgentProxy : public EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent
				{
				 private:
					EarthView::World::Core::ev_string m_getEagleEyeCanvas_void_callback;
					EarthView::World::Core::ev_string m_onRepaint_void_callback;
				public:
					JCEagleEyeControlAgentProxy(EarthView::World::Core::CNameValuePairList *pList) : CEagleEyeControlAgent(pList)
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
					void register_getEagleEyeCanvas_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getEagleEyeCanvas_void_callback = __method;
					}
					void register_onRepaint_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onRepaint_void_callback = __method;
					}
					virtual EarthView::World::Display::IPaintDevice* getEagleEyeCanvas() const
					{
						if (this->_gRef != NULL && this->m_getEagleEyeCanvas_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getEagleEyeCanvas_void_callback");
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
							return this->CEagleEyeControlAgent::getEagleEyeCanvas();
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
							return this->CEagleEyeControlAgent::onRepaint();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCEagleEyeControlAgentProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControlAgent_getEagleEyeCanvas_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEagleEyeControlAgentProxy))
					{
						EarthView::World::Display::IPaintDevice* __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent::getEagleEyeCanvas();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Display::IPaintDevice* __values1 = pObjectX->getEagleEyeCanvas();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControlAgent_register_1getEagleEyeCanvas_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEagleEyeControlAgentProxy *pObjectX = (JCEagleEyeControlAgentProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getEagleEyeCanvas_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getEagleEyeCanvas_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControlAgent_getEagleEyeCanvas_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent*) pObjXXXX;
					EarthView::World::Display::IPaintDevice* __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent::getEagleEyeCanvas();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControlAgent_onRepaint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEagleEyeControlAgentProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent::onRepaint();
					}
					else
					{
						pObjectX->onRepaint();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControlAgent_register_1onRepaint_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEagleEyeControlAgentProxy *pObjectX = (JCEagleEyeControlAgentProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControlAgent_onRepaint_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent::onRepaint();
				}
				class JIEagleEyeControlListenerProxy : public EarthView::World::Spatial2D::Controls::IEagleEyeControlListener
				{
				 private:
					EarthView::World::Core::ev_string m_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_callback;
					EarthView::World::Core::ev_string m_onKeyDown_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onKeyUp_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onResize_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onBeforeRefresh_ISpatialDisplay_IEnvelope_callback;
					EarthView::World::Core::ev_string m_onAfterRefresh_ISpatialDisplay_IEnvelope_callback;
					EarthView::World::Core::ev_string m_onBeforeAddLayer_ILayer_callback;
					EarthView::World::Core::ev_string m_onAfterAddLayer_ILayer_callback;
					EarthView::World::Core::ev_string m_onBeforeRemoveLayer_ILayer_callback;
					EarthView::World::Core::ev_string m_onAfterRemoveLayer_ILayer_callback;
					EarthView::World::Core::ev_string m_onBeforeMoveLayer_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onAfterMoveLayer_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onMapSelectionChanged_void_callback;
					EarthView::World::Core::ev_string m_onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType_callback;
				public:
					JIEagleEyeControlListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : IEagleEyeControlListener(pList)
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
					void register_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback = __method;
					}
					void register_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback = __method;
					}
					void register_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback = __method;
					}
					void register_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback = __method;
					}
					void register_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_callback = __method;
					}
					void register_onKeyDown_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onKeyDown_ev_int32_ev_int32_callback = __method;
					}
					void register_onKeyUp_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onKeyUp_ev_int32_ev_int32_callback = __method;
					}
					void register_onResize_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onResize_ev_int32_ev_int32_callback = __method;
					}
					void register_onBeforeRefresh_ISpatialDisplay_IEnvelope_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onBeforeRefresh_ISpatialDisplay_IEnvelope_callback = __method;
					}
					void register_onAfterRefresh_ISpatialDisplay_IEnvelope_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onAfterRefresh_ISpatialDisplay_IEnvelope_callback = __method;
					}
					void register_onBeforeAddLayer_ILayer_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onBeforeAddLayer_ILayer_callback = __method;
					}
					void register_onAfterAddLayer_ILayer_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onAfterAddLayer_ILayer_callback = __method;
					}
					void register_onBeforeRemoveLayer_ILayer_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onBeforeRemoveLayer_ILayer_callback = __method;
					}
					void register_onAfterRemoveLayer_ILayer_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onAfterRemoveLayer_ILayer_callback = __method;
					}
					void register_onBeforeMoveLayer_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onBeforeMoveLayer_ev_int32_ev_int32_callback = __method;
					}
					void register_onAfterMoveLayer_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onAfterMoveLayer_ev_int32_ev_int32_callback = __method;
					}
					void register_onMapSelectionChanged_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onMapSelectionChanged_void_callback = __method;
					}
					void register_onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType_callback = __method;
					}
					virtual ev_bool onMouseDown(ev_int32 button, ev_int32 shift, ev_int32 x, ev_int32 y, ev_real64 geoX, ev_real64 geoY)
					{
						if (this->_gRef != NULL && this->m_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jint button_j = (jint) button;
							jint shift_j = (jint) shift;
							jint x_j = (jint) x;
							jint y_j = (jint) y;
							jdouble geoX_j = (jdouble) geoX;
							jdouble geoY_j = (jdouble) geoY;
							jmethodID __method = __gr->getMethod("onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , button_j, shift_j, x_j, y_j, geoX_j, geoY_j);
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
							return this->IEagleEyeControlListener::onMouseDown(button, shift, x, y, geoX, geoY);
						}
					}
					virtual ev_bool onMouseUp(ev_int32 button, ev_int32 shift, ev_int32 x, ev_int32 y, ev_real64 geoX, ev_real64 geoY)
					{
						if (this->_gRef != NULL && this->m_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jint button_j = (jint) button;
							jint shift_j = (jint) shift;
							jint x_j = (jint) x;
							jint y_j = (jint) y;
							jdouble geoX_j = (jdouble) geoX;
							jdouble geoY_j = (jdouble) geoY;
							jmethodID __method = __gr->getMethod("onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , button_j, shift_j, x_j, y_j, geoX_j, geoY_j);
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
							return this->IEagleEyeControlListener::onMouseUp(button, shift, x, y, geoX, geoY);
						}
					}
					virtual ev_bool onMouseMove(ev_int32 button, ev_int32 shift, ev_int32 x, ev_int32 y, ev_real64 geoX, ev_real64 geoY)
					{
						if (this->_gRef != NULL && this->m_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jint button_j = (jint) button;
							jint shift_j = (jint) shift;
							jint x_j = (jint) x;
							jint y_j = (jint) y;
							jdouble geoX_j = (jdouble) geoX;
							jdouble geoY_j = (jdouble) geoY;
							jmethodID __method = __gr->getMethod("onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , button_j, shift_j, x_j, y_j, geoX_j, geoY_j);
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
							return this->IEagleEyeControlListener::onMouseMove(button, shift, x, y, geoX, geoY);
						}
					}
					virtual ev_bool onDoubleClick(ev_int32 button, ev_int32 shift, ev_int32 x, ev_int32 y, ev_real64 geoX, ev_real64 geoY)
					{
						if (this->_gRef != NULL && this->m_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jint button_j = (jint) button;
							jint shift_j = (jint) shift;
							jint x_j = (jint) x;
							jint y_j = (jint) y;
							jdouble geoX_j = (jdouble) geoX;
							jdouble geoY_j = (jdouble) geoY;
							jmethodID __method = __gr->getMethod("onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , button_j, shift_j, x_j, y_j, geoX_j, geoY_j);
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
							return this->IEagleEyeControlListener::onDoubleClick(button, shift, x, y, geoX, geoY);
						}
					}
					virtual ev_bool onMouseWheel(ev_int32 delta, ev_int32 x, ev_int32 y, ev_real64 geoX, ev_real64 geoY, ev_int32 flag)
					{
						if (this->_gRef != NULL && this->m_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_callback != "" && this->isCustomExtend())
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
							jint delta_j = (jint) delta;
							jint x_j = (jint) x;
							jint y_j = (jint) y;
							jdouble geoX_j = (jdouble) geoX;
							jdouble geoY_j = (jdouble) geoY;
							jint flag_j = (jint) flag;
							jmethodID __method = __gr->getMethod("onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , delta_j, x_j, y_j, geoX_j, geoY_j, flag_j);
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
							return this->IEagleEyeControlListener::onMouseWheel(delta, x, y, geoX, geoY, flag);
						}
					}
					virtual ev_bool onKeyDown(ev_int32 keyCode, ev_int32 shift)
					{
						if (this->_gRef != NULL && this->m_onKeyDown_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
							jint keyCode_j = (jint) keyCode;
							jint shift_j = (jint) shift;
							jmethodID __method = __gr->getMethod("onKeyDown_ev_int32_ev_int32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , keyCode_j, shift_j);
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
							return this->IEagleEyeControlListener::onKeyDown(keyCode, shift);
						}
					}
					virtual ev_bool onKeyUp(ev_int32 keyCode, ev_int32 shift)
					{
						if (this->_gRef != NULL && this->m_onKeyUp_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
							jint keyCode_j = (jint) keyCode;
							jint shift_j = (jint) shift;
							jmethodID __method = __gr->getMethod("onKeyUp_ev_int32_ev_int32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , keyCode_j, shift_j);
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
							return this->IEagleEyeControlListener::onKeyUp(keyCode, shift);
						}
					}
					virtual ev_bool onResize(ev_int32 width, ev_int32 height)
					{
						if (this->_gRef != NULL && this->m_onResize_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onResize_ev_int32_ev_int32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , width_j, height_j);
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
							return this->IEagleEyeControlListener::onResize(width, height);
						}
					}
					virtual void onBeforeRefresh(EarthView::World::Spatial::Display::ISpatialDisplay* display, const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope)
					{
						if (this->_gRef != NULL && this->m_onBeforeRefresh_ISpatialDisplay_IEnvelope_callback != "" && this->isCustomExtend())
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
							jlong display_j = (jlong) display;
							jlong viewportEnvelope_j = (jlong) viewportEnvelope;
							jmethodID __method = __gr->getMethod("onBeforeRefresh_ISpatialDisplay_IEnvelope_callback");
							__env->CallVoidMethod(__obj, __method , display_j, viewportEnvelope_j);
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
							return this->IEagleEyeControlListener::onBeforeRefresh(display, viewportEnvelope);
						}
					}
					virtual void onAfterRefresh(EarthView::World::Spatial::Display::ISpatialDisplay* display, const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope)
					{
						if (this->_gRef != NULL && this->m_onAfterRefresh_ISpatialDisplay_IEnvelope_callback != "" && this->isCustomExtend())
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
							jlong display_j = (jlong) display;
							jlong viewportEnvelope_j = (jlong) viewportEnvelope;
							jmethodID __method = __gr->getMethod("onAfterRefresh_ISpatialDisplay_IEnvelope_callback");
							__env->CallVoidMethod(__obj, __method , display_j, viewportEnvelope_j);
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
							return this->IEagleEyeControlListener::onAfterRefresh(display, viewportEnvelope);
						}
					}
					virtual void onBeforeAddLayer(EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if (this->_gRef != NULL && this->m_onBeforeAddLayer_ILayer_callback != "" && this->isCustomExtend())
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
							jlong layer_j = (jlong) layer;
							jmethodID __method = __gr->getMethod("onBeforeAddLayer_ILayer_callback");
							__env->CallVoidMethod(__obj, __method , layer_j);
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
							return this->IEagleEyeControlListener::onBeforeAddLayer(layer);
						}
					}
					virtual void onAfterAddLayer(EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if (this->_gRef != NULL && this->m_onAfterAddLayer_ILayer_callback != "" && this->isCustomExtend())
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
							jlong layer_j = (jlong) layer;
							jmethodID __method = __gr->getMethod("onAfterAddLayer_ILayer_callback");
							__env->CallVoidMethod(__obj, __method , layer_j);
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
							return this->IEagleEyeControlListener::onAfterAddLayer(layer);
						}
					}
					virtual void onBeforeRemoveLayer(EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if (this->_gRef != NULL && this->m_onBeforeRemoveLayer_ILayer_callback != "" && this->isCustomExtend())
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
							jlong layer_j = (jlong) layer;
							jmethodID __method = __gr->getMethod("onBeforeRemoveLayer_ILayer_callback");
							__env->CallVoidMethod(__obj, __method , layer_j);
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
							return this->IEagleEyeControlListener::onBeforeRemoveLayer(layer);
						}
					}
					virtual void onAfterRemoveLayer(EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if (this->_gRef != NULL && this->m_onAfterRemoveLayer_ILayer_callback != "" && this->isCustomExtend())
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
							jlong layer_j = (jlong) layer;
							jmethodID __method = __gr->getMethod("onAfterRemoveLayer_ILayer_callback");
							__env->CallVoidMethod(__obj, __method , layer_j);
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
							return this->IEagleEyeControlListener::onAfterRemoveLayer(layer);
						}
					}
					virtual void onBeforeMoveLayer(ev_int32 oldIndex, ev_int32 newIndex)
					{
						if (this->_gRef != NULL && this->m_onBeforeMoveLayer_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
							jint oldIndex_j = (jint) oldIndex;
							jint newIndex_j = (jint) newIndex;
							jmethodID __method = __gr->getMethod("onBeforeMoveLayer_ev_int32_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , oldIndex_j, newIndex_j);
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
							return this->IEagleEyeControlListener::onBeforeMoveLayer(oldIndex, newIndex);
						}
					}
					virtual void onAfterMoveLayer(ev_int32 oldIndex, ev_int32 newIndex)
					{
						if (this->_gRef != NULL && this->m_onAfterMoveLayer_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
							jint oldIndex_j = (jint) oldIndex;
							jint newIndex_j = (jint) newIndex;
							jmethodID __method = __gr->getMethod("onAfterMoveLayer_ev_int32_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , oldIndex_j, newIndex_j);
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
							return this->IEagleEyeControlListener::onAfterMoveLayer(oldIndex, newIndex);
						}
					}
					virtual void onMapSelectionChanged()
					{
						if (this->_gRef != NULL && this->m_onMapSelectionChanged_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onMapSelectionChanged_void_callback");
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
							return this->IEagleEyeControlListener::onMapSelectionChanged();
						}
					}
					virtual void onMapDraw(EarthView::World::Spatial::Display::ISpatialDisplay* display, EarthView::World::Spatial::Atlas::ILayer* layer, EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if (this->_gRef != NULL && this->m_onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType_callback != "" && this->isCustomExtend())
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
							jlong display_j = (jlong) display;
							jlong layer_j = (jlong) layer;
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType_callback");
							__env->CallVoidMethod(__obj, __method , display_j, layer_j, type_j);
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
							return this->IEagleEyeControlListener::onMapDraw(display, layer, type);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIEagleEyeControlListenerProxy);
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_onMouseDown_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j, jdouble geoX_j, jdouble geoY_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_real64 geoX = (ev_real64) geoX_j;
					ev_real64 geoY = (ev_real64) geoY_j;
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIEagleEyeControlListenerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onMouseDown(button, shift, x, y, geoX, geoY);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onMouseDown(button, shift, x, y, geoX, geoY);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_register_1onMouseDown_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIEagleEyeControlListenerProxy *pObjectX = (JIEagleEyeControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback", "(IIIIDD)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_onMouseDown_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j, jdouble geoX_j, jdouble geoY_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_real64 geoX = (ev_real64) geoX_j;
					ev_real64 geoY = (ev_real64) geoY_j;
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onMouseDown(button, shift, x, y, geoX, geoY);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_onMouseUp_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j, jdouble geoX_j, jdouble geoY_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_real64 geoX = (ev_real64) geoX_j;
					ev_real64 geoY = (ev_real64) geoY_j;
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIEagleEyeControlListenerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onMouseUp(button, shift, x, y, geoX, geoY);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onMouseUp(button, shift, x, y, geoX, geoY);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_register_1onMouseUp_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIEagleEyeControlListenerProxy *pObjectX = (JIEagleEyeControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback", "(IIIIDD)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_onMouseUp_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j, jdouble geoX_j, jdouble geoY_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_real64 geoX = (ev_real64) geoX_j;
					ev_real64 geoY = (ev_real64) geoY_j;
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onMouseUp(button, shift, x, y, geoX, geoY);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_onMouseMove_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j, jdouble geoX_j, jdouble geoY_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_real64 geoX = (ev_real64) geoX_j;
					ev_real64 geoY = (ev_real64) geoY_j;
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIEagleEyeControlListenerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onMouseMove(button, shift, x, y, geoX, geoY);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onMouseMove(button, shift, x, y, geoX, geoY);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_register_1onMouseMove_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIEagleEyeControlListenerProxy *pObjectX = (JIEagleEyeControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback", "(IIIIDD)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_onMouseMove_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j, jdouble geoX_j, jdouble geoY_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_real64 geoX = (ev_real64) geoX_j;
					ev_real64 geoY = (ev_real64) geoY_j;
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onMouseMove(button, shift, x, y, geoX, geoY);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_onDoubleClick_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j, jdouble geoX_j, jdouble geoY_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_real64 geoX = (ev_real64) geoX_j;
					ev_real64 geoY = (ev_real64) geoY_j;
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIEagleEyeControlListenerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onDoubleClick(button, shift, x, y, geoX, geoY);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onDoubleClick(button, shift, x, y, geoX, geoY);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_register_1onDoubleClick_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIEagleEyeControlListenerProxy *pObjectX = (JIEagleEyeControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback", "(IIIIDD)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_onDoubleClick_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j, jdouble geoX_j, jdouble geoY_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_real64 geoX = (ev_real64) geoX_j;
					ev_real64 geoY = (ev_real64) geoY_j;
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onDoubleClick(button, shift, x, y, geoX, geoY);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_onMouseWheel_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint delta_j, jint x_j, jint y_j, jdouble geoX_j, jdouble geoY_j, jint flag_j)
				{
					ev_int32 delta = (ev_int32) delta_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_real64 geoX = (ev_real64) geoX_j;
					ev_real64 geoY = (ev_real64) geoY_j;
					ev_int32 flag = (ev_int32) flag_j;
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIEagleEyeControlListenerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onMouseWheel(delta, x, y, geoX, geoY, flag);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onMouseWheel(delta, x, y, geoX, geoY, flag);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_register_1onMouseWheel_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIEagleEyeControlListenerProxy *pObjectX = (JIEagleEyeControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_callback", "(IIIDDI)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_onMouseWheel_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint delta_j, jint x_j, jint y_j, jdouble geoX_j, jdouble geoY_j, jint flag_j)
				{
					ev_int32 delta = (ev_int32) delta_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_real64 geoX = (ev_real64) geoX_j;
					ev_real64 geoY = (ev_real64) geoY_j;
					ev_int32 flag = (ev_int32) flag_j;
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onMouseWheel(delta, x, y, geoX, geoY, flag);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_onKeyDown_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint keyCode_j, jint shift_j)
				{
					ev_int32 keyCode = (ev_int32) keyCode_j;
					ev_int32 shift = (ev_int32) shift_j;
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIEagleEyeControlListenerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onKeyDown(keyCode, shift);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onKeyDown(keyCode, shift);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_register_1onKeyDown_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIEagleEyeControlListenerProxy *pObjectX = (JIEagleEyeControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onKeyDown_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onKeyDown_ev_int32_ev_int32_callback", "(II)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_onKeyDown_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint keyCode_j, jint shift_j)
				{
					ev_int32 keyCode = (ev_int32) keyCode_j;
					ev_int32 shift = (ev_int32) shift_j;
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onKeyDown(keyCode, shift);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_onKeyUp_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint keyCode_j, jint shift_j)
				{
					ev_int32 keyCode = (ev_int32) keyCode_j;
					ev_int32 shift = (ev_int32) shift_j;
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIEagleEyeControlListenerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onKeyUp(keyCode, shift);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onKeyUp(keyCode, shift);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_register_1onKeyUp_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIEagleEyeControlListenerProxy *pObjectX = (JIEagleEyeControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onKeyUp_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onKeyUp_ev_int32_ev_int32_callback", "(II)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_onKeyUp_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint keyCode_j, jint shift_j)
				{
					ev_int32 keyCode = (ev_int32) keyCode_j;
					ev_int32 shift = (ev_int32) shift_j;
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onKeyUp(keyCode, shift);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_onResize_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint width_j, jint height_j)
				{
					ev_int32 width = (ev_int32) width_j;
					ev_int32 height = (ev_int32) height_j;
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIEagleEyeControlListenerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onResize(width, height);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onResize(width, height);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_register_1onResize_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIEagleEyeControlListenerProxy *pObjectX = (JIEagleEyeControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onResize_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onResize_ev_int32_ev_int32_callback", "(II)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_onResize_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint width_j, jint height_j)
				{
					ev_int32 width = (ev_int32) width_j;
					ev_int32 height = (ev_int32) height_j;
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onResize(width, height);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_onBeforeRefresh_1ISpatialDisplay_1IEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jlong viewportEnvelope_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					const EarthView::World::Spatial::Geometry::IEnvelope *viewportEnvelope = (const EarthView::World::Spatial::Geometry::IEnvelope*) viewportEnvelope_j;
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIEagleEyeControlListenerProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onBeforeRefresh(display, viewportEnvelope);
					}
					else
					{
						pObjectX->onBeforeRefresh(display, viewportEnvelope);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_register_1onBeforeRefresh_1ISpatialDisplay_1IEnvelope(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIEagleEyeControlListenerProxy *pObjectX = (JIEagleEyeControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onBeforeRefresh_ISpatialDisplay_IEnvelope_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onBeforeRefresh_ISpatialDisplay_IEnvelope_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_onBeforeRefresh_1ISpatialDisplay_1IEnvelope_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jlong viewportEnvelope_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					const EarthView::World::Spatial::Geometry::IEnvelope *viewportEnvelope = (const EarthView::World::Spatial::Geometry::IEnvelope*) viewportEnvelope_j;
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onBeforeRefresh(display, viewportEnvelope);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_onAfterRefresh_1ISpatialDisplay_1IEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jlong viewportEnvelope_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					const EarthView::World::Spatial::Geometry::IEnvelope *viewportEnvelope = (const EarthView::World::Spatial::Geometry::IEnvelope*) viewportEnvelope_j;
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIEagleEyeControlListenerProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onAfterRefresh(display, viewportEnvelope);
					}
					else
					{
						pObjectX->onAfterRefresh(display, viewportEnvelope);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_register_1onAfterRefresh_1ISpatialDisplay_1IEnvelope(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIEagleEyeControlListenerProxy *pObjectX = (JIEagleEyeControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onAfterRefresh_ISpatialDisplay_IEnvelope_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onAfterRefresh_ISpatialDisplay_IEnvelope_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_onAfterRefresh_1ISpatialDisplay_1IEnvelope_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jlong viewportEnvelope_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					const EarthView::World::Spatial::Geometry::IEnvelope *viewportEnvelope = (const EarthView::World::Spatial::Geometry::IEnvelope*) viewportEnvelope_j;
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::IEagleEyeControlListener::onAfterRefresh(display, viewportEnvelope);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_register_1onBeforeAddLayer_1ILayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIEagleEyeControlListenerProxy *pObjectX = (JIEagleEyeControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onBeforeAddLayer_ILayer_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onBeforeAddLayer_ILayer_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_register_1onAfterAddLayer_1ILayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIEagleEyeControlListenerProxy *pObjectX = (JIEagleEyeControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onAfterAddLayer_ILayer_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onAfterAddLayer_ILayer_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_register_1onBeforeRemoveLayer_1ILayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIEagleEyeControlListenerProxy *pObjectX = (JIEagleEyeControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onBeforeRemoveLayer_ILayer_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onBeforeRemoveLayer_ILayer_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_register_1onAfterRemoveLayer_1ILayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIEagleEyeControlListenerProxy *pObjectX = (JIEagleEyeControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onAfterRemoveLayer_ILayer_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onAfterRemoveLayer_ILayer_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_register_1onBeforeMoveLayer_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIEagleEyeControlListenerProxy *pObjectX = (JIEagleEyeControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onBeforeMoveLayer_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onBeforeMoveLayer_ev_int32_ev_int32_callback", "(II)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_register_1onAfterMoveLayer_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIEagleEyeControlListenerProxy *pObjectX = (JIEagleEyeControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onAfterMoveLayer_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onAfterMoveLayer_ev_int32_ev_int32_callback", "(II)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_register_1onMapSelectionChanged_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIEagleEyeControlListenerProxy *pObjectX = (JIEagleEyeControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onMapSelectionChanged_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onMapSelectionChanged_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Ieagleeyecontrollistener_register_1onMapDraw_1ISpatialDisplay_1ILayer_1EVVectorLayerRendererType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIEagleEyeControlListenerProxy *pObjectX = (JIEagleEyeControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType_callback", "(JJI)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				class JCEagleEyeControlProxy : public EarthView::World::Spatial2D::Controls::CEagleEyeControl
				{
				 private:
					EarthView::World::Core::ev_string m_onRepaint_void_callback;
				public:
					JCEagleEyeControlProxy(EarthView::World::Core::CNameValuePairList *pList) : CEagleEyeControl(pList)
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
					C_DISABLE_COPY(JCEagleEyeControlProxy)
				public:
					void register_onRepaint_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onRepaint_void_callback = __method;
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
							return this->CEagleEyeControl::onRepaint();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCEagleEyeControlProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_getEagleEyeCanvas_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					EarthView::World::Display::IPaintDevice* __values1 = pObjectX->getEagleEyeCanvas();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_setUseDefaultMap_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bUse_j)
				{
					ev_bool bUse = (ev_bool) bUse_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->setUseDefaultMap(bUse);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_isUseDefaultMap_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->isUseDefaultMap();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_addSpatialControl_1ISpatialControl_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pControl_j, jboolean bAddMap_j)
				{
					EarthView::World::Spatial::Atlas::ISpatialControl *pControl = (EarthView::World::Spatial::Atlas::ISpatialControl*) pControl_j;
					ev_bool bAddMap = (ev_bool) bAddMap_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->addSpatialControl(pControl, bAddMap);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_removeSpatialControl_1ISpatialControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pControl_j)
				{
					EarthView::World::Spatial::Atlas::ISpatialControl *pControl = (EarthView::World::Spatial::Atlas::ISpatialControl*) pControl_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->removeSpatialControl(pControl);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_getSpatialControl_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nIndex_j)
				{
					ev_int32 nIndex = (ev_int32) nIndex_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ISpatialControl* __values1 = pObjectX->getSpatialControl(nIndex);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_isExist_1ISpatialControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pControl_j)
				{
					EarthView::World::Spatial::Atlas::ISpatialControl *pControl = (EarthView::World::Spatial::Atlas::ISpatialControl*) pControl_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->isExist(pControl);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_setActiveControl_1ISpatialControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pControl_j)
				{
					EarthView::World::Spatial::Atlas::ISpatialControl *pControl = (EarthView::World::Spatial::Atlas::ISpatialControl*) pControl_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->setActiveControl(pControl);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_getActiveControl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ISpatialControl* __values1 = pObjectX->getActiveControl();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_isActiveControl_1ISpatialControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pControl_j)
				{
					EarthView::World::Spatial::Atlas::ISpatialControl *pControl = (EarthView::World::Spatial::Atlas::ISpatialControl*) pControl_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->isActiveControl(pControl);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_setAllControlUnActive_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->setAllControlUnActive();
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_getSpatialControlCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getSpatialControlCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_addMap_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMap_j)
				{
					EarthView::World::Spatial::Atlas::IMap *pMap = (EarthView::World::Spatial::Atlas::IMap*) pMap_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->addMap(pMap);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_removeMap_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMap_j)
				{
					EarthView::World::Spatial::Atlas::IMap *pMap = (EarthView::World::Spatial::Atlas::IMap*) pMap_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->removeMap(pMap);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_setMapCacheDirty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->setMapCacheDirty();
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_getMapCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getMapCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_getMap_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nIndex_j)
				{
					ev_int32 nIndex = (ev_int32) nIndex_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->getMap(nIndex);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_isExist_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMap_j)
				{
					EarthView::World::Spatial::Atlas::IMap *pMap = (EarthView::World::Spatial::Atlas::IMap*) pMap_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->isExist(pMap);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_addRectangle_1CPoint_1CPoint_1CPoint_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pLeftTop_j, jlong pRightTop_j, jlong pRightBottom_j, jlong pSymbol_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint *pLeftTop = (const EarthView::World::Spatial::Geometry::CPoint*) pLeftTop_j;
					const EarthView::World::Spatial::Geometry::CPoint *pRightTop = (const EarthView::World::Spatial::Geometry::CPoint*) pRightTop_j;
					const EarthView::World::Spatial::Geometry::CPoint *pRightBottom = (const EarthView::World::Spatial::Geometry::CPoint*) pRightBottom_j;
					const EarthView::World::Spatial::Display::ISymbol *pSymbol = (const EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->addRectangle(pLeftTop, pRightTop, pRightBottom, pSymbol);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_addGeometry_1IGeometry_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pGeometry_j, jlong pSymbol_j)
				{
					const EarthView::World::Spatial::Geometry::IGeometry *pGeometry = (const EarthView::World::Spatial::Geometry::IGeometry*) pGeometry_j;
					const EarthView::World::Spatial::Display::ISymbol *pSymbol = (const EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->addGeometry(pGeometry, pSymbol);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_clearGeometry_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->clearGeometry();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_onRepaint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEagleEyeControlProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::CEagleEyeControl::onRepaint();
					}
					else
					{
						pObjectX->onRepaint();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_register_1onRepaint_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEagleEyeControlProxy *pObjectX = (JCEagleEyeControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_onRepaint_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::CEagleEyeControl::onRepaint();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_refresh_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->refresh();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_setUnActiveRectSymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
				{
					EarthView::World::Spatial::Display::ISymbol *pSymbol = (EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->setUnActiveRectSymbol(pSymbol);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_getUnActiveRectSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getUnActiveRectSymbol();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_getBackground_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->getBackground();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_setBackground_1IColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong background_j)
				{
					const EarthView::World::Spatial::Display::IColor *background = (const EarthView::World::Spatial::Display::IColor*) background_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->setBackground(background);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_getExtent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->getExtent();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_setExtent_1IEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pEnvelope_j)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope *pEnvelope = (const EarthView::World::Spatial::Geometry::IEnvelope*) pEnvelope_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->setExtent(pEnvelope);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_setActiveRectSymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
				{
					EarthView::World::Spatial::Display::ISymbol *pSymbol = (EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->setActiveRectSymbol(pSymbol);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_getActiveRectSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getActiveRectSymbol();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_goTo_1IEnvelope_1ISpatialControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pEvn_j, jlong pCtrl_j)
				{
					EarthView::World::Spatial::Geometry::IEnvelope *pEvn = (EarthView::World::Spatial::Geometry::IEnvelope*) pEvn_j;
					EarthView::World::Spatial::Atlas::ISpatialControl *pCtrl = (EarthView::World::Spatial::Atlas::ISpatialControl*) pCtrl_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->goTo(pEvn, pCtrl);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_setCenter_1ev_1real64_1ev_1real64_1ISpatialControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dPX_j, jdouble dPY_j, jlong pCtrl_j)
				{
					ev_real64 dPX = (ev_real64) dPX_j;
					ev_real64 dPY = (ev_real64) dPY_j;
					EarthView::World::Spatial::Atlas::ISpatialControl *pCtrl = (EarthView::World::Spatial::Atlas::ISpatialControl*) pCtrl_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->setCenter(dPX, dPY, pCtrl);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_getSpatialControlRectangle_1ISpatialControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pCtrl_j)
				{
					EarthView::World::Spatial::Atlas::ISpatialControl *pCtrl = (EarthView::World::Spatial::Atlas::ISpatialControl*) pCtrl_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->getSpatialControlRectangle(pCtrl);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_isDrawing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->isDrawing();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_onResize_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nWidth_j, jint nHeight_j)
				{
					ev_int32 nWidth = (ev_int32) nWidth_j;
					ev_int32 nHeight = (ev_int32) nHeight_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->onResize(nWidth, nHeight);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_onDoubleClick_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->onDoubleClick(button, shift, x, y);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_onKeyDown_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint keyCode_j, jint shift_j)
				{
					ev_int32 keyCode = (ev_int32) keyCode_j;
					ev_int32 shift = (ev_int32) shift_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->onKeyDown(keyCode, shift);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_onKeyUp_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint keyCode_j, jint shift_j)
				{
					ev_int32 keyCode = (ev_int32) keyCode_j;
					ev_int32 shift = (ev_int32) shift_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->onKeyUp(keyCode, shift);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_onMouseDown_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->onMouseDown(button, shift, x, y);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_onMouseMove_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->onMouseMove(button, shift, x, y);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_onMouseUp_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->onMouseUp(button, shift, x, y);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_onMouseWheel_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint delta_j, jint x_j, jint y_j, jint flag_j)
				{
					ev_int32 delta = (ev_int32) delta_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_int32 flag = (ev_int32) flag_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->onMouseWheel(delta, x, y, flag);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_addEagleEyeControlListener_1IEagleEyeControlListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
				{
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener *ref_listener = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) ref_listener_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->addEagleEyeControlListener(ref_listener);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_removeEagleEyeControlListener_1IEagleEyeControlListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
				{
					EarthView::World::Spatial2D::Controls::IEagleEyeControlListener *ref_listener = (EarthView::World::Spatial2D::Controls::IEagleEyeControlListener*) ref_listener_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->removeEagleEyeControlListener(ref_listener);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_getDisplay_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					EarthView::World::Spatial::Display::ISpatialDisplay* __values1 = pObjectX->getDisplay();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_setProxy_1CEagleEyeControlAgent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pxy_j)
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent *ref_pxy = (EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent*) ref_pxy_j;
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					pObjectX->setProxy(ref_pxy);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeControl_getCurrentTool_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CToolEagleEyeControl* __values1 = pObjectX->getCurrentTool();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial2d_controls_EagleEyeOperationTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						EEOT_PointSelect,
						EEOT_RectSelect,
						EEOT_Pan
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				class JCToolEagleEyeControlProxy : public EarthView::World::Spatial2D::Controls::CToolEagleEyeControl
				{
				 private:
					EarthView::World::Core::ev_string m_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback;
				public:
					JCToolEagleEyeControlProxy(EarthView::World::Core::CNameValuePairList *pList) : CToolEagleEyeControl(pList)
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
					void register_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback = __method;
					}
					void register_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback = __method;
					}
					void register_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback = __method;
					}
					virtual ev_bool onMouseDown(ev_int32 button, ev_int32 shift, ev_int32 x, ev_int32 y)
					{
						if (this->_gRef != NULL && this->m_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
							jint button_j = (jint) button;
							jint shift_j = (jint) shift;
							jint x_j = (jint) x;
							jint y_j = (jint) y;
							jmethodID __method = __gr->getMethod("onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , button_j, shift_j, x_j, y_j);
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
							return this->CToolEagleEyeControl::onMouseDown(button, shift, x, y);
						}
					}
					virtual ev_bool onMouseMove(ev_int32 button, ev_int32 shift, ev_int32 x, ev_int32 y)
					{
						if (this->_gRef != NULL && this->m_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
							jint button_j = (jint) button;
							jint shift_j = (jint) shift;
							jint x_j = (jint) x;
							jint y_j = (jint) y;
							jmethodID __method = __gr->getMethod("onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , button_j, shift_j, x_j, y_j);
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
							return this->CToolEagleEyeControl::onMouseMove(button, shift, x, y);
						}
					}
					virtual ev_bool onMouseUp(ev_int32 button, ev_int32 shift, ev_int32 x, ev_int32 y)
					{
						if (this->_gRef != NULL && this->m_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
							jint button_j = (jint) button;
							jint shift_j = (jint) shift;
							jint x_j = (jint) x;
							jint y_j = (jint) y;
							jmethodID __method = __gr->getMethod("onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , button_j, shift_j, x_j, y_j);
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
							return this->CToolEagleEyeControl::onMouseUp(button, shift, x, y);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCToolEagleEyeControlProxy);
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial2d_controls_ToolEagleEyeControl_00024OperationFlagHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CToolEagleEyeControl::OF_Click,
						CToolEagleEyeControl::OF_Rect,
						CToolEagleEyeControl::OF_Wheel
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_ToolEagleEyeControl_create_1CEagleEyeControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pEagleEyeControl_j)
				{
					EarthView::World::Spatial2D::Controls::CEagleEyeControl *pEagleEyeControl = (EarthView::World::Spatial2D::Controls::CEagleEyeControl*) pEagleEyeControl_j;
					EarthView::World::Spatial2D::Controls::CToolEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CToolEagleEyeControl*) pObjXXXX;
					pObjectX->create(pEagleEyeControl);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_ToolEagleEyeControl_onMouseDown_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial2D::Controls::CToolEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CToolEagleEyeControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCToolEagleEyeControlProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CToolEagleEyeControl::onMouseDown(button, shift, x, y);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onMouseDown(button, shift, x, y);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_ToolEagleEyeControl_register_1onMouseDown_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCToolEagleEyeControlProxy *pObjectX = (JCToolEagleEyeControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback", "(IIII)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_ToolEagleEyeControl_onMouseDown_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial2D::Controls::CToolEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CToolEagleEyeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CToolEagleEyeControl::onMouseDown(button, shift, x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_ToolEagleEyeControl_onMouseMove_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial2D::Controls::CToolEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CToolEagleEyeControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCToolEagleEyeControlProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CToolEagleEyeControl::onMouseMove(button, shift, x, y);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onMouseMove(button, shift, x, y);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_ToolEagleEyeControl_register_1onMouseMove_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCToolEagleEyeControlProxy *pObjectX = (JCToolEagleEyeControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback", "(IIII)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_ToolEagleEyeControl_onMouseMove_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial2D::Controls::CToolEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CToolEagleEyeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CToolEagleEyeControl::onMouseMove(button, shift, x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_ToolEagleEyeControl_onMouseUp_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial2D::Controls::CToolEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CToolEagleEyeControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCToolEagleEyeControlProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CToolEagleEyeControl::onMouseUp(button, shift, x, y);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onMouseUp(button, shift, x, y);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_ToolEagleEyeControl_register_1onMouseUp_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCToolEagleEyeControlProxy *pObjectX = (JCToolEagleEyeControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback", "(IIII)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_ToolEagleEyeControl_onMouseUp_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial2D::Controls::CToolEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CToolEagleEyeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CToolEagleEyeControl::onMouseUp(button, shift, x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_ToolEagleEyeControl_onMouseWheel_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint delta_j, jint x_j, jint y_j, jint flag_j)
				{
					ev_int32 delta = (ev_int32) delta_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_int32 flag = (ev_int32) flag_j;
					EarthView::World::Spatial2D::Controls::CToolEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CToolEagleEyeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->onMouseWheel(delta, x, y, flag);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_ToolEagleEyeControl_onKeyDown_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint keyCode_j, jint shift_j)
				{
					ev_int32 keyCode = (ev_int32) keyCode_j;
					ev_int32 shift = (ev_int32) shift_j;
					EarthView::World::Spatial2D::Controls::CToolEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CToolEagleEyeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->onKeyDown(keyCode, shift);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_ToolEagleEyeControl_onKeyUp_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint keyCode_j, jint shift_j)
				{
					ev_int32 keyCode = (ev_int32) keyCode_j;
					ev_int32 shift = (ev_int32) shift_j;
					EarthView::World::Spatial2D::Controls::CToolEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CToolEagleEyeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->onKeyUp(keyCode, shift);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_ToolEagleEyeControl_onDoubleClick_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial2D::Controls::CToolEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CToolEagleEyeControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->onDoubleClick(button, shift, x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_ToolEagleEyeControl_setOperationFlag_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint flag_j)
				{
					int flag = (int) flag_j;
					EarthView::World::Spatial2D::Controls::CToolEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CToolEagleEyeControl*) pObjXXXX;
					pObjectX->setOperationFlag(flag);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_ToolEagleEyeControl_getOperationFlag_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CToolEagleEyeControl *pObjectX = (EarthView::World::Spatial2D::Controls::CToolEagleEyeControl*) pObjXXXX;
					int __values1 = pObjectX->getOperationFlag();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
		}
	}
}
