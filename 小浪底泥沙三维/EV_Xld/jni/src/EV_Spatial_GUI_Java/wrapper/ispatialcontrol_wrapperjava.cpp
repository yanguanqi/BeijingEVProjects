/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/ispatialcontrol.h"
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
			namespace Atlas
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_atlas_EVSpatialControlTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						SCT_MapControl,
						SCT_GlobeControl,
						SCT_LayoutControl,
						SCT_Custom
					};
					jintArray array = __env->NewIntArray(4);
					__env->SetIntArrayRegion(array, 0, 4, enum_values);
					return array;
				}
				class JISpatialControlProxy : public EarthView::World::Spatial::Atlas::ISpatialControl
				{
				 private:
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_getTypeString_void_callback;
					EarthView::World::Core::ev_string m_notifyViewChanged_IViewArgs_callback;
					EarthView::World::Core::ev_string m_addViewListener_IViewListener_callback;
					EarthView::World::Core::ev_string m_getViewListenerCount_void_callback;
					EarthView::World::Core::ev_string m_getViewListener_ev_uint32_callback;
					EarthView::World::Core::ev_string m_existViewListener_IViewListener_callback;
					EarthView::World::Core::ev_string m_removeViewListener_ev_uint32_callback;
					EarthView::World::Core::ev_string m_removeViewListener_IViewListener_callback;
					EarthView::World::Core::ev_string m_clearViewListeners_void_callback;
				public:
					JISpatialControlProxy(EarthView::World::Core::CNameValuePairList *pList) : ISpatialControl(pList)
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
					C_DISABLE_COPY(JISpatialControlProxy)
				public:
					void register_getType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getType_void_callback = __method;
					}
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_getTypeString_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getTypeString_void_callback = __method;
					}
					void register_notifyViewChanged_IViewArgs_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_notifyViewChanged_IViewArgs_callback = __method;
					}
					void register_addViewListener_IViewListener_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addViewListener_IViewListener_callback = __method;
					}
					void register_getViewListenerCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getViewListenerCount_void_callback = __method;
					}
					void register_getViewListener_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getViewListener_ev_uint32_callback = __method;
					}
					void register_existViewListener_IViewListener_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_existViewListener_IViewListener_callback = __method;
					}
					void register_removeViewListener_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeViewListener_ev_uint32_callback = __method;
					}
					void register_removeViewListener_IViewListener_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeViewListener_IViewListener_callback = __method;
					}
					void register_clearViewListeners_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_clearViewListeners_void_callback = __method;
					}
					virtual EarthView::World::Spatial::Atlas::EVSpatialControlType getType() const
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
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Atlas::EVSpatialControlType __values1 = (EarthView::World::Spatial::Atlas::EVSpatialControlType) __values1_j;
							return __values1;
						}
						else
						{
							return this->ISpatialControl::getType();
						}
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
							return this->ISpatialControl::getName();
						}
					}
					virtual EVString getTypeString() const
					{
						if (this->_gRef != NULL && this->m_getTypeString_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getTypeString_void_callback");
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
							return this->ISpatialControl::getTypeString();
						}
					}
					virtual void notifyViewChanged(EarthView::World::Spatial::IViewArgs* args)
					{
						if (this->_gRef != NULL && this->m_notifyViewChanged_IViewArgs_callback != "" && this->isCustomExtend())
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
							jlong args_j = (jlong) args;
							jmethodID __method = __gr->getMethod("notifyViewChanged_IViewArgs_callback");
							__env->CallVoidMethod(__obj, __method , args_j);
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
							return this->ISpatialControl::notifyViewChanged(args);
						}
					}
					virtual ev_bool addViewListener(EarthView::World::Spatial::IViewListener* ref_externalListener)
					{
						if (this->_gRef != NULL && this->m_addViewListener_IViewListener_callback != "" && this->isCustomExtend())
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
							jlong ref_externalListener_j = (jlong) ref_externalListener;
							jmethodID __method = __gr->getMethod("addViewListener_IViewListener_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , ref_externalListener_j);
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
							return this->ISpatialControl::addViewListener(ref_externalListener);
						}
					}
					virtual ev_uint32 getViewListenerCount() const
					{
						if (this->_gRef != NULL && this->m_getViewListenerCount_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getViewListenerCount_void_callback");
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
							return this->ISpatialControl::getViewListenerCount();
						}
					}
					virtual EarthView::World::Spatial::IViewListener* getViewListener(ev_uint32 index) const
					{
						if (this->_gRef != NULL && this->m_getViewListener_ev_uint32_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getViewListener_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::IViewListener *__values1 = (EarthView::World::Spatial::IViewListener*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ISpatialControl::getViewListener(index);
						}
					}
					virtual ev_bool existViewListener(EarthView::World::Spatial::IViewListener* externalListener) const
					{
						if (this->_gRef != NULL && this->m_existViewListener_IViewListener_callback != "" && this->isCustomExtend())
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
							jlong externalListener_j = (jlong) externalListener;
							jmethodID __method = __gr->getMethod("existViewListener_IViewListener_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , externalListener_j);
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
							return this->ISpatialControl::existViewListener(externalListener);
						}
					}
					virtual ev_bool removeViewListener(ev_uint32 index)
					{
						if (this->_gRef != NULL && this->m_removeViewListener_ev_uint32_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("removeViewListener_ev_uint32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , index_j);
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
							return this->ISpatialControl::removeViewListener(index);
						}
					}
					virtual ev_bool removeViewListener(EarthView::World::Spatial::IViewListener* externalListener)
					{
						if (this->_gRef != NULL && this->m_removeViewListener_IViewListener_callback != "" && this->isCustomExtend())
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
							jlong externalListener_j = (jlong) externalListener;
							jmethodID __method = __gr->getMethod("removeViewListener_IViewListener_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , externalListener_j);
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
							return this->ISpatialControl::removeViewListener(externalListener);
						}
					}
					virtual void clearViewListeners()
					{
						if (this->_gRef != NULL && this->m_clearViewListeners_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("clearViewListeners_void_callback");
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
							return this->ISpatialControl::clearViewListeners();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JISpatialControlProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ISpatialControl *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialControlProxy))
					{
						EarthView::World::Spatial::Atlas::EVSpatialControlType __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialControl::getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVSpatialControlType __values1 = pObjectX->getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialControlProxy *pObjectX = (JISpatialControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ISpatialControl *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjXXXX;
					EarthView::World::Spatial::Atlas::EVSpatialControlType __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialControl::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ISpatialControl *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialControlProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialControl::getName();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialControlProxy *pObjectX = (JISpatialControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ISpatialControl *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialControl::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_getTypeString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ISpatialControl *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialControlProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialControl::getTypeString();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getTypeString();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_register_1getTypeString_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialControlProxy *pObjectX = (JISpatialControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getTypeString_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getTypeString_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_getTypeString_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ISpatialControl *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialControl::getTypeString();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_notifyViewChanged_1IViewArgs(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong args_j)
				{
					EarthView::World::Spatial::IViewArgs *args = (EarthView::World::Spatial::IViewArgs*) args_j;
					EarthView::World::Spatial::Atlas::ISpatialControl *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialControlProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ISpatialControl::notifyViewChanged(args);
					}
					else
					{
						pObjectX->notifyViewChanged(args);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_register_1notifyViewChanged_1IViewArgs(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialControlProxy *pObjectX = (JISpatialControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_notifyViewChanged_IViewArgs_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"notifyViewChanged_IViewArgs_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_notifyViewChanged_1IViewArgs_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong args_j)
				{
					EarthView::World::Spatial::IViewArgs *args = (EarthView::World::Spatial::IViewArgs*) args_j;
					EarthView::World::Spatial::Atlas::ISpatialControl *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ISpatialControl::notifyViewChanged(args);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_addViewListener_1IViewListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_externalListener_j)
				{
					EarthView::World::Spatial::IViewListener *ref_externalListener = (EarthView::World::Spatial::IViewListener*) ref_externalListener_j;
					EarthView::World::Spatial::Atlas::ISpatialControl *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialControlProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialControl::addViewListener(ref_externalListener);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->addViewListener(ref_externalListener);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_register_1addViewListener_1IViewListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialControlProxy *pObjectX = (JISpatialControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addViewListener_IViewListener_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addViewListener_IViewListener_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_addViewListener_1IViewListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_externalListener_j)
				{
					EarthView::World::Spatial::IViewListener *ref_externalListener = (EarthView::World::Spatial::IViewListener*) ref_externalListener_j;
					EarthView::World::Spatial::Atlas::ISpatialControl *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialControl::addViewListener(ref_externalListener);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_getViewListenerCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ISpatialControl *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialControlProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialControl::getViewListenerCount();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getViewListenerCount();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_register_1getViewListenerCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialControlProxy *pObjectX = (JISpatialControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getViewListenerCount_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getViewListenerCount_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_getViewListenerCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ISpatialControl *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialControl::getViewListenerCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_getViewListener_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Atlas::ISpatialControl *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialControlProxy))
					{
						EarthView::World::Spatial::IViewListener* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialControl::getViewListener(index);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::IViewListener* __values1 = pObjectX->getViewListener(index);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_register_1getViewListener_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialControlProxy *pObjectX = (JISpatialControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getViewListener_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getViewListener_ev_uint32_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_getViewListener_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Atlas::ISpatialControl *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjXXXX;
					EarthView::World::Spatial::IViewListener* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialControl::getViewListener(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_existViewListener_1IViewListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong externalListener_j)
				{
					EarthView::World::Spatial::IViewListener *externalListener = (EarthView::World::Spatial::IViewListener*) externalListener_j;
					const 					EarthView::World::Spatial::Atlas::ISpatialControl *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialControlProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialControl::existViewListener(externalListener);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->existViewListener(externalListener);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_register_1existViewListener_1IViewListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialControlProxy *pObjectX = (JISpatialControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_existViewListener_IViewListener_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"existViewListener_IViewListener_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_existViewListener_1IViewListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong externalListener_j)
				{
					EarthView::World::Spatial::IViewListener *externalListener = (EarthView::World::Spatial::IViewListener*) externalListener_j;
					const 					EarthView::World::Spatial::Atlas::ISpatialControl *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialControl::existViewListener(externalListener);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_removeViewListener_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Atlas::ISpatialControl *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialControlProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialControl::removeViewListener(index);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->removeViewListener(index);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_register_1removeViewListener_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialControlProxy *pObjectX = (JISpatialControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeViewListener_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeViewListener_ev_uint32_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_removeViewListener_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Atlas::ISpatialControl *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialControl::removeViewListener(index);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_removeViewListener_1IViewListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong externalListener_j)
				{
					EarthView::World::Spatial::IViewListener *externalListener = (EarthView::World::Spatial::IViewListener*) externalListener_j;
					EarthView::World::Spatial::Atlas::ISpatialControl *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialControlProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialControl::removeViewListener(externalListener);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->removeViewListener(externalListener);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_register_1removeViewListener_1IViewListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialControlProxy *pObjectX = (JISpatialControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeViewListener_IViewListener_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeViewListener_IViewListener_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_removeViewListener_1IViewListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong externalListener_j)
				{
					EarthView::World::Spatial::IViewListener *externalListener = (EarthView::World::Spatial::IViewListener*) externalListener_j;
					EarthView::World::Spatial::Atlas::ISpatialControl *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialControl::removeViewListener(externalListener);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_clearViewListeners_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::ISpatialControl *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialControlProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ISpatialControl::clearViewListeners();
					}
					else
					{
						pObjectX->clearViewListeners();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_register_1clearViewListeners_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialControlProxy *pObjectX = (JISpatialControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_clearViewListeners_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"clearViewListeners_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialcontrol_clearViewListeners_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::ISpatialControl *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialControl*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ISpatialControl::clearViewListeners();
				}
			}
		}
	}
}
