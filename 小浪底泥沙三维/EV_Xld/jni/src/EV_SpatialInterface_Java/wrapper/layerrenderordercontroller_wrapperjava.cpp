/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/layerrenderordercontroller.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
				class JLayerRenderOrderControllerProxy : public EarthView::World::Spatial::Atlas::LayerRenderOrderController
				{
				 private:
					EarthView::World::Core::ev_string m_isUseCustomOrder_void_callback;
					EarthView::World::Core::ev_string m_setUseCustomOrder_ev_bool_callback;
					EarthView::World::Core::ev_string m_addLayer_ILayer_callback;
					EarthView::World::Core::ev_string m_insertLayer_ev_uint32_ILayer_callback;
					EarthView::World::Core::ev_string m_removeLayer_ev_uint32_callback;
					EarthView::World::Core::ev_string m_removeLayer_ILayer_callback;
					EarthView::World::Core::ev_string m_removeAll_void_callback;
					EarthView::World::Core::ev_string m_moveLayer_ev_uint32_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getLayerList_void_callback;
					EarthView::World::Core::ev_string m_resetOrder_void_callback;
					EarthView::World::Core::ev_string m_fromXmlElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_toXmlElement_void_callback;
				public:
					JLayerRenderOrderControllerProxy(EarthView::World::Core::CNameValuePairList *pList) : LayerRenderOrderController(pList)
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
				protected:
					C_DISABLE_COPY(JLayerRenderOrderControllerProxy)
				public:
					void register_isUseCustomOrder_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isUseCustomOrder_void_callback = __method;
					}
					void register_setUseCustomOrder_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setUseCustomOrder_ev_bool_callback = __method;
					}
					void register_addLayer_ILayer_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addLayer_ILayer_callback = __method;
					}
					void register_insertLayer_ev_uint32_ILayer_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_insertLayer_ev_uint32_ILayer_callback = __method;
					}
					void register_removeLayer_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeLayer_ev_uint32_callback = __method;
					}
					void register_removeLayer_ILayer_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeLayer_ILayer_callback = __method;
					}
					void register_removeAll_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeAll_void_callback = __method;
					}
					void register_moveLayer_ev_uint32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_moveLayer_ev_uint32_ev_uint32_callback = __method;
					}
					void register_getLayerList_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getLayerList_void_callback = __method;
					}
					void register_resetOrder_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_resetOrder_void_callback = __method;
					}
					void register_fromXmlElement_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromXmlElement_CXmlElement_callback = __method;
					}
					void register_toXmlElement_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toXmlElement_void_callback = __method;
					}
					virtual ev_bool isUseCustomOrder() const
					{
						if (this->_gRef != NULL && this->m_isUseCustomOrder_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isUseCustomOrder_void_callback");
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
							return this->LayerRenderOrderController::isUseCustomOrder();
						}
					}
					virtual void setUseCustomOrder(ev_bool bControl)
					{
						if (this->_gRef != NULL && this->m_setUseCustomOrder_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean bControl_j = (jboolean) bControl;
							jmethodID __method = __gr->getMethod("setUseCustomOrder_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , bControl_j);
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
							return this->LayerRenderOrderController::setUseCustomOrder(bControl);
						}
					}
					virtual void addLayer(EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if (this->_gRef != NULL && this->m_addLayer_ILayer_callback != "" && this->isCustomExtend())
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
							jlong layer_j = (jlong) layer;
							jmethodID __method = __gr->getMethod("addLayer_ILayer_callback");
							__env->CallVoidMethod(__obj, __method , layer_j);
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
							return this->LayerRenderOrderController::addLayer(layer);
						}
					}
					virtual void insertLayer(ev_uint32 index, EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if (this->_gRef != NULL && this->m_insertLayer_ev_uint32_ILayer_callback != "" && this->isCustomExtend())
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
							jlong layer_j = (jlong) layer;
							jmethodID __method = __gr->getMethod("insertLayer_ev_uint32_ILayer_callback");
							__env->CallVoidMethod(__obj, __method , index_j, layer_j);
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
							return this->LayerRenderOrderController::insertLayer(index, layer);
						}
					}
					virtual void removeLayer(ev_uint32 index)
					{
						if (this->_gRef != NULL && this->m_removeLayer_ev_uint32_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("removeLayer_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , index_j);
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
							return this->LayerRenderOrderController::removeLayer(index);
						}
					}
					virtual void removeLayer(EarthView::World::Spatial::Atlas::ILayer* pLayer)
					{
						if (this->_gRef != NULL && this->m_removeLayer_ILayer_callback != "" && this->isCustomExtend())
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
							jlong pLayer_j = (jlong) pLayer;
							jmethodID __method = __gr->getMethod("removeLayer_ILayer_callback");
							__env->CallVoidMethod(__obj, __method , pLayer_j);
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
							return this->LayerRenderOrderController::removeLayer(pLayer);
						}
					}
					virtual void removeAll()
					{
						if (this->_gRef != NULL && this->m_removeAll_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("removeAll_void_callback");
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
							return this->LayerRenderOrderController::removeAll();
						}
					}
					virtual void moveLayer(ev_uint32 oldIndex, ev_uint32 newIndex)
					{
						if (this->_gRef != NULL && this->m_moveLayer_ev_uint32_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong oldIndex_j = (jlong) oldIndex;
							jlong newIndex_j = (jlong) newIndex;
							jmethodID __method = __gr->getMethod("moveLayer_ev_uint32_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , oldIndex_j, newIndex_j);
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
							return this->LayerRenderOrderController::moveLayer(oldIndex, newIndex);
						}
					}
					virtual EarthView::World::Spatial::Atlas::LayerList getLayerList() const
					{
						if (this->_gRef != NULL && this->m_getLayerList_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getLayerList_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Atlas::LayerList __values1 = *(EarthView::World::Spatial::Atlas::LayerList*) __values1_j;
							return __values1;
						}
						else
						{
							return this->LayerRenderOrderController::getLayerList();
						}
					}
					virtual void resetOrder()
					{
						if (this->_gRef != NULL && this->m_resetOrder_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("resetOrder_void_callback");
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
							return this->LayerRenderOrderController::resetOrder();
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
							return this->LayerRenderOrderController::fromXmlElement(element);
						}
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if (this->_gRef != NULL && this->m_toXmlElement_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("toXmlElement_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
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
							return this->LayerRenderOrderController::toXmlElement();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JLayerRenderOrderControllerProxy);
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_isUseCustomOrder_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::LayerRenderOrderController *pObjectX = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JLayerRenderOrderControllerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::LayerRenderOrderController::isUseCustomOrder();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isUseCustomOrder();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_register_1isUseCustomOrder_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JLayerRenderOrderControllerProxy *pObjectX = (JLayerRenderOrderControllerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isUseCustomOrder_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isUseCustomOrder_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_isUseCustomOrder_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::LayerRenderOrderController *pObjectX = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::LayerRenderOrderController::isUseCustomOrder();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_setUseCustomOrder_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bControl_j)
				{
					ev_bool bControl = (ev_bool) bControl_j;
					EarthView::World::Spatial::Atlas::LayerRenderOrderController *pObjectX = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JLayerRenderOrderControllerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::LayerRenderOrderController::setUseCustomOrder(bControl);
					}
					else
					{
						pObjectX->setUseCustomOrder(bControl);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_register_1setUseCustomOrder_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JLayerRenderOrderControllerProxy *pObjectX = (JLayerRenderOrderControllerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setUseCustomOrder_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setUseCustomOrder_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_setUseCustomOrder_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bControl_j)
				{
					ev_bool bControl = (ev_bool) bControl_j;
					EarthView::World::Spatial::Atlas::LayerRenderOrderController *pObjectX = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::LayerRenderOrderController::setUseCustomOrder(bControl);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_addLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial::Atlas::LayerRenderOrderController *pObjectX = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JLayerRenderOrderControllerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::LayerRenderOrderController::addLayer(layer);
					}
					else
					{
						pObjectX->addLayer(layer);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_register_1addLayer_1ILayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JLayerRenderOrderControllerProxy *pObjectX = (JLayerRenderOrderControllerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addLayer_ILayer_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addLayer_ILayer_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_addLayer_1ILayer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial::Atlas::LayerRenderOrderController *pObjectX = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::LayerRenderOrderController::addLayer(layer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_insertLayer_1ev_1uint32_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong layer_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial::Atlas::LayerRenderOrderController *pObjectX = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JLayerRenderOrderControllerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::LayerRenderOrderController::insertLayer(index, layer);
					}
					else
					{
						pObjectX->insertLayer(index, layer);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_register_1insertLayer_1ev_1uint32_1ILayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JLayerRenderOrderControllerProxy *pObjectX = (JLayerRenderOrderControllerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_insertLayer_ev_uint32_ILayer_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"insertLayer_ev_uint32_ILayer_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_insertLayer_1ev_1uint32_1ILayer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong layer_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial::Atlas::LayerRenderOrderController *pObjectX = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::LayerRenderOrderController::insertLayer(index, layer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_removeLayer_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Atlas::LayerRenderOrderController *pObjectX = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JLayerRenderOrderControllerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::LayerRenderOrderController::removeLayer(index);
					}
					else
					{
						pObjectX->removeLayer(index);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_register_1removeLayer_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JLayerRenderOrderControllerProxy *pObjectX = (JLayerRenderOrderControllerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeLayer_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeLayer_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_removeLayer_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Atlas::LayerRenderOrderController *pObjectX = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::LayerRenderOrderController::removeLayer(index);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_removeLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pLayer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *pLayer = (EarthView::World::Spatial::Atlas::ILayer*) pLayer_j;
					EarthView::World::Spatial::Atlas::LayerRenderOrderController *pObjectX = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JLayerRenderOrderControllerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::LayerRenderOrderController::removeLayer(pLayer);
					}
					else
					{
						pObjectX->removeLayer(pLayer);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_register_1removeLayer_1ILayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JLayerRenderOrderControllerProxy *pObjectX = (JLayerRenderOrderControllerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeLayer_ILayer_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeLayer_ILayer_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_removeLayer_1ILayer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pLayer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *pLayer = (EarthView::World::Spatial::Atlas::ILayer*) pLayer_j;
					EarthView::World::Spatial::Atlas::LayerRenderOrderController *pObjectX = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::LayerRenderOrderController::removeLayer(pLayer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_removeAll_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::LayerRenderOrderController *pObjectX = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JLayerRenderOrderControllerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::LayerRenderOrderController::removeAll();
					}
					else
					{
						pObjectX->removeAll();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_register_1removeAll_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JLayerRenderOrderControllerProxy *pObjectX = (JLayerRenderOrderControllerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeAll_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeAll_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_removeAll_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::LayerRenderOrderController *pObjectX = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::LayerRenderOrderController::removeAll();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_moveLayer_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong oldIndex_j, jlong newIndex_j)
				{
					ev_uint32 oldIndex = (ev_uint32) oldIndex_j;
					ev_uint32 newIndex = (ev_uint32) newIndex_j;
					EarthView::World::Spatial::Atlas::LayerRenderOrderController *pObjectX = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JLayerRenderOrderControllerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::LayerRenderOrderController::moveLayer(oldIndex, newIndex);
					}
					else
					{
						pObjectX->moveLayer(oldIndex, newIndex);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_register_1moveLayer_1ev_1uint32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JLayerRenderOrderControllerProxy *pObjectX = (JLayerRenderOrderControllerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_moveLayer_ev_uint32_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"moveLayer_ev_uint32_ev_uint32_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_moveLayer_1ev_1uint32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong oldIndex_j, jlong newIndex_j)
				{
					ev_uint32 oldIndex = (ev_uint32) oldIndex_j;
					ev_uint32 newIndex = (ev_uint32) newIndex_j;
					EarthView::World::Spatial::Atlas::LayerRenderOrderController *pObjectX = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::LayerRenderOrderController::moveLayer(oldIndex, newIndex);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_getLayerList_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::LayerRenderOrderController *pObjectX = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JLayerRenderOrderControllerProxy))
					{
						EarthView::World::Spatial::Atlas::LayerList __values1 = pObjectX->EarthView::World::Spatial::Atlas::LayerRenderOrderController::getLayerList();
						EarthView::World::Spatial::Atlas::LayerList *returnvalues = new EarthView::World::Spatial::Atlas::LayerList(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::LayerList __values1 = pObjectX->getLayerList();
						EarthView::World::Spatial::Atlas::LayerList *returnvalues = new EarthView::World::Spatial::Atlas::LayerList(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_register_1getLayerList_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JLayerRenderOrderControllerProxy *pObjectX = (JLayerRenderOrderControllerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getLayerList_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getLayerList_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_getLayerList_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::LayerRenderOrderController *pObjectX = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjXXXX;
					EarthView::World::Spatial::Atlas::LayerList __values1 = pObjectX->EarthView::World::Spatial::Atlas::LayerRenderOrderController::getLayerList();
					EarthView::World::Spatial::Atlas::LayerList *returnvalues = new EarthView::World::Spatial::Atlas::LayerList(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_resetOrder_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::LayerRenderOrderController *pObjectX = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JLayerRenderOrderControllerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::LayerRenderOrderController::resetOrder();
					}
					else
					{
						pObjectX->resetOrder();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_register_1resetOrder_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JLayerRenderOrderControllerProxy *pObjectX = (JLayerRenderOrderControllerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_resetOrder_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"resetOrder_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_resetOrder_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::LayerRenderOrderController *pObjectX = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::LayerRenderOrderController::resetOrder();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Atlas::LayerRenderOrderController *pObjectX = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JLayerRenderOrderControllerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::LayerRenderOrderController::fromXmlElement(element);
					}
					else
					{
						pObjectX->fromXmlElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JLayerRenderOrderControllerProxy *pObjectX = (JLayerRenderOrderControllerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_fromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Atlas::LayerRenderOrderController *pObjectX = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::LayerRenderOrderController::fromXmlElement(element);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::LayerRenderOrderController *pObjectX = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JLayerRenderOrderControllerProxy))
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Atlas::LayerRenderOrderController::toXmlElement();
						EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->toXmlElement();
						EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JLayerRenderOrderControllerProxy *pObjectX = (JLayerRenderOrderControllerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toXmlElement_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toXmlElement_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_LayerRenderOrderController_toXmlElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::LayerRenderOrderController *pObjectX = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Atlas::LayerRenderOrderController::toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
		}
	}
}
