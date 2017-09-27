/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/combineparttask.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				class JCCombinePartTaskProxy : public EarthView::World::Spatial2D::Controls::CCombinePartTask
				{
				 private:
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_getTaskType_void_callback;
					EarthView::World::Core::ev_string m_activate_void_callback;
					EarthView::World::Core::ev_string m_deactivate_void_callback;
					EarthView::World::Core::ev_string m_finish_void_callback;
				public:
					JCCombinePartTaskProxy(EarthView::World::Core::CNameValuePairList *pList) : CCombinePartTask(pList)
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
					void register_getTaskType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getTaskType_void_callback = __method;
					}
					void register_activate_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_activate_void_callback = __method;
					}
					void register_deactivate_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_deactivate_void_callback = __method;
					}
					void register_finish_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_finish_void_callback = __method;
					}
					virtual EarthView::World::Spatial2D::Controls::EVEditTaskType getTaskType() const
					{
						if (this->_gRef != NULL && this->m_getTaskType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getTaskType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial2D::Controls::EVEditTaskType __values1 = (EarthView::World::Spatial2D::Controls::EVEditTaskType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CCombinePartTask::getTaskType();
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
							return this->CCombinePartTask::getName();
						}
					}
					virtual void activate()
					{
						if (this->_gRef != NULL && this->m_activate_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("activate_void_callback");
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
							return this->CCombinePartTask::activate();
						}
					}
					virtual void deactivate()
					{
						if (this->_gRef != NULL && this->m_deactivate_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("deactivate_void_callback");
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
							return this->CCombinePartTask::deactivate();
						}
					}
					virtual void finish()
					{
						if (this->_gRef != NULL && this->m_finish_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("finish_void_callback");
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
							return this->CCombinePartTask::finish();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCCombinePartTaskProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_CombinePartTask_getTaskType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CCombinePartTask *pObjectX = (EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCombinePartTaskProxy))
					{
						EarthView::World::Spatial2D::Controls::EVEditTaskType __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CCombinePartTask::getTaskType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial2D::Controls::EVEditTaskType __values1 = pObjectX->getTaskType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_CombinePartTask_register_1getTaskType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCombinePartTaskProxy *pObjectX = (JCCombinePartTaskProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getTaskType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getTaskType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_CombinePartTask_getTaskType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CCombinePartTask *pObjectX = (EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::EVEditTaskType __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CCombinePartTask::getTaskType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_controls_CombinePartTask_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CCombinePartTask *pObjectX = (EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCombinePartTaskProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CCombinePartTask::getName();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_CombinePartTask_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCombinePartTaskProxy *pObjectX = (JCCombinePartTaskProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_controls_CombinePartTask_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CCombinePartTask *pObjectX = (EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CCombinePartTask::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_CombinePartTask_activate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CCombinePartTask *pObjectX = (EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCombinePartTaskProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::CCombinePartTask::activate();
					}
					else
					{
						pObjectX->activate();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_CombinePartTask_register_1activate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCombinePartTaskProxy *pObjectX = (JCCombinePartTaskProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_activate_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"activate_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_CombinePartTask_activate_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CCombinePartTask *pObjectX = (EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::CCombinePartTask::activate();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_CombinePartTask_deactivate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CCombinePartTask *pObjectX = (EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCombinePartTaskProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::CCombinePartTask::deactivate();
					}
					else
					{
						pObjectX->deactivate();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_CombinePartTask_register_1deactivate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCombinePartTaskProxy *pObjectX = (JCCombinePartTaskProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_deactivate_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"deactivate_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_CombinePartTask_deactivate_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CCombinePartTask *pObjectX = (EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::CCombinePartTask::deactivate();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_CombinePartTask_finish_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CCombinePartTask *pObjectX = (EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCombinePartTaskProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::CCombinePartTask::finish();
					}
					else
					{
						pObjectX->finish();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_CombinePartTask_register_1finish_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCombinePartTaskProxy *pObjectX = (JCCombinePartTaskProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_finish_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"finish_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_CombinePartTask_finish_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CCombinePartTask *pObjectX = (EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::CCombinePartTask::finish();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_CombinePartTask_storageChangedFeature_1ev_1int32_1IGeometry(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nID_j, jlong pGeometry_j)
				{
					ev_int32 nID = (ev_int32) nID_j;
					EarthView::World::Spatial::Geometry::IGeometry *pGeometry = (EarthView::World::Spatial::Geometry::IGeometry*) pGeometry_j;
					EarthView::World::Spatial2D::Controls::CCombinePartTask *pObjectX = (EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjXXXX;
					pObjectX->storageChangedFeature(nID, pGeometry);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_CombinePartTask_storageDeletedFeatures_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nID_j)
				{
					ev_int32 nID = (ev_int32) nID_j;
					EarthView::World::Spatial2D::Controls::CCombinePartTask *pObjectX = (EarthView::World::Spatial2D::Controls::CCombinePartTask*) pObjXXXX;
					pObjectX->storageDeletedFeatures(nID);
				}
			}
		}
	}
}
