/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/iatmosphere.h"
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
			namespace Spatial3D
			{
				class JIAtmosphereProxy : public EarthView::World::Spatial::Spatial3D::IAtmosphere
				{
				 private:
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_setName_EVString_callback;
					EarthView::World::Core::ev_string m_fromXmlElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_toXmlElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_fromXML_CXmlElement_callback;
					EarthView::World::Core::ev_string m_toXML_void_callback;
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
					JIAtmosphereProxy(EarthView::World::Core::CNameValuePairList *pList) : IAtmosphere(pList)
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
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_setName_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setName_EVString_callback = __method;
					}
					void register_fromXmlElement_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromXmlElement_CXmlElement_callback = __method;
					}
					void register_toXmlElement_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toXmlElement_CXmlElement_callback = __method;
					}
					void register_fromXML_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromXML_CXmlElement_callback = __method;
					}
					void register_toXML_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toXML_void_callback = __method;
					}
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
							return this->IAtmosphere::getName();
						}
					}
					virtual void setName(const EVString& name)
					{
						if (this->_gRef != NULL && this->m_setName_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring name_wch = name;
							jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
							jmethodID __method = __gr->getMethod("setName_EVString_callback");
							__env->CallVoidMethod(__obj, __method , name_j);
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
							return this->IAtmosphere::setName(name);
						}
					}
					virtual void fromXmlElement(EarthView::World::Core::CXmlElement& element)
					{
						if (this->_gRef != NULL && this->m_fromXmlElement_CXmlElement_callback != "" && this->isCustomExtend())
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
							jlong element_j = (jlong) &element;
							jmethodID __method = __gr->getMethod("fromXmlElement_CXmlElement_callback");
							__env->CallVoidMethod(__obj, __method , element_j);
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
							return this->IAtmosphere::fromXmlElement(element);
						}
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement(EarthView::World::Core::CXmlElement& element)
					{
						if (this->_gRef != NULL && this->m_toXmlElement_CXmlElement_callback != "" && this->isCustomExtend())
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
							jlong element_j = (jlong) &element;
							jmethodID __method = __gr->getMethod("toXmlElement_CXmlElement_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , element_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Core::CXmlElement __values1 = *(EarthView::World::Core::CXmlElement*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IAtmosphere::toXmlElement(element);
						}
					}
					virtual void fromXML(EarthView::World::Core::CXmlElement& element)
					{
						if (this->_gRef != NULL && this->m_fromXML_CXmlElement_callback != "" && this->isCustomExtend())
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
							jlong element_j = (jlong) &element;
							jmethodID __method = __gr->getMethod("fromXML_CXmlElement_callback");
							__env->CallVoidMethod(__obj, __method , element_j);
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
							return this->IAtmosphere::fromXML(element);
						}
					}
					virtual EVString toXML() const
					{
						if (this->_gRef != NULL && this->m_toXML_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("toXML_void_callback");
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
							return this->IAtmosphere::toXML();
						}
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
							return this->IAtmosphere::preUpdateSceneGraph(source, camera);
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
							return this->IAtmosphere::postUpdateSceneGraph(source, camera);
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
							return this->IAtmosphere::preFindVisibleObjects(source, irs, v);
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
							return this->IAtmosphere::postFindVisibleObjects(source, irs, v);
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
							return this->IAtmosphere::shadowTexturesUpdated(numberOfShadowTextures);
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
							return this->IAtmosphere::shadowTextureCasterPreViewProj(light, camera, iteration);
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
							return this->IAtmosphere::shadowTextureReceiverPreViewProj(light, frustum);
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
							return this->IAtmosphere::sortLightsAffectingFrustum(lightList);
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
							return this->IAtmosphere::sceneManagerDestroyed(source);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIAtmosphereProxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Spatial3D::IAtmosphere *pObjectX = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIAtmosphereProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Spatial3D::IAtmosphere::getName();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIAtmosphereProxy *pObjectX = (JIAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Spatial3D::IAtmosphere *pObjectX = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Spatial3D::IAtmosphere::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::Spatial::Spatial3D::IAtmosphere *pObjectX = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIAtmosphereProxy))
					{
						pObjectX->EarthView::World::Spatial::Spatial3D::IAtmosphere::setName(name);
					}
					else
					{
						pObjectX->setName(name);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_register_1setName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIAtmosphereProxy *pObjectX = (JIAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setName_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setName_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_setName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::Spatial::Spatial3D::IAtmosphere *pObjectX = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Spatial3D::IAtmosphere::setName(name);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Spatial3D::IAtmosphere *pObjectX = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIAtmosphereProxy))
					{
						pObjectX->EarthView::World::Spatial::Spatial3D::IAtmosphere::fromXmlElement(element);
					}
					else
					{
						pObjectX->fromXmlElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIAtmosphereProxy *pObjectX = (JIAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_fromXmlElement_CXmlElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"fromXmlElement_CXmlElement_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_fromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Spatial3D::IAtmosphere *pObjectX = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Spatial3D::IAtmosphere::fromXmlElement(element);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_toXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Spatial3D::IAtmosphere *pObjectX = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIAtmosphereProxy))
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Spatial3D::IAtmosphere::toXmlElement(element);
						EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->toXmlElement(element);
						EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_register_1toXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIAtmosphereProxy *pObjectX = (JIAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toXmlElement_CXmlElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toXmlElement_CXmlElement_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_toXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Spatial3D::IAtmosphere *pObjectX = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Spatial3D::IAtmosphere::toXmlElement(element);
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_fromXML_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Spatial3D::IAtmosphere *pObjectX = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIAtmosphereProxy))
					{
						pObjectX->EarthView::World::Spatial::Spatial3D::IAtmosphere::fromXML(element);
					}
					else
					{
						pObjectX->fromXML(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_register_1fromXML_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIAtmosphereProxy *pObjectX = (JIAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_fromXML_CXmlElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"fromXML_CXmlElement_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_fromXML_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Spatial3D::IAtmosphere *pObjectX = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Spatial3D::IAtmosphere::fromXML(element);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_toXML_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Spatial3D::IAtmosphere *pObjectX = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIAtmosphereProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Spatial3D::IAtmosphere::toXML();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->toXML();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_register_1toXML_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIAtmosphereProxy *pObjectX = (JIAtmosphereProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toXML_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toXML_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_toXML_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Spatial3D::IAtmosphere *pObjectX = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Spatial3D::IAtmosphere::toXML();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_register_1preUpdateSceneGraph_1CSceneManager_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIAtmosphereProxy *pObjectX = (JIAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_register_1postUpdateSceneGraph_1CSceneManager_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIAtmosphereProxy *pObjectX = (JIAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_register_1preFindVisibleObjects_1CSceneManager_1IlluminationRenderStage_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIAtmosphereProxy *pObjectX = (JIAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_register_1postFindVisibleObjects_1CSceneManager_1IlluminationRenderStage_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIAtmosphereProxy *pObjectX = (JIAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_register_1shadowTexturesUpdated_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIAtmosphereProxy *pObjectX = (JIAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_register_1shadowTextureCasterPreViewProj_1CLight_1CCamera_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIAtmosphereProxy *pObjectX = (JIAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_register_1shadowTextureReceiverPreViewProj_1CLight_1CFrustum(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIAtmosphereProxy *pObjectX = (JIAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_register_1sortLightsAffectingFrustum_1LightList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIAtmosphereProxy *pObjectX = (JIAtmosphereProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmosphere_register_1sceneManagerDestroyed_1CSceneManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIAtmosphereProxy *pObjectX = (JIAtmosphereProxy*) pObjXXXX;
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
				class JIAtmosphereFactoryProxy : public EarthView::World::Spatial::Spatial3D::IAtmosphereFactory
				{
				 private:
					EarthView::World::Core::ev_string m_createInstance_CSceneManager_callback;
					EarthView::World::Core::ev_string m_createInstance_EVString_CSceneManager_callback;
					EarthView::World::Core::ev_string m_createInstance_CXmlElement_CSceneManager_callback;
					EarthView::World::Core::ev_string m_destroyInstance_IAtmosphere_callback;
				public:
					JIAtmosphereFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : IAtmosphereFactory(pList)
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
					void register_createInstance_CSceneManager_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createInstance_CSceneManager_callback = __method;
					}
					void register_createInstance_EVString_CSceneManager_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createInstance_EVString_CSceneManager_callback = __method;
					}
					void register_createInstance_CXmlElement_CSceneManager_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createInstance_CXmlElement_CSceneManager_callback = __method;
					}
					void register_destroyInstance_IAtmosphere_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_destroyInstance_IAtmosphere_callback = __method;
					}
					virtual EarthView::World::Spatial::Spatial3D::IAtmosphere* createInstance(EarthView::World::Graphic::CSceneManager* pScene)
					{
						if (this->_gRef != NULL && this->m_createInstance_CSceneManager_callback != "" && this->isCustomExtend())
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
							jlong pScene_j = (jlong) pScene;
							jmethodID __method = __gr->getMethod("createInstance_CSceneManager_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , pScene_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Spatial3D::IAtmosphere *__values1 = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IAtmosphereFactory::createInstance(pScene);
						}
					}
					virtual EarthView::World::Spatial::Spatial3D::IAtmosphere* createInstance(const EVString& strXml, EarthView::World::Graphic::CSceneManager* pScene)
					{
						if (this->_gRef != NULL && this->m_createInstance_EVString_CSceneManager_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring strXml_wch = strXml;
							jstring strXml_j = __env->NewString((const jchar*)strXml_wch.getString(), strXml_wch.size());
							jlong pScene_j = (jlong) pScene;
							jmethodID __method = __gr->getMethod("createInstance_EVString_CSceneManager_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , strXml_j, pScene_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Spatial3D::IAtmosphere *__values1 = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IAtmosphereFactory::createInstance(strXml, pScene);
						}
					}
					virtual EarthView::World::Spatial::Spatial3D::IAtmosphere* createInstance(EarthView::World::Core::CXmlElement& element, EarthView::World::Graphic::CSceneManager* pScene)
					{
						if (this->_gRef != NULL && this->m_createInstance_CXmlElement_CSceneManager_callback != "" && this->isCustomExtend())
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
							jlong element_j = (jlong) &element;
							jlong pScene_j = (jlong) pScene;
							jmethodID __method = __gr->getMethod("createInstance_CXmlElement_CSceneManager_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , element_j, pScene_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Spatial3D::IAtmosphere *__values1 = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IAtmosphereFactory::createInstance(element, pScene);
						}
					}
					virtual void destroyInstance(EarthView::World::Spatial::Spatial3D::IAtmosphere* environment)
					{
						if (this->_gRef != NULL && this->m_destroyInstance_IAtmosphere_callback != "" && this->isCustomExtend())
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
							jlong environment_j = (jlong) environment;
							jmethodID __method = __gr->getMethod("destroyInstance_IAtmosphere_callback");
							__env->CallVoidMethod(__obj, __method , environment_j);
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
							return this->IAtmosphereFactory::destroyInstance(environment);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIAtmosphereFactoryProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmospherefactory_createInstance_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pScene_j)
				{
					EarthView::World::Graphic::CSceneManager *pScene = (EarthView::World::Graphic::CSceneManager*) pScene_j;
					EarthView::World::Spatial::Spatial3D::IAtmosphereFactory *pObjectX = (EarthView::World::Spatial::Spatial3D::IAtmosphereFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIAtmosphereFactoryProxy))
					{
						EarthView::World::Spatial::Spatial3D::IAtmosphere* __values1 = pObjectX->EarthView::World::Spatial::Spatial3D::IAtmosphereFactory::createInstance(pScene);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Spatial3D::IAtmosphere* __values1 = pObjectX->createInstance(pScene);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmospherefactory_register_1createInstance_1CSceneManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIAtmosphereFactoryProxy *pObjectX = (JIAtmosphereFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createInstance_CSceneManager_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createInstance_CSceneManager_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmospherefactory_createInstance_1CSceneManager_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pScene_j)
				{
					EarthView::World::Graphic::CSceneManager *pScene = (EarthView::World::Graphic::CSceneManager*) pScene_j;
					EarthView::World::Spatial::Spatial3D::IAtmosphereFactory *pObjectX = (EarthView::World::Spatial::Spatial3D::IAtmosphereFactory*) pObjXXXX;
					EarthView::World::Spatial::Spatial3D::IAtmosphere* __values1 = pObjectX->EarthView::World::Spatial::Spatial3D::IAtmosphereFactory::createInstance(pScene);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmospherefactory_createInstance_1EVString_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strXml_j, jlong pScene_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strXml_ch = (const ev_char*)__env->GetStringUTFChars(strXml_j,JNI_FALSE);
					const EVString strXml = strXml_ch;
					__env->ReleaseStringUTFChars(strXml_j, (const char *)strXml_ch);
					#else
					const ev_wchar* strXml_ch = (const ev_wchar*)__env->GetStringChars(strXml_j,JNI_FALSE);
					const EVString strXml = strXml_ch;
					__env->ReleaseStringChars(strXml_j, (const jchar *)strXml_ch);
					#endif
					EarthView::World::Graphic::CSceneManager *pScene = (EarthView::World::Graphic::CSceneManager*) pScene_j;
					EarthView::World::Spatial::Spatial3D::IAtmosphereFactory *pObjectX = (EarthView::World::Spatial::Spatial3D::IAtmosphereFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIAtmosphereFactoryProxy))
					{
						EarthView::World::Spatial::Spatial3D::IAtmosphere* __values1 = pObjectX->EarthView::World::Spatial::Spatial3D::IAtmosphereFactory::createInstance(strXml, pScene);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Spatial3D::IAtmosphere* __values1 = pObjectX->createInstance(strXml, pScene);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmospherefactory_register_1createInstance_1EVString_1CSceneManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIAtmosphereFactoryProxy *pObjectX = (JIAtmosphereFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createInstance_EVString_CSceneManager_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createInstance_EVString_CSceneManager_callback", "(Ljava/lang/String;J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmospherefactory_createInstance_1EVString_1CSceneManager_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strXml_j, jlong pScene_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strXml_ch = (const ev_char*)__env->GetStringUTFChars(strXml_j,JNI_FALSE);
					const EVString strXml = strXml_ch;
					__env->ReleaseStringUTFChars(strXml_j, (const char *)strXml_ch);
					#else
					const ev_wchar* strXml_ch = (const ev_wchar*)__env->GetStringChars(strXml_j,JNI_FALSE);
					const EVString strXml = strXml_ch;
					__env->ReleaseStringChars(strXml_j, (const jchar *)strXml_ch);
					#endif
					EarthView::World::Graphic::CSceneManager *pScene = (EarthView::World::Graphic::CSceneManager*) pScene_j;
					EarthView::World::Spatial::Spatial3D::IAtmosphereFactory *pObjectX = (EarthView::World::Spatial::Spatial3D::IAtmosphereFactory*) pObjXXXX;
					EarthView::World::Spatial::Spatial3D::IAtmosphere* __values1 = pObjectX->EarthView::World::Spatial::Spatial3D::IAtmosphereFactory::createInstance(strXml, pScene);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmospherefactory_createInstance_1CXmlElement_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j, jlong pScene_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Graphic::CSceneManager *pScene = (EarthView::World::Graphic::CSceneManager*) pScene_j;
					EarthView::World::Spatial::Spatial3D::IAtmosphereFactory *pObjectX = (EarthView::World::Spatial::Spatial3D::IAtmosphereFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIAtmosphereFactoryProxy))
					{
						EarthView::World::Spatial::Spatial3D::IAtmosphere* __values1 = pObjectX->EarthView::World::Spatial::Spatial3D::IAtmosphereFactory::createInstance(element, pScene);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Spatial3D::IAtmosphere* __values1 = pObjectX->createInstance(element, pScene);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmospherefactory_register_1createInstance_1CXmlElement_1CSceneManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIAtmosphereFactoryProxy *pObjectX = (JIAtmosphereFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createInstance_CXmlElement_CSceneManager_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createInstance_CXmlElement_CSceneManager_callback", "(JJ)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmospherefactory_createInstance_1CXmlElement_1CSceneManager_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j, jlong pScene_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Graphic::CSceneManager *pScene = (EarthView::World::Graphic::CSceneManager*) pScene_j;
					EarthView::World::Spatial::Spatial3D::IAtmosphereFactory *pObjectX = (EarthView::World::Spatial::Spatial3D::IAtmosphereFactory*) pObjXXXX;
					EarthView::World::Spatial::Spatial3D::IAtmosphere* __values1 = pObjectX->EarthView::World::Spatial::Spatial3D::IAtmosphereFactory::createInstance(element, pScene);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmospherefactory_destroyInstance_1IAtmosphere(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong environment_j)
				{
					EarthView::World::Spatial::Spatial3D::IAtmosphere *environment = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) environment_j;
					EarthView::World::Spatial::Spatial3D::IAtmosphereFactory *pObjectX = (EarthView::World::Spatial::Spatial3D::IAtmosphereFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIAtmosphereFactoryProxy))
					{
						pObjectX->EarthView::World::Spatial::Spatial3D::IAtmosphereFactory::destroyInstance(environment);
					}
					else
					{
						pObjectX->destroyInstance(environment);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmospherefactory_register_1destroyInstance_1IAtmosphere(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIAtmosphereFactoryProxy *pObjectX = (JIAtmosphereFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_destroyInstance_IAtmosphere_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"destroyInstance_IAtmosphere_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_spatial3d_Iatmospherefactory_destroyInstance_1IAtmosphere_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong environment_j)
				{
					EarthView::World::Spatial::Spatial3D::IAtmosphere *environment = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) environment_j;
					EarthView::World::Spatial::Spatial3D::IAtmosphereFactory *pObjectX = (EarthView::World::Spatial::Spatial3D::IAtmosphereFactory*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Spatial3D::IAtmosphereFactory::destroyInstance(environment);
				}
			}
		}
	}
}
