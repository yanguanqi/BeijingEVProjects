/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/renderable.h"
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
			class JCRenderableProxy : public EarthView::World::Graphic::CRenderable
			{
			 private:
				EarthView::World::Core::ev_string m_getMaterial_void_callback;
				EarthView::World::Core::ev_string m_getTechnique_void_callback;
				EarthView::World::Core::ev_string m_getRenderOperation_CRenderOperation_callback;
				EarthView::World::Core::ev_string m_preRender_CSceneManager_CRenderSystem_callback;
				EarthView::World::Core::ev_string m_postRender_CSceneManager_CRenderSystem_callback;
				EarthView::World::Core::ev_string m_getWorldTransforms_CMatrix4_callback;
				EarthView::World::Core::ev_string m_getNumWorldTransforms_void_callback;
				EarthView::World::Core::ev_string m_getSquaredViewDepth_CCamera_callback;
				EarthView::World::Core::ev_string m_getLights_void_callback;
				EarthView::World::Core::ev_string m_getCastsShadows_void_callback;
				EarthView::World::Core::ev_string m__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback;
				EarthView::World::Core::ev_string m_setPolygonModeOverrideable_ev_bool_callback;
				EarthView::World::Core::ev_string m_getPolygonModeOverrideable_void_callback;
				EarthView::World::Core::ev_string m_setCustomAmbient_CColourValue_callback;
				EarthView::World::Core::ev_string m_getCustomAmbient_void_callback;
				EarthView::World::Core::ev_string m_getCustomAmbientEnabled_void_callback;
				EarthView::World::Core::ev_string m_setCustomAmbientEnabled_ev_bool_callback;
				EarthView::World::Core::ev_string m_getMovableObject_void_callback;
				EarthView::World::Core::ev_string m_addListener_CRenderableListener_callback;
				EarthView::World::Core::ev_string m_removeListener_CRenderableListener_callback;
				EarthView::World::Core::ev_string m_existListener_CRenderableListener_callback;
				EarthView::World::Core::ev_string m_getListenerCount_void_callback;
				EarthView::World::Core::ev_string m_getListener_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getRenderSystemData_void_callback;
				EarthView::World::Core::ev_string m_setRenderSystemData_CRenderSystemData_callback;
			public:
				JCRenderableProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderable(pList)
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
				void register_getMaterial_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMaterial_void_callback = __method;
				}
				void register_getTechnique_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTechnique_void_callback = __method;
				}
				void register_getRenderOperation_CRenderOperation_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getRenderOperation_CRenderOperation_callback = __method;
				}
				void register_preRender_CSceneManager_CRenderSystem_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_preRender_CSceneManager_CRenderSystem_callback = __method;
				}
				void register_postRender_CSceneManager_CRenderSystem_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_postRender_CSceneManager_CRenderSystem_callback = __method;
				}
				void register_getWorldTransforms_CMatrix4_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWorldTransforms_CMatrix4_callback = __method;
				}
				void register_getNumWorldTransforms_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNumWorldTransforms_void_callback = __method;
				}
				void register_getSquaredViewDepth_CCamera_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSquaredViewDepth_CCamera_callback = __method;
				}
				void register_getLights_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLights_void_callback = __method;
				}
				void register_getCastsShadows_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCastsShadows_void_callback = __method;
				}
				void register__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback = __method;
				}
				void register_setPolygonModeOverrideable_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setPolygonModeOverrideable_ev_bool_callback = __method;
				}
				void register_getPolygonModeOverrideable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPolygonModeOverrideable_void_callback = __method;
				}
				void register_setCustomAmbient_CColourValue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setCustomAmbient_CColourValue_callback = __method;
				}
				void register_getCustomAmbient_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCustomAmbient_void_callback = __method;
				}
				void register_getCustomAmbientEnabled_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCustomAmbientEnabled_void_callback = __method;
				}
				void register_setCustomAmbientEnabled_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setCustomAmbientEnabled_ev_bool_callback = __method;
				}
				void register_getMovableObject_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMovableObject_void_callback = __method;
				}
				void register_addListener_CRenderableListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addListener_CRenderableListener_callback = __method;
				}
				void register_removeListener_CRenderableListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeListener_CRenderableListener_callback = __method;
				}
				void register_existListener_CRenderableListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_existListener_CRenderableListener_callback = __method;
				}
				void register_getListenerCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getListenerCount_void_callback = __method;
				}
				void register_getListener_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getListener_ev_uint32_callback = __method;
				}
				void register_getRenderSystemData_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getRenderSystemData_void_callback = __method;
				}
				void register_setRenderSystemData_CRenderSystemData_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setRenderSystemData_CRenderSystemData_callback = __method;
				}
				virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const
				{
					if (this->_gRef != NULL && this->m_getMaterial_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getMaterial_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CMaterialPtr &__values1 = *(const EarthView::World::Graphic::CMaterialPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderable::getMaterial();
					}
				}
				virtual EarthView::World::Graphic::CTechnique* getTechnique() const
				{
					if (this->_gRef != NULL && this->m_getTechnique_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getTechnique_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CTechnique *__values1 = (EarthView::World::Graphic::CTechnique*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderable::getTechnique();
					}
				}
				virtual void getRenderOperation(EarthView::World::Graphic::CRenderOperation& op)
				{
					if (this->_gRef != NULL && this->m_getRenderOperation_CRenderOperation_callback != "" && this->isCustomExtend())
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
						jlong op_j = (jlong) &op;
						jmethodID __method = __gr->getMethod("getRenderOperation_CRenderOperation_callback");
						__env->CallVoidMethod(__obj, __method , op_j);
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
						return this->CRenderable::getRenderOperation(op);
					}
				}
				virtual ev_bool preRender(EarthView::World::Graphic::CSceneManager* sm, EarthView::World::Graphic::CRenderSystem* rsys)
				{
					if (this->_gRef != NULL && this->m_preRender_CSceneManager_CRenderSystem_callback != "" && this->isCustomExtend())
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
						jlong sm_j = (jlong) sm;
						jlong rsys_j = (jlong) rsys;
						jmethodID __method = __gr->getMethod("preRender_CSceneManager_CRenderSystem_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , sm_j, rsys_j);
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
						return this->CRenderable::preRender(sm, rsys);
					}
				}
				virtual void postRender(EarthView::World::Graphic::CSceneManager* sm, EarthView::World::Graphic::CRenderSystem* rsys)
				{
					if (this->_gRef != NULL && this->m_postRender_CSceneManager_CRenderSystem_callback != "" && this->isCustomExtend())
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
						jlong sm_j = (jlong) sm;
						jlong rsys_j = (jlong) rsys;
						jmethodID __method = __gr->getMethod("postRender_CSceneManager_CRenderSystem_callback");
						__env->CallVoidMethod(__obj, __method , sm_j, rsys_j);
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
						return this->CRenderable::postRender(sm, rsys);
					}
				}
				virtual void getWorldTransforms(EarthView::World::Spatial::Math::CMatrix4* xform) const
				{
					if (this->_gRef != NULL && this->m_getWorldTransforms_CMatrix4_callback != "" && this->isCustomExtend())
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
						jlong xform_j = (jlong) xform;
						jmethodID __method = __gr->getMethod("getWorldTransforms_CMatrix4_callback");
						__env->CallVoidMethod(__obj, __method , xform_j);
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
						return this->CRenderable::getWorldTransforms(xform);
					}
				}
				virtual ev_uint16 getNumWorldTransforms() const
				{
					if (this->_gRef != NULL && this->m_getNumWorldTransforms_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getNumWorldTransforms_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint16 __values1 = (ev_uint16) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderable::getNumWorldTransforms();
					}
				}
				virtual Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera* cam) const
				{
					if (this->_gRef != NULL && this->m_getSquaredViewDepth_CCamera_callback != "" && this->isCustomExtend())
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
						jlong cam_j = (jlong) cam;
						jmethodID __method = __gr->getMethod("getSquaredViewDepth_CCamera_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , cam_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderable::getSquaredViewDepth(cam);
					}
				}
				virtual const EarthView::World::Graphic::LightList& getLights() const
				{
					if (this->_gRef != NULL && this->m_getLights_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLights_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::LightList &__values1 = *(const EarthView::World::Graphic::LightList*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderable::getLights();
					}
				}
				virtual ev_bool getCastsShadows() const
				{
					if (this->_gRef != NULL && this->m_getCastsShadows_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getCastsShadows_void_callback");
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
						return this->CRenderable::getCastsShadows();
					}
				}
				virtual void _updateCustomGpuParameter(const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry& constantEntry, EarthView::World::Graphic::CGpuProgramParameters* params) const
				{
					if (this->_gRef != NULL && this->m__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback != "" && this->isCustomExtend())
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
						jlong constantEntry_j = (jlong) &constantEntry;
						jlong params_j = (jlong) params;
						jmethodID __method = __gr->getMethod("_updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback");
						__env->CallVoidMethod(__obj, __method , constantEntry_j, params_j);
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
						return this->CRenderable::_updateCustomGpuParameter(constantEntry, params);
					}
				}
				virtual void setPolygonModeOverrideable(ev_bool override)
				{
					if (this->_gRef != NULL && this->m_setPolygonModeOverrideable_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean override_j = (jboolean) override;
						jmethodID __method = __gr->getMethod("setPolygonModeOverrideable_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , override_j);
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
						return this->CRenderable::setPolygonModeOverrideable(override);
					}
				}
				virtual ev_bool getPolygonModeOverrideable() const
				{
					if (this->_gRef != NULL && this->m_getPolygonModeOverrideable_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getPolygonModeOverrideable_void_callback");
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
						return this->CRenderable::getPolygonModeOverrideable();
					}
				}
				virtual void setCustomAmbient(const EarthView::World::Graphic::CColourValue& ambient)
				{
					if (this->_gRef != NULL && this->m_setCustomAmbient_CColourValue_callback != "" && this->isCustomExtend())
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
						jlong ambient_j = (jlong) &ambient;
						jmethodID __method = __gr->getMethod("setCustomAmbient_CColourValue_callback");
						__env->CallVoidMethod(__obj, __method , ambient_j);
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
						return this->CRenderable::setCustomAmbient(ambient);
					}
				}
				virtual const EarthView::World::Graphic::CColourValue& getCustomAmbient() const
				{
					if (this->_gRef != NULL && this->m_getCustomAmbient_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getCustomAmbient_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CColourValue &__values1 = *(const EarthView::World::Graphic::CColourValue*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderable::getCustomAmbient();
					}
				}
				virtual bool getCustomAmbientEnabled() const
				{
					if (this->_gRef != NULL && this->m_getCustomAmbientEnabled_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getCustomAmbientEnabled_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						bool __values1 = (bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderable::getCustomAmbientEnabled();
					}
				}
				virtual void setCustomAmbientEnabled(ev_bool enabled)
				{
					if (this->_gRef != NULL && this->m_setCustomAmbientEnabled_ev_bool_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("setCustomAmbientEnabled_ev_bool_callback");
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
						return this->CRenderable::setCustomAmbientEnabled(enabled);
					}
				}
				virtual EarthView::World::Graphic::CMovableObject* getMovableObject() const
				{
					if (this->_gRef != NULL && this->m_getMovableObject_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getMovableObject_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CMovableObject *__values1 = (EarthView::World::Graphic::CMovableObject*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderable::getMovableObject();
					}
				}
				virtual void addListener(EarthView::World::Graphic::CRenderable::CRenderableListener* ref_listener)
				{
					if (this->_gRef != NULL && this->m_addListener_CRenderableListener_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("addListener_CRenderableListener_callback");
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
						return this->CRenderable::addListener(ref_listener);
					}
				}
				virtual void removeListener(EarthView::World::Graphic::CRenderable::CRenderableListener* listener)
				{
					if (this->_gRef != NULL && this->m_removeListener_CRenderableListener_callback != "" && this->isCustomExtend())
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
						jlong listener_j = (jlong) listener;
						jmethodID __method = __gr->getMethod("removeListener_CRenderableListener_callback");
						__env->CallVoidMethod(__obj, __method , listener_j);
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
						return this->CRenderable::removeListener(listener);
					}
				}
				virtual ev_bool existListener(EarthView::World::Graphic::CRenderable::CRenderableListener* listener) const
				{
					if (this->_gRef != NULL && this->m_existListener_CRenderableListener_callback != "" && this->isCustomExtend())
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
						jlong listener_j = (jlong) listener;
						jmethodID __method = __gr->getMethod("existListener_CRenderableListener_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , listener_j);
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
						return this->CRenderable::existListener(listener);
					}
				}
				virtual ev_uint32 getListenerCount() const
				{
					if (this->_gRef != NULL && this->m_getListenerCount_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getListenerCount_void_callback");
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
						return this->CRenderable::getListenerCount();
					}
				}
				virtual EarthView::World::Graphic::CRenderable::CRenderableListener* getListener(ev_uint32 index) const
				{
					if (this->_gRef != NULL && this->m_getListener_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getListener_ev_uint32_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CRenderable::CRenderableListener *__values1 = (EarthView::World::Graphic::CRenderable::CRenderableListener*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderable::getListener(index);
					}
				}
				virtual EarthView::World::Graphic::CRenderable::CRenderSystemData* getRenderSystemData() const
				{
					if (this->_gRef != NULL && this->m_getRenderSystemData_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getRenderSystemData_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CRenderable::CRenderSystemData *__values1 = (EarthView::World::Graphic::CRenderable::CRenderSystemData*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderable::getRenderSystemData();
					}
				}
				virtual void setRenderSystemData(EarthView::World::Graphic::CRenderable::CRenderSystemData* ref_val) const
				{
					if (this->_gRef != NULL && this->m_setRenderSystemData_CRenderSystemData_callback != "" && this->isCustomExtend())
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
						jlong ref_val_j = (jlong) ref_val;
						jmethodID __method = __gr->getMethod("setRenderSystemData_CRenderSystemData_callback");
						__env->CallVoidMethod(__obj, __method , ref_val_j);
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
						return this->CRenderable::setRenderSystemData(ref_val);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCRenderableProxy);
			class JCRenderableListenerProxy : public EarthView::World::Graphic::CRenderable::CRenderableListener
			{
			 private:
				EarthView::World::Core::ev_string m_preRender_CSceneManager_CRenderSystem_CRenderable_callback;
				EarthView::World::Core::ev_string m_postRender_CSceneManager_CRenderSystem_CRenderable_callback;
				EarthView::World::Core::ev_string m_destroyed_CRenderable_callback;
			public:
				JCRenderableListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderableListener(pList)
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
				void register_preRender_CSceneManager_CRenderSystem_CRenderable_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_preRender_CSceneManager_CRenderSystem_CRenderable_callback = __method;
				}
				void register_postRender_CSceneManager_CRenderSystem_CRenderable_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_postRender_CSceneManager_CRenderSystem_CRenderable_callback = __method;
				}
				void register_destroyed_CRenderable_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyed_CRenderable_callback = __method;
				}
				virtual ev_bool preRender(EarthView::World::Graphic::CSceneManager* sm, EarthView::World::Graphic::CRenderSystem* rsys, EarthView::World::Graphic::CRenderable* renderable)
				{
					if (this->_gRef != NULL && this->m_preRender_CSceneManager_CRenderSystem_CRenderable_callback != "" && this->isCustomExtend())
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
						jlong sm_j = (jlong) sm;
						jlong rsys_j = (jlong) rsys;
						jlong renderable_j = (jlong) renderable;
						jmethodID __method = __gr->getMethod("preRender_CSceneManager_CRenderSystem_CRenderable_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , sm_j, rsys_j, renderable_j);
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
						return this->CRenderableListener::preRender(sm, rsys, renderable);
					}
				}
				virtual void postRender(EarthView::World::Graphic::CSceneManager* sm, EarthView::World::Graphic::CRenderSystem* rsys, EarthView::World::Graphic::CRenderable* renderable)
				{
					if (this->_gRef != NULL && this->m_postRender_CSceneManager_CRenderSystem_CRenderable_callback != "" && this->isCustomExtend())
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
						jlong sm_j = (jlong) sm;
						jlong rsys_j = (jlong) rsys;
						jlong renderable_j = (jlong) renderable;
						jmethodID __method = __gr->getMethod("postRender_CSceneManager_CRenderSystem_CRenderable_callback");
						__env->CallVoidMethod(__obj, __method , sm_j, rsys_j, renderable_j);
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
						return this->CRenderableListener::postRender(sm, rsys, renderable);
					}
				}
				virtual void destroyed(EarthView::World::Graphic::CRenderable* renderable)
				{
					if (this->_gRef != NULL && this->m_destroyed_CRenderable_callback != "" && this->isCustomExtend())
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
						jlong renderable_j = (jlong) renderable;
						jmethodID __method = __gr->getMethod("destroyed_CRenderable_callback");
						__env->CallVoidMethod(__obj, __method , renderable_j);
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
						return this->CRenderableListener::destroyed(renderable);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCRenderableListenerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Renderable_00024RenderableListener_preRender_1CSceneManager_1CRenderSystem_1CRenderable(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong rsys_j, jlong renderable_j)
			{
				EarthView::World::Graphic::CSceneManager *sm = (EarthView::World::Graphic::CSceneManager*) sm_j;
				EarthView::World::Graphic::CRenderSystem *rsys = (EarthView::World::Graphic::CRenderSystem*) rsys_j;
				EarthView::World::Graphic::CRenderable *renderable = (EarthView::World::Graphic::CRenderable*) renderable_j;
				EarthView::World::Graphic::CRenderable::CRenderableListener *pObjectX = (EarthView::World::Graphic::CRenderable::CRenderableListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderable::CRenderableListener::preRender(sm, rsys, renderable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->preRender(sm, rsys, renderable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_00024RenderableListener_register_1preRender_1CSceneManager_1CRenderSystem_1CRenderable(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableListenerProxy *pObjectX = (JCRenderableListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_preRender_CSceneManager_CRenderSystem_CRenderable_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"preRender_CSceneManager_CRenderSystem_CRenderable_callback", "(JJJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Renderable_00024RenderableListener_preRender_1CSceneManager_1CRenderSystem_1CRenderable_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong rsys_j, jlong renderable_j)
			{
				EarthView::World::Graphic::CSceneManager *sm = (EarthView::World::Graphic::CSceneManager*) sm_j;
				EarthView::World::Graphic::CRenderSystem *rsys = (EarthView::World::Graphic::CRenderSystem*) rsys_j;
				EarthView::World::Graphic::CRenderable *renderable = (EarthView::World::Graphic::CRenderable*) renderable_j;
				EarthView::World::Graphic::CRenderable::CRenderableListener *pObjectX = (EarthView::World::Graphic::CRenderable::CRenderableListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderable::CRenderableListener::preRender(sm, rsys, renderable);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_00024RenderableListener_postRender_1CSceneManager_1CRenderSystem_1CRenderable(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong rsys_j, jlong renderable_j)
			{
				EarthView::World::Graphic::CSceneManager *sm = (EarthView::World::Graphic::CSceneManager*) sm_j;
				EarthView::World::Graphic::CRenderSystem *rsys = (EarthView::World::Graphic::CRenderSystem*) rsys_j;
				EarthView::World::Graphic::CRenderable *renderable = (EarthView::World::Graphic::CRenderable*) renderable_j;
				EarthView::World::Graphic::CRenderable::CRenderableListener *pObjectX = (EarthView::World::Graphic::CRenderable::CRenderableListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderable::CRenderableListener::postRender(sm, rsys, renderable);
				}
				else
				{
					pObjectX->postRender(sm, rsys, renderable);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_00024RenderableListener_register_1postRender_1CSceneManager_1CRenderSystem_1CRenderable(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableListenerProxy *pObjectX = (JCRenderableListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_postRender_CSceneManager_CRenderSystem_CRenderable_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"postRender_CSceneManager_CRenderSystem_CRenderable_callback", "(JJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_00024RenderableListener_postRender_1CSceneManager_1CRenderSystem_1CRenderable_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong rsys_j, jlong renderable_j)
			{
				EarthView::World::Graphic::CSceneManager *sm = (EarthView::World::Graphic::CSceneManager*) sm_j;
				EarthView::World::Graphic::CRenderSystem *rsys = (EarthView::World::Graphic::CRenderSystem*) rsys_j;
				EarthView::World::Graphic::CRenderable *renderable = (EarthView::World::Graphic::CRenderable*) renderable_j;
				EarthView::World::Graphic::CRenderable::CRenderableListener *pObjectX = (EarthView::World::Graphic::CRenderable::CRenderableListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderable::CRenderableListener::postRender(sm, rsys, renderable);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_00024RenderableListener_destroyed_1CRenderable(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderable_j)
			{
				EarthView::World::Graphic::CRenderable *renderable = (EarthView::World::Graphic::CRenderable*) renderable_j;
				EarthView::World::Graphic::CRenderable::CRenderableListener *pObjectX = (EarthView::World::Graphic::CRenderable::CRenderableListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderable::CRenderableListener::destroyed(renderable);
				}
				else
				{
					pObjectX->destroyed(renderable);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_00024RenderableListener_register_1destroyed_1CRenderable(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableListenerProxy *pObjectX = (JCRenderableListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyed_CRenderable_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyed_CRenderable_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_00024RenderableListener_destroyed_1CRenderable_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderable_j)
			{
				EarthView::World::Graphic::CRenderable *renderable = (EarthView::World::Graphic::CRenderable*) renderable_j;
				EarthView::World::Graphic::CRenderable::CRenderableListener *pObjectX = (EarthView::World::Graphic::CRenderable::CRenderableListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderable::CRenderableListener::destroyed(renderable);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Renderable_getMaterial_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableProxy))
				{
					const EarthView::World::Graphic::CMaterialPtr& __values1 = pObjectX->EarthView::World::Graphic::CRenderable::getMaterial();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CMaterialPtr& __values1 = pObjectX->getMaterial();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_register_1getMaterial_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableProxy *pObjectX = (JCRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMaterial_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMaterial_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Renderable_getMaterial_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				const EarthView::World::Graphic::CMaterialPtr& __values1 = pObjectX->EarthView::World::Graphic::CRenderable::getMaterial();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Renderable_getTechnique_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableProxy))
				{
					EarthView::World::Graphic::CTechnique* __values1 = pObjectX->EarthView::World::Graphic::CRenderable::getTechnique();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CTechnique* __values1 = pObjectX->getTechnique();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_register_1getTechnique_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableProxy *pObjectX = (JCRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTechnique_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTechnique_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Renderable_getTechnique_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				EarthView::World::Graphic::CTechnique* __values1 = pObjectX->EarthView::World::Graphic::CRenderable::getTechnique();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_getRenderOperation_1CRenderOperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong op_j)
			{
				EarthView::World::Graphic::CRenderOperation &op = *(EarthView::World::Graphic::CRenderOperation*) op_j;
				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderable::getRenderOperation(op);
				}
				else
				{
					pObjectX->getRenderOperation(op);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_register_1getRenderOperation_1CRenderOperation(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableProxy *pObjectX = (JCRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getRenderOperation_CRenderOperation_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getRenderOperation_CRenderOperation_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_getRenderOperation_1CRenderOperation_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong op_j)
			{
				EarthView::World::Graphic::CRenderOperation &op = *(EarthView::World::Graphic::CRenderOperation*) op_j;
				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderable::getRenderOperation(op);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Renderable_preRender_1CSceneManager_1CRenderSystem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong rsys_j)
			{
				EarthView::World::Graphic::CSceneManager *sm = (EarthView::World::Graphic::CSceneManager*) sm_j;
				EarthView::World::Graphic::CRenderSystem *rsys = (EarthView::World::Graphic::CRenderSystem*) rsys_j;
				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderable::preRender(sm, rsys);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->preRender(sm, rsys);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_register_1preRender_1CSceneManager_1CRenderSystem(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableProxy *pObjectX = (JCRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_preRender_CSceneManager_CRenderSystem_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"preRender_CSceneManager_CRenderSystem_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Renderable_preRender_1CSceneManager_1CRenderSystem_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong rsys_j)
			{
				EarthView::World::Graphic::CSceneManager *sm = (EarthView::World::Graphic::CSceneManager*) sm_j;
				EarthView::World::Graphic::CRenderSystem *rsys = (EarthView::World::Graphic::CRenderSystem*) rsys_j;
				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderable::preRender(sm, rsys);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_postRender_1CSceneManager_1CRenderSystem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong rsys_j)
			{
				EarthView::World::Graphic::CSceneManager *sm = (EarthView::World::Graphic::CSceneManager*) sm_j;
				EarthView::World::Graphic::CRenderSystem *rsys = (EarthView::World::Graphic::CRenderSystem*) rsys_j;
				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderable::postRender(sm, rsys);
				}
				else
				{
					pObjectX->postRender(sm, rsys);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_register_1postRender_1CSceneManager_1CRenderSystem(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableProxy *pObjectX = (JCRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_postRender_CSceneManager_CRenderSystem_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"postRender_CSceneManager_CRenderSystem_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_postRender_1CSceneManager_1CRenderSystem_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong rsys_j)
			{
				EarthView::World::Graphic::CSceneManager *sm = (EarthView::World::Graphic::CSceneManager*) sm_j;
				EarthView::World::Graphic::CRenderSystem *rsys = (EarthView::World::Graphic::CRenderSystem*) rsys_j;
				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderable::postRender(sm, rsys);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_getWorldTransforms_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xform_j)
			{
				EarthView::World::Spatial::Math::CMatrix4 *xform = (EarthView::World::Spatial::Math::CMatrix4*) xform_j;
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderable::getWorldTransforms(xform);
				}
				else
				{
					pObjectX->getWorldTransforms(xform);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_register_1getWorldTransforms_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableProxy *pObjectX = (JCRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWorldTransforms_CMatrix4_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWorldTransforms_CMatrix4_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_getWorldTransforms_1CMatrix4_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xform_j)
			{
				EarthView::World::Spatial::Math::CMatrix4 *xform = (EarthView::World::Spatial::Math::CMatrix4*) xform_j;
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderable::getWorldTransforms(xform);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Renderable_getNumWorldTransforms_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CRenderable::getNumWorldTransforms();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint16 __values1 = pObjectX->getNumWorldTransforms();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_register_1getNumWorldTransforms_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableProxy *pObjectX = (JCRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNumWorldTransforms_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNumWorldTransforms_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Renderable_getNumWorldTransforms_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CRenderable::getNumWorldTransforms();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_setUseIdentityProjection_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useIdentityProjection_j)
			{
				ev_bool useIdentityProjection = (ev_bool) useIdentityProjection_j;
				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				pObjectX->setUseIdentityProjection(useIdentityProjection);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Renderable_getUseIdentityProjection_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				ev_bool __values1 = pObjectX->getUseIdentityProjection();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_setCustomProjection_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean customProjection_j)
			{
				ev_bool customProjection = (ev_bool) customProjection_j;
				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				pObjectX->setCustomProjection(customProjection);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Renderable_getCustomProjection_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				ev_bool __values1 = pObjectX->getCustomProjection();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_setUseIdentityView_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useIdentityView_j)
			{
				ev_bool useIdentityView = (ev_bool) useIdentityView_j;
				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				pObjectX->setUseIdentityView(useIdentityView);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Renderable_getUseIdentityView_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				ev_bool __values1 = pObjectX->getUseIdentityView();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Renderable_getSquaredViewDepth_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cam_j)
			{
				const EarthView::World::Graphic::CCamera *cam = (const EarthView::World::Graphic::CCamera*) cam_j;
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CRenderable::getSquaredViewDepth(cam);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getSquaredViewDepth(cam);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_register_1getSquaredViewDepth_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableProxy *pObjectX = (JCRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSquaredViewDepth_CCamera_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSquaredViewDepth_CCamera_callback", "(J)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Renderable_getSquaredViewDepth_1CCamera_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cam_j)
			{
				const EarthView::World::Graphic::CCamera *cam = (const EarthView::World::Graphic::CCamera*) cam_j;
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CRenderable::getSquaredViewDepth(cam);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Renderable_getLights_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableProxy))
				{
					const EarthView::World::Graphic::LightList& __values1 = pObjectX->EarthView::World::Graphic::CRenderable::getLights();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::LightList& __values1 = pObjectX->getLights();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_register_1getLights_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableProxy *pObjectX = (JCRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLights_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLights_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Renderable_getLights_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				const EarthView::World::Graphic::LightList& __values1 = pObjectX->EarthView::World::Graphic::CRenderable::getLights();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Renderable_getCastsShadows_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderable::getCastsShadows();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getCastsShadows();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_register_1getCastsShadows_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableProxy *pObjectX = (JCRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCastsShadows_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCastsShadows_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Renderable_getCastsShadows_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderable::getCastsShadows();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_setCustomParameter_1ev_1size_1t_1CVector4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong value_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const EarthView::World::Spatial::Math::CVector4 &value = *(EarthView::World::Spatial::Math::CVector4*) value_j;
				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				pObjectX->setCustomParameter(index, value);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_removeCustomParameter_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				size_t index = (size_t) index_j;
				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				pObjectX->removeCustomParameter(index);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Renderable_hasCustomParameter_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				size_t index = (size_t) index_j;
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				bool __values1 = pObjectX->hasCustomParameter(index);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Renderable_getCustomParameter_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->getCustomParameter(index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable__1updateCustomGpuParameter_1CAutoConstantEntry_1CGpuProgramParameters(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong constantEntry_j, jlong params_j)
			{
				const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry &constantEntry = *(EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*) constantEntry_j;
				EarthView::World::Graphic::CGpuProgramParameters *params = (EarthView::World::Graphic::CGpuProgramParameters*) params_j;
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderable::_updateCustomGpuParameter(constantEntry, params);
				}
				else
				{
					pObjectX->_updateCustomGpuParameter(constantEntry, params);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_register_1_1updateCustomGpuParameter_1CAutoConstantEntry_1CGpuProgramParameters(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableProxy *pObjectX = (JCRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable__1updateCustomGpuParameter_1CAutoConstantEntry_1CGpuProgramParameters_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong constantEntry_j, jlong params_j)
			{
				const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry &constantEntry = *(EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*) constantEntry_j;
				EarthView::World::Graphic::CGpuProgramParameters *params = (EarthView::World::Graphic::CGpuProgramParameters*) params_j;
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderable::_updateCustomGpuParameter(constantEntry, params);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_setPolygonModeOverrideable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean override_j)
			{
				ev_bool override = (ev_bool) override_j;
				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderable::setPolygonModeOverrideable(override);
				}
				else
				{
					pObjectX->setPolygonModeOverrideable(override);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_register_1setPolygonModeOverrideable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableProxy *pObjectX = (JCRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setPolygonModeOverrideable_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setPolygonModeOverrideable_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_setPolygonModeOverrideable_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean override_j)
			{
				ev_bool override = (ev_bool) override_j;
				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderable::setPolygonModeOverrideable(override);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Renderable_getPolygonModeOverrideable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderable::getPolygonModeOverrideable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getPolygonModeOverrideable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_register_1getPolygonModeOverrideable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableProxy *pObjectX = (JCRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPolygonModeOverrideable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPolygonModeOverrideable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Renderable_getPolygonModeOverrideable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderable::getPolygonModeOverrideable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_setCustomAmbient_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ambient_j)
			{
				const EarthView::World::Graphic::CColourValue &ambient = *(EarthView::World::Graphic::CColourValue*) ambient_j;
				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderable::setCustomAmbient(ambient);
				}
				else
				{
					pObjectX->setCustomAmbient(ambient);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_register_1setCustomAmbient_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableProxy *pObjectX = (JCRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setCustomAmbient_CColourValue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setCustomAmbient_CColourValue_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_setCustomAmbient_1CColourValue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ambient_j)
			{
				const EarthView::World::Graphic::CColourValue &ambient = *(EarthView::World::Graphic::CColourValue*) ambient_j;
				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderable::setCustomAmbient(ambient);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Renderable_getCustomAmbient_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableProxy))
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::CRenderable::getCustomAmbient();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getCustomAmbient();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_register_1getCustomAmbient_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableProxy *pObjectX = (JCRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCustomAmbient_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCustomAmbient_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Renderable_getCustomAmbient_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::CRenderable::getCustomAmbient();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Renderable_getCustomAmbientEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableProxy))
				{
					bool __values1 = pObjectX->EarthView::World::Graphic::CRenderable::getCustomAmbientEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					bool __values1 = pObjectX->getCustomAmbientEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_register_1getCustomAmbientEnabled_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableProxy *pObjectX = (JCRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCustomAmbientEnabled_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCustomAmbientEnabled_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Renderable_getCustomAmbientEnabled_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				bool __values1 = pObjectX->EarthView::World::Graphic::CRenderable::getCustomAmbientEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_setCustomAmbientEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderable::setCustomAmbientEnabled(enabled);
				}
				else
				{
					pObjectX->setCustomAmbientEnabled(enabled);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_register_1setCustomAmbientEnabled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableProxy *pObjectX = (JCRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setCustomAmbientEnabled_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setCustomAmbientEnabled_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_setCustomAmbientEnabled_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderable::setCustomAmbientEnabled(enabled);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Renderable_getMovableObject_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableProxy))
				{
					EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CRenderable::getMovableObject();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->getMovableObject();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_register_1getMovableObject_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableProxy *pObjectX = (JCRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMovableObject_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMovableObject_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Renderable_getMovableObject_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CRenderable::getMovableObject();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_addListener_1CRenderableListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
			{
				EarthView::World::Graphic::CRenderable::CRenderableListener *ref_listener = (EarthView::World::Graphic::CRenderable::CRenderableListener*) ref_listener_j;
				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderable::addListener(ref_listener);
				}
				else
				{
					pObjectX->addListener(ref_listener);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_register_1addListener_1CRenderableListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableProxy *pObjectX = (JCRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addListener_CRenderableListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addListener_CRenderableListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_addListener_1CRenderableListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
			{
				EarthView::World::Graphic::CRenderable::CRenderableListener *ref_listener = (EarthView::World::Graphic::CRenderable::CRenderableListener*) ref_listener_j;
				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderable::addListener(ref_listener);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_removeListener_1CRenderableListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CRenderable::CRenderableListener *listener = (EarthView::World::Graphic::CRenderable::CRenderableListener*) listener_j;
				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderable::removeListener(listener);
				}
				else
				{
					pObjectX->removeListener(listener);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_register_1removeListener_1CRenderableListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableProxy *pObjectX = (JCRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeListener_CRenderableListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeListener_CRenderableListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_removeListener_1CRenderableListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CRenderable::CRenderableListener *listener = (EarthView::World::Graphic::CRenderable::CRenderableListener*) listener_j;
				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderable::removeListener(listener);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Renderable_existListener_1CRenderableListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CRenderable::CRenderableListener *listener = (EarthView::World::Graphic::CRenderable::CRenderableListener*) listener_j;
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderable::existListener(listener);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->existListener(listener);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_register_1existListener_1CRenderableListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableProxy *pObjectX = (JCRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_existListener_CRenderableListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"existListener_CRenderableListener_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Renderable_existListener_1CRenderableListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CRenderable::CRenderableListener *listener = (EarthView::World::Graphic::CRenderable::CRenderableListener*) listener_j;
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderable::existListener(listener);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Renderable_getListenerCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CRenderable::getListenerCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->getListenerCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_register_1getListenerCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableProxy *pObjectX = (JCRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getListenerCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getListenerCount_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Renderable_getListenerCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CRenderable::getListenerCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Renderable_getListener_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableProxy))
				{
					EarthView::World::Graphic::CRenderable::CRenderableListener* __values1 = pObjectX->EarthView::World::Graphic::CRenderable::getListener(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CRenderable::CRenderableListener* __values1 = pObjectX->getListener(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_register_1getListener_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableProxy *pObjectX = (JCRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getListener_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getListener_ev_uint32_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Renderable_getListener_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				EarthView::World::Graphic::CRenderable::CRenderableListener* __values1 = pObjectX->EarthView::World::Graphic::CRenderable::getListener(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Renderable_getUserObjectBindings_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				EarthView::World::Graphic::CUserObjectBindings& __values1 = pObjectX->getUserObjectBindings();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			class JCVisitorProxy : public EarthView::World::Graphic::CRenderable::CVisitor
			{
			 private:
				EarthView::World::Core::ev_string m_visit_CRenderable_ev_uint16_ev_bool_callback;
			public:
				JCVisitorProxy(EarthView::World::Core::CNameValuePairList *pList) : CVisitor(pList)
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
				void register_visit_CRenderable_ev_uint16_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_visit_CRenderable_ev_uint16_ev_bool_callback = __method;
				}
				virtual void visit(EarthView::World::Graphic::CRenderable* rend, ev_uint16 lodIndex, ev_bool isDebug)
				{
					if (this->_gRef != NULL && this->m_visit_CRenderable_ev_uint16_ev_bool_callback != "" && this->isCustomExtend())
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
						jlong rend_j = (jlong) rend;
						jint lodIndex_j = (jint) lodIndex;
						jboolean isDebug_j = (jboolean) isDebug;
						jmethodID __method = __gr->getMethod("visit_CRenderable_ev_uint16_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , rend_j, lodIndex_j, isDebug_j);
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
						return this->CVisitor::visit(rend, lodIndex, isDebug);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCVisitorProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_00024Visitor_visit_1CRenderable_1ev_1uint16_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rend_j, jint lodIndex_j, jboolean isDebug_j)
			{
				EarthView::World::Graphic::CRenderable *rend = (EarthView::World::Graphic::CRenderable*) rend_j;
				ev_uint16 lodIndex = (ev_uint16) lodIndex_j;
				ev_bool isDebug = (ev_bool) isDebug_j;
				EarthView::World::Graphic::CRenderable::CVisitor *pObjectX = (EarthView::World::Graphic::CRenderable::CVisitor*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisitorProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderable::CVisitor::visit(rend, lodIndex, isDebug);
				}
				else
				{
					pObjectX->visit(rend, lodIndex, isDebug);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_00024Visitor_register_1visit_1CRenderable_1ev_1uint16_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisitorProxy *pObjectX = (JCVisitorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_visit_CRenderable_ev_uint16_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"visit_CRenderable_ev_uint16_ev_bool_callback", "(JIZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_00024Visitor_visit_1CRenderable_1ev_1uint16_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rend_j, jint lodIndex_j, jboolean isDebug_j)
			{
				EarthView::World::Graphic::CRenderable *rend = (EarthView::World::Graphic::CRenderable*) rend_j;
				ev_uint16 lodIndex = (ev_uint16) lodIndex_j;
				ev_bool isDebug = (ev_bool) isDebug_j;
				EarthView::World::Graphic::CRenderable::CVisitor *pObjectX = (EarthView::World::Graphic::CRenderable::CVisitor*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderable::CVisitor::visit(rend, lodIndex, isDebug);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Renderable_getRenderSystemData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableProxy))
				{
					EarthView::World::Graphic::CRenderable::CRenderSystemData* __values1 = pObjectX->EarthView::World::Graphic::CRenderable::getRenderSystemData();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CRenderable::CRenderSystemData* __values1 = pObjectX->getRenderSystemData();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_register_1getRenderSystemData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableProxy *pObjectX = (JCRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getRenderSystemData_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getRenderSystemData_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Renderable_getRenderSystemData_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				EarthView::World::Graphic::CRenderable::CRenderSystemData* __values1 = pObjectX->EarthView::World::Graphic::CRenderable::getRenderSystemData();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_setRenderSystemData_1CRenderSystemData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_val_j)
			{
				EarthView::World::Graphic::CRenderable::CRenderSystemData *ref_val = (EarthView::World::Graphic::CRenderable::CRenderSystemData*) ref_val_j;
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderable::setRenderSystemData(ref_val);
				}
				else
				{
					pObjectX->setRenderSystemData(ref_val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_register_1setRenderSystemData_1CRenderSystemData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableProxy *pObjectX = (JCRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setRenderSystemData_CRenderSystemData_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setRenderSystemData_CRenderSystemData_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_setRenderSystemData_1CRenderSystemData_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_val_j)
			{
				EarthView::World::Graphic::CRenderable::CRenderSystemData *ref_val = (EarthView::World::Graphic::CRenderable::CRenderSystemData*) ref_val_j;
				const 				EarthView::World::Graphic::CRenderable *pObjectX = (EarthView::World::Graphic::CRenderable*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderable::setRenderSystemData(ref_val);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Renderable_00024CustomParameterMap_push_1ev_1size_1t_1CVector4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j, jlong val_j)
			{
				const ev_size_t key = (const ev_size_t) key_j;
				const EarthView::World::Spatial::Math::CVector4 &val = *(EarthView::World::Spatial::Math::CVector4*) val_j;
				EarthView::World::Graphic::CRenderable::CustomParameterMap *pObjectX = (EarthView::World::Graphic::CRenderable::CustomParameterMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Renderable_00024CustomParameterMap_exist_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
			{
				const ev_size_t key = (const ev_size_t) key_j;
				EarthView::World::Graphic::CRenderable::CustomParameterMap *pObjectX = (EarthView::World::Graphic::CRenderable::CustomParameterMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Renderable_00024CustomParameterMap_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong key_j )
			{
				EarthView::World::Graphic::CRenderable::CustomParameterMap& pObjectX = *(EarthView::World::Graphic::CRenderable::CustomParameterMap*) pObjXXXX;
				const ev_size_t key = (const ev_size_t) key_j;
				EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Renderable_00024CustomParameterMap_get_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
			{
				const ev_size_t key = (const ev_size_t) key_j;
				EarthView::World::Graphic::CRenderable::CustomParameterMap *pObjectX = (EarthView::World::Graphic::CRenderable::CustomParameterMap*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_00024CustomParameterMap_erase_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
			{
				const ev_size_t key = (const ev_size_t) key_j;
				EarthView::World::Graphic::CRenderable::CustomParameterMap *pObjectX = (EarthView::World::Graphic::CRenderable::CustomParameterMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Renderable_00024CustomParameterMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable::CustomParameterMap *pObjectX = (EarthView::World::Graphic::CRenderable::CustomParameterMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Renderable_00024CustomParameterMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderable::CustomParameterMap *pObjectX = (EarthView::World::Graphic::CRenderable::CustomParameterMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Renderable_00024CustomParameterMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderable::CustomParameterMap *pObjectX = (EarthView::World::Graphic::CRenderable::CustomParameterMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
		}
	}
}
