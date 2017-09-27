/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/idisplaycache.h"
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
				class JICacheInfoProxy : public EarthView::World::Spatial::Atlas::ICacheInfo
				{
				 private:
					EarthView::World::Core::ev_string m_getCache_void_callback;
					EarthView::World::Core::ev_string m_getCacheExtent_void_callback;
					EarthView::World::Core::ev_string m_isDirty_void_callback;
					EarthView::World::Core::ev_string m_setDirty_void_callback;
				public:
					JICacheInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : ICacheInfo(pList)
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
					C_DISABLE_COPY(JICacheInfoProxy)
				public:
					void register_getCache_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getCache_void_callback = __method;
					}
					void register_getCacheExtent_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getCacheExtent_void_callback = __method;
					}
					void register_isDirty_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isDirty_void_callback = __method;
					}
					void register_setDirty_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDirty_void_callback = __method;
					}
					virtual EarthView::World::Display::IBitmap* getCache() const
					{
						if (this->_gRef != NULL && this->m_getCache_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getCache_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Display::IBitmap *__values1 = (EarthView::World::Display::IBitmap*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ICacheInfo::getCache();
						}
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getCacheExtent() const
					{
						if (this->_gRef != NULL && this->m_getCacheExtent_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getCacheExtent_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial::Geometry::IEnvelope *__values1 = (const EarthView::World::Spatial::Geometry::IEnvelope*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ICacheInfo::getCacheExtent();
						}
					}
					virtual ev_bool isDirty() const
					{
						if (this->_gRef != NULL && this->m_isDirty_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isDirty_void_callback");
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
							return this->ICacheInfo::isDirty();
						}
					}
					virtual void setDirty()
					{
						if (this->_gRef != NULL && this->m_setDirty_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("setDirty_void_callback");
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
							return this->ICacheInfo::setDirty();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JICacheInfoProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Icacheinfo_getCache_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ICacheInfo *pObjectX = (EarthView::World::Spatial::Atlas::ICacheInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JICacheInfoProxy))
					{
						EarthView::World::Display::IBitmap* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ICacheInfo::getCache();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Display::IBitmap* __values1 = pObjectX->getCache();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Icacheinfo_register_1getCache_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JICacheInfoProxy *pObjectX = (JICacheInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getCache_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getCache_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Icacheinfo_getCache_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ICacheInfo *pObjectX = (EarthView::World::Spatial::Atlas::ICacheInfo*) pObjXXXX;
					EarthView::World::Display::IBitmap* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ICacheInfo::getCache();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Icacheinfo_getCacheExtent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ICacheInfo *pObjectX = (EarthView::World::Spatial::Atlas::ICacheInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JICacheInfoProxy))
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ICacheInfo::getCacheExtent();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->getCacheExtent();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Icacheinfo_register_1getCacheExtent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JICacheInfoProxy *pObjectX = (JICacheInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getCacheExtent_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getCacheExtent_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Icacheinfo_getCacheExtent_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ICacheInfo *pObjectX = (EarthView::World::Spatial::Atlas::ICacheInfo*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ICacheInfo::getCacheExtent();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Icacheinfo_isDirty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ICacheInfo *pObjectX = (EarthView::World::Spatial::Atlas::ICacheInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JICacheInfoProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ICacheInfo::isDirty();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isDirty();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Icacheinfo_register_1isDirty_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JICacheInfoProxy *pObjectX = (JICacheInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isDirty_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isDirty_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Icacheinfo_isDirty_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ICacheInfo *pObjectX = (EarthView::World::Spatial::Atlas::ICacheInfo*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ICacheInfo::isDirty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Icacheinfo_setDirty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::ICacheInfo *pObjectX = (EarthView::World::Spatial::Atlas::ICacheInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JICacheInfoProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ICacheInfo::setDirty();
					}
					else
					{
						pObjectX->setDirty();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Icacheinfo_register_1setDirty_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JICacheInfoProxy *pObjectX = (JICacheInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDirty_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDirty_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Icacheinfo_setDirty_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::ICacheInfo *pObjectX = (EarthView::World::Spatial::Atlas::ICacheInfo*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ICacheInfo::setDirty();
				}
				class JIDisplayCacheProxy : public EarthView::World::Spatial::Atlas::IDisplayCache
				{
				 private:
					EarthView::World::Core::ev_string m_getMapCacheInfo_void_callback;
					EarthView::World::Core::ev_string m_getCachedMap_void_callback;
					EarthView::World::Core::ev_string m_getLayerCacheInfo_ILayer_callback;
					EarthView::World::Core::ev_string m_getLayerCacheInfo2_void_callback;
					EarthView::World::Core::ev_string m_getLayerCacheInfoWithoutResize_ILayer_callback;
					EarthView::World::Core::ev_string m_getSelectionCacheInfo_void_callback;
					EarthView::World::Core::ev_string m_selectionCached_void_callback;
					EarthView::World::Core::ev_string m_setSelectionCached_ev_bool_callback;
					EarthView::World::Core::ev_string m_addCache_ILayer_callback;
					EarthView::World::Core::ev_string m_removeCache_ILayer_callback;
					EarthView::World::Core::ev_string m_clear_void_callback;
				public:
					JIDisplayCacheProxy(EarthView::World::Core::CNameValuePairList *pList) : IDisplayCache(pList)
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
					C_DISABLE_COPY(JIDisplayCacheProxy)
				public:
					void register_getMapCacheInfo_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMapCacheInfo_void_callback = __method;
					}
					void register_getCachedMap_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getCachedMap_void_callback = __method;
					}
					void register_getLayerCacheInfo_ILayer_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getLayerCacheInfo_ILayer_callback = __method;
					}
					void register_getLayerCacheInfo2_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getLayerCacheInfo2_void_callback = __method;
					}
					void register_getLayerCacheInfoWithoutResize_ILayer_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getLayerCacheInfoWithoutResize_ILayer_callback = __method;
					}
					void register_getSelectionCacheInfo_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSelectionCacheInfo_void_callback = __method;
					}
					void register_selectionCached_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_selectionCached_void_callback = __method;
					}
					void register_setSelectionCached_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSelectionCached_ev_bool_callback = __method;
					}
					void register_addCache_ILayer_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addCache_ILayer_callback = __method;
					}
					void register_removeCache_ILayer_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeCache_ILayer_callback = __method;
					}
					void register_clear_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_clear_void_callback = __method;
					}
					virtual const EarthView::World::Spatial::Atlas::ICacheInfo* getMapCacheInfo() const
					{
						if (this->_gRef != NULL && this->m_getMapCacheInfo_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMapCacheInfo_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial::Atlas::ICacheInfo *__values1 = (const EarthView::World::Spatial::Atlas::ICacheInfo*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IDisplayCache::getMapCacheInfo();
						}
					}
					virtual const EarthView::World::Display::ICachedBitmap* getCachedMap() const
					{
						if (this->_gRef != NULL && this->m_getCachedMap_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getCachedMap_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Display::ICachedBitmap *__values1 = (const EarthView::World::Display::ICachedBitmap*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IDisplayCache::getCachedMap();
						}
					}
					virtual EarthView::World::Spatial::Atlas::ICacheInfo* getLayerCacheInfo(const EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if (this->_gRef != NULL && this->m_getLayerCacheInfo_ILayer_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getLayerCacheInfo_ILayer_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , layer_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Atlas::ICacheInfo *__values1 = (EarthView::World::Spatial::Atlas::ICacheInfo*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IDisplayCache::getLayerCacheInfo(layer);
						}
					}
					virtual EarthView::World::Spatial::Atlas::ICacheInfo* getLayerCacheInfo2()
					{
						if (this->_gRef != NULL && this->m_getLayerCacheInfo2_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getLayerCacheInfo2_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Atlas::ICacheInfo *__values1 = (EarthView::World::Spatial::Atlas::ICacheInfo*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IDisplayCache::getLayerCacheInfo2();
						}
					}
					virtual EarthView::World::Spatial::Atlas::ICacheInfo* getLayerCacheInfoWithoutResize(const EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if (this->_gRef != NULL && this->m_getLayerCacheInfoWithoutResize_ILayer_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getLayerCacheInfoWithoutResize_ILayer_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , layer_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Atlas::ICacheInfo *__values1 = (EarthView::World::Spatial::Atlas::ICacheInfo*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IDisplayCache::getLayerCacheInfoWithoutResize(layer);
						}
					}
					virtual const EarthView::World::Spatial::Atlas::ICacheInfo* getSelectionCacheInfo()
					{
						if (this->_gRef != NULL && this->m_getSelectionCacheInfo_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSelectionCacheInfo_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial::Atlas::ICacheInfo *__values1 = (const EarthView::World::Spatial::Atlas::ICacheInfo*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IDisplayCache::getSelectionCacheInfo();
						}
					}
					virtual ev_bool selectionCached() const
					{
						if (this->_gRef != NULL && this->m_selectionCached_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("selectionCached_void_callback");
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
							return this->IDisplayCache::selectionCached();
						}
					}
					virtual void setSelectionCached(ev_bool cached)
					{
						if (this->_gRef != NULL && this->m_setSelectionCached_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean cached_j = (jboolean) cached;
							jmethodID __method = __gr->getMethod("setSelectionCached_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , cached_j);
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
							return this->IDisplayCache::setSelectionCached(cached);
						}
					}
					virtual EarthView::World::Spatial::Atlas::ICacheInfo* addCache(const EarthView::World::Spatial::Atlas::ILayer* ref_layer)
					{
						if (this->_gRef != NULL && this->m_addCache_ILayer_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("addCache_ILayer_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , ref_layer_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Atlas::ICacheInfo *__values1 = (EarthView::World::Spatial::Atlas::ICacheInfo*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IDisplayCache::addCache(ref_layer);
						}
					}
					virtual void removeCache(const EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if (this->_gRef != NULL && this->m_removeCache_ILayer_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("removeCache_ILayer_callback");
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
							return this->IDisplayCache::removeCache(layer);
						}
					}
					virtual void clear()
					{
						if (this->_gRef != NULL && this->m_clear_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("clear_void_callback");
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
							return this->IDisplayCache::clear();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIDisplayCacheProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_getMapCacheInfo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::IDisplayCache *pObjectX = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDisplayCacheProxy))
					{
						const EarthView::World::Spatial::Atlas::ICacheInfo* __values1 = pObjectX->EarthView::World::Spatial::Atlas::IDisplayCache::getMapCacheInfo();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::Atlas::ICacheInfo* __values1 = pObjectX->getMapCacheInfo();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_register_1getMapCacheInfo_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDisplayCacheProxy *pObjectX = (JIDisplayCacheProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMapCacheInfo_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMapCacheInfo_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_getMapCacheInfo_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::IDisplayCache *pObjectX = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjXXXX;
					const EarthView::World::Spatial::Atlas::ICacheInfo* __values1 = pObjectX->EarthView::World::Spatial::Atlas::IDisplayCache::getMapCacheInfo();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_getCachedMap_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::IDisplayCache *pObjectX = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDisplayCacheProxy))
					{
						const EarthView::World::Display::ICachedBitmap* __values1 = pObjectX->EarthView::World::Spatial::Atlas::IDisplayCache::getCachedMap();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Display::ICachedBitmap* __values1 = pObjectX->getCachedMap();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_register_1getCachedMap_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDisplayCacheProxy *pObjectX = (JIDisplayCacheProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getCachedMap_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getCachedMap_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_getCachedMap_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::IDisplayCache *pObjectX = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjXXXX;
					const EarthView::World::Display::ICachedBitmap* __values1 = pObjectX->EarthView::World::Spatial::Atlas::IDisplayCache::getCachedMap();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_getLayerCacheInfo_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					const EarthView::World::Spatial::Atlas::ILayer *layer = (const EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial::Atlas::IDisplayCache *pObjectX = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDisplayCacheProxy))
					{
						EarthView::World::Spatial::Atlas::ICacheInfo* __values1 = pObjectX->EarthView::World::Spatial::Atlas::IDisplayCache::getLayerCacheInfo(layer);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ICacheInfo* __values1 = pObjectX->getLayerCacheInfo(layer);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_register_1getLayerCacheInfo_1ILayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDisplayCacheProxy *pObjectX = (JIDisplayCacheProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getLayerCacheInfo_ILayer_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getLayerCacheInfo_ILayer_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_getLayerCacheInfo_1ILayer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					const EarthView::World::Spatial::Atlas::ILayer *layer = (const EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial::Atlas::IDisplayCache *pObjectX = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ICacheInfo* __values1 = pObjectX->EarthView::World::Spatial::Atlas::IDisplayCache::getLayerCacheInfo(layer);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_getLayerCacheInfo2_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::IDisplayCache *pObjectX = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDisplayCacheProxy))
					{
						EarthView::World::Spatial::Atlas::ICacheInfo* __values1 = pObjectX->EarthView::World::Spatial::Atlas::IDisplayCache::getLayerCacheInfo2();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ICacheInfo* __values1 = pObjectX->getLayerCacheInfo2();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_register_1getLayerCacheInfo2_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDisplayCacheProxy *pObjectX = (JIDisplayCacheProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getLayerCacheInfo2_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getLayerCacheInfo2_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_getLayerCacheInfo2_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::IDisplayCache *pObjectX = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ICacheInfo* __values1 = pObjectX->EarthView::World::Spatial::Atlas::IDisplayCache::getLayerCacheInfo2();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_getLayerCacheInfoWithoutResize_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					const EarthView::World::Spatial::Atlas::ILayer *layer = (const EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial::Atlas::IDisplayCache *pObjectX = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDisplayCacheProxy))
					{
						EarthView::World::Spatial::Atlas::ICacheInfo* __values1 = pObjectX->EarthView::World::Spatial::Atlas::IDisplayCache::getLayerCacheInfoWithoutResize(layer);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ICacheInfo* __values1 = pObjectX->getLayerCacheInfoWithoutResize(layer);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_register_1getLayerCacheInfoWithoutResize_1ILayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDisplayCacheProxy *pObjectX = (JIDisplayCacheProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getLayerCacheInfoWithoutResize_ILayer_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getLayerCacheInfoWithoutResize_ILayer_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_getLayerCacheInfoWithoutResize_1ILayer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					const EarthView::World::Spatial::Atlas::ILayer *layer = (const EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial::Atlas::IDisplayCache *pObjectX = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ICacheInfo* __values1 = pObjectX->EarthView::World::Spatial::Atlas::IDisplayCache::getLayerCacheInfoWithoutResize(layer);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_getSelectionCacheInfo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::IDisplayCache *pObjectX = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDisplayCacheProxy))
					{
						const EarthView::World::Spatial::Atlas::ICacheInfo* __values1 = pObjectX->EarthView::World::Spatial::Atlas::IDisplayCache::getSelectionCacheInfo();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::Atlas::ICacheInfo* __values1 = pObjectX->getSelectionCacheInfo();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_register_1getSelectionCacheInfo_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDisplayCacheProxy *pObjectX = (JIDisplayCacheProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSelectionCacheInfo_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSelectionCacheInfo_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_getSelectionCacheInfo_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::IDisplayCache *pObjectX = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjXXXX;
					const EarthView::World::Spatial::Atlas::ICacheInfo* __values1 = pObjectX->EarthView::World::Spatial::Atlas::IDisplayCache::getSelectionCacheInfo();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_selectionCached_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::IDisplayCache *pObjectX = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDisplayCacheProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::IDisplayCache::selectionCached();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->selectionCached();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_register_1selectionCached_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDisplayCacheProxy *pObjectX = (JIDisplayCacheProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_selectionCached_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"selectionCached_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_selectionCached_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::IDisplayCache *pObjectX = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::IDisplayCache::selectionCached();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_setSelectionCached_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean cached_j)
				{
					ev_bool cached = (ev_bool) cached_j;
					EarthView::World::Spatial::Atlas::IDisplayCache *pObjectX = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDisplayCacheProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::IDisplayCache::setSelectionCached(cached);
					}
					else
					{
						pObjectX->setSelectionCached(cached);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_register_1setSelectionCached_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDisplayCacheProxy *pObjectX = (JIDisplayCacheProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSelectionCached_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSelectionCached_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_setSelectionCached_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean cached_j)
				{
					ev_bool cached = (ev_bool) cached_j;
					EarthView::World::Spatial::Atlas::IDisplayCache *pObjectX = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::IDisplayCache::setSelectionCached(cached);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_addCache_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j)
				{
					const EarthView::World::Spatial::Atlas::ILayer *ref_layer = (const EarthView::World::Spatial::Atlas::ILayer*) ref_layer_j;
					EarthView::World::Spatial::Atlas::IDisplayCache *pObjectX = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDisplayCacheProxy))
					{
						EarthView::World::Spatial::Atlas::ICacheInfo* __values1 = pObjectX->EarthView::World::Spatial::Atlas::IDisplayCache::addCache(ref_layer);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ICacheInfo* __values1 = pObjectX->addCache(ref_layer);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_register_1addCache_1ILayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDisplayCacheProxy *pObjectX = (JIDisplayCacheProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addCache_ILayer_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addCache_ILayer_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_addCache_1ILayer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j)
				{
					const EarthView::World::Spatial::Atlas::ILayer *ref_layer = (const EarthView::World::Spatial::Atlas::ILayer*) ref_layer_j;
					EarthView::World::Spatial::Atlas::IDisplayCache *pObjectX = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ICacheInfo* __values1 = pObjectX->EarthView::World::Spatial::Atlas::IDisplayCache::addCache(ref_layer);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_removeCache_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					const EarthView::World::Spatial::Atlas::ILayer *layer = (const EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial::Atlas::IDisplayCache *pObjectX = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDisplayCacheProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::IDisplayCache::removeCache(layer);
					}
					else
					{
						pObjectX->removeCache(layer);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_register_1removeCache_1ILayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDisplayCacheProxy *pObjectX = (JIDisplayCacheProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeCache_ILayer_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeCache_ILayer_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_removeCache_1ILayer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					const EarthView::World::Spatial::Atlas::ILayer *layer = (const EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial::Atlas::IDisplayCache *pObjectX = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::IDisplayCache::removeCache(layer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::IDisplayCache *pObjectX = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDisplayCacheProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::IDisplayCache::clear();
					}
					else
					{
						pObjectX->clear();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_register_1clear_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDisplayCacheProxy *pObjectX = (JIDisplayCacheProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_clear_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"clear_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Idisplaycache_clear_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::IDisplayCache *pObjectX = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::IDisplayCache::clear();
				}
			}
		}
	}
}
