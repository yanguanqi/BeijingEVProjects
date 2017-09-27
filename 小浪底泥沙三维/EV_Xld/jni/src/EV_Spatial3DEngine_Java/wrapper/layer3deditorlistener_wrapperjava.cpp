/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/layer3deditorlistener.h"
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
			class JCLayer3DEditorListenerProxy : public EarthView::World::Spatial3D::CLayer3DEditorListener
			{
			 private:
				EarthView::World::Core::ev_string m_onStartEditing_IGlobeLayer_callback;
				EarthView::World::Core::ev_string m_onEndEditing_IGlobeLayer_callback;
				EarthView::World::Core::ev_string m_onEndCommitModel_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32_callback;
				EarthView::World::Core::ev_string m_onInsertMeshxg_IGlobeLayer_ev_uint32_ev_uint32_callback;
			public:
				JCLayer3DEditorListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CLayer3DEditorListener(pList)
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
				void register_onStartEditing_IGlobeLayer_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onStartEditing_IGlobeLayer_callback = __method;
				}
				void register_onEndEditing_IGlobeLayer_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onEndEditing_IGlobeLayer_callback = __method;
				}
				void register_onEndCommitModel_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onEndCommitModel_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32_callback = __method;
				}
				void register_onInsertMeshxg_IGlobeLayer_ev_uint32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onInsertMeshxg_IGlobeLayer_ev_uint32_ev_uint32_callback = __method;
				}
				virtual void onStartEditing(EarthView::World::Spatial3D::Atlas::IGlobeLayer* pLayer)
				{
					if (this->_gRef != NULL && this->m_onStartEditing_IGlobeLayer_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("onStartEditing_IGlobeLayer_callback");
						__env->CallVoidMethod(__obj, __method , pLayer_j);
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
						return this->CLayer3DEditorListener::onStartEditing(pLayer);
					}
				}
				virtual void onEndEditing(EarthView::World::Spatial3D::Atlas::IGlobeLayer* pLayer)
				{
					if (this->_gRef != NULL && this->m_onEndEditing_IGlobeLayer_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("onEndEditing_IGlobeLayer_callback");
						__env->CallVoidMethod(__obj, __method , pLayer_j);
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
						return this->CLayer3DEditorListener::onEndEditing(pLayer);
					}
				}
				virtual void onEndCommitModel(EarthView::World::Spatial3D::Atlas::IGlobeLayer* pLayer, EarthView::World::Spatial3D::Dataset::EntityDatasetOperType operType, ev_uint32 cacheID, ev_uint32 dbID)
				{
					if (this->_gRef != NULL && this->m_onEndCommitModel_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32_callback != "" && this->isCustomExtend())
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
						jint operType_j = (jint) operType;
						jlong cacheID_j = (jlong) cacheID;
						jlong dbID_j = (jlong) dbID;
						jmethodID __method = __gr->getMethod("onEndCommitModel_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , pLayer_j, operType_j, cacheID_j, dbID_j);
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
						return this->CLayer3DEditorListener::onEndCommitModel(pLayer, operType, cacheID, dbID);
					}
				}
				virtual void onInsertMeshxg(EarthView::World::Spatial3D::Atlas::IGlobeLayer* pLayer, ev_uint32 cacheID, ev_uint32 recordID)
				{
					if (this->_gRef != NULL && this->m_onInsertMeshxg_IGlobeLayer_ev_uint32_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong cacheID_j = (jlong) cacheID;
						jlong recordID_j = (jlong) recordID;
						jmethodID __method = __gr->getMethod("onInsertMeshxg_IGlobeLayer_ev_uint32_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , pLayer_j, cacheID_j, recordID_j);
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
						return this->CLayer3DEditorListener::onInsertMeshxg(pLayer, cacheID, recordID);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCLayer3DEditorListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Layer3DEditorListener_onStartEditing_1IGlobeLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pLayer_j)
			{
				EarthView::World::Spatial3D::Atlas::IGlobeLayer *pLayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) pLayer_j;
				EarthView::World::Spatial3D::CLayer3DEditorListener *pObjectX = (EarthView::World::Spatial3D::CLayer3DEditorListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLayer3DEditorListenerProxy))
				{
					pObjectX->EarthView::World::Spatial3D::CLayer3DEditorListener::onStartEditing(pLayer);
				}
				else
				{
					pObjectX->onStartEditing(pLayer);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Layer3DEditorListener_register_1onStartEditing_1IGlobeLayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLayer3DEditorListenerProxy *pObjectX = (JCLayer3DEditorListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onStartEditing_IGlobeLayer_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onStartEditing_IGlobeLayer_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Layer3DEditorListener_onStartEditing_1IGlobeLayer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pLayer_j)
			{
				EarthView::World::Spatial3D::Atlas::IGlobeLayer *pLayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) pLayer_j;
				EarthView::World::Spatial3D::CLayer3DEditorListener *pObjectX = (EarthView::World::Spatial3D::CLayer3DEditorListener*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3D::CLayer3DEditorListener::onStartEditing(pLayer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Layer3DEditorListener_onEndEditing_1IGlobeLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pLayer_j)
			{
				EarthView::World::Spatial3D::Atlas::IGlobeLayer *pLayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) pLayer_j;
				EarthView::World::Spatial3D::CLayer3DEditorListener *pObjectX = (EarthView::World::Spatial3D::CLayer3DEditorListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLayer3DEditorListenerProxy))
				{
					pObjectX->EarthView::World::Spatial3D::CLayer3DEditorListener::onEndEditing(pLayer);
				}
				else
				{
					pObjectX->onEndEditing(pLayer);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Layer3DEditorListener_register_1onEndEditing_1IGlobeLayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLayer3DEditorListenerProxy *pObjectX = (JCLayer3DEditorListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onEndEditing_IGlobeLayer_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onEndEditing_IGlobeLayer_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Layer3DEditorListener_onEndEditing_1IGlobeLayer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pLayer_j)
			{
				EarthView::World::Spatial3D::Atlas::IGlobeLayer *pLayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) pLayer_j;
				EarthView::World::Spatial3D::CLayer3DEditorListener *pObjectX = (EarthView::World::Spatial3D::CLayer3DEditorListener*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3D::CLayer3DEditorListener::onEndEditing(pLayer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Layer3DEditorListener_onEndCommitModel_1IGlobeLayer_1EntityDatasetOperType_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pLayer_j, jint operType_j, jlong cacheID_j, jlong dbID_j)
			{
				EarthView::World::Spatial3D::Atlas::IGlobeLayer *pLayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) pLayer_j;
				EarthView::World::Spatial3D::Dataset::EntityDatasetOperType operType = (EarthView::World::Spatial3D::Dataset::EntityDatasetOperType) operType_j;
				ev_uint32 cacheID = (ev_uint32) cacheID_j;
				ev_uint32 dbID = (ev_uint32) dbID_j;
				EarthView::World::Spatial3D::CLayer3DEditorListener *pObjectX = (EarthView::World::Spatial3D::CLayer3DEditorListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLayer3DEditorListenerProxy))
				{
					pObjectX->EarthView::World::Spatial3D::CLayer3DEditorListener::onEndCommitModel(pLayer, operType, cacheID, dbID);
				}
				else
				{
					pObjectX->onEndCommitModel(pLayer, operType, cacheID, dbID);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Layer3DEditorListener_register_1onEndCommitModel_1IGlobeLayer_1EntityDatasetOperType_1ev_1uint32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLayer3DEditorListenerProxy *pObjectX = (JCLayer3DEditorListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onEndCommitModel_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onEndCommitModel_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32_callback", "(JIJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Layer3DEditorListener_onEndCommitModel_1IGlobeLayer_1EntityDatasetOperType_1ev_1uint32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pLayer_j, jint operType_j, jlong cacheID_j, jlong dbID_j)
			{
				EarthView::World::Spatial3D::Atlas::IGlobeLayer *pLayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) pLayer_j;
				EarthView::World::Spatial3D::Dataset::EntityDatasetOperType operType = (EarthView::World::Spatial3D::Dataset::EntityDatasetOperType) operType_j;
				ev_uint32 cacheID = (ev_uint32) cacheID_j;
				ev_uint32 dbID = (ev_uint32) dbID_j;
				EarthView::World::Spatial3D::CLayer3DEditorListener *pObjectX = (EarthView::World::Spatial3D::CLayer3DEditorListener*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3D::CLayer3DEditorListener::onEndCommitModel(pLayer, operType, cacheID, dbID);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Layer3DEditorListener_onInsertMeshxg_1IGlobeLayer_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pLayer_j, jlong cacheID_j, jlong recordID_j)
			{
				EarthView::World::Spatial3D::Atlas::IGlobeLayer *pLayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) pLayer_j;
				ev_uint32 cacheID = (ev_uint32) cacheID_j;
				ev_uint32 recordID = (ev_uint32) recordID_j;
				EarthView::World::Spatial3D::CLayer3DEditorListener *pObjectX = (EarthView::World::Spatial3D::CLayer3DEditorListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLayer3DEditorListenerProxy))
				{
					pObjectX->EarthView::World::Spatial3D::CLayer3DEditorListener::onInsertMeshxg(pLayer, cacheID, recordID);
				}
				else
				{
					pObjectX->onInsertMeshxg(pLayer, cacheID, recordID);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Layer3DEditorListener_register_1onInsertMeshxg_1IGlobeLayer_1ev_1uint32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLayer3DEditorListenerProxy *pObjectX = (JCLayer3DEditorListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onInsertMeshxg_IGlobeLayer_ev_uint32_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onInsertMeshxg_IGlobeLayer_ev_uint32_ev_uint32_callback", "(JJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Layer3DEditorListener_onInsertMeshxg_1IGlobeLayer_1ev_1uint32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pLayer_j, jlong cacheID_j, jlong recordID_j)
			{
				EarthView::World::Spatial3D::Atlas::IGlobeLayer *pLayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) pLayer_j;
				ev_uint32 cacheID = (ev_uint32) cacheID_j;
				ev_uint32 recordID = (ev_uint32) recordID_j;
				EarthView::World::Spatial3D::CLayer3DEditorListener *pObjectX = (EarthView::World::Spatial3D::CLayer3DEditorListener*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3D::CLayer3DEditorListener::onInsertMeshxg(pLayer, cacheID, recordID);
			}
		}
	}
}
