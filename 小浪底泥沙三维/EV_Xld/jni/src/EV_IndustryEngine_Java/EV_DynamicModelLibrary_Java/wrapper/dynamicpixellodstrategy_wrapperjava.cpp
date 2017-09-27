/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/dynamicmodellibrary/dynamicpixellodstrategy.h"
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
			class JCDynamicPixelLodStrategyProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy
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
				JCDynamicPixelLodStrategyProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicPixelLodStrategy(pList)
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
						return this->CDynamicPixelLodStrategy::getLodValue(modelObject, camera);
					}
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
						return this->CDynamicPixelLodStrategy::isPassed(modelObject, lodStrategyItemName, camera);
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
						return this->CDynamicPixelLodStrategy::setMaxVisibleValue(name, maxVisibleValue);
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
						return this->CDynamicPixelLodStrategy::setMinVisibleValue(name, minVisibleValue);
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
						return this->CDynamicPixelLodStrategy::getMaxVisibleValue(name);
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
						return this->CDynamicPixelLodStrategy::getMinVisibleValue(name);
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
						return this->CDynamicPixelLodStrategy::registerLodStrategyItem(ref_lodStrategyItem);
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
						return this->CDynamicPixelLodStrategy::unregisterLodStrategyItem(name);
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
						return this->CDynamicPixelLodStrategy::addLodStrategyListener(ref_lodStrategyListener);
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
						return this->CDynamicPixelLodStrategy::removeLodStrategyListener(name);
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
						return this->CDynamicPixelLodStrategy::fireLodStrategyListener(modelObject, camera);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDynamicPixelLodStrategyProxy);
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicPixelLodStrategy_getLodValue_1CDynamicModelObject_1CGlobeCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong modelObject_j, jlong camera_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *modelObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) modelObject_j;
				EarthView::World::Spatial3D::CGlobeCamera *camera = (EarthView::World::Spatial3D::CGlobeCamera*) camera_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicPixelLodStrategyProxy))
				{
					Real __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy::getLodValue(modelObject, camera);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicPixelLodStrategy_register_1getLodValue_1CDynamicModelObject_1CGlobeCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicPixelLodStrategyProxy *pObjectX = (JCDynamicPixelLodStrategyProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicPixelLodStrategy_getLodValue_1CDynamicModelObject_1CGlobeCamera_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong modelObject_j, jlong camera_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *modelObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) modelObject_j;
				EarthView::World::Spatial3D::CGlobeCamera *camera = (EarthView::World::Spatial3D::CGlobeCamera*) camera_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy::getLodValue(modelObject, camera);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicPixelLodStrategy_register_1isPassed_1CDynamicModelObject_1EVString_1CGlobeCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicPixelLodStrategyProxy *pObjectX = (JCDynamicPixelLodStrategyProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicPixelLodStrategy_register_1setMaxVisibleValue_1EVString_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicPixelLodStrategyProxy *pObjectX = (JCDynamicPixelLodStrategyProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicPixelLodStrategy_register_1setMinVisibleValue_1EVString_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicPixelLodStrategyProxy *pObjectX = (JCDynamicPixelLodStrategyProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicPixelLodStrategy_register_1getMaxVisibleValue_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicPixelLodStrategyProxy *pObjectX = (JCDynamicPixelLodStrategyProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicPixelLodStrategy_register_1getMinVisibleValue_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicPixelLodStrategyProxy *pObjectX = (JCDynamicPixelLodStrategyProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicPixelLodStrategy_register_1registerLodStrategyItem_1CDynamicLodStrategyItem(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicPixelLodStrategyProxy *pObjectX = (JCDynamicPixelLodStrategyProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicPixelLodStrategy_register_1unregisterLodStrategyItem_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicPixelLodStrategyProxy *pObjectX = (JCDynamicPixelLodStrategyProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicPixelLodStrategy_register_1addLodStrategyListener_1CDynamicLodStrategyListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicPixelLodStrategyProxy *pObjectX = (JCDynamicPixelLodStrategyProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicPixelLodStrategy_register_1removeLodStrategyListener_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicPixelLodStrategyProxy *pObjectX = (JCDynamicPixelLodStrategyProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicPixelLodStrategy_register_1fireLodStrategyListener_1CDynamicModelObject_1CGlobeCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicPixelLodStrategyProxy *pObjectX = (JCDynamicPixelLodStrategyProxy*) pObjXXXX;
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
		}
	}
}
