/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysis/analysis3dlistener.h"
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
			namespace Analysis
			{
				class JCAnalysis3DListenerProxy : public EarthView::World::Spatial3D::Analysis::CAnalysis3DListener
				{
				 private:
					EarthView::World::Core::ev_string m_onAnalysisStart_IAnalysis3DTool_callback;
					EarthView::World::Core::ev_string m_onAnalysisEnd_IAnalysis3DTool_callback;
					EarthView::World::Core::ev_string m_onEventStart_IAnalysis3DTool_callback;
					EarthView::World::Core::ev_string m_onEventEnd_IAnalysis3DTool_callback;
					EarthView::World::Core::ev_string m_prepareParma_IAnalysis3DTool_callback;
					EarthView::World::Core::ev_string m_onStepChanged_IAnalysis3DTool_EVString_callback;
					EarthView::World::Core::ev_string m_onProgressChanged_IAnalysis3DTool_ev_uint32_ev_uint32_callback;
					EarthView::World::Core::ev_string m_onMouseClicked_IAnalysis3DTool_callback;
				public:
					JCAnalysis3DListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnalysis3DListener(pList)
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
					void register_onAnalysisStart_IAnalysis3DTool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onAnalysisStart_IAnalysis3DTool_callback = __method;
					}
					void register_onAnalysisEnd_IAnalysis3DTool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onAnalysisEnd_IAnalysis3DTool_callback = __method;
					}
					void register_onEventStart_IAnalysis3DTool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onEventStart_IAnalysis3DTool_callback = __method;
					}
					void register_onEventEnd_IAnalysis3DTool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onEventEnd_IAnalysis3DTool_callback = __method;
					}
					void register_prepareParma_IAnalysis3DTool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_prepareParma_IAnalysis3DTool_callback = __method;
					}
					void register_onStepChanged_IAnalysis3DTool_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onStepChanged_IAnalysis3DTool_EVString_callback = __method;
					}
					void register_onProgressChanged_IAnalysis3DTool_ev_uint32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onProgressChanged_IAnalysis3DTool_ev_uint32_ev_uint32_callback = __method;
					}
					void register_onMouseClicked_IAnalysis3DTool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onMouseClicked_IAnalysis3DTool_callback = __method;
					}
					virtual void onAnalysisStart(EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool)
					{
						if (this->_gRef != NULL && this->m_onAnalysisStart_IAnalysis3DTool_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onAnalysisStart_IAnalysis3DTool_callback");
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
							return this->CAnalysis3DListener::onAnalysisStart(tool);
						}
					}
					virtual void onAnalysisEnd(EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool)
					{
						if (this->_gRef != NULL && this->m_onAnalysisEnd_IAnalysis3DTool_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onAnalysisEnd_IAnalysis3DTool_callback");
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
							return this->CAnalysis3DListener::onAnalysisEnd(tool);
						}
					}
					virtual void onEventStart(EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool)
					{
						if (this->_gRef != NULL && this->m_onEventStart_IAnalysis3DTool_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onEventStart_IAnalysis3DTool_callback");
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
							return this->CAnalysis3DListener::onEventStart(tool);
						}
					}
					virtual void onEventEnd(EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool)
					{
						if (this->_gRef != NULL && this->m_onEventEnd_IAnalysis3DTool_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onEventEnd_IAnalysis3DTool_callback");
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
							return this->CAnalysis3DListener::onEventEnd(tool);
						}
					}
					virtual void prepareParma(EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool)
					{
						if (this->_gRef != NULL && this->m_prepareParma_IAnalysis3DTool_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("prepareParma_IAnalysis3DTool_callback");
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
							return this->CAnalysis3DListener::prepareParma(tool);
						}
					}
					virtual void onStepChanged(EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool, EVString info)
					{
						if (this->_gRef != NULL && this->m_onStepChanged_IAnalysis3DTool_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring info_wch = info;
							jstring info_j = __env->NewString((const jchar*)info_wch.getString(), info_wch.size());
							jmethodID __method = __gr->getMethod("onStepChanged_IAnalysis3DTool_EVString_callback");
							__env->CallVoidMethod(__obj, __method , tool_j, info_j);
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
							return this->CAnalysis3DListener::onStepChanged(tool, info);
						}
					}
					virtual void onProgressChanged(EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool, ev_uint32 value, ev_uint32 count)
					{
						if (this->_gRef != NULL && this->m_onProgressChanged_IAnalysis3DTool_ev_uint32_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong value_j = (jlong) value;
							jlong count_j = (jlong) count;
							jmethodID __method = __gr->getMethod("onProgressChanged_IAnalysis3DTool_ev_uint32_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , tool_j, value_j, count_j);
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
							return this->CAnalysis3DListener::onProgressChanged(tool, value, count);
						}
					}
					virtual void onMouseClicked(EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* pTool)
					{
						if (this->_gRef != NULL && this->m_onMouseClicked_IAnalysis3DTool_callback != "" && this->isCustomExtend())
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
							jlong pTool_j = (jlong) pTool;
							jmethodID __method = __gr->getMethod("onMouseClicked_IAnalysis3DTool_callback");
							__env->CallVoidMethod(__obj, __method , pTool_j);
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
							return this->CAnalysis3DListener::onMouseClicked(pTool);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCAnalysis3DListenerProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DListener_onAnalysisStart_1IAnalysis3DTool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tool_j)
				{
					EarthView::World::Spatial3D::Analysis::IAnalysis3DTool *tool = (EarthView::World::Spatial3D::Analysis::IAnalysis3DTool*) tool_j;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnalysis3DListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onAnalysisStart(tool);
					}
					else
					{
						pObjectX->onAnalysisStart(tool);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DListener_register_1onAnalysisStart_1IAnalysis3DTool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DListenerProxy *pObjectX = (JCAnalysis3DListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onAnalysisStart_IAnalysis3DTool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onAnalysisStart_IAnalysis3DTool_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DListener_onAnalysisStart_1IAnalysis3DTool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tool_j)
				{
					EarthView::World::Spatial3D::Analysis::IAnalysis3DTool *tool = (EarthView::World::Spatial3D::Analysis::IAnalysis3DTool*) tool_j;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onAnalysisStart(tool);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DListener_onAnalysisEnd_1IAnalysis3DTool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tool_j)
				{
					EarthView::World::Spatial3D::Analysis::IAnalysis3DTool *tool = (EarthView::World::Spatial3D::Analysis::IAnalysis3DTool*) tool_j;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnalysis3DListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onAnalysisEnd(tool);
					}
					else
					{
						pObjectX->onAnalysisEnd(tool);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DListener_register_1onAnalysisEnd_1IAnalysis3DTool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DListenerProxy *pObjectX = (JCAnalysis3DListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onAnalysisEnd_IAnalysis3DTool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onAnalysisEnd_IAnalysis3DTool_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DListener_onAnalysisEnd_1IAnalysis3DTool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tool_j)
				{
					EarthView::World::Spatial3D::Analysis::IAnalysis3DTool *tool = (EarthView::World::Spatial3D::Analysis::IAnalysis3DTool*) tool_j;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onAnalysisEnd(tool);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DListener_onEventStart_1IAnalysis3DTool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tool_j)
				{
					EarthView::World::Spatial3D::Analysis::IAnalysis3DTool *tool = (EarthView::World::Spatial3D::Analysis::IAnalysis3DTool*) tool_j;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnalysis3DListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onEventStart(tool);
					}
					else
					{
						pObjectX->onEventStart(tool);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DListener_register_1onEventStart_1IAnalysis3DTool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DListenerProxy *pObjectX = (JCAnalysis3DListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onEventStart_IAnalysis3DTool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onEventStart_IAnalysis3DTool_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DListener_onEventStart_1IAnalysis3DTool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tool_j)
				{
					EarthView::World::Spatial3D::Analysis::IAnalysis3DTool *tool = (EarthView::World::Spatial3D::Analysis::IAnalysis3DTool*) tool_j;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onEventStart(tool);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DListener_onEventEnd_1IAnalysis3DTool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tool_j)
				{
					EarthView::World::Spatial3D::Analysis::IAnalysis3DTool *tool = (EarthView::World::Spatial3D::Analysis::IAnalysis3DTool*) tool_j;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnalysis3DListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onEventEnd(tool);
					}
					else
					{
						pObjectX->onEventEnd(tool);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DListener_register_1onEventEnd_1IAnalysis3DTool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DListenerProxy *pObjectX = (JCAnalysis3DListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onEventEnd_IAnalysis3DTool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onEventEnd_IAnalysis3DTool_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DListener_onEventEnd_1IAnalysis3DTool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tool_j)
				{
					EarthView::World::Spatial3D::Analysis::IAnalysis3DTool *tool = (EarthView::World::Spatial3D::Analysis::IAnalysis3DTool*) tool_j;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onEventEnd(tool);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DListener_prepareParma_1IAnalysis3DTool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tool_j)
				{
					EarthView::World::Spatial3D::Analysis::IAnalysis3DTool *tool = (EarthView::World::Spatial3D::Analysis::IAnalysis3DTool*) tool_j;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnalysis3DListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::prepareParma(tool);
					}
					else
					{
						pObjectX->prepareParma(tool);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DListener_register_1prepareParma_1IAnalysis3DTool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DListenerProxy *pObjectX = (JCAnalysis3DListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_prepareParma_IAnalysis3DTool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"prepareParma_IAnalysis3DTool_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DListener_prepareParma_1IAnalysis3DTool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tool_j)
				{
					EarthView::World::Spatial3D::Analysis::IAnalysis3DTool *tool = (EarthView::World::Spatial3D::Analysis::IAnalysis3DTool*) tool_j;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::prepareParma(tool);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DListener_onStepChanged_1IAnalysis3DTool_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tool_j, jstring info_j)
				{
					EarthView::World::Spatial3D::Analysis::IAnalysis3DTool *tool = (EarthView::World::Spatial3D::Analysis::IAnalysis3DTool*) tool_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* info_ch = (const ev_char*)__env->GetStringUTFChars(info_j,JNI_FALSE);
					EVString info = info_ch;
					__env->ReleaseStringUTFChars(info_j, (const char *)info_ch);
					#else
					const ev_wchar* info_ch = (const ev_wchar*)__env->GetStringChars(info_j,JNI_FALSE);
					EVString info = info_ch;
					__env->ReleaseStringChars(info_j, (const jchar *)info_ch);
					#endif
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnalysis3DListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onStepChanged(tool, info);
					}
					else
					{
						pObjectX->onStepChanged(tool, info);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DListener_register_1onStepChanged_1IAnalysis3DTool_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DListenerProxy *pObjectX = (JCAnalysis3DListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onStepChanged_IAnalysis3DTool_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onStepChanged_IAnalysis3DTool_EVString_callback", "(JLjava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DListener_onStepChanged_1IAnalysis3DTool_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tool_j, jstring info_j)
				{
					EarthView::World::Spatial3D::Analysis::IAnalysis3DTool *tool = (EarthView::World::Spatial3D::Analysis::IAnalysis3DTool*) tool_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* info_ch = (const ev_char*)__env->GetStringUTFChars(info_j,JNI_FALSE);
					EVString info = info_ch;
					__env->ReleaseStringUTFChars(info_j, (const char *)info_ch);
					#else
					const ev_wchar* info_ch = (const ev_wchar*)__env->GetStringChars(info_j,JNI_FALSE);
					EVString info = info_ch;
					__env->ReleaseStringChars(info_j, (const jchar *)info_ch);
					#endif
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onStepChanged(tool, info);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DListener_onProgressChanged_1IAnalysis3DTool_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tool_j, jlong value_j, jlong count_j)
				{
					EarthView::World::Spatial3D::Analysis::IAnalysis3DTool *tool = (EarthView::World::Spatial3D::Analysis::IAnalysis3DTool*) tool_j;
					ev_uint32 value = (ev_uint32) value_j;
					ev_uint32 count = (ev_uint32) count_j;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnalysis3DListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onProgressChanged(tool, value, count);
					}
					else
					{
						pObjectX->onProgressChanged(tool, value, count);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DListener_register_1onProgressChanged_1IAnalysis3DTool_1ev_1uint32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DListenerProxy *pObjectX = (JCAnalysis3DListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onProgressChanged_IAnalysis3DTool_ev_uint32_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onProgressChanged_IAnalysis3DTool_ev_uint32_ev_uint32_callback", "(JJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DListener_onProgressChanged_1IAnalysis3DTool_1ev_1uint32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tool_j, jlong value_j, jlong count_j)
				{
					EarthView::World::Spatial3D::Analysis::IAnalysis3DTool *tool = (EarthView::World::Spatial3D::Analysis::IAnalysis3DTool*) tool_j;
					ev_uint32 value = (ev_uint32) value_j;
					ev_uint32 count = (ev_uint32) count_j;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onProgressChanged(tool, value, count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DListener_onMouseClicked_1IAnalysis3DTool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pTool_j)
				{
					EarthView::World::Spatial3D::Analysis::IAnalysis3DTool *pTool = (EarthView::World::Spatial3D::Analysis::IAnalysis3DTool*) pTool_j;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnalysis3DListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onMouseClicked(pTool);
					}
					else
					{
						pObjectX->onMouseClicked(pTool);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DListener_register_1onMouseClicked_1IAnalysis3DTool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnalysis3DListenerProxy *pObjectX = (JCAnalysis3DListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onMouseClicked_IAnalysis3DTool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onMouseClicked_IAnalysis3DTool_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Analysis3DListener_onMouseClicked_1IAnalysis3DTool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pTool_j)
				{
					EarthView::World::Spatial3D::Analysis::IAnalysis3DTool *pTool = (EarthView::World::Spatial3D::Analysis::IAnalysis3DTool*) pTool_j;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener *pObjectX = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onMouseClicked(pTool);
				}
			}
		}
	}
}
