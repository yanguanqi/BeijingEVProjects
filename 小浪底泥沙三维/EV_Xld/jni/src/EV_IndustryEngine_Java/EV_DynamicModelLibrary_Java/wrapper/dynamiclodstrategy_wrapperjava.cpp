/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/dynamicmodellibrary/dynamiclodstrategy.h"
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
			class JCDynamicLodStrategyProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy
			{
			 private:
				EarthView::World::Core::ev_string m_isPassed_CDynamicModelObject_EVString_CGlobeCamera_callback;
				EarthView::World::Core::ev_string m_setMaxVisibleValue_EVString_Real_callback;
				EarthView::World::Core::ev_string m_setMinVisibleValue_EVString_Real_callback;
				EarthView::World::Core::ev_string m_getMaxVisibleValue_EVString_callback;
				EarthView::World::Core::ev_string m_getMinVisibleValue_EVString_callback;
				EarthView::World::Core::ev_string m_registerLodStrategyItem_CDynamicLodStrategyItem_callback;
				EarthView::World::Core::ev_string m_unregisterLodStrategyItem_EVString_callback;
				EarthView::World::Core::ev_string m_addLodStrategyListener_CDynamicLodStrategyListener_callback;
				EarthView::World::Core::ev_string m_removeLodStrategyListener_EVString_callback;
				EarthView::World::Core::ev_string m_getLodValue_CDynamicModelObject_CGlobeCamera_callback;
				EarthView::World::Core::ev_string m_fireLodStrategyListener_CDynamicModelObject_CGlobeCamera_callback;
			public:
				JCDynamicLodStrategyProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicLodStrategy(pList)
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
				void register_isPassed_CDynamicModelObject_EVString_CGlobeCamera_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isPassed_CDynamicModelObject_EVString_CGlobeCamera_callback = __method;
				}
				void register_setMaxVisibleValue_EVString_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setMaxVisibleValue_EVString_Real_callback = __method;
				}
				void register_setMinVisibleValue_EVString_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setMinVisibleValue_EVString_Real_callback = __method;
				}
				void register_getMaxVisibleValue_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMaxVisibleValue_EVString_callback = __method;
				}
				void register_getMinVisibleValue_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMinVisibleValue_EVString_callback = __method;
				}
				void register_registerLodStrategyItem_CDynamicLodStrategyItem_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_registerLodStrategyItem_CDynamicLodStrategyItem_callback = __method;
				}
				void register_unregisterLodStrategyItem_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unregisterLodStrategyItem_EVString_callback = __method;
				}
				void register_addLodStrategyListener_CDynamicLodStrategyListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addLodStrategyListener_CDynamicLodStrategyListener_callback = __method;
				}
				void register_removeLodStrategyListener_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeLodStrategyListener_EVString_callback = __method;
				}
				void register_getLodValue_CDynamicModelObject_CGlobeCamera_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLodValue_CDynamicModelObject_CGlobeCamera_callback = __method;
				}
				void register_fireLodStrategyListener_CDynamicModelObject_CGlobeCamera_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_fireLodStrategyListener_CDynamicModelObject_CGlobeCamera_callback = __method;
				}
				virtual ev_bool isPassed(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject, const EVString& lodStrategyItemName, EarthView::World::Spatial3D::CGlobeCamera* camera)
				{
					if (this->_gRef != NULL && this->m_isPassed_CDynamicModelObject_EVString_CGlobeCamera_callback != "" && this->isCustomExtend())
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
						jlong modelObject_j = (jlong) modelObject;
						EarthView::World::Core::ev_wstring lodStrategyItemName_wch = lodStrategyItemName;
						jstring lodStrategyItemName_j = __env->NewString((const jchar*)lodStrategyItemName_wch.getString(), lodStrategyItemName_wch.size());
						jlong camera_j = (jlong) camera;
						jmethodID __method = __gr->getMethod("isPassed_CDynamicModelObject_EVString_CGlobeCamera_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , modelObject_j, lodStrategyItemName_j, camera_j);
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
						return this->CDynamicLodStrategy::isPassed(modelObject, lodStrategyItemName, camera);
					}
				}
				virtual void setMaxVisibleValue(const EVString& name, const Real& maxVisibleValue)
				{
					if (this->_gRef != NULL && this->m_setMaxVisibleValue_EVString_Real_callback != "" && this->isCustomExtend())
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
						jdouble maxVisibleValue_j = (jdouble) maxVisibleValue;
						jmethodID __method = __gr->getMethod("setMaxVisibleValue_EVString_Real_callback");
						__env->CallVoidMethod(__obj, __method , name_j, maxVisibleValue_j);
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
						return this->CDynamicLodStrategy::setMaxVisibleValue(name, maxVisibleValue);
					}
				}
				virtual void setMinVisibleValue(const EVString& name, const Real& minVisibleValue)
				{
					if (this->_gRef != NULL && this->m_setMinVisibleValue_EVString_Real_callback != "" && this->isCustomExtend())
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
						jdouble minVisibleValue_j = (jdouble) minVisibleValue;
						jmethodID __method = __gr->getMethod("setMinVisibleValue_EVString_Real_callback");
						__env->CallVoidMethod(__obj, __method , name_j, minVisibleValue_j);
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
						return this->CDynamicLodStrategy::setMinVisibleValue(name, minVisibleValue);
					}
				}
				virtual Real getMaxVisibleValue(const EVString& name) const
				{
					if (this->_gRef != NULL && this->m_getMaxVisibleValue_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getMaxVisibleValue_EVString_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , name_j);
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
						return this->CDynamicLodStrategy::getMaxVisibleValue(name);
					}
				}
				virtual Real getMinVisibleValue(const EVString& name) const
				{
					if (this->_gRef != NULL && this->m_getMinVisibleValue_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getMinVisibleValue_EVString_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , name_j);
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
						return this->CDynamicLodStrategy::getMinVisibleValue(name);
					}
				}
				virtual void registerLodStrategyItem(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem* ref_lodStrategyItem)
				{
					if (this->_gRef != NULL && this->m_registerLodStrategyItem_CDynamicLodStrategyItem_callback != "" && this->isCustomExtend())
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
						jlong ref_lodStrategyItem_j = (jlong) ref_lodStrategyItem;
						jmethodID __method = __gr->getMethod("registerLodStrategyItem_CDynamicLodStrategyItem_callback");
						__env->CallVoidMethod(__obj, __method , ref_lodStrategyItem_j);
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
						return this->CDynamicLodStrategy::registerLodStrategyItem(ref_lodStrategyItem);
					}
				}
				virtual void unregisterLodStrategyItem(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_unregisterLodStrategyItem_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("unregisterLodStrategyItem_EVString_callback");
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
						return this->CDynamicLodStrategy::unregisterLodStrategyItem(name);
					}
				}
				virtual void addLodStrategyListener(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener* ref_lodStrategyListener)
				{
					if (this->_gRef != NULL && this->m_addLodStrategyListener_CDynamicLodStrategyListener_callback != "" && this->isCustomExtend())
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
						jlong ref_lodStrategyListener_j = (jlong) ref_lodStrategyListener;
						jmethodID __method = __gr->getMethod("addLodStrategyListener_CDynamicLodStrategyListener_callback");
						__env->CallVoidMethod(__obj, __method , ref_lodStrategyListener_j);
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
						return this->CDynamicLodStrategy::addLodStrategyListener(ref_lodStrategyListener);
					}
				}
				virtual void removeLodStrategyListener(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_removeLodStrategyListener_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("removeLodStrategyListener_EVString_callback");
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
						return this->CDynamicLodStrategy::removeLodStrategyListener(name);
					}
				}
				virtual Real getLodValue(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject, EarthView::World::Spatial3D::CGlobeCamera* camera)
				{
					if (this->_gRef != NULL && this->m_getLodValue_CDynamicModelObject_CGlobeCamera_callback != "" && this->isCustomExtend())
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
						jlong modelObject_j = (jlong) modelObject;
						jlong camera_j = (jlong) camera;
						jmethodID __method = __gr->getMethod("getLodValue_CDynamicModelObject_CGlobeCamera_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , modelObject_j, camera_j);
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
						return this->CDynamicLodStrategy::getLodValue(modelObject, camera);
					}
				}
				virtual void fireLodStrategyListener(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject, EarthView::World::Spatial3D::CGlobeCamera* camera)
				{
					if (this->_gRef != NULL && this->m_fireLodStrategyListener_CDynamicModelObject_CGlobeCamera_callback != "" && this->isCustomExtend())
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
						jlong modelObject_j = (jlong) modelObject;
						jlong camera_j = (jlong) camera;
						jmethodID __method = __gr->getMethod("fireLodStrategyListener_CDynamicModelObject_CGlobeCamera_callback");
						__env->CallVoidMethod(__obj, __method , modelObject_j, camera_j);
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
						return this->CDynamicLodStrategy::fireLodStrategyListener(modelObject, camera);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDynamicLodStrategyProxy);
			class JCDynamicLodStrategyListenerProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener
			{
			 private:
				EarthView::World::Core::ev_string m_getName_void_callback;
				EarthView::World::Core::ev_string m_setName_EVString_callback;
				EarthView::World::Core::ev_string m_beforeUpdateLodState_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera_callback;
			public:
				JCDynamicLodStrategyListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicLodStrategyListener(pList)
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
				void register_beforeUpdateLodState_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_beforeUpdateLodState_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera_callback = __method;
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
						return this->CDynamicLodStrategyListener::getName();
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
						return this->CDynamicLodStrategyListener::setName(name);
					}
				}
				virtual void beforeUpdateLodState(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* lodStrategy, EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* dynamicModelObject, EarthView::World::Spatial3D::CGlobeCamera* camera)
				{
					if (this->_gRef != NULL && this->m_beforeUpdateLodState_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera_callback != "" && this->isCustomExtend())
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
						jlong lodStrategy_j = (jlong) lodStrategy;
						jlong dynamicModelObject_j = (jlong) dynamicModelObject;
						jlong camera_j = (jlong) camera;
						jmethodID __method = __gr->getMethod("beforeUpdateLodState_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera_callback");
						__env->CallVoidMethod(__obj, __method , lodStrategy_j, dynamicModelObject_j, camera_j);
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
						return this->CDynamicLodStrategyListener::beforeUpdateLodState(lodStrategy, dynamicModelObject, camera);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDynamicLodStrategyListenerProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyListener_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicLodStrategyListenerProxy))
				{
					EVString __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener::getName();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyListener_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicLodStrategyListenerProxy *pObjectX = (JCDynamicLodStrategyListenerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyListener_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener::getName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyListener_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicLodStrategyListenerProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener::setName(name);
				}
				else
				{
					pObjectX->setName(name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyListener_register_1setName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicLodStrategyListenerProxy *pObjectX = (JCDynamicLodStrategyListenerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyListener_setName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener::setName(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyListener_beforeUpdateLodState_1CDynamicLodStrategy_1CDynamicModelObject_1CGlobeCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lodStrategy_j, jlong dynamicModelObject_j, jlong camera_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy *lodStrategy = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) lodStrategy_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *dynamicModelObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) dynamicModelObject_j;
				EarthView::World::Spatial3D::CGlobeCamera *camera = (EarthView::World::Spatial3D::CGlobeCamera*) camera_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicLodStrategyListenerProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener::beforeUpdateLodState(lodStrategy, dynamicModelObject, camera);
				}
				else
				{
					pObjectX->beforeUpdateLodState(lodStrategy, dynamicModelObject, camera);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyListener_register_1beforeUpdateLodState_1CDynamicLodStrategy_1CDynamicModelObject_1CGlobeCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicLodStrategyListenerProxy *pObjectX = (JCDynamicLodStrategyListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_beforeUpdateLodState_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"beforeUpdateLodState_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera_callback", "(JJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyListener_beforeUpdateLodState_1CDynamicLodStrategy_1CDynamicModelObject_1CGlobeCamera_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lodStrategy_j, jlong dynamicModelObject_j, jlong camera_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy *lodStrategy = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) lodStrategy_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *dynamicModelObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) dynamicModelObject_j;
				EarthView::World::Spatial3D::CGlobeCamera *camera = (EarthView::World::Spatial3D::CGlobeCamera*) camera_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener::beforeUpdateLodState(lodStrategy, dynamicModelObject, camera);
			}
			class JCDynamicLodStrategyItemProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem
			{
			 private:
				EarthView::World::Core::ev_string m_isPassed_Real_callback;
				EarthView::World::Core::ev_string m_setMaxVisibleValue_Real_callback;
				EarthView::World::Core::ev_string m_setMinVisibleValue_Real_callback;
				EarthView::World::Core::ev_string m_getMaxVisibleValue_void_callback;
				EarthView::World::Core::ev_string m_getMinVisibleValue_void_callback;
			public:
				JCDynamicLodStrategyItemProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicLodStrategyItem(pList)
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
				void register_isPassed_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isPassed_Real_callback = __method;
				}
				void register_setMaxVisibleValue_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setMaxVisibleValue_Real_callback = __method;
				}
				void register_setMinVisibleValue_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setMinVisibleValue_Real_callback = __method;
				}
				void register_getMaxVisibleValue_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMaxVisibleValue_void_callback = __method;
				}
				void register_getMinVisibleValue_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMinVisibleValue_void_callback = __method;
				}
				virtual ev_bool isPassed(const Real& lodvalue) const
				{
					if (this->_gRef != NULL && this->m_isPassed_Real_callback != "" && this->isCustomExtend())
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
						jdouble lodvalue_j = (jdouble) lodvalue;
						jmethodID __method = __gr->getMethod("isPassed_Real_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , lodvalue_j);
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
						return this->CDynamicLodStrategyItem::isPassed(lodvalue);
					}
				}
				virtual void setMaxVisibleValue(const Real& maxVisibleValue)
				{
					if (this->_gRef != NULL && this->m_setMaxVisibleValue_Real_callback != "" && this->isCustomExtend())
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
						jdouble maxVisibleValue_j = (jdouble) maxVisibleValue;
						jmethodID __method = __gr->getMethod("setMaxVisibleValue_Real_callback");
						__env->CallVoidMethod(__obj, __method , maxVisibleValue_j);
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
						return this->CDynamicLodStrategyItem::setMaxVisibleValue(maxVisibleValue);
					}
				}
				virtual void setMinVisibleValue(const Real& minVisibleValue)
				{
					if (this->_gRef != NULL && this->m_setMinVisibleValue_Real_callback != "" && this->isCustomExtend())
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
						jdouble minVisibleValue_j = (jdouble) minVisibleValue;
						jmethodID __method = __gr->getMethod("setMinVisibleValue_Real_callback");
						__env->CallVoidMethod(__obj, __method , minVisibleValue_j);
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
						return this->CDynamicLodStrategyItem::setMinVisibleValue(minVisibleValue);
					}
				}
				virtual Real getMaxVisibleValue() const
				{
					if (this->_gRef != NULL && this->m_getMaxVisibleValue_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getMaxVisibleValue_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
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
						return this->CDynamicLodStrategyItem::getMaxVisibleValue();
					}
				}
				virtual Real getMinVisibleValue() const
				{
					if (this->_gRef != NULL && this->m_getMinVisibleValue_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getMinVisibleValue_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
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
						return this->CDynamicLodStrategyItem::getMinVisibleValue();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDynamicLodStrategyItemProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyItem_isPassed_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble lodvalue_j)
			{
				const Real lodvalue = (const Real) lodvalue_j;
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicLodStrategyItemProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem::isPassed(lodvalue);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isPassed(lodvalue);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyItem_register_1isPassed_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicLodStrategyItemProxy *pObjectX = (JCDynamicLodStrategyItemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isPassed_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isPassed_Real_callback", "(D)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyItem_isPassed_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble lodvalue_j)
			{
				const Real lodvalue = (const Real) lodvalue_j;
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem::isPassed(lodvalue);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyItem_setMaxVisibleValue_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble maxVisibleValue_j)
			{
				const Real maxVisibleValue = (const Real) maxVisibleValue_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicLodStrategyItemProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem::setMaxVisibleValue(maxVisibleValue);
				}
				else
				{
					pObjectX->setMaxVisibleValue(maxVisibleValue);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyItem_register_1setMaxVisibleValue_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicLodStrategyItemProxy *pObjectX = (JCDynamicLodStrategyItemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setMaxVisibleValue_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setMaxVisibleValue_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyItem_setMaxVisibleValue_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble maxVisibleValue_j)
			{
				const Real maxVisibleValue = (const Real) maxVisibleValue_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem::setMaxVisibleValue(maxVisibleValue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyItem_setMinVisibleValue_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble minVisibleValue_j)
			{
				const Real minVisibleValue = (const Real) minVisibleValue_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicLodStrategyItemProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem::setMinVisibleValue(minVisibleValue);
				}
				else
				{
					pObjectX->setMinVisibleValue(minVisibleValue);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyItem_register_1setMinVisibleValue_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicLodStrategyItemProxy *pObjectX = (JCDynamicLodStrategyItemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setMinVisibleValue_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setMinVisibleValue_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyItem_setMinVisibleValue_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble minVisibleValue_j)
			{
				const Real minVisibleValue = (const Real) minVisibleValue_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem::setMinVisibleValue(minVisibleValue);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyItem_getMaxVisibleValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicLodStrategyItemProxy))
				{
					Real __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem::getMaxVisibleValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getMaxVisibleValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyItem_register_1getMaxVisibleValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicLodStrategyItemProxy *pObjectX = (JCDynamicLodStrategyItemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMaxVisibleValue_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMaxVisibleValue_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyItem_getMaxVisibleValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem::getMaxVisibleValue();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyItem_getMinVisibleValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicLodStrategyItemProxy))
				{
					Real __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem::getMinVisibleValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getMinVisibleValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyItem_register_1getMinVisibleValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicLodStrategyItemProxy *pObjectX = (JCDynamicLodStrategyItemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMinVisibleValue_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMinVisibleValue_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyItem_getMinVisibleValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem::getMinVisibleValue();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyItem_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjXXXX;
				EVString __values1 = pObjectX->getName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyItem_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) pObjXXXX;
				pObjectX->setName(name);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyItemMap_push_1EVString_1CDynamicLodStrategyItem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong ref_val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem *&ref_val = *(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem**) ref_val_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, ref_val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyItemMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyItemMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap& pObjectX = *(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyItemMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap*) pObjXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyItemMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyItemMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyItemMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_00024DynamicLodStrategyItemMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_isPassed_1CDynamicModelObject_1EVString_1CGlobeCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong modelObject_j, jstring lodStrategyItemName_j, jlong camera_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *modelObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) modelObject_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* lodStrategyItemName_ch = (const ev_char*)__env->GetStringUTFChars(lodStrategyItemName_j,JNI_FALSE);
				const EVString lodStrategyItemName = lodStrategyItemName_ch;
				__env->ReleaseStringUTFChars(lodStrategyItemName_j, (const char *)lodStrategyItemName_ch);
				#else
				const ev_wchar* lodStrategyItemName_ch = (const ev_wchar*)__env->GetStringChars(lodStrategyItemName_j,JNI_FALSE);
				const EVString lodStrategyItemName = lodStrategyItemName_ch;
				__env->ReleaseStringChars(lodStrategyItemName_j, (const jchar *)lodStrategyItemName_ch);
				#endif
				EarthView::World::Spatial3D::CGlobeCamera *camera = (EarthView::World::Spatial3D::CGlobeCamera*) camera_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicLodStrategyProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::isPassed(modelObject, lodStrategyItemName, camera);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isPassed(modelObject, lodStrategyItemName, camera);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_register_1isPassed_1CDynamicModelObject_1EVString_1CGlobeCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicLodStrategyProxy *pObjectX = (JCDynamicLodStrategyProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isPassed_CDynamicModelObject_EVString_CGlobeCamera_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isPassed_CDynamicModelObject_EVString_CGlobeCamera_callback", "(JLjava/lang/String;J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_isPassed_1CDynamicModelObject_1EVString_1CGlobeCamera_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong modelObject_j, jstring lodStrategyItemName_j, jlong camera_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *modelObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) modelObject_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* lodStrategyItemName_ch = (const ev_char*)__env->GetStringUTFChars(lodStrategyItemName_j,JNI_FALSE);
				const EVString lodStrategyItemName = lodStrategyItemName_ch;
				__env->ReleaseStringUTFChars(lodStrategyItemName_j, (const char *)lodStrategyItemName_ch);
				#else
				const ev_wchar* lodStrategyItemName_ch = (const ev_wchar*)__env->GetStringChars(lodStrategyItemName_j,JNI_FALSE);
				const EVString lodStrategyItemName = lodStrategyItemName_ch;
				__env->ReleaseStringChars(lodStrategyItemName_j, (const jchar *)lodStrategyItemName_ch);
				#endif
				EarthView::World::Spatial3D::CGlobeCamera *camera = (EarthView::World::Spatial3D::CGlobeCamera*) camera_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::isPassed(modelObject, lodStrategyItemName, camera);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_setMaxVisibleValue_1EVString_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jdouble maxVisibleValue_j)
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
				const Real maxVisibleValue = (const Real) maxVisibleValue_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicLodStrategyProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::setMaxVisibleValue(name, maxVisibleValue);
				}
				else
				{
					pObjectX->setMaxVisibleValue(name, maxVisibleValue);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_register_1setMaxVisibleValue_1EVString_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicLodStrategyProxy *pObjectX = (JCDynamicLodStrategyProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setMaxVisibleValue_EVString_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setMaxVisibleValue_EVString_Real_callback", "(Ljava/lang/String;D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_setMaxVisibleValue_1EVString_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jdouble maxVisibleValue_j)
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
				const Real maxVisibleValue = (const Real) maxVisibleValue_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::setMaxVisibleValue(name, maxVisibleValue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_setMinVisibleValue_1EVString_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jdouble minVisibleValue_j)
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
				const Real minVisibleValue = (const Real) minVisibleValue_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicLodStrategyProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::setMinVisibleValue(name, minVisibleValue);
				}
				else
				{
					pObjectX->setMinVisibleValue(name, minVisibleValue);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_register_1setMinVisibleValue_1EVString_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicLodStrategyProxy *pObjectX = (JCDynamicLodStrategyProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setMinVisibleValue_EVString_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setMinVisibleValue_EVString_Real_callback", "(Ljava/lang/String;D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_setMinVisibleValue_1EVString_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jdouble minVisibleValue_j)
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
				const Real minVisibleValue = (const Real) minVisibleValue_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::setMinVisibleValue(name, minVisibleValue);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_getMaxVisibleValue_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicLodStrategyProxy))
				{
					Real __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::getMaxVisibleValue(name);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getMaxVisibleValue(name);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_register_1getMaxVisibleValue_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicLodStrategyProxy *pObjectX = (JCDynamicLodStrategyProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMaxVisibleValue_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMaxVisibleValue_EVString_callback", "(Ljava/lang/String;)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_getMaxVisibleValue_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::getMaxVisibleValue(name);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_getMinVisibleValue_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicLodStrategyProxy))
				{
					Real __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::getMinVisibleValue(name);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getMinVisibleValue(name);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_register_1getMinVisibleValue_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicLodStrategyProxy *pObjectX = (JCDynamicLodStrategyProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMinVisibleValue_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMinVisibleValue_EVString_callback", "(Ljava/lang/String;)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_getMinVisibleValue_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::getMinVisibleValue(name);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_registerLodStrategyItem_1CDynamicLodStrategyItem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_lodStrategyItem_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem *ref_lodStrategyItem = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) ref_lodStrategyItem_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicLodStrategyProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::registerLodStrategyItem(ref_lodStrategyItem);
				}
				else
				{
					pObjectX->registerLodStrategyItem(ref_lodStrategyItem);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_register_1registerLodStrategyItem_1CDynamicLodStrategyItem(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicLodStrategyProxy *pObjectX = (JCDynamicLodStrategyProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_registerLodStrategyItem_CDynamicLodStrategyItem_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"registerLodStrategyItem_CDynamicLodStrategyItem_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_registerLodStrategyItem_1CDynamicLodStrategyItem_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_lodStrategyItem_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem *ref_lodStrategyItem = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*) ref_lodStrategyItem_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::registerLodStrategyItem(ref_lodStrategyItem);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_unregisterLodStrategyItem_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicLodStrategyProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::unregisterLodStrategyItem(name);
				}
				else
				{
					pObjectX->unregisterLodStrategyItem(name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_register_1unregisterLodStrategyItem_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicLodStrategyProxy *pObjectX = (JCDynamicLodStrategyProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unregisterLodStrategyItem_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unregisterLodStrategyItem_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_unregisterLodStrategyItem_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::unregisterLodStrategyItem(name);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_getLodStrategyItemMap_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjXXXX;
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap& __values1 = pObjectX->getLodStrategyItemMap();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_addLodStrategyListener_1CDynamicLodStrategyListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_lodStrategyListener_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener *ref_lodStrategyListener = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener*) ref_lodStrategyListener_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicLodStrategyProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::addLodStrategyListener(ref_lodStrategyListener);
				}
				else
				{
					pObjectX->addLodStrategyListener(ref_lodStrategyListener);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_register_1addLodStrategyListener_1CDynamicLodStrategyListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicLodStrategyProxy *pObjectX = (JCDynamicLodStrategyProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addLodStrategyListener_CDynamicLodStrategyListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addLodStrategyListener_CDynamicLodStrategyListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_addLodStrategyListener_1CDynamicLodStrategyListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_lodStrategyListener_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener *ref_lodStrategyListener = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener*) ref_lodStrategyListener_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::addLodStrategyListener(ref_lodStrategyListener);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_removeLodStrategyListener_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicLodStrategyProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::removeLodStrategyListener(name);
				}
				else
				{
					pObjectX->removeLodStrategyListener(name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_register_1removeLodStrategyListener_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicLodStrategyProxy *pObjectX = (JCDynamicLodStrategyProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeLodStrategyListener_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeLodStrategyListener_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_removeLodStrategyListener_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::removeLodStrategyListener(name);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_getLodValue_1CDynamicModelObject_1CGlobeCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong modelObject_j, jlong camera_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *modelObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) modelObject_j;
				EarthView::World::Spatial3D::CGlobeCamera *camera = (EarthView::World::Spatial3D::CGlobeCamera*) camera_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicLodStrategyProxy))
				{
					Real __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::getLodValue(modelObject, camera);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getLodValue(modelObject, camera);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_register_1getLodValue_1CDynamicModelObject_1CGlobeCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicLodStrategyProxy *pObjectX = (JCDynamicLodStrategyProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLodValue_CDynamicModelObject_CGlobeCamera_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLodValue_CDynamicModelObject_CGlobeCamera_callback", "(JJ)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_getLodValue_1CDynamicModelObject_1CGlobeCamera_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong modelObject_j, jlong camera_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *modelObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) modelObject_j;
				EarthView::World::Spatial3D::CGlobeCamera *camera = (EarthView::World::Spatial3D::CGlobeCamera*) camera_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::getLodValue(modelObject, camera);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_fireLodStrategyListener_1CDynamicModelObject_1CGlobeCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong modelObject_j, jlong camera_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *modelObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) modelObject_j;
				EarthView::World::Spatial3D::CGlobeCamera *camera = (EarthView::World::Spatial3D::CGlobeCamera*) camera_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicLodStrategyProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::fireLodStrategyListener(modelObject, camera);
				}
				else
				{
					pObjectX->fireLodStrategyListener(modelObject, camera);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_register_1fireLodStrategyListener_1CDynamicModelObject_1CGlobeCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicLodStrategyProxy *pObjectX = (JCDynamicLodStrategyProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_fireLodStrategyListener_CDynamicModelObject_CGlobeCamera_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"fireLodStrategyListener_CDynamicModelObject_CGlobeCamera_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicLodStrategy_fireLodStrategyListener_1CDynamicModelObject_1CGlobeCamera_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong modelObject_j, jlong camera_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *modelObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) modelObject_j;
				EarthView::World::Spatial3D::CGlobeCamera *camera = (EarthView::World::Spatial3D::CGlobeCamera*) camera_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::fireLodStrategyListener(modelObject, camera);
			}
		}
	}
}
