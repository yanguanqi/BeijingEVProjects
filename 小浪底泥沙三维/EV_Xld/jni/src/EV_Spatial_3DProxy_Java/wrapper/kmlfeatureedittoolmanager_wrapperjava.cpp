/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dproxy/kmlfeatureedittoolmanager.h"
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
			namespace Kml
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			namespace KmlManager
			{
				class JCKmlFeatureEditToolManagerProxy : public EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager
				{
				 private:
					EarthView::World::Core::ev_string m_update_void_callback;
					EarthView::World::Core::ev_string m_refresh_void_callback;
					EarthView::World::Core::ev_string m_toolDeactivatedUpdate_void_callback;
				public:
					JCKmlFeatureEditToolManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlFeatureEditToolManager(pList)
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
					void register_update_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_update_void_callback = __method;
					}
					void register_refresh_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_refresh_void_callback = __method;
					}
					void register_toolDeactivatedUpdate_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toolDeactivatedUpdate_void_callback = __method;
					}
					virtual void refresh()
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
							return this->CKmlFeatureEditToolManager::refresh();
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
							return this->CKmlFeatureEditToolManager::update();
						}
					}
					virtual void toolDeactivatedUpdate()
					{
						if (this->_gRef != NULL && this->m_toolDeactivatedUpdate_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("toolDeactivatedUpdate_void_callback");
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
							return this->CKmlFeatureEditToolManager::toolDeactivatedUpdate();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCKmlFeatureEditToolManagerProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlFeatureEditToolManager_refresh_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlFeatureEditToolManagerProxy))
					{
						pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager::refresh();
					}
					else
					{
						pObjectX->refresh();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlFeatureEditToolManager_register_1refresh_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlFeatureEditToolManagerProxy *pObjectX = (JCKmlFeatureEditToolManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_refresh_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"refresh_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlFeatureEditToolManager_refresh_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager::refresh();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlFeatureEditToolManager_destoryCurrentTool_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager*) pObjXXXX;
					pObjectX->destoryCurrentTool();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlFeatureEditToolManager_refresh_1CGeoObjectExtension_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geoObj_j, jlong parent_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *geoObj = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) geoObj_j;
					EarthView::World::Spatial::Kml::CKmlDocument *parent = (EarthView::World::Spatial::Kml::CKmlDocument*) parent_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager*) pObjXXXX;
					pObjectX->refresh(geoObj, parent);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlFeatureEditToolManager_endEdit_1ev_1bool_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isCancelEdit_j, jlong parent_j)
				{
					ev_bool isCancelEdit = (ev_bool) isCancelEdit_j;
					EarthView::World::Spatial::Kml::CKmlDocument *parent = (EarthView::World::Spatial::Kml::CKmlDocument*) parent_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager*) pObjXXXX;
					EarthView::World::Spatial::Kml::CGeoObjectExtension* __values1 = pObjectX->endEdit(isCancelEdit, parent);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlFeatureEditToolManager_getSingletonPtr_1CSceneManager_1CCamera_1CViewport_1CKmlTreeManager(JNIEnv *__env , jclass __clazz, jlong ref_sceneMgr_j, jlong ref_camera_j, jlong ref_viewPort_j, jlong ref_treeEventObj_j)
				{
					EarthView::World::Graphic::CSceneManager *ref_sceneMgr = (EarthView::World::Graphic::CSceneManager*) ref_sceneMgr_j;
					EarthView::World::Graphic::CCamera *ref_camera = (EarthView::World::Graphic::CCamera*) ref_camera_j;
					EarthView::World::Graphic::CViewport *ref_viewPort = (EarthView::World::Graphic::CViewport*) ref_viewPort_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *ref_treeEventObj = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) ref_treeEventObj_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager* __values1 = EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager::getSingletonPtr(ref_sceneMgr, ref_camera, ref_viewPort, ref_treeEventObj);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlFeatureEditToolManager_createTool_1CGeoObjectExtension_1CKmlDocument_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong data_j, jlong parent_j, jboolean isCreate_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *data = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) data_j;
					EarthView::World::Spatial::Kml::CKmlDocument *parent = (EarthView::World::Spatial::Kml::CKmlDocument*) parent_j;
					ev_bool isCreate = (ev_bool) isCreate_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::ITool* __values1 = pObjectX->createTool(data, parent, isCreate);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlFeatureEditToolManager_get_1mCurrentTool_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mCurrentTool);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlFeatureEditToolManager_set_1mCurrentTool_1ITool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager*)pObjXXXX;
					pObjectX->mCurrentTool = (EarthView::World::Spatial::SystemUI::ITool*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlFeatureEditToolManager_get_1mSymbol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mSymbol);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlFeatureEditToolManager_set_1mSymbol_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager*)pObjXXXX;
					pObjectX->mSymbol = (EarthView::World::Spatial::Display::ISymbol*) __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlFeatureEditToolManager_register_1update_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlFeatureEditToolManagerProxy *pObjectX = (JCKmlFeatureEditToolManagerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlFeatureEditToolManager_register_1toolDeactivatedUpdate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlFeatureEditToolManagerProxy *pObjectX = (JCKmlFeatureEditToolManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toolDeactivatedUpdate_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toolDeactivatedUpdate_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
