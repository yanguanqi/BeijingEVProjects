/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/globecontrollistener.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				class JCGlobeControlListenerProxy : public EarthView::World::Spatial3D::Controls::CGlobeControlListener
				{
				 private:
					EarthView::World::Core::ev_string m_onGlobeSelectionChanged_CGlobeSelection_callback;
					EarthView::World::Core::ev_string m_onRaySceneQueryResult_RaySceneQueryResult_callback;
					EarthView::World::Core::ev_string m_onAnalysisStart_ITool_callback;
					EarthView::World::Core::ev_string m_onAnalysisEnd_ITool_callback;
					EarthView::World::Core::ev_string m_onMousePosition_Real_Real_Real_ev_bool_callback;
					EarthView::World::Core::ev_string m_onFlyFinished_CGlobeControl_callback;
					EarthView::World::Core::ev_string m_onCurrentToolChanged_CGlobeControl_ITool_ITool_callback;
				public:
					JCGlobeControlListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CGlobeControlListener(pList)
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
					void register_onGlobeSelectionChanged_CGlobeSelection_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onGlobeSelectionChanged_CGlobeSelection_callback = __method;
					}
					void register_onRaySceneQueryResult_RaySceneQueryResult_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onRaySceneQueryResult_RaySceneQueryResult_callback = __method;
					}
					void register_onAnalysisStart_ITool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onAnalysisStart_ITool_callback = __method;
					}
					void register_onAnalysisEnd_ITool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onAnalysisEnd_ITool_callback = __method;
					}
					void register_onMousePosition_Real_Real_Real_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onMousePosition_Real_Real_Real_ev_bool_callback = __method;
					}
					void register_onFlyFinished_CGlobeControl_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onFlyFinished_CGlobeControl_callback = __method;
					}
					void register_onCurrentToolChanged_CGlobeControl_ITool_ITool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onCurrentToolChanged_CGlobeControl_ITool_ITool_callback = __method;
					}
					virtual void onGlobeSelectionChanged(EarthView::World::Spatial3D::CGlobeSelection* globeSelection)
					{
						if (this->_gRef != NULL && this->m_onGlobeSelectionChanged_CGlobeSelection_callback != "" && this->isCustomExtend())
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
							jlong globeSelection_j = (jlong) globeSelection;
							jmethodID __method = __gr->getMethod("onGlobeSelectionChanged_CGlobeSelection_callback");
							__env->CallVoidMethod(__obj, __method , globeSelection_j);
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
							return this->CGlobeControlListener::onGlobeSelectionChanged(globeSelection);
						}
					}
					virtual void onRaySceneQueryResult(EarthView::World::Graphic::RaySceneQueryResult& result)
					{
						if (this->_gRef != NULL && this->m_onRaySceneQueryResult_RaySceneQueryResult_callback != "" && this->isCustomExtend())
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
							jlong result_j = (jlong) &result;
							jmethodID __method = __gr->getMethod("onRaySceneQueryResult_RaySceneQueryResult_callback");
							__env->CallVoidMethod(__obj, __method , result_j);
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
							return this->CGlobeControlListener::onRaySceneQueryResult(result);
						}
					}
					virtual void onAnalysisStart(EarthView::World::Spatial::SystemUI::ITool* tool)
					{
						if (this->_gRef != NULL && this->m_onAnalysisStart_ITool_callback != "" && this->isCustomExtend())
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
							jlong tool_j = (jlong) tool;
							jmethodID __method = __gr->getMethod("onAnalysisStart_ITool_callback");
							__env->CallVoidMethod(__obj, __method , tool_j);
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
							return this->CGlobeControlListener::onAnalysisStart(tool);
						}
					}
					virtual void onAnalysisEnd(EarthView::World::Spatial::SystemUI::ITool* tool)
					{
						if (this->_gRef != NULL && this->m_onAnalysisEnd_ITool_callback != "" && this->isCustomExtend())
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
							jlong tool_j = (jlong) tool;
							jmethodID __method = __gr->getMethod("onAnalysisEnd_ITool_callback");
							__env->CallVoidMethod(__obj, __method , tool_j);
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
							return this->CGlobeControlListener::onAnalysisEnd(tool);
						}
					}
					virtual void onMousePosition(Real lat, Real lon, Real alt, ev_bool isValid)
					{
						if (this->_gRef != NULL && this->m_onMousePosition_Real_Real_Real_ev_bool_callback != "" && this->isCustomExtend())
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
							jdouble lat_j = (jdouble) lat;
							jdouble lon_j = (jdouble) lon;
							jdouble alt_j = (jdouble) alt;
							jboolean isValid_j = (jboolean) isValid;
							jmethodID __method = __gr->getMethod("onMousePosition_Real_Real_Real_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , lat_j, lon_j, alt_j, isValid_j);
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
							return this->CGlobeControlListener::onMousePosition(lat, lon, alt, isValid);
						}
					}
					virtual void onFlyFinished(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl)
					{
						if (this->_gRef != NULL && this->m_onFlyFinished_CGlobeControl_callback != "" && this->isCustomExtend())
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
							jlong globeControl_j = (jlong) globeControl;
							jmethodID __method = __gr->getMethod("onFlyFinished_CGlobeControl_callback");
							__env->CallVoidMethod(__obj, __method , globeControl_j);
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
							return this->CGlobeControlListener::onFlyFinished(globeControl);
						}
					}
					virtual void onCurrentToolChanged(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, EarthView::World::Spatial::SystemUI::ITool* pOldTool, EarthView::World::Spatial::SystemUI::ITool* pNewTool)
					{
						if (this->_gRef != NULL && this->m_onCurrentToolChanged_CGlobeControl_ITool_ITool_callback != "" && this->isCustomExtend())
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
							jlong globeControl_j = (jlong) globeControl;
							jlong pOldTool_j = (jlong) pOldTool;
							jlong pNewTool_j = (jlong) pNewTool;
							jmethodID __method = __gr->getMethod("onCurrentToolChanged_CGlobeControl_ITool_ITool_callback");
							__env->CallVoidMethod(__obj, __method , globeControl_j, pOldTool_j, pNewTool_j);
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
							return this->CGlobeControlListener::onCurrentToolChanged(globeControl, pOldTool, pNewTool);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCGlobeControlListenerProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlListener_onGlobeSelectionChanged_1CGlobeSelection(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeSelection_j)
				{
					EarthView::World::Spatial3D::CGlobeSelection *globeSelection = (EarthView::World::Spatial3D::CGlobeSelection*) globeSelection_j;
					EarthView::World::Spatial3D::Controls::CGlobeControlListener *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeControlListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onGlobeSelectionChanged(globeSelection);
					}
					else
					{
						pObjectX->onGlobeSelectionChanged(globeSelection);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlListener_register_1onGlobeSelectionChanged_1CGlobeSelection(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlListenerProxy *pObjectX = (JCGlobeControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onGlobeSelectionChanged_CGlobeSelection_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onGlobeSelectionChanged_CGlobeSelection_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlListener_onGlobeSelectionChanged_1CGlobeSelection_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeSelection_j)
				{
					EarthView::World::Spatial3D::CGlobeSelection *globeSelection = (EarthView::World::Spatial3D::CGlobeSelection*) globeSelection_j;
					EarthView::World::Spatial3D::Controls::CGlobeControlListener *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onGlobeSelectionChanged(globeSelection);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlListener_onRaySceneQueryResult_1RaySceneQueryResult(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong result_j)
				{
					EarthView::World::Graphic::RaySceneQueryResult &result = *(EarthView::World::Graphic::RaySceneQueryResult*) result_j;
					EarthView::World::Spatial3D::Controls::CGlobeControlListener *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeControlListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onRaySceneQueryResult(result);
					}
					else
					{
						pObjectX->onRaySceneQueryResult(result);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlListener_register_1onRaySceneQueryResult_1RaySceneQueryResult(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlListenerProxy *pObjectX = (JCGlobeControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onRaySceneQueryResult_RaySceneQueryResult_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onRaySceneQueryResult_RaySceneQueryResult_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlListener_onRaySceneQueryResult_1RaySceneQueryResult_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong result_j)
				{
					EarthView::World::Graphic::RaySceneQueryResult &result = *(EarthView::World::Graphic::RaySceneQueryResult*) result_j;
					EarthView::World::Spatial3D::Controls::CGlobeControlListener *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onRaySceneQueryResult(result);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlListener_onAnalysisStart_1ITool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tool_j)
				{
					EarthView::World::Spatial::SystemUI::ITool *tool = (EarthView::World::Spatial::SystemUI::ITool*) tool_j;
					EarthView::World::Spatial3D::Controls::CGlobeControlListener *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeControlListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onAnalysisStart(tool);
					}
					else
					{
						pObjectX->onAnalysisStart(tool);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlListener_register_1onAnalysisStart_1ITool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlListenerProxy *pObjectX = (JCGlobeControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onAnalysisStart_ITool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onAnalysisStart_ITool_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlListener_onAnalysisStart_1ITool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tool_j)
				{
					EarthView::World::Spatial::SystemUI::ITool *tool = (EarthView::World::Spatial::SystemUI::ITool*) tool_j;
					EarthView::World::Spatial3D::Controls::CGlobeControlListener *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onAnalysisStart(tool);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlListener_onAnalysisEnd_1ITool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tool_j)
				{
					EarthView::World::Spatial::SystemUI::ITool *tool = (EarthView::World::Spatial::SystemUI::ITool*) tool_j;
					EarthView::World::Spatial3D::Controls::CGlobeControlListener *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeControlListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onAnalysisEnd(tool);
					}
					else
					{
						pObjectX->onAnalysisEnd(tool);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlListener_register_1onAnalysisEnd_1ITool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlListenerProxy *pObjectX = (JCGlobeControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onAnalysisEnd_ITool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onAnalysisEnd_ITool_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlListener_onAnalysisEnd_1ITool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tool_j)
				{
					EarthView::World::Spatial::SystemUI::ITool *tool = (EarthView::World::Spatial::SystemUI::ITool*) tool_j;
					EarthView::World::Spatial3D::Controls::CGlobeControlListener *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onAnalysisEnd(tool);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlListener_onMousePosition_1Real_1Real_1Real_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble lat_j, jdouble lon_j, jdouble alt_j, jboolean isValid_j)
				{
					Real lat = (Real) lat_j;
					Real lon = (Real) lon_j;
					Real alt = (Real) alt_j;
					ev_bool isValid = (ev_bool) isValid_j;
					EarthView::World::Spatial3D::Controls::CGlobeControlListener *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeControlListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onMousePosition(lat, lon, alt, isValid);
					}
					else
					{
						pObjectX->onMousePosition(lat, lon, alt, isValid);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlListener_register_1onMousePosition_1Real_1Real_1Real_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlListenerProxy *pObjectX = (JCGlobeControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onMousePosition_Real_Real_Real_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onMousePosition_Real_Real_Real_ev_bool_callback", "(DDDZ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlListener_onMousePosition_1Real_1Real_1Real_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble lat_j, jdouble lon_j, jdouble alt_j, jboolean isValid_j)
				{
					Real lat = (Real) lat_j;
					Real lon = (Real) lon_j;
					Real alt = (Real) alt_j;
					ev_bool isValid = (ev_bool) isValid_j;
					EarthView::World::Spatial3D::Controls::CGlobeControlListener *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onMousePosition(lat, lon, alt, isValid);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlListener_onFlyFinished_1CGlobeControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeControl_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *globeControl = (EarthView::World::Spatial3D::Controls::CGlobeControl*) globeControl_j;
					EarthView::World::Spatial3D::Controls::CGlobeControlListener *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeControlListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onFlyFinished(globeControl);
					}
					else
					{
						pObjectX->onFlyFinished(globeControl);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlListener_register_1onFlyFinished_1CGlobeControl(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlListenerProxy *pObjectX = (JCGlobeControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onFlyFinished_CGlobeControl_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onFlyFinished_CGlobeControl_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlListener_onFlyFinished_1CGlobeControl_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeControl_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *globeControl = (EarthView::World::Spatial3D::Controls::CGlobeControl*) globeControl_j;
					EarthView::World::Spatial3D::Controls::CGlobeControlListener *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onFlyFinished(globeControl);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlListener_onCurrentToolChanged_1CGlobeControl_1ITool_1ITool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeControl_j, jlong pOldTool_j, jlong pNewTool_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *globeControl = (EarthView::World::Spatial3D::Controls::CGlobeControl*) globeControl_j;
					EarthView::World::Spatial::SystemUI::ITool *pOldTool = (EarthView::World::Spatial::SystemUI::ITool*) pOldTool_j;
					EarthView::World::Spatial::SystemUI::ITool *pNewTool = (EarthView::World::Spatial::SystemUI::ITool*) pNewTool_j;
					EarthView::World::Spatial3D::Controls::CGlobeControlListener *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGlobeControlListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onCurrentToolChanged(globeControl, pOldTool, pNewTool);
					}
					else
					{
						pObjectX->onCurrentToolChanged(globeControl, pOldTool, pNewTool);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlListener_register_1onCurrentToolChanged_1CGlobeControl_1ITool_1ITool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGlobeControlListenerProxy *pObjectX = (JCGlobeControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onCurrentToolChanged_CGlobeControl_ITool_ITool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onCurrentToolChanged_CGlobeControl_ITool_ITool_callback", "(JJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlListener_onCurrentToolChanged_1CGlobeControl_1ITool_1ITool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeControl_j, jlong pOldTool_j, jlong pNewTool_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *globeControl = (EarthView::World::Spatial3D::Controls::CGlobeControl*) globeControl_j;
					EarthView::World::Spatial::SystemUI::ITool *pOldTool = (EarthView::World::Spatial::SystemUI::ITool*) pOldTool_j;
					EarthView::World::Spatial::SystemUI::ITool *pNewTool = (EarthView::World::Spatial::SystemUI::ITool*) pNewTool_j;
					EarthView::World::Spatial3D::Controls::CGlobeControlListener *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onCurrentToolChanged(globeControl, pOldTool, pNewTool);
				}
			}
		}
	}
}
