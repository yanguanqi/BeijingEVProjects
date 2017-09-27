/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/geocameralistener.h"
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
			class JCGeoCameraListenerProxy : public EarthView::World::Spatial3D::CGeoCameraListener
			{
			 private:
				EarthView::World::Core::ev_string m_cameraParamChanged_CCamera_callback;
				EarthView::World::Core::ev_string m_cameraPreRenderScene_CCamera_callback;
				EarthView::World::Core::ev_string m_cameraPostRenderScene_CCamera_callback;
				EarthView::World::Core::ev_string m_cameraDestroyed_CCamera_callback;
			public:
				JCGeoCameraListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CGeoCameraListener(pList)
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
				void register_cameraParamChanged_CCamera_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_cameraParamChanged_CCamera_callback = __method;
				}
				void register_cameraPreRenderScene_CCamera_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_cameraPreRenderScene_CCamera_callback = __method;
				}
				void register_cameraPostRenderScene_CCamera_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_cameraPostRenderScene_CCamera_callback = __method;
				}
				void register_cameraDestroyed_CCamera_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_cameraDestroyed_CCamera_callback = __method;
				}
				virtual void cameraParamChanged(EarthView::World::Graphic::CCamera* camera)
				{
					if (this->_gRef != NULL && this->m_cameraParamChanged_CCamera_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("cameraParamChanged_CCamera_callback");
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
						return this->CGeoCameraListener::cameraParamChanged(camera);
					}
				}
				virtual void cameraPreRenderScene(EarthView::World::Graphic::CCamera* cam)
				{
					if (this->_gRef != NULL && this->m_cameraPreRenderScene_CCamera_callback != "" && this->isCustomExtend())
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
						jlong cam_j = (jlong) cam;
						jmethodID __method = __gr->getMethod("cameraPreRenderScene_CCamera_callback");
						__env->CallVoidMethod(__obj, __method , cam_j);
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
						return this->CGeoCameraListener::cameraPreRenderScene(cam);
					}
				}
				virtual void cameraPostRenderScene(EarthView::World::Graphic::CCamera* cam)
				{
					if (this->_gRef != NULL && this->m_cameraPostRenderScene_CCamera_callback != "" && this->isCustomExtend())
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
						jlong cam_j = (jlong) cam;
						jmethodID __method = __gr->getMethod("cameraPostRenderScene_CCamera_callback");
						__env->CallVoidMethod(__obj, __method , cam_j);
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
						return this->CGeoCameraListener::cameraPostRenderScene(cam);
					}
				}
				virtual void cameraDestroyed(EarthView::World::Graphic::CCamera* cam)
				{
					if (this->_gRef != NULL && this->m_cameraDestroyed_CCamera_callback != "" && this->isCustomExtend())
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
						jlong cam_j = (jlong) cam;
						jmethodID __method = __gr->getMethod("cameraDestroyed_CCamera_callback");
						__env->CallVoidMethod(__obj, __method , cam_j);
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
						return this->CGeoCameraListener::cameraDestroyed(cam);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCGeoCameraListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GeoCameraListener_cameraParamChanged_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong camera_j)
			{
				EarthView::World::Graphic::CCamera *camera = (EarthView::World::Graphic::CCamera*) camera_j;
				EarthView::World::Spatial3D::CGeoCameraListener *pObjectX = (EarthView::World::Spatial3D::CGeoCameraListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGeoCameraListenerProxy))
				{
					pObjectX->EarthView::World::Spatial3D::CGeoCameraListener::cameraParamChanged(camera);
				}
				else
				{
					pObjectX->cameraParamChanged(camera);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GeoCameraListener_register_1cameraParamChanged_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGeoCameraListenerProxy *pObjectX = (JCGeoCameraListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_cameraParamChanged_CCamera_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"cameraParamChanged_CCamera_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GeoCameraListener_cameraParamChanged_1CCamera_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong camera_j)
			{
				EarthView::World::Graphic::CCamera *camera = (EarthView::World::Graphic::CCamera*) camera_j;
				EarthView::World::Spatial3D::CGeoCameraListener *pObjectX = (EarthView::World::Spatial3D::CGeoCameraListener*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3D::CGeoCameraListener::cameraParamChanged(camera);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GeoCameraListener_get_1mCamera_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGeoCameraListener *pObjectX = (EarthView::World::Spatial3D::CGeoCameraListener*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->mCamera);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GeoCameraListener_set_1mCamera_1CGlobeCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CGeoCameraListener *pObjectX = (EarthView::World::Spatial3D::CGeoCameraListener*)pObjXXXX;
				pObjectX->mCamera = (EarthView::World::Spatial3D::CGlobeCamera*) __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GeoCameraListener_register_1cameraPreRenderScene_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGeoCameraListenerProxy *pObjectX = (JCGeoCameraListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_cameraPreRenderScene_CCamera_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"cameraPreRenderScene_CCamera_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GeoCameraListener_register_1cameraPostRenderScene_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGeoCameraListenerProxy *pObjectX = (JCGeoCameraListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_cameraPostRenderScene_CCamera_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"cameraPostRenderScene_CCamera_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GeoCameraListener_register_1cameraDestroyed_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGeoCameraListenerProxy *pObjectX = (JCGeoCameraListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_cameraDestroyed_CCamera_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"cameraDestroyed_CCamera_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
