/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/industrygraphic/polylineFeaturemanager.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			class JCPolylineFeatureManagerProxy : public EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager
			{
			 private:
				EarthView::World::Core::ev_string m_setPolylineFeatureVisible_ev_int32_ev_bool_callback;
				EarthView::World::Core::ev_string m_setNeedClearUselessData_ev_int32_ev_bool_callback;
				EarthView::World::Core::ev_string m_getUseWallGradualColor_ev_int32_callback;
				EarthView::World::Core::ev_string m_setUseWallGradualColor_ev_int32_ev_bool_callback;
				EarthView::World::Core::ev_string m_getWallGradualColor_ev_int32_callback;
				EarthView::World::Core::ev_string m_setWallGradualColor_ev_int32_CRgbColor_callback;
				EarthView::World::Core::ev_string m_canReleaseResource_void_callback;
				EarthView::World::Core::ev_string m_canReleaseResource_ev_int32_callback;
				EarthView::World::Core::ev_string m_getCanSwapBuffer_void_callback;
				EarthView::World::Core::ev_string m_setName_EarthView_World_Core_ev_string_callback;
				EarthView::World::Core::ev_string m_getName_void_callback;
				EarthView::World::Core::ev_string m_setNeedUpdate_ev_bool_callback;
				EarthView::World::Core::ev_string m_getNeedUpdate_void_callback;
				EarthView::World::Core::ev_string m_getNode_void_callback;
				EarthView::World::Core::ev_string m_update_void_callback;
			public:
				JCPolylineFeatureManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CPolylineFeatureManager(pList)
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
				void register_setPolylineFeatureVisible_ev_int32_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setPolylineFeatureVisible_ev_int32_ev_bool_callback = __method;
				}
				void register_setNeedClearUselessData_ev_int32_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setNeedClearUselessData_ev_int32_ev_bool_callback = __method;
				}
				void register_getUseWallGradualColor_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getUseWallGradualColor_ev_int32_callback = __method;
				}
				void register_setUseWallGradualColor_ev_int32_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setUseWallGradualColor_ev_int32_ev_bool_callback = __method;
				}
				void register_getWallGradualColor_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWallGradualColor_ev_int32_callback = __method;
				}
				void register_setWallGradualColor_ev_int32_CRgbColor_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setWallGradualColor_ev_int32_CRgbColor_callback = __method;
				}
				void register_canReleaseResource_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_canReleaseResource_void_callback = __method;
				}
				void register_canReleaseResource_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_canReleaseResource_ev_int32_callback = __method;
				}
				void register_getCanSwapBuffer_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCanSwapBuffer_void_callback = __method;
				}
				void register_setName_EarthView_World_Core_ev_string_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setName_EarthView_World_Core_ev_string_callback = __method;
				}
				void register_getName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getName_void_callback = __method;
				}
				void register_setNeedUpdate_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setNeedUpdate_ev_bool_callback = __method;
				}
				void register_getNeedUpdate_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNeedUpdate_void_callback = __method;
				}
				void register_getNode_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNode_void_callback = __method;
				}
				void register_update_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_update_void_callback = __method;
				}
				virtual void setPolylineFeatureVisible(const ev_int32& polylineFeatureUniqueID, const ev_bool& value)
				{
					if (this->_gRef != NULL && this->m_setPolylineFeatureVisible_ev_int32_ev_bool_callback != "" && this->isCustomExtend())
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
						jint polylineFeatureUniqueID_j = (jint) polylineFeatureUniqueID;
						jboolean value_j = (jboolean) value;
						jmethodID __method = __gr->getMethod("setPolylineFeatureVisible_ev_int32_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , polylineFeatureUniqueID_j, value_j);
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
						return this->CPolylineFeatureManager::setPolylineFeatureVisible(polylineFeatureUniqueID, value);
					}
				}
				virtual void setNeedClearUselessData(const ev_int32& polylineFeatureUniqueID, const ev_bool& value)
				{
					if (this->_gRef != NULL && this->m_setNeedClearUselessData_ev_int32_ev_bool_callback != "" && this->isCustomExtend())
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
						jint polylineFeatureUniqueID_j = (jint) polylineFeatureUniqueID;
						jboolean value_j = (jboolean) value;
						jmethodID __method = __gr->getMethod("setNeedClearUselessData_ev_int32_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , polylineFeatureUniqueID_j, value_j);
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
						return this->CPolylineFeatureManager::setNeedClearUselessData(polylineFeatureUniqueID, value);
					}
				}
				virtual ev_bool getUseWallGradualColor(const ev_int32& polylineFeatureUniqueID)
				{
					if (this->_gRef != NULL && this->m_getUseWallGradualColor_ev_int32_callback != "" && this->isCustomExtend())
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
						jint polylineFeatureUniqueID_j = (jint) polylineFeatureUniqueID;
						jmethodID __method = __gr->getMethod("getUseWallGradualColor_ev_int32_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , polylineFeatureUniqueID_j);
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
						return this->CPolylineFeatureManager::getUseWallGradualColor(polylineFeatureUniqueID);
					}
				}
				virtual void setUseWallGradualColor(const ev_int32& polylineFeatureUniqueID, const ev_bool& useWallGradualColor)
				{
					if (this->_gRef != NULL && this->m_setUseWallGradualColor_ev_int32_ev_bool_callback != "" && this->isCustomExtend())
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
						jint polylineFeatureUniqueID_j = (jint) polylineFeatureUniqueID;
						jboolean useWallGradualColor_j = (jboolean) useWallGradualColor;
						jmethodID __method = __gr->getMethod("setUseWallGradualColor_ev_int32_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , polylineFeatureUniqueID_j, useWallGradualColor_j);
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
						return this->CPolylineFeatureManager::setUseWallGradualColor(polylineFeatureUniqueID, useWallGradualColor);
					}
				}
				virtual EarthView::World::Spatial::Display::CRgbColor* getWallGradualColor(const ev_int32& polylineFeatureUniqueID)
				{
					if (this->_gRef != NULL && this->m_getWallGradualColor_ev_int32_callback != "" && this->isCustomExtend())
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
						jint polylineFeatureUniqueID_j = (jint) polylineFeatureUniqueID;
						jmethodID __method = __gr->getMethod("getWallGradualColor_ev_int32_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , polylineFeatureUniqueID_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Display::CRgbColor *__values1 = (EarthView::World::Spatial::Display::CRgbColor*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPolylineFeatureManager::getWallGradualColor(polylineFeatureUniqueID);
					}
				}
				virtual void setWallGradualColor(const ev_int32& polylineFeatureUniqueID, EarthView::World::Spatial::Display::CRgbColor* pWallGradualColor)
				{
					if (this->_gRef != NULL && this->m_setWallGradualColor_ev_int32_CRgbColor_callback != "" && this->isCustomExtend())
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
						jint polylineFeatureUniqueID_j = (jint) polylineFeatureUniqueID;
						jlong pWallGradualColor_j = (jlong) pWallGradualColor;
						jmethodID __method = __gr->getMethod("setWallGradualColor_ev_int32_CRgbColor_callback");
						__env->CallVoidMethod(__obj, __method , polylineFeatureUniqueID_j, pWallGradualColor_j);
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
						return this->CPolylineFeatureManager::setWallGradualColor(polylineFeatureUniqueID, pWallGradualColor);
					}
				}
				virtual ev_bool canReleaseResource()
				{
					if (this->_gRef != NULL && this->m_canReleaseResource_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("canReleaseResource_void_callback");
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
						return this->CPolylineFeatureManager::canReleaseResource();
					}
				}
				virtual ev_bool canReleaseResource(const ev_int32& polylineFeatureUniqueID)
				{
					if (this->_gRef != NULL && this->m_canReleaseResource_ev_int32_callback != "" && this->isCustomExtend())
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
						jint polylineFeatureUniqueID_j = (jint) polylineFeatureUniqueID;
						jmethodID __method = __gr->getMethod("canReleaseResource_ev_int32_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , polylineFeatureUniqueID_j);
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
						return this->CPolylineFeatureManager::canReleaseResource(polylineFeatureUniqueID);
					}
				}
				virtual void setNeedUpdate(const ev_bool& needUpdate)
				{
					if (this->_gRef != NULL && this->m_setNeedUpdate_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean needUpdate_j = (jboolean) needUpdate;
						jmethodID __method = __gr->getMethod("setNeedUpdate_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , needUpdate_j);
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
						return this->CPolylineFeatureManager::setNeedUpdate(needUpdate);
					}
				}
				virtual void update()
				{
					if (this->_gRef != NULL && this->m_update_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("update_void_callback");
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
						return this->CPolylineFeatureManager::update();
					}
				}
				virtual ev_bool getCanSwapBuffer() const
				{
					if (this->_gRef != NULL && this->m_getCanSwapBuffer_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getCanSwapBuffer_void_callback");
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
						return this->CPolylineFeatureManager::getCanSwapBuffer();
					}
				}
				virtual void setName(const EarthView::World::Core::ev_string& name)
				{
					if (this->_gRef != NULL && this->m_setName_EarthView_World_Core_ev_string_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("setName_EarthView_World_Core_ev_string_callback");
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
						return this->CPolylineFeatureManager::setName(name);
					}
				}
				virtual EarthView::World::Core::ev_string getName() const
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
						EarthView::World::Core::ev_string __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EarthView::World::Core::ev_string __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CPolylineFeatureManager::getName();
					}
				}
				virtual ev_bool getNeedUpdate() const
				{
					if (this->_gRef != NULL && this->m_getNeedUpdate_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getNeedUpdate_void_callback");
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
						return this->CPolylineFeatureManager::getNeedUpdate();
					}
				}
				virtual EarthView::World::Graphic::CNode* getNode() const
				{
					if (this->_gRef != NULL && this->m_getNode_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getNode_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CNode *__values1 = (EarthView::World::Graphic::CNode*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPolylineFeatureManager::getNode();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCPolylineFeatureManagerProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_getPolylineFeature_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* __values1 = pObjectX->getPolylineFeature(polylineFeatureUniqueID);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_addPolylineFeature_1CPolylineFeature_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_polylineFeature_j, jboolean needUpdate_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *ref_polylineFeature = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) ref_polylineFeature_j;
				const ev_bool needUpdate = (const ev_bool) needUpdate_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				pObjectX->addPolylineFeature(ref_polylineFeature, needUpdate);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_removePolylineFeature_1CPolylineFeature_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong polylineFeature_j, jboolean needUpdate_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *polylineFeature = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) polylineFeature_j;
				const ev_bool needUpdate = (const ev_bool) needUpdate_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				pObjectX->removePolylineFeature(polylineFeature, needUpdate);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_removePolylineFeaturePoints_1ev_1int32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j, jboolean needUpdate_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				const ev_bool needUpdate = (const ev_bool) needUpdate_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				pObjectX->removePolylineFeaturePoints(polylineFeatureUniqueID, needUpdate);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_removePolylineFeature_1ev_1int32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j, jboolean needUpdate_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				const ev_bool needUpdate = (const ev_bool) needUpdate_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				pObjectX->removePolylineFeature(polylineFeatureUniqueID, needUpdate);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_contain_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->contain(polylineFeatureUniqueID);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_setPolylineFeatureVisible_1ev_1int32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j, jboolean value_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				const ev_bool value = (const ev_bool) value_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureManagerProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::setPolylineFeatureVisible(polylineFeatureUniqueID, value);
				}
				else
				{
					pObjectX->setPolylineFeatureVisible(polylineFeatureUniqueID, value);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_register_1setPolylineFeatureVisible_1ev_1int32_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureManagerProxy *pObjectX = (JCPolylineFeatureManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setPolylineFeatureVisible_ev_int32_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setPolylineFeatureVisible_ev_int32_ev_bool_callback", "(IZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_setPolylineFeatureVisible_1ev_1int32_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j, jboolean value_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				const ev_bool value = (const ev_bool) value_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::setPolylineFeatureVisible(polylineFeatureUniqueID, value);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_getPolylineFeatureVisible_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getPolylineFeatureVisible(polylineFeatureUniqueID);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_setNeedClearUselessData_1ev_1int32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j, jboolean value_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				const ev_bool value = (const ev_bool) value_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureManagerProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::setNeedClearUselessData(polylineFeatureUniqueID, value);
				}
				else
				{
					pObjectX->setNeedClearUselessData(polylineFeatureUniqueID, value);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_register_1setNeedClearUselessData_1ev_1int32_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureManagerProxy *pObjectX = (JCPolylineFeatureManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setNeedClearUselessData_ev_int32_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setNeedClearUselessData_ev_int32_ev_bool_callback", "(IZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_setNeedClearUselessData_1ev_1int32_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j, jboolean value_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				const ev_bool value = (const ev_bool) value_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::setNeedClearUselessData(polylineFeatureUniqueID, value);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_getNeedClearUselessData_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getNeedClearUselessData(polylineFeatureUniqueID);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_setDescription_1ev_1int32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j, jstring description_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* description_ch = (const ev_char*)__env->GetStringUTFChars(description_j,JNI_FALSE);
				const EVString description = description_ch;
				__env->ReleaseStringUTFChars(description_j, (const char *)description_ch);
				#else
				const ev_wchar* description_ch = (const ev_wchar*)__env->GetStringChars(description_j,JNI_FALSE);
				const EVString description = description_ch;
				__env->ReleaseStringChars(description_j, (const jchar *)description_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				pObjectX->setDescription(polylineFeatureUniqueID, description);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_setUniformVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				const ev_bool value = (const ev_bool) value_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				pObjectX->setUniformVisible(value);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_setUniformPolylineFeatureSymbol_1ISymbol_1EVDisplayMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_uniformSymbol_j, jint displayMode_j)
			{
				EarthView::World::Spatial::Display::ISymbol *ref_uniformSymbol = (EarthView::World::Spatial::Display::ISymbol*) ref_uniformSymbol_j;
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode displayMode = (const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode) displayMode_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				pObjectX->setUniformPolylineFeatureSymbol(ref_uniformSymbol, displayMode);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_getUniformPolylineFeatureSymbol_1EVDisplayMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint displayMode_j)
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode displayMode = (const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode) displayMode_j;
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				const EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getUniformPolylineFeatureSymbol(displayMode);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_addPoint_1ev_1int32_1CCoordinate_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j, jlong point_j, jboolean needUpdate_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				const EarthView::World::Spatial::Geometry::CCoordinate &point = *(EarthView::World::Spatial::Geometry::CCoordinate*) point_j;
				const ev_bool needUpdate = (const ev_bool) needUpdate_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				pObjectX->addPoint(polylineFeatureUniqueID, point, needUpdate);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_setPolylineFeatureSymbol_1ev_1int32_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j, jlong polylineFeatureSymbol_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				EarthView::World::Spatial::Display::ISymbol *polylineFeatureSymbol = (EarthView::World::Spatial::Display::ISymbol*) polylineFeatureSymbol_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				pObjectX->setPolylineFeatureSymbol(polylineFeatureUniqueID, polylineFeatureSymbol);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_setIsPolylineFeatureHighLine_1ev_1int32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j, jboolean value_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				const ev_bool value = (const ev_bool) value_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				pObjectX->setIsPolylineFeatureHighLine(polylineFeatureUniqueID, value);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_getIsPolylineFeatureHighLine_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getIsPolylineFeatureHighLine(polylineFeatureUniqueID);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_setDisplayStrategyForPointMode_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint strategyValue_j)
			{
				const ev_int32 strategyValue = (const ev_int32) strategyValue_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				pObjectX->setDisplayStrategyForPointMode(strategyValue);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_getDisplayStrategyForPointMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getDisplayStrategyForPointMode();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_setHighLineColorInfo_1ev_1int32_1CRgbColor_1CRgbColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j, jlong staticHighLineColor_j, jlong dynamicHighLineColor_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				EarthView::World::Spatial::Display::CRgbColor *staticHighLineColor = (EarthView::World::Spatial::Display::CRgbColor*) staticHighLineColor_j;
				EarthView::World::Spatial::Display::CRgbColor *dynamicHighLineColor = (EarthView::World::Spatial::Display::CRgbColor*) dynamicHighLineColor_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				pObjectX->setHighLineColorInfo(polylineFeatureUniqueID, staticHighLineColor, dynamicHighLineColor);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_setHighLineDistance_1ev_1int32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j, jdouble highLineDistance_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				const ev_real64 highLineDistance = (const ev_real64) highLineDistance_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				pObjectX->setHighLineDistance(polylineFeatureUniqueID, highLineDistance);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_getHighLineDistance_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				Real __values1 = pObjectX->getHighLineDistance(polylineFeatureUniqueID);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_getPolylineFeatureSymbol_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				const EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getPolylineFeatureSymbol(polylineFeatureUniqueID);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_setUniformDisplayMode_1EVDisplayMode_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint displayMode_j, jlong uniformSymbol_j)
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode displayMode = (const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode) displayMode_j;
				EarthView::World::Spatial::Display::ISymbol *uniformSymbol = (EarthView::World::Spatial::Display::ISymbol*) uniformSymbol_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				pObjectX->setUniformDisplayMode(displayMode, uniformSymbol);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_getUniformDisplayMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode __values1 = pObjectX->getUniformDisplayMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_setDisplayMode_1ev_1int32_1EVDisplayMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j, jint displayMode_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode displayMode = (const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode) displayMode_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				pObjectX->setDisplayMode(polylineFeatureUniqueID, displayMode);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_getDisplayMode_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode __values1 = pObjectX->getDisplayMode(polylineFeatureUniqueID);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_setISpatialReference_1ev_1int32_1ISpatialReference(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j, jlong ref_iSpatialReference_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				EarthView::World::Spatial::Geometry::ISpatialReference *ref_iSpatialReference = (EarthView::World::Spatial::Geometry::ISpatialReference*) ref_iSpatialReference_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				pObjectX->setISpatialReference(polylineFeatureUniqueID, ref_iSpatialReference);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_getISpatialReference_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				const EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->getISpatialReference(polylineFeatureUniqueID);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_setUniformISpatialReference_1ISpatialReference(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_uniformSpatialReference_j)
			{
				EarthView::World::Spatial::Geometry::ISpatialReference *ref_uniformSpatialReference = (EarthView::World::Spatial::Geometry::ISpatialReference*) ref_uniformSpatialReference_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				pObjectX->setUniformISpatialReference(ref_uniformSpatialReference);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_getUniformISpatialReference_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				const EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->getUniformISpatialReference();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_setDisplayPointNum_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j, jint displayPointNum_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				const ev_int32 displayPointNum = (const ev_int32) displayPointNum_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				pObjectX->setDisplayPointNum(polylineFeatureUniqueID, displayPointNum);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_getDisplayPointNum_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getDisplayPointNum(polylineFeatureUniqueID);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_setUniformDisplayPointNum_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint displayPointNum_j)
			{
				const ev_int32 displayPointNum = (const ev_int32) displayPointNum_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				pObjectX->setUniformDisplayPointNum(displayPointNum);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_getUniformDisplayPointNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getUniformDisplayPointNum();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_getPolylineFeatureCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getPolylineFeatureCount();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_setSegmentRenderParameter_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint perSegmentVertexCount_j)
			{
				const ev_int32 perSegmentVertexCount = (const ev_int32) perSegmentVertexCount_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				pObjectX->setSegmentRenderParameter(perSegmentVertexCount);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_getUseWallGradualColor_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureManagerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::getUseWallGradualColor(polylineFeatureUniqueID);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getUseWallGradualColor(polylineFeatureUniqueID);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_register_1getUseWallGradualColor_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureManagerProxy *pObjectX = (JCPolylineFeatureManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getUseWallGradualColor_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getUseWallGradualColor_ev_int32_callback", "(I)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_getUseWallGradualColor_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::getUseWallGradualColor(polylineFeatureUniqueID);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_setUseWallGradualColor_1ev_1int32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j, jboolean useWallGradualColor_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				const ev_bool useWallGradualColor = (const ev_bool) useWallGradualColor_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureManagerProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::setUseWallGradualColor(polylineFeatureUniqueID, useWallGradualColor);
				}
				else
				{
					pObjectX->setUseWallGradualColor(polylineFeatureUniqueID, useWallGradualColor);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_register_1setUseWallGradualColor_1ev_1int32_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureManagerProxy *pObjectX = (JCPolylineFeatureManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setUseWallGradualColor_ev_int32_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setUseWallGradualColor_ev_int32_ev_bool_callback", "(IZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_setUseWallGradualColor_1ev_1int32_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j, jboolean useWallGradualColor_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				const ev_bool useWallGradualColor = (const ev_bool) useWallGradualColor_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::setUseWallGradualColor(polylineFeatureUniqueID, useWallGradualColor);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_getWallGradualColor_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureManagerProxy))
				{
					EarthView::World::Spatial::Display::CRgbColor* __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::getWallGradualColor(polylineFeatureUniqueID);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Display::CRgbColor* __values1 = pObjectX->getWallGradualColor(polylineFeatureUniqueID);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_register_1getWallGradualColor_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureManagerProxy *pObjectX = (JCPolylineFeatureManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWallGradualColor_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWallGradualColor_ev_int32_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_getWallGradualColor_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				EarthView::World::Spatial::Display::CRgbColor* __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::getWallGradualColor(polylineFeatureUniqueID);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_setWallGradualColor_1ev_1int32_1CRgbColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j, jlong pWallGradualColor_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				EarthView::World::Spatial::Display::CRgbColor *pWallGradualColor = (EarthView::World::Spatial::Display::CRgbColor*) pWallGradualColor_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureManagerProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::setWallGradualColor(polylineFeatureUniqueID, pWallGradualColor);
				}
				else
				{
					pObjectX->setWallGradualColor(polylineFeatureUniqueID, pWallGradualColor);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_register_1setWallGradualColor_1ev_1int32_1CRgbColor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureManagerProxy *pObjectX = (JCPolylineFeatureManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setWallGradualColor_ev_int32_CRgbColor_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setWallGradualColor_ev_int32_CRgbColor_callback", "(IJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_setWallGradualColor_1ev_1int32_1CRgbColor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j, jlong pWallGradualColor_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				EarthView::World::Spatial::Display::CRgbColor *pWallGradualColor = (EarthView::World::Spatial::Display::CRgbColor*) pWallGradualColor_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::setWallGradualColor(polylineFeatureUniqueID, pWallGradualColor);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_canReleaseResource_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureManagerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::canReleaseResource();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->canReleaseResource();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_register_1canReleaseResource_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureManagerProxy *pObjectX = (JCPolylineFeatureManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_canReleaseResource_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"canReleaseResource_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_canReleaseResource_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::canReleaseResource();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_canReleaseResource_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureManagerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::canReleaseResource(polylineFeatureUniqueID);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->canReleaseResource(polylineFeatureUniqueID);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_register_1canReleaseResource_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureManagerProxy *pObjectX = (JCPolylineFeatureManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_canReleaseResource_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"canReleaseResource_ev_int32_callback", "(I)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_canReleaseResource_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint polylineFeatureUniqueID_j)
			{
				const ev_int32 polylineFeatureUniqueID = (const ev_int32) polylineFeatureUniqueID_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::canReleaseResource(polylineFeatureUniqueID);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_setNeedUpdate_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean needUpdate_j)
			{
				const ev_bool needUpdate = (const ev_bool) needUpdate_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureManagerProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::setNeedUpdate(needUpdate);
				}
				else
				{
					pObjectX->setNeedUpdate(needUpdate);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_register_1setNeedUpdate_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureManagerProxy *pObjectX = (JCPolylineFeatureManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setNeedUpdate_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setNeedUpdate_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_setNeedUpdate_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean needUpdate_j)
			{
				const ev_bool needUpdate = (const ev_bool) needUpdate_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::setNeedUpdate(needUpdate);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_update_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureManagerProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::update();
				}
				else
				{
					pObjectX->update();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_register_1update_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureManagerProxy *pObjectX = (JCPolylineFeatureManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_update_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"update_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_update_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::update();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_register_1getCanSwapBuffer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureManagerProxy *pObjectX = (JCPolylineFeatureManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCanSwapBuffer_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCanSwapBuffer_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_register_1setName_1EarthView_1World_1Core_1ev_1string(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureManagerProxy *pObjectX = (JCPolylineFeatureManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setName_EarthView_World_Core_ev_string_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setName_EarthView_World_Core_ev_string_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureManagerProxy *pObjectX = (JCPolylineFeatureManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_register_1getNeedUpdate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureManagerProxy *pObjectX = (JCPolylineFeatureManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNeedUpdate_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNeedUpdate_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeatureManager_register_1getNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureManagerProxy *pObjectX = (JCPolylineFeatureManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNode_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNode_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
