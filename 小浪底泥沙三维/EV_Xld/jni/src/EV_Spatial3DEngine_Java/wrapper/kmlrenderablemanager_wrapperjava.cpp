/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/kmlrenderablemanager.h"
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
		namespace Spatial3D
		{
			namespace Atlas
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRequestData_get_1mpGeoObject_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CKmlRequestData *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRequestData*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mpGeoObject);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRequestData_set_1mpGeoObject_1CGeoObjectExtension(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Atlas::CKmlRequestData *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRequestData*)pObjXXXX;
					pObjectX->mpGeoObject = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRequestData_get_1mpKmlDoc_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CKmlRequestData *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRequestData*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mpKmlDoc);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRequestData_set_1mpKmlDoc_1CKmlDocument(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Atlas::CKmlRequestData *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRequestData*)pObjXXXX;
					pObjectX->mpKmlDoc = (EarthView::World::Spatial::Kml::CKmlDocument*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRequestData_get_1mpParentKmlDoc_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CKmlRequestData *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRequestData*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mpParentKmlDoc);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRequestData_set_1mpParentKmlDoc_1CKmlDocument(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Atlas::CKmlRequestData *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRequestData*)pObjXXXX;
					pObjectX->mpParentKmlDoc = (EarthView::World::Spatial::Kml::CKmlDocument*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRequestData_get_1mpCamera_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CKmlRequestData *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRequestData*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mpCamera);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRequestData_set_1mpCamera_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Atlas::CKmlRequestData *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRequestData*)pObjXXXX;
					pObjectX->mpCamera = (EarthView::World::Graphic::CCamera*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRequestData_get_1mpLayer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CKmlRequestData *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRequestData*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mpLayer);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRequestData_set_1mpLayer_1IGlobeLayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Atlas::CKmlRequestData *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRequestData*)pObjXXXX;
					pObjectX->mpLayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) __values1_j;
				}
				class JCKmlRenderableManagerProxy : public EarthView::World::Spatial3D::Atlas::CKmlRenderableManager
				{
				 private:
					EarthView::World::Core::ev_string m_onEvent_CEvent_callback;
					EarthView::World::Core::ev_string m_onTimerEvent_CTimerEvent_callback;
					EarthView::World::Core::ev_string m_onCustomEvent_CEvent_callback;
				public:
					JCKmlRenderableManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlRenderableManager(pList)
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
					void register_onEvent_CEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onEvent_CEvent_callback = __method;
					}
					void register_onTimerEvent_CTimerEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onTimerEvent_CTimerEvent_callback = __method;
					}
					void register_onCustomEvent_CEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onCustomEvent_CEvent_callback = __method;
					}
					virtual void onTimerEvent(EarthView::World::Core::CTimerEvent* e)
					{
						if (this->_gRef != NULL && this->m_onTimerEvent_CTimerEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onTimerEvent_CTimerEvent_callback");
							__env->CallVoidMethod(__obj, __method , e_j);
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
							return this->CKmlRenderableManager::onTimerEvent(e);
						}
					}
					virtual ev_bool onEvent(EarthView::World::Core::CEvent* e)
					{
						if (this->_gRef != NULL && this->m_onEvent_CEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onEvent_CEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
							return this->CKmlRenderableManager::onEvent(e);
						}
					}
					virtual void onCustomEvent(EarthView::World::Core::CEvent* e)
					{
						if (this->_gRef != NULL && this->m_onCustomEvent_CEvent_callback != "" && this->isCustomExtend())
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
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("onCustomEvent_CEvent_callback");
							__env->CallVoidMethod(__obj, __method , e_j);
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
							return this->CKmlRenderableManager::onCustomEvent(e);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCKmlRenderableManagerProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_createRenderable_1CGeoObjectExtension_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geoObj_j, jlong camera_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *geoObj = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) geoObj_j;
					const EarthView::World::Graphic::CCamera *camera = (const EarthView::World::Graphic::CCamera*) camera_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					EarthView::World::Geometry3D::VisibleObjects __values1 = pObjectX->createRenderable(geoObj, camera);
					EarthView::World::Geometry3D::VisibleObjects *returnvalues = new EarthView::World::Geometry3D::VisibleObjects(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_destoryRenderable_1CGeoObjectExtension(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geoObj_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *geoObj = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) geoObj_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->destoryRenderable(geoObj);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_getVisibleObjects_1CGeoObjectExtension(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geoObj_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *geoObj = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) geoObj_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					EarthView::World::Geometry3D::VisibleObjects __values1 = pObjectX->getVisibleObjects(geoObj);
					EarthView::World::Geometry3D::VisibleObjects *returnvalues = new EarthView::World::Geometry3D::VisibleObjects(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_hasVisibleObjects_1CGeoObjectExtension(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geoObj_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *geoObj = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) geoObj_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->hasVisibleObjects(geoObj);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_addVisibleObject_1CGeoObjectExtension_1VisibleObjects(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geoObj_j, jlong objs_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *geoObj = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) geoObj_j;
					EarthView::World::Geometry3D::VisibleObjects &objs = *(EarthView::World::Geometry3D::VisibleObjects*) objs_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->addVisibleObject(geoObj, objs);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_removeVisibleObject_1CGeoObjectExtension(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geoObj_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *geoObj = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) geoObj_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->removeVisibleObject(geoObj);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_disposeCGeoObject_1CGeoObjectExtension(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geoObj_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *geoObj = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) geoObj_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->disposeCGeoObject(geoObj);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_recreateRenderable_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong camera_j)
				{
					const EarthView::World::Graphic::CCamera *camera = (const EarthView::World::Graphic::CCamera*) camera_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->recreateRenderable(camera);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_refreshVisible_1ev_1bool_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean layerVisible_j, jlong camera_j)
				{
					ev_bool layerVisible = (ev_bool) layerVisible_j;
					const EarthView::World::Graphic::CCamera *camera = (const EarthView::World::Graphic::CCamera*) camera_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->refreshVisible(layerVisible, camera);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_refreshImageOverlayer_1ev_1int32_1ev_1int32_1ev_1int32_1CTileData_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jint row_j, jint col_j, jlong tile_j, jlong flag_j)
				{
					ev_int32 level = (ev_int32) level_j;
					ev_int32 row = (ev_int32) row_j;
					ev_int32 col = (ev_int32) col_j;
					EarthView::World::Spatial::CTileData &tile = *(EarthView::World::Spatial::CTileData*) tile_j;
					int &flag = *(int*) flag_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->refreshImageOverlayer(level, row, col, tile, flag);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_refreshImageOverlayer_1Real_1Real_1Real_1Real_1CTileData_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble minX_j, jdouble minY_j, jdouble maxX_j, jdouble maxY_j, jlong tile_j, jlong flag_j)
				{
					Real minX = (Real) minX_j;
					Real minY = (Real) minY_j;
					Real maxX = (Real) maxX_j;
					Real maxY = (Real) maxY_j;
					EarthView::World::Spatial::CTileData &tile = *(EarthView::World::Spatial::CTileData*) tile_j;
					int &flag = *(int*) flag_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->refreshImageOverlayer(minX, minY, maxX, maxY, tile, flag);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_refreshSelectable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean selectable_j)
				{
					ev_bool selectable = (ev_bool) selectable_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->refreshSelectable(selectable);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_refreshSelectable_1CGeoObjectExtension_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geoObj_j, jboolean selectable_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *geoObj = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) geoObj_j;
					ev_bool selectable = (ev_bool) selectable_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->refreshSelectable(geoObj, selectable);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_iterateRefreshVisible_1ev_1bool_1CCamera_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean layerVisible_j, jlong camera_j, jlong kmlDoc_j)
				{
					ev_bool layerVisible = (ev_bool) layerVisible_j;
					const EarthView::World::Graphic::CCamera *camera = (const EarthView::World::Graphic::CCamera*) camera_j;
					EarthView::World::Spatial::Kml::CKmlDocument *kmlDoc = (EarthView::World::Spatial::Kml::CKmlDocument*) kmlDoc_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->iterateRefreshVisible(layerVisible, camera, kmlDoc);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_checkEmpty_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong kmlDoc_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *kmlDoc = (EarthView::World::Spatial::Kml::CKmlDocument*) kmlDoc_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->checkEmpty(kmlDoc);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager__1notifyDataChanged_1EVString_1EVString_1CEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strDataSourceName_j, jstring strDatasetName_j, jlong pEvent_j)
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
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->_notifyDataChanged(strDataSourceName, strDatasetName, pEvent);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_getPanoramaTiles_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					EarthView::World::Geometry3D::VisibleObjects __values1 = pObjectX->getPanoramaTiles();
					EarthView::World::Geometry3D::VisibleObjects *returnvalues = new EarthView::World::Geometry3D::VisibleObjects(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_processBatchObject_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong kmlDoc_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *kmlDoc = (EarthView::World::Spatial::Kml::CKmlDocument*) kmlDoc_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->processBatchObject(kmlDoc);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_initBatchObject_1CKmlDocument_1CKmlDocument_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong kmlDoc_j, jlong rootDoc_j, jlong cam_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *kmlDoc = (EarthView::World::Spatial::Kml::CKmlDocument*) kmlDoc_j;
					EarthView::World::Spatial::Kml::CKmlDocument *rootDoc = (EarthView::World::Spatial::Kml::CKmlDocument*) rootDoc_j;
					const EarthView::World::Graphic::CCamera *cam = (const EarthView::World::Graphic::CCamera*) cam_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->initBatchObject(kmlDoc, rootDoc, cam);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_destoryBatchObject_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong kmlDoc_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *kmlDoc = (EarthView::World::Spatial::Kml::CKmlDocument*) kmlDoc_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->destoryBatchObject(kmlDoc);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_isBatchObject_1CGeoObjectExtension_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_geo_j, jboolean enableEditingCheck_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *ref_geo = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) ref_geo_j;
					ev_bool enableEditingCheck = (ev_bool) enableEditingCheck_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->isBatchObject(ref_geo, enableEditingCheck);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_rebuild_1CGeoObjectExtension(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_geo_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *ref_geo = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) ref_geo_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->rebuild(ref_geo);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_synDestoryBatchObject_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong kmlDoc_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *kmlDoc = (EarthView::World::Spatial::Kml::CKmlDocument*) kmlDoc_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->synDestoryBatchObject(kmlDoc);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_isRunningInThread_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->isRunningInThread();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_synBuildBatchObject_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong kmlDoc_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *kmlDoc = (EarthView::World::Spatial::Kml::CKmlDocument*) kmlDoc_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->synBuildBatchObject(kmlDoc);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_initNewBatchObject_1CKmlDocument_1CKmlDocument_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong kmlDoc_j, jlong rootDoc_j, jlong cam_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *kmlDoc = (EarthView::World::Spatial::Kml::CKmlDocument*) kmlDoc_j;
					EarthView::World::Spatial::Kml::CKmlDocument *rootDoc = (EarthView::World::Spatial::Kml::CKmlDocument*) rootDoc_j;
					const EarthView::World::Graphic::CCamera *cam = (const EarthView::World::Graphic::CCamera*) cam_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->initNewBatchObject(kmlDoc, rootDoc, cam);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_processNewObject_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong kmlDoc_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *kmlDoc = (EarthView::World::Spatial::Kml::CKmlDocument*) kmlDoc_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->processNewObject(kmlDoc);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_destoryNewBatchObject_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong kmlDoc_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *kmlDoc = (EarthView::World::Spatial::Kml::CKmlDocument*) kmlDoc_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->destoryNewBatchObject(kmlDoc);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_destoryRegionBatchObject_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong kmlDoc_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *kmlDoc = (EarthView::World::Spatial::Kml::CKmlDocument*) kmlDoc_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->destoryRegionBatchObject(kmlDoc);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_synDestoryRegionBatchObject_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong kmlDoc_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *kmlDoc = (EarthView::World::Spatial::Kml::CKmlDocument*) kmlDoc_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->synDestoryRegionBatchObject(kmlDoc);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_isSwitch_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->isSwitch();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_iterateRefreshBatchObjects_1ev_1bool_1CCamera_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean layerVisible_j, jlong camera_j, jlong kmlDoc_j)
				{
					ev_bool layerVisible = (ev_bool) layerVisible_j;
					const EarthView::World::Graphic::CCamera *camera = (const EarthView::World::Graphic::CCamera*) camera_j;
					EarthView::World::Spatial::Kml::CKmlDocument *kmlDoc = (EarthView::World::Spatial::Kml::CKmlDocument*) kmlDoc_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->iterateRefreshBatchObjects(layerVisible, camera, kmlDoc);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_iterateRefreshDynamicObjects_1ev_1bool_1CCamera_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean layerVisible_j, jlong camera_j, jlong kmlDoc_j)
				{
					ev_bool layerVisible = (ev_bool) layerVisible_j;
					const EarthView::World::Graphic::CCamera *camera = (const EarthView::World::Graphic::CCamera*) camera_j;
					EarthView::World::Spatial::Kml::CKmlDocument *kmlDoc = (EarthView::World::Spatial::Kml::CKmlDocument*) kmlDoc_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->iterateRefreshDynamicObjects(layerVisible, camera, kmlDoc);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_iterateRefreshBatchObjects_1ev_1bool_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean layerVisible_j, jlong camera_j)
				{
					ev_bool layerVisible = (ev_bool) layerVisible_j;
					const EarthView::World::Graphic::CCamera *camera = (const EarthView::World::Graphic::CCamera*) camera_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->iterateRefreshBatchObjects(layerVisible, camera);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_checkBatchVisible_1ev_1bool_1CCamera_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean layerVisible_j, jlong camera_j, jboolean isBatch_j)
				{
					ev_bool layerVisible = (ev_bool) layerVisible_j;
					const EarthView::World::Graphic::CCamera *camera = (const EarthView::World::Graphic::CCamera*) camera_j;
					ev_bool isBatch = (ev_bool) isBatch_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->checkBatchVisible(layerVisible, camera, isBatch);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_refreshDynamicBatchVisible_1ev_1bool_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean layerVisible_j, jlong camera_j)
				{
					ev_bool layerVisible = (ev_bool) layerVisible_j;
					const EarthView::World::Graphic::CCamera *camera = (const EarthView::World::Graphic::CCamera*) camera_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->refreshDynamicBatchVisible(layerVisible, camera);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_refreshDynamicGeoObjectVisible_1CKmlDocument_1CGeoObjectExtension_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong kmlDoc_j, jlong ref_geo_j, jboolean visible_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *kmlDoc = (EarthView::World::Spatial::Kml::CKmlDocument*) kmlDoc_j;
					EarthView::World::Spatial::Kml::CGeoObjectExtension *ref_geo = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) ref_geo_j;
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->refreshDynamicGeoObjectVisible(kmlDoc, ref_geo, visible);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_calculatePixel_1CGeoObjectExtensionAttribute_1CCamera_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong attribute_j, jlong camera_j, jlong num_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute &attribute = *(EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) attribute_j;
					const EarthView::World::Graphic::CCamera *camera = (const EarthView::World::Graphic::CCamera*) camera_j;
					ev_real64 &num = *(ev_real64*) num_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->calculatePixel(attribute, camera, num);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_checkPixelVisible_1CGeoObjectExtensionAttribute_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong attr_j, jlong camera_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute &attr = *(EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) attr_j;
					const EarthView::World::Graphic::CCamera *camera = (const EarthView::World::Graphic::CCamera*) camera_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->checkPixelVisible(attr, camera);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_findBatchDocument_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong kmlDoc_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *kmlDoc = (EarthView::World::Spatial::Kml::CKmlDocument*) kmlDoc_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* __values1 = pObjectX->findBatchDocument(kmlDoc);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_checkDocLodPass_1CKmlDocument_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong kmlDoc_j, jlong camera_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *kmlDoc = (EarthView::World::Spatial::Kml::CKmlDocument*) kmlDoc_j;
					const EarthView::World::Graphic::CCamera *camera = (const EarthView::World::Graphic::CCamera*) camera_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->checkDocLodPass(kmlDoc, camera);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_checkNetLinkLodPass_1CKmlNetworkLink_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong netlink_j, jlong camera_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *netlink = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) netlink_j;
					const EarthView::World::Graphic::CCamera *camera = (const EarthView::World::Graphic::CCamera*) camera_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->checkNetLinkLodPass(netlink, camera);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_waitResponses_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->waitResponses();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_onTimerEvent_1CTimerEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Core::CTimerEvent *e = (EarthView::World::Core::CTimerEvent*) e_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlRenderableManagerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CKmlRenderableManager::onTimerEvent(e);
					}
					else
					{
						pObjectX->onTimerEvent(e);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_register_1onTimerEvent_1CTimerEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlRenderableManagerProxy *pObjectX = (JCKmlRenderableManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onTimerEvent_CTimerEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onTimerEvent_CTimerEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_onTimerEvent_1CTimerEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Core::CTimerEvent *e = (EarthView::World::Core::CTimerEvent*) e_j;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CKmlRenderableManager::onTimerEvent(e);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_register_1onEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlRenderableManagerProxy *pObjectX = (JCKmlRenderableManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onEvent_CEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onEvent_CEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_KmlRenderableManager_register_1onCustomEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlRenderableManagerProxy *pObjectX = (JCKmlRenderableManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onCustomEvent_CEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onCustomEvent_CEvent_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
