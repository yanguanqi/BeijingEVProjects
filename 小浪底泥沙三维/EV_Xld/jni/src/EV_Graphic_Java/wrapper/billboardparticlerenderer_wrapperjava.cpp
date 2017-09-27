/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/billboardparticlerenderer.h"
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
			class JCBillboardParticleRendererProxy : public EarthView::World::Graphic::CBillboardParticleRenderer
			{
			 private:
				EarthView::World::Core::ev_string m_getType_void_callback;
				EarthView::World::Core::ev_string m__updateRenderQueue_CRenderQueue_ParticleList_ev_bool_callback;
				EarthView::World::Core::ev_string m__setMaterial_CMaterialPtr_callback;
				EarthView::World::Core::ev_string m__notifyCurrentCamera_CCamera_callback;
				EarthView::World::Core::ev_string m__notifyAttached_CNode_ev_bool_callback;
				EarthView::World::Core::ev_string m__notifyAttached_CNode_callback;
				EarthView::World::Core::ev_string m__notifyParticleRotated_void_callback;
				EarthView::World::Core::ev_string m__notifyParticleResized_void_callback;
				EarthView::World::Core::ev_string m__notifyParticleQuota_ev_size_t_callback;
				EarthView::World::Core::ev_string m__notifyDefaultDimensions_Real_Real_callback;
				EarthView::World::Core::ev_string m__notifyParticleEmitted_CParticle_callback;
				EarthView::World::Core::ev_string m__notifyParticleExpired_CParticle_callback;
				EarthView::World::Core::ev_string m__notifyParticleMoved_ParticleList_callback;
				EarthView::World::Core::ev_string m__notifyParticleCleared_ParticleList_callback;
				EarthView::World::Core::ev_string m__createVisualData_void_callback;
				EarthView::World::Core::ev_string m__destroyVisualData_CParticleVisualData_callback;
				EarthView::World::Core::ev_string m_setRenderQueueGroup_ev_uint8_callback;
				EarthView::World::Core::ev_string m_setKeepParticlesInLocalSpace_ev_bool_callback;
				EarthView::World::Core::ev_string m__getSortMode_void_callback;
				EarthView::World::Core::ev_string m_visitRenderables_CVisitor_ev_bool_callback;
				EarthView::World::Core::ev_string m_visitRenderables_CVisitor_callback;
				EarthView::World::Core::ev_string m_setParameter_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_setParameter_EVString_ev_bool_ev_bool_callback;
				EarthView::World::Core::ev_string m_setParameterList_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_getParameter_EVString_callback;
				EarthView::World::Core::ev_string m_copyParametersTo_CStringInterface_callback;
			public:
				JCBillboardParticleRendererProxy(EarthView::World::Core::CNameValuePairList *pList) : CBillboardParticleRenderer(pList)
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
				void register_getType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getType_void_callback = __method;
				}
				void register__updateRenderQueue_CRenderQueue_ParticleList_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__updateRenderQueue_CRenderQueue_ParticleList_ev_bool_callback = __method;
				}
				void register__setMaterial_CMaterialPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setMaterial_CMaterialPtr_callback = __method;
				}
				void register__notifyCurrentCamera_CCamera_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyCurrentCamera_CCamera_callback = __method;
				}
				void register__notifyAttached_CNode_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyAttached_CNode_ev_bool_callback = __method;
				}
				void register__notifyAttached_CNode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyAttached_CNode_callback = __method;
				}
				void register__notifyParticleRotated_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyParticleRotated_void_callback = __method;
				}
				void register__notifyParticleResized_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyParticleResized_void_callback = __method;
				}
				void register__notifyParticleQuota_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyParticleQuota_ev_size_t_callback = __method;
				}
				void register__notifyDefaultDimensions_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyDefaultDimensions_Real_Real_callback = __method;
				}
				void register__notifyParticleEmitted_CParticle_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyParticleEmitted_CParticle_callback = __method;
				}
				void register__notifyParticleExpired_CParticle_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyParticleExpired_CParticle_callback = __method;
				}
				void register__notifyParticleMoved_ParticleList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyParticleMoved_ParticleList_callback = __method;
				}
				void register__notifyParticleCleared_ParticleList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyParticleCleared_ParticleList_callback = __method;
				}
				void register__createVisualData_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__createVisualData_void_callback = __method;
				}
				void register__destroyVisualData_CParticleVisualData_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__destroyVisualData_CParticleVisualData_callback = __method;
				}
				void register_setRenderQueueGroup_ev_uint8_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setRenderQueueGroup_ev_uint8_callback = __method;
				}
				void register_setKeepParticlesInLocalSpace_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setKeepParticlesInLocalSpace_ev_bool_callback = __method;
				}
				void register__getSortMode_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getSortMode_void_callback = __method;
				}
				void register_visitRenderables_CVisitor_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_visitRenderables_CVisitor_ev_bool_callback = __method;
				}
				void register_visitRenderables_CVisitor_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_visitRenderables_CVisitor_callback = __method;
				}
				void register_setParameter_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setParameter_EVString_EVString_callback = __method;
				}
				void register_setParameter_EVString_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setParameter_EVString_ev_bool_ev_bool_callback = __method;
				}
				void register_setParameterList_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setParameterList_CommonStringPairList_callback = __method;
				}
				void register_getParameter_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getParameter_EVString_callback = __method;
				}
				void register_copyParametersTo_CStringInterface_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_copyParametersTo_CStringInterface_callback = __method;
				}
				virtual EVString getType() const
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
						return this->CBillboardParticleRenderer::getType();
					}
				}
				virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue* queue, EarthView::World::Graphic::ParticleList& currentParticles, ev_bool cullIndividually)
				{
					if (this->_gRef != NULL && this->m__updateRenderQueue_CRenderQueue_ParticleList_ev_bool_callback != "" && this->isCustomExtend())
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
						jlong queue_j = (jlong) queue;
						jlong currentParticles_j = (jlong) &currentParticles;
						jboolean cullIndividually_j = (jboolean) cullIndividually;
						jmethodID __method = __gr->getMethod("_updateRenderQueue_CRenderQueue_ParticleList_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , queue_j, currentParticles_j, cullIndividually_j);
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
						return this->CBillboardParticleRenderer::_updateRenderQueue(queue, currentParticles, cullIndividually);
					}
				}
				virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor* visitor, ev_bool debugRenderables)
				{
					if (this->_gRef != NULL && this->m_visitRenderables_CVisitor_ev_bool_callback != "" && this->isCustomExtend())
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
						jlong visitor_j = (jlong) visitor;
						jboolean debugRenderables_j = (jboolean) debugRenderables;
						jmethodID __method = __gr->getMethod("visitRenderables_CVisitor_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , visitor_j, debugRenderables_j);
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
						return this->CBillboardParticleRenderer::visitRenderables(visitor, debugRenderables);
					}
				}
				virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor* visitor)
				{
					if (this->_gRef != NULL && this->m_visitRenderables_CVisitor_callback != "" && this->isCustomExtend())
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
						jlong visitor_j = (jlong) visitor;
						jmethodID __method = __gr->getMethod("visitRenderables_CVisitor_callback");
						__env->CallVoidMethod(__obj, __method , visitor_j);
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
						return this->CBillboardParticleRenderer::visitRenderables(visitor);
					}
				}
				virtual void _setMaterial(EarthView::World::Graphic::CMaterialPtr& mat)
				{
					if (this->_gRef != NULL && this->m__setMaterial_CMaterialPtr_callback != "" && this->isCustomExtend())
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
						jlong mat_j = (jlong) &mat;
						jmethodID __method = __gr->getMethod("_setMaterial_CMaterialPtr_callback");
						__env->CallVoidMethod(__obj, __method , mat_j);
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
						return this->CBillboardParticleRenderer::_setMaterial(mat);
					}
				}
				virtual void _notifyCurrentCamera(EarthView::World::Graphic::CCamera* ref_cam)
				{
					if (this->_gRef != NULL && this->m__notifyCurrentCamera_CCamera_callback != "" && this->isCustomExtend())
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
						jlong ref_cam_j = (jlong) ref_cam;
						jmethodID __method = __gr->getMethod("_notifyCurrentCamera_CCamera_callback");
						__env->CallVoidMethod(__obj, __method , ref_cam_j);
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
						return this->CBillboardParticleRenderer::_notifyCurrentCamera(ref_cam);
					}
				}
				virtual void _notifyParticleRotated()
				{
					if (this->_gRef != NULL && this->m__notifyParticleRotated_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_notifyParticleRotated_void_callback");
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
						return this->CBillboardParticleRenderer::_notifyParticleRotated();
					}
				}
				virtual void _notifyParticleResized()
				{
					if (this->_gRef != NULL && this->m__notifyParticleResized_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_notifyParticleResized_void_callback");
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
						return this->CBillboardParticleRenderer::_notifyParticleResized();
					}
				}
				virtual void _notifyParticleQuota(ev_size_t quota)
				{
					if (this->_gRef != NULL && this->m__notifyParticleQuota_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong quota_j = (jlong) quota;
						jmethodID __method = __gr->getMethod("_notifyParticleQuota_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , quota_j);
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
						return this->CBillboardParticleRenderer::_notifyParticleQuota(quota);
					}
				}
				virtual void _notifyAttached(EarthView::World::Graphic::CNode* ref_parent, ev_bool isTagPoint)
				{
					if (this->_gRef != NULL && this->m__notifyAttached_CNode_ev_bool_callback != "" && this->isCustomExtend())
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
						jlong ref_parent_j = (jlong) ref_parent;
						jboolean isTagPoint_j = (jboolean) isTagPoint;
						jmethodID __method = __gr->getMethod("_notifyAttached_CNode_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , ref_parent_j, isTagPoint_j);
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
						return this->CBillboardParticleRenderer::_notifyAttached(ref_parent, isTagPoint);
					}
				}
				virtual void _notifyAttached(EarthView::World::Graphic::CNode* ref_parent)
				{
					if (this->_gRef != NULL && this->m__notifyAttached_CNode_callback != "" && this->isCustomExtend())
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
						jlong ref_parent_j = (jlong) ref_parent;
						jmethodID __method = __gr->getMethod("_notifyAttached_CNode_callback");
						__env->CallVoidMethod(__obj, __method , ref_parent_j);
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
						return this->CBillboardParticleRenderer::_notifyAttached(ref_parent);
					}
				}
				virtual void _notifyDefaultDimensions(Real width, Real height)
				{
					if (this->_gRef != NULL && this->m__notifyDefaultDimensions_Real_Real_callback != "" && this->isCustomExtend())
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
						jdouble width_j = (jdouble) width;
						jdouble height_j = (jdouble) height;
						jmethodID __method = __gr->getMethod("_notifyDefaultDimensions_Real_Real_callback");
						__env->CallVoidMethod(__obj, __method , width_j, height_j);
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
						return this->CBillboardParticleRenderer::_notifyDefaultDimensions(width, height);
					}
				}
				virtual void setRenderQueueGroup(ev_uint8 queueID)
				{
					if (this->_gRef != NULL && this->m_setRenderQueueGroup_ev_uint8_callback != "" && this->isCustomExtend())
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
						jshort queueID_j = (jshort) queueID;
						jmethodID __method = __gr->getMethod("setRenderQueueGroup_ev_uint8_callback");
						__env->CallVoidMethod(__obj, __method , queueID_j);
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
						return this->CBillboardParticleRenderer::setRenderQueueGroup(queueID);
					}
				}
				virtual void setKeepParticlesInLocalSpace(ev_bool keepLocal)
				{
					if (this->_gRef != NULL && this->m_setKeepParticlesInLocalSpace_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean keepLocal_j = (jboolean) keepLocal;
						jmethodID __method = __gr->getMethod("setKeepParticlesInLocalSpace_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , keepLocal_j);
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
						return this->CBillboardParticleRenderer::setKeepParticlesInLocalSpace(keepLocal);
					}
				}
				virtual EarthView::World::Graphic::SortMode _getSortMode() const
				{
					if (this->_gRef != NULL && this->m__getSortMode_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_getSortMode_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::SortMode __values1 = (EarthView::World::Graphic::SortMode) __values1_j;
						return __values1;
					}
					else
					{
						return this->CBillboardParticleRenderer::_getSortMode();
					}
				}
				virtual void _notifyParticleEmitted(EarthView::World::Graphic::CParticle* particle)
				{
					if (this->_gRef != NULL && this->m__notifyParticleEmitted_CParticle_callback != "" && this->isCustomExtend())
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
						jlong particle_j = (jlong) particle;
						jmethodID __method = __gr->getMethod("_notifyParticleEmitted_CParticle_callback");
						__env->CallVoidMethod(__obj, __method , particle_j);
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
						return this->CBillboardParticleRenderer::_notifyParticleEmitted(particle);
					}
				}
				virtual void _notifyParticleExpired(EarthView::World::Graphic::CParticle* particle)
				{
					if (this->_gRef != NULL && this->m__notifyParticleExpired_CParticle_callback != "" && this->isCustomExtend())
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
						jlong particle_j = (jlong) particle;
						jmethodID __method = __gr->getMethod("_notifyParticleExpired_CParticle_callback");
						__env->CallVoidMethod(__obj, __method , particle_j);
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
						return this->CBillboardParticleRenderer::_notifyParticleExpired(particle);
					}
				}
				virtual void _notifyParticleMoved(EarthView::World::Graphic::ParticleList& currentParticles)
				{
					if (this->_gRef != NULL && this->m__notifyParticleMoved_ParticleList_callback != "" && this->isCustomExtend())
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
						jlong currentParticles_j = (jlong) &currentParticles;
						jmethodID __method = __gr->getMethod("_notifyParticleMoved_ParticleList_callback");
						__env->CallVoidMethod(__obj, __method , currentParticles_j);
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
						return this->CBillboardParticleRenderer::_notifyParticleMoved(currentParticles);
					}
				}
				virtual void _notifyParticleCleared(EarthView::World::Graphic::ParticleList& currentParticles)
				{
					if (this->_gRef != NULL && this->m__notifyParticleCleared_ParticleList_callback != "" && this->isCustomExtend())
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
						jlong currentParticles_j = (jlong) &currentParticles;
						jmethodID __method = __gr->getMethod("_notifyParticleCleared_ParticleList_callback");
						__env->CallVoidMethod(__obj, __method , currentParticles_j);
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
						return this->CBillboardParticleRenderer::_notifyParticleCleared(currentParticles);
					}
				}
				virtual EarthView::World::Graphic::CParticleVisualData* _createVisualData()
				{
					if (this->_gRef != NULL && this->m__createVisualData_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_createVisualData_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CParticleVisualData *__values1 = (EarthView::World::Graphic::CParticleVisualData*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CBillboardParticleRenderer::_createVisualData();
					}
				}
				virtual void _destroyVisualData(EarthView::World::Graphic::CParticleVisualData* vis)
				{
					if (this->_gRef != NULL && this->m__destroyVisualData_CParticleVisualData_callback != "" && this->isCustomExtend())
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
						jlong vis_j = (jlong) vis;
						jmethodID __method = __gr->getMethod("_destroyVisualData_CParticleVisualData_callback");
						__env->CallVoidMethod(__obj, __method , vis_j);
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
						return this->CBillboardParticleRenderer::_destroyVisualData(vis);
					}
				}
				virtual ev_bool setParameter(const EVString& name, const EVString& value)
				{
					if (this->_gRef != NULL && this->m_setParameter_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring value_wch = value;
						jstring value_j = __env->NewString((const jchar*)value_wch.getString(), value_wch.size());
						jmethodID __method = __gr->getMethod("setParameter_EVString_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j, value_j);
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
						return this->CBillboardParticleRenderer::setParameter(name, value);
					}
				}
				virtual ev_bool setParameter(const EVString& name, ev_bool readOnly, ev_bool enable)
				{
					if (this->_gRef != NULL && this->m_setParameter_EVString_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean readOnly_j = (jboolean) readOnly;
						jboolean enable_j = (jboolean) enable;
						jmethodID __method = __gr->getMethod("setParameter_EVString_ev_bool_ev_bool_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j, readOnly_j, enable_j);
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
						return this->CBillboardParticleRenderer::setParameter(name, readOnly, enable);
					}
				}
				virtual void setParameterList(const EarthView::World::Core::CommonStringPairList& paramList)
				{
					if (this->_gRef != NULL && this->m_setParameterList_CommonStringPairList_callback != "" && this->isCustomExtend())
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
						jlong paramList_j = (jlong) &paramList;
						jmethodID __method = __gr->getMethod("setParameterList_CommonStringPairList_callback");
						__env->CallVoidMethod(__obj, __method , paramList_j);
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
						return this->CBillboardParticleRenderer::setParameterList(paramList);
					}
				}
				virtual EVString getParameter(const EVString& name) const
				{
					if (this->_gRef != NULL && this->m_getParameter_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getParameter_EVString_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , name_j);
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
						return this->CBillboardParticleRenderer::getParameter(name);
					}
				}
				virtual void copyParametersTo(EarthView::World::Core::CStringInterface* dest) const
				{
					if (this->_gRef != NULL && this->m_copyParametersTo_CStringInterface_callback != "" && this->isCustomExtend())
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
						jlong dest_j = (jlong) dest;
						jmethodID __method = __gr->getMethod("copyParametersTo_CStringInterface_callback");
						__env->CallVoidMethod(__obj, __method , dest_j);
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
						return this->CBillboardParticleRenderer::copyParametersTo(dest);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCBillboardParticleRendererProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_setBillboardType_1BillboardType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint bbt_j)
			{
				EarthView::World::Graphic::BillboardType bbt = (EarthView::World::Graphic::BillboardType) bbt_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				pObjectX->setBillboardType(bbt);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_getBillboardType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				EarthView::World::Graphic::BillboardType __values1 = pObjectX->getBillboardType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_setUseAccurateFacing_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean acc_j)
			{
				ev_bool acc = (ev_bool) acc_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				pObjectX->setUseAccurateFacing(acc);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_getUseAccurateFacing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				ev_bool __values1 = pObjectX->getUseAccurateFacing();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_setBillboardOrigin_1BillboardOrigin(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint origin_j)
			{
				EarthView::World::Graphic::BillboardOrigin origin = (EarthView::World::Graphic::BillboardOrigin) origin_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				pObjectX->setBillboardOrigin(origin);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_getBillboardOrigin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				EarthView::World::Graphic::BillboardOrigin __values1 = pObjectX->getBillboardOrigin();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_setBillboardRotationType_1BillboardRotationType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint rotationType_j)
			{
				EarthView::World::Graphic::BillboardRotationType rotationType = (EarthView::World::Graphic::BillboardRotationType) rotationType_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				pObjectX->setBillboardRotationType(rotationType);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_getBillboardRotationType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				EarthView::World::Graphic::BillboardRotationType __values1 = pObjectX->getBillboardRotationType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_setCommonDirection_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vec_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &vec = *(EarthView::World::Spatial::Math::CVector3*) vec_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				pObjectX->setCommonDirection(vec);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_getCommonDirection_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getCommonDirection();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_setCommonUpVector_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vec_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &vec = *(EarthView::World::Spatial::Math::CVector3*) vec_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				pObjectX->setCommonUpVector(vec);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_getCommonUpVector_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getCommonUpVector();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_setPointRenderingEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				pObjectX->setPointRenderingEnabled(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_isPointRenderingEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				ev_bool __values1 = pObjectX->isPointRenderingEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBillboardParticleRendererProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::getType();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getType();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererProxy *pObjectX = (JCBillboardParticleRendererProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getType_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::getType();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer__1updateRenderQueue_1CRenderQueue_1ParticleList_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong queue_j, jlong currentParticles_j, jboolean cullIndividually_j)
			{
				EarthView::World::Graphic::CRenderQueue *queue = (EarthView::World::Graphic::CRenderQueue*) queue_j;
				EarthView::World::Graphic::ParticleList &currentParticles = *(EarthView::World::Graphic::ParticleList*) currentParticles_j;
				ev_bool cullIndividually = (ev_bool) cullIndividually_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBillboardParticleRendererProxy))
				{
					pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::_updateRenderQueue(queue, currentParticles, cullIndividually);
				}
				else
				{
					pObjectX->_updateRenderQueue(queue, currentParticles, cullIndividually);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_register_1_1updateRenderQueue_1CRenderQueue_1ParticleList_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererProxy *pObjectX = (JCBillboardParticleRendererProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__updateRenderQueue_CRenderQueue_ParticleList_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_updateRenderQueue_CRenderQueue_ParticleList_ev_bool_callback", "(JJZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer__1updateRenderQueue_1CRenderQueue_1ParticleList_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong queue_j, jlong currentParticles_j, jboolean cullIndividually_j)
			{
				EarthView::World::Graphic::CRenderQueue *queue = (EarthView::World::Graphic::CRenderQueue*) queue_j;
				EarthView::World::Graphic::ParticleList &currentParticles = *(EarthView::World::Graphic::ParticleList*) currentParticles_j;
				ev_bool cullIndividually = (ev_bool) cullIndividually_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::_updateRenderQueue(queue, currentParticles, cullIndividually);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_visitRenderables_1CVisitor_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visitor_j, jboolean debugRenderables_j)
			{
				EarthView::World::Graphic::CRenderable::CVisitor *visitor = (EarthView::World::Graphic::CRenderable::CVisitor*) visitor_j;
				ev_bool debugRenderables = (ev_bool) debugRenderables_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBillboardParticleRendererProxy))
				{
					pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::visitRenderables(visitor, debugRenderables);
				}
				else
				{
					pObjectX->visitRenderables(visitor, debugRenderables);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_register_1visitRenderables_1CVisitor_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererProxy *pObjectX = (JCBillboardParticleRendererProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_visitRenderables_CVisitor_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"visitRenderables_CVisitor_ev_bool_callback", "(JZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_visitRenderables_1CVisitor_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visitor_j, jboolean debugRenderables_j)
			{
				EarthView::World::Graphic::CRenderable::CVisitor *visitor = (EarthView::World::Graphic::CRenderable::CVisitor*) visitor_j;
				ev_bool debugRenderables = (ev_bool) debugRenderables_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::visitRenderables(visitor, debugRenderables);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_visitRenderables_1CVisitor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visitor_j)
			{
				EarthView::World::Graphic::CRenderable::CVisitor *visitor = (EarthView::World::Graphic::CRenderable::CVisitor*) visitor_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBillboardParticleRendererProxy))
				{
					pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::visitRenderables(visitor);
				}
				else
				{
					pObjectX->visitRenderables(visitor);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_register_1visitRenderables_1CVisitor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererProxy *pObjectX = (JCBillboardParticleRendererProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_visitRenderables_CVisitor_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"visitRenderables_CVisitor_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_visitRenderables_1CVisitor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visitor_j)
			{
				EarthView::World::Graphic::CRenderable::CVisitor *visitor = (EarthView::World::Graphic::CRenderable::CVisitor*) visitor_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::visitRenderables(visitor);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer__1setMaterial_1CMaterialPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mat_j)
			{
				EarthView::World::Graphic::CMaterialPtr &mat = *(EarthView::World::Graphic::CMaterialPtr*) mat_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBillboardParticleRendererProxy))
				{
					pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::_setMaterial(mat);
				}
				else
				{
					pObjectX->_setMaterial(mat);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_register_1_1setMaterial_1CMaterialPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererProxy *pObjectX = (JCBillboardParticleRendererProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setMaterial_CMaterialPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setMaterial_CMaterialPtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer__1setMaterial_1CMaterialPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mat_j)
			{
				EarthView::World::Graphic::CMaterialPtr &mat = *(EarthView::World::Graphic::CMaterialPtr*) mat_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::_setMaterial(mat);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer__1notifyCurrentCamera_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_cam_j)
			{
				EarthView::World::Graphic::CCamera *ref_cam = (EarthView::World::Graphic::CCamera*) ref_cam_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBillboardParticleRendererProxy))
				{
					pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyCurrentCamera(ref_cam);
				}
				else
				{
					pObjectX->_notifyCurrentCamera(ref_cam);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_register_1_1notifyCurrentCamera_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererProxy *pObjectX = (JCBillboardParticleRendererProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyCurrentCamera_CCamera_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyCurrentCamera_CCamera_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer__1notifyCurrentCamera_1CCamera_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_cam_j)
			{
				EarthView::World::Graphic::CCamera *ref_cam = (EarthView::World::Graphic::CCamera*) ref_cam_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyCurrentCamera(ref_cam);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer__1notifyParticleRotated_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBillboardParticleRendererProxy))
				{
					pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyParticleRotated();
				}
				else
				{
					pObjectX->_notifyParticleRotated();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_register_1_1notifyParticleRotated_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererProxy *pObjectX = (JCBillboardParticleRendererProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyParticleRotated_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyParticleRotated_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer__1notifyParticleRotated_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyParticleRotated();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer__1notifyParticleResized_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBillboardParticleRendererProxy))
				{
					pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyParticleResized();
				}
				else
				{
					pObjectX->_notifyParticleResized();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_register_1_1notifyParticleResized_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererProxy *pObjectX = (JCBillboardParticleRendererProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyParticleResized_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyParticleResized_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer__1notifyParticleResized_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyParticleResized();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer__1notifyParticleQuota_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong quota_j)
			{
				ev_size_t quota = (ev_size_t) quota_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBillboardParticleRendererProxy))
				{
					pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyParticleQuota(quota);
				}
				else
				{
					pObjectX->_notifyParticleQuota(quota);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_register_1_1notifyParticleQuota_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererProxy *pObjectX = (JCBillboardParticleRendererProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyParticleQuota_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyParticleQuota_ev_size_t_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer__1notifyParticleQuota_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong quota_j)
			{
				ev_size_t quota = (ev_size_t) quota_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyParticleQuota(quota);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer__1notifyAttached_1CNode_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_parent_j, jboolean isTagPoint_j)
			{
				EarthView::World::Graphic::CNode *ref_parent = (EarthView::World::Graphic::CNode*) ref_parent_j;
				ev_bool isTagPoint = (ev_bool) isTagPoint_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBillboardParticleRendererProxy))
				{
					pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyAttached(ref_parent, isTagPoint);
				}
				else
				{
					pObjectX->_notifyAttached(ref_parent, isTagPoint);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_register_1_1notifyAttached_1CNode_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererProxy *pObjectX = (JCBillboardParticleRendererProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyAttached_CNode_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyAttached_CNode_ev_bool_callback", "(JZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer__1notifyAttached_1CNode_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_parent_j, jboolean isTagPoint_j)
			{
				EarthView::World::Graphic::CNode *ref_parent = (EarthView::World::Graphic::CNode*) ref_parent_j;
				ev_bool isTagPoint = (ev_bool) isTagPoint_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyAttached(ref_parent, isTagPoint);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer__1notifyAttached_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_parent_j)
			{
				EarthView::World::Graphic::CNode *ref_parent = (EarthView::World::Graphic::CNode*) ref_parent_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBillboardParticleRendererProxy))
				{
					pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyAttached(ref_parent);
				}
				else
				{
					pObjectX->_notifyAttached(ref_parent);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_register_1_1notifyAttached_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererProxy *pObjectX = (JCBillboardParticleRendererProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyAttached_CNode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyAttached_CNode_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer__1notifyAttached_1CNode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_parent_j)
			{
				EarthView::World::Graphic::CNode *ref_parent = (EarthView::World::Graphic::CNode*) ref_parent_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyAttached(ref_parent);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer__1notifyDefaultDimensions_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble width_j, jdouble height_j)
			{
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBillboardParticleRendererProxy))
				{
					pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyDefaultDimensions(width, height);
				}
				else
				{
					pObjectX->_notifyDefaultDimensions(width, height);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_register_1_1notifyDefaultDimensions_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererProxy *pObjectX = (JCBillboardParticleRendererProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyDefaultDimensions_Real_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyDefaultDimensions_Real_Real_callback", "(DD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer__1notifyDefaultDimensions_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble width_j, jdouble height_j)
			{
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyDefaultDimensions(width, height);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_setRenderQueueGroup_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort queueID_j)
			{
				ev_uint8 queueID = (ev_uint8) queueID_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBillboardParticleRendererProxy))
				{
					pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::setRenderQueueGroup(queueID);
				}
				else
				{
					pObjectX->setRenderQueueGroup(queueID);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_register_1setRenderQueueGroup_1ev_1uint8(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererProxy *pObjectX = (JCBillboardParticleRendererProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setRenderQueueGroup_ev_uint8_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setRenderQueueGroup_ev_uint8_callback", "(S)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_setRenderQueueGroup_1ev_1uint8_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort queueID_j)
			{
				ev_uint8 queueID = (ev_uint8) queueID_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::setRenderQueueGroup(queueID);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_setKeepParticlesInLocalSpace_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean keepLocal_j)
			{
				ev_bool keepLocal = (ev_bool) keepLocal_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBillboardParticleRendererProxy))
				{
					pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::setKeepParticlesInLocalSpace(keepLocal);
				}
				else
				{
					pObjectX->setKeepParticlesInLocalSpace(keepLocal);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_register_1setKeepParticlesInLocalSpace_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererProxy *pObjectX = (JCBillboardParticleRendererProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setKeepParticlesInLocalSpace_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setKeepParticlesInLocalSpace_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_setKeepParticlesInLocalSpace_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean keepLocal_j)
			{
				ev_bool keepLocal = (ev_bool) keepLocal_j;
				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::setKeepParticlesInLocalSpace(keepLocal);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer__1getSortMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBillboardParticleRendererProxy))
				{
					EarthView::World::Graphic::SortMode __values1 = pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::_getSortMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::SortMode __values1 = pObjectX->_getSortMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_register_1_1getSortMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererProxy *pObjectX = (JCBillboardParticleRendererProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getSortMode_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getSortMode_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer__1getSortMode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				EarthView::World::Graphic::SortMode __values1 = pObjectX->EarthView::World::Graphic::CBillboardParticleRenderer::_getSortMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_getBillboardSet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBillboardParticleRenderer *pObjectX = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjXXXX;
				EarthView::World::Graphic::CBillboardSet* __values1 = pObjectX->getBillboardSet();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_register_1_1notifyParticleEmitted_1CParticle(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererProxy *pObjectX = (JCBillboardParticleRendererProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyParticleEmitted_CParticle_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyParticleEmitted_CParticle_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_register_1_1notifyParticleExpired_1CParticle(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererProxy *pObjectX = (JCBillboardParticleRendererProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyParticleExpired_CParticle_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyParticleExpired_CParticle_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_register_1_1notifyParticleMoved_1ParticleList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererProxy *pObjectX = (JCBillboardParticleRendererProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyParticleMoved_ParticleList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyParticleMoved_ParticleList_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_register_1_1notifyParticleCleared_1ParticleList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererProxy *pObjectX = (JCBillboardParticleRendererProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyParticleCleared_ParticleList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyParticleCleared_ParticleList_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_register_1_1createVisualData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererProxy *pObjectX = (JCBillboardParticleRendererProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__createVisualData_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_createVisualData_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_register_1_1destroyVisualData_1CParticleVisualData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererProxy *pObjectX = (JCBillboardParticleRendererProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__destroyVisualData_CParticleVisualData_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_destroyVisualData_CParticleVisualData_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_register_1setParameter_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererProxy *pObjectX = (JCBillboardParticleRendererProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setParameter_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setParameter_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_register_1setParameter_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererProxy *pObjectX = (JCBillboardParticleRendererProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setParameter_EVString_ev_bool_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setParameter_EVString_ev_bool_ev_bool_callback", "(Ljava/lang/String;ZZ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_register_1setParameterList_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererProxy *pObjectX = (JCBillboardParticleRendererProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setParameterList_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setParameterList_CommonStringPairList_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_register_1getParameter_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererProxy *pObjectX = (JCBillboardParticleRendererProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getParameter_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getParameter_EVString_callback", "(Ljava/lang/String;)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRenderer_register_1copyParametersTo_1CStringInterface(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererProxy *pObjectX = (JCBillboardParticleRendererProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_copyParametersTo_CStringInterface_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"copyParametersTo_CStringInterface_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCBillboardParticleRendererFactoryProxy : public EarthView::World::Graphic::CBillboardParticleRendererFactory
			{
			 private:
				EarthView::World::Core::ev_string m_getType_void_callback;
				EarthView::World::Core::ev_string m_createInstance_EVString_callback;
				EarthView::World::Core::ev_string m_destroyInstance_CParticleSystemRenderer_callback;
			public:
				JCBillboardParticleRendererFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CBillboardParticleRendererFactory(pList)
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
				void register_getType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getType_void_callback = __method;
				}
				void register_createInstance_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createInstance_EVString_callback = __method;
				}
				void register_destroyInstance_CParticleSystemRenderer_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyInstance_CParticleSystemRenderer_callback = __method;
				}
				virtual EVString getType() const
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
						return this->CBillboardParticleRendererFactory::getType();
					}
				}
				virtual EarthView::World::Graphic::CParticleSystemRenderer* createInstance(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_createInstance_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("createInstance_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CParticleSystemRenderer *__values1 = (EarthView::World::Graphic::CParticleSystemRenderer*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CBillboardParticleRendererFactory::createInstance(name);
					}
				}
				virtual void destroyInstance(EarthView::World::Graphic::CParticleSystemRenderer* inst)
				{
					if (this->_gRef != NULL && this->m_destroyInstance_CParticleSystemRenderer_callback != "" && this->isCustomExtend())
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
						jlong inst_j = (jlong) inst;
						jmethodID __method = __gr->getMethod("destroyInstance_CParticleSystemRenderer_callback");
						__env->CallVoidMethod(__obj, __method , inst_j);
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
						return this->CBillboardParticleRendererFactory::destroyInstance(inst);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCBillboardParticleRendererFactoryProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_BillboardParticleRendererFactory_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBillboardParticleRendererFactory *pObjectX = (EarthView::World::Graphic::CBillboardParticleRendererFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBillboardParticleRendererFactoryProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CBillboardParticleRendererFactory::getType();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getType();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRendererFactory_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererFactoryProxy *pObjectX = (JCBillboardParticleRendererFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getType_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_BillboardParticleRendererFactory_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBillboardParticleRendererFactory *pObjectX = (EarthView::World::Graphic::CBillboardParticleRendererFactory*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CBillboardParticleRendererFactory::getType();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_BillboardParticleRendererFactory_createInstance_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CBillboardParticleRendererFactory *pObjectX = (EarthView::World::Graphic::CBillboardParticleRendererFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBillboardParticleRendererFactoryProxy))
				{
					EarthView::World::Graphic::CParticleSystemRenderer* __values1 = pObjectX->EarthView::World::Graphic::CBillboardParticleRendererFactory::createInstance(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CParticleSystemRenderer* __values1 = pObjectX->createInstance(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRendererFactory_register_1createInstance_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererFactoryProxy *pObjectX = (JCBillboardParticleRendererFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createInstance_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createInstance_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_BillboardParticleRendererFactory_createInstance_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CBillboardParticleRendererFactory *pObjectX = (EarthView::World::Graphic::CBillboardParticleRendererFactory*) pObjXXXX;
				EarthView::World::Graphic::CParticleSystemRenderer* __values1 = pObjectX->EarthView::World::Graphic::CBillboardParticleRendererFactory::createInstance(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRendererFactory_destroyInstance_1CParticleSystemRenderer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong inst_j)
			{
				EarthView::World::Graphic::CParticleSystemRenderer *inst = (EarthView::World::Graphic::CParticleSystemRenderer*) inst_j;
				EarthView::World::Graphic::CBillboardParticleRendererFactory *pObjectX = (EarthView::World::Graphic::CBillboardParticleRendererFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBillboardParticleRendererFactoryProxy))
				{
					pObjectX->EarthView::World::Graphic::CBillboardParticleRendererFactory::destroyInstance(inst);
				}
				else
				{
					pObjectX->destroyInstance(inst);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRendererFactory_register_1destroyInstance_1CParticleSystemRenderer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBillboardParticleRendererFactoryProxy *pObjectX = (JCBillboardParticleRendererFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyInstance_CParticleSystemRenderer_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyInstance_CParticleSystemRenderer_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BillboardParticleRendererFactory_destroyInstance_1CParticleSystemRenderer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong inst_j)
			{
				EarthView::World::Graphic::CParticleSystemRenderer *inst = (EarthView::World::Graphic::CParticleSystemRenderer*) inst_j;
				EarthView::World::Graphic::CBillboardParticleRendererFactory *pObjectX = (EarthView::World::Graphic::CBillboardParticleRendererFactory*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CBillboardParticleRendererFactory::destroyInstance(inst);
			}
		}
	}
}
