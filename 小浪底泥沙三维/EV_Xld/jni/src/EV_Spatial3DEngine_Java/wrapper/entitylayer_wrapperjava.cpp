/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/entitylayer.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Spatial
		{
			namespace Octree
			{
			}
			namespace GeoDataset
			{
			}
		}
		namespace Geometry3D
		{
		}
		namespace Spatial3D
		{
			namespace Dataset
			{
			}
			namespace ModelManager
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				class JCModelStateListenerProxy : public EarthView::World::Spatial3D::Atlas::CModelStateListener
				{
				 private:
					EarthView::World::Core::ev_string m_modelUnLoaded_CModelBaseObject_callback;
					EarthView::World::Core::ev_string m_modelLoaded_CModelBaseObject_callback;
					EarthView::World::Core::ev_string m_modelPreAttach_CModelBaseObject_callback;
					EarthView::World::Core::ev_string m_modelAttached_CModelBaseObject_callback;
					EarthView::World::Core::ev_string m_modelDetached_CModelBaseObject_callback;
				public:
					JCModelStateListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelStateListener(pList)
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
					void register_modelUnLoaded_CModelBaseObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_modelUnLoaded_CModelBaseObject_callback = __method;
					}
					void register_modelLoaded_CModelBaseObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_modelLoaded_CModelBaseObject_callback = __method;
					}
					void register_modelPreAttach_CModelBaseObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_modelPreAttach_CModelBaseObject_callback = __method;
					}
					void register_modelAttached_CModelBaseObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_modelAttached_CModelBaseObject_callback = __method;
					}
					void register_modelDetached_CModelBaseObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_modelDetached_CModelBaseObject_callback = __method;
					}
					virtual void modelUnLoaded(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object)
					{
						if (this->_gRef != NULL && this->m_modelUnLoaded_CModelBaseObject_callback != "" && this->isCustomExtend())
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
							jlong object_j = (jlong) object;
							jmethodID __method = __gr->getMethod("modelUnLoaded_CModelBaseObject_callback");
							__env->CallVoidMethod(__obj, __method , object_j);
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
							return this->CModelStateListener::modelUnLoaded(object);
						}
					}
					virtual void modelLoaded(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object)
					{
						if (this->_gRef != NULL && this->m_modelLoaded_CModelBaseObject_callback != "" && this->isCustomExtend())
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
							jlong object_j = (jlong) object;
							jmethodID __method = __gr->getMethod("modelLoaded_CModelBaseObject_callback");
							__env->CallVoidMethod(__obj, __method , object_j);
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
							return this->CModelStateListener::modelLoaded(object);
						}
					}
					virtual void modelPreAttach(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object)
					{
						if (this->_gRef != NULL && this->m_modelPreAttach_CModelBaseObject_callback != "" && this->isCustomExtend())
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
							jlong object_j = (jlong) object;
							jmethodID __method = __gr->getMethod("modelPreAttach_CModelBaseObject_callback");
							__env->CallVoidMethod(__obj, __method , object_j);
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
							return this->CModelStateListener::modelPreAttach(object);
						}
					}
					virtual void modelAttached(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object)
					{
						if (this->_gRef != NULL && this->m_modelAttached_CModelBaseObject_callback != "" && this->isCustomExtend())
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
							jlong object_j = (jlong) object;
							jmethodID __method = __gr->getMethod("modelAttached_CModelBaseObject_callback");
							__env->CallVoidMethod(__obj, __method , object_j);
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
							return this->CModelStateListener::modelAttached(object);
						}
					}
					virtual void modelDetached(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object)
					{
						if (this->_gRef != NULL && this->m_modelDetached_CModelBaseObject_callback != "" && this->isCustomExtend())
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
							jlong object_j = (jlong) object;
							jmethodID __method = __gr->getMethod("modelDetached_CModelBaseObject_callback");
							__env->CallVoidMethod(__obj, __method , object_j);
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
							return this->CModelStateListener::modelDetached(object);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCModelStateListenerProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_ModelStateListener_modelUnLoaded_1CModelBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong object_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *object = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) object_j;
					EarthView::World::Spatial3D::Atlas::CModelStateListener *pObjectX = (EarthView::World::Spatial3D::Atlas::CModelStateListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCModelStateListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CModelStateListener::modelUnLoaded(object);
					}
					else
					{
						pObjectX->modelUnLoaded(object);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_ModelStateListener_register_1modelUnLoaded_1CModelBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCModelStateListenerProxy *pObjectX = (JCModelStateListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_modelUnLoaded_CModelBaseObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"modelUnLoaded_CModelBaseObject_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_ModelStateListener_modelUnLoaded_1CModelBaseObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong object_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *object = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) object_j;
					EarthView::World::Spatial3D::Atlas::CModelStateListener *pObjectX = (EarthView::World::Spatial3D::Atlas::CModelStateListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CModelStateListener::modelUnLoaded(object);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_ModelStateListener_modelLoaded_1CModelBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong object_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *object = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) object_j;
					EarthView::World::Spatial3D::Atlas::CModelStateListener *pObjectX = (EarthView::World::Spatial3D::Atlas::CModelStateListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCModelStateListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CModelStateListener::modelLoaded(object);
					}
					else
					{
						pObjectX->modelLoaded(object);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_ModelStateListener_register_1modelLoaded_1CModelBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCModelStateListenerProxy *pObjectX = (JCModelStateListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_modelLoaded_CModelBaseObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"modelLoaded_CModelBaseObject_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_ModelStateListener_modelLoaded_1CModelBaseObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong object_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *object = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) object_j;
					EarthView::World::Spatial3D::Atlas::CModelStateListener *pObjectX = (EarthView::World::Spatial3D::Atlas::CModelStateListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CModelStateListener::modelLoaded(object);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_ModelStateListener_modelPreAttach_1CModelBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong object_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *object = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) object_j;
					EarthView::World::Spatial3D::Atlas::CModelStateListener *pObjectX = (EarthView::World::Spatial3D::Atlas::CModelStateListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCModelStateListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CModelStateListener::modelPreAttach(object);
					}
					else
					{
						pObjectX->modelPreAttach(object);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_ModelStateListener_register_1modelPreAttach_1CModelBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCModelStateListenerProxy *pObjectX = (JCModelStateListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_modelPreAttach_CModelBaseObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"modelPreAttach_CModelBaseObject_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_ModelStateListener_modelPreAttach_1CModelBaseObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong object_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *object = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) object_j;
					EarthView::World::Spatial3D::Atlas::CModelStateListener *pObjectX = (EarthView::World::Spatial3D::Atlas::CModelStateListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CModelStateListener::modelPreAttach(object);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_ModelStateListener_modelAttached_1CModelBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong object_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *object = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) object_j;
					EarthView::World::Spatial3D::Atlas::CModelStateListener *pObjectX = (EarthView::World::Spatial3D::Atlas::CModelStateListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCModelStateListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CModelStateListener::modelAttached(object);
					}
					else
					{
						pObjectX->modelAttached(object);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_ModelStateListener_register_1modelAttached_1CModelBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCModelStateListenerProxy *pObjectX = (JCModelStateListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_modelAttached_CModelBaseObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"modelAttached_CModelBaseObject_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_ModelStateListener_modelAttached_1CModelBaseObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong object_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *object = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) object_j;
					EarthView::World::Spatial3D::Atlas::CModelStateListener *pObjectX = (EarthView::World::Spatial3D::Atlas::CModelStateListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CModelStateListener::modelAttached(object);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_ModelStateListener_modelDetached_1CModelBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong object_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *object = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) object_j;
					EarthView::World::Spatial3D::Atlas::CModelStateListener *pObjectX = (EarthView::World::Spatial3D::Atlas::CModelStateListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCModelStateListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CModelStateListener::modelDetached(object);
					}
					else
					{
						pObjectX->modelDetached(object);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_ModelStateListener_register_1modelDetached_1CModelBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCModelStateListenerProxy *pObjectX = (JCModelStateListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_modelDetached_CModelBaseObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"modelDetached_CModelBaseObject_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_ModelStateListener_modelDetached_1CModelBaseObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong object_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *object = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) object_j;
					EarthView::World::Spatial3D::Atlas::CModelStateListener *pObjectX = (EarthView::World::Spatial3D::Atlas::CModelStateListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CModelStateListener::modelDetached(object);
				}
				class JCEntityLayerProxy : public EarthView::World::Spatial3D::Atlas::CEntityLayer
				{
				 private:
					EarthView::World::Core::ev_string m_hasVisibleObject_void_callback;
					EarthView::World::Core::ev_string m_getAABBox_void_callback;
					EarthView::World::Core::ev_string m_setSelectionColour_CColourValue_callback;
					EarthView::World::Core::ev_string m_getSelectionColour_void_callback;
					EarthView::World::Core::ev_string m_isRevShadow_void_callback;
					EarthView::World::Core::ev_string m_setRevShadow_ev_bool_callback;
					EarthView::World::Core::ev_string m_isCastShadow_void_callback;
					EarthView::World::Core::ev_string m_setCastShadow_ev_bool_callback;
					EarthView::World::Core::ev_string m_setEnvParam_CColourValue_CColourValue_CColourValue_callback;
					EarthView::World::Core::ev_string m_getEnvParam_CColourValue_CColourValue_CColourValue_callback;
					EarthView::World::Core::ev_string m_setMipMap_ev_real64_callback;
					EarthView::World::Core::ev_string m_getMipMap_void_callback;
					EarthView::World::Core::ev_string m_checkSafeVisibleDistance_ev_real64_callback;
					EarthView::World::Core::ev_string m_setVisibleDistance_ev_real64_callback;
					EarthView::World::Core::ev_string m_getVisibleDistance_void_callback;
					EarthView::World::Core::ev_string m_setUnloadBufferDistance_ev_real64_callback;
					EarthView::World::Core::ev_string m_getUnloadBufferDistance_void_callback;
					EarthView::World::Core::ev_string m_setAltitudeMode_EVAltitudeMode_ev_real64_callback;
					EarthView::World::Core::ev_string m_getAltitudeMode_EVAltitudeMode_ev_real64_callback;
					EarthView::World::Core::ev_string m_isAffectByDem_void_callback;
					EarthView::World::Core::ev_string m_canEditAltitude_void_callback;
					EarthView::World::Core::ev_string m_getAltitude_CModelBaseObject_callback;
					EarthView::World::Core::ev_string m_getDem_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_getDem_CModelBaseObject_callback;
					EarthView::World::Core::ev_string m_refresh_void_callback;
					EarthView::World::Core::ev_string m_refresh_ev_uint32_callback;
					EarthView::World::Core::ev_string m_refreshPosition_CModelBaseObject_callback;
					EarthView::World::Core::ev_string m_select_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback;
					EarthView::World::Core::ev_string m_selectComponentBy_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback;
					EarthView::World::Core::ev_string m_loadVisibleObjectNodeAndMergeBoundingBox_void_callback;
					EarthView::World::Core::ev_string m_clearSubEntityVisibility_ev_uint32_callback;
					EarthView::World::Core::ev_string m_clearSubEntityVisibility_void_callback;
					EarthView::World::Core::ev_string m_setVisibilityFilter_ev_bool_IntVector_callback;
					EarthView::World::Core::ev_string m_setVisibilityFilter_ev_bool_ev_uint32_callback;
					EarthView::World::Core::ev_string m_setVisibilityFilter2_ev_bool_IntVector_callback;
					EarthView::World::Core::ev_string m_setSubEntityVisibility_ev_bool_ev_uint32_ev_uint32_callback;
					EarthView::World::Core::ev_string m_setSubEntityVisibility_ev_bool_ev_uint32_IntVector_callback;
					EarthView::World::Core::ev_string m_getVisibilityFilter_ev_bool_IntVector_callback;
					EarthView::World::Core::ev_string m_getVisibilityFilter_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getSubEntityVisibility_ev_uint32_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getSubEntityVisibility_ev_uint32_ev_bool_IntVector_callback;
					EarthView::World::Core::ev_string m_getVisibleObject_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getAllObjectIDs_void_callback;
					EarthView::World::Core::ev_string m_getGotoParam_ev_real64_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_getGotoParam_ev_uint32_ev_real64_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_applyModelEnvMapTexture_ev_uint32_callback;
					EarthView::World::Core::ev_string m_cancelModelEnvMapTexture_ev_uint32_callback;
					EarthView::World::Core::ev_string m_setMaxEnvMapObjectCount_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getMaxEnvMapObjectCount_void_callback;
					EarthView::World::Core::ev_string m_allowApplyEnvMap_void_callback;
					EarthView::World::Core::ev_string m_applyEnvMapTexture_void_callback;
					EarthView::World::Core::ev_string m_cancelEnvMapTexture_void_callback;
					EarthView::World::Core::ev_string m_stopRender_ev_bool_callback;
					EarthView::World::Core::ev_string m_startRender_void_callback;
					EarthView::World::Core::ev_string m_isLoadModelNode_void_callback;
					EarthView::World::Core::ev_string m_setLoadModelNode_ev_bool_callback;
					EarthView::World::Core::ev_string m__notifyModelLoaded_CModelBaseObject_callback;
					EarthView::World::Core::ev_string m__notifyModelUnLoaded_CModelBaseObject_callback;
					EarthView::World::Core::ev_string m__notifyModelPreAttach_CModelBaseObject_callback;
					EarthView::World::Core::ev_string m__notifyModelAttached_CModelBaseObject_callback;
					EarthView::World::Core::ev_string m__notifyModelDetached_CModelBaseObject_callback;
					EarthView::World::Core::ev_string m_getVisibleObjectPtr_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getVisibleObjectPtr_CMovableObject_callback;
					EarthView::World::Core::ev_string m_getVisibleObjectPtr_IFeature_callback;
					EarthView::World::Core::ev_string m_createVisibleObjectPtr_IFeature_callback;
					EarthView::World::Core::ev_string m_getSceneName_void_callback;
					EarthView::World::Core::ev_string m_getMinX_void_callback;
					EarthView::World::Core::ev_string m_getMaxX_void_callback;
					EarthView::World::Core::ev_string m_getMinY_void_callback;
					EarthView::World::Core::ev_string m_getMaxY_void_callback;
					EarthView::World::Core::ev_string m_getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32_callback;
					EarthView::World::Core::ev_string m__notifyLayerAdd_CSceneManager_callback;
					EarthView::World::Core::ev_string m__notifyLayerRemoved_CSceneManager_callback;
					EarthView::World::Core::ev_string m__notifyRefreshed_CCamera_LayerRefreshFactor_callback;
					EarthView::World::Core::ev_string m__notifyRefreshed_CCamera_callback;
					EarthView::World::Core::ev_string m__notifyDataChanged_EVString_EVString_CEvent_callback;
					EarthView::World::Core::ev_string m_getSceneManager_void_callback;
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_getDataset_void_callback;
					EarthView::World::Core::ev_string m_getDatasetName_void_callback;
					EarthView::World::Core::ev_string m_getDataSource_void_callback;
					EarthView::World::Core::ev_string m_select_IQueryFilter_EVSelectionResultType_callback;
					EarthView::World::Core::ev_string m_clearSelection_void_callback;
					EarthView::World::Core::ev_string m_setLayerSelection_ILayerSelection_callback;
					EarthView::World::Core::ev_string m_getLayerSelection_void_callback;
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_setName_EVString_callback;
					EarthView::World::Core::ev_string m_getDescription_void_callback;
					EarthView::World::Core::ev_string m_setDescription_EVString_callback;
					EarthView::World::Core::ev_string m_canEdit_void_callback;
					EarthView::World::Core::ev_string m_setCanEdit_ev_bool_callback;
					EarthView::World::Core::ev_string m_isEditing_void_callback;
					EarthView::World::Core::ev_string m_setEditing_ev_bool_callback;
					EarthView::World::Core::ev_string m_isVisible_void_callback;
					EarthView::World::Core::ev_string m_setVisible_ev_bool_callback;
					EarthView::World::Core::ev_string m_isValid_void_callback;
					EarthView::World::Core::ev_string m_isSelectable_void_callback;
					EarthView::World::Core::ev_string m_setSelectable_ev_bool_callback;
					EarthView::World::Core::ev_string m_ignoreScale_void_callback;
					EarthView::World::Core::ev_string m_setIgnoreScale_ev_bool_callback;
					EarthView::World::Core::ev_string m_getDisplayMaxScale_void_callback;
					EarthView::World::Core::ev_string m_setDisplayMaxScale_ev_real64_callback;
					EarthView::World::Core::ev_string m_getDisplayMinScale_void_callback;
					EarthView::World::Core::ev_string m_setDisplayMinScale_ev_real64_callback;
					EarthView::World::Core::ev_string m_getSpatialReference_void_callback;
					EarthView::World::Core::ev_string m_setSpatialReference_ISpatialReference_callback;
					EarthView::World::Core::ev_string m_setTransparentValue_ev_uint8_callback;
					EarthView::World::Core::ev_string m_getTransparentValue_void_callback;
					EarthView::World::Core::ev_string m_getExtent_void_callback;
					EarthView::World::Core::ev_string m_draw_ISpatialDisplay_EVVectorLayerRendererType_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
					EarthView::World::Core::ev_string m_toStream_CDataStream_callback;
					EarthView::World::Core::ev_string m_toXML_void_callback;
					EarthView::World::Core::ev_string m_fromXmlElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_toXmlElement_void_callback;
					EarthView::World::Core::ev_string m_fromStream_CDataStream_callback;
				public:
					JCEntityLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CEntityLayer(pList)
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
					void register_hasVisibleObject_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_hasVisibleObject_void_callback = __method;
					}
					void register_getAABBox_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getAABBox_void_callback = __method;
					}
					void register_setSelectionColour_CColourValue_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSelectionColour_CColourValue_callback = __method;
					}
					void register_getSelectionColour_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSelectionColour_void_callback = __method;
					}
					void register_isRevShadow_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isRevShadow_void_callback = __method;
					}
					void register_setRevShadow_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setRevShadow_ev_bool_callback = __method;
					}
					void register_isCastShadow_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isCastShadow_void_callback = __method;
					}
					void register_setCastShadow_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setCastShadow_ev_bool_callback = __method;
					}
					void register_setEnvParam_CColourValue_CColourValue_CColourValue_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setEnvParam_CColourValue_CColourValue_CColourValue_callback = __method;
					}
					void register_getEnvParam_CColourValue_CColourValue_CColourValue_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getEnvParam_CColourValue_CColourValue_CColourValue_callback = __method;
					}
					void register_setMipMap_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setMipMap_ev_real64_callback = __method;
					}
					void register_getMipMap_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMipMap_void_callback = __method;
					}
					void register_checkSafeVisibleDistance_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_checkSafeVisibleDistance_ev_real64_callback = __method;
					}
					void register_setVisibleDistance_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setVisibleDistance_ev_real64_callback = __method;
					}
					void register_getVisibleDistance_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getVisibleDistance_void_callback = __method;
					}
					void register_setUnloadBufferDistance_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setUnloadBufferDistance_ev_real64_callback = __method;
					}
					void register_getUnloadBufferDistance_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getUnloadBufferDistance_void_callback = __method;
					}
					void register_setAltitudeMode_EVAltitudeMode_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setAltitudeMode_EVAltitudeMode_ev_real64_callback = __method;
					}
					void register_getAltitudeMode_EVAltitudeMode_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getAltitudeMode_EVAltitudeMode_ev_real64_callback = __method;
					}
					void register_isAffectByDem_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isAffectByDem_void_callback = __method;
					}
					void register_canEditAltitude_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_canEditAltitude_void_callback = __method;
					}
					void register_getAltitude_CModelBaseObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getAltitude_CModelBaseObject_callback = __method;
					}
					void register_getDem_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDem_ev_real64_ev_real64_callback = __method;
					}
					void register_getDem_CModelBaseObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDem_CModelBaseObject_callback = __method;
					}
					void register_refresh_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_refresh_void_callback = __method;
					}
					void register_refresh_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_refresh_ev_uint32_callback = __method;
					}
					void register_refreshPosition_CModelBaseObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_refreshPosition_CModelBaseObject_callback = __method;
					}
					void register_select_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_select_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback = __method;
					}
					void register_selectComponentBy_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_selectComponentBy_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback = __method;
					}
					void register_loadVisibleObjectNodeAndMergeBoundingBox_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_loadVisibleObjectNodeAndMergeBoundingBox_void_callback = __method;
					}
					void register_clearSubEntityVisibility_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_clearSubEntityVisibility_ev_uint32_callback = __method;
					}
					void register_clearSubEntityVisibility_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_clearSubEntityVisibility_void_callback = __method;
					}
					void register_setVisibilityFilter_ev_bool_IntVector_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setVisibilityFilter_ev_bool_IntVector_callback = __method;
					}
					void register_setVisibilityFilter_ev_bool_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setVisibilityFilter_ev_bool_ev_uint32_callback = __method;
					}
					void register_setVisibilityFilter2_ev_bool_IntVector_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setVisibilityFilter2_ev_bool_IntVector_callback = __method;
					}
					void register_setSubEntityVisibility_ev_bool_ev_uint32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSubEntityVisibility_ev_bool_ev_uint32_ev_uint32_callback = __method;
					}
					void register_setSubEntityVisibility_ev_bool_ev_uint32_IntVector_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSubEntityVisibility_ev_bool_ev_uint32_IntVector_callback = __method;
					}
					void register_getVisibilityFilter_ev_bool_IntVector_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getVisibilityFilter_ev_bool_IntVector_callback = __method;
					}
					void register_getVisibilityFilter_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getVisibilityFilter_ev_uint32_callback = __method;
					}
					void register_getSubEntityVisibility_ev_uint32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSubEntityVisibility_ev_uint32_ev_uint32_callback = __method;
					}
					void register_getSubEntityVisibility_ev_uint32_ev_bool_IntVector_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSubEntityVisibility_ev_uint32_ev_bool_IntVector_callback = __method;
					}
					void register_getVisibleObject_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getVisibleObject_ev_uint32_callback = __method;
					}
					void register_getAllObjectIDs_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getAllObjectIDs_void_callback = __method;
					}
					void register_getGotoParam_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getGotoParam_ev_real64_ev_real64_ev_real64_callback = __method;
					}
					void register_getGotoParam_ev_uint32_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getGotoParam_ev_uint32_ev_real64_ev_real64_ev_real64_callback = __method;
					}
					void register_applyModelEnvMapTexture_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_applyModelEnvMapTexture_ev_uint32_callback = __method;
					}
					void register_cancelModelEnvMapTexture_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_cancelModelEnvMapTexture_ev_uint32_callback = __method;
					}
					void register_setMaxEnvMapObjectCount_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setMaxEnvMapObjectCount_ev_uint32_callback = __method;
					}
					void register_getMaxEnvMapObjectCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMaxEnvMapObjectCount_void_callback = __method;
					}
					void register_allowApplyEnvMap_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_allowApplyEnvMap_void_callback = __method;
					}
					void register_applyEnvMapTexture_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_applyEnvMapTexture_void_callback = __method;
					}
					void register_cancelEnvMapTexture_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_cancelEnvMapTexture_void_callback = __method;
					}
					void register_stopRender_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_stopRender_ev_bool_callback = __method;
					}
					void register_startRender_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_startRender_void_callback = __method;
					}
					void register_isLoadModelNode_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isLoadModelNode_void_callback = __method;
					}
					void register_setLoadModelNode_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setLoadModelNode_ev_bool_callback = __method;
					}
					void register__notifyModelLoaded_CModelBaseObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__notifyModelLoaded_CModelBaseObject_callback = __method;
					}
					void register__notifyModelUnLoaded_CModelBaseObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__notifyModelUnLoaded_CModelBaseObject_callback = __method;
					}
					void register__notifyModelPreAttach_CModelBaseObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__notifyModelPreAttach_CModelBaseObject_callback = __method;
					}
					void register__notifyModelAttached_CModelBaseObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__notifyModelAttached_CModelBaseObject_callback = __method;
					}
					void register__notifyModelDetached_CModelBaseObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__notifyModelDetached_CModelBaseObject_callback = __method;
					}
					void register_getVisibleObjectPtr_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getVisibleObjectPtr_ev_uint32_callback = __method;
					}
					void register_getVisibleObjectPtr_CMovableObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getVisibleObjectPtr_CMovableObject_callback = __method;
					}
					void register_getVisibleObjectPtr_IFeature_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getVisibleObjectPtr_IFeature_callback = __method;
					}
					void register_createVisibleObjectPtr_IFeature_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createVisibleObjectPtr_IFeature_callback = __method;
					}
					void register_getSceneName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSceneName_void_callback = __method;
					}
					void register_getMinX_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMinX_void_callback = __method;
					}
					void register_getMaxX_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMaxX_void_callback = __method;
					}
					void register_getMinY_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMinY_void_callback = __method;
					}
					void register_getMaxY_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMaxY_void_callback = __method;
					}
					void register_getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32_callback = __method;
					}
					void register__notifyLayerAdd_CSceneManager_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__notifyLayerAdd_CSceneManager_callback = __method;
					}
					void register__notifyLayerRemoved_CSceneManager_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__notifyLayerRemoved_CSceneManager_callback = __method;
					}
					void register__notifyRefreshed_CCamera_LayerRefreshFactor_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__notifyRefreshed_CCamera_LayerRefreshFactor_callback = __method;
					}
					void register__notifyRefreshed_CCamera_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__notifyRefreshed_CCamera_callback = __method;
					}
					void register__notifyDataChanged_EVString_EVString_CEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__notifyDataChanged_EVString_EVString_CEvent_callback = __method;
					}
					void register_getSceneManager_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSceneManager_void_callback = __method;
					}
					void register_getType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getType_void_callback = __method;
					}
					void register_getDataset_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDataset_void_callback = __method;
					}
					void register_getDatasetName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDatasetName_void_callback = __method;
					}
					void register_getDataSource_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDataSource_void_callback = __method;
					}
					void register_select_IQueryFilter_EVSelectionResultType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_select_IQueryFilter_EVSelectionResultType_callback = __method;
					}
					void register_clearSelection_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_clearSelection_void_callback = __method;
					}
					void register_setLayerSelection_ILayerSelection_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setLayerSelection_ILayerSelection_callback = __method;
					}
					void register_getLayerSelection_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getLayerSelection_void_callback = __method;
					}
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_setName_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setName_EVString_callback = __method;
					}
					void register_getDescription_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDescription_void_callback = __method;
					}
					void register_setDescription_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDescription_EVString_callback = __method;
					}
					void register_canEdit_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_canEdit_void_callback = __method;
					}
					void register_setCanEdit_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setCanEdit_ev_bool_callback = __method;
					}
					void register_isEditing_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isEditing_void_callback = __method;
					}
					void register_setEditing_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setEditing_ev_bool_callback = __method;
					}
					void register_isVisible_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isVisible_void_callback = __method;
					}
					void register_setVisible_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setVisible_ev_bool_callback = __method;
					}
					void register_isValid_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isValid_void_callback = __method;
					}
					void register_isSelectable_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isSelectable_void_callback = __method;
					}
					void register_setSelectable_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSelectable_ev_bool_callback = __method;
					}
					void register_ignoreScale_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ignoreScale_void_callback = __method;
					}
					void register_setIgnoreScale_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setIgnoreScale_ev_bool_callback = __method;
					}
					void register_getDisplayMaxScale_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDisplayMaxScale_void_callback = __method;
					}
					void register_setDisplayMaxScale_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDisplayMaxScale_ev_real64_callback = __method;
					}
					void register_getDisplayMinScale_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDisplayMinScale_void_callback = __method;
					}
					void register_setDisplayMinScale_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDisplayMinScale_ev_real64_callback = __method;
					}
					void register_getSpatialReference_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSpatialReference_void_callback = __method;
					}
					void register_setSpatialReference_ISpatialReference_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSpatialReference_ISpatialReference_callback = __method;
					}
					void register_setTransparentValue_ev_uint8_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setTransparentValue_ev_uint8_callback = __method;
					}
					void register_getTransparentValue_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getTransparentValue_void_callback = __method;
					}
					void register_getExtent_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getExtent_void_callback = __method;
					}
					void register_draw_ISpatialDisplay_EVVectorLayerRendererType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_draw_ISpatialDisplay_EVVectorLayerRendererType_callback = __method;
					}
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					void register_toStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toStream_CDataStream_callback = __method;
					}
					void register_toXML_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toXML_void_callback = __method;
					}
					void register_fromXmlElement_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromXmlElement_CXmlElement_callback = __method;
					}
					void register_toXmlElement_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toXmlElement_void_callback = __method;
					}
					void register_fromStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromStream_CDataStream_callback = __method;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
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
							EarthView::World::Spatial::Atlas::EVLayerType __values1 = (EarthView::World::Spatial::Atlas::EVLayerType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::getType();
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if (this->_gRef != NULL && this->m_getDataset_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getDataset_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::IDataset *__values1 = (EarthView::World::Spatial::GeoDataset::IDataset*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::getDataset();
						}
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("ev_clone_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Atlas::ILayer *__values1 = (EarthView::World::Spatial::Atlas::ILayer*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::clone();
						}
					}
					virtual ev_bool hasVisibleObject()
					{
						if (this->_gRef != NULL && this->m_hasVisibleObject_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("hasVisibleObject_void_callback");
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
							return this->CEntityLayer::hasVisibleObject();
						}
					}
					virtual ev_bool canEdit() const
					{
						if (this->_gRef != NULL && this->m_canEdit_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("canEdit_void_callback");
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
							return this->CEntityLayer::canEdit();
						}
					}
					virtual void setCanEdit(ev_bool can)
					{
						if (this->_gRef != NULL && this->m_setCanEdit_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean can_j = (jboolean) can;
							jmethodID __method = __gr->getMethod("setCanEdit_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , can_j);
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
							return this->CEntityLayer::setCanEdit(can);
						}
					}
					virtual ev_bool isEditing() const
					{
						if (this->_gRef != NULL && this->m_isEditing_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isEditing_void_callback");
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
							return this->CEntityLayer::isEditing();
						}
					}
					virtual void setEditing(ev_bool editing)
					{
						if (this->_gRef != NULL && this->m_setEditing_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean editing_j = (jboolean) editing;
							jmethodID __method = __gr->getMethod("setEditing_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , editing_j);
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
							return this->CEntityLayer::setEditing(editing);
						}
					}
					virtual ev_bool isVisible() const
					{
						if (this->_gRef != NULL && this->m_isVisible_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isVisible_void_callback");
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
							return this->CEntityLayer::isVisible();
						}
					}
					virtual void setVisible(ev_bool visible)
					{
						if (this->_gRef != NULL && this->m_setVisible_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean visible_j = (jboolean) visible;
							jmethodID __method = __gr->getMethod("setVisible_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , visible_j);
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
							return this->CEntityLayer::setVisible(visible);
						}
					}
					virtual ev_bool isValid() const
					{
						if (this->_gRef != NULL && this->m_isValid_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isValid_void_callback");
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
							return this->CEntityLayer::isValid();
						}
					}
					virtual EarthView::World::Spatial::Math::CAxisAlignedBox getAABBox()
					{
						if (this->_gRef != NULL && this->m_getAABBox_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getAABBox_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Math::CAxisAlignedBox __values1 = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::getAABBox();
						}
					}
					virtual ev_bool isSelectable() const
					{
						if (this->_gRef != NULL && this->m_isSelectable_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isSelectable_void_callback");
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
							return this->CEntityLayer::isSelectable();
						}
					}
					virtual void setSelectable(ev_bool selectable)
					{
						if (this->_gRef != NULL && this->m_setSelectable_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean selectable_j = (jboolean) selectable;
							jmethodID __method = __gr->getMethod("setSelectable_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , selectable_j);
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
							return this->CEntityLayer::setSelectable(selectable);
						}
					}
					virtual void setSelectionColour(const EarthView::World::Graphic::CColourValue& colour)
					{
						if (this->_gRef != NULL && this->m_setSelectionColour_CColourValue_callback != "" && this->isCustomExtend())
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
							jlong colour_j = (jlong) &colour;
							jmethodID __method = __gr->getMethod("setSelectionColour_CColourValue_callback");
							__env->CallVoidMethod(__obj, __method , colour_j);
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
							return this->CEntityLayer::setSelectionColour(colour);
						}
					}
					virtual EarthView::World::Graphic::CColourValue getSelectionColour()
					{
						if (this->_gRef != NULL && this->m_getSelectionColour_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSelectionColour_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CColourValue __values1 = *(EarthView::World::Graphic::CColourValue*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::getSelectionColour();
						}
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if (this->_gRef != NULL && this->m_getTransparentValue_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getTransparentValue_void_callback");
							jshort __values1_j = (jshort)__env->CallShortMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_uint8 __values1 = (ev_uint8) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::getTransparentValue();
						}
					}
					virtual void setTransparentValue(ev_uint8 transparent)
					{
						if (this->_gRef != NULL && this->m_setTransparentValue_ev_uint8_callback != "" && this->isCustomExtend())
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
							jshort transparent_j = (jshort) transparent;
							jmethodID __method = __gr->getMethod("setTransparentValue_ev_uint8_callback");
							__env->CallVoidMethod(__obj, __method , transparent_j);
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
							return this->CEntityLayer::setTransparentValue(transparent);
						}
					}
					virtual ev_bool isRevShadow()
					{
						if (this->_gRef != NULL && this->m_isRevShadow_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isRevShadow_void_callback");
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
							return this->CEntityLayer::isRevShadow();
						}
					}
					virtual void setRevShadow(ev_bool revShadow)
					{
						if (this->_gRef != NULL && this->m_setRevShadow_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean revShadow_j = (jboolean) revShadow;
							jmethodID __method = __gr->getMethod("setRevShadow_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , revShadow_j);
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
							return this->CEntityLayer::setRevShadow(revShadow);
						}
					}
					virtual ev_bool isCastShadow()
					{
						if (this->_gRef != NULL && this->m_isCastShadow_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isCastShadow_void_callback");
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
							return this->CEntityLayer::isCastShadow();
						}
					}
					virtual void setCastShadow(ev_bool castShadow)
					{
						if (this->_gRef != NULL && this->m_setCastShadow_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean castShadow_j = (jboolean) castShadow;
							jmethodID __method = __gr->getMethod("setCastShadow_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , castShadow_j);
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
							return this->CEntityLayer::setCastShadow(castShadow);
						}
					}
					virtual void setEnvParam(EarthView::World::Graphic::CColourValue& ambient, EarthView::World::Graphic::CColourValue& diffuse, EarthView::World::Graphic::CColourValue& specular)
					{
						if (this->_gRef != NULL && this->m_setEnvParam_CColourValue_CColourValue_CColourValue_callback != "" && this->isCustomExtend())
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
							jlong ambient_j = (jlong) &ambient;
							jlong diffuse_j = (jlong) &diffuse;
							jlong specular_j = (jlong) &specular;
							jmethodID __method = __gr->getMethod("setEnvParam_CColourValue_CColourValue_CColourValue_callback");
							__env->CallVoidMethod(__obj, __method , ambient_j, diffuse_j, specular_j);
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
							return this->CEntityLayer::setEnvParam(ambient, diffuse, specular);
						}
					}
					virtual void getEnvParam(EarthView::World::Graphic::CColourValue& ambient, EarthView::World::Graphic::CColourValue& diffuse, EarthView::World::Graphic::CColourValue& specular)
					{
						if (this->_gRef != NULL && this->m_getEnvParam_CColourValue_CColourValue_CColourValue_callback != "" && this->isCustomExtend())
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
							jlong ambient_j = (jlong) &ambient;
							jlong diffuse_j = (jlong) &diffuse;
							jlong specular_j = (jlong) &specular;
							jmethodID __method = __gr->getMethod("getEnvParam_CColourValue_CColourValue_CColourValue_callback");
							__env->CallVoidMethod(__obj, __method , ambient_j, diffuse_j, specular_j);
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
							return this->CEntityLayer::getEnvParam(ambient, diffuse, specular);
						}
					}
					virtual void setMipMap(ev_real64 modelMipMap)
					{
						if (this->_gRef != NULL && this->m_setMipMap_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble modelMipMap_j = (jdouble) modelMipMap;
							jmethodID __method = __gr->getMethod("setMipMap_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , modelMipMap_j);
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
							return this->CEntityLayer::setMipMap(modelMipMap);
						}
					}
					virtual ev_real64 getMipMap()
					{
						if (this->_gRef != NULL && this->m_getMipMap_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMipMap_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::getMipMap();
						}
					}
					virtual ev_bool checkSafeVisibleDistance(ev_real64 distance)
					{
						if (this->_gRef != NULL && this->m_checkSafeVisibleDistance_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble distance_j = (jdouble) distance;
							jmethodID __method = __gr->getMethod("checkSafeVisibleDistance_ev_real64_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , distance_j);
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
							return this->CEntityLayer::checkSafeVisibleDistance(distance);
						}
					}
					virtual void setVisibleDistance(ev_real64 distance)
					{
						if (this->_gRef != NULL && this->m_setVisibleDistance_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble distance_j = (jdouble) distance;
							jmethodID __method = __gr->getMethod("setVisibleDistance_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , distance_j);
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
							return this->CEntityLayer::setVisibleDistance(distance);
						}
					}
					virtual ev_real64 getVisibleDistance()
					{
						if (this->_gRef != NULL && this->m_getVisibleDistance_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getVisibleDistance_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::getVisibleDistance();
						}
					}
					virtual void setUnloadBufferDistance(ev_real64 distance)
					{
						if (this->_gRef != NULL && this->m_setUnloadBufferDistance_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble distance_j = (jdouble) distance;
							jmethodID __method = __gr->getMethod("setUnloadBufferDistance_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , distance_j);
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
							return this->CEntityLayer::setUnloadBufferDistance(distance);
						}
					}
					virtual ev_real64 getUnloadBufferDistance()
					{
						if (this->_gRef != NULL && this->m_getUnloadBufferDistance_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getUnloadBufferDistance_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::getUnloadBufferDistance();
						}
					}
					virtual void setAltitudeMode(EarthView::World::Spatial::Utility::EVAltitudeMode altitudeMode, ev_real64 altitudeValue)
					{
						if (this->_gRef != NULL && this->m_setAltitudeMode_EVAltitudeMode_ev_real64_callback != "" && this->isCustomExtend())
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
							jint altitudeMode_j = (jint) altitudeMode;
							jdouble altitudeValue_j = (jdouble) altitudeValue;
							jmethodID __method = __gr->getMethod("setAltitudeMode_EVAltitudeMode_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , altitudeMode_j, altitudeValue_j);
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
							return this->CEntityLayer::setAltitudeMode(altitudeMode, altitudeValue);
						}
					}
					virtual void getAltitudeMode(EarthView::World::Spatial::Utility::EVAltitudeMode& altitudeMode, ev_real64& altitudeValue)
					{
						if (this->_gRef != NULL && this->m_getAltitudeMode_EVAltitudeMode_ev_real64_callback != "" && this->isCustomExtend())
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
							jlong altitudeMode_j = (jlong) &altitudeMode;
							jlong altitudeValue_j = (jlong) &altitudeValue;
							jmethodID __method = __gr->getMethod("getAltitudeMode_EVAltitudeMode_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , altitudeMode_j, altitudeValue_j);
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
							return this->CEntityLayer::getAltitudeMode(altitudeMode, altitudeValue);
						}
					}
					virtual ev_bool isAffectByDem()
					{
						if (this->_gRef != NULL && this->m_isAffectByDem_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isAffectByDem_void_callback");
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
							return this->CEntityLayer::isAffectByDem();
						}
					}
					virtual ev_bool canEditAltitude()
					{
						if (this->_gRef != NULL && this->m_canEditAltitude_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("canEditAltitude_void_callback");
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
							return this->CEntityLayer::canEditAltitude();
						}
					}
					virtual ev_real64 getAltitude(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel)
					{
						if (this->_gRef != NULL && this->m_getAltitude_CModelBaseObject_callback != "" && this->isCustomExtend())
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
							jlong pModel_j = (jlong) pModel;
							jmethodID __method = __gr->getMethod("getAltitude_CModelBaseObject_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , pModel_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::getAltitude(pModel);
						}
					}
					virtual ev_real64 getDem(ev_real64 latitude, ev_real64 longitude)
					{
						if (this->_gRef != NULL && this->m_getDem_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble latitude_j = (jdouble) latitude;
							jdouble longitude_j = (jdouble) longitude;
							jmethodID __method = __gr->getMethod("getDem_ev_real64_ev_real64_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , latitude_j, longitude_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::getDem(latitude, longitude);
						}
					}
					virtual ev_real64 getDem(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel)
					{
						if (this->_gRef != NULL && this->m_getDem_CModelBaseObject_callback != "" && this->isCustomExtend())
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
							jlong pModel_j = (jlong) pModel;
							jmethodID __method = __gr->getMethod("getDem_CModelBaseObject_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , pModel_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::getDem(pModel);
						}
					}
					virtual ev_bool refresh()
					{
						if (this->_gRef != NULL && this->m_refresh_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("refresh_void_callback");
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
							return this->CEntityLayer::refresh();
						}
					}
					virtual ev_bool refresh(ev_uint32 id)
					{
						if (this->_gRef != NULL && this->m_refresh_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong id_j = (jlong) id;
							jmethodID __method = __gr->getMethod("refresh_ev_uint32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , id_j);
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
							return this->CEntityLayer::refresh(id);
						}
					}
					virtual void refreshPosition(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel)
					{
						if (this->_gRef != NULL && this->m_refreshPosition_CModelBaseObject_callback != "" && this->isCustomExtend())
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
							jlong pModel_j = (jlong) pModel;
							jmethodID __method = __gr->getMethod("refreshPosition_CModelBaseObject_callback");
							__env->CallVoidMethod(__obj, __method , pModel_j);
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
							return this->CEntityLayer::refreshPosition(pModel);
						}
					}
					virtual void select(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if (this->_gRef != NULL && this->m_select_IQueryFilter_EVSelectionResultType_callback != "" && this->isCustomExtend())
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
							jlong filter_j = (jlong) filter;
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("select_IQueryFilter_EVSelectionResultType_callback");
							__env->CallVoidMethod(__obj, __method , filter_j, type_j);
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
							return this->CEntityLayer::select(filter, type);
						}
					}
					virtual EarthView::World::Graphic::CMovableObject* select(EarthView::World::Spatial::Math::CRay ray, Real& hitDistance, ev_int32& objIndex, ev_int32& submeshIndex, ev_int32& instanceIndex, ev_int32& segmentIndex, EarthView::World::Spatial::Math::CVector3& point)
					{
						if (this->_gRef != NULL && this->m_select_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback != "" && this->isCustomExtend())
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
							jlong ray_j = (jlong) &ray;
							jlong hitDistance_j = (jlong) &hitDistance;
							jlong objIndex_j = (jlong) &objIndex;
							jlong submeshIndex_j = (jlong) &submeshIndex;
							jlong instanceIndex_j = (jlong) &instanceIndex;
							jlong segmentIndex_j = (jlong) &segmentIndex;
							jlong point_j = (jlong) &point;
							jmethodID __method = __gr->getMethod("select_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , ray_j, hitDistance_j, objIndex_j, submeshIndex_j, instanceIndex_j, segmentIndex_j, point_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CMovableObject *__values1 = (EarthView::World::Graphic::CMovableObject*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::select(ray, hitDistance, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
						}
					}
					virtual EarthView::World::Graphic::CMovableObject* selectComponentBy(EarthView::World::Spatial::Math::CRay ray, Real& hitDistance, ev_int32& objIndex, ev_int32& submeshIndex, ev_int32& instanceIndex, ev_int32& segmentIndex, EarthView::World::Spatial::Math::CVector3& point)
					{
						if (this->_gRef != NULL && this->m_selectComponentBy_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback != "" && this->isCustomExtend())
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
							jlong ray_j = (jlong) &ray;
							jlong hitDistance_j = (jlong) &hitDistance;
							jlong objIndex_j = (jlong) &objIndex;
							jlong submeshIndex_j = (jlong) &submeshIndex;
							jlong instanceIndex_j = (jlong) &instanceIndex;
							jlong segmentIndex_j = (jlong) &segmentIndex;
							jlong point_j = (jlong) &point;
							jmethodID __method = __gr->getMethod("selectComponentBy_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , ray_j, hitDistance_j, objIndex_j, submeshIndex_j, instanceIndex_j, segmentIndex_j, point_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CMovableObject *__values1 = (EarthView::World::Graphic::CMovableObject*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::selectComponentBy(ray, hitDistance, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
						}
					}
					virtual void loadVisibleObjectNodeAndMergeBoundingBox()
					{
						if (this->_gRef != NULL && this->m_loadVisibleObjectNodeAndMergeBoundingBox_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("loadVisibleObjectNodeAndMergeBoundingBox_void_callback");
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
							return this->CEntityLayer::loadVisibleObjectNodeAndMergeBoundingBox();
						}
					}
					virtual void clearSelection()
					{
						if (this->_gRef != NULL && this->m_clearSelection_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("clearSelection_void_callback");
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
							return this->CEntityLayer::clearSelection();
						}
					}
					virtual void clearSubEntityVisibility(ev_uint32 id)
					{
						if (this->_gRef != NULL && this->m_clearSubEntityVisibility_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong id_j = (jlong) id;
							jmethodID __method = __gr->getMethod("clearSubEntityVisibility_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , id_j);
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
							return this->CEntityLayer::clearSubEntityVisibility(id);
						}
					}
					virtual void clearSubEntityVisibility()
					{
						if (this->_gRef != NULL && this->m_clearSubEntityVisibility_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("clearSubEntityVisibility_void_callback");
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
							return this->CEntityLayer::clearSubEntityVisibility();
						}
					}
					virtual void setLayerSelection(EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if (this->_gRef != NULL && this->m_setLayerSelection_ILayerSelection_callback != "" && this->isCustomExtend())
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
							jlong selection_j = (jlong) selection;
							jmethodID __method = __gr->getMethod("setLayerSelection_ILayerSelection_callback");
							__env->CallVoidMethod(__obj, __method , selection_j);
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
							return this->CEntityLayer::setLayerSelection(selection);
						}
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if (this->_gRef != NULL && this->m_getLayerSelection_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getLayerSelection_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Atlas::ILayerSelection *__values1 = (EarthView::World::Spatial::Atlas::ILayerSelection*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::getLayerSelection();
						}
					}
					virtual ev_bool setVisibilityFilter(ev_bool visible, const EarthView::World::Core::IntVector& ids)
					{
						if (this->_gRef != NULL && this->m_setVisibilityFilter_ev_bool_IntVector_callback != "" && this->isCustomExtend())
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
							jboolean visible_j = (jboolean) visible;
							jlong ids_j = (jlong) &ids;
							jmethodID __method = __gr->getMethod("setVisibilityFilter_ev_bool_IntVector_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , visible_j, ids_j);
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
							return this->CEntityLayer::setVisibilityFilter(visible, ids);
						}
					}
					virtual ev_bool setVisibilityFilter(ev_bool visible, ev_uint32 id)
					{
						if (this->_gRef != NULL && this->m_setVisibilityFilter_ev_bool_ev_uint32_callback != "" && this->isCustomExtend())
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
							jboolean visible_j = (jboolean) visible;
							jlong id_j = (jlong) id;
							jmethodID __method = __gr->getMethod("setVisibilityFilter_ev_bool_ev_uint32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , visible_j, id_j);
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
							return this->CEntityLayer::setVisibilityFilter(visible, id);
						}
					}
					virtual ev_bool setVisibilityFilter2(ev_bool visible, const EarthView::World::Core::IntVector& ids)
					{
						if (this->_gRef != NULL && this->m_setVisibilityFilter2_ev_bool_IntVector_callback != "" && this->isCustomExtend())
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
							jboolean visible_j = (jboolean) visible;
							jlong ids_j = (jlong) &ids;
							jmethodID __method = __gr->getMethod("setVisibilityFilter2_ev_bool_IntVector_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , visible_j, ids_j);
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
							return this->CEntityLayer::setVisibilityFilter2(visible, ids);
						}
					}
					virtual ev_bool setSubEntityVisibility(ev_bool visible, ev_uint32 id, const ev_uint32& subEntityIndex)
					{
						if (this->_gRef != NULL && this->m_setSubEntityVisibility_ev_bool_ev_uint32_ev_uint32_callback != "" && this->isCustomExtend())
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
							jboolean visible_j = (jboolean) visible;
							jlong id_j = (jlong) id;
							jlong subEntityIndex_j = (jlong) subEntityIndex;
							jmethodID __method = __gr->getMethod("setSubEntityVisibility_ev_bool_ev_uint32_ev_uint32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , visible_j, id_j, subEntityIndex_j);
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
							return this->CEntityLayer::setSubEntityVisibility(visible, id, subEntityIndex);
						}
					}
					virtual ev_bool setSubEntityVisibility(ev_bool visible, ev_uint32 id, const EarthView::World::Core::IntVector& subEntityIndexVector)
					{
						if (this->_gRef != NULL && this->m_setSubEntityVisibility_ev_bool_ev_uint32_IntVector_callback != "" && this->isCustomExtend())
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
							jboolean visible_j = (jboolean) visible;
							jlong id_j = (jlong) id;
							jlong subEntityIndexVector_j = (jlong) &subEntityIndexVector;
							jmethodID __method = __gr->getMethod("setSubEntityVisibility_ev_bool_ev_uint32_IntVector_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , visible_j, id_j, subEntityIndexVector_j);
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
							return this->CEntityLayer::setSubEntityVisibility(visible, id, subEntityIndexVector);
						}
					}
					virtual ev_bool getVisibilityFilter(ev_bool& visible, EarthView::World::Core::IntVector& ids)
					{
						if (this->_gRef != NULL && this->m_getVisibilityFilter_ev_bool_IntVector_callback != "" && this->isCustomExtend())
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
							jlong visible_j = (jlong) &visible;
							jlong ids_j = (jlong) &ids;
							jmethodID __method = __gr->getMethod("getVisibilityFilter_ev_bool_IntVector_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , visible_j, ids_j);
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
							return this->CEntityLayer::getVisibilityFilter(visible, ids);
						}
					}
					virtual ev_bool getVisibilityFilter(ev_uint32 id)
					{
						if (this->_gRef != NULL && this->m_getVisibilityFilter_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong id_j = (jlong) id;
							jmethodID __method = __gr->getMethod("getVisibilityFilter_ev_uint32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , id_j);
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
							return this->CEntityLayer::getVisibilityFilter(id);
						}
					}
					virtual ev_bool getSubEntityVisibility(ev_uint32 id, const ev_uint32& subEntityIndex)
					{
						if (this->_gRef != NULL && this->m_getSubEntityVisibility_ev_uint32_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong id_j = (jlong) id;
							jlong subEntityIndex_j = (jlong) subEntityIndex;
							jmethodID __method = __gr->getMethod("getSubEntityVisibility_ev_uint32_ev_uint32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , id_j, subEntityIndex_j);
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
							return this->CEntityLayer::getSubEntityVisibility(id, subEntityIndex);
						}
					}
					virtual ev_bool getSubEntityVisibility(ev_uint32 id, ev_bool visible, EarthView::World::Core::IntVector& subEntityIndexVector)
					{
						if (this->_gRef != NULL && this->m_getSubEntityVisibility_ev_uint32_ev_bool_IntVector_callback != "" && this->isCustomExtend())
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
							jlong id_j = (jlong) id;
							jboolean visible_j = (jboolean) visible;
							jlong subEntityIndexVector_j = (jlong) &subEntityIndexVector;
							jmethodID __method = __gr->getMethod("getSubEntityVisibility_ev_uint32_ev_bool_IntVector_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , id_j, visible_j, subEntityIndexVector_j);
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
							return this->CEntityLayer::getSubEntityVisibility(id, visible, subEntityIndexVector);
						}
					}
					virtual EarthView::World::Geometry3D::CVisibleObjectPtr getVisibleObjectPtr(ev_uint32 id)
					{
						if (this->_gRef != NULL && this->m_getVisibleObjectPtr_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong id_j = (jlong) id;
							jmethodID __method = __gr->getMethod("getVisibleObjectPtr_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , id_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Geometry3D::CVisibleObjectPtr __values1 = *(EarthView::World::Geometry3D::CVisibleObjectPtr*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::getVisibleObjectPtr(id);
						}
					}
					virtual EarthView::World::Geometry3D::CVisibleObject* getVisibleObject(ev_uint32 id)
					{
						if (this->_gRef != NULL && this->m_getVisibleObject_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong id_j = (jlong) id;
							jmethodID __method = __gr->getMethod("getVisibleObject_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , id_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Geometry3D::CVisibleObject *__values1 = (EarthView::World::Geometry3D::CVisibleObject*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::getVisibleObject(id);
						}
					}
					virtual EarthView::World::Core::IntVector getAllObjectIDs()
					{
						if (this->_gRef != NULL && this->m_getAllObjectIDs_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getAllObjectIDs_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Core::IntVector __values1 = *(EarthView::World::Core::IntVector*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::getAllObjectIDs();
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
							return this->CEntityLayer::fromXmlElement(element);
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
							return this->CEntityLayer::toXmlElement();
						}
					}
					virtual EVString toXML() const
					{
						if (this->_gRef != NULL && this->m_toXML_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("toXML_void_callback");
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
							return this->CEntityLayer::toXML();
						}
					}
					virtual void toStream(EarthView::World::Core::CDataStream& stream) const
					{
						if (this->_gRef != NULL && this->m_toStream_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("toStream_CDataStream_callback");
							__env->CallVoidMethod(__obj, __method , stream_j);
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
							return this->CEntityLayer::toStream(stream);
						}
					}
					virtual void _notifyLayerAdd(EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if (this->_gRef != NULL && this->m__notifyLayerAdd_CSceneManager_callback != "" && this->isCustomExtend())
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
							jlong pSceneMgr_j = (jlong) pSceneMgr;
							jmethodID __method = __gr->getMethod("_notifyLayerAdd_CSceneManager_callback");
							__env->CallVoidMethod(__obj, __method , pSceneMgr_j);
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
							return this->CEntityLayer::_notifyLayerAdd(pSceneMgr);
						}
					}
					virtual void _notifyLayerRemoved(EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if (this->_gRef != NULL && this->m__notifyLayerRemoved_CSceneManager_callback != "" && this->isCustomExtend())
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
							jlong pSceneMgr_j = (jlong) pSceneMgr;
							jmethodID __method = __gr->getMethod("_notifyLayerRemoved_CSceneManager_callback");
							__env->CallVoidMethod(__obj, __method , pSceneMgr_j);
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
							return this->CEntityLayer::_notifyLayerRemoved(pSceneMgr);
						}
					}
					virtual void _notifyRefreshed(const EarthView::World::Graphic::CCamera* camera, EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType)
					{
						if (this->_gRef != NULL && this->m__notifyRefreshed_CCamera_LayerRefreshFactor_callback != "" && this->isCustomExtend())
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
							jlong camera_j = (jlong) camera;
							jint updateType_j = (jint) updateType;
							jmethodID __method = __gr->getMethod("_notifyRefreshed_CCamera_LayerRefreshFactor_callback");
							__env->CallVoidMethod(__obj, __method , camera_j, updateType_j);
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
							return this->CEntityLayer::_notifyRefreshed(camera, updateType);
						}
					}
					virtual void _notifyRefreshed(const EarthView::World::Graphic::CCamera* camera)
					{
						if (this->_gRef != NULL && this->m__notifyRefreshed_CCamera_callback != "" && this->isCustomExtend())
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
							jlong camera_j = (jlong) camera;
							jmethodID __method = __gr->getMethod("_notifyRefreshed_CCamera_callback");
							__env->CallVoidMethod(__obj, __method , camera_j);
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
							return this->CEntityLayer::_notifyRefreshed(camera);
						}
					}
					virtual void _notifyDataChanged(const EVString& strDataSourceName, const EVString& strDatasetName, EarthView::World::Core::CEvent* pEvent)
					{
						if (this->_gRef != NULL && this->m__notifyDataChanged_EVString_EVString_CEvent_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring strDataSourceName_wch = strDataSourceName;
							jstring strDataSourceName_j = __env->NewString((const jchar*)strDataSourceName_wch.getString(), strDataSourceName_wch.size());
							EarthView::World::Core::ev_wstring strDatasetName_wch = strDatasetName;
							jstring strDatasetName_j = __env->NewString((const jchar*)strDatasetName_wch.getString(), strDatasetName_wch.size());
							jlong pEvent_j = (jlong) pEvent;
							jmethodID __method = __gr->getMethod("_notifyDataChanged_EVString_EVString_CEvent_callback");
							__env->CallVoidMethod(__obj, __method , strDataSourceName_j, strDatasetName_j, pEvent_j);
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
							return this->CEntityLayer::_notifyDataChanged(strDataSourceName, strDatasetName, pEvent);
						}
					}
					virtual ev_bool getGotoParam(ev_real64& latitude, ev_real64& longitude, ev_real64& altitude)
					{
						if (this->_gRef != NULL && this->m_getGotoParam_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jlong latitude_j = (jlong) &latitude;
							jlong longitude_j = (jlong) &longitude;
							jlong altitude_j = (jlong) &altitude;
							jmethodID __method = __gr->getMethod("getGotoParam_ev_real64_ev_real64_ev_real64_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , latitude_j, longitude_j, altitude_j);
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
							return this->CEntityLayer::getGotoParam(latitude, longitude, altitude);
						}
					}
					virtual ev_bool getGotoParam(ev_uint32 id, ev_real64& latitude, ev_real64& longitude, ev_real64& altitude)
					{
						if (this->_gRef != NULL && this->m_getGotoParam_ev_uint32_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jlong id_j = (jlong) id;
							jlong latitude_j = (jlong) &latitude;
							jlong longitude_j = (jlong) &longitude;
							jlong altitude_j = (jlong) &altitude;
							jmethodID __method = __gr->getMethod("getGotoParam_ev_uint32_ev_real64_ev_real64_ev_real64_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , id_j, latitude_j, longitude_j, altitude_j);
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
							return this->CEntityLayer::getGotoParam(id, latitude, longitude, altitude);
						}
					}
					virtual void applyModelEnvMapTexture(ev_uint32 id)
					{
						if (this->_gRef != NULL && this->m_applyModelEnvMapTexture_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong id_j = (jlong) id;
							jmethodID __method = __gr->getMethod("applyModelEnvMapTexture_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , id_j);
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
							return this->CEntityLayer::applyModelEnvMapTexture(id);
						}
					}
					virtual void cancelModelEnvMapTexture(ev_uint32 id)
					{
						if (this->_gRef != NULL && this->m_cancelModelEnvMapTexture_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong id_j = (jlong) id;
							jmethodID __method = __gr->getMethod("cancelModelEnvMapTexture_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , id_j);
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
							return this->CEntityLayer::cancelModelEnvMapTexture(id);
						}
					}
					virtual void setMaxEnvMapObjectCount(ev_uint32 count)
					{
						if (this->_gRef != NULL && this->m_setMaxEnvMapObjectCount_ev_uint32_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("setMaxEnvMapObjectCount_ev_uint32_callback");
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
							return this->CEntityLayer::setMaxEnvMapObjectCount(count);
						}
					}
					virtual ev_uint32 getMaxEnvMapObjectCount()
					{
						if (this->_gRef != NULL && this->m_getMaxEnvMapObjectCount_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMaxEnvMapObjectCount_void_callback");
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
							return this->CEntityLayer::getMaxEnvMapObjectCount();
						}
					}
					virtual ev_bool allowApplyEnvMap()
					{
						if (this->_gRef != NULL && this->m_allowApplyEnvMap_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("allowApplyEnvMap_void_callback");
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
							return this->CEntityLayer::allowApplyEnvMap();
						}
					}
					virtual void applyEnvMapTexture()
					{
						if (this->_gRef != NULL && this->m_applyEnvMapTexture_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("applyEnvMapTexture_void_callback");
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
							return this->CEntityLayer::applyEnvMapTexture();
						}
					}
					virtual void cancelEnvMapTexture()
					{
						if (this->_gRef != NULL && this->m_cancelEnvMapTexture_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("cancelEnvMapTexture_void_callback");
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
							return this->CEntityLayer::cancelEnvMapTexture();
						}
					}
					virtual void stopRender(ev_bool bClearObject)
					{
						if (this->_gRef != NULL && this->m_stopRender_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean bClearObject_j = (jboolean) bClearObject;
							jmethodID __method = __gr->getMethod("stopRender_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , bClearObject_j);
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
							return this->CEntityLayer::stopRender(bClearObject);
						}
					}
					virtual void startRender()
					{
						if (this->_gRef != NULL && this->m_startRender_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("startRender_void_callback");
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
							return this->CEntityLayer::startRender();
						}
					}
					virtual ev_bool isLoadModelNode()
					{
						if (this->_gRef != NULL && this->m_isLoadModelNode_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isLoadModelNode_void_callback");
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
							return this->CEntityLayer::isLoadModelNode();
						}
					}
					virtual void setLoadModelNode(ev_bool flag)
					{
						if (this->_gRef != NULL && this->m_setLoadModelNode_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean flag_j = (jboolean) flag;
							jmethodID __method = __gr->getMethod("setLoadModelNode_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , flag_j);
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
							return this->CEntityLayer::setLoadModelNode(flag);
						}
					}
					virtual void _notifyModelLoaded(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object)
					{
						if (this->_gRef != NULL && this->m__notifyModelLoaded_CModelBaseObject_callback != "" && this->isCustomExtend())
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
							jlong object_j = (jlong) object;
							jmethodID __method = __gr->getMethod("_notifyModelLoaded_CModelBaseObject_callback");
							__env->CallVoidMethod(__obj, __method , object_j);
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
							return this->CEntityLayer::_notifyModelLoaded(object);
						}
					}
					virtual void _notifyModelUnLoaded(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object)
					{
						if (this->_gRef != NULL && this->m__notifyModelUnLoaded_CModelBaseObject_callback != "" && this->isCustomExtend())
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
							jlong object_j = (jlong) object;
							jmethodID __method = __gr->getMethod("_notifyModelUnLoaded_CModelBaseObject_callback");
							__env->CallVoidMethod(__obj, __method , object_j);
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
							return this->CEntityLayer::_notifyModelUnLoaded(object);
						}
					}
					virtual void _notifyModelPreAttach(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object)
					{
						if (this->_gRef != NULL && this->m__notifyModelPreAttach_CModelBaseObject_callback != "" && this->isCustomExtend())
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
							jlong object_j = (jlong) object;
							jmethodID __method = __gr->getMethod("_notifyModelPreAttach_CModelBaseObject_callback");
							__env->CallVoidMethod(__obj, __method , object_j);
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
							return this->CEntityLayer::_notifyModelPreAttach(object);
						}
					}
					virtual void _notifyModelAttached(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object)
					{
						if (this->_gRef != NULL && this->m__notifyModelAttached_CModelBaseObject_callback != "" && this->isCustomExtend())
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
							jlong object_j = (jlong) object;
							jmethodID __method = __gr->getMethod("_notifyModelAttached_CModelBaseObject_callback");
							__env->CallVoidMethod(__obj, __method , object_j);
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
							return this->CEntityLayer::_notifyModelAttached(object);
						}
					}
					virtual void _notifyModelDetached(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object)
					{
						if (this->_gRef != NULL && this->m__notifyModelDetached_CModelBaseObject_callback != "" && this->isCustomExtend())
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
							jlong object_j = (jlong) object;
							jmethodID __method = __gr->getMethod("_notifyModelDetached_CModelBaseObject_callback");
							__env->CallVoidMethod(__obj, __method , object_j);
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
							return this->CEntityLayer::_notifyModelDetached(object);
						}
					}
					virtual void fromStream(EarthView::World::Core::CDataStream& stream)
					{
						if (this->_gRef != NULL && this->m_fromStream_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("fromStream_CDataStream_callback");
							__env->CallVoidMethod(__obj, __method , stream_j);
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
							return this->CEntityLayer::fromStream(stream);
						}
					}
					virtual EarthView::World::Geometry3D::CVisibleObjectPtr createVisibleObjectPtr(EarthView::World::Spatial::GeoDataset::IFeature* ref_f)
					{
						if (this->_gRef != NULL && this->m_createVisibleObjectPtr_IFeature_callback != "" && this->isCustomExtend())
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
							jlong ref_f_j = (jlong) ref_f;
							jmethodID __method = __gr->getMethod("createVisibleObjectPtr_IFeature_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , ref_f_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Geometry3D::CVisibleObjectPtr __values1 = *(EarthView::World::Geometry3D::CVisibleObjectPtr*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::createVisibleObjectPtr(ref_f);
						}
					}
					virtual EVString getSceneName() const
					{
						if (this->_gRef != NULL && this->m_getSceneName_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSceneName_void_callback");
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
							return this->CEntityLayer::getSceneName();
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
							return this->CEntityLayer::getName();
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
							return this->CEntityLayer::setName(name);
						}
					}
					virtual EVString getDescription() const
					{
						if (this->_gRef != NULL && this->m_getDescription_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getDescription_void_callback");
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
							return this->CEntityLayer::getDescription();
						}
					}
					virtual void setDescription(const EVString& value)
					{
						if (this->_gRef != NULL && this->m_setDescription_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring value_wch = value;
							jstring value_j = __env->NewString((const jchar*)value_wch.getString(), value_wch.size());
							jmethodID __method = __gr->getMethod("setDescription_EVString_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
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
							return this->CEntityLayer::setDescription(value);
						}
					}
					virtual ev_real64 getMinX() const
					{
						if (this->_gRef != NULL && this->m_getMinX_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMinX_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::getMinX();
						}
					}
					virtual ev_real64 getMaxX() const
					{
						if (this->_gRef != NULL && this->m_getMaxX_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMaxX_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::getMaxX();
						}
					}
					virtual ev_real64 getMinY() const
					{
						if (this->_gRef != NULL && this->m_getMinY_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMinY_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::getMinY();
						}
					}
					virtual ev_real64 getMaxY() const
					{
						if (this->_gRef != NULL && this->m_getMaxY_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMaxY_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::getMaxY();
						}
					}
					virtual ev_bool getHeightAt(ev_real32 lat, ev_real32 lon, ev_real32 targetSamplesPerDegrees, ev_real32& height)
					{
						if (this->_gRef != NULL && this->m_getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32_callback != "" && this->isCustomExtend())
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
							jfloat lat_j = (jfloat) lat;
							jfloat lon_j = (jfloat) lon;
							jfloat targetSamplesPerDegrees_j = (jfloat) targetSamplesPerDegrees;
							jlong height_j = (jlong) &height;
							jmethodID __method = __gr->getMethod("getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , lat_j, lon_j, targetSamplesPerDegrees_j, height_j);
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
							return this->CEntityLayer::getHeightAt(lat, lon, targetSamplesPerDegrees, height);
						}
					}
					virtual EarthView::World::Graphic::CSceneManager* getSceneManager() const
					{
						if (this->_gRef != NULL && this->m_getSceneManager_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSceneManager_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CSceneManager *__values1 = (EarthView::World::Graphic::CSceneManager*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::getSceneManager();
						}
					}
					virtual EVString getDatasetName()
					{
						if (this->_gRef != NULL && this->m_getDatasetName_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getDatasetName_void_callback");
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
							return this->CEntityLayer::getDatasetName();
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if (this->_gRef != NULL && this->m_getDataSource_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getDataSource_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::getDataSource();
						}
					}
					virtual ev_bool ignoreScale() const
					{
						if (this->_gRef != NULL && this->m_ignoreScale_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("ignoreScale_void_callback");
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
							return this->CEntityLayer::ignoreScale();
						}
					}
					virtual void setIgnoreScale(ev_bool bIgnore)
					{
						if (this->_gRef != NULL && this->m_setIgnoreScale_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean bIgnore_j = (jboolean) bIgnore;
							jmethodID __method = __gr->getMethod("setIgnoreScale_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , bIgnore_j);
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
							return this->CEntityLayer::setIgnoreScale(bIgnore);
						}
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if (this->_gRef != NULL && this->m_getDisplayMaxScale_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getDisplayMaxScale_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::getDisplayMaxScale();
						}
					}
					virtual void setDisplayMaxScale(ev_real64 scale)
					{
						if (this->_gRef != NULL && this->m_setDisplayMaxScale_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble scale_j = (jdouble) scale;
							jmethodID __method = __gr->getMethod("setDisplayMaxScale_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , scale_j);
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
							return this->CEntityLayer::setDisplayMaxScale(scale);
						}
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if (this->_gRef != NULL && this->m_getDisplayMinScale_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getDisplayMinScale_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::getDisplayMinScale();
						}
					}
					virtual void setDisplayMinScale(ev_real64 scale)
					{
						if (this->_gRef != NULL && this->m_setDisplayMinScale_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble scale_j = (jdouble) scale;
							jmethodID __method = __gr->getMethod("setDisplayMinScale_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , scale_j);
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
							return this->CEntityLayer::setDisplayMinScale(scale);
						}
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if (this->_gRef != NULL && this->m_getSpatialReference_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSpatialReference_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Geometry::ISpatialReference *__values1 = (EarthView::World::Spatial::Geometry::ISpatialReference*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEntityLayer::getSpatialReference();
						}
					}
					virtual void setSpatialReference(EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if (this->_gRef != NULL && this->m_setSpatialReference_ISpatialReference_callback != "" && this->isCustomExtend())
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
							jlong ref_sr_j = (jlong) ref_sr;
							jmethodID __method = __gr->getMethod("setSpatialReference_ISpatialReference_callback");
							__env->CallVoidMethod(__obj, __method , ref_sr_j);
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
							return this->CEntityLayer::setSpatialReference(ref_sr);
						}
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if (this->_gRef != NULL && this->m_getExtent_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getExtent_void_callback");
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
							return this->CEntityLayer::getExtent();
						}
					}
					virtual ev_bool draw(EarthView::World::Spatial::Display::ISpatialDisplay* display, EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if (this->_gRef != NULL && this->m_draw_ISpatialDisplay_EVVectorLayerRendererType_callback != "" && this->isCustomExtend())
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
							jlong display_j = (jlong) display;
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("draw_ISpatialDisplay_EVVectorLayerRendererType_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , display_j, type_j);
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
							return this->CEntityLayer::draw(display, type);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCEntityLayerProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_00024SubEntityState_Create(JNIEnv *__env, jclass __clazz)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer::CSubEntityState *pObjectX = new EarthView::World::Spatial3D::Atlas::CEntityLayer::CSubEntityState();
					return (jlong) pObjectX;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_00024SubEntityState_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer::CSubEntityState *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer::CSubEntityState*)pObjXXXX;
					delete pObjectX;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_00024SubEntityState_get_1Visible_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer::CSubEntityState *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer::CSubEntityState*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->Visible);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_00024SubEntityState_set_1Visible_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer::CSubEntityState *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer::CSubEntityState*)pObjXXXX;
					pObjectX->Visible = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						EarthView::World::Spatial::Atlas::EVLayerType __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType __values1 = pObjectX->getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getDataset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getDataset();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->getDataset();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getDataset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDataset_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDataset_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getDataset_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getDataset();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ev_clone_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_hasVisibleObject_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::hasVisibleObject();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->hasVisibleObject();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1hasVisibleObject_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_hasVisibleObject_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"hasVisibleObject_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_hasVisibleObject_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::hasVisibleObject();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_canEdit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::canEdit();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->canEdit();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1canEdit_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_canEdit_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"canEdit_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_canEdit_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::canEdit();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setCanEdit_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean can_j)
				{
					ev_bool can = (ev_bool) can_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setCanEdit(can);
					}
					else
					{
						pObjectX->setCanEdit(can);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setCanEdit_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setCanEdit_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setCanEdit_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setCanEdit_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean can_j)
				{
					ev_bool can = (ev_bool) can_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setCanEdit(can);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_isEditing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::isEditing();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isEditing();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1isEditing_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isEditing_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isEditing_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_isEditing_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::isEditing();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setEditing_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean editing_j)
				{
					ev_bool editing = (ev_bool) editing_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setEditing(editing);
					}
					else
					{
						pObjectX->setEditing(editing);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setEditing_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setEditing_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setEditing_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setEditing_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean editing_j)
				{
					ev_bool editing = (ev_bool) editing_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setEditing(editing);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_isVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::isVisible();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isVisible();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1isVisible_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isVisible_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isVisible_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_isVisible_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::isVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setVisible(visible);
					}
					else
					{
						pObjectX->setVisible(visible);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setVisible_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setVisible_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setVisible_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setVisible_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setVisible(visible);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_isValid_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::isValid();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isValid();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1isValid_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isValid_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isValid_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_isValid_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::isValid();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getAABBox_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getAABBox();
						EarthView::World::Spatial::Math::CAxisAlignedBox *returnvalues = new EarthView::World::Spatial::Math::CAxisAlignedBox(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox __values1 = pObjectX->getAABBox();
						EarthView::World::Spatial::Math::CAxisAlignedBox *returnvalues = new EarthView::World::Spatial::Math::CAxisAlignedBox(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getAABBox_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getAABBox_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getAABBox_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getAABBox_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					EarthView::World::Spatial::Math::CAxisAlignedBox __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getAABBox();
					EarthView::World::Spatial::Math::CAxisAlignedBox *returnvalues = new EarthView::World::Spatial::Math::CAxisAlignedBox(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_isSelectable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::isSelectable();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isSelectable();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1isSelectable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isSelectable_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isSelectable_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_isSelectable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::isSelectable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setSelectable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean selectable_j)
				{
					ev_bool selectable = (ev_bool) selectable_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setSelectable(selectable);
					}
					else
					{
						pObjectX->setSelectable(selectable);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setSelectable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSelectable_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSelectable_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setSelectable_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean selectable_j)
				{
					ev_bool selectable = (ev_bool) selectable_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setSelectable(selectable);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setSelectionColour_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong colour_j)
				{
					const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setSelectionColour(colour);
					}
					else
					{
						pObjectX->setSelectionColour(colour);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setSelectionColour_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSelectionColour_CColourValue_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSelectionColour_CColourValue_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setSelectionColour_1CColourValue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong colour_j)
				{
					const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setSelectionColour(colour);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getSelectionColour_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						EarthView::World::Graphic::CColourValue __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getSelectionColour();
						EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Graphic::CColourValue __values1 = pObjectX->getSelectionColour();
						EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getSelectionColour_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSelectionColour_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSelectionColour_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getSelectionColour_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					EarthView::World::Graphic::CColourValue __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getSelectionColour();
					EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getTransparentValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_uint8 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getTransparentValue();
						jshort __values1_j = (jshort) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint8 __values1 = pObjectX->getTransparentValue();
						jshort __values1_j = (jshort) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getTransparentValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getTransparentValue_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getTransparentValue_void_callback", "()S");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getTransparentValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_uint8 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getTransparentValue();
					jshort __values1_j = (jshort) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setTransparentValue_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort transparent_j)
				{
					ev_uint8 transparent = (ev_uint8) transparent_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setTransparentValue(transparent);
					}
					else
					{
						pObjectX->setTransparentValue(transparent);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setTransparentValue_1ev_1uint8(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setTransparentValue_ev_uint8_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setTransparentValue_ev_uint8_callback", "(S)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setTransparentValue_1ev_1uint8_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort transparent_j)
				{
					ev_uint8 transparent = (ev_uint8) transparent_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setTransparentValue(transparent);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_isRevShadow_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::isRevShadow();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isRevShadow();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1isRevShadow_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isRevShadow_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isRevShadow_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_isRevShadow_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::isRevShadow();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setRevShadow_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean revShadow_j)
				{
					ev_bool revShadow = (ev_bool) revShadow_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setRevShadow(revShadow);
					}
					else
					{
						pObjectX->setRevShadow(revShadow);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setRevShadow_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setRevShadow_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setRevShadow_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setRevShadow_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean revShadow_j)
				{
					ev_bool revShadow = (ev_bool) revShadow_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setRevShadow(revShadow);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_isCastShadow_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::isCastShadow();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isCastShadow();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1isCastShadow_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isCastShadow_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isCastShadow_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_isCastShadow_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::isCastShadow();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setCastShadow_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean castShadow_j)
				{
					ev_bool castShadow = (ev_bool) castShadow_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setCastShadow(castShadow);
					}
					else
					{
						pObjectX->setCastShadow(castShadow);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setCastShadow_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setCastShadow_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setCastShadow_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setCastShadow_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean castShadow_j)
				{
					ev_bool castShadow = (ev_bool) castShadow_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setCastShadow(castShadow);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setEnvParam_1CColourValue_1CColourValue_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ambient_j, jlong diffuse_j, jlong specular_j)
				{
					EarthView::World::Graphic::CColourValue &ambient = *(EarthView::World::Graphic::CColourValue*) ambient_j;
					EarthView::World::Graphic::CColourValue &diffuse = *(EarthView::World::Graphic::CColourValue*) diffuse_j;
					EarthView::World::Graphic::CColourValue &specular = *(EarthView::World::Graphic::CColourValue*) specular_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setEnvParam(ambient, diffuse, specular);
					}
					else
					{
						pObjectX->setEnvParam(ambient, diffuse, specular);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setEnvParam_1CColourValue_1CColourValue_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setEnvParam_CColourValue_CColourValue_CColourValue_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setEnvParam_CColourValue_CColourValue_CColourValue_callback", "(JJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setEnvParam_1CColourValue_1CColourValue_1CColourValue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ambient_j, jlong diffuse_j, jlong specular_j)
				{
					EarthView::World::Graphic::CColourValue &ambient = *(EarthView::World::Graphic::CColourValue*) ambient_j;
					EarthView::World::Graphic::CColourValue &diffuse = *(EarthView::World::Graphic::CColourValue*) diffuse_j;
					EarthView::World::Graphic::CColourValue &specular = *(EarthView::World::Graphic::CColourValue*) specular_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setEnvParam(ambient, diffuse, specular);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getEnvParam_1CColourValue_1CColourValue_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ambient_j, jlong diffuse_j, jlong specular_j)
				{
					EarthView::World::Graphic::CColourValue &ambient = *(EarthView::World::Graphic::CColourValue*) ambient_j;
					EarthView::World::Graphic::CColourValue &diffuse = *(EarthView::World::Graphic::CColourValue*) diffuse_j;
					EarthView::World::Graphic::CColourValue &specular = *(EarthView::World::Graphic::CColourValue*) specular_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getEnvParam(ambient, diffuse, specular);
					}
					else
					{
						pObjectX->getEnvParam(ambient, diffuse, specular);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getEnvParam_1CColourValue_1CColourValue_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getEnvParam_CColourValue_CColourValue_CColourValue_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getEnvParam_CColourValue_CColourValue_CColourValue_callback", "(JJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getEnvParam_1CColourValue_1CColourValue_1CColourValue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ambient_j, jlong diffuse_j, jlong specular_j)
				{
					EarthView::World::Graphic::CColourValue &ambient = *(EarthView::World::Graphic::CColourValue*) ambient_j;
					EarthView::World::Graphic::CColourValue &diffuse = *(EarthView::World::Graphic::CColourValue*) diffuse_j;
					EarthView::World::Graphic::CColourValue &specular = *(EarthView::World::Graphic::CColourValue*) specular_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getEnvParam(ambient, diffuse, specular);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setMipMap_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble modelMipMap_j)
				{
					ev_real64 modelMipMap = (ev_real64) modelMipMap_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setMipMap(modelMipMap);
					}
					else
					{
						pObjectX->setMipMap(modelMipMap);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setMipMap_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setMipMap_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setMipMap_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setMipMap_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble modelMipMap_j)
				{
					ev_real64 modelMipMap = (ev_real64) modelMipMap_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setMipMap(modelMipMap);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getMipMap_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getMipMap();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getMipMap();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getMipMap_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMipMap_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMipMap_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getMipMap_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getMipMap();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_checkSafeVisibleDistance_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble distance_j)
				{
					ev_real64 distance = (ev_real64) distance_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::checkSafeVisibleDistance(distance);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->checkSafeVisibleDistance(distance);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1checkSafeVisibleDistance_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_checkSafeVisibleDistance_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"checkSafeVisibleDistance_ev_real64_callback", "(D)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_checkSafeVisibleDistance_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble distance_j)
				{
					ev_real64 distance = (ev_real64) distance_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::checkSafeVisibleDistance(distance);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setVisibleDistance_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble distance_j)
				{
					ev_real64 distance = (ev_real64) distance_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setVisibleDistance(distance);
					}
					else
					{
						pObjectX->setVisibleDistance(distance);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setVisibleDistance_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setVisibleDistance_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setVisibleDistance_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setVisibleDistance_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble distance_j)
				{
					ev_real64 distance = (ev_real64) distance_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setVisibleDistance(distance);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getVisibleDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getVisibleDistance();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getVisibleDistance();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getVisibleDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getVisibleDistance_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getVisibleDistance_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getVisibleDistance_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getVisibleDistance();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setUnloadBufferDistance_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble distance_j)
				{
					ev_real64 distance = (ev_real64) distance_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setUnloadBufferDistance(distance);
					}
					else
					{
						pObjectX->setUnloadBufferDistance(distance);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setUnloadBufferDistance_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setUnloadBufferDistance_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setUnloadBufferDistance_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setUnloadBufferDistance_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble distance_j)
				{
					ev_real64 distance = (ev_real64) distance_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setUnloadBufferDistance(distance);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getUnloadBufferDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getUnloadBufferDistance();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getUnloadBufferDistance();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getUnloadBufferDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getUnloadBufferDistance_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getUnloadBufferDistance_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getUnloadBufferDistance_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getUnloadBufferDistance();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setAltitudeMode_1EVAltitudeMode_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint altitudeMode_j, jdouble altitudeValue_j)
				{
					EarthView::World::Spatial::Utility::EVAltitudeMode altitudeMode = (EarthView::World::Spatial::Utility::EVAltitudeMode) altitudeMode_j;
					ev_real64 altitudeValue = (ev_real64) altitudeValue_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setAltitudeMode(altitudeMode, altitudeValue);
					}
					else
					{
						pObjectX->setAltitudeMode(altitudeMode, altitudeValue);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setAltitudeMode_1EVAltitudeMode_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setAltitudeMode_EVAltitudeMode_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setAltitudeMode_EVAltitudeMode_ev_real64_callback", "(ID)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setAltitudeMode_1EVAltitudeMode_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint altitudeMode_j, jdouble altitudeValue_j)
				{
					EarthView::World::Spatial::Utility::EVAltitudeMode altitudeMode = (EarthView::World::Spatial::Utility::EVAltitudeMode) altitudeMode_j;
					ev_real64 altitudeValue = (ev_real64) altitudeValue_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setAltitudeMode(altitudeMode, altitudeValue);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getAltitudeMode_1EVAltitudeMode_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong altitudeMode_j, jlong altitudeValue_j)
				{
					EarthView::World::Spatial::Utility::EVAltitudeMode &altitudeMode = *(EarthView::World::Spatial::Utility::EVAltitudeMode*) altitudeMode_j;
					ev_real64 &altitudeValue = *(ev_real64*) altitudeValue_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getAltitudeMode(altitudeMode, altitudeValue);
					}
					else
					{
						pObjectX->getAltitudeMode(altitudeMode, altitudeValue);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getAltitudeMode_1EVAltitudeMode_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getAltitudeMode_EVAltitudeMode_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getAltitudeMode_EVAltitudeMode_ev_real64_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getAltitudeMode_1EVAltitudeMode_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong altitudeMode_j, jlong altitudeValue_j)
				{
					EarthView::World::Spatial::Utility::EVAltitudeMode &altitudeMode = *(EarthView::World::Spatial::Utility::EVAltitudeMode*) altitudeMode_j;
					ev_real64 &altitudeValue = *(ev_real64*) altitudeValue_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getAltitudeMode(altitudeMode, altitudeValue);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_isAffectByDem_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::isAffectByDem();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isAffectByDem();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1isAffectByDem_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isAffectByDem_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isAffectByDem_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_isAffectByDem_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::isAffectByDem();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_canEditAltitude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::canEditAltitude();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->canEditAltitude();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1canEditAltitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_canEditAltitude_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"canEditAltitude_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_canEditAltitude_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::canEditAltitude();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getAltitude_1CModelBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pModel_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pModel = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pModel_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getAltitude(pModel);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getAltitude(pModel);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getAltitude_1CModelBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getAltitude_CModelBaseObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getAltitude_CModelBaseObject_callback", "(J)D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getAltitude_1CModelBaseObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pModel_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pModel = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pModel_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getAltitude(pModel);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getDem_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getDem(latitude, longitude);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getDem(latitude, longitude);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getDem_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDem_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDem_ev_real64_ev_real64_callback", "(DD)D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getDem_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getDem(latitude, longitude);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getDem_1CModelBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pModel_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pModel = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pModel_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getDem(pModel);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getDem(pModel);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getDem_1CModelBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDem_CModelBaseObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDem_CModelBaseObject_callback", "(J)D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getDem_1CModelBaseObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pModel_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pModel = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pModel_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getDem(pModel);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_refresh_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::refresh();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->refresh();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1refresh_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_refresh_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"refresh_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_refresh_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::refresh();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_refresh_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::refresh(id);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->refresh(id);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1refresh_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_refresh_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"refresh_ev_uint32_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_refresh_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::refresh(id);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_refreshPosition_1CModelBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pModel_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pModel = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pModel_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::refreshPosition(pModel);
					}
					else
					{
						pObjectX->refreshPosition(pModel);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1refreshPosition_1CModelBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_refreshPosition_CModelBaseObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"refreshPosition_CModelBaseObject_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_refreshPosition_1CModelBaseObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pModel_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pModel = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pModel_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::refreshPosition(pModel);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_select_1IQueryFilter_1EVSelectionResultType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j, jint type_j)
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter *filter = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) filter_j;
					EarthView::World::Spatial::Atlas::EVSelectionResultType type = (EarthView::World::Spatial::Atlas::EVSelectionResultType) type_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::select(filter, type);
					}
					else
					{
						pObjectX->select(filter, type);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1select_1IQueryFilter_1EVSelectionResultType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_select_IQueryFilter_EVSelectionResultType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"select_IQueryFilter_EVSelectionResultType_callback", "(JI)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_select_1IQueryFilter_1EVSelectionResultType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j, jint type_j)
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter *filter = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) filter_j;
					EarthView::World::Spatial::Atlas::EVSelectionResultType type = (EarthView::World::Spatial::Atlas::EVSelectionResultType) type_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::select(filter, type);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_select_1CRay_1Real_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ray_j, jlong hitDistance_j, jlong objIndex_j, jlong submeshIndex_j, jlong instanceIndex_j, jlong segmentIndex_j, jlong point_j)
				{
					EarthView::World::Spatial::Math::CRay ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
					Real &hitDistance = *(Real*) hitDistance_j;
					ev_int32 &objIndex = *(ev_int32*) objIndex_j;
					ev_int32 &submeshIndex = *(ev_int32*) submeshIndex_j;
					ev_int32 &instanceIndex = *(ev_int32*) instanceIndex_j;
					ev_int32 &segmentIndex = *(ev_int32*) segmentIndex_j;
					EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::select(ray, hitDistance, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->select(ray, hitDistance, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1select_1CRay_1Real_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_select_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"select_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback", "(JJJJJJJ)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_select_1CRay_1Real_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ray_j, jlong hitDistance_j, jlong objIndex_j, jlong submeshIndex_j, jlong instanceIndex_j, jlong segmentIndex_j, jlong point_j)
				{
					EarthView::World::Spatial::Math::CRay ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
					Real &hitDistance = *(Real*) hitDistance_j;
					ev_int32 &objIndex = *(ev_int32*) objIndex_j;
					ev_int32 &submeshIndex = *(ev_int32*) submeshIndex_j;
					ev_int32 &instanceIndex = *(ev_int32*) instanceIndex_j;
					ev_int32 &segmentIndex = *(ev_int32*) segmentIndex_j;
					EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::select(ray, hitDistance, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_selectComponentBy_1CRay_1Real_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ray_j, jlong hitDistance_j, jlong objIndex_j, jlong submeshIndex_j, jlong instanceIndex_j, jlong segmentIndex_j, jlong point_j)
				{
					EarthView::World::Spatial::Math::CRay ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
					Real &hitDistance = *(Real*) hitDistance_j;
					ev_int32 &objIndex = *(ev_int32*) objIndex_j;
					ev_int32 &submeshIndex = *(ev_int32*) submeshIndex_j;
					ev_int32 &instanceIndex = *(ev_int32*) instanceIndex_j;
					ev_int32 &segmentIndex = *(ev_int32*) segmentIndex_j;
					EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::selectComponentBy(ray, hitDistance, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->selectComponentBy(ray, hitDistance, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1selectComponentBy_1CRay_1Real_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_selectComponentBy_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"selectComponentBy_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback", "(JJJJJJJ)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_selectComponentBy_1CRay_1Real_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ray_j, jlong hitDistance_j, jlong objIndex_j, jlong submeshIndex_j, jlong instanceIndex_j, jlong segmentIndex_j, jlong point_j)
				{
					EarthView::World::Spatial::Math::CRay ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
					Real &hitDistance = *(Real*) hitDistance_j;
					ev_int32 &objIndex = *(ev_int32*) objIndex_j;
					ev_int32 &submeshIndex = *(ev_int32*) submeshIndex_j;
					ev_int32 &instanceIndex = *(ev_int32*) instanceIndex_j;
					ev_int32 &segmentIndex = *(ev_int32*) segmentIndex_j;
					EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::selectComponentBy(ray, hitDistance, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_loadVisibleObjectNodeAndMergeBoundingBox_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::loadVisibleObjectNodeAndMergeBoundingBox();
					}
					else
					{
						pObjectX->loadVisibleObjectNodeAndMergeBoundingBox();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1loadVisibleObjectNodeAndMergeBoundingBox_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_loadVisibleObjectNodeAndMergeBoundingBox_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"loadVisibleObjectNodeAndMergeBoundingBox_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_loadVisibleObjectNodeAndMergeBoundingBox_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::loadVisibleObjectNodeAndMergeBoundingBox();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_clearSelection_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::clearSelection();
					}
					else
					{
						pObjectX->clearSelection();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1clearSelection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_clearSelection_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"clearSelection_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_clearSelection_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::clearSelection();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_clearSubEntityVisibility_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::clearSubEntityVisibility(id);
					}
					else
					{
						pObjectX->clearSubEntityVisibility(id);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1clearSubEntityVisibility_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_clearSubEntityVisibility_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"clearSubEntityVisibility_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_clearSubEntityVisibility_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::clearSubEntityVisibility(id);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_clearSubEntityVisibility_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::clearSubEntityVisibility();
					}
					else
					{
						pObjectX->clearSubEntityVisibility();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1clearSubEntityVisibility_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_clearSubEntityVisibility_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"clearSubEntityVisibility_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_clearSubEntityVisibility_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::clearSubEntityVisibility();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setLayerSelection_1ILayerSelection(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong selection_j)
				{
					EarthView::World::Spatial::Atlas::ILayerSelection *selection = (EarthView::World::Spatial::Atlas::ILayerSelection*) selection_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setLayerSelection(selection);
					}
					else
					{
						pObjectX->setLayerSelection(selection);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setLayerSelection_1ILayerSelection(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setLayerSelection_ILayerSelection_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setLayerSelection_ILayerSelection_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setLayerSelection_1ILayerSelection_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong selection_j)
				{
					EarthView::World::Spatial::Atlas::ILayerSelection *selection = (EarthView::World::Spatial::Atlas::ILayerSelection*) selection_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setLayerSelection(selection);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getLayerSelection_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getLayerSelection();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* __values1 = pObjectX->getLayerSelection();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getLayerSelection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getLayerSelection_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getLayerSelection_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getLayerSelection_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayerSelection* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getLayerSelection();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setVisibilityFilter_1ev_1bool_1IntVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j, jlong ids_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					const EarthView::World::Core::IntVector &ids = *(EarthView::World::Core::IntVector*) ids_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setVisibilityFilter(visible, ids);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->setVisibilityFilter(visible, ids);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setVisibilityFilter_1ev_1bool_1IntVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setVisibilityFilter_ev_bool_IntVector_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setVisibilityFilter_ev_bool_IntVector_callback", "(ZJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setVisibilityFilter_1ev_1bool_1IntVector_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j, jlong ids_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					const EarthView::World::Core::IntVector &ids = *(EarthView::World::Core::IntVector*) ids_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setVisibilityFilter(visible, ids);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setVisibilityFilter_1ev_1bool_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j, jlong id_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setVisibilityFilter(visible, id);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->setVisibilityFilter(visible, id);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setVisibilityFilter_1ev_1bool_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setVisibilityFilter_ev_bool_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setVisibilityFilter_ev_bool_ev_uint32_callback", "(ZJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setVisibilityFilter_1ev_1bool_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j, jlong id_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setVisibilityFilter(visible, id);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setVisibilityFilter2_1ev_1bool_1IntVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j, jlong ids_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					const EarthView::World::Core::IntVector &ids = *(EarthView::World::Core::IntVector*) ids_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setVisibilityFilter2(visible, ids);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->setVisibilityFilter2(visible, ids);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setVisibilityFilter2_1ev_1bool_1IntVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setVisibilityFilter2_ev_bool_IntVector_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setVisibilityFilter2_ev_bool_IntVector_callback", "(ZJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setVisibilityFilter2_1ev_1bool_1IntVector_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j, jlong ids_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					const EarthView::World::Core::IntVector &ids = *(EarthView::World::Core::IntVector*) ids_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setVisibilityFilter2(visible, ids);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setSubEntityVisibility_1ev_1bool_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j, jlong id_j, jlong subEntityIndex_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					ev_uint32 id = (ev_uint32) id_j;
					const ev_uint32 subEntityIndex = (const ev_uint32) subEntityIndex_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setSubEntityVisibility(visible, id, subEntityIndex);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->setSubEntityVisibility(visible, id, subEntityIndex);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setSubEntityVisibility_1ev_1bool_1ev_1uint32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSubEntityVisibility_ev_bool_ev_uint32_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSubEntityVisibility_ev_bool_ev_uint32_ev_uint32_callback", "(ZJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setSubEntityVisibility_1ev_1bool_1ev_1uint32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j, jlong id_j, jlong subEntityIndex_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					ev_uint32 id = (ev_uint32) id_j;
					const ev_uint32 subEntityIndex = (const ev_uint32) subEntityIndex_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setSubEntityVisibility(visible, id, subEntityIndex);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setSubEntityVisibility_1ev_1bool_1ev_1uint32_1IntVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j, jlong id_j, jlong subEntityIndexVector_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					ev_uint32 id = (ev_uint32) id_j;
					const EarthView::World::Core::IntVector &subEntityIndexVector = *(EarthView::World::Core::IntVector*) subEntityIndexVector_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setSubEntityVisibility(visible, id, subEntityIndexVector);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->setSubEntityVisibility(visible, id, subEntityIndexVector);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setSubEntityVisibility_1ev_1bool_1ev_1uint32_1IntVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSubEntityVisibility_ev_bool_ev_uint32_IntVector_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSubEntityVisibility_ev_bool_ev_uint32_IntVector_callback", "(ZJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setSubEntityVisibility_1ev_1bool_1ev_1uint32_1IntVector_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j, jlong id_j, jlong subEntityIndexVector_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					ev_uint32 id = (ev_uint32) id_j;
					const EarthView::World::Core::IntVector &subEntityIndexVector = *(EarthView::World::Core::IntVector*) subEntityIndexVector_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setSubEntityVisibility(visible, id, subEntityIndexVector);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getVisibilityFilter_1ev_1bool_1IntVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visible_j, jlong ids_j)
				{
					ev_bool &visible = *(ev_bool*) visible_j;
					EarthView::World::Core::IntVector &ids = *(EarthView::World::Core::IntVector*) ids_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getVisibilityFilter(visible, ids);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getVisibilityFilter(visible, ids);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getVisibilityFilter_1ev_1bool_1IntVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getVisibilityFilter_ev_bool_IntVector_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getVisibilityFilter_ev_bool_IntVector_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getVisibilityFilter_1ev_1bool_1IntVector_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visible_j, jlong ids_j)
				{
					ev_bool &visible = *(ev_bool*) visible_j;
					EarthView::World::Core::IntVector &ids = *(EarthView::World::Core::IntVector*) ids_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getVisibilityFilter(visible, ids);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getVisibilityFilter_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getVisibilityFilter(id);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getVisibilityFilter(id);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getVisibilityFilter_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getVisibilityFilter_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getVisibilityFilter_ev_uint32_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getVisibilityFilter_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getVisibilityFilter(id);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getSubEntityVisibility_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jlong subEntityIndex_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					const ev_uint32 subEntityIndex = (const ev_uint32) subEntityIndex_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getSubEntityVisibility(id, subEntityIndex);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getSubEntityVisibility(id, subEntityIndex);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getSubEntityVisibility_1ev_1uint32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSubEntityVisibility_ev_uint32_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSubEntityVisibility_ev_uint32_ev_uint32_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getSubEntityVisibility_1ev_1uint32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jlong subEntityIndex_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					const ev_uint32 subEntityIndex = (const ev_uint32) subEntityIndex_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getSubEntityVisibility(id, subEntityIndex);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getSubEntityVisibility_1ev_1uint32_1ev_1bool_1IntVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jboolean visible_j, jlong subEntityIndexVector_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::Core::IntVector &subEntityIndexVector = *(EarthView::World::Core::IntVector*) subEntityIndexVector_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getSubEntityVisibility(id, visible, subEntityIndexVector);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getSubEntityVisibility(id, visible, subEntityIndexVector);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getSubEntityVisibility_1ev_1uint32_1ev_1bool_1IntVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSubEntityVisibility_ev_uint32_ev_bool_IntVector_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSubEntityVisibility_ev_uint32_ev_bool_IntVector_callback", "(JZJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getSubEntityVisibility_1ev_1uint32_1ev_1bool_1IntVector_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jboolean visible_j, jlong subEntityIndexVector_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::Core::IntVector &subEntityIndexVector = *(EarthView::World::Core::IntVector*) subEntityIndexVector_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getSubEntityVisibility(id, visible, subEntityIndexVector);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getVisibleObjectPtr_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						EarthView::World::Geometry3D::CVisibleObjectPtr __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getVisibleObjectPtr(id);
						EarthView::World::Geometry3D::CVisibleObjectPtr *returnvalues = new EarthView::World::Geometry3D::CVisibleObjectPtr(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Geometry3D::CVisibleObjectPtr __values1 = pObjectX->getVisibleObjectPtr(id);
						EarthView::World::Geometry3D::CVisibleObjectPtr *returnvalues = new EarthView::World::Geometry3D::CVisibleObjectPtr(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getVisibleObjectPtr_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getVisibleObjectPtr_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getVisibleObjectPtr_ev_uint32_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getVisibleObjectPtr_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					EarthView::World::Geometry3D::CVisibleObjectPtr __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getVisibleObjectPtr(id);
					EarthView::World::Geometry3D::CVisibleObjectPtr *returnvalues = new EarthView::World::Geometry3D::CVisibleObjectPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getVisibleObject_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						EarthView::World::Geometry3D::CVisibleObject* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getVisibleObject(id);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Geometry3D::CVisibleObject* __values1 = pObjectX->getVisibleObject(id);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getVisibleObject_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getVisibleObject_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getVisibleObject_ev_uint32_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getVisibleObject_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					EarthView::World::Geometry3D::CVisibleObject* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getVisibleObject(id);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getAllObjectIDs_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						EarthView::World::Core::IntVector __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getAllObjectIDs();
						EarthView::World::Core::IntVector *returnvalues = new EarthView::World::Core::IntVector(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::IntVector __values1 = pObjectX->getAllObjectIDs();
						EarthView::World::Core::IntVector *returnvalues = new EarthView::World::Core::IntVector(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getAllObjectIDs_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getAllObjectIDs_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getAllObjectIDs_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getAllObjectIDs_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					EarthView::World::Core::IntVector __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getAllObjectIDs();
					EarthView::World::Core::IntVector *returnvalues = new EarthView::World::Core::IntVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::fromXmlElement(element);
					}
					else
					{
						pObjectX->fromXmlElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_fromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::fromXmlElement(element);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::toXmlElement();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_toXmlElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_toXML_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::toXML();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->toXML();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1toXML_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toXML_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toXML_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_toXML_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::toXML();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::toStream(stream);
					}
					else
					{
						pObjectX->toStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1toStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toStream_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toStream_CDataStream_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_toStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::toStream(stream);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer__1notifyLayerAdd_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSceneMgr_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneMgr = (EarthView::World::Graphic::CSceneManager*) pSceneMgr_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyLayerAdd(pSceneMgr);
					}
					else
					{
						pObjectX->_notifyLayerAdd(pSceneMgr);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1_1notifyLayerAdd_1CSceneManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__notifyLayerAdd_CSceneManager_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_notifyLayerAdd_CSceneManager_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer__1notifyLayerAdd_1CSceneManager_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSceneMgr_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneMgr = (EarthView::World::Graphic::CSceneManager*) pSceneMgr_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyLayerAdd(pSceneMgr);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer__1notifyLayerRemoved_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSceneMgr_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneMgr = (EarthView::World::Graphic::CSceneManager*) pSceneMgr_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyLayerRemoved(pSceneMgr);
					}
					else
					{
						pObjectX->_notifyLayerRemoved(pSceneMgr);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1_1notifyLayerRemoved_1CSceneManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__notifyLayerRemoved_CSceneManager_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_notifyLayerRemoved_CSceneManager_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer__1notifyLayerRemoved_1CSceneManager_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSceneMgr_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneMgr = (EarthView::World::Graphic::CSceneManager*) pSceneMgr_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyLayerRemoved(pSceneMgr);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer__1notifyRefreshed_1CCamera_1LayerRefreshFactor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong camera_j, jint updateType_j)
				{
					const EarthView::World::Graphic::CCamera *camera = (const EarthView::World::Graphic::CCamera*) camera_j;
					EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType = (EarthView::World::Spatial3D::Atlas::LayerRefreshFactor) updateType_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyRefreshed(camera, updateType);
					}
					else
					{
						pObjectX->_notifyRefreshed(camera, updateType);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1_1notifyRefreshed_1CCamera_1LayerRefreshFactor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__notifyRefreshed_CCamera_LayerRefreshFactor_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_notifyRefreshed_CCamera_LayerRefreshFactor_callback", "(JI)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer__1notifyRefreshed_1CCamera_1LayerRefreshFactor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong camera_j, jint updateType_j)
				{
					const EarthView::World::Graphic::CCamera *camera = (const EarthView::World::Graphic::CCamera*) camera_j;
					EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType = (EarthView::World::Spatial3D::Atlas::LayerRefreshFactor) updateType_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyRefreshed(camera, updateType);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer__1notifyRefreshed_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong camera_j)
				{
					const EarthView::World::Graphic::CCamera *camera = (const EarthView::World::Graphic::CCamera*) camera_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyRefreshed(camera);
					}
					else
					{
						pObjectX->_notifyRefreshed(camera);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1_1notifyRefreshed_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__notifyRefreshed_CCamera_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_notifyRefreshed_CCamera_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer__1notifyRefreshed_1CCamera_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong camera_j)
				{
					const EarthView::World::Graphic::CCamera *camera = (const EarthView::World::Graphic::CCamera*) camera_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyRefreshed(camera);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer__1notifyWorkDone_1ev_1uint32_1ev_1uint64_1ModelRequestType_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jlong reqID_j, jint reqType_j, jboolean bAbort_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					ev_uint64 reqID = *(ev_uint64*) reqID_j;
					EarthView::World::Spatial3D::ModelRequestType reqType = (EarthView::World::Spatial3D::ModelRequestType) reqType_j;
					ev_bool bAbort = (ev_bool) bAbort_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->_notifyWorkDone(id, reqID, reqType, bAbort);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer__1notifyDataChanged_1EVString_1EVString_1CEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strDataSourceName_j, jstring strDatasetName_j, jlong pEvent_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strDataSourceName_ch = (const ev_char*)__env->GetStringUTFChars(strDataSourceName_j,JNI_FALSE);
					const EVString strDataSourceName = strDataSourceName_ch;
					__env->ReleaseStringUTFChars(strDataSourceName_j, (const char *)strDataSourceName_ch);
					#else
					const ev_wchar* strDataSourceName_ch = (const ev_wchar*)__env->GetStringChars(strDataSourceName_j,JNI_FALSE);
					const EVString strDataSourceName = strDataSourceName_ch;
					__env->ReleaseStringChars(strDataSourceName_j, (const jchar *)strDataSourceName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strDatasetName_ch = (const ev_char*)__env->GetStringUTFChars(strDatasetName_j,JNI_FALSE);
					const EVString strDatasetName = strDatasetName_ch;
					__env->ReleaseStringUTFChars(strDatasetName_j, (const char *)strDatasetName_ch);
					#else
					const ev_wchar* strDatasetName_ch = (const ev_wchar*)__env->GetStringChars(strDatasetName_j,JNI_FALSE);
					const EVString strDatasetName = strDatasetName_ch;
					__env->ReleaseStringChars(strDatasetName_j, (const jchar *)strDatasetName_ch);
					#endif
					EarthView::World::Core::CEvent *pEvent = (EarthView::World::Core::CEvent*) pEvent_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyDataChanged(strDataSourceName, strDatasetName, pEvent);
					}
					else
					{
						pObjectX->_notifyDataChanged(strDataSourceName, strDatasetName, pEvent);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1_1notifyDataChanged_1EVString_1EVString_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__notifyDataChanged_EVString_EVString_CEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_notifyDataChanged_EVString_EVString_CEvent_callback", "(Ljava/lang/String;Ljava/lang/String;J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer__1notifyDataChanged_1EVString_1EVString_1CEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strDataSourceName_j, jstring strDatasetName_j, jlong pEvent_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strDataSourceName_ch = (const ev_char*)__env->GetStringUTFChars(strDataSourceName_j,JNI_FALSE);
					const EVString strDataSourceName = strDataSourceName_ch;
					__env->ReleaseStringUTFChars(strDataSourceName_j, (const char *)strDataSourceName_ch);
					#else
					const ev_wchar* strDataSourceName_ch = (const ev_wchar*)__env->GetStringChars(strDataSourceName_j,JNI_FALSE);
					const EVString strDataSourceName = strDataSourceName_ch;
					__env->ReleaseStringChars(strDataSourceName_j, (const jchar *)strDataSourceName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strDatasetName_ch = (const ev_char*)__env->GetStringUTFChars(strDatasetName_j,JNI_FALSE);
					const EVString strDatasetName = strDatasetName_ch;
					__env->ReleaseStringUTFChars(strDatasetName_j, (const char *)strDatasetName_ch);
					#else
					const ev_wchar* strDatasetName_ch = (const ev_wchar*)__env->GetStringChars(strDatasetName_j,JNI_FALSE);
					const EVString strDatasetName = strDatasetName_ch;
					__env->ReleaseStringChars(strDatasetName_j, (const jchar *)strDatasetName_ch);
					#endif
					EarthView::World::Core::CEvent *pEvent = (EarthView::World::Core::CEvent*) pEvent_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyDataChanged(strDataSourceName, strDatasetName, pEvent);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getGotoParam_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong latitude_j, jlong longitude_j, jlong altitude_j)
				{
					ev_real64 &latitude = *(ev_real64*) latitude_j;
					ev_real64 &longitude = *(ev_real64*) longitude_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getGotoParam(latitude, longitude, altitude);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getGotoParam(latitude, longitude, altitude);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getGotoParam_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getGotoParam_ev_real64_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getGotoParam_ev_real64_ev_real64_ev_real64_callback", "(JJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getGotoParam_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong latitude_j, jlong longitude_j, jlong altitude_j)
				{
					ev_real64 &latitude = *(ev_real64*) latitude_j;
					ev_real64 &longitude = *(ev_real64*) longitude_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getGotoParam(latitude, longitude, altitude);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getGotoParam_1ev_1uint32_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jlong latitude_j, jlong longitude_j, jlong altitude_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					ev_real64 &latitude = *(ev_real64*) latitude_j;
					ev_real64 &longitude = *(ev_real64*) longitude_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getGotoParam(id, latitude, longitude, altitude);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getGotoParam(id, latitude, longitude, altitude);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getGotoParam_1ev_1uint32_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getGotoParam_ev_uint32_ev_real64_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getGotoParam_ev_uint32_ev_real64_ev_real64_ev_real64_callback", "(JJJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getGotoParam_1ev_1uint32_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jlong latitude_j, jlong longitude_j, jlong altitude_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					ev_real64 &latitude = *(ev_real64*) latitude_j;
					ev_real64 &longitude = *(ev_real64*) longitude_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getGotoParam(id, latitude, longitude, altitude);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_applyModelEnvMapTexture_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::applyModelEnvMapTexture(id);
					}
					else
					{
						pObjectX->applyModelEnvMapTexture(id);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1applyModelEnvMapTexture_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_applyModelEnvMapTexture_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"applyModelEnvMapTexture_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_applyModelEnvMapTexture_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::applyModelEnvMapTexture(id);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_cancelModelEnvMapTexture_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::cancelModelEnvMapTexture(id);
					}
					else
					{
						pObjectX->cancelModelEnvMapTexture(id);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1cancelModelEnvMapTexture_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_cancelModelEnvMapTexture_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"cancelModelEnvMapTexture_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_cancelModelEnvMapTexture_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::cancelModelEnvMapTexture(id);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setMaxEnvMapObjectCount_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_uint32 count = (ev_uint32) count_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setMaxEnvMapObjectCount(count);
					}
					else
					{
						pObjectX->setMaxEnvMapObjectCount(count);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setMaxEnvMapObjectCount_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setMaxEnvMapObjectCount_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setMaxEnvMapObjectCount_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setMaxEnvMapObjectCount_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_uint32 count = (ev_uint32) count_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setMaxEnvMapObjectCount(count);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getMaxEnvMapObjectCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getMaxEnvMapObjectCount();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getMaxEnvMapObjectCount();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getMaxEnvMapObjectCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMaxEnvMapObjectCount_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMaxEnvMapObjectCount_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_getMaxEnvMapObjectCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::getMaxEnvMapObjectCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_allowApplyEnvMap_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::allowApplyEnvMap();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->allowApplyEnvMap();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1allowApplyEnvMap_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_allowApplyEnvMap_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"allowApplyEnvMap_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_allowApplyEnvMap_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::allowApplyEnvMap();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_applyEnvMapTexture_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::applyEnvMapTexture();
					}
					else
					{
						pObjectX->applyEnvMapTexture();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1applyEnvMapTexture_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_applyEnvMapTexture_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"applyEnvMapTexture_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_applyEnvMapTexture_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::applyEnvMapTexture();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_cancelEnvMapTexture_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::cancelEnvMapTexture();
					}
					else
					{
						pObjectX->cancelEnvMapTexture();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1cancelEnvMapTexture_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_cancelEnvMapTexture_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"cancelEnvMapTexture_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_cancelEnvMapTexture_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::cancelEnvMapTexture();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_stopRender_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bClearObject_j)
				{
					ev_bool bClearObject = (ev_bool) bClearObject_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::stopRender(bClearObject);
					}
					else
					{
						pObjectX->stopRender(bClearObject);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1stopRender_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_stopRender_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"stopRender_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_stopRender_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bClearObject_j)
				{
					ev_bool bClearObject = (ev_bool) bClearObject_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::stopRender(bClearObject);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_startRender_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::startRender();
					}
					else
					{
						pObjectX->startRender();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1startRender_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_startRender_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"startRender_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_startRender_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::startRender();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_isLoadModelNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::isLoadModelNode();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isLoadModelNode();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1isLoadModelNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isLoadModelNode_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isLoadModelNode_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_isLoadModelNode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::isLoadModelNode();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setLoadModelNode_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setLoadModelNode(flag);
					}
					else
					{
						pObjectX->setLoadModelNode(flag);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setLoadModelNode_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setLoadModelNode_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setLoadModelNode_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_setLoadModelNode_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::setLoadModelNode(flag);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_addModelStateListener_1CModelStateListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
				{
					EarthView::World::Spatial3D::Atlas::CModelStateListener *listener = (EarthView::World::Spatial3D::Atlas::CModelStateListener*) listener_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->addModelStateListener(listener);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_removeModelStateListener_1CModelStateListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
				{
					EarthView::World::Spatial3D::Atlas::CModelStateListener *listener = (EarthView::World::Spatial3D::Atlas::CModelStateListener*) listener_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->removeModelStateListener(listener);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer__1notifyModelLoaded_1CModelBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong object_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *object = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) object_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyModelLoaded(object);
					}
					else
					{
						pObjectX->_notifyModelLoaded(object);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1_1notifyModelLoaded_1CModelBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__notifyModelLoaded_CModelBaseObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_notifyModelLoaded_CModelBaseObject_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer__1notifyModelLoaded_1CModelBaseObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong object_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *object = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) object_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyModelLoaded(object);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer__1notifyModelUnLoaded_1CModelBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong object_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *object = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) object_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyModelUnLoaded(object);
					}
					else
					{
						pObjectX->_notifyModelUnLoaded(object);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1_1notifyModelUnLoaded_1CModelBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__notifyModelUnLoaded_CModelBaseObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_notifyModelUnLoaded_CModelBaseObject_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer__1notifyModelUnLoaded_1CModelBaseObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong object_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *object = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) object_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyModelUnLoaded(object);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer__1notifyModelPreAttach_1CModelBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong object_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *object = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) object_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyModelPreAttach(object);
					}
					else
					{
						pObjectX->_notifyModelPreAttach(object);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1_1notifyModelPreAttach_1CModelBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__notifyModelPreAttach_CModelBaseObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_notifyModelPreAttach_CModelBaseObject_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer__1notifyModelPreAttach_1CModelBaseObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong object_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *object = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) object_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyModelPreAttach(object);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer__1notifyModelAttached_1CModelBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong object_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *object = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) object_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyModelAttached(object);
					}
					else
					{
						pObjectX->_notifyModelAttached(object);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1_1notifyModelAttached_1CModelBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__notifyModelAttached_CModelBaseObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_notifyModelAttached_CModelBaseObject_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer__1notifyModelAttached_1CModelBaseObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong object_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *object = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) object_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyModelAttached(object);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer__1notifyModelDetached_1CModelBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong object_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *object = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) object_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyModelDetached(object);
					}
					else
					{
						pObjectX->_notifyModelDetached(object);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1_1notifyModelDetached_1CModelBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__notifyModelDetached_CModelBaseObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_notifyModelDetached_CModelBaseObject_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer__1notifyModelDetached_1CModelBaseObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong object_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *object = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) object_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyModelDetached(object);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_fromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEntityLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::fromStream(stream);
					}
					else
					{
						pObjectX->fromStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1fromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_fromStream_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"fromStream_CDataStream_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_fromStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial3D::Atlas::CEntityLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CEntityLayer::fromStream(stream);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getVisibleObjectPtr_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getVisibleObjectPtr_CMovableObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getVisibleObjectPtr_CMovableObject_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getVisibleObjectPtr_1IFeature(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getVisibleObjectPtr_IFeature_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getVisibleObjectPtr_IFeature_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1createVisibleObjectPtr_1IFeature(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createVisibleObjectPtr_IFeature_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createVisibleObjectPtr_IFeature_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getSceneName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSceneName_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSceneName_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getMinX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMinX_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMinX_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getMaxX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMaxX_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMaxX_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getMinY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMinY_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMinY_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getMaxY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMaxY_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMaxY_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getHeightAt_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32_callback", "(FFFJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getSceneManager_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSceneManager_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSceneManager_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getDatasetName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDatasetName_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDatasetName_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getDataSource_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDataSource_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDataSource_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getDescription_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDescription_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDescription_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setDescription_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDescription_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDescription_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1ignoreScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ignoreScale_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ignoreScale_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setIgnoreScale_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setIgnoreScale_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setIgnoreScale_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getDisplayMaxScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDisplayMaxScale_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDisplayMaxScale_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setDisplayMaxScale_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDisplayMaxScale_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDisplayMaxScale_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getDisplayMinScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDisplayMinScale_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDisplayMinScale_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setDisplayMinScale_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDisplayMinScale_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDisplayMinScale_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getSpatialReference_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSpatialReference_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSpatialReference_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1setSpatialReference_1ISpatialReference(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSpatialReference_ISpatialReference_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSpatialReference_ISpatialReference_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1getExtent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getExtent_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getExtent_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_EntityLayer_register_1draw_1ISpatialDisplay_1EVVectorLayerRendererType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEntityLayerProxy *pObjectX = (JCEntityLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_draw_ISpatialDisplay_EVVectorLayerRendererType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"draw_ISpatialDisplay_EVVectorLayerRendererType_callback", "(JI)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_ModelCommand_modelID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::ModelCommand *pObjectX = (EarthView::World::Spatial3D::Atlas::ModelCommand*) pObjXXXX;
					ev_int32 __values1 = pObjectX->modelID();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_ModelCommand_commandType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::ModelCommand *pObjectX = (EarthView::World::Spatial3D::Atlas::ModelCommand*) pObjXXXX;
					EarthView::World::Spatial3D::ModelCommandType __values1 = pObjectX->commandType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_ModelCommand_setSubIndexs_1Int3Vector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subIndexs_j)
				{
					const EarthView::World::Core::Int3Vector &subIndexs = *(EarthView::World::Core::Int3Vector*) subIndexs_j;
					EarthView::World::Spatial3D::Atlas::ModelCommand *pObjectX = (EarthView::World::Spatial3D::Atlas::ModelCommand*) pObjXXXX;
					pObjectX->setSubIndexs(subIndexs);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_ModelCommand_getSubIndexs_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::ModelCommand *pObjectX = (EarthView::World::Spatial3D::Atlas::ModelCommand*) pObjXXXX;
					const EarthView::World::Core::Int3Vector& __values1 = pObjectX->getSubIndexs();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
		}
	}
}
