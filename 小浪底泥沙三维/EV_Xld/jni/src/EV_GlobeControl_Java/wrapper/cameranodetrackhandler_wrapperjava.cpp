/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/cameranodetrackhandler.h"
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
				class JCCameraAnimationHandlerProxy : public EarthView::World::Spatial3D::Controls::CCameraAnimationHandler
				{
				 private:
					EarthView::World::Core::ev_string m_handleEvent_CGUIEvent_callback;
				public:
					JCCameraAnimationHandlerProxy(EarthView::World::Core::CNameValuePairList *pList) : CCameraAnimationHandler(pList)
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
							return this->CCameraAnimationHandler::handleEvent(guiEvent);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCCameraAnimationHandlerProxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_controls_CameraAnimationHandler_getAnimationName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CCameraAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CCameraAnimationHandler*) pObjXXXX;
					EVString __values1 = pObjectX->getAnimationName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CameraAnimationHandler_init_1CSceneNode_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_parentNode_j, jstring filePath_j)
				{
					EarthView::World::Graphic::CSceneNode *ref_parentNode = (EarthView::World::Graphic::CSceneNode*) ref_parentNode_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* filePath_ch = (const ev_char*)__env->GetStringUTFChars(filePath_j,JNI_FALSE);
					const EVString filePath = filePath_ch;
					__env->ReleaseStringUTFChars(filePath_j, (const char *)filePath_ch);
					#else
					const ev_wchar* filePath_ch = (const ev_wchar*)__env->GetStringChars(filePath_j,JNI_FALSE);
					const EVString filePath = filePath_ch;
					__env->ReleaseStringChars(filePath_j, (const jchar *)filePath_ch);
					#endif
					EarthView::World::Spatial3D::Controls::CCameraAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CCameraAnimationHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->init(ref_parentNode, filePath);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CameraAnimationHandler_init_1CSceneNode_1CVector3_1CControlPointMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_parentNode_j, jlong localCenter_j, jlong controlPointMap_j)
				{
					EarthView::World::Graphic::CSceneNode *ref_parentNode = (EarthView::World::Graphic::CSceneNode*) ref_parentNode_j;
					const EarthView::World::Spatial::Math::CVector3 &localCenter = *(EarthView::World::Spatial::Math::CVector3*) localCenter_j;
					const EarthView::World::Spatial3D::CControlPointMap &controlPointMap = *(EarthView::World::Spatial3D::CControlPointMap*) controlPointMap_j;
					EarthView::World::Spatial3D::Controls::CCameraAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CCameraAnimationHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->init(ref_parentNode, localCenter, controlPointMap);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CameraAnimationHandler_handleEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CCameraAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CCameraAnimationHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCameraAnimationHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CCameraAnimationHandler::handleEvent(guiEvent);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CameraAnimationHandler_register_1handleEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCameraAnimationHandlerProxy *pObjectX = (JCCameraAnimationHandlerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_CameraAnimationHandler_handleEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CCameraAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CCameraAnimationHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CCameraAnimationHandler::handleEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CameraAnimationHandler_startAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CCameraAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CCameraAnimationHandler*) pObjXXXX;
					pObjectX->startAnimation();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CameraAnimationHandler_stopAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CCameraAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CCameraAnimationHandler*) pObjXXXX;
					pObjectX->stopAnimation();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CameraAnimationHandler_pauseAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CCameraAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CCameraAnimationHandler*) pObjXXXX;
					pObjectX->pauseAnimation();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_CameraAnimationHandler_continueAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CCameraAnimationHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CCameraAnimationHandler*) pObjXXXX;
					pObjectX->continueAnimation();
				}
			}
		}
	}
}
