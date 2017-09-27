/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dproxy/kmltreemanager.h"
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
			namespace Kml
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			namespace KmlManager
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_AllGlobeControlLayers_push_1back_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *&t = *(EarthView::World::Spatial::Atlas::ILayer**) t_j;
					EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_AllGlobeControlLayers_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_AllGlobeControlLayers_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_AllGlobeControlLayers_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers& pObjectX = *(EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial::Atlas::ILayer*& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_AllGlobeControlLayers_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer*& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_AllGlobeControlLayers_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_AllGlobeControlLayers_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_AllGlobeControlLayers_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_AllGlobeControlLayers_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers*) pObjXXXX;
					pObjectX->clear();
				}
				class JCKmlTreeManagerProxy : public EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager
				{
				 private:
					EarthView::World::Core::ev_string m_onRemoveSceneLayer_CSceneLayerActiveEvent_callback;
					EarthView::World::Core::ev_string m_onChangeSceneLayerName_CSceneLayerActiveEvent_callback;
					EarthView::World::Core::ev_string m_onAddKmlObjectEvent_CKmlTreeNodeEvent_callback;
					EarthView::World::Core::ev_string m_onUpdateKmlObjectEvent_CKmlTreeNodeEvent_callback;
					EarthView::World::Core::ev_string m_onRemoveKmlObjectEvent_CKmlTreeNodeEvent_callback;
					EarthView::World::Core::ev_string m_onSaveKmlObjectEvent_CKmlTreeNodeEvent_callback;
					EarthView::World::Core::ev_string m_onAddKmlFolderEvent_CKmlTreeNodeEvent_callback;
					EarthView::World::Core::ev_string m_onRemoveKmlFolderEvent_CKmlTreeNodeEvent_callback;
					EarthView::World::Core::ev_string m_onAddKmlFileEvent_CKmlTreeNodeEvent_callback;
					EarthView::World::Core::ev_string m_onSaveKmlFileEvent_CKmlTreeNodeEvent_callback;
					EarthView::World::Core::ev_string m_onAddNetworkLink_CKmlTreeNodeEvent_callback;
					EarthView::World::Core::ev_string m_onRemoveNetworkLink_CKmlTreeNodeEvent_callback;
					EarthView::World::Core::ev_string m_onSaveNetworkLink_CKmlTreeNodeEvent_callback;
					EarthView::World::Core::ev_string m_onAddKmlFolderAfter_CKmlTreeNodeEvent_callback;
					EarthView::World::Core::ev_string m_onRemoveKmlFolderAfter_CKmlTreeNodeEvent_callback;
					EarthView::World::Core::ev_string m_onAddKmlObjectAfter_CKmlTreeNodeEvent_callback;
					EarthView::World::Core::ev_string m_onRemoveKmlObjectAfter_CKmlTreeNodeEvent_callback;
					EarthView::World::Core::ev_string m_onAddKmlNetworkLinkAfter_CKmlTreeNodeEvent_callback;
					EarthView::World::Core::ev_string m_onRemoveKmlNetworkLinkAfter_CKmlTreeNodeEvent_callback;
					EarthView::World::Core::ev_string m_onSceneChange_CEvent_callback;
					EarthView::World::Core::ev_string m_onCurrentToolChanged_CEvent_callback;
					EarthView::World::Core::ev_string m_onSceneClose_CEvent_callback;
					EarthView::World::Core::ev_string m_onTourEnd_CEvent_callback;
					EarthView::World::Core::ev_string m_setCurrentLayer_CKmlLayer_callback;
					EarthView::World::Core::ev_string m_getCurrentLayer_void_callback;
					EarthView::World::Core::ev_string m_onEvent_CEvent_callback;
					EarthView::World::Core::ev_string m_onTimerEvent_CTimerEvent_callback;
					EarthView::World::Core::ev_string m_onCustomEvent_CEvent_callback;
				public:
					JCKmlTreeManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlTreeManager(pList)
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
					void register_onRemoveSceneLayer_CSceneLayerActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onRemoveSceneLayer_CSceneLayerActiveEvent_callback = __method;
					}
					void register_onChangeSceneLayerName_CSceneLayerActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onChangeSceneLayerName_CSceneLayerActiveEvent_callback = __method;
					}
					void register_onAddKmlObjectEvent_CKmlTreeNodeEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onAddKmlObjectEvent_CKmlTreeNodeEvent_callback = __method;
					}
					void register_onUpdateKmlObjectEvent_CKmlTreeNodeEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onUpdateKmlObjectEvent_CKmlTreeNodeEvent_callback = __method;
					}
					void register_onRemoveKmlObjectEvent_CKmlTreeNodeEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onRemoveKmlObjectEvent_CKmlTreeNodeEvent_callback = __method;
					}
					void register_onSaveKmlObjectEvent_CKmlTreeNodeEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onSaveKmlObjectEvent_CKmlTreeNodeEvent_callback = __method;
					}
					void register_onAddKmlFolderEvent_CKmlTreeNodeEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onAddKmlFolderEvent_CKmlTreeNodeEvent_callback = __method;
					}
					void register_onRemoveKmlFolderEvent_CKmlTreeNodeEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onRemoveKmlFolderEvent_CKmlTreeNodeEvent_callback = __method;
					}
					void register_onAddKmlFileEvent_CKmlTreeNodeEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onAddKmlFileEvent_CKmlTreeNodeEvent_callback = __method;
					}
					void register_onSaveKmlFileEvent_CKmlTreeNodeEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onSaveKmlFileEvent_CKmlTreeNodeEvent_callback = __method;
					}
					void register_onAddNetworkLink_CKmlTreeNodeEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onAddNetworkLink_CKmlTreeNodeEvent_callback = __method;
					}
					void register_onRemoveNetworkLink_CKmlTreeNodeEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onRemoveNetworkLink_CKmlTreeNodeEvent_callback = __method;
					}
					void register_onSaveNetworkLink_CKmlTreeNodeEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onSaveNetworkLink_CKmlTreeNodeEvent_callback = __method;
					}
					void register_onAddKmlFolderAfter_CKmlTreeNodeEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onAddKmlFolderAfter_CKmlTreeNodeEvent_callback = __method;
					}
					void register_onRemoveKmlFolderAfter_CKmlTreeNodeEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onRemoveKmlFolderAfter_CKmlTreeNodeEvent_callback = __method;
					}
					void register_onAddKmlObjectAfter_CKmlTreeNodeEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onAddKmlObjectAfter_CKmlTreeNodeEvent_callback = __method;
					}
					void register_onRemoveKmlObjectAfter_CKmlTreeNodeEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onRemoveKmlObjectAfter_CKmlTreeNodeEvent_callback = __method;
					}
					void register_onAddKmlNetworkLinkAfter_CKmlTreeNodeEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onAddKmlNetworkLinkAfter_CKmlTreeNodeEvent_callback = __method;
					}
					void register_onRemoveKmlNetworkLinkAfter_CKmlTreeNodeEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onRemoveKmlNetworkLinkAfter_CKmlTreeNodeEvent_callback = __method;
					}
					void register_onSceneChange_CEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onSceneChange_CEvent_callback = __method;
					}
					void register_onCurrentToolChanged_CEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onCurrentToolChanged_CEvent_callback = __method;
					}
					void register_onSceneClose_CEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onSceneClose_CEvent_callback = __method;
					}
					void register_onTourEnd_CEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onTourEnd_CEvent_callback = __method;
					}
					void register_setCurrentLayer_CKmlLayer_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setCurrentLayer_CKmlLayer_callback = __method;
					}
					void register_getCurrentLayer_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getCurrentLayer_void_callback = __method;
					}
					void register_onEvent_CEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onEvent_CEvent_callback = __method;
					}
					void register_onTimerEvent_CTimerEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onTimerEvent_CTimerEvent_callback = __method;
					}
					void register_onCustomEvent_CEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onCustomEvent_CEvent_callback = __method;
					}
					virtual ev_bool onEvent(EarthView::World::Core::CEvent* e)
					{
						if (this->_gRef != NULL && this->m_onEvent_CEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onEvent_CEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
							return this->CKmlTreeManager::onEvent(e);
						}
					}
					virtual ev_bool onRemoveSceneLayer(EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e)
					{
						if (this->_gRef != NULL && this->m_onRemoveSceneLayer_CSceneLayerActiveEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onRemoveSceneLayer_CSceneLayerActiveEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
							return this->CKmlTreeManager::onRemoveSceneLayer(e);
						}
					}
					virtual ev_bool onChangeSceneLayerName(EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e)
					{
						if (this->_gRef != NULL && this->m_onChangeSceneLayerName_CSceneLayerActiveEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onChangeSceneLayerName_CSceneLayerActiveEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
							return this->CKmlTreeManager::onChangeSceneLayerName(e);
						}
					}
					virtual ev_bool onAddKmlObjectEvent(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if (this->_gRef != NULL && this->m_onAddKmlObjectEvent_CKmlTreeNodeEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onAddKmlObjectEvent_CKmlTreeNodeEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
							return this->CKmlTreeManager::onAddKmlObjectEvent(e);
						}
					}
					virtual ev_bool onUpdateKmlObjectEvent(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if (this->_gRef != NULL && this->m_onUpdateKmlObjectEvent_CKmlTreeNodeEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onUpdateKmlObjectEvent_CKmlTreeNodeEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
							return this->CKmlTreeManager::onUpdateKmlObjectEvent(e);
						}
					}
					virtual ev_bool onRemoveKmlObjectEvent(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if (this->_gRef != NULL && this->m_onRemoveKmlObjectEvent_CKmlTreeNodeEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onRemoveKmlObjectEvent_CKmlTreeNodeEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
							return this->CKmlTreeManager::onRemoveKmlObjectEvent(e);
						}
					}
					virtual ev_bool onSaveKmlObjectEvent(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if (this->_gRef != NULL && this->m_onSaveKmlObjectEvent_CKmlTreeNodeEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onSaveKmlObjectEvent_CKmlTreeNodeEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
							return this->CKmlTreeManager::onSaveKmlObjectEvent(e);
						}
					}
					virtual ev_bool onAddKmlFolderEvent(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if (this->_gRef != NULL && this->m_onAddKmlFolderEvent_CKmlTreeNodeEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onAddKmlFolderEvent_CKmlTreeNodeEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
							return this->CKmlTreeManager::onAddKmlFolderEvent(e);
						}
					}
					virtual ev_bool onRemoveKmlFolderEvent(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if (this->_gRef != NULL && this->m_onRemoveKmlFolderEvent_CKmlTreeNodeEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onRemoveKmlFolderEvent_CKmlTreeNodeEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
							return this->CKmlTreeManager::onRemoveKmlFolderEvent(e);
						}
					}
					virtual ev_bool onAddKmlFileEvent(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if (this->_gRef != NULL && this->m_onAddKmlFileEvent_CKmlTreeNodeEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onAddKmlFileEvent_CKmlTreeNodeEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
							return this->CKmlTreeManager::onAddKmlFileEvent(e);
						}
					}
					virtual ev_bool onSaveKmlFileEvent(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if (this->_gRef != NULL && this->m_onSaveKmlFileEvent_CKmlTreeNodeEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onSaveKmlFileEvent_CKmlTreeNodeEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
							return this->CKmlTreeManager::onSaveKmlFileEvent(e);
						}
					}
					virtual ev_bool onAddNetworkLink(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if (this->_gRef != NULL && this->m_onAddNetworkLink_CKmlTreeNodeEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onAddNetworkLink_CKmlTreeNodeEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
							return this->CKmlTreeManager::onAddNetworkLink(e);
						}
					}
					virtual ev_bool onRemoveNetworkLink(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if (this->_gRef != NULL && this->m_onRemoveNetworkLink_CKmlTreeNodeEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onRemoveNetworkLink_CKmlTreeNodeEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
							return this->CKmlTreeManager::onRemoveNetworkLink(e);
						}
					}
					virtual ev_bool onSaveNetworkLink(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if (this->_gRef != NULL && this->m_onSaveNetworkLink_CKmlTreeNodeEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onSaveNetworkLink_CKmlTreeNodeEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
							return this->CKmlTreeManager::onSaveNetworkLink(e);
						}
					}
					virtual ev_bool onAddKmlFolderAfter(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if (this->_gRef != NULL && this->m_onAddKmlFolderAfter_CKmlTreeNodeEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onAddKmlFolderAfter_CKmlTreeNodeEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
							return this->CKmlTreeManager::onAddKmlFolderAfter(e);
						}
					}
					virtual ev_bool onRemoveKmlFolderAfter(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if (this->_gRef != NULL && this->m_onRemoveKmlFolderAfter_CKmlTreeNodeEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onRemoveKmlFolderAfter_CKmlTreeNodeEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
							return this->CKmlTreeManager::onRemoveKmlFolderAfter(e);
						}
					}
					virtual ev_bool onAddKmlObjectAfter(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if (this->_gRef != NULL && this->m_onAddKmlObjectAfter_CKmlTreeNodeEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onAddKmlObjectAfter_CKmlTreeNodeEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
							return this->CKmlTreeManager::onAddKmlObjectAfter(e);
						}
					}
					virtual ev_bool onRemoveKmlObjectAfter(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if (this->_gRef != NULL && this->m_onRemoveKmlObjectAfter_CKmlTreeNodeEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onRemoveKmlObjectAfter_CKmlTreeNodeEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
							return this->CKmlTreeManager::onRemoveKmlObjectAfter(e);
						}
					}
					virtual ev_bool onAddKmlNetworkLinkAfter(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if (this->_gRef != NULL && this->m_onAddKmlNetworkLinkAfter_CKmlTreeNodeEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onAddKmlNetworkLinkAfter_CKmlTreeNodeEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
							return this->CKmlTreeManager::onAddKmlNetworkLinkAfter(e);
						}
					}
					virtual ev_bool onRemoveKmlNetworkLinkAfter(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if (this->_gRef != NULL && this->m_onRemoveKmlNetworkLinkAfter_CKmlTreeNodeEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onRemoveKmlNetworkLinkAfter_CKmlTreeNodeEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
							return this->CKmlTreeManager::onRemoveKmlNetworkLinkAfter(e);
						}
					}
					virtual void onSceneChange(EarthView::World::Core::CEvent* e)
					{
						if (this->_gRef != NULL && this->m_onSceneChange_CEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onSceneChange_CEvent_callback");
							__env->CallVoidMethod(__obj, __method , e_j);
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
							return this->CKmlTreeManager::onSceneChange(e);
						}
					}
					virtual void onCurrentToolChanged(EarthView::World::Core::CEvent* e)
					{
						if (this->_gRef != NULL && this->m_onCurrentToolChanged_CEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onCurrentToolChanged_CEvent_callback");
							__env->CallVoidMethod(__obj, __method , e_j);
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
							return this->CKmlTreeManager::onCurrentToolChanged(e);
						}
					}
					virtual void onSceneClose(EarthView::World::Core::CEvent* e)
					{
						if (this->_gRef != NULL && this->m_onSceneClose_CEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onSceneClose_CEvent_callback");
							__env->CallVoidMethod(__obj, __method , e_j);
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
							return this->CKmlTreeManager::onSceneClose(e);
						}
					}
					virtual void onTourEnd(EarthView::World::Core::CEvent* e)
					{
						if (this->_gRef != NULL && this->m_onTourEnd_CEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onTourEnd_CEvent_callback");
							__env->CallVoidMethod(__obj, __method , e_j);
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
							return this->CKmlTreeManager::onTourEnd(e);
						}
					}
					virtual void setCurrentLayer(EarthView::World::Spatial3D::Atlas::CKmlLayer* ref_layer)
					{
						if (this->_gRef != NULL && this->m_setCurrentLayer_CKmlLayer_callback != "" && this->isCustomExtend())
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
							jlong ref_layer_j = (jlong) ref_layer;
							jmethodID __method = __gr->getMethod("setCurrentLayer_CKmlLayer_callback");
							__env->CallVoidMethod(__obj, __method , ref_layer_j);
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
							return this->CKmlTreeManager::setCurrentLayer(ref_layer);
						}
					}
					virtual EarthView::World::Spatial3D::Atlas::CKmlLayer* getCurrentLayer()
					{
						if (this->_gRef != NULL && this->m_getCurrentLayer_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getCurrentLayer_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::Atlas::CKmlLayer *__values1 = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CKmlTreeManager::getCurrentLayer();
						}
					}
					virtual void onTimerEvent(EarthView::World::Core::CTimerEvent* e)
					{
						if (this->_gRef != NULL && this->m_onTimerEvent_CTimerEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onTimerEvent_CTimerEvent_callback");
							__env->CallVoidMethod(__obj, __method , e_j);
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
							return this->CKmlTreeManager::onTimerEvent(e);
						}
					}
					virtual void onCustomEvent(EarthView::World::Core::CEvent* e)
					{
						if (this->_gRef != NULL && this->m_onCustomEvent_CEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onCustomEvent_CEvent_callback");
							__env->CallVoidMethod(__obj, __method , e_j);
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
							return this->CKmlTreeManager::onCustomEvent(e);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCKmlTreeManagerProxy);
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onEvent_1CEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTreeManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onEvent(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onEvent(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1onEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onEvent_CEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onEvent_CEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onEvent_1CEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onRemoveSceneLayer_1CSceneLayerActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTreeManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveSceneLayer(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onRemoveSceneLayer(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1onRemoveSceneLayer_1CSceneLayerActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onRemoveSceneLayer_CSceneLayerActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onRemoveSceneLayer_CSceneLayerActiveEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onRemoveSceneLayer_1CSceneLayerActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveSceneLayer(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onChangeSceneLayerName_1CSceneLayerActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTreeManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onChangeSceneLayerName(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onChangeSceneLayerName(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1onChangeSceneLayerName_1CSceneLayerActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onChangeSceneLayerName_CSceneLayerActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onChangeSceneLayerName_CSceneLayerActiveEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onChangeSceneLayerName_1CSceneLayerActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onChangeSceneLayerName(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onAddKmlObjectEvent_1CKmlTreeNodeEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTreeManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddKmlObjectEvent(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onAddKmlObjectEvent(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1onAddKmlObjectEvent_1CKmlTreeNodeEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onAddKmlObjectEvent_CKmlTreeNodeEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onAddKmlObjectEvent_CKmlTreeNodeEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onAddKmlObjectEvent_1CKmlTreeNodeEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddKmlObjectEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onUpdateKmlObjectEvent_1CKmlTreeNodeEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTreeManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onUpdateKmlObjectEvent(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onUpdateKmlObjectEvent(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1onUpdateKmlObjectEvent_1CKmlTreeNodeEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onUpdateKmlObjectEvent_CKmlTreeNodeEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onUpdateKmlObjectEvent_CKmlTreeNodeEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onUpdateKmlObjectEvent_1CKmlTreeNodeEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onUpdateKmlObjectEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onRemoveKmlObjectEvent_1CKmlTreeNodeEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTreeManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveKmlObjectEvent(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onRemoveKmlObjectEvent(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1onRemoveKmlObjectEvent_1CKmlTreeNodeEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onRemoveKmlObjectEvent_CKmlTreeNodeEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onRemoveKmlObjectEvent_CKmlTreeNodeEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onRemoveKmlObjectEvent_1CKmlTreeNodeEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveKmlObjectEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onSaveKmlObjectEvent_1CKmlTreeNodeEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTreeManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onSaveKmlObjectEvent(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onSaveKmlObjectEvent(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1onSaveKmlObjectEvent_1CKmlTreeNodeEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onSaveKmlObjectEvent_CKmlTreeNodeEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onSaveKmlObjectEvent_CKmlTreeNodeEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onSaveKmlObjectEvent_1CKmlTreeNodeEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onSaveKmlObjectEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onAddKmlFolderEvent_1CKmlTreeNodeEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTreeManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddKmlFolderEvent(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onAddKmlFolderEvent(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1onAddKmlFolderEvent_1CKmlTreeNodeEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onAddKmlFolderEvent_CKmlTreeNodeEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onAddKmlFolderEvent_CKmlTreeNodeEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onAddKmlFolderEvent_1CKmlTreeNodeEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddKmlFolderEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onRemoveKmlFolderEvent_1CKmlTreeNodeEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTreeManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveKmlFolderEvent(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onRemoveKmlFolderEvent(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1onRemoveKmlFolderEvent_1CKmlTreeNodeEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onRemoveKmlFolderEvent_CKmlTreeNodeEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onRemoveKmlFolderEvent_CKmlTreeNodeEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onRemoveKmlFolderEvent_1CKmlTreeNodeEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveKmlFolderEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onAddKmlFileEvent_1CKmlTreeNodeEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTreeManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddKmlFileEvent(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onAddKmlFileEvent(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1onAddKmlFileEvent_1CKmlTreeNodeEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onAddKmlFileEvent_CKmlTreeNodeEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onAddKmlFileEvent_CKmlTreeNodeEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onAddKmlFileEvent_1CKmlTreeNodeEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddKmlFileEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onSaveKmlFileEvent_1CKmlTreeNodeEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTreeManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onSaveKmlFileEvent(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onSaveKmlFileEvent(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1onSaveKmlFileEvent_1CKmlTreeNodeEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onSaveKmlFileEvent_CKmlTreeNodeEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onSaveKmlFileEvent_CKmlTreeNodeEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onSaveKmlFileEvent_1CKmlTreeNodeEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onSaveKmlFileEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onAddNetworkLink_1CKmlTreeNodeEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTreeManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddNetworkLink(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onAddNetworkLink(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1onAddNetworkLink_1CKmlTreeNodeEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onAddNetworkLink_CKmlTreeNodeEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onAddNetworkLink_CKmlTreeNodeEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onAddNetworkLink_1CKmlTreeNodeEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddNetworkLink(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onRemoveNetworkLink_1CKmlTreeNodeEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTreeManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveNetworkLink(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onRemoveNetworkLink(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1onRemoveNetworkLink_1CKmlTreeNodeEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onRemoveNetworkLink_CKmlTreeNodeEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onRemoveNetworkLink_CKmlTreeNodeEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onRemoveNetworkLink_1CKmlTreeNodeEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveNetworkLink(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onSaveNetworkLink_1CKmlTreeNodeEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTreeManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onSaveNetworkLink(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onSaveNetworkLink(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1onSaveNetworkLink_1CKmlTreeNodeEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onSaveNetworkLink_CKmlTreeNodeEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onSaveNetworkLink_CKmlTreeNodeEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onSaveNetworkLink_1CKmlTreeNodeEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onSaveNetworkLink(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onAddKmlFolderAfter_1CKmlTreeNodeEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTreeManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddKmlFolderAfter(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onAddKmlFolderAfter(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1onAddKmlFolderAfter_1CKmlTreeNodeEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onAddKmlFolderAfter_CKmlTreeNodeEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onAddKmlFolderAfter_CKmlTreeNodeEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onAddKmlFolderAfter_1CKmlTreeNodeEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddKmlFolderAfter(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onRemoveKmlFolderAfter_1CKmlTreeNodeEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTreeManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveKmlFolderAfter(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onRemoveKmlFolderAfter(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1onRemoveKmlFolderAfter_1CKmlTreeNodeEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onRemoveKmlFolderAfter_CKmlTreeNodeEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onRemoveKmlFolderAfter_CKmlTreeNodeEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onRemoveKmlFolderAfter_1CKmlTreeNodeEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveKmlFolderAfter(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onAddKmlObjectAfter_1CKmlTreeNodeEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTreeManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddKmlObjectAfter(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onAddKmlObjectAfter(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1onAddKmlObjectAfter_1CKmlTreeNodeEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onAddKmlObjectAfter_CKmlTreeNodeEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onAddKmlObjectAfter_CKmlTreeNodeEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onAddKmlObjectAfter_1CKmlTreeNodeEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddKmlObjectAfter(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onRemoveKmlObjectAfter_1CKmlTreeNodeEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTreeManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveKmlObjectAfter(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onRemoveKmlObjectAfter(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1onRemoveKmlObjectAfter_1CKmlTreeNodeEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onRemoveKmlObjectAfter_CKmlTreeNodeEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onRemoveKmlObjectAfter_CKmlTreeNodeEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onRemoveKmlObjectAfter_1CKmlTreeNodeEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveKmlObjectAfter(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onAddKmlNetworkLinkAfter_1CKmlTreeNodeEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTreeManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddKmlNetworkLinkAfter(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onAddKmlNetworkLinkAfter(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1onAddKmlNetworkLinkAfter_1CKmlTreeNodeEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onAddKmlNetworkLinkAfter_CKmlTreeNodeEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onAddKmlNetworkLinkAfter_CKmlTreeNodeEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onAddKmlNetworkLinkAfter_1CKmlTreeNodeEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddKmlNetworkLinkAfter(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onRemoveKmlNetworkLinkAfter_1CKmlTreeNodeEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTreeManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveKmlNetworkLinkAfter(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onRemoveKmlNetworkLinkAfter(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1onRemoveKmlNetworkLinkAfter_1CKmlTreeNodeEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onRemoveKmlNetworkLinkAfter_CKmlTreeNodeEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onRemoveKmlNetworkLinkAfter_CKmlTreeNodeEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onRemoveKmlNetworkLinkAfter_1CKmlTreeNodeEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *e = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveKmlNetworkLinkAfter(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onSceneChange_1CEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTreeManagerProxy))
					{
						pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onSceneChange(e);
					}
					else
					{
						pObjectX->onSceneChange(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1onSceneChange_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onSceneChange_CEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onSceneChange_CEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onSceneChange_1CEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onSceneChange(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onCurrentToolChanged_1CEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTreeManagerProxy))
					{
						pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onCurrentToolChanged(e);
					}
					else
					{
						pObjectX->onCurrentToolChanged(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1onCurrentToolChanged_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onCurrentToolChanged_CEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onCurrentToolChanged_CEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onCurrentToolChanged_1CEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onCurrentToolChanged(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onSceneClose_1CEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTreeManagerProxy))
					{
						pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onSceneClose(e);
					}
					else
					{
						pObjectX->onSceneClose(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1onSceneClose_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onSceneClose_CEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onSceneClose_CEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onSceneClose_1CEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onSceneClose(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onTourEnd_1CEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTreeManagerProxy))
					{
						pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onTourEnd(e);
					}
					else
					{
						pObjectX->onTourEnd(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1onTourEnd_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onTourEnd_CEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onTourEnd_CEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_onTourEnd_1CEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onTourEnd(e);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_computeCGeoObjectCenterPos_1CVector3_1EVAltitudeMode_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong centerLatLon_j, jint am_j, jdouble alt_j)
				{
					EarthView::World::Spatial::Math::CVector3 centerLatLon = *(EarthView::World::Spatial::Math::CVector3*) centerLatLon_j;
					EarthView::World::Spatial::Utility::EVAltitudeMode am = (EarthView::World::Spatial::Utility::EVAltitudeMode) am_j;
					ev_real64 alt = (ev_real64) alt_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->computeCGeoObjectCenterPos(centerLatLon, am, alt);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_computeRange_1CVector3_1CVector3_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong modelPos_j, jlong cameraPos_j, jlong range_j)
				{
					EarthView::World::Spatial::Math::CVector3 modelPos = *(EarthView::World::Spatial::Math::CVector3*) modelPos_j;
					EarthView::World::Spatial::Math::CVector3 cameraPos = *(EarthView::World::Spatial::Math::CVector3*) cameraPos_j;
					ev_real64 &range = *(ev_real64*) range_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					pObjectX->computeRange(modelPos, cameraPos, range);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_computeCameraAlt_1CGeoObjectExtension(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geoobj_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *geoobj = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) geoobj_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					ev_real64 __values1 = pObjectX->computeCameraAlt(geoobj);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_setGlobeControlsLayers_1AllGlobeControlLayers(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong allLayers_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers allLayers = *(EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers*) allLayers_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					pObjectX->setGlobeControlsLayers(allLayers);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_computePlacemarkView_1CGlobeCamera_1CVector3_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong camera_j, jlong pos_j, jlong heading_j, jlong tilt_j, jlong range_j)
				{
					EarthView::World::Spatial3D::CGlobeCamera *camera = (EarthView::World::Spatial3D::CGlobeCamera*) camera_j;
					EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
					ev_real64 &heading = *(ev_real64*) heading_j;
					ev_real64 &tilt = *(ev_real64*) tilt_j;
					ev_real64 &range = *(ev_real64*) range_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					pObjectX->computePlacemarkView(camera, pos, heading, tilt, range);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_setCurrentLayer_1CKmlLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j)
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer *ref_layer = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) ref_layer_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTreeManagerProxy))
					{
						pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::setCurrentLayer(ref_layer);
					}
					else
					{
						pObjectX->setCurrentLayer(ref_layer);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1setCurrentLayer_1CKmlLayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setCurrentLayer_CKmlLayer_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setCurrentLayer_CKmlLayer_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_setCurrentLayer_1CKmlLayer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j)
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer *ref_layer = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) ref_layer_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::setCurrentLayer(ref_layer);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_getCurrentLayer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTreeManagerProxy))
					{
						EarthView::World::Spatial3D::Atlas::CKmlLayer* __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::getCurrentLayer();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial3D::Atlas::CKmlLayer* __values1 = pObjectX->getCurrentLayer();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1getCurrentLayer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getCurrentLayer_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getCurrentLayer_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_getCurrentLayer_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::CKmlLayer* __values1 = pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::getCurrentLayer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_loadTree_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					pObjectX->loadTree();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_addKmlFile_1EVString_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filePath_j, jlong parent_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* filePath_ch = (const ev_char*)__env->GetStringUTFChars(filePath_j,JNI_FALSE);
					EVString filePath = filePath_ch;
					__env->ReleaseStringUTFChars(filePath_j, (const char *)filePath_ch);
					#else
					const ev_wchar* filePath_ch = (const ev_wchar*)__env->GetStringChars(filePath_j,JNI_FALSE);
					EVString filePath = filePath_ch;
					__env->ReleaseStringChars(filePath_j, (const jchar *)filePath_ch);
					#endif
					EarthView::World::Spatial::Kml::CKmlDocument *parent = (EarthView::World::Spatial::Kml::CKmlDocument*) parent_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* __values1 = pObjectX->addKmlFile(filePath, parent);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_saveKmlFile_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring savePath_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* savePath_ch = (const ev_char*)__env->GetStringUTFChars(savePath_j,JNI_FALSE);
					EVString savePath = savePath_ch;
					__env->ReleaseStringUTFChars(savePath_j, (const char *)savePath_ch);
					#else
					const ev_wchar* savePath_ch = (const ev_wchar*)__env->GetStringChars(savePath_j,JNI_FALSE);
					EVString savePath = savePath_ch;
					__env->ReleaseStringChars(savePath_j, (const jchar *)savePath_ch);
					#endif
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					pObjectX->saveKmlFile(savePath);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_saveFolder_1EVString_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring savePath_j, jlong node_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* savePath_ch = (const ev_char*)__env->GetStringUTFChars(savePath_j,JNI_FALSE);
					EVString savePath = savePath_ch;
					__env->ReleaseStringUTFChars(savePath_j, (const char *)savePath_ch);
					#else
					const ev_wchar* savePath_ch = (const ev_wchar*)__env->GetStringChars(savePath_j,JNI_FALSE);
					EVString savePath = savePath_ch;
					__env->ReleaseStringChars(savePath_j, (const jchar *)savePath_ch);
					#endif
					EarthView::World::Spatial::Kml::CKmlDocument *node = (EarthView::World::Spatial::Kml::CKmlDocument*) node_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					pObjectX->saveFolder(savePath, node);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_addKmlObject_1CGeoObjectExtension_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geoObj_j, jlong parent_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *geoObj = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) geoObj_j;
					EarthView::World::Spatial::Kml::CKmlDocument *parent = (EarthView::World::Spatial::Kml::CKmlDocument*) parent_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					pObjectX->addKmlObject(geoObj, parent);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_updateKmlObject_1CGeoObjectExtension_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geoObj_j, jlong parent_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *geoObj = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) geoObj_j;
					EarthView::World::Spatial::Kml::CKmlDocument *parent = (EarthView::World::Spatial::Kml::CKmlDocument*) parent_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					pObjectX->updateKmlObject(geoObj, parent);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_removeKmlObject_1CGeoObjectExtension_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geoObj_j, jlong parent_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *geoObj = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) geoObj_j;
					EarthView::World::Spatial::Kml::CKmlDocument *parent = (EarthView::World::Spatial::Kml::CKmlDocument*) parent_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					pObjectX->removeKmlObject(geoObj, parent);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_saveKmlObject_1EVString_1CGeoObjectExtension(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring savePath_j, jlong geoObj_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* savePath_ch = (const ev_char*)__env->GetStringUTFChars(savePath_j,JNI_FALSE);
					EVString savePath = savePath_ch;
					__env->ReleaseStringUTFChars(savePath_j, (const char *)savePath_ch);
					#else
					const ev_wchar* savePath_ch = (const ev_wchar*)__env->GetStringChars(savePath_j,JNI_FALSE);
					EVString savePath = savePath_ch;
					__env->ReleaseStringChars(savePath_j, (const jchar *)savePath_ch);
					#endif
					EarthView::World::Spatial::Kml::CGeoObjectExtension *geoObj = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) geoObj_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					pObjectX->saveKmlObject(savePath, geoObj);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_addKmlFolder_1CKmlDocument_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong folder_j, jlong parent_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *folder = (EarthView::World::Spatial::Kml::CKmlDocument*) folder_j;
					EarthView::World::Spatial::Kml::CKmlDocument *parent = (EarthView::World::Spatial::Kml::CKmlDocument*) parent_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					pObjectX->addKmlFolder(folder, parent);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_updateKmlFolder_1CKmlDocument_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pKmlFolder_j, jlong pParentKmlFolder_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *pKmlFolder = (EarthView::World::Spatial::Kml::CKmlDocument*) pKmlFolder_j;
					EarthView::World::Spatial::Kml::CKmlDocument *pParentKmlFolder = (EarthView::World::Spatial::Kml::CKmlDocument*) pParentKmlFolder_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					pObjectX->updateKmlFolder(pKmlFolder, pParentKmlFolder);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_removeKmlFolder_1CKmlDocument_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j, jlong parent_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *node = (EarthView::World::Spatial::Kml::CKmlDocument*) node_j;
					EarthView::World::Spatial::Kml::CKmlDocument *parent = (EarthView::World::Spatial::Kml::CKmlDocument*) parent_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					pObjectX->removeKmlFolder(node, parent);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_addTour_1CTour_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tour_j, jlong parent_j)
				{
					EarthView::World::Spatial::Kml::CTour *tour = (EarthView::World::Spatial::Kml::CTour*) tour_j;
					EarthView::World::Spatial::Kml::CKmlDocument *parent = (EarthView::World::Spatial::Kml::CKmlDocument*) parent_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					pObjectX->addTour(tour, parent);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_removeTour_1CTour_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tour_j, jlong parent_j)
				{
					EarthView::World::Spatial::Kml::CTour *tour = (EarthView::World::Spatial::Kml::CTour*) tour_j;
					EarthView::World::Spatial::Kml::CKmlDocument *parent = (EarthView::World::Spatial::Kml::CKmlDocument*) parent_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					pObjectX->removeTour(tour, parent);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_saveTour_1EVString_1CTour(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring savePath_j, jlong tour_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* savePath_ch = (const ev_char*)__env->GetStringUTFChars(savePath_j,JNI_FALSE);
					const EVString savePath = savePath_ch;
					__env->ReleaseStringUTFChars(savePath_j, (const char *)savePath_ch);
					#else
					const ev_wchar* savePath_ch = (const ev_wchar*)__env->GetStringChars(savePath_j,JNI_FALSE);
					const EVString savePath = savePath_ch;
					__env->ReleaseStringChars(savePath_j, (const jchar *)savePath_ch);
					#endif
					EarthView::World::Spatial::Kml::CTour *tour = (EarthView::World::Spatial::Kml::CTour*) tour_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					pObjectX->saveTour(savePath, tour);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_addNetworkLink_1CKmlNetworkLink_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong kmlNet_j, jlong parent_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *kmlNet = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) kmlNet_j;
					EarthView::World::Spatial::Kml::CKmlDocument *parent = (EarthView::World::Spatial::Kml::CKmlDocument*) parent_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					pObjectX->addNetworkLink(kmlNet, parent);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_updateKmlNetworkLink_1CKmlNetworkLink_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pKmlNetworkLink_j, jlong parent_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *pKmlNetworkLink = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pKmlNetworkLink_j;
					EarthView::World::Spatial::Kml::CKmlDocument *parent = (EarthView::World::Spatial::Kml::CKmlDocument*) parent_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					pObjectX->updateKmlNetworkLink(pKmlNetworkLink, parent);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_removeKmlNetworkLink_1CKmlNetworkLink_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong netLink_j, jlong parent_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *netLink = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) netLink_j;
					EarthView::World::Spatial::Kml::CKmlDocument *parent = (EarthView::World::Spatial::Kml::CKmlDocument*) parent_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					pObjectX->removeKmlNetworkLink(netLink, parent);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_saveKmlNetworkLink_1EVString_1CKmlNetworkLink(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring savePath_j, jlong netLink_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* savePath_ch = (const ev_char*)__env->GetStringUTFChars(savePath_j,JNI_FALSE);
					EVString savePath = savePath_ch;
					__env->ReleaseStringUTFChars(savePath_j, (const char *)savePath_ch);
					#else
					const ev_wchar* savePath_ch = (const ev_wchar*)__env->GetStringChars(savePath_j,JNI_FALSE);
					EVString savePath = savePath_ch;
					__env->ReleaseStringChars(savePath_j, (const jchar *)savePath_ch);
					#endif
					EarthView::World::Spatial::Kml::CKmlNetworkLink *netLink = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) netLink_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjXXXX;
					pObjectX->saveKmlNetworkLink(savePath, netLink);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1onTimerEvent_1CTimerEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onTimerEvent_CTimerEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onTimerEvent_CTimerEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeManager_register_1onCustomEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTreeManagerProxy *pObjectX = (JCKmlTreeManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onCustomEvent_CEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onCustomEvent_CEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
