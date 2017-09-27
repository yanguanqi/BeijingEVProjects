/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/atlasmanager/atlaseventobject.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace FrameWorkProxy
		{
			namespace AtlasManager
			{
				class JCAtlasEventObjectProxy : public EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject
				{
				 private:
					EarthView::World::Core::ev_string m_onCreateMap_CMapActiveEvent_callback;
					EarthView::World::Core::ev_string m_onCreateScene_CSceneActiveEvent_callback;
					EarthView::World::Core::ev_string m_onSetCurrentMap_CMapActiveEvent_callback;
					EarthView::World::Core::ev_string m_onSetCurrentScene_CSceneActiveEvent_callback;
					EarthView::World::Core::ev_string m_onRemoveMap_CMapActiveEvent_callback;
					EarthView::World::Core::ev_string m_onRemoveScene_CSceneActiveEvent_callback;
					EarthView::World::Core::ev_string m_onCreateMapLayer_CMapLayerActiveEvent_callback;
					EarthView::World::Core::ev_string m_onCreateMapGroupLayer_CMapLayerActiveEvent_callback;
					EarthView::World::Core::ev_string m_onMoveMapLayer_CMapLayerActiveEvent_callback;
					EarthView::World::Core::ev_string m_onRemoveMapLayer_CMapLayerActiveEvent_callback;
					EarthView::World::Core::ev_string m_onChangeMapName_CMapActiveEvent_callback;
					EarthView::World::Core::ev_string m_onChangeSceneName_CSceneActiveEvent_callback;
					EarthView::World::Core::ev_string m_onChangeLayerName_CEvent_callback;
					EarthView::World::Core::ev_string m_onChangeLayerVisible_CMapLayerActiveEvent_callback;
					EarthView::World::Core::ev_string m_onChangeLayerTheme_CMapLayerActiveEvent_callback;
					EarthView::World::Core::ev_string m_onCreateSceneLayer_CSceneLayerActiveEvent_callback;
					EarthView::World::Core::ev_string m_onCreateSceneGroupLayer_CSceneLayerActiveEvent_callback;
					EarthView::World::Core::ev_string m_onSwitchSceneLayer_CSceneLayerActiveEvent_callback;
					EarthView::World::Core::ev_string m_onMoveSceneLayer_CSceneLayerActiveEvent_callback;
					EarthView::World::Core::ev_string m_onRemoveSceneLayer_CSceneLayerActiveEvent_callback;
					EarthView::World::Core::ev_string m_onSetSceneLayerVisible_CSceneLayerActiveEvent_callback;
					EarthView::World::Core::ev_string m_onSetSceneLayerTheme_CSceneLayerActiveEvent_callback;
					EarthView::World::Core::ev_string m_onEvent_CEvent_callback;
					EarthView::World::Core::ev_string m_onTimerEvent_CTimerEvent_callback;
					EarthView::World::Core::ev_string m_onCustomEvent_CEvent_callback;
				public:
					JCAtlasEventObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CAtlasEventObject(pList)
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
					void register_onCreateMap_CMapActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onCreateMap_CMapActiveEvent_callback = __method;
					}
					void register_onCreateScene_CSceneActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onCreateScene_CSceneActiveEvent_callback = __method;
					}
					void register_onSetCurrentMap_CMapActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onSetCurrentMap_CMapActiveEvent_callback = __method;
					}
					void register_onSetCurrentScene_CSceneActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onSetCurrentScene_CSceneActiveEvent_callback = __method;
					}
					void register_onRemoveMap_CMapActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onRemoveMap_CMapActiveEvent_callback = __method;
					}
					void register_onRemoveScene_CSceneActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onRemoveScene_CSceneActiveEvent_callback = __method;
					}
					void register_onCreateMapLayer_CMapLayerActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onCreateMapLayer_CMapLayerActiveEvent_callback = __method;
					}
					void register_onCreateMapGroupLayer_CMapLayerActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onCreateMapGroupLayer_CMapLayerActiveEvent_callback = __method;
					}
					void register_onMoveMapLayer_CMapLayerActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onMoveMapLayer_CMapLayerActiveEvent_callback = __method;
					}
					void register_onRemoveMapLayer_CMapLayerActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onRemoveMapLayer_CMapLayerActiveEvent_callback = __method;
					}
					void register_onChangeMapName_CMapActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onChangeMapName_CMapActiveEvent_callback = __method;
					}
					void register_onChangeSceneName_CSceneActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onChangeSceneName_CSceneActiveEvent_callback = __method;
					}
					void register_onChangeLayerName_CEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onChangeLayerName_CEvent_callback = __method;
					}
					void register_onChangeLayerVisible_CMapLayerActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onChangeLayerVisible_CMapLayerActiveEvent_callback = __method;
					}
					void register_onChangeLayerTheme_CMapLayerActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onChangeLayerTheme_CMapLayerActiveEvent_callback = __method;
					}
					void register_onCreateSceneLayer_CSceneLayerActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onCreateSceneLayer_CSceneLayerActiveEvent_callback = __method;
					}
					void register_onCreateSceneGroupLayer_CSceneLayerActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onCreateSceneGroupLayer_CSceneLayerActiveEvent_callback = __method;
					}
					void register_onSwitchSceneLayer_CSceneLayerActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onSwitchSceneLayer_CSceneLayerActiveEvent_callback = __method;
					}
					void register_onMoveSceneLayer_CSceneLayerActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onMoveSceneLayer_CSceneLayerActiveEvent_callback = __method;
					}
					void register_onRemoveSceneLayer_CSceneLayerActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onRemoveSceneLayer_CSceneLayerActiveEvent_callback = __method;
					}
					void register_onSetSceneLayerVisible_CSceneLayerActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onSetSceneLayerVisible_CSceneLayerActiveEvent_callback = __method;
					}
					void register_onSetSceneLayerTheme_CSceneLayerActiveEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onSetSceneLayerTheme_CSceneLayerActiveEvent_callback = __method;
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
							return this->CAtlasEventObject::onEvent(e);
						}
					}
					virtual void onCreateMap(EarthView::World::Spatial::SystemUI::CMapActiveEvent* e)
					{
						if (this->_gRef != NULL && this->m_onCreateMap_CMapActiveEvent_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onCreateMap_CMapActiveEvent_callback");
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
							return this->CAtlasEventObject::onCreateMap(e);
						}
					}
					virtual void onCreateScene(EarthView::World::Spatial::SystemUI::CSceneActiveEvent* e)
					{
						if (this->_gRef != NULL && this->m_onCreateScene_CSceneActiveEvent_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onCreateScene_CSceneActiveEvent_callback");
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
							return this->CAtlasEventObject::onCreateScene(e);
						}
					}
					virtual void onSetCurrentMap(EarthView::World::Spatial::SystemUI::CMapActiveEvent* e)
					{
						if (this->_gRef != NULL && this->m_onSetCurrentMap_CMapActiveEvent_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onSetCurrentMap_CMapActiveEvent_callback");
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
							return this->CAtlasEventObject::onSetCurrentMap(e);
						}
					}
					virtual void onSetCurrentScene(EarthView::World::Spatial::SystemUI::CSceneActiveEvent* e)
					{
						if (this->_gRef != NULL && this->m_onSetCurrentScene_CSceneActiveEvent_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onSetCurrentScene_CSceneActiveEvent_callback");
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
							return this->CAtlasEventObject::onSetCurrentScene(e);
						}
					}
					virtual void onRemoveMap(EarthView::World::Spatial::SystemUI::CMapActiveEvent* e)
					{
						if (this->_gRef != NULL && this->m_onRemoveMap_CMapActiveEvent_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onRemoveMap_CMapActiveEvent_callback");
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
							return this->CAtlasEventObject::onRemoveMap(e);
						}
					}
					virtual void onRemoveScene(EarthView::World::Spatial::SystemUI::CSceneActiveEvent* e)
					{
						if (this->_gRef != NULL && this->m_onRemoveScene_CSceneActiveEvent_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onRemoveScene_CSceneActiveEvent_callback");
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
							return this->CAtlasEventObject::onRemoveScene(e);
						}
					}
					virtual void onCreateMapLayer(EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e)
					{
						if (this->_gRef != NULL && this->m_onCreateMapLayer_CMapLayerActiveEvent_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onCreateMapLayer_CMapLayerActiveEvent_callback");
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
							return this->CAtlasEventObject::onCreateMapLayer(e);
						}
					}
					virtual void onCreateMapGroupLayer(EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e)
					{
						if (this->_gRef != NULL && this->m_onCreateMapGroupLayer_CMapLayerActiveEvent_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onCreateMapGroupLayer_CMapLayerActiveEvent_callback");
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
							return this->CAtlasEventObject::onCreateMapGroupLayer(e);
						}
					}
					virtual void onMoveMapLayer(EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e)
					{
						if (this->_gRef != NULL && this->m_onMoveMapLayer_CMapLayerActiveEvent_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onMoveMapLayer_CMapLayerActiveEvent_callback");
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
							return this->CAtlasEventObject::onMoveMapLayer(e);
						}
					}
					virtual void onRemoveMapLayer(EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e)
					{
						if (this->_gRef != NULL && this->m_onRemoveMapLayer_CMapLayerActiveEvent_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onRemoveMapLayer_CMapLayerActiveEvent_callback");
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
							return this->CAtlasEventObject::onRemoveMapLayer(e);
						}
					}
					virtual void onChangeMapName(EarthView::World::Spatial::SystemUI::CMapActiveEvent* e)
					{
						if (this->_gRef != NULL && this->m_onChangeMapName_CMapActiveEvent_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onChangeMapName_CMapActiveEvent_callback");
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
							return this->CAtlasEventObject::onChangeMapName(e);
						}
					}
					virtual void onChangeSceneName(EarthView::World::Spatial::SystemUI::CSceneActiveEvent* e)
					{
						if (this->_gRef != NULL && this->m_onChangeSceneName_CSceneActiveEvent_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onChangeSceneName_CSceneActiveEvent_callback");
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
							return this->CAtlasEventObject::onChangeSceneName(e);
						}
					}
					virtual void onChangeLayerName(EarthView::World::Core::CEvent* e)
					{
						if (this->_gRef != NULL && this->m_onChangeLayerName_CEvent_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onChangeLayerName_CEvent_callback");
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
							return this->CAtlasEventObject::onChangeLayerName(e);
						}
					}
					virtual void onChangeLayerVisible(EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e)
					{
						if (this->_gRef != NULL && this->m_onChangeLayerVisible_CMapLayerActiveEvent_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onChangeLayerVisible_CMapLayerActiveEvent_callback");
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
							return this->CAtlasEventObject::onChangeLayerVisible(e);
						}
					}
					virtual void onChangeLayerTheme(EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e)
					{
						if (this->_gRef != NULL && this->m_onChangeLayerTheme_CMapLayerActiveEvent_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onChangeLayerTheme_CMapLayerActiveEvent_callback");
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
							return this->CAtlasEventObject::onChangeLayerTheme(e);
						}
					}
					virtual void onCreateSceneLayer(EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e)
					{
						if (this->_gRef != NULL && this->m_onCreateSceneLayer_CSceneLayerActiveEvent_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onCreateSceneLayer_CSceneLayerActiveEvent_callback");
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
							return this->CAtlasEventObject::onCreateSceneLayer(e);
						}
					}
					virtual void onCreateSceneGroupLayer(EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e)
					{
						if (this->_gRef != NULL && this->m_onCreateSceneGroupLayer_CSceneLayerActiveEvent_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onCreateSceneGroupLayer_CSceneLayerActiveEvent_callback");
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
							return this->CAtlasEventObject::onCreateSceneGroupLayer(e);
						}
					}
					virtual void onSwitchSceneLayer(EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e)
					{
						if (this->_gRef != NULL && this->m_onSwitchSceneLayer_CSceneLayerActiveEvent_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onSwitchSceneLayer_CSceneLayerActiveEvent_callback");
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
							return this->CAtlasEventObject::onSwitchSceneLayer(e);
						}
					}
					virtual void onMoveSceneLayer(EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e)
					{
						if (this->_gRef != NULL && this->m_onMoveSceneLayer_CSceneLayerActiveEvent_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onMoveSceneLayer_CSceneLayerActiveEvent_callback");
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
							return this->CAtlasEventObject::onMoveSceneLayer(e);
						}
					}
					virtual void onRemoveSceneLayer(EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e)
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
							return this->CAtlasEventObject::onRemoveSceneLayer(e);
						}
					}
					virtual void onSetSceneLayerVisible(EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e)
					{
						if (this->_gRef != NULL && this->m_onSetSceneLayerVisible_CSceneLayerActiveEvent_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onSetSceneLayerVisible_CSceneLayerActiveEvent_callback");
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
							return this->CAtlasEventObject::onSetSceneLayerVisible(e);
						}
					}
					virtual void onSetSceneLayerTheme(EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e)
					{
						if (this->_gRef != NULL && this->m_onSetSceneLayerTheme_CSceneLayerActiveEvent_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onSetSceneLayerTheme_CSceneLayerActiveEvent_callback");
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
							return this->CAtlasEventObject::onSetSceneLayerTheme(e);
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
							return this->CAtlasEventObject::onTimerEvent(e);
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
							return this->CAtlasEventObject::onCustomEvent(e);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCAtlasEventObjectProxy);
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onEvent_1CEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtlasEventObjectProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onEvent(e);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_register_1onEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtlasEventObjectProxy *pObjectX = (JCAtlasEventObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onEvent_1CEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onCreateMap_1CMapActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CMapActiveEvent *e = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtlasEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onCreateMap(e);
					}
					else
					{
						pObjectX->onCreateMap(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_register_1onCreateMap_1CMapActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtlasEventObjectProxy *pObjectX = (JCAtlasEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onCreateMap_CMapActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onCreateMap_CMapActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onCreateMap_1CMapActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CMapActiveEvent *e = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onCreateMap(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onCreateScene_1CSceneActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CSceneActiveEvent *e = (EarthView::World::Spatial::SystemUI::CSceneActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtlasEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onCreateScene(e);
					}
					else
					{
						pObjectX->onCreateScene(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_register_1onCreateScene_1CSceneActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtlasEventObjectProxy *pObjectX = (JCAtlasEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onCreateScene_CSceneActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onCreateScene_CSceneActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onCreateScene_1CSceneActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CSceneActiveEvent *e = (EarthView::World::Spatial::SystemUI::CSceneActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onCreateScene(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onSetCurrentMap_1CMapActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CMapActiveEvent *e = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtlasEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onSetCurrentMap(e);
					}
					else
					{
						pObjectX->onSetCurrentMap(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_register_1onSetCurrentMap_1CMapActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtlasEventObjectProxy *pObjectX = (JCAtlasEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onSetCurrentMap_CMapActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onSetCurrentMap_CMapActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onSetCurrentMap_1CMapActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CMapActiveEvent *e = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onSetCurrentMap(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onSetCurrentScene_1CSceneActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CSceneActiveEvent *e = (EarthView::World::Spatial::SystemUI::CSceneActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtlasEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onSetCurrentScene(e);
					}
					else
					{
						pObjectX->onSetCurrentScene(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_register_1onSetCurrentScene_1CSceneActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtlasEventObjectProxy *pObjectX = (JCAtlasEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onSetCurrentScene_CSceneActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onSetCurrentScene_CSceneActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onSetCurrentScene_1CSceneActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CSceneActiveEvent *e = (EarthView::World::Spatial::SystemUI::CSceneActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onSetCurrentScene(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onRemoveMap_1CMapActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CMapActiveEvent *e = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtlasEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onRemoveMap(e);
					}
					else
					{
						pObjectX->onRemoveMap(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_register_1onRemoveMap_1CMapActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtlasEventObjectProxy *pObjectX = (JCAtlasEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onRemoveMap_CMapActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onRemoveMap_CMapActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onRemoveMap_1CMapActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CMapActiveEvent *e = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onRemoveMap(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onRemoveScene_1CSceneActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CSceneActiveEvent *e = (EarthView::World::Spatial::SystemUI::CSceneActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtlasEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onRemoveScene(e);
					}
					else
					{
						pObjectX->onRemoveScene(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_register_1onRemoveScene_1CSceneActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtlasEventObjectProxy *pObjectX = (JCAtlasEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onRemoveScene_CSceneActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onRemoveScene_CSceneActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onRemoveScene_1CSceneActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CSceneActiveEvent *e = (EarthView::World::Spatial::SystemUI::CSceneActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onRemoveScene(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onCreateMapLayer_1CMapLayerActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtlasEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onCreateMapLayer(e);
					}
					else
					{
						pObjectX->onCreateMapLayer(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_register_1onCreateMapLayer_1CMapLayerActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtlasEventObjectProxy *pObjectX = (JCAtlasEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onCreateMapLayer_CMapLayerActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onCreateMapLayer_CMapLayerActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onCreateMapLayer_1CMapLayerActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onCreateMapLayer(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onCreateMapGroupLayer_1CMapLayerActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtlasEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onCreateMapGroupLayer(e);
					}
					else
					{
						pObjectX->onCreateMapGroupLayer(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_register_1onCreateMapGroupLayer_1CMapLayerActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtlasEventObjectProxy *pObjectX = (JCAtlasEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onCreateMapGroupLayer_CMapLayerActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onCreateMapGroupLayer_CMapLayerActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onCreateMapGroupLayer_1CMapLayerActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onCreateMapGroupLayer(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onMoveMapLayer_1CMapLayerActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtlasEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onMoveMapLayer(e);
					}
					else
					{
						pObjectX->onMoveMapLayer(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_register_1onMoveMapLayer_1CMapLayerActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtlasEventObjectProxy *pObjectX = (JCAtlasEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onMoveMapLayer_CMapLayerActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onMoveMapLayer_CMapLayerActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onMoveMapLayer_1CMapLayerActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onMoveMapLayer(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onRemoveMapLayer_1CMapLayerActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtlasEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onRemoveMapLayer(e);
					}
					else
					{
						pObjectX->onRemoveMapLayer(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_register_1onRemoveMapLayer_1CMapLayerActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtlasEventObjectProxy *pObjectX = (JCAtlasEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onRemoveMapLayer_CMapLayerActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onRemoveMapLayer_CMapLayerActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onRemoveMapLayer_1CMapLayerActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onRemoveMapLayer(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onChangeMapName_1CMapActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CMapActiveEvent *e = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtlasEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onChangeMapName(e);
					}
					else
					{
						pObjectX->onChangeMapName(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_register_1onChangeMapName_1CMapActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtlasEventObjectProxy *pObjectX = (JCAtlasEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onChangeMapName_CMapActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onChangeMapName_CMapActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onChangeMapName_1CMapActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CMapActiveEvent *e = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onChangeMapName(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onChangeSceneName_1CSceneActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CSceneActiveEvent *e = (EarthView::World::Spatial::SystemUI::CSceneActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtlasEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onChangeSceneName(e);
					}
					else
					{
						pObjectX->onChangeSceneName(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_register_1onChangeSceneName_1CSceneActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtlasEventObjectProxy *pObjectX = (JCAtlasEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onChangeSceneName_CSceneActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onChangeSceneName_CSceneActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onChangeSceneName_1CSceneActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CSceneActiveEvent *e = (EarthView::World::Spatial::SystemUI::CSceneActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onChangeSceneName(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onChangeLayerName_1CEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtlasEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onChangeLayerName(e);
					}
					else
					{
						pObjectX->onChangeLayerName(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_register_1onChangeLayerName_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtlasEventObjectProxy *pObjectX = (JCAtlasEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onChangeLayerName_CEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onChangeLayerName_CEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onChangeLayerName_1CEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onChangeLayerName(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onChangeLayerVisible_1CMapLayerActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtlasEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onChangeLayerVisible(e);
					}
					else
					{
						pObjectX->onChangeLayerVisible(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_register_1onChangeLayerVisible_1CMapLayerActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtlasEventObjectProxy *pObjectX = (JCAtlasEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onChangeLayerVisible_CMapLayerActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onChangeLayerVisible_CMapLayerActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onChangeLayerVisible_1CMapLayerActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onChangeLayerVisible(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onChangeLayerTheme_1CMapLayerActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtlasEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onChangeLayerTheme(e);
					}
					else
					{
						pObjectX->onChangeLayerTheme(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_register_1onChangeLayerTheme_1CMapLayerActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtlasEventObjectProxy *pObjectX = (JCAtlasEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onChangeLayerTheme_CMapLayerActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onChangeLayerTheme_CMapLayerActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onChangeLayerTheme_1CMapLayerActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onChangeLayerTheme(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onCreateSceneLayer_1CSceneLayerActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtlasEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onCreateSceneLayer(e);
					}
					else
					{
						pObjectX->onCreateSceneLayer(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_register_1onCreateSceneLayer_1CSceneLayerActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtlasEventObjectProxy *pObjectX = (JCAtlasEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onCreateSceneLayer_CSceneLayerActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onCreateSceneLayer_CSceneLayerActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onCreateSceneLayer_1CSceneLayerActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onCreateSceneLayer(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onCreateSceneGroupLayer_1CSceneLayerActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtlasEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onCreateSceneGroupLayer(e);
					}
					else
					{
						pObjectX->onCreateSceneGroupLayer(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_register_1onCreateSceneGroupLayer_1CSceneLayerActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtlasEventObjectProxy *pObjectX = (JCAtlasEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onCreateSceneGroupLayer_CSceneLayerActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onCreateSceneGroupLayer_CSceneLayerActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onCreateSceneGroupLayer_1CSceneLayerActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onCreateSceneGroupLayer(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onSwitchSceneLayer_1CSceneLayerActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtlasEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onSwitchSceneLayer(e);
					}
					else
					{
						pObjectX->onSwitchSceneLayer(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_register_1onSwitchSceneLayer_1CSceneLayerActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtlasEventObjectProxy *pObjectX = (JCAtlasEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onSwitchSceneLayer_CSceneLayerActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onSwitchSceneLayer_CSceneLayerActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onSwitchSceneLayer_1CSceneLayerActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onSwitchSceneLayer(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onMoveSceneLayer_1CSceneLayerActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtlasEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onMoveSceneLayer(e);
					}
					else
					{
						pObjectX->onMoveSceneLayer(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_register_1onMoveSceneLayer_1CSceneLayerActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtlasEventObjectProxy *pObjectX = (JCAtlasEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onMoveSceneLayer_CSceneLayerActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onMoveSceneLayer_CSceneLayerActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onMoveSceneLayer_1CSceneLayerActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onMoveSceneLayer(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onRemoveSceneLayer_1CSceneLayerActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtlasEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onRemoveSceneLayer(e);
					}
					else
					{
						pObjectX->onRemoveSceneLayer(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_register_1onRemoveSceneLayer_1CSceneLayerActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtlasEventObjectProxy *pObjectX = (JCAtlasEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onRemoveSceneLayer_CSceneLayerActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onRemoveSceneLayer_CSceneLayerActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onRemoveSceneLayer_1CSceneLayerActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onRemoveSceneLayer(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onSetSceneLayerVisible_1CSceneLayerActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtlasEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onSetSceneLayerVisible(e);
					}
					else
					{
						pObjectX->onSetSceneLayerVisible(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_register_1onSetSceneLayerVisible_1CSceneLayerActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtlasEventObjectProxy *pObjectX = (JCAtlasEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onSetSceneLayerVisible_CSceneLayerActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onSetSceneLayerVisible_CSceneLayerActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onSetSceneLayerVisible_1CSceneLayerActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onSetSceneLayerVisible(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onSetSceneLayerTheme_1CSceneLayerActiveEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAtlasEventObjectProxy))
					{
						pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onSetSceneLayerTheme(e);
					}
					else
					{
						pObjectX->onSetSceneLayerTheme(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_register_1onSetSceneLayerTheme_1CSceneLayerActiveEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtlasEventObjectProxy *pObjectX = (JCAtlasEventObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onSetSceneLayerTheme_CSceneLayerActiveEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onSetSceneLayerTheme_CSceneLayerActiveEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_onSetSceneLayerTheme_1CSceneLayerActiveEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *e = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) e_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onSetSceneLayerTheme(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_createMap_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->createMap(name);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_setCurrentMap_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->setCurrentMap(map);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_setCurrentScene_1IScene(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scene_j)
				{
					EarthView::World::Spatial::Atlas::IScene *scene = (EarthView::World::Spatial::Atlas::IScene*) scene_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->setCurrentScene(scene);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_removeMap_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->removeMap(map);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_removeScene_1IScene(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scene_j)
				{
					EarthView::World::Spatial::Atlas::IScene *scene = (EarthView::World::Spatial::Atlas::IScene*) scene_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->removeScene(scene);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_destroyMap_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->destroyMap(map);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_destroyScene_1IScene(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scene_j)
				{
					EarthView::World::Spatial::Atlas::IScene *scene = (EarthView::World::Spatial::Atlas::IScene*) scene_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->destroyScene(scene);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_destroyLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->destroyLayer(layer);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_getSupportedType_1EVLayerType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint grouplayerType_j)
				{
					EarthView::World::Spatial::Atlas::EVLayerType grouplayerType = (EarthView::World::Spatial::Atlas::EVLayerType) grouplayerType_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet __values1 = pObjectX->getSupportedType(grouplayerType);
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet *returnvalues = new EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_createMapLayer_1IMap_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j, jstring datasourceName_j, jstring datasetName_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->createMapLayer(map, datasourceName, datasetName);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_createMapLayer_1IGroupLayer_1IDataset_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong grouplayer_j, jlong dataset_j, jlong map_j)
				{
					EarthView::World::Spatial::Atlas::IGroupLayer *grouplayer = (EarthView::World::Spatial::Atlas::IGroupLayer*) grouplayer_j;
					EarthView::World::Spatial::GeoDataset::IDataset *dataset = (EarthView::World::Spatial::GeoDataset::IDataset*) dataset_j;
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->createMapLayer(grouplayer, dataset, map);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_createMapGroupLayer_1IMap_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j, jstring groupName_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
					const EVString groupName = groupName_ch;
					__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
					#else
					const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
					const EVString groupName = groupName_ch;
					__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
					#endif
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->createMapGroupLayer(map, groupName);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_createMapGroupLayer_1IGroupLayer_1EVString_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong grouplayer_j, jstring groupName_j, jlong map_j)
				{
					EarthView::World::Spatial::Atlas::IGroupLayer *grouplayer = (EarthView::World::Spatial::Atlas::IGroupLayer*) grouplayer_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
					const EVString groupName = groupName_ch;
					__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
					#else
					const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
					const EVString groupName = groupName_ch;
					__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
					#endif
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->createMapGroupLayer(grouplayer, groupName, map);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_moveMapLayer_1IMap_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j, jlong oldIndex_j, jlong newIndex_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					ev_uint32 oldIndex = (ev_uint32) oldIndex_j;
					ev_uint32 newIndex = (ev_uint32) newIndex_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->moveMapLayer(map, oldIndex, newIndex);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_moveMapLayer_1IMap_1IGroupLayer_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j, jlong grouplayer_j, jlong oldIndex_j, jlong newIndex_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					EarthView::World::Spatial::Atlas::IGroupLayer *grouplayer = (EarthView::World::Spatial::Atlas::IGroupLayer*) grouplayer_j;
					ev_uint32 oldIndex = (ev_uint32) oldIndex_j;
					ev_uint32 newIndex = (ev_uint32) newIndex_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->moveMapLayer(map, grouplayer, oldIndex, newIndex);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_moveMapLayer_1IMap_1IGroupLayer_1ev_1uint32_1IGroupLayer_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMap_j, jlong dragGroupLayer_j, jlong dragIndex_j, jlong hoverGroupLayer_j, jlong hoverIndex_j)
				{
					EarthView::World::Spatial::Atlas::IMap *pMap = (EarthView::World::Spatial::Atlas::IMap*) pMap_j;
					EarthView::World::Spatial::Atlas::IGroupLayer *dragGroupLayer = (EarthView::World::Spatial::Atlas::IGroupLayer*) dragGroupLayer_j;
					ev_uint32 dragIndex = (ev_uint32) dragIndex_j;
					EarthView::World::Spatial::Atlas::IGroupLayer *hoverGroupLayer = (EarthView::World::Spatial::Atlas::IGroupLayer*) hoverGroupLayer_j;
					ev_uint32 hoverIndex = (ev_uint32) hoverIndex_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->moveMapLayer(pMap, dragGroupLayer, dragIndex, hoverGroupLayer, hoverIndex);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_removeMapLayer_1IMap_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j, jlong index_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->removeMapLayer(map, index);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_removeMapLayer_1IGroupLayer_1ev_1uint32_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong grouplayer_j, jlong index_j, jlong map_j)
				{
					EarthView::World::Spatial::Atlas::IGroupLayer *grouplayer = (EarthView::World::Spatial::Atlas::IGroupLayer*) grouplayer_j;
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->removeMapLayer(grouplayer, index, map);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_changeMapName_1IMap_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j, jstring name_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->changeMapName(map, name);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_changeLayerName_1ILayer_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j, jstring name_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->changeLayerName(layer, name);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_changeLayerVisible_1ILayer_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j, jboolean visible_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->changeLayerVisible(layer, visible);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_createSceneLayer_1IGlobeLayer_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pParentGrouplayer_j, jstring datasourceName_j, jstring datasetName_j)
				{
					EarthView::World::Spatial3D::Atlas::IGlobeLayer *pParentGrouplayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) pParentGrouplayer_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->createSceneLayer(pParentGrouplayer, datasourceName, datasetName);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_createSceneGroupLayer_1IGlobeLayer_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pParentGrouplayer_j, jstring groupName_j)
				{
					EarthView::World::Spatial3D::Atlas::IGlobeLayer *pParentGrouplayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) pParentGrouplayer_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
					const EVString groupName = groupName_ch;
					__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
					#else
					const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
					const EVString groupName = groupName_ch;
					__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
					#endif
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->createSceneGroupLayer(pParentGrouplayer, groupName);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_moveSceneLayer_1IGlobeLayer_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pParentGrouplayer_j, jlong index_j, jlong pos_j)
				{
					EarthView::World::Spatial3D::Atlas::IGlobeLayer *pParentGrouplayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) pParentGrouplayer_j;
					ev_uint32 index = (ev_uint32) index_j;
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->moveSceneLayer(pParentGrouplayer, index, pos);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_switchSceneLayer_1IGlobeLayer_1ev_1uint32_1IGlobeLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pParentGrouplayer_j, jlong index_j, jlong newLayer_j)
				{
					EarthView::World::Spatial3D::Atlas::IGlobeLayer *pParentGrouplayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) pParentGrouplayer_j;
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial3D::Atlas::IGlobeLayer *newLayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) newLayer_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->switchSceneLayer(pParentGrouplayer, index, newLayer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_removeSceneLayer_1IGlobeLayer_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pParentGrouplayer_j, jlong index_j)
				{
					EarthView::World::Spatial3D::Atlas::IGlobeLayer *pParentGrouplayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) pParentGrouplayer_j;
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->removeSceneLayer(pParentGrouplayer, index);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_setSceneLayerVisible_1IGlobeLayer_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j, jboolean visible_j)
				{
					EarthView::World::Spatial3D::Atlas::IGlobeLayer *layer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) layer_j;
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->setSceneLayerVisible(layer, visible);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_setSceneLayerTheme_1IGlobeLayer_1ITheme(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j, jlong theme_j)
				{
					EarthView::World::Spatial3D::Atlas::IGlobeLayer *layer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) layer_j;
					EarthView::World::Spatial::Theme::ITheme *theme = (EarthView::World::Spatial::Theme::ITheme*) theme_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjXXXX;
					pObjectX->setSceneLayerTheme(layer, theme);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_register_1onTimerEvent_1CTimerEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtlasEventObjectProxy *pObjectX = (JCAtlasEventObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasEventObject_register_1onCustomEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAtlasEventObjectProxy *pObjectX = (JCAtlasEventObjectProxy*) pObjXXXX;
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
