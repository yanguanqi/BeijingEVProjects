/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dproxy/kmlevent.h"
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlLayerEvent_setLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *ref_layer = (EarthView::World::Spatial::Atlas::ILayer*) ref_layer_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent*) pObjXXXX;
					pObjectX->setLayer(ref_layer);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlLayerEvent_getLayer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->getLayer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlLayerEvent_setGeoObject_1CGeoObjectExtension(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_geoObj_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *ref_geoObj = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) ref_geoObj_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent*) pObjXXXX;
					pObjectX->setGeoObject(ref_geoObj);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlLayerEvent_getGeoObject_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent*) pObjXXXX;
					EarthView::World::Spatial::Kml::CGeoObjectExtension* __values1 = pObjectX->getGeoObject();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlLayerEvent_setResponseState_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean response_j)
				{
					ev_bool response = (ev_bool) response_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent*) pObjXXXX;
					pObjectX->setResponseState(response);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlLayerEvent_getResponseState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->getResponseState();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlLayerEvent_setParent_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_parent_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *ref_parent = (EarthView::World::Spatial::Kml::CKmlDocument*) ref_parent_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent*) pObjXXXX;
					pObjectX->setParent(ref_parent);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlLayerEvent_getParent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent*) pObjXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* __values1 = pObjectX->getParent();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlLayerObjectEvent_setLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *ref_layer = (EarthView::World::Spatial::Atlas::ILayer*) ref_layer_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent*) pObjXXXX;
					pObjectX->setLayer(ref_layer);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlLayerObjectEvent_getLayer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->getLayer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlLayerObjectEvent_setGeoObject_1CGeoObjectExtension(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_geoObj_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *ref_geoObj = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) ref_geoObj_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent*) pObjXXXX;
					pObjectX->setGeoObject(ref_geoObj);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlLayerObjectEvent_getGeoObject_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent*) pObjXXXX;
					EarthView::World::Spatial::Kml::CGeoObjectExtension* __values1 = pObjectX->getGeoObject();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlLayerObjectEvent_setResponseState_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean response_j)
				{
					ev_bool response = (ev_bool) response_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent*) pObjXXXX;
					pObjectX->setResponseState(response);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlLayerObjectEvent_getResponseState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->getResponseState();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlLayerObjectEvent_setSaveFilePath_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring savePath_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* savePath_ch = (const ev_char*)__env->GetStringUTFChars(savePath_j,JNI_FALSE);
					EVString savePath = savePath_ch;
					__env->ReleaseStringUTFChars(savePath_j, (const char *)savePath_ch);
					#else
					const ev_wchar* savePath_ch = (const ev_wchar*)__env->GetStringChars(savePath_j,JNI_FALSE);
					EVString savePath = savePath_ch;
					__env->ReleaseStringChars(savePath_j, (const jchar *)savePath_ch);
					#endif
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent*) pObjXXXX;
					pObjectX->setSaveFilePath(savePath);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlLayerObjectEvent_getSaveFilePath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent*) pObjXXXX;
					EVString __values1 = pObjectX->getSaveFilePath();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlAddFolderEvent_setLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *ref_layer = (EarthView::World::Spatial::Atlas::ILayer*) ref_layer_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent*) pObjXXXX;
					pObjectX->setLayer(ref_layer);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlAddFolderEvent_getLayer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->getLayer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlAddFolderEvent_setFolder_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_folder_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *ref_folder = (EarthView::World::Spatial::Kml::CKmlDocument*) ref_folder_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent*) pObjXXXX;
					pObjectX->setFolder(ref_folder);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlAddFolderEvent_getFolder_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent*) pObjXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* __values1 = pObjectX->getFolder();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlAddFolderEvent_setResponseState_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean response_j)
				{
					ev_bool response = (ev_bool) response_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent*) pObjXXXX;
					pObjectX->setResponseState(response);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlAddFolderEvent_getResponseState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->getResponseState();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlAddFolderEvent_setParent_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_parent_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *ref_parent = (EarthView::World::Spatial::Kml::CKmlDocument*) ref_parent_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent*) pObjXXXX;
					pObjectX->setParent(ref_parent);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlAddFolderEvent_getParent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent*) pObjXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* __values1 = pObjectX->getParent();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlAddFolderEvent_setSaveFilePath_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring savePath_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* savePath_ch = (const ev_char*)__env->GetStringUTFChars(savePath_j,JNI_FALSE);
					EVString savePath = savePath_ch;
					__env->ReleaseStringUTFChars(savePath_j, (const char *)savePath_ch);
					#else
					const ev_wchar* savePath_ch = (const ev_wchar*)__env->GetStringChars(savePath_j,JNI_FALSE);
					EVString savePath = savePath_ch;
					__env->ReleaseStringChars(savePath_j, (const jchar *)savePath_ch);
					#endif
					EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent*) pObjXXXX;
					pObjectX->setSaveFilePath(savePath);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlAddFolderEvent_getSaveFilePath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent*) pObjXXXX;
					EVString __values1 = pObjectX->getSaveFilePath();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlFileEvent_setLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *ref_layer = (EarthView::World::Spatial::Atlas::ILayer*) ref_layer_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent*) pObjXXXX;
					pObjectX->setLayer(ref_layer);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlFileEvent_getLayer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->getLayer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlFileEvent_setFilePath_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filePath_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* filePath_ch = (const ev_char*)__env->GetStringUTFChars(filePath_j,JNI_FALSE);
					EVString filePath = filePath_ch;
					__env->ReleaseStringUTFChars(filePath_j, (const char *)filePath_ch);
					#else
					const ev_wchar* filePath_ch = (const ev_wchar*)__env->GetStringChars(filePath_j,JNI_FALSE);
					EVString filePath = filePath_ch;
					__env->ReleaseStringChars(filePath_j, (const jchar *)filePath_ch);
					#endif
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent*) pObjXXXX;
					pObjectX->setFilePath(filePath);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlFileEvent_getFilePath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent*) pObjXXXX;
					EVString __values1 = pObjectX->getFilePath();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlFileEvent_setResponseState_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean response_j)
				{
					ev_bool response = (ev_bool) response_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent*) pObjXXXX;
					pObjectX->setResponseState(response);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlFileEvent_getResponseState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->getResponseState();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlFileEvent_setParent_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_parent_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *ref_parent = (EarthView::World::Spatial::Kml::CKmlDocument*) ref_parent_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent*) pObjXXXX;
					pObjectX->setParent(ref_parent);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlFileEvent_getParent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent*) pObjXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* __values1 = pObjectX->getParent();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlFileEvent_setSaveFilePath_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring savePath_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* savePath_ch = (const ev_char*)__env->GetStringUTFChars(savePath_j,JNI_FALSE);
					EVString savePath = savePath_ch;
					__env->ReleaseStringUTFChars(savePath_j, (const char *)savePath_ch);
					#else
					const ev_wchar* savePath_ch = (const ev_wchar*)__env->GetStringChars(savePath_j,JNI_FALSE);
					EVString savePath = savePath_ch;
					__env->ReleaseStringChars(savePath_j, (const jchar *)savePath_ch);
					#endif
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent*) pObjXXXX;
					pObjectX->setSaveFilePath(savePath);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlFileEvent_getSaveFilePath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent*) pObjXXXX;
					EVString __values1 = pObjectX->getSaveFilePath();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlEvent_setLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *ref_layer = (EarthView::World::Spatial::Atlas::ILayer*) ref_layer_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent*) pObjXXXX;
					pObjectX->setLayer(ref_layer);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlEvent_getLayer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->getLayer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlEvent_setSaveFilePath_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring savePath_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* savePath_ch = (const ev_char*)__env->GetStringUTFChars(savePath_j,JNI_FALSE);
					EVString savePath = savePath_ch;
					__env->ReleaseStringUTFChars(savePath_j, (const char *)savePath_ch);
					#else
					const ev_wchar* savePath_ch = (const ev_wchar*)__env->GetStringChars(savePath_j,JNI_FALSE);
					EVString savePath = savePath_ch;
					__env->ReleaseStringChars(savePath_j, (const jchar *)savePath_ch);
					#endif
					EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent*) pObjXXXX;
					pObjectX->setSaveFilePath(savePath);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlEvent_getSaveFilePath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent*) pObjXXXX;
					EVString __values1 = pObjectX->getSaveFilePath();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlEvent_setParent_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_parent_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *ref_parent = (EarthView::World::Spatial::Kml::CKmlDocument*) ref_parent_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent*) pObjXXXX;
					pObjectX->setParent(ref_parent);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlEvent_getParent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent*) pObjXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* __values1 = pObjectX->getParent();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlEvent_setFilePath_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filePath_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* filePath_ch = (const ev_char*)__env->GetStringUTFChars(filePath_j,JNI_FALSE);
					EVString filePath = filePath_ch;
					__env->ReleaseStringUTFChars(filePath_j, (const char *)filePath_ch);
					#else
					const ev_wchar* filePath_ch = (const ev_wchar*)__env->GetStringChars(filePath_j,JNI_FALSE);
					EVString filePath = filePath_ch;
					__env->ReleaseStringChars(filePath_j, (const jchar *)filePath_ch);
					#endif
					EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent*) pObjXXXX;
					pObjectX->setFilePath(filePath);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlEvent_getFilePath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent*) pObjXXXX;
					EVString __values1 = pObjectX->getFilePath();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeNodeEvent_00024EVKmlTreeNodeTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CKmlTreeNodeEvent::NT_CGeoObject,
						CKmlTreeNodeEvent::NT_Tour,
						CKmlTreeNodeEvent::NT_Folder,
						CKmlTreeNodeEvent::NT_NetLink
					};
					jintArray array = __env->NewIntArray(4);
					__env->SetIntArrayRegion(array, 0, 4, enum_values);
					return array;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeNodeEvent_setTreeNodeType_1EVKmlTreeNodeType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nodeType_j)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent::EVKmlTreeNodeType nodeType = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent::EVKmlTreeNodeType) nodeType_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjXXXX;
					pObjectX->setTreeNodeType(nodeType);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeNodeEvent_getTreeNodeType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjXXXX;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent::EVKmlTreeNodeType __values1 = pObjectX->getTreeNodeType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeNodeEvent_setChildObject_1CGeoObjectExtension(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_geoObj_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *ref_geoObj = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) ref_geoObj_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjXXXX;
					pObjectX->setChildObject(ref_geoObj);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeNodeEvent_getChildObject_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjXXXX;
					EarthView::World::Spatial::Kml::CGeoObjectExtension* __values1 = pObjectX->getChildObject();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeNodeEvent_setTour_1CTour(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_tour_j)
				{
					EarthView::World::Spatial::Kml::CTour *ref_tour = (EarthView::World::Spatial::Kml::CTour*) ref_tour_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjXXXX;
					pObjectX->setTour(ref_tour);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeNodeEvent_getTour_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjXXXX;
					EarthView::World::Spatial::Kml::CTour* __values1 = pObjectX->getTour();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeNodeEvent_setLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *ref_layer = (EarthView::World::Spatial::Atlas::ILayer*) ref_layer_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjXXXX;
					pObjectX->setLayer(ref_layer);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeNodeEvent_getLayer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->getLayer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeNodeEvent_setSaveFilePath_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring savePath_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* savePath_ch = (const ev_char*)__env->GetStringUTFChars(savePath_j,JNI_FALSE);
					EVString savePath = savePath_ch;
					__env->ReleaseStringUTFChars(savePath_j, (const char *)savePath_ch);
					#else
					const ev_wchar* savePath_ch = (const ev_wchar*)__env->GetStringChars(savePath_j,JNI_FALSE);
					EVString savePath = savePath_ch;
					__env->ReleaseStringChars(savePath_j, (const jchar *)savePath_ch);
					#endif
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjXXXX;
					pObjectX->setSaveFilePath(savePath);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeNodeEvent_getSaveFilePath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjXXXX;
					EVString __values1 = pObjectX->getSaveFilePath();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeNodeEvent_setFolder_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_folder_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *ref_folder = (EarthView::World::Spatial::Kml::CKmlDocument*) ref_folder_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjXXXX;
					pObjectX->setFolder(ref_folder);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeNodeEvent_getFolder_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* __values1 = pObjectX->getFolder();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeNodeEvent_setParentObject_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_folder_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *ref_folder = (EarthView::World::Spatial::Kml::CKmlDocument*) ref_folder_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjXXXX;
					pObjectX->setParentObject(ref_folder);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeNodeEvent_getParentObject_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* __values1 = pObjectX->getParentObject();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeNodeEvent_setFilePath_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filePath_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* filePath_ch = (const ev_char*)__env->GetStringUTFChars(filePath_j,JNI_FALSE);
					EVString filePath = filePath_ch;
					__env->ReleaseStringUTFChars(filePath_j, (const char *)filePath_ch);
					#else
					const ev_wchar* filePath_ch = (const ev_wchar*)__env->GetStringChars(filePath_j,JNI_FALSE);
					EVString filePath = filePath_ch;
					__env->ReleaseStringChars(filePath_j, (const jchar *)filePath_ch);
					#endif
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjXXXX;
					pObjectX->setFilePath(filePath);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeNodeEvent_getFilePath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjXXXX;
					EVString __values1 = pObjectX->getFilePath();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeNodeEvent_getKmlNetLink_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjXXXX;
					EarthView::World::Spatial::Kml::CKmlNetworkLink* __values1 = pObjectX->getKmlNetLink();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeNodeEvent_setKmlNetLink_1CKmlNetworkLink(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_netLink_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *ref_netLink = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) ref_netLink_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjXXXX;
					pObjectX->setKmlNetLink(ref_netLink);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeNodeEvent_setNetLinkReleativeParent_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_releativeParent_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *ref_releativeParent = (EarthView::World::Spatial::Kml::CKmlDocument*) ref_releativeParent_j;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjXXXX;
					pObjectX->setNetLinkReleativeParent(ref_releativeParent);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_kmlmanager_KmlTreeNodeEvent_getNetLinkReleativeParent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent *pObjectX = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* __values1 = pObjectX->getNetLinkReleativeParent();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
