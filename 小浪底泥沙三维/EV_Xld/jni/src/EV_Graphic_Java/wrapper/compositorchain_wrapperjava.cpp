/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/compositorchain.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstances_push_1back_1CCompositorInstance(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Graphic::CCompositorInstance *&ref_t = *(EarthView::World::Graphic::CCompositorInstance**) ref_t_j;
				EarthView::World::Graphic::CompositorInstances *pObjectX = (EarthView::World::Graphic::CompositorInstances*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstances_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CompositorInstances *pObjectX = (EarthView::World::Graphic::CompositorInstances*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositorInstances_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CompositorInstances *pObjectX = (EarthView::World::Graphic::CompositorInstances*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstances_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CompositorInstances& pObjectX = *(EarthView::World::Graphic::CompositorInstances*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CCompositorInstance*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstances_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CompositorInstances *pObjectX = (EarthView::World::Graphic::CompositorInstances*) pObjXXXX;
				EarthView::World::Graphic::CCompositorInstance*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstances_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CompositorInstances *pObjectX = (EarthView::World::Graphic::CompositorInstances*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstances_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CompositorInstances *pObjectX = (EarthView::World::Graphic::CompositorInstances*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstances_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CompositorInstances *pObjectX = (EarthView::World::Graphic::CompositorInstances*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstances_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CompositorInstances *pObjectX = (EarthView::World::Graphic::CompositorInstances*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositorInstanceIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CompositorInstanceIterator *pObjectX = (EarthView::World::Graphic::CompositorInstanceIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstanceIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CompositorInstanceIterator *pObjectX = (EarthView::World::Graphic::CompositorInstanceIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstanceIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CompositorInstanceIterator *pObjectX = (EarthView::World::Graphic::CompositorInstanceIterator*) pObjXXXX;
				EarthView::World::Graphic::CCompositorInstance* __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstanceIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CompositorInstanceIterator *pObjectX = (EarthView::World::Graphic::CompositorInstanceIterator*) pObjXXXX;
				EarthView::World::Graphic::CCompositorInstance* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstanceIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CompositorInstanceIterator *pObjectX = (EarthView::World::Graphic::CompositorInstanceIterator*) pObjXXXX;
				EarthView::World::Graphic::CCompositorInstance* __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstanceIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CompositorInstanceIterator *pObjectX = (EarthView::World::Graphic::CompositorInstanceIterator*) pObjXXXX;
				EarthView::World::Graphic::CCompositorInstance* __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCCompositorChainProxy : public EarthView::World::Graphic::CCompositorChain
			{
			 private:
				EarthView::World::Core::ev_string m_viewportCameraChanged_CViewport_callback;
				EarthView::World::Core::ev_string m_viewportDimensionsChanged_CViewport_callback;
				EarthView::World::Core::ev_string m_viewportDestroyed_CViewport_callback;
				EarthView::World::Core::ev_string m_getViewportListenerPtr_void_callback;
				EarthView::World::Core::ev_string m_preRenderTargetUpdate_RenderTargetEvent_callback;
				EarthView::World::Core::ev_string m_postRenderTargetUpdate_RenderTargetEvent_callback;
				EarthView::World::Core::ev_string m_preViewportUpdate_RenderTargetViewportEvent_callback;
				EarthView::World::Core::ev_string m_postViewportUpdate_RenderTargetViewportEvent_callback;
				EarthView::World::Core::ev_string m_viewportAdded_RenderTargetViewportEvent_callback;
				EarthView::World::Core::ev_string m_viewportRemoved_RenderTargetViewportEvent_callback;
			public:
				JCCompositorChainProxy(EarthView::World::Core::CNameValuePairList *pList) : CCompositorChain(pList)
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
				void register_viewportCameraChanged_CViewport_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_viewportCameraChanged_CViewport_callback = __method;
				}
				void register_viewportDimensionsChanged_CViewport_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_viewportDimensionsChanged_CViewport_callback = __method;
				}
				void register_viewportDestroyed_CViewport_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_viewportDestroyed_CViewport_callback = __method;
				}
				void register_getViewportListenerPtr_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getViewportListenerPtr_void_callback = __method;
				}
				void register_preRenderTargetUpdate_RenderTargetEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_preRenderTargetUpdate_RenderTargetEvent_callback = __method;
				}
				void register_postRenderTargetUpdate_RenderTargetEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_postRenderTargetUpdate_RenderTargetEvent_callback = __method;
				}
				void register_preViewportUpdate_RenderTargetViewportEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_preViewportUpdate_RenderTargetViewportEvent_callback = __method;
				}
				void register_postViewportUpdate_RenderTargetViewportEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_postViewportUpdate_RenderTargetViewportEvent_callback = __method;
				}
				void register_viewportAdded_RenderTargetViewportEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_viewportAdded_RenderTargetViewportEvent_callback = __method;
				}
				void register_viewportRemoved_RenderTargetViewportEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_viewportRemoved_RenderTargetViewportEvent_callback = __method;
				}
				virtual void viewportCameraChanged(EarthView::World::Graphic::CViewport* viewport)
				{
					if (this->_gRef != NULL && this->m_viewportCameraChanged_CViewport_callback != "" && this->isCustomExtend())
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
						jlong viewport_j = (jlong) viewport;
						jmethodID __method = __gr->getMethod("viewportCameraChanged_CViewport_callback");
						__env->CallVoidMethod(__obj, __method , viewport_j);
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
						return this->CCompositorChain::viewportCameraChanged(viewport);
					}
				}
				virtual void viewportDimensionsChanged(EarthView::World::Graphic::CViewport* viewport)
				{
					if (this->_gRef != NULL && this->m_viewportDimensionsChanged_CViewport_callback != "" && this->isCustomExtend())
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
						jlong viewport_j = (jlong) viewport;
						jmethodID __method = __gr->getMethod("viewportDimensionsChanged_CViewport_callback");
						__env->CallVoidMethod(__obj, __method , viewport_j);
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
						return this->CCompositorChain::viewportDimensionsChanged(viewport);
					}
				}
				virtual void viewportDestroyed(EarthView::World::Graphic::CViewport* viewport)
				{
					if (this->_gRef != NULL && this->m_viewportDestroyed_CViewport_callback != "" && this->isCustomExtend())
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
						jlong viewport_j = (jlong) viewport;
						jmethodID __method = __gr->getMethod("viewportDestroyed_CViewport_callback");
						__env->CallVoidMethod(__obj, __method , viewport_j);
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
						return this->CCompositorChain::viewportDestroyed(viewport);
					}
				}
				virtual const EarthView::World::Graphic::CCompositorChain::CInternalViewportListener* getViewportListenerPtr()
				{
					if (this->_gRef != NULL && this->m_getViewportListenerPtr_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getViewportListenerPtr_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CCompositorChain::CInternalViewportListener *__values1 = (const EarthView::World::Graphic::CCompositorChain::CInternalViewportListener*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorChain::getViewportListenerPtr();
					}
				}
				virtual void preRenderTargetUpdate(const EarthView::World::Graphic::RenderTargetEvent& evt)
				{
					if (this->_gRef != NULL && this->m_preRenderTargetUpdate_RenderTargetEvent_callback != "" && this->isCustomExtend())
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
						jlong evt_j = (jlong) &evt;
						jmethodID __method = __gr->getMethod("preRenderTargetUpdate_RenderTargetEvent_callback");
						__env->CallVoidMethod(__obj, __method , evt_j);
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
						return this->CCompositorChain::preRenderTargetUpdate(evt);
					}
				}
				virtual void postRenderTargetUpdate(const EarthView::World::Graphic::RenderTargetEvent& evt)
				{
					if (this->_gRef != NULL && this->m_postRenderTargetUpdate_RenderTargetEvent_callback != "" && this->isCustomExtend())
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
						jlong evt_j = (jlong) &evt;
						jmethodID __method = __gr->getMethod("postRenderTargetUpdate_RenderTargetEvent_callback");
						__env->CallVoidMethod(__obj, __method , evt_j);
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
						return this->CCompositorChain::postRenderTargetUpdate(evt);
					}
				}
				virtual void preViewportUpdate(const EarthView::World::Graphic::RenderTargetViewportEvent& evt)
				{
					if (this->_gRef != NULL && this->m_preViewportUpdate_RenderTargetViewportEvent_callback != "" && this->isCustomExtend())
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
						jlong evt_j = (jlong) &evt;
						jmethodID __method = __gr->getMethod("preViewportUpdate_RenderTargetViewportEvent_callback");
						__env->CallVoidMethod(__obj, __method , evt_j);
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
						return this->CCompositorChain::preViewportUpdate(evt);
					}
				}
				virtual void postViewportUpdate(const EarthView::World::Graphic::RenderTargetViewportEvent& evt)
				{
					if (this->_gRef != NULL && this->m_postViewportUpdate_RenderTargetViewportEvent_callback != "" && this->isCustomExtend())
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
						jlong evt_j = (jlong) &evt;
						jmethodID __method = __gr->getMethod("postViewportUpdate_RenderTargetViewportEvent_callback");
						__env->CallVoidMethod(__obj, __method , evt_j);
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
						return this->CCompositorChain::postViewportUpdate(evt);
					}
				}
				virtual void viewportAdded(const EarthView::World::Graphic::RenderTargetViewportEvent& evt)
				{
					if (this->_gRef != NULL && this->m_viewportAdded_RenderTargetViewportEvent_callback != "" && this->isCustomExtend())
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
						jlong evt_j = (jlong) &evt;
						jmethodID __method = __gr->getMethod("viewportAdded_RenderTargetViewportEvent_callback");
						__env->CallVoidMethod(__obj, __method , evt_j);
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
						return this->CCompositorChain::viewportAdded(evt);
					}
				}
				virtual void viewportRemoved(const EarthView::World::Graphic::RenderTargetViewportEvent& evt)
				{
					if (this->_gRef != NULL && this->m_viewportRemoved_RenderTargetViewportEvent_callback != "" && this->isCustomExtend())
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
						jlong evt_j = (jlong) &evt;
						jmethodID __method = __gr->getMethod("viewportRemoved_RenderTargetViewportEvent_callback");
						__env->CallVoidMethod(__obj, __method , evt_j);
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
						return this->CCompositorChain::viewportRemoved(evt);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCCompositorChainProxy);
			class JCInternalViewportListenerProxy : public EarthView::World::Graphic::CCompositorChain::CInternalViewportListener
			{
			 private:
				EarthView::World::Core::ev_string m_viewportCameraChanged_CViewport_callback;
				EarthView::World::Core::ev_string m_viewportDimensionsChanged_CViewport_callback;
				EarthView::World::Core::ev_string m_viewportDestroyed_CViewport_callback;
			public:
				JCInternalViewportListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CInternalViewportListener(pList)
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
				void register_viewportCameraChanged_CViewport_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_viewportCameraChanged_CViewport_callback = __method;
				}
				void register_viewportDimensionsChanged_CViewport_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_viewportDimensionsChanged_CViewport_callback = __method;
				}
				void register_viewportDestroyed_CViewport_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_viewportDestroyed_CViewport_callback = __method;
				}
				virtual void viewportCameraChanged(EarthView::World::Graphic::CViewport* viewport)
				{
					if (this->_gRef != NULL && this->m_viewportCameraChanged_CViewport_callback != "" && this->isCustomExtend())
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
						jlong viewport_j = (jlong) viewport;
						jmethodID __method = __gr->getMethod("viewportCameraChanged_CViewport_callback");
						__env->CallVoidMethod(__obj, __method , viewport_j);
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
						return this->CInternalViewportListener::viewportCameraChanged(viewport);
					}
				}
				virtual void viewportDimensionsChanged(EarthView::World::Graphic::CViewport* viewport)
				{
					if (this->_gRef != NULL && this->m_viewportDimensionsChanged_CViewport_callback != "" && this->isCustomExtend())
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
						jlong viewport_j = (jlong) viewport;
						jmethodID __method = __gr->getMethod("viewportDimensionsChanged_CViewport_callback");
						__env->CallVoidMethod(__obj, __method , viewport_j);
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
						return this->CInternalViewportListener::viewportDimensionsChanged(viewport);
					}
				}
				virtual void viewportDestroyed(EarthView::World::Graphic::CViewport* viewport)
				{
					if (this->_gRef != NULL && this->m_viewportDestroyed_CViewport_callback != "" && this->isCustomExtend())
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
						jlong viewport_j = (jlong) viewport;
						jmethodID __method = __gr->getMethod("viewportDestroyed_CViewport_callback");
						__env->CallVoidMethod(__obj, __method , viewport_j);
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
						return this->CInternalViewportListener::viewportDestroyed(viewport);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCInternalViewportListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_00024InternalViewportListener_viewportCameraChanged_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong viewport_j)
			{
				EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
				EarthView::World::Graphic::CCompositorChain::CInternalViewportListener *pObjectX = (EarthView::World::Graphic::CCompositorChain::CInternalViewportListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCInternalViewportListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositorChain::CInternalViewportListener::viewportCameraChanged(viewport);
				}
				else
				{
					pObjectX->viewportCameraChanged(viewport);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_00024InternalViewportListener_register_1viewportCameraChanged_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCInternalViewportListenerProxy *pObjectX = (JCInternalViewportListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_viewportCameraChanged_CViewport_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"viewportCameraChanged_CViewport_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_00024InternalViewportListener_viewportCameraChanged_1CViewport_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong viewport_j)
			{
				EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
				EarthView::World::Graphic::CCompositorChain::CInternalViewportListener *pObjectX = (EarthView::World::Graphic::CCompositorChain::CInternalViewportListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositorChain::CInternalViewportListener::viewportCameraChanged(viewport);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_00024InternalViewportListener_viewportDimensionsChanged_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong viewport_j)
			{
				EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
				EarthView::World::Graphic::CCompositorChain::CInternalViewportListener *pObjectX = (EarthView::World::Graphic::CCompositorChain::CInternalViewportListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCInternalViewportListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositorChain::CInternalViewportListener::viewportDimensionsChanged(viewport);
				}
				else
				{
					pObjectX->viewportDimensionsChanged(viewport);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_00024InternalViewportListener_register_1viewportDimensionsChanged_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCInternalViewportListenerProxy *pObjectX = (JCInternalViewportListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_viewportDimensionsChanged_CViewport_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"viewportDimensionsChanged_CViewport_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_00024InternalViewportListener_viewportDimensionsChanged_1CViewport_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong viewport_j)
			{
				EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
				EarthView::World::Graphic::CCompositorChain::CInternalViewportListener *pObjectX = (EarthView::World::Graphic::CCompositorChain::CInternalViewportListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositorChain::CInternalViewportListener::viewportDimensionsChanged(viewport);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_00024InternalViewportListener_viewportDestroyed_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong viewport_j)
			{
				EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
				EarthView::World::Graphic::CCompositorChain::CInternalViewportListener *pObjectX = (EarthView::World::Graphic::CCompositorChain::CInternalViewportListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCInternalViewportListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositorChain::CInternalViewportListener::viewportDestroyed(viewport);
				}
				else
				{
					pObjectX->viewportDestroyed(viewport);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_00024InternalViewportListener_register_1viewportDestroyed_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCInternalViewportListenerProxy *pObjectX = (JCInternalViewportListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_viewportDestroyed_CViewport_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"viewportDestroyed_CViewport_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_00024InternalViewportListener_viewportDestroyed_1CViewport_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong viewport_j)
			{
				EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
				EarthView::World::Graphic::CCompositorChain::CInternalViewportListener *pObjectX = (EarthView::World::Graphic::CCompositorChain::CInternalViewportListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositorChain::CInternalViewportListener::viewportDestroyed(viewport);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_viewportCameraChanged_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong viewport_j)
			{
				EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositorChainProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositorChain::viewportCameraChanged(viewport);
				}
				else
				{
					pObjectX->viewportCameraChanged(viewport);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_register_1viewportCameraChanged_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorChainProxy *pObjectX = (JCCompositorChainProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_viewportCameraChanged_CViewport_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"viewportCameraChanged_CViewport_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_viewportCameraChanged_1CViewport_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong viewport_j)
			{
				EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositorChain::viewportCameraChanged(viewport);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_viewportDimensionsChanged_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong viewport_j)
			{
				EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositorChainProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositorChain::viewportDimensionsChanged(viewport);
				}
				else
				{
					pObjectX->viewportDimensionsChanged(viewport);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_register_1viewportDimensionsChanged_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorChainProxy *pObjectX = (JCCompositorChainProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_viewportDimensionsChanged_CViewport_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"viewportDimensionsChanged_CViewport_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_viewportDimensionsChanged_1CViewport_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong viewport_j)
			{
				EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositorChain::viewportDimensionsChanged(viewport);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_viewportDestroyed_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong viewport_j)
			{
				EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositorChainProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositorChain::viewportDestroyed(viewport);
				}
				else
				{
					pObjectX->viewportDestroyed(viewport);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_register_1viewportDestroyed_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorChainProxy *pObjectX = (JCCompositorChainProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_viewportDestroyed_CViewport_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"viewportDestroyed_CViewport_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_viewportDestroyed_1CViewport_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong viewport_j)
			{
				EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositorChain::viewportDestroyed(viewport);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorChain_getViewportListenerPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositorChainProxy))
				{
					const EarthView::World::Graphic::CCompositorChain::CInternalViewportListener* __values1 = pObjectX->EarthView::World::Graphic::CCompositorChain::getViewportListenerPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CCompositorChain::CInternalViewportListener* __values1 = pObjectX->getViewportListenerPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_register_1getViewportListenerPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorChainProxy *pObjectX = (JCCompositorChainProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getViewportListenerPtr_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getViewportListenerPtr_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorChain_getViewportListenerPtr_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				const EarthView::World::Graphic::CCompositorChain::CInternalViewportListener* __values1 = pObjectX->EarthView::World::Graphic::CCompositorChain::getViewportListenerPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorChain_get_1LAST_1void(JNIEnv *__env, jclass __clazz)
			{
				jlong __values1_j = (jlong) (EarthView::World::Graphic::CCompositorChain::LAST);
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorChain_get_1BEST_1void(JNIEnv *__env, jclass __clazz)
			{
				jlong __values1_j = (jlong) (EarthView::World::Graphic::CCompositorChain::BEST);
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorChain_addCompositor_1CCompositorPtr_1ev_1size_1t_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j, jlong addPosition_j, jstring scheme_j)
			{
				EarthView::World::Graphic::CCompositorPtr filter = *(EarthView::World::Graphic::CCompositorPtr*) filter_j;
				ev_size_t addPosition = (ev_size_t) addPosition_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* scheme_ch = (const ev_char*)__env->GetStringUTFChars(scheme_j,JNI_FALSE);
				const EVString scheme = scheme_ch;
				__env->ReleaseStringUTFChars(scheme_j, (const char *)scheme_ch);
				#else
				const ev_wchar* scheme_ch = (const ev_wchar*)__env->GetStringChars(scheme_j,JNI_FALSE);
				const EVString scheme = scheme_ch;
				__env->ReleaseStringChars(scheme_j, (const jchar *)scheme_ch);
				#endif
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				EarthView::World::Graphic::CCompositorInstance* __values1 = pObjectX->addCompositor(filter, addPosition, scheme);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_removeCompositor_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong position_j)
			{
				ev_size_t position = (ev_size_t) position_j;
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				pObjectX->removeCompositor(position);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorChain_getNumCompositors_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getNumCompositors();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_removeAllCompositors_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				pObjectX->removeAllCompositors();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorChain_getCompositor_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				EarthView::World::Graphic::CCompositorInstance* __values1 = pObjectX->getCompositor(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorChain_getCompositor_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				EarthView::World::Graphic::CCompositorInstance* __values1 = pObjectX->getCompositor(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorChain__1getOriginalSceneCompositor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				EarthView::World::Graphic::CCompositorInstance* __values1 = pObjectX->_getOriginalSceneCompositor();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorChain_getCompositors_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				EarthView::World::Graphic::CompositorInstanceIterator __values1 = pObjectX->getCompositors();
				EarthView::World::Graphic::CompositorInstanceIterator *returnvalues = new EarthView::World::Graphic::CompositorInstanceIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_setCompositorEnabled_1ev_1size_1t_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong position_j, jboolean state_j)
			{
				ev_size_t position = (ev_size_t) position_j;
				ev_bool state = (ev_bool) state_j;
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				pObjectX->setCompositorEnabled(position, state);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_preRenderTargetUpdate_1RenderTargetEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::RenderTargetEvent &evt = *(EarthView::World::Graphic::RenderTargetEvent*) evt_j;
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositorChainProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositorChain::preRenderTargetUpdate(evt);
				}
				else
				{
					pObjectX->preRenderTargetUpdate(evt);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_register_1preRenderTargetUpdate_1RenderTargetEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorChainProxy *pObjectX = (JCCompositorChainProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_preRenderTargetUpdate_RenderTargetEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"preRenderTargetUpdate_RenderTargetEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_preRenderTargetUpdate_1RenderTargetEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::RenderTargetEvent &evt = *(EarthView::World::Graphic::RenderTargetEvent*) evt_j;
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositorChain::preRenderTargetUpdate(evt);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_postRenderTargetUpdate_1RenderTargetEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::RenderTargetEvent &evt = *(EarthView::World::Graphic::RenderTargetEvent*) evt_j;
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositorChainProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositorChain::postRenderTargetUpdate(evt);
				}
				else
				{
					pObjectX->postRenderTargetUpdate(evt);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_register_1postRenderTargetUpdate_1RenderTargetEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorChainProxy *pObjectX = (JCCompositorChainProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_postRenderTargetUpdate_RenderTargetEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"postRenderTargetUpdate_RenderTargetEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_postRenderTargetUpdate_1RenderTargetEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::RenderTargetEvent &evt = *(EarthView::World::Graphic::RenderTargetEvent*) evt_j;
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositorChain::postRenderTargetUpdate(evt);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_preViewportUpdate_1RenderTargetViewportEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::RenderTargetViewportEvent &evt = *(EarthView::World::Graphic::RenderTargetViewportEvent*) evt_j;
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositorChainProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositorChain::preViewportUpdate(evt);
				}
				else
				{
					pObjectX->preViewportUpdate(evt);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_register_1preViewportUpdate_1RenderTargetViewportEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorChainProxy *pObjectX = (JCCompositorChainProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_preViewportUpdate_RenderTargetViewportEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"preViewportUpdate_RenderTargetViewportEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_preViewportUpdate_1RenderTargetViewportEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::RenderTargetViewportEvent &evt = *(EarthView::World::Graphic::RenderTargetViewportEvent*) evt_j;
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositorChain::preViewportUpdate(evt);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_postViewportUpdate_1RenderTargetViewportEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::RenderTargetViewportEvent &evt = *(EarthView::World::Graphic::RenderTargetViewportEvent*) evt_j;
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositorChainProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositorChain::postViewportUpdate(evt);
				}
				else
				{
					pObjectX->postViewportUpdate(evt);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_register_1postViewportUpdate_1RenderTargetViewportEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorChainProxy *pObjectX = (JCCompositorChainProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_postViewportUpdate_RenderTargetViewportEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"postViewportUpdate_RenderTargetViewportEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_postViewportUpdate_1RenderTargetViewportEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::RenderTargetViewportEvent &evt = *(EarthView::World::Graphic::RenderTargetViewportEvent*) evt_j;
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositorChain::postViewportUpdate(evt);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain__1markDirty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				pObjectX->_markDirty();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorChain_getViewport_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				EarthView::World::Graphic::CViewport* __values1 = pObjectX->getViewport();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain__1removeInstance_1CCompositorInstance(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong i_j)
			{
				EarthView::World::Graphic::CCompositorInstance *i = (EarthView::World::Graphic::CCompositorInstance*) i_j;
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				pObjectX->_removeInstance(i);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain__1queuedOperation_1CRenderSystemOperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_op_j)
			{
				EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation *ref_op = (EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation*) ref_op_j;
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				pObjectX->_queuedOperation(ref_op);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain__1compile_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				pObjectX->_compile();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorChain_getPreviousInstance_1CCompositorInstance_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong curr_j, jboolean activeOnly_j)
			{
				EarthView::World::Graphic::CCompositorInstance *curr = (EarthView::World::Graphic::CCompositorInstance*) curr_j;
				ev_bool activeOnly = (ev_bool) activeOnly_j;
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				EarthView::World::Graphic::CCompositorInstance* __values1 = pObjectX->getPreviousInstance(curr, activeOnly);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorChain_getNextInstance_1CCompositorInstance_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong curr_j, jboolean activeOnly_j)
			{
				EarthView::World::Graphic::CCompositorInstance *curr = (EarthView::World::Graphic::CCompositorInstance*) curr_j;
				ev_bool activeOnly = (ev_bool) activeOnly_j;
				EarthView::World::Graphic::CCompositorChain *pObjectX = (EarthView::World::Graphic::CCompositorChain*) pObjXXXX;
				EarthView::World::Graphic::CCompositorInstance* __values1 = pObjectX->getNextInstance(curr, activeOnly);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCRQListenerProxy : public EarthView::World::Graphic::CCompositorChain::CRQListener
			{
			 private:
				EarthView::World::Core::ev_string m_preRenderQueues_void_callback;
				EarthView::World::Core::ev_string m_postRenderQueues_void_callback;
				EarthView::World::Core::ev_string m_renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool_callback;
				EarthView::World::Core::ev_string m_renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool_callback;
			public:
				JCRQListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRQListener(pList)
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
				void register_preRenderQueues_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_preRenderQueues_void_callback = __method;
				}
				void register_postRenderQueues_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_postRenderQueues_void_callback = __method;
				}
				void register_renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool_callback = __method;
				}
				void register_renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool_callback = __method;
				}
				virtual void renderQueueStarted(EarthView::World::Graphic::CSceneManager* pSceneMgr, ev_uint8 id, const EVString& invocation, ev_bool& skipThisQueue)
				{
					if (this->_gRef != NULL && this->m_renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool_callback != "" && this->isCustomExtend())
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
						jlong pSceneMgr_j = (jlong) pSceneMgr;
						jshort id_j = (jshort) id;
						EarthView::World::Core::ev_wstring invocation_wch = invocation;
						jstring invocation_j = __env->NewString((const jchar*)invocation_wch.getString(), invocation_wch.size());
						jlong skipThisQueue_j = (jlong) &skipThisQueue;
						jmethodID __method = __gr->getMethod("renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , pSceneMgr_j, id_j, invocation_j, skipThisQueue_j);
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
						return this->CRQListener::renderQueueStarted(pSceneMgr, id, invocation, skipThisQueue);
					}
				}
				virtual void renderQueueEnded(EarthView::World::Graphic::CSceneManager* pSceneMgr, ev_uint8 id, const EVString& invocation, ev_bool& repeatThisQueue)
				{
					if (this->_gRef != NULL && this->m_renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool_callback != "" && this->isCustomExtend())
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
						jlong pSceneMgr_j = (jlong) pSceneMgr;
						jshort id_j = (jshort) id;
						EarthView::World::Core::ev_wstring invocation_wch = invocation;
						jstring invocation_j = __env->NewString((const jchar*)invocation_wch.getString(), invocation_wch.size());
						jlong repeatThisQueue_j = (jlong) &repeatThisQueue;
						jmethodID __method = __gr->getMethod("renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , pSceneMgr_j, id_j, invocation_j, repeatThisQueue_j);
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
						return this->CRQListener::renderQueueEnded(pSceneMgr, id, invocation, repeatThisQueue);
					}
				}
				virtual void preRenderQueues()
				{
					if (this->_gRef != NULL && this->m_preRenderQueues_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("preRenderQueues_void_callback");
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
						return this->CRQListener::preRenderQueues();
					}
				}
				virtual void postRenderQueues()
				{
					if (this->_gRef != NULL && this->m_postRenderQueues_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("postRenderQueues_void_callback");
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
						return this->CRQListener::postRenderQueues();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCRQListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_00024Rqlistener_renderQueueStarted_1CSceneManager_1ev_1uint8_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSceneMgr_j, jshort id_j, jstring invocation_j, jlong skipThisQueue_j)
			{
				EarthView::World::Graphic::CSceneManager *pSceneMgr = (EarthView::World::Graphic::CSceneManager*) pSceneMgr_j;
				ev_uint8 id = (ev_uint8) id_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* invocation_ch = (const ev_char*)__env->GetStringUTFChars(invocation_j,JNI_FALSE);
				const EVString invocation = invocation_ch;
				__env->ReleaseStringUTFChars(invocation_j, (const char *)invocation_ch);
				#else
				const ev_wchar* invocation_ch = (const ev_wchar*)__env->GetStringChars(invocation_j,JNI_FALSE);
				const EVString invocation = invocation_ch;
				__env->ReleaseStringChars(invocation_j, (const jchar *)invocation_ch);
				#endif
				ev_bool &skipThisQueue = *(ev_bool*) skipThisQueue_j;
				EarthView::World::Graphic::CCompositorChain::CRQListener *pObjectX = (EarthView::World::Graphic::CCompositorChain::CRQListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRQListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositorChain::CRQListener::renderQueueStarted(pSceneMgr, id, invocation, skipThisQueue);
				}
				else
				{
					pObjectX->renderQueueStarted(pSceneMgr, id, invocation, skipThisQueue);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_00024Rqlistener_register_1renderQueueStarted_1CSceneManager_1ev_1uint8_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRQListenerProxy *pObjectX = (JCRQListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool_callback", "(JSLjava/lang/String;J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_00024Rqlistener_renderQueueStarted_1CSceneManager_1ev_1uint8_1EVString_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSceneMgr_j, jshort id_j, jstring invocation_j, jlong skipThisQueue_j)
			{
				EarthView::World::Graphic::CSceneManager *pSceneMgr = (EarthView::World::Graphic::CSceneManager*) pSceneMgr_j;
				ev_uint8 id = (ev_uint8) id_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* invocation_ch = (const ev_char*)__env->GetStringUTFChars(invocation_j,JNI_FALSE);
				const EVString invocation = invocation_ch;
				__env->ReleaseStringUTFChars(invocation_j, (const char *)invocation_ch);
				#else
				const ev_wchar* invocation_ch = (const ev_wchar*)__env->GetStringChars(invocation_j,JNI_FALSE);
				const EVString invocation = invocation_ch;
				__env->ReleaseStringChars(invocation_j, (const jchar *)invocation_ch);
				#endif
				ev_bool &skipThisQueue = *(ev_bool*) skipThisQueue_j;
				EarthView::World::Graphic::CCompositorChain::CRQListener *pObjectX = (EarthView::World::Graphic::CCompositorChain::CRQListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositorChain::CRQListener::renderQueueStarted(pSceneMgr, id, invocation, skipThisQueue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_00024Rqlistener_renderQueueEnded_1CSceneManager_1ev_1uint8_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSceneMgr_j, jshort id_j, jstring invocation_j, jlong repeatThisQueue_j)
			{
				EarthView::World::Graphic::CSceneManager *pSceneMgr = (EarthView::World::Graphic::CSceneManager*) pSceneMgr_j;
				ev_uint8 id = (ev_uint8) id_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* invocation_ch = (const ev_char*)__env->GetStringUTFChars(invocation_j,JNI_FALSE);
				const EVString invocation = invocation_ch;
				__env->ReleaseStringUTFChars(invocation_j, (const char *)invocation_ch);
				#else
				const ev_wchar* invocation_ch = (const ev_wchar*)__env->GetStringChars(invocation_j,JNI_FALSE);
				const EVString invocation = invocation_ch;
				__env->ReleaseStringChars(invocation_j, (const jchar *)invocation_ch);
				#endif
				ev_bool &repeatThisQueue = *(ev_bool*) repeatThisQueue_j;
				EarthView::World::Graphic::CCompositorChain::CRQListener *pObjectX = (EarthView::World::Graphic::CCompositorChain::CRQListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRQListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositorChain::CRQListener::renderQueueEnded(pSceneMgr, id, invocation, repeatThisQueue);
				}
				else
				{
					pObjectX->renderQueueEnded(pSceneMgr, id, invocation, repeatThisQueue);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_00024Rqlistener_register_1renderQueueEnded_1CSceneManager_1ev_1uint8_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRQListenerProxy *pObjectX = (JCRQListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool_callback", "(JSLjava/lang/String;J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_00024Rqlistener_renderQueueEnded_1CSceneManager_1ev_1uint8_1EVString_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSceneMgr_j, jshort id_j, jstring invocation_j, jlong repeatThisQueue_j)
			{
				EarthView::World::Graphic::CSceneManager *pSceneMgr = (EarthView::World::Graphic::CSceneManager*) pSceneMgr_j;
				ev_uint8 id = (ev_uint8) id_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* invocation_ch = (const ev_char*)__env->GetStringUTFChars(invocation_j,JNI_FALSE);
				const EVString invocation = invocation_ch;
				__env->ReleaseStringUTFChars(invocation_j, (const char *)invocation_ch);
				#else
				const ev_wchar* invocation_ch = (const ev_wchar*)__env->GetStringChars(invocation_j,JNI_FALSE);
				const EVString invocation = invocation_ch;
				__env->ReleaseStringChars(invocation_j, (const jchar *)invocation_ch);
				#endif
				ev_bool &repeatThisQueue = *(ev_bool*) repeatThisQueue_j;
				EarthView::World::Graphic::CCompositorChain::CRQListener *pObjectX = (EarthView::World::Graphic::CCompositorChain::CRQListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositorChain::CRQListener::renderQueueEnded(pSceneMgr, id, invocation, repeatThisQueue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_00024Rqlistener_setOperation_1CTargetOperation_1CSceneManager_1CRenderSystem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_op_j, jlong ref_sm_j, jlong ref_rs_j)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation *ref_op = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*) ref_op_j;
				EarthView::World::Graphic::CSceneManager *ref_sm = (EarthView::World::Graphic::CSceneManager*) ref_sm_j;
				EarthView::World::Graphic::CRenderSystem *ref_rs = (EarthView::World::Graphic::CRenderSystem*) ref_rs_j;
				EarthView::World::Graphic::CCompositorChain::CRQListener *pObjectX = (EarthView::World::Graphic::CCompositorChain::CRQListener*) pObjXXXX;
				pObjectX->setOperation(ref_op, ref_sm, ref_rs);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_00024Rqlistener_notifyViewport_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_vp_j)
			{
				EarthView::World::Graphic::CViewport *ref_vp = (EarthView::World::Graphic::CViewport*) ref_vp_j;
				EarthView::World::Graphic::CCompositorChain::CRQListener *pObjectX = (EarthView::World::Graphic::CCompositorChain::CRQListener*) pObjXXXX;
				pObjectX->notifyViewport(ref_vp);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_00024Rqlistener_flushUpTo_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort id_j)
			{
				ev_uint8 id = (ev_uint8) id_j;
				EarthView::World::Graphic::CCompositorChain::CRQListener *pObjectX = (EarthView::World::Graphic::CCompositorChain::CRQListener*) pObjXXXX;
				pObjectX->flushUpTo(id);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_00024Rqlistener_register_1preRenderQueues_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRQListenerProxy *pObjectX = (JCRQListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_preRenderQueues_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"preRenderQueues_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_00024Rqlistener_register_1postRenderQueues_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRQListenerProxy *pObjectX = (JCRQListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_postRenderQueues_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"postRenderQueues_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_register_1viewportAdded_1RenderTargetViewportEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorChainProxy *pObjectX = (JCCompositorChainProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_viewportAdded_RenderTargetViewportEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"viewportAdded_RenderTargetViewportEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorChain_register_1viewportRemoved_1RenderTargetViewportEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorChainProxy *pObjectX = (JCCompositorChainProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_viewportRemoved_RenderTargetViewportEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"viewportRemoved_RenderTargetViewportEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
