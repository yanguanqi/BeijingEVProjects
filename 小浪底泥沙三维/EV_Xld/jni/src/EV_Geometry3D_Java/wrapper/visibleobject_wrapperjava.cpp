/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/visibleobject.h"
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
		namespace Spatial3D
		{
			namespace Atlas
			{
			}
		}
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			class JCVisibleObjectListenerProxy : public EarthView::World::Geometry3D::CVisibleObjectListener
			{
			 private:
				EarthView::World::Core::ev_string m_notifyLoaded_CVisibleObject_callback;
				EarthView::World::Core::ev_string m_notifyUnloaded_CVisibleObject_callback;
				EarthView::World::Core::ev_string m_notifyAttachedToNode_CVisibleObject_CNode_callback;
				EarthView::World::Core::ev_string m_notifyDetachedFromNode_CVisibleObject_CNode_callback;
				EarthView::World::Core::ev_string m_notifyAttachedToScene_CVisibleObject_callback;
				EarthView::World::Core::ev_string m_notifyDetachedFromScene_CVisibleObject_callback;
				EarthView::World::Core::ev_string m_notifyDestroyed_CVisibleObject_callback;
			public:
				JCVisibleObjectListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CVisibleObjectListener(pList)
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
				void register_notifyLoaded_CVisibleObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_notifyLoaded_CVisibleObject_callback = __method;
				}
				void register_notifyUnloaded_CVisibleObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_notifyUnloaded_CVisibleObject_callback = __method;
				}
				void register_notifyAttachedToNode_CVisibleObject_CNode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_notifyAttachedToNode_CVisibleObject_CNode_callback = __method;
				}
				void register_notifyDetachedFromNode_CVisibleObject_CNode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_notifyDetachedFromNode_CVisibleObject_CNode_callback = __method;
				}
				void register_notifyAttachedToScene_CVisibleObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_notifyAttachedToScene_CVisibleObject_callback = __method;
				}
				void register_notifyDetachedFromScene_CVisibleObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_notifyDetachedFromScene_CVisibleObject_callback = __method;
				}
				void register_notifyDestroyed_CVisibleObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_notifyDestroyed_CVisibleObject_callback = __method;
				}
				virtual void notifyLoaded(EarthView::World::Geometry3D::CVisibleObject* pObj)
				{
					if (this->_gRef != NULL && this->m_notifyLoaded_CVisibleObject_callback != "" && this->isCustomExtend())
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
						jlong pObj_j = (jlong) pObj;
						jmethodID __method = __gr->getMethod("notifyLoaded_CVisibleObject_callback");
						__env->CallVoidMethod(__obj, __method , pObj_j);
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
						return this->CVisibleObjectListener::notifyLoaded(pObj);
					}
				}
				virtual void notifyUnloaded(EarthView::World::Geometry3D::CVisibleObject* pObj)
				{
					if (this->_gRef != NULL && this->m_notifyUnloaded_CVisibleObject_callback != "" && this->isCustomExtend())
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
						jlong pObj_j = (jlong) pObj;
						jmethodID __method = __gr->getMethod("notifyUnloaded_CVisibleObject_callback");
						__env->CallVoidMethod(__obj, __method , pObj_j);
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
						return this->CVisibleObjectListener::notifyUnloaded(pObj);
					}
				}
				virtual void notifyAttachedToNode(EarthView::World::Geometry3D::CVisibleObject* pObj, EarthView::World::Graphic::CNode* parentNode)
				{
					if (this->_gRef != NULL && this->m_notifyAttachedToNode_CVisibleObject_CNode_callback != "" && this->isCustomExtend())
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
						jlong pObj_j = (jlong) pObj;
						jlong parentNode_j = (jlong) parentNode;
						jmethodID __method = __gr->getMethod("notifyAttachedToNode_CVisibleObject_CNode_callback");
						__env->CallVoidMethod(__obj, __method , pObj_j, parentNode_j);
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
						return this->CVisibleObjectListener::notifyAttachedToNode(pObj, parentNode);
					}
				}
				virtual void notifyDetachedFromNode(EarthView::World::Geometry3D::CVisibleObject* pObj, EarthView::World::Graphic::CNode* parentNode)
				{
					if (this->_gRef != NULL && this->m_notifyDetachedFromNode_CVisibleObject_CNode_callback != "" && this->isCustomExtend())
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
						jlong pObj_j = (jlong) pObj;
						jlong parentNode_j = (jlong) parentNode;
						jmethodID __method = __gr->getMethod("notifyDetachedFromNode_CVisibleObject_CNode_callback");
						__env->CallVoidMethod(__obj, __method , pObj_j, parentNode_j);
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
						return this->CVisibleObjectListener::notifyDetachedFromNode(pObj, parentNode);
					}
				}
				virtual void notifyAttachedToScene(EarthView::World::Geometry3D::CVisibleObject* pObj)
				{
					if (this->_gRef != NULL && this->m_notifyAttachedToScene_CVisibleObject_callback != "" && this->isCustomExtend())
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
						jlong pObj_j = (jlong) pObj;
						jmethodID __method = __gr->getMethod("notifyAttachedToScene_CVisibleObject_callback");
						__env->CallVoidMethod(__obj, __method , pObj_j);
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
						return this->CVisibleObjectListener::notifyAttachedToScene(pObj);
					}
				}
				virtual void notifyDetachedFromScene(EarthView::World::Geometry3D::CVisibleObject* pObj)
				{
					if (this->_gRef != NULL && this->m_notifyDetachedFromScene_CVisibleObject_callback != "" && this->isCustomExtend())
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
						jlong pObj_j = (jlong) pObj;
						jmethodID __method = __gr->getMethod("notifyDetachedFromScene_CVisibleObject_callback");
						__env->CallVoidMethod(__obj, __method , pObj_j);
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
						return this->CVisibleObjectListener::notifyDetachedFromScene(pObj);
					}
				}
				virtual void notifyDestroyed(EarthView::World::Geometry3D::CVisibleObject* pObj)
				{
					if (this->_gRef != NULL && this->m_notifyDestroyed_CVisibleObject_callback != "" && this->isCustomExtend())
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
						jlong pObj_j = (jlong) pObj;
						jmethodID __method = __gr->getMethod("notifyDestroyed_CVisibleObject_callback");
						__env->CallVoidMethod(__obj, __method , pObj_j);
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
						return this->CVisibleObjectListener::notifyDestroyed(pObj);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCVisibleObjectListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectListener_notifyLoaded_1CVisibleObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pObj_j)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObj = (EarthView::World::Geometry3D::CVisibleObject*) pObj_j;
				EarthView::World::Geometry3D::CVisibleObjectListener *pObjectX = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectListenerProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CVisibleObjectListener::notifyLoaded(pObj);
				}
				else
				{
					pObjectX->notifyLoaded(pObj);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectListener_register_1notifyLoaded_1CVisibleObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectListenerProxy *pObjectX = (JCVisibleObjectListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_notifyLoaded_CVisibleObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"notifyLoaded_CVisibleObject_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectListener_notifyLoaded_1CVisibleObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pObj_j)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObj = (EarthView::World::Geometry3D::CVisibleObject*) pObj_j;
				EarthView::World::Geometry3D::CVisibleObjectListener *pObjectX = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CVisibleObjectListener::notifyLoaded(pObj);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectListener_notifyUnloaded_1CVisibleObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pObj_j)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObj = (EarthView::World::Geometry3D::CVisibleObject*) pObj_j;
				EarthView::World::Geometry3D::CVisibleObjectListener *pObjectX = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectListenerProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CVisibleObjectListener::notifyUnloaded(pObj);
				}
				else
				{
					pObjectX->notifyUnloaded(pObj);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectListener_register_1notifyUnloaded_1CVisibleObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectListenerProxy *pObjectX = (JCVisibleObjectListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_notifyUnloaded_CVisibleObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"notifyUnloaded_CVisibleObject_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectListener_notifyUnloaded_1CVisibleObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pObj_j)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObj = (EarthView::World::Geometry3D::CVisibleObject*) pObj_j;
				EarthView::World::Geometry3D::CVisibleObjectListener *pObjectX = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CVisibleObjectListener::notifyUnloaded(pObj);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectListener_notifyAttachedToNode_1CVisibleObject_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pObj_j, jlong parentNode_j)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObj = (EarthView::World::Geometry3D::CVisibleObject*) pObj_j;
				EarthView::World::Graphic::CNode *parentNode = (EarthView::World::Graphic::CNode*) parentNode_j;
				EarthView::World::Geometry3D::CVisibleObjectListener *pObjectX = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectListenerProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CVisibleObjectListener::notifyAttachedToNode(pObj, parentNode);
				}
				else
				{
					pObjectX->notifyAttachedToNode(pObj, parentNode);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectListener_register_1notifyAttachedToNode_1CVisibleObject_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectListenerProxy *pObjectX = (JCVisibleObjectListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_notifyAttachedToNode_CVisibleObject_CNode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"notifyAttachedToNode_CVisibleObject_CNode_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectListener_notifyAttachedToNode_1CVisibleObject_1CNode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pObj_j, jlong parentNode_j)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObj = (EarthView::World::Geometry3D::CVisibleObject*) pObj_j;
				EarthView::World::Graphic::CNode *parentNode = (EarthView::World::Graphic::CNode*) parentNode_j;
				EarthView::World::Geometry3D::CVisibleObjectListener *pObjectX = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CVisibleObjectListener::notifyAttachedToNode(pObj, parentNode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectListener_notifyDetachedFromNode_1CVisibleObject_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pObj_j, jlong parentNode_j)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObj = (EarthView::World::Geometry3D::CVisibleObject*) pObj_j;
				EarthView::World::Graphic::CNode *parentNode = (EarthView::World::Graphic::CNode*) parentNode_j;
				EarthView::World::Geometry3D::CVisibleObjectListener *pObjectX = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectListenerProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CVisibleObjectListener::notifyDetachedFromNode(pObj, parentNode);
				}
				else
				{
					pObjectX->notifyDetachedFromNode(pObj, parentNode);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectListener_register_1notifyDetachedFromNode_1CVisibleObject_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectListenerProxy *pObjectX = (JCVisibleObjectListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_notifyDetachedFromNode_CVisibleObject_CNode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"notifyDetachedFromNode_CVisibleObject_CNode_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectListener_notifyDetachedFromNode_1CVisibleObject_1CNode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pObj_j, jlong parentNode_j)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObj = (EarthView::World::Geometry3D::CVisibleObject*) pObj_j;
				EarthView::World::Graphic::CNode *parentNode = (EarthView::World::Graphic::CNode*) parentNode_j;
				EarthView::World::Geometry3D::CVisibleObjectListener *pObjectX = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CVisibleObjectListener::notifyDetachedFromNode(pObj, parentNode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectListener_notifyAttachedToScene_1CVisibleObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pObj_j)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObj = (EarthView::World::Geometry3D::CVisibleObject*) pObj_j;
				EarthView::World::Geometry3D::CVisibleObjectListener *pObjectX = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectListenerProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CVisibleObjectListener::notifyAttachedToScene(pObj);
				}
				else
				{
					pObjectX->notifyAttachedToScene(pObj);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectListener_register_1notifyAttachedToScene_1CVisibleObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectListenerProxy *pObjectX = (JCVisibleObjectListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_notifyAttachedToScene_CVisibleObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"notifyAttachedToScene_CVisibleObject_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectListener_notifyAttachedToScene_1CVisibleObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pObj_j)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObj = (EarthView::World::Geometry3D::CVisibleObject*) pObj_j;
				EarthView::World::Geometry3D::CVisibleObjectListener *pObjectX = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CVisibleObjectListener::notifyAttachedToScene(pObj);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectListener_notifyDetachedFromScene_1CVisibleObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pObj_j)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObj = (EarthView::World::Geometry3D::CVisibleObject*) pObj_j;
				EarthView::World::Geometry3D::CVisibleObjectListener *pObjectX = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectListenerProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CVisibleObjectListener::notifyDetachedFromScene(pObj);
				}
				else
				{
					pObjectX->notifyDetachedFromScene(pObj);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectListener_register_1notifyDetachedFromScene_1CVisibleObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectListenerProxy *pObjectX = (JCVisibleObjectListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_notifyDetachedFromScene_CVisibleObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"notifyDetachedFromScene_CVisibleObject_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectListener_notifyDetachedFromScene_1CVisibleObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pObj_j)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObj = (EarthView::World::Geometry3D::CVisibleObject*) pObj_j;
				EarthView::World::Geometry3D::CVisibleObjectListener *pObjectX = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CVisibleObjectListener::notifyDetachedFromScene(pObj);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectListener_notifyDestroyed_1CVisibleObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pObj_j)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObj = (EarthView::World::Geometry3D::CVisibleObject*) pObj_j;
				EarthView::World::Geometry3D::CVisibleObjectListener *pObjectX = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectListenerProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CVisibleObjectListener::notifyDestroyed(pObj);
				}
				else
				{
					pObjectX->notifyDestroyed(pObj);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectListener_register_1notifyDestroyed_1CVisibleObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectListenerProxy *pObjectX = (JCVisibleObjectListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_notifyDestroyed_CVisibleObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"notifyDestroyed_CVisibleObject_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectListener_notifyDestroyed_1CVisibleObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pObj_j)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObj = (EarthView::World::Geometry3D::CVisibleObject*) pObj_j;
				EarthView::World::Geometry3D::CVisibleObjectListener *pObjectX = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CVisibleObjectListener::notifyDestroyed(pObj);
			}
			class JCVisibleObjectProxy : public EarthView::World::Geometry3D::CVisibleObject
			{
			 private:
				EarthView::World::Core::ev_string m_getNode_void_callback;
				EarthView::World::Core::ev_string m_isLoaded_void_callback;
				EarthView::World::Core::ev_string m_isAttached_void_callback;
				EarthView::World::Core::ev_string m_load_void_callback;
				EarthView::World::Core::ev_string m_unload_void_callback;
				EarthView::World::Core::ev_string m_attachToNode_CNode_callback;
				EarthView::World::Core::ev_string m_detachFromNode_void_callback;
				EarthView::World::Core::ev_string m_attachToScene_void_callback;
				EarthView::World::Core::ev_string m_detachFromScene_void_callback;
				EarthView::World::Core::ev_string m_setUserData_CFeatureUserData_callback;
				EarthView::World::Core::ev_string m_setSelectable_ev_bool_callback;
				EarthView::World::Core::ev_string m_getSelectable_void_callback;
				EarthView::World::Core::ev_string m_update_void_callback;
				EarthView::World::Core::ev_string m_getLayer_void_callback;
				EarthView::World::Core::ev_string m_getDataset_void_callback;
				EarthView::World::Core::ev_string m_getID_void_callback;
				EarthView::World::Core::ev_string m_getName_void_callback;
				EarthView::World::Core::ev_string m_setMatrix_CMatrix4_callback;
				EarthView::World::Core::ev_string m_getMatrix_void_callback;
				EarthView::World::Core::ev_string m_setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback;
				EarthView::World::Core::ev_string m_getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback;
			public:
				JCVisibleObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CVisibleObject(pList)
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
				void register_getNode_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNode_void_callback = __method;
				}
				void register_isLoaded_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isLoaded_void_callback = __method;
				}
				void register_isAttached_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isAttached_void_callback = __method;
				}
				void register_load_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_void_callback = __method;
				}
				void register_unload_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unload_void_callback = __method;
				}
				void register_attachToNode_CNode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_attachToNode_CNode_callback = __method;
				}
				void register_detachFromNode_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_detachFromNode_void_callback = __method;
				}
				void register_attachToScene_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_attachToScene_void_callback = __method;
				}
				void register_detachFromScene_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_detachFromScene_void_callback = __method;
				}
				void register_setUserData_CFeatureUserData_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setUserData_CFeatureUserData_callback = __method;
				}
				void register_setSelectable_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setSelectable_ev_bool_callback = __method;
				}
				void register_getSelectable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSelectable_void_callback = __method;
				}
				void register_update_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_update_void_callback = __method;
				}
				void register_getLayer_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLayer_void_callback = __method;
				}
				void register_getDataset_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDataset_void_callback = __method;
				}
				void register_getID_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getID_void_callback = __method;
				}
				void register_getName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getName_void_callback = __method;
				}
				void register_setMatrix_CMatrix4_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setMatrix_CMatrix4_callback = __method;
				}
				void register_getMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMatrix_void_callback = __method;
				}
				void register_setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback = __method;
				}
				void register_getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback = __method;
				}
				virtual EarthView::World::Graphic::CNode* getNode()
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
						return this->CVisibleObject::getNode();
					}
				}
				virtual ev_bool isLoaded()
				{
					if (this->_gRef != NULL && this->m_isLoaded_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isLoaded_void_callback");
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
						return this->CVisibleObject::isLoaded();
					}
				}
				virtual ev_bool isAttached()
				{
					if (this->_gRef != NULL && this->m_isAttached_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isAttached_void_callback");
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
						return this->CVisibleObject::isAttached();
					}
				}
				virtual ev_bool load()
				{
					if (this->_gRef != NULL && this->m_load_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("load_void_callback");
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
						return this->CVisibleObject::load();
					}
				}
				virtual ev_bool unload()
				{
					if (this->_gRef != NULL && this->m_unload_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("unload_void_callback");
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
						return this->CVisibleObject::unload();
					}
				}
				virtual ev_bool attachToNode(EarthView::World::Graphic::CNode* n)
				{
					if (this->_gRef != NULL && this->m_attachToNode_CNode_callback != "" && this->isCustomExtend())
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
						jlong n_j = (jlong) n;
						jmethodID __method = __gr->getMethod("attachToNode_CNode_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , n_j);
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
						return this->CVisibleObject::attachToNode(n);
					}
				}
				virtual EarthView::World::Graphic::CNode* detachFromNode()
				{
					if (this->_gRef != NULL && this->m_detachFromNode_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("detachFromNode_void_callback");
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
						return this->CVisibleObject::detachFromNode();
					}
				}
				virtual ev_bool attachToScene()
				{
					if (this->_gRef != NULL && this->m_attachToScene_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("attachToScene_void_callback");
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
						return this->CVisibleObject::attachToScene();
					}
				}
				virtual ev_bool detachFromScene()
				{
					if (this->_gRef != NULL && this->m_detachFromScene_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("detachFromScene_void_callback");
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
						return this->CVisibleObject::detachFromScene();
					}
				}
				virtual void setUserData(EarthView::World::Spatial3D::CFeatureUserData& userData)
				{
					if (this->_gRef != NULL && this->m_setUserData_CFeatureUserData_callback != "" && this->isCustomExtend())
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
						jlong userData_j = (jlong) &userData;
						jmethodID __method = __gr->getMethod("setUserData_CFeatureUserData_callback");
						__env->CallVoidMethod(__obj, __method , userData_j);
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
						return this->CVisibleObject::setUserData(userData);
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
						return this->CVisibleObject::setSelectable(selectable);
					}
				}
				virtual ev_bool getSelectable()
				{
					if (this->_gRef != NULL && this->m_getSelectable_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSelectable_void_callback");
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
						return this->CVisibleObject::getSelectable();
					}
				}
				virtual ev_bool update()
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
						return this->CVisibleObject::update();
					}
				}
				virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer()
				{
					if (this->_gRef != NULL && this->m_getLayer_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLayer_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial3D::Atlas::IGlobeLayer *__values1 = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CVisibleObject::getLayer();
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
						return this->CVisibleObject::getDataset();
					}
				}
				virtual ev_uint32 getID()
				{
					if (this->_gRef != NULL && this->m_getID_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getID_void_callback");
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
						return this->CVisibleObject::getID();
					}
				}
				virtual EVString getName()
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
						return this->CVisibleObject::getName();
					}
				}
				virtual void setMatrix(const EarthView::World::Spatial::Math::CMatrix4& m)
				{
					if (this->_gRef != NULL && this->m_setMatrix_CMatrix4_callback != "" && this->isCustomExtend())
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
						jlong m_j = (jlong) &m;
						jmethodID __method = __gr->getMethod("setMatrix_CMatrix4_callback");
						__env->CallVoidMethod(__obj, __method , m_j);
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
						return this->CVisibleObject::setMatrix(m);
					}
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix()
				{
					if (this->_gRef != NULL && this->m_getMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getMatrix_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CMatrix4 __values1 = *(EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CVisibleObject::getMatrix();
					}
				}
				virtual void setPosition(ev_real64 latitude, ev_real64 longitude, ev_real64 altitude, const EarthView::World::Spatial::Math::CVector3& scale, const EarthView::World::Spatial::Math::CQuaternion& qua)
				{
					if (this->_gRef != NULL && this->m_setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback != "" && this->isCustomExtend())
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
						jdouble altitude_j = (jdouble) altitude;
						jlong scale_j = (jlong) &scale;
						jlong qua_j = (jlong) &qua;
						jmethodID __method = __gr->getMethod("setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback");
						__env->CallVoidMethod(__obj, __method , latitude_j, longitude_j, altitude_j, scale_j, qua_j);
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
						return this->CVisibleObject::setPosition(latitude, longitude, altitude, scale, qua);
					}
				}
				virtual void getPosition(ev_real64& latitude, ev_real64& longitude, ev_real64& altitude, EarthView::World::Spatial::Math::CVector3& scale, EarthView::World::Spatial::Math::CQuaternion& qua)
				{
					if (this->_gRef != NULL && this->m_getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback != "" && this->isCustomExtend())
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
						jlong scale_j = (jlong) &scale;
						jlong qua_j = (jlong) &qua;
						jmethodID __method = __gr->getMethod("getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback");
						__env->CallVoidMethod(__obj, __method , latitude_j, longitude_j, altitude_j, scale_j, qua_j);
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
						return this->CVisibleObject::getPosition(latitude, longitude, altitude, scale, qua);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCVisibleObjectProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObject_getNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectProxy))
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::getNode();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->getNode();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_register_1getNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectProxy *pObjectX = (JCVisibleObjectProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObject_getNode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::getNode();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_VisibleObject_isLoaded_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::isLoaded();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isLoaded();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_register_1isLoaded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectProxy *pObjectX = (JCVisibleObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isLoaded_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isLoaded_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_VisibleObject_isLoaded_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::isLoaded();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_VisibleObject_isAttached_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::isAttached();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isAttached();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_register_1isAttached_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectProxy *pObjectX = (JCVisibleObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isAttached_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isAttached_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_VisibleObject_isAttached_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::isAttached();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_VisibleObject_load_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::load();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->load();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_register_1load_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectProxy *pObjectX = (JCVisibleObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_VisibleObject_load_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::load();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_VisibleObject_unload_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::unload();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->unload();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_register_1unload_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectProxy *pObjectX = (JCVisibleObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unload_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unload_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_VisibleObject_unload_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::unload();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_VisibleObject_attachToNode_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				EarthView::World::Graphic::CNode *n = (EarthView::World::Graphic::CNode*) n_j;
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::attachToNode(n);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->attachToNode(n);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_register_1attachToNode_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectProxy *pObjectX = (JCVisibleObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_attachToNode_CNode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"attachToNode_CNode_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_VisibleObject_attachToNode_1CNode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				EarthView::World::Graphic::CNode *n = (EarthView::World::Graphic::CNode*) n_j;
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::attachToNode(n);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObject_detachFromNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectProxy))
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::detachFromNode();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->detachFromNode();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_register_1detachFromNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectProxy *pObjectX = (JCVisibleObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_detachFromNode_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"detachFromNode_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObject_detachFromNode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::detachFromNode();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_VisibleObject_attachToScene_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::attachToScene();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->attachToScene();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_register_1attachToScene_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectProxy *pObjectX = (JCVisibleObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_attachToScene_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"attachToScene_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_VisibleObject_attachToScene_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::attachToScene();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_VisibleObject_detachFromScene_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::detachFromScene();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->detachFromScene();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_register_1detachFromScene_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectProxy *pObjectX = (JCVisibleObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_detachFromScene_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"detachFromScene_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_VisibleObject_detachFromScene_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::detachFromScene();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_asynLoad_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				pObjectX->asynLoad();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_asynUnload_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				pObjectX->asynUnload();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_asynAttachToNode_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				EarthView::World::Graphic::CNode *n = (EarthView::World::Graphic::CNode*) n_j;
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				pObjectX->asynAttachToNode(n);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_asynDetachFromNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				pObjectX->asynDetachFromNode();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_asynAttachToScene_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				pObjectX->asynAttachToScene();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_asynDetachFromScene_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				pObjectX->asynDetachFromScene();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_asynRelease_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				pObjectX->asynRelease();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_asynAbort_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				pObjectX->asynAbort();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_syncAbort_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				pObjectX->syncAbort();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_lockAsynOperation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				pObjectX->lockAsynOperation();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_unlockAsynOperation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				pObjectX->unlockAsynOperation();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_addListener_1CVisibleObjectListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Geometry3D::CVisibleObjectListener *listener = (EarthView::World::Geometry3D::CVisibleObjectListener*) listener_j;
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				pObjectX->addListener(listener);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_removeListener_1CVisibleObjectListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Geometry3D::CVisibleObjectListener *listener = (EarthView::World::Geometry3D::CVisibleObjectListener*) listener_j;
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				pObjectX->removeListener(listener);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObject_getNumListener_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getNumListener();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObject_getListener_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				EarthView::World::Geometry3D::CVisibleObjectListener* __values1 = pObjectX->getListener(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_setUserData_1CFeatureUserData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong userData_j)
			{
				EarthView::World::Spatial3D::CFeatureUserData &userData = *(EarthView::World::Spatial3D::CFeatureUserData*) userData_j;
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CVisibleObject::setUserData(userData);
				}
				else
				{
					pObjectX->setUserData(userData);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_register_1setUserData_1CFeatureUserData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectProxy *pObjectX = (JCVisibleObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setUserData_CFeatureUserData_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setUserData_CFeatureUserData_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_setUserData_1CFeatureUserData_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong userData_j)
			{
				EarthView::World::Spatial3D::CFeatureUserData &userData = *(EarthView::World::Spatial3D::CFeatureUserData*) userData_j;
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CVisibleObject::setUserData(userData);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_setSelectable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean selectable_j)
			{
				ev_bool selectable = (ev_bool) selectable_j;
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CVisibleObject::setSelectable(selectable);
				}
				else
				{
					pObjectX->setSelectable(selectable);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_register_1setSelectable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectProxy *pObjectX = (JCVisibleObjectProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_setSelectable_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean selectable_j)
			{
				ev_bool selectable = (ev_bool) selectable_j;
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CVisibleObject::setSelectable(selectable);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_VisibleObject_getSelectable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::getSelectable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getSelectable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_register_1getSelectable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectProxy *pObjectX = (JCVisibleObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSelectable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSelectable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_VisibleObject_getSelectable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::getSelectable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_VisibleObject_update_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::update();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->update();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_register_1update_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectProxy *pObjectX = (JCVisibleObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_update_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"update_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_VisibleObject_update_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::update();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObject_getLayer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectProxy))
				{
					EarthView::World::Spatial3D::Atlas::IGlobeLayer* __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::getLayer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial3D::Atlas::IGlobeLayer* __values1 = pObjectX->getLayer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_register_1getLayer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectProxy *pObjectX = (JCVisibleObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLayer_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLayer_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObject_getLayer_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				EarthView::World::Spatial3D::Atlas::IGlobeLayer* __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::getLayer();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObject_getDataset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectProxy))
				{
					EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::getDataset();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_register_1getDataset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectProxy *pObjectX = (JCVisibleObjectProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObject_getDataset_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::getDataset();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObject_getID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::getID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->getID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_register_1getID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectProxy *pObjectX = (JCVisibleObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getID_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getID_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObject_getID_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::getID();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_geometry3d_VisibleObject_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::getName();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectProxy *pObjectX = (JCVisibleObjectProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_geometry3d_VisibleObject_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::getName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_setMatrix_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong m_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &m = *(EarthView::World::Spatial::Math::CMatrix4*) m_j;
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CVisibleObject::setMatrix(m);
				}
				else
				{
					pObjectX->setMatrix(m);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_register_1setMatrix_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectProxy *pObjectX = (JCVisibleObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setMatrix_CMatrix4_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setMatrix_CMatrix4_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_setMatrix_1CMatrix4_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong m_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &m = *(EarthView::World::Spatial::Math::CMatrix4*) m_j;
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CVisibleObject::setMatrix(m);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObject_getMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectProxy))
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::getMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->getMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_register_1getMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectProxy *pObjectX = (JCVisibleObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObject_getMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Geometry3D::CVisibleObject::getMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_setPosition_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jdouble altitude_j, jlong scale_j, jlong qua_j)
			{
				ev_real64 latitude = (ev_real64) latitude_j;
				ev_real64 longitude = (ev_real64) longitude_j;
				ev_real64 altitude = (ev_real64) altitude_j;
				const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				const EarthView::World::Spatial::Math::CQuaternion &qua = *(EarthView::World::Spatial::Math::CQuaternion*) qua_j;
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CVisibleObject::setPosition(latitude, longitude, altitude, scale, qua);
				}
				else
				{
					pObjectX->setPosition(latitude, longitude, altitude, scale, qua);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_register_1setPosition_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectProxy *pObjectX = (JCVisibleObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback", "(DDDJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_setPosition_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jdouble altitude_j, jlong scale_j, jlong qua_j)
			{
				ev_real64 latitude = (ev_real64) latitude_j;
				ev_real64 longitude = (ev_real64) longitude_j;
				ev_real64 altitude = (ev_real64) altitude_j;
				const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				const EarthView::World::Spatial::Math::CQuaternion &qua = *(EarthView::World::Spatial::Math::CQuaternion*) qua_j;
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CVisibleObject::setPosition(latitude, longitude, altitude, scale, qua);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_getPosition_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong latitude_j, jlong longitude_j, jlong altitude_j, jlong scale_j, jlong qua_j)
			{
				ev_real64 &latitude = *(ev_real64*) latitude_j;
				ev_real64 &longitude = *(ev_real64*) longitude_j;
				ev_real64 &altitude = *(ev_real64*) altitude_j;
				EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				EarthView::World::Spatial::Math::CQuaternion &qua = *(EarthView::World::Spatial::Math::CQuaternion*) qua_j;
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVisibleObjectProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CVisibleObject::getPosition(latitude, longitude, altitude, scale, qua);
				}
				else
				{
					pObjectX->getPosition(latitude, longitude, altitude, scale, qua);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_register_1getPosition_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVisibleObjectProxy *pObjectX = (JCVisibleObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback", "(JJJJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObject_getPosition_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong latitude_j, jlong longitude_j, jlong altitude_j, jlong scale_j, jlong qua_j)
			{
				ev_real64 &latitude = *(ev_real64*) latitude_j;
				ev_real64 &longitude = *(ev_real64*) longitude_j;
				ev_real64 &altitude = *(ev_real64*) altitude_j;
				EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				EarthView::World::Spatial::Math::CQuaternion &qua = *(EarthView::World::Spatial::Math::CQuaternion*) qua_j;
				EarthView::World::Geometry3D::CVisibleObject *pObjectX = (EarthView::World::Geometry3D::CVisibleObject*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CVisibleObject::getPosition(latitude, longitude, altitude, scale, qua);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObjectPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CVisibleObjectPtr *pObjectX = (EarthView::World::Geometry3D::CVisibleObjectPtr*) pObjXXXX;
				EarthView::World::Geometry3D::CVisibleObject* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjects_push_1back_1CVisibleObjectPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Geometry3D::CVisibleObjectPtr &t = *(EarthView::World::Geometry3D::CVisibleObjectPtr*) t_j;
				EarthView::World::Geometry3D::VisibleObjects *pObjectX = (EarthView::World::Geometry3D::VisibleObjects*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjects_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::VisibleObjects *pObjectX = (EarthView::World::Geometry3D::VisibleObjects*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObjects_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::VisibleObjects *pObjectX = (EarthView::World::Geometry3D::VisibleObjects*) pObjXXXX;
				EarthView::World::Geometry3D::CVisibleObjectPtr& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObjects_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::VisibleObjects *pObjectX = (EarthView::World::Geometry3D::VisibleObjects*) pObjXXXX;
				EarthView::World::Geometry3D::CVisibleObjectPtr& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObjects_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Geometry3D::VisibleObjects *pObjectX = (EarthView::World::Geometry3D::VisibleObjects*) pObjXXXX;
				EarthView::World::Geometry3D::CVisibleObjectPtr& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjects_insert_1ev_1uint32_1CVisibleObjectPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Geometry3D::CVisibleObjectPtr &t = *(EarthView::World::Geometry3D::CVisibleObjectPtr*) t_j;
				EarthView::World::Geometry3D::VisibleObjects *pObjectX = (EarthView::World::Geometry3D::VisibleObjects*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_VisibleObjects_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::VisibleObjects *pObjectX = (EarthView::World::Geometry3D::VisibleObjects*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObjects_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::VisibleObjects *pObjectX = (EarthView::World::Geometry3D::VisibleObjects*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjects_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Geometry3D::VisibleObjects *pObjectX = (EarthView::World::Geometry3D::VisibleObjects*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjects_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::VisibleObjects *pObjectX = (EarthView::World::Geometry3D::VisibleObjects*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectsVector_push_1back_1VisibleObjects(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Geometry3D::VisibleObjects *&t = *(EarthView::World::Geometry3D::VisibleObjects**) t_j;
				EarthView::World::Geometry3D::VisibleObjectsVector *pObjectX = (EarthView::World::Geometry3D::VisibleObjectsVector*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectsVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::VisibleObjectsVector *pObjectX = (EarthView::World::Geometry3D::VisibleObjectsVector*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObjectsVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::VisibleObjectsVector *pObjectX = (EarthView::World::Geometry3D::VisibleObjectsVector*) pObjXXXX;
				EarthView::World::Geometry3D::VisibleObjects*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObjectsVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::VisibleObjectsVector *pObjectX = (EarthView::World::Geometry3D::VisibleObjectsVector*) pObjXXXX;
				EarthView::World::Geometry3D::VisibleObjects*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObjectsVector_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Geometry3D::VisibleObjectsVector *pObjectX = (EarthView::World::Geometry3D::VisibleObjectsVector*) pObjXXXX;
				EarthView::World::Geometry3D::VisibleObjects*& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectsVector_insert_1ev_1uint32_1VisibleObjects(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Geometry3D::VisibleObjects *&t = *(EarthView::World::Geometry3D::VisibleObjects**) t_j;
				EarthView::World::Geometry3D::VisibleObjectsVector *pObjectX = (EarthView::World::Geometry3D::VisibleObjectsVector*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_VisibleObjectsVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::VisibleObjectsVector *pObjectX = (EarthView::World::Geometry3D::VisibleObjectsVector*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObjectsVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::VisibleObjectsVector *pObjectX = (EarthView::World::Geometry3D::VisibleObjectsVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectsVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Geometry3D::VisibleObjectsVector *pObjectX = (EarthView::World::Geometry3D::VisibleObjectsVector*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectsVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::VisibleObjectsVector *pObjectX = (EarthView::World::Geometry3D::VisibleObjectsVector*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectsVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Geometry3D::VisibleObjectsVector *pObjectX = (EarthView::World::Geometry3D::VisibleObjectsVector*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectPtrVector_push_1back_1CVisibleObjectPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Geometry3D::CVisibleObjectPtr &t = *(EarthView::World::Geometry3D::CVisibleObjectPtr*) t_j;
				EarthView::World::Geometry3D::VisibleObjectPtrVector *pObjectX = (EarthView::World::Geometry3D::VisibleObjectPtrVector*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectPtrVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::VisibleObjectPtrVector *pObjectX = (EarthView::World::Geometry3D::VisibleObjectPtrVector*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObjectPtrVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::VisibleObjectPtrVector *pObjectX = (EarthView::World::Geometry3D::VisibleObjectPtrVector*) pObjXXXX;
				EarthView::World::Geometry3D::CVisibleObjectPtr& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObjectPtrVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::VisibleObjectPtrVector *pObjectX = (EarthView::World::Geometry3D::VisibleObjectPtrVector*) pObjXXXX;
				EarthView::World::Geometry3D::CVisibleObjectPtr& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectPtrVector_insert_1ev_1uint32_1CVisibleObjectPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Geometry3D::CVisibleObjectPtr &t = *(EarthView::World::Geometry3D::CVisibleObjectPtr*) t_j;
				EarthView::World::Geometry3D::VisibleObjectPtrVector *pObjectX = (EarthView::World::Geometry3D::VisibleObjectPtrVector*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectPtrVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Geometry3D::VisibleObjectPtrVector *pObjectX = (EarthView::World::Geometry3D::VisibleObjectPtrVector*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_VisibleObjectPtrVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::VisibleObjectPtrVector *pObjectX = (EarthView::World::Geometry3D::VisibleObjectPtrVector*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObjectPtrVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Geometry3D::VisibleObjectPtrVector& pObjectX = *(EarthView::World::Geometry3D::VisibleObjectPtrVector*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Geometry3D::CVisibleObjectPtr& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObjectPtrVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Geometry3D::VisibleObjectPtrVector *pObjectX = (EarthView::World::Geometry3D::VisibleObjectPtrVector*) pObjXXXX;
				EarthView::World::Geometry3D::CVisibleObjectPtr& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleObjectPtrVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::VisibleObjectPtrVector *pObjectX = (EarthView::World::Geometry3D::VisibleObjectPtrVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectPtrVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Geometry3D::VisibleObjectPtrVector *pObjectX = (EarthView::World::Geometry3D::VisibleObjectPtrVector*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectPtrVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Geometry3D::VisibleObjectPtrVector *pObjectX = (EarthView::World::Geometry3D::VisibleObjectPtrVector*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleObjectPtrVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::VisibleObjectPtrVector *pObjectX = (EarthView::World::Geometry3D::VisibleObjectPtrVector*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleobjectVector_push_1back_1CVisibleObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Geometry3D::CVisibleObject *&ref_t = *(EarthView::World::Geometry3D::CVisibleObject**) ref_t_j;
				EarthView::World::Geometry3D::CVisibleobjectVector *pObjectX = (EarthView::World::Geometry3D::CVisibleobjectVector*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleobjectVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleobjectVector *pObjectX = (EarthView::World::Geometry3D::CVisibleobjectVector*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleobjectVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleobjectVector *pObjectX = (EarthView::World::Geometry3D::CVisibleobjectVector*) pObjXXXX;
				EarthView::World::Geometry3D::CVisibleObject*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleobjectVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleobjectVector *pObjectX = (EarthView::World::Geometry3D::CVisibleobjectVector*) pObjXXXX;
				EarthView::World::Geometry3D::CVisibleObject*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleobjectVector_insert_1ev_1uint32_1CVisibleObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Geometry3D::CVisibleObject *&ref_t = *(EarthView::World::Geometry3D::CVisibleObject**) ref_t_j;
				EarthView::World::Geometry3D::CVisibleobjectVector *pObjectX = (EarthView::World::Geometry3D::CVisibleobjectVector*) pObjXXXX;
				pObjectX->insert(pos, ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleobjectVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Geometry3D::CVisibleobjectVector *pObjectX = (EarthView::World::Geometry3D::CVisibleobjectVector*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_VisibleobjectVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CVisibleobjectVector *pObjectX = (EarthView::World::Geometry3D::CVisibleobjectVector*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleobjectVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Geometry3D::CVisibleobjectVector& pObjectX = *(EarthView::World::Geometry3D::CVisibleobjectVector*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Geometry3D::CVisibleObject*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleobjectVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Geometry3D::CVisibleobjectVector *pObjectX = (EarthView::World::Geometry3D::CVisibleobjectVector*) pObjXXXX;
				EarthView::World::Geometry3D::CVisibleObject*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VisibleobjectVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CVisibleobjectVector *pObjectX = (EarthView::World::Geometry3D::CVisibleobjectVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleobjectVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Geometry3D::CVisibleobjectVector *pObjectX = (EarthView::World::Geometry3D::CVisibleobjectVector*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleobjectVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Geometry3D::CVisibleobjectVector *pObjectX = (EarthView::World::Geometry3D::CVisibleobjectVector*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VisibleobjectVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVisibleobjectVector *pObjectX = (EarthView::World::Geometry3D::CVisibleobjectVector*) pObjXXXX;
				pObjectX->clear();
			}
		}
	}
}
