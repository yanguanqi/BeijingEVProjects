/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysis/analysis3dslope.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
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
			namespace Analysis
			{
				class JCAnalysis3DSlopeProxy : public EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope
				{
				 private:
					EarthView::World::Core::ev_string m_reset_void_callback;
					EarthView::World::Core::ev_string m_initialize_void_callback;
					EarthView::World::Core::ev_string m_renderAnalysis3D_void_callback;
					EarthView::World::Core::ev_string m_getMath3D_void_callback;
					EarthView::World::Core::ev_string m_setVisible_ev_bool_callback;
					EarthView::World::Core::ev_string m_getMousePickState_void_callback;
					EarthView::World::Core::ev_string m_setMousePickState_MousePickState_callback;
					EarthView::World::Core::ev_string m_getIsAnalysisInServer_void_callback;
					EarthView::World::Core::ev_string m_setIsAnalysisInServer_ev_bool_callback;
					EarthView::World::Core::ev_string m_getAltitude3DListener_void_callback;
					EarthView::World::Core::ev_string m_setAltitude3DListener_CAltitudeListener_callback;
					EarthView::World::Core::ev_string m_getAnalysis3DListener_void_callback;
					EarthView::World::Core::ev_string m_setAnalysis3DListener_CAnalysis3DListener_callback;
					EarthView::World::Core::ev_string m_activate_void_callback;
					EarthView::World::Core::ev_string m_deactivate_void_callback;
					EarthView::World::Core::ev_string m_getCursor_void_callback;
					EarthView::World::Core::ev_string m_onContextMenu_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onDoubleClick_void_callback;
					EarthView::World::Core::ev_string m_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onKeyDown_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onKeyUp_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onTouchDown_MotionEvent_callback;
					EarthView::World::Core::ev_string m_onTouchUp_MotionEvent_callback;
					EarthView::World::Core::ev_string m_onTouchMove_MotionEvent_callback;
					EarthView::World::Core::ev_string m_getToolBarType_void_callback;
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_getCategory_void_callback;
					EarthView::World::Core::ev_string m_getToolTip_void_callback;
					EarthView::World::Core::ev_string m_getIcon_void_callback;
					EarthView::World::Core::ev_string m_isCheckable_void_callback;
					EarthView::World::Core::ev_string m_onClicked_void_callback;
					EarthView::World::Core::ev_string m_getChecked_void_callback;
					EarthView::World::Core::ev_string m_setChecked_ev_bool_callback;
					EarthView::World::Core::ev_string m_getEnabled_void_callback;
					EarthView::World::Core::ev_string m_setEnabled_ev_bool_callback;
					EarthView::World::Core::ev_string m_create_ISpatialControl_callback;
					EarthView::World::Core::ev_string m_update_CEvent_callback;
				public:
					JCAnalysis3DSlopeProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnalysis3DSlope(pList)
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
					void register_reset_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_reset_void_callback = __method;
					}
					void register_initialize_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_initialize_void_callback = __method;
					}
					void register_renderAnalysis3D_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_renderAnalysis3D_void_callback = __method;
					}
					void register_getMath3D_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMath3D_void_callback = __method;
					}
					void register_setVisible_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setVisible_ev_bool_callback = __method;
					}
					void register_getMousePickState_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMousePickState_void_callback = __method;
					}
					void register_setMousePickState_MousePickState_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setMousePickState_MousePickState_callback = __method;
					}
					void register_getIsAnalysisInServer_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getIsAnalysisInServer_void_callback = __method;
					}
					void register_setIsAnalysisInServer_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setIsAnalysisInServer_ev_bool_callback = __method;
					}
					void register_getAltitude3DListener_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getAltitude3DListener_void_callback = __method;
					}
					void register_setAltitude3DListener_CAltitudeListener_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setAltitude3DListener_CAltitudeListener_callback = __method;
					}
					void register_getAnalysis3DListener_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getAnalysis3DListener_void_callback = __method;
					}
					void register_setAnalysis3DListener_CAnalysis3DListener_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setAnalysis3DListener_CAnalysis3DListener_callback = __method;
					}
					void register_activate_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_activate_void_callback = __method;
					}
					void register_deactivate_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_deactivate_void_callback = __method;
					}
					void register_getCursor_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getCursor_void_callback = __method;
					}
					void register_onContextMenu_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onContextMenu_ev_int32_ev_int32_callback = __method;
					}
					void register_onDoubleClick_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onDoubleClick_void_callback = __method;
					}
					void register_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_callback = __method;
					}
					void register_onKeyDown_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onKeyDown_ev_int32_ev_int32_callback = __method;
					}
					void register_onKeyUp_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onKeyUp_ev_int32_ev_int32_callback = __method;
					}
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
					void register_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32_callback = __method;
					}
					void register_onTouchDown_MotionEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onTouchDown_MotionEvent_callback = __method;
					}
					void register_onTouchUp_MotionEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onTouchUp_MotionEvent_callback = __method;
					}
					void register_onTouchMove_MotionEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onTouchMove_MotionEvent_callback = __method;
					}
					void register_getToolBarType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getToolBarType_void_callback = __method;
					}
					void register_getType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getType_void_callback = __method;
					}
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_getCategory_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getCategory_void_callback = __method;
					}
					void register_getToolTip_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getToolTip_void_callback = __method;
					}
					void register_getIcon_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getIcon_void_callback = __method;
					}
					void register_isCheckable_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isCheckable_void_callback = __method;
					}
					void register_onClicked_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onClicked_void_callback = __method;
					}
					void register_getChecked_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getChecked_void_callback = __method;
					}
					void register_setChecked_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setChecked_ev_bool_callback = __method;
					}
					void register_getEnabled_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getEnabled_void_callback = __method;
					}
					void register_setEnabled_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setEnabled_ev_bool_callback = __method;
					}
					void register_create_ISpatialControl_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_create_ISpatialControl_callback = __method;
					}
					void register_update_CEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_update_CEvent_callback = __method;
					}
					virtual void deactivate()
					{
						if (this->_gRef != NULL && this->m_deactivate_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("deactivate_void_callback");
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
							return this->CAnalysis3DSlope::deactivate();
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
							return this->CAnalysis3DSlope::reset();
						}
					}
					virtual void initialize()
					{
						if (this->_gRef != NULL && this->m_initialize_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("initialize_void_callback");
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
							return this->CAnalysis3DSlope::initialize();
						}
					}
					virtual void renderAnalysis3D()
					{
						if (this->_gRef != NULL && this->m_renderAnalysis3D_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("renderAnalysis3D_void_callback");
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
							return this->CAnalysis3DSlope::renderAnalysis3D();
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
							return this->CAnalysis3DSlope::onMouseUp(button, shift, x, y);
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
							return this->CAnalysis3DSlope::onMouseMove(button, shift, x, y);
						}
					}
					virtual ev_bool onDoubleClick()
					{
						if (this->_gRef != NULL && this->m_onDoubleClick_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onDoubleClick_void_callback");
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
							return this->CAnalysis3DSlope::onDoubleClick();
						}
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
							return this->CAnalysis3DSlope::onMouseDown(button, shift, x, y);
						}
					}
					virtual ev_uint32 getType() const
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
							return this->CAnalysis3DSlope::getType();
						}
					}
					virtual EarthView::World::Spatial3D::Analysis::CMath3DBaseObject* getMath3D() const
					{
						if (this->_gRef != NULL && this->m_getMath3D_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMath3D_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::Analysis::CMath3DBaseObject *__values1 = (EarthView::World::Spatial3D::Analysis::CMath3DBaseObject*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CAnalysis3DSlope::getMath3D();
						}
					}
					virtual void setVisible(ev_bool visible)
					{
						if (this->_gRef != NULL && this->m_setVisible_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean visible_j = (jboolean) visible;
							jmethodID __method = __gr->getMethod("setVisible_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , visible_j);
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
							return this->CAnalysis3DSlope::setVisible(visible);
						}
					}
					virtual const EarthView::World::Spatial3D::Analysis::MousePickState getMousePickState() const
					{
						if (this->_gRef != NULL && this->m_getMousePickState_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMousePickState_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial3D::Analysis::MousePickState __values1 = (EarthView::World::Spatial3D::Analysis::MousePickState) __values1_j;
							return __values1;
						}
						else
						{
							return this->CAnalysis3DSlope::getMousePickState();
						}
					}
					virtual void setMousePickState(EarthView::World::Spatial3D::Analysis::MousePickState state)
					{
						if (this->_gRef != NULL && this->m_setMousePickState_MousePickState_callback != "" && this->isCustomExtend())
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
							jint state_j = (jint) state;
							jmethodID __method = __gr->getMethod("setMousePickState_MousePickState_callback");
							__env->CallVoidMethod(__obj, __method , state_j);
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
							return this->CAnalysis3DSlope::setMousePickState(state);
						}
					}
					virtual ev_bool getIsAnalysisInServer()
					{
						if (this->_gRef != NULL && this->m_getIsAnalysisInServer_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getIsAnalysisInServer_void_callback");
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
							return this->CAnalysis3DSlope::getIsAnalysisInServer();
						}
					}
					virtual void setIsAnalysisInServer(ev_bool bInServer)
					{
						if (this->_gRef != NULL && this->m_setIsAnalysisInServer_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean bInServer_j = (jboolean) bInServer;
							jmethodID __method = __gr->getMethod("setIsAnalysisInServer_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , bInServer_j);
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
							return this->CAnalysis3DSlope::setIsAnalysisInServer(bInServer);
						}
					}
					virtual EarthView::World::Spatial3D::Analysis::CAltitudeListener* getAltitude3DListener()
					{
						if (this->_gRef != NULL && this->m_getAltitude3DListener_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getAltitude3DListener_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::Analysis::CAltitudeListener *__values1 = (EarthView::World::Spatial3D::Analysis::CAltitudeListener*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CAnalysis3DSlope::getAltitude3DListener();
						}
					}
					virtual void setAltitude3DListener(EarthView::World::Spatial3D::Analysis::CAltitudeListener* ref_listener)
					{
						if (this->_gRef != NULL && this->m_setAltitude3DListener_CAltitudeListener_callback != "" && this->isCustomExtend())
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
							jlong ref_listener_j = (jlong) ref_listener;
							jmethodID __method = __gr->getMethod("setAltitude3DListener_CAltitudeListener_callback");
							__env->CallVoidMethod(__obj, __method , ref_listener_j);
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
							return this->CAnalysis3DSlope::setAltitude3DListener(ref_listener);
						}
					}
					virtual const EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* getAnalysis3DListener() const
					{
						if (this->_gRef != NULL && this->m_getAnalysis3DListener_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getAnalysis3DListener_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial3D::Analysis::CAnalysis3DListener *__values1 = (const EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CAnalysis3DSlope::getAnalysis3DListener();
						}
					}
					virtual void setAnalysis3DListener(EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ref_listener)
					{
						if (this->_gRef != NULL && this->m_setAnalysis3DListener_CAnalysis3DListener_callback != "" && this->isCustomExtend())
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
							jlong ref_listener_j = (jlong) ref_listener;
							jmethodID __method = __gr->getMethod("setAnalysis3DListener_CAnalysis3DListener_callback");
							__env->CallVoidMethod(__obj, __method , ref_listener_j);
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
							return this->CAnalysis3DSlope::setAnalysis3DListener(ref_listener);
						}
					}
					virtual ev_uint32 getToolBarType() const
					{
						if (this->_gRef != NULL && this->m_getToolBarType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getToolBarType_void_callback");
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
							return this->CAnalysis3DSlope::getToolBarType();
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
							return this->CAnalysis3DSlope::getName();
						}
					}
					virtual EVString getCategory() const
					{
						if (this->_gRef != NULL && this->m_getCategory_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getCategory_void_callback");
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
							return this->CAnalysis3DSlope::getCategory();
						}
					}
					virtual EVString getToolTip() const
					{
						if (this->_gRef != NULL && this->m_getToolTip_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getToolTip_void_callback");
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
							return this->CAnalysis3DSlope::getToolTip();
						}
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if (this->_gRef != NULL && this->m_getIcon_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getIcon_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Display::IBitmap *__values1 = (EarthView::World::Display::IBitmap*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CAnalysis3DSlope::getIcon();
						}
					}
					virtual ev_bool isCheckable() const
					{
						if (this->_gRef != NULL && this->m_isCheckable_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isCheckable_void_callback");
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
							return this->CAnalysis3DSlope::isCheckable();
						}
					}
					virtual void onClicked()
					{
						if (this->_gRef != NULL && this->m_onClicked_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onClicked_void_callback");
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
							return this->CAnalysis3DSlope::onClicked();
						}
					}
					virtual ev_bool getChecked() const
					{
						if (this->_gRef != NULL && this->m_getChecked_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getChecked_void_callback");
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
							return this->CAnalysis3DSlope::getChecked();
						}
					}
					virtual void setChecked(ev_bool checked)
					{
						if (this->_gRef != NULL && this->m_setChecked_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean checked_j = (jboolean) checked;
							jmethodID __method = __gr->getMethod("setChecked_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , checked_j);
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
							return this->CAnalysis3DSlope::setChecked(checked);
						}
					}
					virtual ev_bool getEnabled() const
					{
						if (this->_gRef != NULL && this->m_getEnabled_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getEnabled_void_callback");
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
							return this->CAnalysis3DSlope::getEnabled();
						}
					}
					virtual void setEnabled(ev_bool enabled)
					{
						if (this->_gRef != NULL && this->m_setEnabled_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean enabled_j = (jboolean) enabled;
							jmethodID __method = __gr->getMethod("setEnabled_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , enabled_j);
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
							return this->CAnalysis3DSlope::setEnabled(enabled);
						}
					}
					virtual void create(EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if (this->_gRef != NULL && this->m_create_ISpatialControl_callback != "" && this->isCustomExtend())
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
							jlong ref_ctrl_j = (jlong) ref_ctrl;
							jmethodID __method = __gr->getMethod("create_ISpatialControl_callback");
							__env->CallVoidMethod(__obj, __method , ref_ctrl_j);
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
							return this->CAnalysis3DSlope::create(ref_ctrl);
						}
					}
					virtual ev_bool update(EarthView::World::Core::CEvent* e)
					{
						if (this->_gRef != NULL && this->m_update_CEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("update_CEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
							return this->CAnalysis3DSlope::update(e);
						}
					}
					virtual void activate()
					{
						if (this->_gRef != NULL && this->m_activate_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("activate_void_callback");
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
							return this->CAnalysis3DSlope::activate();
						}
					}
					virtual ev_int32 getCursor()
					{
						if (this->_gRef != NULL && this->m_getCursor_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getCursor_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CAnalysis3DSlope::getCursor();
						}
					}
					virtual ev_bool onContextMenu(ev_int32 x, ev_int32 y)
					{
						if (this->_gRef != NULL && this->m_onContextMenu_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onContextMenu_ev_int32_ev_int32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , x_j, y_j);
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
							return this->CAnalysis3DSlope::onContextMenu(x, y);
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
							return this->CAnalysis3DSlope::onKeyDown(keyCode, shift);
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
							return this->CAnalysis3DSlope::onKeyUp(keyCode, shift);
						}
					}
					virtual ev_bool onMouseWheel(ev_int32 delta, ev_int32 x, ev_int32 y, ev_int32 flag)
					{
						if (this->_gRef != NULL && this->m_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
							jint flag_j = (jint) flag;
							jmethodID __method = __gr->getMethod("onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , delta_j, x_j, y_j, flag_j);
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
							return this->CAnalysis3DSlope::onMouseWheel(delta, x, y, flag);
						}
					}
					virtual ev_bool onTouchDown(const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if (this->_gRef != NULL && this->m_onTouchDown_MotionEvent_callback != "" && this->isCustomExtend())
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
							jlong touchEvent_j = (jlong) &touchEvent;
							jmethodID __method = __gr->getMethod("onTouchDown_MotionEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , touchEvent_j);
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
							return this->CAnalysis3DSlope::onTouchDown(touchEvent);
						}
					}
					virtual ev_bool onTouchUp(const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if (this->_gRef != NULL && this->m_onTouchUp_MotionEvent_callback != "" && this->isCustomExtend())
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
							jlong touchEvent_j = (jlong) &touchEvent;
							jmethodID __method = __gr->getMethod("onTouchUp_MotionEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , touchEvent_j);
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
							return this->CAnalysis3DSlope::onTouchUp(touchEvent);
						}
					}
					virtual ev_bool onTouchMove(const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if (this->_gRef != NULL && this->m_onTouchMove_MotionEvent_callback != "" && this->isCustomExtend())
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
							jlong touchEvent_j = (jlong) &touchEvent;
							jmethodID __method = __gr->getMethod("onTouchMove_MotionEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , touchEvent_j);
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
							return this->CAnalysis3DSlope::onTouchMove(touchEvent);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCAnalysis3DSlopeProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_deactivate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnalysis3DSlopeProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::deactivate();
					}
					else
					{
						pObjectX->deactivate();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1deactivate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_deactivate_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"deactivate_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_deactivate_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::deactivate();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_reset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnalysis3DSlopeProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::reset();
					}
					else
					{
						pObjectX->reset();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1reset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_reset_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::reset();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_initialize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnalysis3DSlopeProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::initialize();
					}
					else
					{
						pObjectX->initialize();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1initialize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_initialize_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"initialize_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_initialize_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::initialize();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_renderAnalysis3D_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnalysis3DSlopeProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::renderAnalysis3D();
					}
					else
					{
						pObjectX->renderAnalysis3D();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1renderAnalysis3D_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_renderAnalysis3D_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"renderAnalysis3D_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_renderAnalysis3D_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::renderAnalysis3D();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_getIsOver_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					ev_bool __values1 = pObjectX->getIsOver();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_getSelectedGeoPts_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					EarthView::World::Spatial::Math::VertexList __values1 = pObjectX->getSelectedGeoPts();
					EarthView::World::Spatial::Math::VertexList *returnvalues = new EarthView::World::Spatial::Math::VertexList(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_setSelectedGeoPts_1VertexList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong points_j)
				{
					EarthView::World::Spatial::Math::VertexList &points = *(EarthView::World::Spatial::Math::VertexList*) points_j;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					pObjectX->setSelectedGeoPts(points);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_getDivisions_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					EarthView::World::Core::RealVector __values1 = pObjectX->getDivisions();
					EarthView::World::Core::RealVector *returnvalues = new EarthView::World::Core::RealVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_setDivisions_1RealVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong divisions_j)
				{
					EarthView::World::Core::RealVector divisions = *(EarthView::World::Core::RealVector*) divisions_j;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					pObjectX->setDivisions(divisions);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_getSlopeColor_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong grade_j)
				{
					ev_uint32 grade = (ev_uint32) grade_j;
					const 					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					EarthView::World::Graphic::CColourValue __values1 = pObjectX->getSlopeColor(grade);
					EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_setSlopeColor_1ev_1uint32_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong grade_j, jlong color_j)
				{
					ev_uint32 grade = (ev_uint32) grade_j;
					EarthView::World::Graphic::CColourValue color = *(EarthView::World::Graphic::CColourValue*) color_j;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					pObjectX->setSlopeColor(grade, color);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_isSlopeLayerShow_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					ev_bool __values1 = pObjectX->isSlopeLayerShow();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_showSlopeLayer_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					pObjectX->showSlopeLayer(value);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_isAspectLayerShow_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					ev_bool __values1 = pObjectX->isAspectLayerShow();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_showAspectLayer_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					pObjectX->showAspectLayer(value);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_getSlopeDistributing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					EarthView::World::Core::RealVector& __values1 = pObjectX->getSlopeDistributing();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_getSlopeValues_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					EarthView::World::Core::RealVector& __values1 = pObjectX->getSlopeValues();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_getAspectValues_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					EarthView::World::Core::RealVector& __values1 = pObjectX->getAspectValues();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_getSlopePositionList_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					EarthView::World::Spatial::Math::VertexList& __values1 = pObjectX->getSlopePositionList();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_onMouseUp_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnalysis3DSlopeProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::onMouseUp(button, shift, x, y);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1onMouseUp_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_onMouseUp_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::onMouseUp(button, shift, x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_onMouseMove_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnalysis3DSlopeProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::onMouseMove(button, shift, x, y);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1onMouseMove_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_onMouseMove_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::onMouseMove(button, shift, x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_onDoubleClick_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnalysis3DSlopeProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::onDoubleClick();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onDoubleClick();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1onDoubleClick_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onDoubleClick_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onDoubleClick_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_onDoubleClick_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::onDoubleClick();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1getMath3D_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMath3D_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMath3D_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1setVisible_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setVisible_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setVisible_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1getMousePickState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMousePickState_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMousePickState_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1setMousePickState_1MousePickState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setMousePickState_MousePickState_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setMousePickState_MousePickState_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1getIsAnalysisInServer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getIsAnalysisInServer_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getIsAnalysisInServer_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1setIsAnalysisInServer_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setIsAnalysisInServer_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setIsAnalysisInServer_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1getAltitude3DListener_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getAltitude3DListener_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getAltitude3DListener_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1setAltitude3DListener_1CAltitudeListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setAltitude3DListener_CAltitudeListener_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setAltitude3DListener_CAltitudeListener_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1getAnalysis3DListener_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getAnalysis3DListener_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getAnalysis3DListener_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1setAnalysis3DListener_1CAnalysis3DListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setAnalysis3DListener_CAnalysis3DListener_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setAnalysis3DListener_CAnalysis3DListener_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1activate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_activate_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"activate_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1getCursor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getCursor_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getCursor_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1onContextMenu_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onContextMenu_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onContextMenu_ev_int32_ev_int32_callback", "(II)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1onDoubleClick_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_callback", "(IIII)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1onKeyDown_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1onKeyUp_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1onMouseDown_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1onMouseWheel_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32_callback", "(IIII)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1onTouchDown_1MotionEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onTouchDown_MotionEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onTouchDown_MotionEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1onTouchUp_1MotionEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onTouchUp_MotionEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onTouchUp_MotionEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1onTouchMove_1MotionEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onTouchMove_MotionEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onTouchMove_MotionEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1getToolBarType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getToolBarType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getToolBarType_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getType_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1getCategory_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getCategory_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getCategory_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1getToolTip_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getToolTip_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getToolTip_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1getIcon_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getIcon_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getIcon_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1isCheckable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isCheckable_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isCheckable_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1onClicked_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onClicked_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onClicked_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1getChecked_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getChecked_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getChecked_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1setChecked_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setChecked_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setChecked_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1getEnabled_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getEnabled_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getEnabled_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1setEnabled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setEnabled_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setEnabled_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1create_1ISpatialControl(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_create_ISpatialControl_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"create_ISpatialControl_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DSlope_register_1update_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DSlopeProxy *pObjectX = (JCAnalysis3DSlopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_update_CEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"update_CEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
