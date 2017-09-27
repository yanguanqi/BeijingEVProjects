/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/globequerylistener.h"
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
				class JIGlobeQueryListenerProxy : public EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener
				{
				 private:
					EarthView::World::Core::ev_string m_onSelectionChanged_CGlobeControl_CGlobeSelection_callback;
					EarthView::World::Core::ev_string m_onSelectionChanged_CGlobeControl_RaySceneQueryResult_callback;
					EarthView::World::Core::ev_string m_onSelectionChanged_CGlobeControl_SceneQueryResult_callback;
					EarthView::World::Core::ev_string m_onSelectedObjectMoved_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType_callback;
					EarthView::World::Core::ev_string m_onDeleteKeyPressed_void_callback;
				public:
					JIGlobeQueryListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : IGlobeQueryListener(pList)
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
					void register_onSelectionChanged_CGlobeControl_CGlobeSelection_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onSelectionChanged_CGlobeControl_CGlobeSelection_callback = __method;
					}
					void register_onSelectionChanged_CGlobeControl_RaySceneQueryResult_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onSelectionChanged_CGlobeControl_RaySceneQueryResult_callback = __method;
					}
					void register_onSelectionChanged_CGlobeControl_SceneQueryResult_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onSelectionChanged_CGlobeControl_SceneQueryResult_callback = __method;
					}
					void register_onSelectedObjectMoved_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onSelectedObjectMoved_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType_callback = __method;
					}
					void register_onDeleteKeyPressed_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onDeleteKeyPressed_void_callback = __method;
					}
					virtual void onSelectionChanged(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, EarthView::World::Spatial3D::CGlobeSelection& result)
					{
						if (this->_gRef != NULL && this->m_onSelectionChanged_CGlobeControl_CGlobeSelection_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onSelectionChanged_CGlobeControl_CGlobeSelection_callback");
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
							return this->IGlobeQueryListener::onSelectionChanged(globeControl, result);
						}
					}
					virtual void onSelectionChanged(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, EarthView::World::Graphic::RaySceneQueryResult& result)
					{
						if (this->_gRef != NULL && this->m_onSelectionChanged_CGlobeControl_RaySceneQueryResult_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onSelectionChanged_CGlobeControl_RaySceneQueryResult_callback");
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
							return this->IGlobeQueryListener::onSelectionChanged(globeControl, result);
						}
					}
					virtual void onSelectionChanged(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, EarthView::World::Graphic::SceneQueryResult& result)
					{
						if (this->_gRef != NULL && this->m_onSelectionChanged_CGlobeControl_SceneQueryResult_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onSelectionChanged_CGlobeControl_SceneQueryResult_callback");
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
							return this->IGlobeQueryListener::onSelectionChanged(globeControl, result);
						}
					}
					virtual void onSelectedObjectMoved(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, EarthView::World::Graphic::RaySceneQueryResultEntry& entry, const EarthView::World::Spatial::Math::CMatrix4& newMatrix, EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::MouseOpType type)
					{
						if (this->_gRef != NULL && this->m_onSelectedObjectMoved_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onSelectedObjectMoved_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType_callback");
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
							return this->IGlobeQueryListener::onSelectedObjectMoved(globeControl, entry, newMatrix, type);
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
							return this->IGlobeQueryListener::onDeleteKeyPressed();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIGlobeQueryListenerProxy);
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_systemui_Iglobequerylistener_00024MouseOpTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						IGlobeQueryListener::MOT_MouseDown,
						IGlobeQueryListener::MOT_MouseMove,
						IGlobeQueryListener::MOT_MouseUp
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Iglobequerylistener_onSelectionChanged_1CGlobeControl_1CGlobeSelection(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeControl_j, jlong result_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *globeControl = (EarthView::World::Spatial3D::Controls::CGlobeControl*) globeControl_j;
					EarthView::World::Spatial3D::CGlobeSelection &result = *(EarthView::World::Spatial3D::CGlobeSelection*) result_j;
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener *pObjectX = (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIGlobeQueryListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::onSelectionChanged(globeControl, result);
					}
					else
					{
						pObjectX->onSelectionChanged(globeControl, result);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Iglobequerylistener_register_1onSelectionChanged_1CGlobeControl_1CGlobeSelection(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIGlobeQueryListenerProxy *pObjectX = (JIGlobeQueryListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onSelectionChanged_CGlobeControl_CGlobeSelection_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onSelectionChanged_CGlobeControl_CGlobeSelection_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Iglobequerylistener_onSelectionChanged_1CGlobeControl_1CGlobeSelection_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeControl_j, jlong result_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *globeControl = (EarthView::World::Spatial3D::Controls::CGlobeControl*) globeControl_j;
					EarthView::World::Spatial3D::CGlobeSelection &result = *(EarthView::World::Spatial3D::CGlobeSelection*) result_j;
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener *pObjectX = (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::onSelectionChanged(globeControl, result);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Iglobequerylistener_onSelectionChanged_1CGlobeControl_1RaySceneQueryResult(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeControl_j, jlong result_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *globeControl = (EarthView::World::Spatial3D::Controls::CGlobeControl*) globeControl_j;
					EarthView::World::Graphic::RaySceneQueryResult &result = *(EarthView::World::Graphic::RaySceneQueryResult*) result_j;
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener *pObjectX = (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIGlobeQueryListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::onSelectionChanged(globeControl, result);
					}
					else
					{
						pObjectX->onSelectionChanged(globeControl, result);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Iglobequerylistener_register_1onSelectionChanged_1CGlobeControl_1RaySceneQueryResult(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIGlobeQueryListenerProxy *pObjectX = (JIGlobeQueryListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onSelectionChanged_CGlobeControl_RaySceneQueryResult_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onSelectionChanged_CGlobeControl_RaySceneQueryResult_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Iglobequerylistener_onSelectionChanged_1CGlobeControl_1RaySceneQueryResult_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeControl_j, jlong result_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *globeControl = (EarthView::World::Spatial3D::Controls::CGlobeControl*) globeControl_j;
					EarthView::World::Graphic::RaySceneQueryResult &result = *(EarthView::World::Graphic::RaySceneQueryResult*) result_j;
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener *pObjectX = (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::onSelectionChanged(globeControl, result);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Iglobequerylistener_onSelectionChanged_1CGlobeControl_1SceneQueryResult(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeControl_j, jlong result_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *globeControl = (EarthView::World::Spatial3D::Controls::CGlobeControl*) globeControl_j;
					EarthView::World::Graphic::SceneQueryResult &result = *(EarthView::World::Graphic::SceneQueryResult*) result_j;
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener *pObjectX = (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIGlobeQueryListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::onSelectionChanged(globeControl, result);
					}
					else
					{
						pObjectX->onSelectionChanged(globeControl, result);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Iglobequerylistener_register_1onSelectionChanged_1CGlobeControl_1SceneQueryResult(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIGlobeQueryListenerProxy *pObjectX = (JIGlobeQueryListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onSelectionChanged_CGlobeControl_SceneQueryResult_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onSelectionChanged_CGlobeControl_SceneQueryResult_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Iglobequerylistener_onSelectionChanged_1CGlobeControl_1SceneQueryResult_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeControl_j, jlong result_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *globeControl = (EarthView::World::Spatial3D::Controls::CGlobeControl*) globeControl_j;
					EarthView::World::Graphic::SceneQueryResult &result = *(EarthView::World::Graphic::SceneQueryResult*) result_j;
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener *pObjectX = (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::onSelectionChanged(globeControl, result);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Iglobequerylistener_onSelectedObjectMoved_1CGlobeControl_1RaySceneQueryResultEntry_1CMatrix4_1MouseOpType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeControl_j, jlong entry_j, jlong newMatrix_j, jint type_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *globeControl = (EarthView::World::Spatial3D::Controls::CGlobeControl*) globeControl_j;
					EarthView::World::Graphic::RaySceneQueryResultEntry &entry = *(EarthView::World::Graphic::RaySceneQueryResultEntry*) entry_j;
					const EarthView::World::Spatial::Math::CMatrix4 &newMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) newMatrix_j;
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::MouseOpType type = (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::MouseOpType) type_j;
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener *pObjectX = (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIGlobeQueryListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::onSelectedObjectMoved(globeControl, entry, newMatrix, type);
					}
					else
					{
						pObjectX->onSelectedObjectMoved(globeControl, entry, newMatrix, type);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Iglobequerylistener_register_1onSelectedObjectMoved_1CGlobeControl_1RaySceneQueryResultEntry_1CMatrix4_1MouseOpType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIGlobeQueryListenerProxy *pObjectX = (JIGlobeQueryListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onSelectedObjectMoved_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onSelectedObjectMoved_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType_callback", "(JJJI)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Iglobequerylistener_onSelectedObjectMoved_1CGlobeControl_1RaySceneQueryResultEntry_1CMatrix4_1MouseOpType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeControl_j, jlong entry_j, jlong newMatrix_j, jint type_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *globeControl = (EarthView::World::Spatial3D::Controls::CGlobeControl*) globeControl_j;
					EarthView::World::Graphic::RaySceneQueryResultEntry &entry = *(EarthView::World::Graphic::RaySceneQueryResultEntry*) entry_j;
					const EarthView::World::Spatial::Math::CMatrix4 &newMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) newMatrix_j;
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::MouseOpType type = (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::MouseOpType) type_j;
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener *pObjectX = (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::onSelectedObjectMoved(globeControl, entry, newMatrix, type);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Iglobequerylistener_onDeleteKeyPressed_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener *pObjectX = (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIGlobeQueryListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::onDeleteKeyPressed();
					}
					else
					{
						pObjectX->onDeleteKeyPressed();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Iglobequerylistener_register_1onDeleteKeyPressed_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIGlobeQueryListenerProxy *pObjectX = (JIGlobeQueryListenerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_Iglobequerylistener_onDeleteKeyPressed_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener *pObjectX = (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::onDeleteKeyPressed();
				}
			}
		}
	}
}
