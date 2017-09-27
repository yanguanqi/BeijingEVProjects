/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/commonscenequerylistener.h"
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
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace SystemUI
			{
				class JICommonSceneQueryListenerProxy : public EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener
				{
				 private:
					EarthView::World::Core::ev_string m_onSelectionChanged_C3DControl_CGlobeSelection_callback;
					EarthView::World::Core::ev_string m_onSelectionChanged_RaySceneQueryResult_callback;
					EarthView::World::Core::ev_string m_onSelectionChanged_C3DControl_RaySceneQueryResult_callback;
					EarthView::World::Core::ev_string m_onSelectionChanged_C3DControl_SceneQueryResult_callback;
					EarthView::World::Core::ev_string m_onSelectedObjectMoved_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType_callback;
					EarthView::World::Core::ev_string m_onDeleteKeyPressed_void_callback;
				public:
					JICommonSceneQueryListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : ICommonSceneQueryListener(pList)
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
					void register_onSelectionChanged_C3DControl_CGlobeSelection_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onSelectionChanged_C3DControl_CGlobeSelection_callback = __method;
					}
					void register_onSelectionChanged_RaySceneQueryResult_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onSelectionChanged_RaySceneQueryResult_callback = __method;
					}
					void register_onSelectionChanged_C3DControl_RaySceneQueryResult_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onSelectionChanged_C3DControl_RaySceneQueryResult_callback = __method;
					}
					void register_onSelectionChanged_C3DControl_SceneQueryResult_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onSelectionChanged_C3DControl_SceneQueryResult_callback = __method;
					}
					void register_onSelectedObjectMoved_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onSelectedObjectMoved_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType_callback = __method;
					}
					void register_onDeleteKeyPressed_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onDeleteKeyPressed_void_callback = __method;
					}
					virtual void onSelectionChanged(EarthView::World::Spatial3D::Controls::C3DControl* globeControl, EarthView::World::Spatial3D::CGlobeSelection& result)
					{
						if (this->_gRef != NULL && this->m_onSelectionChanged_C3DControl_CGlobeSelection_callback != "" && this->isCustomExtend())
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
							jlong result_j = (jlong) &result;
							jmethodID __method = __gr->getMethod("onSelectionChanged_C3DControl_CGlobeSelection_callback");
							__env->CallVoidMethod(__obj, __method , globeControl_j, result_j);
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
							return this->ICommonSceneQueryListener::onSelectionChanged(globeControl, result);
						}
					}
					virtual void onSelectionChanged(EarthView::World::Graphic::RaySceneQueryResult& result)
					{
						if (this->_gRef != NULL && this->m_onSelectionChanged_RaySceneQueryResult_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onSelectionChanged_RaySceneQueryResult_callback");
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
							return this->ICommonSceneQueryListener::onSelectionChanged(result);
						}
					}
					virtual void onSelectionChanged(EarthView::World::Spatial3D::Controls::C3DControl* globeControl, EarthView::World::Graphic::RaySceneQueryResult& result)
					{
						if (this->_gRef != NULL && this->m_onSelectionChanged_C3DControl_RaySceneQueryResult_callback != "" && this->isCustomExtend())
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
							jlong result_j = (jlong) &result;
							jmethodID __method = __gr->getMethod("onSelectionChanged_C3DControl_RaySceneQueryResult_callback");
							__env->CallVoidMethod(__obj, __method , globeControl_j, result_j);
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
							return this->ICommonSceneQueryListener::onSelectionChanged(globeControl, result);
						}
					}
					virtual void onSelectionChanged(EarthView::World::Spatial3D::Controls::C3DControl* globeControl, EarthView::World::Graphic::SceneQueryResult& result)
					{
						if (this->_gRef != NULL && this->m_onSelectionChanged_C3DControl_SceneQueryResult_callback != "" && this->isCustomExtend())
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
							jlong result_j = (jlong) &result;
							jmethodID __method = __gr->getMethod("onSelectionChanged_C3DControl_SceneQueryResult_callback");
							__env->CallVoidMethod(__obj, __method , globeControl_j, result_j);
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
							return this->ICommonSceneQueryListener::onSelectionChanged(globeControl, result);
						}
					}
					virtual void onSelectedObjectMoved(EarthView::World::Spatial3D::Controls::C3DControl* globeControl, EarthView::World::Graphic::RaySceneQueryResultEntry& entry, const EarthView::World::Spatial::Math::CMatrix4& newMatrix, EarthView::World::Spatial::SystemUI::CGUIEvent::GUIEventType type)
					{
						if (this->_gRef != NULL && this->m_onSelectedObjectMoved_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType_callback != "" && this->isCustomExtend())
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
							jlong entry_j = (jlong) &entry;
							jlong newMatrix_j = (jlong) &newMatrix;
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("onSelectedObjectMoved_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType_callback");
							__env->CallVoidMethod(__obj, __method , globeControl_j, entry_j, newMatrix_j, type_j);
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
							return this->ICommonSceneQueryListener::onSelectedObjectMoved(globeControl, entry, newMatrix, type);
						}
					}
					virtual void onDeleteKeyPressed()
					{
						if (this->_gRef != NULL && this->m_onDeleteKeyPressed_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onDeleteKeyPressed_void_callback");
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
							return this->ICommonSceneQueryListener::onDeleteKeyPressed();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JICommonSceneQueryListenerProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Icommonscenequerylistener_onSelectionChanged_1C3DControl_1CGlobeSelection(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeControl_j, jlong result_j)
				{
					EarthView::World::Spatial3D::Controls::C3DControl *globeControl = (EarthView::World::Spatial3D::Controls::C3DControl*) globeControl_j;
					EarthView::World::Spatial3D::CGlobeSelection &result = *(EarthView::World::Spatial3D::CGlobeSelection*) result_j;
					EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener *pObjectX = (EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JICommonSceneQueryListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener::onSelectionChanged(globeControl, result);
					}
					else
					{
						pObjectX->onSelectionChanged(globeControl, result);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Icommonscenequerylistener_register_1onSelectionChanged_1C3DControl_1CGlobeSelection(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JICommonSceneQueryListenerProxy *pObjectX = (JICommonSceneQueryListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onSelectionChanged_C3DControl_CGlobeSelection_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onSelectionChanged_C3DControl_CGlobeSelection_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Icommonscenequerylistener_onSelectionChanged_1C3DControl_1CGlobeSelection_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeControl_j, jlong result_j)
				{
					EarthView::World::Spatial3D::Controls::C3DControl *globeControl = (EarthView::World::Spatial3D::Controls::C3DControl*) globeControl_j;
					EarthView::World::Spatial3D::CGlobeSelection &result = *(EarthView::World::Spatial3D::CGlobeSelection*) result_j;
					EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener *pObjectX = (EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener::onSelectionChanged(globeControl, result);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Icommonscenequerylistener_onSelectionChanged_1RaySceneQueryResult(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong result_j)
				{
					EarthView::World::Graphic::RaySceneQueryResult &result = *(EarthView::World::Graphic::RaySceneQueryResult*) result_j;
					EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener *pObjectX = (EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JICommonSceneQueryListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener::onSelectionChanged(result);
					}
					else
					{
						pObjectX->onSelectionChanged(result);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Icommonscenequerylistener_register_1onSelectionChanged_1RaySceneQueryResult(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JICommonSceneQueryListenerProxy *pObjectX = (JICommonSceneQueryListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onSelectionChanged_RaySceneQueryResult_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onSelectionChanged_RaySceneQueryResult_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Icommonscenequerylistener_onSelectionChanged_1RaySceneQueryResult_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong result_j)
				{
					EarthView::World::Graphic::RaySceneQueryResult &result = *(EarthView::World::Graphic::RaySceneQueryResult*) result_j;
					EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener *pObjectX = (EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener::onSelectionChanged(result);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Icommonscenequerylistener_onSelectionChanged_1C3DControl_1RaySceneQueryResult(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeControl_j, jlong result_j)
				{
					EarthView::World::Spatial3D::Controls::C3DControl *globeControl = (EarthView::World::Spatial3D::Controls::C3DControl*) globeControl_j;
					EarthView::World::Graphic::RaySceneQueryResult &result = *(EarthView::World::Graphic::RaySceneQueryResult*) result_j;
					EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener *pObjectX = (EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JICommonSceneQueryListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener::onSelectionChanged(globeControl, result);
					}
					else
					{
						pObjectX->onSelectionChanged(globeControl, result);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Icommonscenequerylistener_register_1onSelectionChanged_1C3DControl_1RaySceneQueryResult(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JICommonSceneQueryListenerProxy *pObjectX = (JICommonSceneQueryListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onSelectionChanged_C3DControl_RaySceneQueryResult_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onSelectionChanged_C3DControl_RaySceneQueryResult_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Icommonscenequerylistener_onSelectionChanged_1C3DControl_1RaySceneQueryResult_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeControl_j, jlong result_j)
				{
					EarthView::World::Spatial3D::Controls::C3DControl *globeControl = (EarthView::World::Spatial3D::Controls::C3DControl*) globeControl_j;
					EarthView::World::Graphic::RaySceneQueryResult &result = *(EarthView::World::Graphic::RaySceneQueryResult*) result_j;
					EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener *pObjectX = (EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener::onSelectionChanged(globeControl, result);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Icommonscenequerylistener_onSelectionChanged_1C3DControl_1SceneQueryResult(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeControl_j, jlong result_j)
				{
					EarthView::World::Spatial3D::Controls::C3DControl *globeControl = (EarthView::World::Spatial3D::Controls::C3DControl*) globeControl_j;
					EarthView::World::Graphic::SceneQueryResult &result = *(EarthView::World::Graphic::SceneQueryResult*) result_j;
					EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener *pObjectX = (EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JICommonSceneQueryListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener::onSelectionChanged(globeControl, result);
					}
					else
					{
						pObjectX->onSelectionChanged(globeControl, result);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Icommonscenequerylistener_register_1onSelectionChanged_1C3DControl_1SceneQueryResult(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JICommonSceneQueryListenerProxy *pObjectX = (JICommonSceneQueryListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onSelectionChanged_C3DControl_SceneQueryResult_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onSelectionChanged_C3DControl_SceneQueryResult_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Icommonscenequerylistener_onSelectionChanged_1C3DControl_1SceneQueryResult_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeControl_j, jlong result_j)
				{
					EarthView::World::Spatial3D::Controls::C3DControl *globeControl = (EarthView::World::Spatial3D::Controls::C3DControl*) globeControl_j;
					EarthView::World::Graphic::SceneQueryResult &result = *(EarthView::World::Graphic::SceneQueryResult*) result_j;
					EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener *pObjectX = (EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener::onSelectionChanged(globeControl, result);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Icommonscenequerylistener_onSelectedObjectMoved_1C3DControl_1RaySceneQueryResultEntry_1CMatrix4_1GUIEventType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeControl_j, jlong entry_j, jlong newMatrix_j, jint type_j)
				{
					EarthView::World::Spatial3D::Controls::C3DControl *globeControl = (EarthView::World::Spatial3D::Controls::C3DControl*) globeControl_j;
					EarthView::World::Graphic::RaySceneQueryResultEntry &entry = *(EarthView::World::Graphic::RaySceneQueryResultEntry*) entry_j;
					const EarthView::World::Spatial::Math::CMatrix4 &newMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) newMatrix_j;
					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIEventType type = (EarthView::World::Spatial::SystemUI::CGUIEvent::GUIEventType) type_j;
					EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener *pObjectX = (EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JICommonSceneQueryListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener::onSelectedObjectMoved(globeControl, entry, newMatrix, type);
					}
					else
					{
						pObjectX->onSelectedObjectMoved(globeControl, entry, newMatrix, type);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Icommonscenequerylistener_register_1onSelectedObjectMoved_1C3DControl_1RaySceneQueryResultEntry_1CMatrix4_1GUIEventType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JICommonSceneQueryListenerProxy *pObjectX = (JICommonSceneQueryListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onSelectedObjectMoved_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onSelectedObjectMoved_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType_callback", "(JJJI)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Icommonscenequerylistener_onSelectedObjectMoved_1C3DControl_1RaySceneQueryResultEntry_1CMatrix4_1GUIEventType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeControl_j, jlong entry_j, jlong newMatrix_j, jint type_j)
				{
					EarthView::World::Spatial3D::Controls::C3DControl *globeControl = (EarthView::World::Spatial3D::Controls::C3DControl*) globeControl_j;
					EarthView::World::Graphic::RaySceneQueryResultEntry &entry = *(EarthView::World::Graphic::RaySceneQueryResultEntry*) entry_j;
					const EarthView::World::Spatial::Math::CMatrix4 &newMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) newMatrix_j;
					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIEventType type = (EarthView::World::Spatial::SystemUI::CGUIEvent::GUIEventType) type_j;
					EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener *pObjectX = (EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener::onSelectedObjectMoved(globeControl, entry, newMatrix, type);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Icommonscenequerylistener_onDeleteKeyPressed_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener *pObjectX = (EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JICommonSceneQueryListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener::onDeleteKeyPressed();
					}
					else
					{
						pObjectX->onDeleteKeyPressed();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Icommonscenequerylistener_register_1onDeleteKeyPressed_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JICommonSceneQueryListenerProxy *pObjectX = (JICommonSceneQueryListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onDeleteKeyPressed_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onDeleteKeyPressed_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Icommonscenequerylistener_onDeleteKeyPressed_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener *pObjectX = (EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener::onDeleteKeyPressed();
				}
			}
		}
	}
}
