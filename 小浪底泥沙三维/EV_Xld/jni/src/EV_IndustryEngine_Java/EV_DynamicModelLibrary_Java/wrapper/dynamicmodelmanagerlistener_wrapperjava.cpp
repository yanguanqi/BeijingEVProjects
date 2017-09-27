/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/dynamicmodellibrary/dynamicmodelmanagerlistener.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			class JCDynamicModelManagerListenerProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelManagerListener
			{
			 private:
				EarthView::World::Core::ev_string m_preUpdateSceneGraph_CSceneManager_CCamera_callback;
				EarthView::World::Core::ev_string m_postUpdateSceneGraph_CSceneManager_CCamera_callback;
				EarthView::World::Core::ev_string m_preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback;
				EarthView::World::Core::ev_string m_postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback;
				EarthView::World::Core::ev_string m_shadowTexturesUpdated_ev_size_t_callback;
				EarthView::World::Core::ev_string m_shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_callback;
				EarthView::World::Core::ev_string m_shadowTextureReceiverPreViewProj_CLight_CFrustum_callback;
				EarthView::World::Core::ev_string m_sortLightsAffectingFrustum_LightList_callback;
				EarthView::World::Core::ev_string m_sceneManagerDestroyed_CSceneManager_callback;
			public:
				JCDynamicModelManagerListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicModelManagerListener(pList)
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
				void register_preUpdateSceneGraph_CSceneManager_CCamera_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_preUpdateSceneGraph_CSceneManager_CCamera_callback = __method;
				}
				void register_postUpdateSceneGraph_CSceneManager_CCamera_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_postUpdateSceneGraph_CSceneManager_CCamera_callback = __method;
				}
				void register_preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback = __method;
				}
				void register_postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback = __method;
				}
				void register_shadowTexturesUpdated_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_shadowTexturesUpdated_ev_size_t_callback = __method;
				}
				void register_shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_callback = __method;
				}
				void register_shadowTextureReceiverPreViewProj_CLight_CFrustum_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_shadowTextureReceiverPreViewProj_CLight_CFrustum_callback = __method;
				}
				void register_sortLightsAffectingFrustum_LightList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_sortLightsAffectingFrustum_LightList_callback = __method;
				}
				void register_sceneManagerDestroyed_CSceneManager_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_sceneManagerDestroyed_CSceneManager_callback = __method;
				}
				virtual void preUpdateSceneGraph(EarthView::World::Graphic::CSceneManager* source, EarthView::World::Graphic::CCamera* camera)
				{
					if (this->_gRef != NULL && this->m_preUpdateSceneGraph_CSceneManager_CCamera_callback != "" && this->isCustomExtend())
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
						jlong source_j = (jlong) source;
						jlong camera_j = (jlong) camera;
						jmethodID __method = __gr->getMethod("preUpdateSceneGraph_CSceneManager_CCamera_callback");
						__env->CallVoidMethod(__obj, __method , source_j, camera_j);
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
						return this->CDynamicModelManagerListener::preUpdateSceneGraph(source, camera);
					}
				}
				virtual void postUpdateSceneGraph(EarthView::World::Graphic::CSceneManager* source, EarthView::World::Graphic::CCamera* camera)
				{
					if (this->_gRef != NULL && this->m_postUpdateSceneGraph_CSceneManager_CCamera_callback != "" && this->isCustomExtend())
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
						jlong source_j = (jlong) source;
						jlong camera_j = (jlong) camera;
						jmethodID __method = __gr->getMethod("postUpdateSceneGraph_CSceneManager_CCamera_callback");
						__env->CallVoidMethod(__obj, __method , source_j, camera_j);
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
						return this->CDynamicModelManagerListener::postUpdateSceneGraph(source, camera);
					}
				}
				virtual void preFindVisibleObjects(EarthView::World::Graphic::CSceneManager* source, EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs, EarthView::World::Graphic::CViewport* v)
				{
					if (this->_gRef != NULL && this->m_preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback != "" && this->isCustomExtend())
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
						jlong source_j = (jlong) source;
						jint irs_j = (jint) irs;
						jlong v_j = (jlong) v;
						jmethodID __method = __gr->getMethod("preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback");
						__env->CallVoidMethod(__obj, __method , source_j, irs_j, v_j);
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
						return this->CDynamicModelManagerListener::preFindVisibleObjects(source, irs, v);
					}
				}
				virtual void postFindVisibleObjects(EarthView::World::Graphic::CSceneManager* source, EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs, EarthView::World::Graphic::CViewport* v)
				{
					if (this->_gRef != NULL && this->m_postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback != "" && this->isCustomExtend())
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
						jlong source_j = (jlong) source;
						jint irs_j = (jint) irs;
						jlong v_j = (jlong) v;
						jmethodID __method = __gr->getMethod("postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback");
						__env->CallVoidMethod(__obj, __method , source_j, irs_j, v_j);
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
						return this->CDynamicModelManagerListener::postFindVisibleObjects(source, irs, v);
					}
				}
				virtual void shadowTexturesUpdated(ev_size_t numberOfShadowTextures)
				{
					if (this->_gRef != NULL && this->m_shadowTexturesUpdated_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong numberOfShadowTextures_j = (jlong) numberOfShadowTextures;
						jmethodID __method = __gr->getMethod("shadowTexturesUpdated_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , numberOfShadowTextures_j);
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
						return this->CDynamicModelManagerListener::shadowTexturesUpdated(numberOfShadowTextures);
					}
				}
				virtual void shadowTextureCasterPreViewProj(EarthView::World::Graphic::CLight* light, EarthView::World::Graphic::CCamera* camera, ev_size_t iteration)
				{
					if (this->_gRef != NULL && this->m_shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong light_j = (jlong) light;
						jlong camera_j = (jlong) camera;
						jlong iteration_j = (jlong) iteration;
						jmethodID __method = __gr->getMethod("shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , light_j, camera_j, iteration_j);
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
						return this->CDynamicModelManagerListener::shadowTextureCasterPreViewProj(light, camera, iteration);
					}
				}
				virtual void shadowTextureReceiverPreViewProj(EarthView::World::Graphic::CLight* light, EarthView::World::Graphic::CFrustum* frustum)
				{
					if (this->_gRef != NULL && this->m_shadowTextureReceiverPreViewProj_CLight_CFrustum_callback != "" && this->isCustomExtend())
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
						jlong light_j = (jlong) light;
						jlong frustum_j = (jlong) frustum;
						jmethodID __method = __gr->getMethod("shadowTextureReceiverPreViewProj_CLight_CFrustum_callback");
						__env->CallVoidMethod(__obj, __method , light_j, frustum_j);
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
						return this->CDynamicModelManagerListener::shadowTextureReceiverPreViewProj(light, frustum);
					}
				}
				virtual ev_bool sortLightsAffectingFrustum(EarthView::World::Graphic::LightList& lightList)
				{
					if (this->_gRef != NULL && this->m_sortLightsAffectingFrustum_LightList_callback != "" && this->isCustomExtend())
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
						jlong lightList_j = (jlong) &lightList;
						jmethodID __method = __gr->getMethod("sortLightsAffectingFrustum_LightList_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , lightList_j);
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
						return this->CDynamicModelManagerListener::sortLightsAffectingFrustum(lightList);
					}
				}
				virtual void sceneManagerDestroyed(EarthView::World::Graphic::CSceneManager* source)
				{
					if (this->_gRef != NULL && this->m_sceneManagerDestroyed_CSceneManager_callback != "" && this->isCustomExtend())
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
						jlong source_j = (jlong) source;
						jmethodID __method = __gr->getMethod("sceneManagerDestroyed_CSceneManager_callback");
						__env->CallVoidMethod(__obj, __method , source_j);
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
						return this->CDynamicModelManagerListener::sceneManagerDestroyed(source);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDynamicModelManagerListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelManagerListener_preUpdateSceneGraph_1CSceneManager_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong source_j, jlong camera_j)
			{
				EarthView::World::Graphic::CSceneManager *source = (EarthView::World::Graphic::CSceneManager*) source_j;
				EarthView::World::Graphic::CCamera *camera = (EarthView::World::Graphic::CCamera*) camera_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelManagerListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelManagerListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelManagerListenerProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelManagerListener::preUpdateSceneGraph(source, camera);
				}
				else
				{
					pObjectX->preUpdateSceneGraph(source, camera);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelManagerListener_register_1preUpdateSceneGraph_1CSceneManager_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelManagerListenerProxy *pObjectX = (JCDynamicModelManagerListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_preUpdateSceneGraph_CSceneManager_CCamera_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"preUpdateSceneGraph_CSceneManager_CCamera_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelManagerListener_preUpdateSceneGraph_1CSceneManager_1CCamera_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong source_j, jlong camera_j)
			{
				EarthView::World::Graphic::CSceneManager *source = (EarthView::World::Graphic::CSceneManager*) source_j;
				EarthView::World::Graphic::CCamera *camera = (EarthView::World::Graphic::CCamera*) camera_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelManagerListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelManagerListener*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelManagerListener::preUpdateSceneGraph(source, camera);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelManagerListener_register_1postUpdateSceneGraph_1CSceneManager_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelManagerListenerProxy *pObjectX = (JCDynamicModelManagerListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_postUpdateSceneGraph_CSceneManager_CCamera_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"postUpdateSceneGraph_CSceneManager_CCamera_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelManagerListener_register_1preFindVisibleObjects_1CSceneManager_1IlluminationRenderStage_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelManagerListenerProxy *pObjectX = (JCDynamicModelManagerListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback", "(JIJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelManagerListener_register_1postFindVisibleObjects_1CSceneManager_1IlluminationRenderStage_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelManagerListenerProxy *pObjectX = (JCDynamicModelManagerListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback", "(JIJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelManagerListener_register_1shadowTexturesUpdated_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelManagerListenerProxy *pObjectX = (JCDynamicModelManagerListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_shadowTexturesUpdated_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"shadowTexturesUpdated_ev_size_t_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelManagerListener_register_1shadowTextureCasterPreViewProj_1CLight_1CCamera_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelManagerListenerProxy *pObjectX = (JCDynamicModelManagerListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_callback", "(JJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelManagerListener_register_1shadowTextureReceiverPreViewProj_1CLight_1CFrustum(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelManagerListenerProxy *pObjectX = (JCDynamicModelManagerListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_shadowTextureReceiverPreViewProj_CLight_CFrustum_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"shadowTextureReceiverPreViewProj_CLight_CFrustum_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelManagerListener_register_1sortLightsAffectingFrustum_1LightList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelManagerListenerProxy *pObjectX = (JCDynamicModelManagerListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_sortLightsAffectingFrustum_LightList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"sortLightsAffectingFrustum_LightList_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelManagerListener_register_1sceneManagerDestroyed_1CSceneManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelManagerListenerProxy *pObjectX = (JCDynamicModelManagerListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_sceneManagerDestroyed_CSceneManager_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"sceneManagerDestroyed_CSceneManager_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
