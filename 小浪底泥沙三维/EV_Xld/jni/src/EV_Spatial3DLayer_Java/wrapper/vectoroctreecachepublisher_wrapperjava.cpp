/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dlayer/vectoroctreecachepublisher.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				class JCVectorOctreeCachePublisherProxy : public EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher
				{
				 private:
					EarthView::World::Core::ev_string m_publish_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector_callback;
					EarthView::World::Core::ev_string m_stopPublish_void_callback;
					EarthView::World::Core::ev_string m_setPublishListener_CVectorOctreePublishListener_callback;
					EarthView::World::Core::ev_string m_setTotalCount_ev_uint32_callback;
					EarthView::World::Core::ev_string m_updateProgressInformation_EVString_ev_uint32_callback;
					EarthView::World::Core::ev_string m_setInformation_EVString_ev_int32_callback;
				public:
					JCVectorOctreeCachePublisherProxy(EarthView::World::Core::CNameValuePairList *pList) : CVectorOctreeCachePublisher(pList)
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
					void register_publish_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_publish_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector_callback = __method;
					}
					void register_stopPublish_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_stopPublish_void_callback = __method;
					}
					void register_setPublishListener_CVectorOctreePublishListener_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setPublishListener_CVectorOctreePublishListener_callback = __method;
					}
					void register_setTotalCount_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setTotalCount_ev_uint32_callback = __method;
					}
					void register_updateProgressInformation_EVString_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_updateProgressInformation_EVString_ev_uint32_callback = __method;
					}
					void register_setInformation_EVString_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setInformation_EVString_ev_int32_callback = __method;
					}
					virtual ev_bool publish(EarthView::World::Spatial3D::Atlas::ISceneLayer* pLayer, const EVString& path, const EVString& fileName, const EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector& fieldNames)
					{
						if (this->_gRef != NULL && this->m_publish_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring path_wch = path;
							jstring path_j = __env->NewString((const jchar*)path_wch.getString(), path_wch.size());
							EarthView::World::Core::ev_wstring fileName_wch = fileName;
							jstring fileName_j = __env->NewString((const jchar*)fileName_wch.getString(), fileName_wch.size());
							jlong fieldNames_j = (jlong) &fieldNames;
							jmethodID __method = __gr->getMethod("publish_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pLayer_j, path_j, fileName_j, fieldNames_j);
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
							return this->CVectorOctreeCachePublisher::publish(pLayer, path, fileName, fieldNames);
						}
					}
					virtual void stopPublish()
					{
						if (this->_gRef != NULL && this->m_stopPublish_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("stopPublish_void_callback");
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
							return this->CVectorOctreeCachePublisher::stopPublish();
						}
					}
					virtual void setPublishListener(EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener* listener)
					{
						if (this->_gRef != NULL && this->m_setPublishListener_CVectorOctreePublishListener_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("setPublishListener_CVectorOctreePublishListener_callback");
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
							return this->CVectorOctreeCachePublisher::setPublishListener(listener);
						}
					}
					virtual void setTotalCount(ev_uint32 count)
					{
						if (this->_gRef != NULL && this->m_setTotalCount_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong count_j = (jlong) count;
							jmethodID __method = __gr->getMethod("setTotalCount_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , count_j);
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
							return this->CVectorOctreeCachePublisher::setTotalCount(count);
						}
					}
					virtual void updateProgressInformation(const EVString& info, ev_uint32 publishCount)
					{
						if (this->_gRef != NULL && this->m_updateProgressInformation_EVString_ev_uint32_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring info_wch = info;
							jstring info_j = __env->NewString((const jchar*)info_wch.getString(), info_wch.size());
							jlong publishCount_j = (jlong) publishCount;
							jmethodID __method = __gr->getMethod("updateProgressInformation_EVString_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , info_j, publishCount_j);
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
							return this->CVectorOctreeCachePublisher::updateProgressInformation(info, publishCount);
						}
					}
					virtual void setInformation(const EVString& info, ev_int32 percent)
					{
						if (this->_gRef != NULL && this->m_setInformation_EVString_ev_int32_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring info_wch = info;
							jstring info_j = __env->NewString((const jchar*)info_wch.getString(), info_wch.size());
							jint percent_j = (jint) percent;
							jmethodID __method = __gr->getMethod("setInformation_EVString_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , info_j, percent_j);
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
							return this->CVectorOctreeCachePublisher::setInformation(info, percent);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCVectorOctreeCachePublisherProxy);
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_VectorOctreeCachePublisher_publish_1ISceneLayer_1EVString_1EVString_1CVector3DCacheFieldVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pLayer_j, jstring path_j, jstring fileName_j, jlong fieldNames_j)
				{
					EarthView::World::Spatial3D::Atlas::ISceneLayer *pLayer = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pLayer_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* path_ch = (const ev_char*)__env->GetStringUTFChars(path_j,JNI_FALSE);
					const EVString path = path_ch;
					__env->ReleaseStringUTFChars(path_j, (const char *)path_ch);
					#else
					const ev_wchar* path_ch = (const ev_wchar*)__env->GetStringChars(path_j,JNI_FALSE);
					const EVString path = path_ch;
					__env->ReleaseStringChars(path_j, (const jchar *)path_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* fileName_ch = (const ev_char*)__env->GetStringUTFChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringUTFChars(fileName_j, (const char *)fileName_ch);
					#else
					const ev_wchar* fileName_ch = (const ev_wchar*)__env->GetStringChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringChars(fileName_j, (const jchar *)fileName_ch);
					#endif
					const EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector &fieldNames = *(EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) fieldNames_j;
					EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeCachePublisherProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher::publish(pLayer, path, fileName, fieldNames);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->publish(pLayer, path, fileName, fieldNames);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_VectorOctreeCachePublisher_register_1publish_1ISceneLayer_1EVString_1EVString_1CVector3DCacheFieldVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeCachePublisherProxy *pObjectX = (JCVectorOctreeCachePublisherProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_publish_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"publish_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector_callback", "(JLjava/lang/String;Ljava/lang/String;J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_VectorOctreeCachePublisher_publish_1ISceneLayer_1EVString_1EVString_1CVector3DCacheFieldVector_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pLayer_j, jstring path_j, jstring fileName_j, jlong fieldNames_j)
				{
					EarthView::World::Spatial3D::Atlas::ISceneLayer *pLayer = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pLayer_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* path_ch = (const ev_char*)__env->GetStringUTFChars(path_j,JNI_FALSE);
					const EVString path = path_ch;
					__env->ReleaseStringUTFChars(path_j, (const char *)path_ch);
					#else
					const ev_wchar* path_ch = (const ev_wchar*)__env->GetStringChars(path_j,JNI_FALSE);
					const EVString path = path_ch;
					__env->ReleaseStringChars(path_j, (const jchar *)path_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* fileName_ch = (const ev_char*)__env->GetStringUTFChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringUTFChars(fileName_j, (const char *)fileName_ch);
					#else
					const ev_wchar* fileName_ch = (const ev_wchar*)__env->GetStringChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringChars(fileName_j, (const jchar *)fileName_ch);
					#endif
					const EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector &fieldNames = *(EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) fieldNames_j;
					EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher::publish(pLayer, path, fileName, fieldNames);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_VectorOctreeCachePublisher_stopPublish_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeCachePublisherProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher::stopPublish();
					}
					else
					{
						pObjectX->stopPublish();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_VectorOctreeCachePublisher_register_1stopPublish_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeCachePublisherProxy *pObjectX = (JCVectorOctreeCachePublisherProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_stopPublish_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"stopPublish_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_VectorOctreeCachePublisher_stopPublish_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher::stopPublish();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_VectorOctreeCachePublisher_setPublishListener_1CVectorOctreePublishListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
				{
					EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener *listener = (EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener*) listener_j;
					EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeCachePublisherProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher::setPublishListener(listener);
					}
					else
					{
						pObjectX->setPublishListener(listener);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_VectorOctreeCachePublisher_register_1setPublishListener_1CVectorOctreePublishListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeCachePublisherProxy *pObjectX = (JCVectorOctreeCachePublisherProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setPublishListener_CVectorOctreePublishListener_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setPublishListener_CVectorOctreePublishListener_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_VectorOctreeCachePublisher_setPublishListener_1CVectorOctreePublishListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
				{
					EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener *listener = (EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener*) listener_j;
					EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher::setPublishListener(listener);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_VectorOctreeCachePublisher_setTotalCount_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_uint32 count = (ev_uint32) count_j;
					EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeCachePublisherProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher::setTotalCount(count);
					}
					else
					{
						pObjectX->setTotalCount(count);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_VectorOctreeCachePublisher_register_1setTotalCount_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeCachePublisherProxy *pObjectX = (JCVectorOctreeCachePublisherProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setTotalCount_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setTotalCount_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_VectorOctreeCachePublisher_setTotalCount_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_uint32 count = (ev_uint32) count_j;
					EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher::setTotalCount(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_VectorOctreeCachePublisher_updateProgressInformation_1EVString_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring info_j, jlong publishCount_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* info_ch = (const ev_char*)__env->GetStringUTFChars(info_j,JNI_FALSE);
					const EVString info = info_ch;
					__env->ReleaseStringUTFChars(info_j, (const char *)info_ch);
					#else
					const ev_wchar* info_ch = (const ev_wchar*)__env->GetStringChars(info_j,JNI_FALSE);
					const EVString info = info_ch;
					__env->ReleaseStringChars(info_j, (const jchar *)info_ch);
					#endif
					ev_uint32 publishCount = (ev_uint32) publishCount_j;
					EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeCachePublisherProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher::updateProgressInformation(info, publishCount);
					}
					else
					{
						pObjectX->updateProgressInformation(info, publishCount);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_VectorOctreeCachePublisher_register_1updateProgressInformation_1EVString_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeCachePublisherProxy *pObjectX = (JCVectorOctreeCachePublisherProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_updateProgressInformation_EVString_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"updateProgressInformation_EVString_ev_uint32_callback", "(Ljava/lang/String;J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_VectorOctreeCachePublisher_updateProgressInformation_1EVString_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring info_j, jlong publishCount_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* info_ch = (const ev_char*)__env->GetStringUTFChars(info_j,JNI_FALSE);
					const EVString info = info_ch;
					__env->ReleaseStringUTFChars(info_j, (const char *)info_ch);
					#else
					const ev_wchar* info_ch = (const ev_wchar*)__env->GetStringChars(info_j,JNI_FALSE);
					const EVString info = info_ch;
					__env->ReleaseStringChars(info_j, (const jchar *)info_ch);
					#endif
					ev_uint32 publishCount = (ev_uint32) publishCount_j;
					EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher::updateProgressInformation(info, publishCount);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_VectorOctreeCachePublisher_setInformation_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring info_j, jint percent_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* info_ch = (const ev_char*)__env->GetStringUTFChars(info_j,JNI_FALSE);
					const EVString info = info_ch;
					__env->ReleaseStringUTFChars(info_j, (const char *)info_ch);
					#else
					const ev_wchar* info_ch = (const ev_wchar*)__env->GetStringChars(info_j,JNI_FALSE);
					const EVString info = info_ch;
					__env->ReleaseStringChars(info_j, (const jchar *)info_ch);
					#endif
					ev_int32 percent = (ev_int32) percent_j;
					EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeCachePublisherProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher::setInformation(info, percent);
					}
					else
					{
						pObjectX->setInformation(info, percent);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_VectorOctreeCachePublisher_register_1setInformation_1EVString_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeCachePublisherProxy *pObjectX = (JCVectorOctreeCachePublisherProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setInformation_EVString_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setInformation_EVString_ev_int32_callback", "(Ljava/lang/String;I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_VectorOctreeCachePublisher_setInformation_1EVString_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring info_j, jint percent_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* info_ch = (const ev_char*)__env->GetStringUTFChars(info_j,JNI_FALSE);
					const EVString info = info_ch;
					__env->ReleaseStringUTFChars(info_j, (const char *)info_ch);
					#else
					const ev_wchar* info_ch = (const ev_wchar*)__env->GetStringChars(info_j,JNI_FALSE);
					const EVString info = info_ch;
					__env->ReleaseStringChars(info_j, (const jchar *)info_ch);
					#endif
					ev_int32 percent = (ev_int32) percent_j;
					EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher::setInformation(info, percent);
				}
				class JCVectorOctreePublishListenerProxy : public EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener
				{
				 private:
					EarthView::World::Core::ev_string m_setInformation_EVString_ev_int32_callback;
				public:
					JCVectorOctreePublishListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CVectorOctreePublishListener(pList)
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
					void register_setInformation_EVString_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setInformation_EVString_ev_int32_callback = __method;
					}
					virtual void setInformation(const EVString& info, ev_int32 percent)
					{
						if (this->_gRef != NULL && this->m_setInformation_EVString_ev_int32_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring info_wch = info;
							jstring info_j = __env->NewString((const jchar*)info_wch.getString(), info_wch.size());
							jint percent_j = (jint) percent;
							jmethodID __method = __gr->getMethod("setInformation_EVString_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , info_j, percent_j);
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
							return this->CVectorOctreePublishListener::setInformation(info, percent);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCVectorOctreePublishListenerProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_VectorOctreePublishListener_setInformation_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring info_j, jint percent_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* info_ch = (const ev_char*)__env->GetStringUTFChars(info_j,JNI_FALSE);
					const EVString info = info_ch;
					__env->ReleaseStringUTFChars(info_j, (const char *)info_ch);
					#else
					const ev_wchar* info_ch = (const ev_wchar*)__env->GetStringChars(info_j,JNI_FALSE);
					const EVString info = info_ch;
					__env->ReleaseStringChars(info_j, (const jchar *)info_ch);
					#endif
					ev_int32 percent = (ev_int32) percent_j;
					EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreePublishListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener::setInformation(info, percent);
					}
					else
					{
						pObjectX->setInformation(info, percent);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_VectorOctreePublishListener_register_1setInformation_1EVString_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreePublishListenerProxy *pObjectX = (JCVectorOctreePublishListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setInformation_EVString_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setInformation_EVString_ev_int32_callback", "(Ljava/lang/String;I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_VectorOctreePublishListener_setInformation_1EVString_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring info_j, jint percent_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* info_ch = (const ev_char*)__env->GetStringUTFChars(info_j,JNI_FALSE);
					const EVString info = info_ch;
					__env->ReleaseStringUTFChars(info_j, (const char *)info_ch);
					#else
					const ev_wchar* info_ch = (const ev_wchar*)__env->GetStringChars(info_j,JNI_FALSE);
					const EVString info = info_ch;
					__env->ReleaseStringChars(info_j, (const jchar *)info_ch);
					#endif
					ev_int32 percent = (ev_int32) percent_j;
					EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener::setInformation(info, percent);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_atlas_Vector3DCacheField_get_1mFieldName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CVector3DCacheField *pObjectX = (EarthView::World::Spatial3D::Atlas::CVector3DCacheField*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mFieldName;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_Vector3DCacheField_set_1mFieldName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::Atlas::CVector3DCacheField *pObjectX = (EarthView::World::Spatial3D::Atlas::CVector3DCacheField*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mFieldName = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_Vector3DCacheField_get_1mFieldType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CVector3DCacheField *pObjectX = (EarthView::World::Spatial3D::Atlas::CVector3DCacheField*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mFieldType);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_Vector3DCacheField_set_1mFieldType_1EVFieldType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::Atlas::CVector3DCacheField *pObjectX = (EarthView::World::Spatial3D::Atlas::CVector3DCacheField*)pObjXXXX;
					pObjectX->mFieldType = (EarthView::World::Spatial::GeoDataset::EVFieldType)__values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_atlas_Vector3DCacheField_getFieldName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CVector3DCacheField *pObjectX = (EarthView::World::Spatial3D::Atlas::CVector3DCacheField*) pObjXXXX;
					EVString __values1 = pObjectX->getFieldName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_Vector3DCacheField_getFieldType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CVector3DCacheField *pObjectX = (EarthView::World::Spatial3D::Atlas::CVector3DCacheField*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::EVFieldType __values1 = pObjectX->getFieldType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_Vector3DCacheField_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CVector3DCacheField *pObjectX = (EarthView::World::Spatial3D::Atlas::CVector3DCacheField*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_Vector3DCacheField_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial3D::Atlas::CVector3DCacheField *pObjectX = (EarthView::World::Spatial3D::Atlas::CVector3DCacheField*) pObjXXXX;
					pObjectX->fromXmlElement(element);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_Vector3DCacheFieldVector_push_1back_1CVector3DCacheField(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial3D::Atlas::CVector3DCacheField &t = *(EarthView::World::Spatial3D::Atlas::CVector3DCacheField*) t_j;
					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector *pObjectX = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_Vector3DCacheFieldVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector *pObjectX = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_Vector3DCacheFieldVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector *pObjectX = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::CVector3DCacheField __values1 = pObjectX->front();
					EarthView::World::Spatial3D::Atlas::CVector3DCacheField *returnvalues = new EarthView::World::Spatial3D::Atlas::CVector3DCacheField(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_Vector3DCacheFieldVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector *pObjectX = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::CVector3DCacheField __values1 = pObjectX->back();
					EarthView::World::Spatial3D::Atlas::CVector3DCacheField *returnvalues = new EarthView::World::Spatial3D::Atlas::CVector3DCacheField(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_Vector3DCacheFieldVector_insert_1ev_1uint32_1CVector3DCacheField(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::Atlas::CVector3DCacheField &t = *(EarthView::World::Spatial3D::Atlas::CVector3DCacheField*) t_j;
					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector *pObjectX = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_Vector3DCacheFieldVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector *pObjectX = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_Vector3DCacheFieldVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector *pObjectX = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_Vector3DCacheFieldVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector& pObjectX = *(EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Atlas::CVector3DCacheField& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_Vector3DCacheFieldVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					const 					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector *pObjectX = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::CVector3DCacheField __values1 = pObjectX->at(n);
					EarthView::World::Spatial3D::Atlas::CVector3DCacheField *returnvalues = new EarthView::World::Spatial3D::Atlas::CVector3DCacheField(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_Vector3DCacheFieldVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector *pObjectX = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_Vector3DCacheFieldVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector *pObjectX = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_Vector3DCacheFieldVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector *pObjectX = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_Vector3DCacheFieldVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector *pObjectX = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_Vector3DCacheFieldVector_swap_1CVector3DCacheFieldVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong list_j)
				{
					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector &list = *(EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) list_j;
					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector *pObjectX = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjXXXX;
					pObjectX->swap(list);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_Vector3DCacheFieldVector_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector *pObjectX = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_Vector3DCacheFieldVector_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector *pObjectX = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjXXXX;
					pObjectX->fromXmlElement(element);
				}
			}
		}
	}
}
