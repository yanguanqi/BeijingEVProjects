/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "ga/commonscenecameramanipulator.h"
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
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_controls_ControlPointEvent_get_1msecond_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CControlPointEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CControlPointEvent*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->msecond);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_ControlPointEvent_set_1msecond_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CControlPointEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CControlPointEvent*)pObjXXXX;
					pObjectX->msecond = (ev_real32)__values1_j;
				}
				class JCCommonSceneCameraManipulatorProxy : public EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator
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
					JCCommonSceneCameraManipulatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CCommonSceneCameraManipulator(pList)
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
					virtual ev_bool handleFrameEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* useEvent)
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
							jlong useEvent_j = (jlong) useEvent;
							jmethodID __method = __gr->getMethod("handleFrameEvent_CGUIEvent_callback");
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
							return this->CCommonSceneCameraManipulator::handleFrameEvent(useEvent);
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
							return this->CCommonSceneCameraManipulator::handleEvent(guiEvent);
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
							return this->CCommonSceneCameraManipulator::handleUserEvent(userEvent);
						}
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
							return this->CCommonSceneCameraManipulator::handleMouseEvent(mouseEvent);
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
							return this->CCommonSceneCameraManipulator::handleKeyEvent(keyEvent);
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
							return this->CCommonSceneCameraManipulator::reset();
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
							return this->CCommonSceneCameraManipulator::computeViewportMatrix();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCCommonSceneCameraManipulatorProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_screenToScene_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat x_j, jfloat y_j)
				{
					ev_real32 x = (ev_real32) x_j;
					ev_real32 y = (ev_real32) y_j;
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjXXXX;
					EarthView::World::Spatial::Math::CRay __values1 = pObjectX->screenToScene(x, y);
					EarthView::World::Spatial::Math::CRay *returnvalues = new EarthView::World::Spatial::Math::CRay(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_intersect_1CRay_1CPlane_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ray_j, jlong plane_j, jlong intersectPoint_j)
				{
					const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
					const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
					EarthView::World::Spatial::Math::CVector3 &intersectPoint = *(EarthView::World::Spatial::Math::CVector3*) intersectPoint_j;
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->intersect(ray, plane, intersectPoint);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_intersect_1CRay_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ray_j, jlong normal_j, jlong point_j, jlong intersectPoint_j)
				{
					const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
					const EarthView::World::Spatial::Math::CVector3 &normal = *(EarthView::World::Spatial::Math::CVector3*) normal_j;
					const EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
					EarthView::World::Spatial::Math::CVector3 &intersectPoint = *(EarthView::World::Spatial::Math::CVector3*) intersectPoint_j;
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->intersect(ray, normal, point, intersectPoint);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_computeRotationRatio_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble cameraAltitude_j)
				{
					ev_real64 cameraAltitude = (ev_real64) cameraAltitude_j;
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjXXXX;
					ev_real64 __values1 = pObjectX->computeRotationRatio(cameraAltitude);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_calculateZoomFactor_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat mouseWheelDelta_j)
				{
					ev_real32 mouseWheelDelta = (ev_real32) mouseWheelDelta_j;
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjXXXX;
					ev_real64 __values1 = pObjectX->calculateZoomFactor(mouseWheelDelta);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_calculateMoveable_1CGUIEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong firstEvent_j, jlong secondEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *firstEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) firstEvent_j;
					EarthView::World::Spatial::SystemUI::CGUIEvent *secondEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) secondEvent_j;
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->calculateMoveable(firstEvent, secondEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_roamCamera_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble moriginX_j, jdouble moriginY_j, jdouble mlastX_j, jdouble mlastY_j)
				{
					ev_real64 moriginX = (ev_real64) moriginX_j;
					ev_real64 moriginY = (ev_real64) moriginY_j;
					ev_real64 mlastX = (ev_real64) mlastX_j;
					ev_real64 mlastY = (ev_real64) mlastY_j;
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjXXXX;
					pObjectX->roamCamera(moriginX, moriginY, mlastX, mlastY);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_zoomCamera_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble zoomRatio_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					ev_real64 zoomRatio = (ev_real64) zoomRatio_j;
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjXXXX;
					pObjectX->zoomCamera(x, y, zoomRatio);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_rotationCamera_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble degree_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					ev_real64 degree = (ev_real64) degree_j;
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjXXXX;
					pObjectX->rotationCamera(x, y, degree);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_tiltCamera_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble degree_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					ev_real64 degree = (ev_real64) degree_j;
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjXXXX;
					pObjectX->tiltCamera(x, y, degree);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_rotationAtPoint_1CVector3_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ratationPoint_j, jdouble head_j, jdouble tilt_j)
				{
					EarthView::World::Spatial::Math::CVector3 ratationPoint = *(EarthView::World::Spatial::Math::CVector3*) ratationPoint_j;
					ev_real64 head = (ev_real64) head_j;
					ev_real64 tilt = (ev_real64) tilt_j;
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->rotationAtPoint(ratationPoint, head, tilt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_handleFrameEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong useEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *useEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) useEvent_j;
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCommonSceneCameraManipulatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator::handleFrameEvent(useEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleFrameEvent(useEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_register_1handleFrameEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCommonSceneCameraManipulatorProxy *pObjectX = (JCCommonSceneCameraManipulatorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_handleFrameEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong useEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *useEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) useEvent_j;
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator::handleFrameEvent(useEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_handleEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCommonSceneCameraManipulatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator::handleEvent(guiEvent);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_register_1handleEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCommonSceneCameraManipulatorProxy *pObjectX = (JCCommonSceneCameraManipulatorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_handleEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator::handleEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_handleUserEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong userEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *userEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) userEvent_j;
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCommonSceneCameraManipulatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator::handleUserEvent(userEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleUserEvent(userEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_register_1handleUserEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCommonSceneCameraManipulatorProxy *pObjectX = (JCCommonSceneCameraManipulatorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_handleUserEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong userEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *userEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) userEvent_j;
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator::handleUserEvent(userEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_createAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjXXXX;
					pObjectX->createAnimation();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_addControlPoint_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat second_j)
				{
					ev_real32 second = (ev_real32) second_j;
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjXXXX;
					pObjectX->addControlPoint(second);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_getCommonSceneCamera_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator *pObjectX = (EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator*) pObjXXXX;
					EarthView::World::Spatial3D::CCommonSceneCamera* __values1 = pObjectX->getCommonSceneCamera();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_register_1handleMouseEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCommonSceneCameraManipulatorProxy *pObjectX = (JCCommonSceneCameraManipulatorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_register_1handleKeyEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCommonSceneCameraManipulatorProxy *pObjectX = (JCCommonSceneCameraManipulatorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_register_1reset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCommonSceneCameraManipulatorProxy *pObjectX = (JCCommonSceneCameraManipulatorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CommonSceneCameraManipulator_register_1computeViewportMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCommonSceneCameraManipulatorProxy *pObjectX = (JCCommonSceneCameraManipulatorProxy*) pObjXXXX;
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
			}
		}
	}
}
