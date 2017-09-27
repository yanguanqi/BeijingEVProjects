/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/appatlas.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Utilities
		{
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_utilities_AppAtlas_00024LayerType3DHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					AppAtlas::KML,
					AppAtlas::Feature,
					AppAtlas::Image,
					AppAtlas::Terrian
				};
				jintArray array = __env->NewIntArray(4);
				__env->SetIntArrayRegion(array, 0, 4, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_utilities_AppAtlas_00024TileTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					AppAtlas::WebMercator,
					AppAtlas::WGS84
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_AppAtlas_create3DLayer_1EVString_1EVString_1EVString_1LayerType3D(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sceneName_j, jstring dataSourceAliasName_j, jstring datasetName_j, jint type_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sceneName_ch = (const ev_char*)__env->GetStringUTFChars(sceneName_j,JNI_FALSE);
				const EVString sceneName = sceneName_ch;
				__env->ReleaseStringUTFChars(sceneName_j, (const char *)sceneName_ch);
				#else
				const ev_wchar* sceneName_ch = (const ev_wchar*)__env->GetStringChars(sceneName_j,JNI_FALSE);
				const EVString sceneName = sceneName_ch;
				__env->ReleaseStringChars(sceneName_j, (const jchar *)sceneName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dataSourceAliasName_ch = (const ev_char*)__env->GetStringUTFChars(dataSourceAliasName_j,JNI_FALSE);
				const EVString dataSourceAliasName = dataSourceAliasName_ch;
				__env->ReleaseStringUTFChars(dataSourceAliasName_j, (const char *)dataSourceAliasName_ch);
				#else
				const ev_wchar* dataSourceAliasName_ch = (const ev_wchar*)__env->GetStringChars(dataSourceAliasName_j,JNI_FALSE);
				const EVString dataSourceAliasName = dataSourceAliasName_ch;
				__env->ReleaseStringChars(dataSourceAliasName_j, (const jchar *)dataSourceAliasName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
				const EVString datasetName = datasetName_ch;
				__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
				#else
				const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
				const EVString datasetName = datasetName_ch;
				__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
				#endif
				EarthView::World::Utilities::AppAtlas::LayerType3D type = (EarthView::World::Utilities::AppAtlas::LayerType3D) type_j;
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->create3DLayer(sceneName, dataSourceAliasName, datasetName, type);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_AppAtlas_create3DLayer_1EVString_1EVString_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dataSourceAliasName_j, jstring datasetName_j, jlong parentLayer_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dataSourceAliasName_ch = (const ev_char*)__env->GetStringUTFChars(dataSourceAliasName_j,JNI_FALSE);
				const EVString dataSourceAliasName = dataSourceAliasName_ch;
				__env->ReleaseStringUTFChars(dataSourceAliasName_j, (const char *)dataSourceAliasName_ch);
				#else
				const ev_wchar* dataSourceAliasName_ch = (const ev_wchar*)__env->GetStringChars(dataSourceAliasName_j,JNI_FALSE);
				const EVString dataSourceAliasName = dataSourceAliasName_ch;
				__env->ReleaseStringChars(dataSourceAliasName_j, (const jchar *)dataSourceAliasName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
				const EVString datasetName = datasetName_ch;
				__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
				#else
				const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
				const EVString datasetName = datasetName_ch;
				__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
				#endif
				EarthView::World::Spatial::Atlas::ILayer *parentLayer = (EarthView::World::Spatial::Atlas::ILayer*) parentLayer_j;
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->create3DLayer(dataSourceAliasName, datasetName, parentLayer);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_AppAtlas_create3DGroupLayer_1EVString_1EVString_1LayerType3D(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sceneName_j, jstring groupName_j, jint type_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sceneName_ch = (const ev_char*)__env->GetStringUTFChars(sceneName_j,JNI_FALSE);
				const EVString sceneName = sceneName_ch;
				__env->ReleaseStringUTFChars(sceneName_j, (const char *)sceneName_ch);
				#else
				const ev_wchar* sceneName_ch = (const ev_wchar*)__env->GetStringChars(sceneName_j,JNI_FALSE);
				const EVString sceneName = sceneName_ch;
				__env->ReleaseStringChars(sceneName_j, (const jchar *)sceneName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Utilities::AppAtlas::LayerType3D type = (EarthView::World::Utilities::AppAtlas::LayerType3D) type_j;
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->create3DGroupLayer(sceneName, groupName, type);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_AppAtlas_create3DGroupLayer_1EVString_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring groupName_j, jlong parentLayer_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Spatial::Atlas::ILayer *parentLayer = (EarthView::World::Spatial::Atlas::ILayer*) parentLayer_j;
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->create3DGroupLayer(groupName, parentLayer);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_AppAtlas_get3DLayer_1EVString_1EVString_1LayerType3D(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sceneName_j, jstring layerName_j, jint type_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sceneName_ch = (const ev_char*)__env->GetStringUTFChars(sceneName_j,JNI_FALSE);
				const EVString sceneName = sceneName_ch;
				__env->ReleaseStringUTFChars(sceneName_j, (const char *)sceneName_ch);
				#else
				const ev_wchar* sceneName_ch = (const ev_wchar*)__env->GetStringChars(sceneName_j,JNI_FALSE);
				const EVString sceneName = sceneName_ch;
				__env->ReleaseStringChars(sceneName_j, (const jchar *)sceneName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* layerName_ch = (const ev_char*)__env->GetStringUTFChars(layerName_j,JNI_FALSE);
				const EVString layerName = layerName_ch;
				__env->ReleaseStringUTFChars(layerName_j, (const char *)layerName_ch);
				#else
				const ev_wchar* layerName_ch = (const ev_wchar*)__env->GetStringChars(layerName_j,JNI_FALSE);
				const EVString layerName = layerName_ch;
				__env->ReleaseStringChars(layerName_j, (const jchar *)layerName_ch);
				#endif
				EarthView::World::Utilities::AppAtlas::LayerType3D type = (EarthView::World::Utilities::AppAtlas::LayerType3D) type_j;
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->get3DLayer(sceneName, layerName, type);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_AppAtlas_get3DLayer_1EVString_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring layerName_j, jlong parentLayer_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* layerName_ch = (const ev_char*)__env->GetStringUTFChars(layerName_j,JNI_FALSE);
				const EVString layerName = layerName_ch;
				__env->ReleaseStringUTFChars(layerName_j, (const char *)layerName_ch);
				#else
				const ev_wchar* layerName_ch = (const ev_wchar*)__env->GetStringChars(layerName_j,JNI_FALSE);
				const EVString layerName = layerName_ch;
				__env->ReleaseStringChars(layerName_j, (const jchar *)layerName_ch);
				#endif
				const EarthView::World::Spatial::Atlas::ILayer *parentLayer = (const EarthView::World::Spatial::Atlas::ILayer*) parentLayer_j;
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->get3DLayer(layerName, parentLayer);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_utilities_AppAtlas_delete3DLayer_1EVString_1ILayer_1LayerType3D(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sceneName_j, jlong layer_j, jint type_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sceneName_ch = (const ev_char*)__env->GetStringUTFChars(sceneName_j,JNI_FALSE);
				const EVString sceneName = sceneName_ch;
				__env->ReleaseStringUTFChars(sceneName_j, (const char *)sceneName_ch);
				#else
				const ev_wchar* sceneName_ch = (const ev_wchar*)__env->GetStringChars(sceneName_j,JNI_FALSE);
				const EVString sceneName = sceneName_ch;
				__env->ReleaseStringChars(sceneName_j, (const jchar *)sceneName_ch);
				#endif
				const EarthView::World::Spatial::Atlas::ILayer *layer = (const EarthView::World::Spatial::Atlas::ILayer*) layer_j;
				EarthView::World::Utilities::AppAtlas::LayerType3D type = (EarthView::World::Utilities::AppAtlas::LayerType3D) type_j;
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				bool __values1 = pObjectX->delete3DLayer(sceneName, layer, type);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_utilities_AppAtlas_delete3DLayer_1ILayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j, jlong parentLayer_j)
			{
				const EarthView::World::Spatial::Atlas::ILayer *layer = (const EarthView::World::Spatial::Atlas::ILayer*) layer_j;
				const EarthView::World::Spatial::Atlas::ILayer *parentLayer = (const EarthView::World::Spatial::Atlas::ILayer*) parentLayer_j;
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				bool __values1 = pObjectX->delete3DLayer(layer, parentLayer);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_AppAtlas_create2DLayer_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring mapName_j, jstring dataSourceAliasName_j, jstring datasetName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* mapName_ch = (const ev_char*)__env->GetStringUTFChars(mapName_j,JNI_FALSE);
				const EVString mapName = mapName_ch;
				__env->ReleaseStringUTFChars(mapName_j, (const char *)mapName_ch);
				#else
				const ev_wchar* mapName_ch = (const ev_wchar*)__env->GetStringChars(mapName_j,JNI_FALSE);
				const EVString mapName = mapName_ch;
				__env->ReleaseStringChars(mapName_j, (const jchar *)mapName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dataSourceAliasName_ch = (const ev_char*)__env->GetStringUTFChars(dataSourceAliasName_j,JNI_FALSE);
				const EVString dataSourceAliasName = dataSourceAliasName_ch;
				__env->ReleaseStringUTFChars(dataSourceAliasName_j, (const char *)dataSourceAliasName_ch);
				#else
				const ev_wchar* dataSourceAliasName_ch = (const ev_wchar*)__env->GetStringChars(dataSourceAliasName_j,JNI_FALSE);
				const EVString dataSourceAliasName = dataSourceAliasName_ch;
				__env->ReleaseStringChars(dataSourceAliasName_j, (const jchar *)dataSourceAliasName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
				const EVString datasetName = datasetName_ch;
				__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
				#else
				const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
				const EVString datasetName = datasetName_ch;
				__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
				#endif
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->create2DLayer(mapName, dataSourceAliasName, datasetName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_AppAtlas_create2DLayer_1EVString_1EVString_1ILayer_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dataSourceAliasName_j, jstring datasetName_j, jlong parentLayer_j, jstring mapName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dataSourceAliasName_ch = (const ev_char*)__env->GetStringUTFChars(dataSourceAliasName_j,JNI_FALSE);
				const EVString dataSourceAliasName = dataSourceAliasName_ch;
				__env->ReleaseStringUTFChars(dataSourceAliasName_j, (const char *)dataSourceAliasName_ch);
				#else
				const ev_wchar* dataSourceAliasName_ch = (const ev_wchar*)__env->GetStringChars(dataSourceAliasName_j,JNI_FALSE);
				const EVString dataSourceAliasName = dataSourceAliasName_ch;
				__env->ReleaseStringChars(dataSourceAliasName_j, (const jchar *)dataSourceAliasName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
				const EVString datasetName = datasetName_ch;
				__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
				#else
				const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
				const EVString datasetName = datasetName_ch;
				__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
				#endif
				EarthView::World::Spatial::Atlas::ILayer *parentLayer = (EarthView::World::Spatial::Atlas::ILayer*) parentLayer_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* mapName_ch = (const ev_char*)__env->GetStringUTFChars(mapName_j,JNI_FALSE);
				const EVString mapName = mapName_ch;
				__env->ReleaseStringUTFChars(mapName_j, (const char *)mapName_ch);
				#else
				const ev_wchar* mapName_ch = (const ev_wchar*)__env->GetStringChars(mapName_j,JNI_FALSE);
				const EVString mapName = mapName_ch;
				__env->ReleaseStringChars(mapName_j, (const jchar *)mapName_ch);
				#endif
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->create2DLayer(dataSourceAliasName, datasetName, parentLayer, mapName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_AppAtlas_create2DGroupLayer_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring mapName_j, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* mapName_ch = (const ev_char*)__env->GetStringUTFChars(mapName_j,JNI_FALSE);
				const EVString mapName = mapName_ch;
				__env->ReleaseStringUTFChars(mapName_j, (const char *)mapName_ch);
				#else
				const ev_wchar* mapName_ch = (const ev_wchar*)__env->GetStringChars(mapName_j,JNI_FALSE);
				const EVString mapName = mapName_ch;
				__env->ReleaseStringChars(mapName_j, (const jchar *)mapName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->create2DGroupLayer(mapName, groupName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_AppAtlas_create2DBaseGroupLayer_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring mapName_j, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* mapName_ch = (const ev_char*)__env->GetStringUTFChars(mapName_j,JNI_FALSE);
				const EVString mapName = mapName_ch;
				__env->ReleaseStringUTFChars(mapName_j, (const char *)mapName_ch);
				#else
				const ev_wchar* mapName_ch = (const ev_wchar*)__env->GetStringChars(mapName_j,JNI_FALSE);
				const EVString mapName = mapName_ch;
				__env->ReleaseStringChars(mapName_j, (const jchar *)mapName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->create2DBaseGroupLayer(mapName, groupName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_AppAtlas_create2DGroupLayer_1EVString_1EVString_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring mapName_j, jstring groupName_j, jlong parentLayer_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* mapName_ch = (const ev_char*)__env->GetStringUTFChars(mapName_j,JNI_FALSE);
				const EVString mapName = mapName_ch;
				__env->ReleaseStringUTFChars(mapName_j, (const char *)mapName_ch);
				#else
				const ev_wchar* mapName_ch = (const ev_wchar*)__env->GetStringChars(mapName_j,JNI_FALSE);
				const EVString mapName = mapName_ch;
				__env->ReleaseStringChars(mapName_j, (const jchar *)mapName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Spatial::Atlas::ILayer *parentLayer = (EarthView::World::Spatial::Atlas::ILayer*) parentLayer_j;
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->create2DGroupLayer(mapName, groupName, parentLayer);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_AppAtlas_get2DLayer_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring mapName_j, jstring layerName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* mapName_ch = (const ev_char*)__env->GetStringUTFChars(mapName_j,JNI_FALSE);
				const EVString mapName = mapName_ch;
				__env->ReleaseStringUTFChars(mapName_j, (const char *)mapName_ch);
				#else
				const ev_wchar* mapName_ch = (const ev_wchar*)__env->GetStringChars(mapName_j,JNI_FALSE);
				const EVString mapName = mapName_ch;
				__env->ReleaseStringChars(mapName_j, (const jchar *)mapName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* layerName_ch = (const ev_char*)__env->GetStringUTFChars(layerName_j,JNI_FALSE);
				const EVString layerName = layerName_ch;
				__env->ReleaseStringUTFChars(layerName_j, (const char *)layerName_ch);
				#else
				const ev_wchar* layerName_ch = (const ev_wchar*)__env->GetStringChars(layerName_j,JNI_FALSE);
				const EVString layerName = layerName_ch;
				__env->ReleaseStringChars(layerName_j, (const jchar *)layerName_ch);
				#endif
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->get2DLayer(mapName, layerName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_utilities_AppAtlas_delete2DLayer_1EVString_1ILayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring mapName_j, jlong layer_j, jlong parentLayer_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* mapName_ch = (const ev_char*)__env->GetStringUTFChars(mapName_j,JNI_FALSE);
				const EVString mapName = mapName_ch;
				__env->ReleaseStringUTFChars(mapName_j, (const char *)mapName_ch);
				#else
				const ev_wchar* mapName_ch = (const ev_wchar*)__env->GetStringChars(mapName_j,JNI_FALSE);
				const EVString mapName = mapName_ch;
				__env->ReleaseStringChars(mapName_j, (const jchar *)mapName_ch);
				#endif
				const EarthView::World::Spatial::Atlas::ILayer *layer = (const EarthView::World::Spatial::Atlas::ILayer*) layer_j;
				EarthView::World::Spatial::Atlas::ILayer *parentLayer = (EarthView::World::Spatial::Atlas::ILayer*) parentLayer_j;
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				bool __values1 = pObjectX->delete2DLayer(mapName, layer, parentLayer);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_AppAtlas_createScene_1EVString_1TileType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sceneName_j, jint tileType_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sceneName_ch = (const ev_char*)__env->GetStringUTFChars(sceneName_j,JNI_FALSE);
				const EVString sceneName = sceneName_ch;
				__env->ReleaseStringUTFChars(sceneName_j, (const char *)sceneName_ch);
				#else
				const ev_wchar* sceneName_ch = (const ev_wchar*)__env->GetStringChars(sceneName_j,JNI_FALSE);
				const EVString sceneName = sceneName_ch;
				__env->ReleaseStringChars(sceneName_j, (const jchar *)sceneName_ch);
				#endif
				EarthView::World::Utilities::AppAtlas::TileType tileType = (EarthView::World::Utilities::AppAtlas::TileType) tileType_j;
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				EarthView::World::Spatial::Atlas::IScene* __values1 = pObjectX->createScene(sceneName, tileType);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_AppAtlas_getScene_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sceneName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sceneName_ch = (const ev_char*)__env->GetStringUTFChars(sceneName_j,JNI_FALSE);
				const EVString sceneName = sceneName_ch;
				__env->ReleaseStringUTFChars(sceneName_j, (const char *)sceneName_ch);
				#else
				const ev_wchar* sceneName_ch = (const ev_wchar*)__env->GetStringChars(sceneName_j,JNI_FALSE);
				const EVString sceneName = sceneName_ch;
				__env->ReleaseStringChars(sceneName_j, (const jchar *)sceneName_ch);
				#endif
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				EarthView::World::Spatial::Atlas::IScene* __values1 = pObjectX->getScene(sceneName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_utilities_AppAtlas_deleteScene_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sceneName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sceneName_ch = (const ev_char*)__env->GetStringUTFChars(sceneName_j,JNI_FALSE);
				const EVString sceneName = sceneName_ch;
				__env->ReleaseStringUTFChars(sceneName_j, (const char *)sceneName_ch);
				#else
				const ev_wchar* sceneName_ch = (const ev_wchar*)__env->GetStringChars(sceneName_j,JNI_FALSE);
				const EVString sceneName = sceneName_ch;
				__env->ReleaseStringChars(sceneName_j, (const jchar *)sceneName_ch);
				#endif
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				bool __values1 = pObjectX->deleteScene(sceneName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_AppAtlas_createMap_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring mapName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* mapName_ch = (const ev_char*)__env->GetStringUTFChars(mapName_j,JNI_FALSE);
				const EVString mapName = mapName_ch;
				__env->ReleaseStringUTFChars(mapName_j, (const char *)mapName_ch);
				#else
				const ev_wchar* mapName_ch = (const ev_wchar*)__env->GetStringChars(mapName_j,JNI_FALSE);
				const EVString mapName = mapName_ch;
				__env->ReleaseStringChars(mapName_j, (const jchar *)mapName_ch);
				#endif
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->createMap(mapName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_AppAtlas_getMap_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring mapName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* mapName_ch = (const ev_char*)__env->GetStringUTFChars(mapName_j,JNI_FALSE);
				const EVString mapName = mapName_ch;
				__env->ReleaseStringUTFChars(mapName_j, (const char *)mapName_ch);
				#else
				const ev_wchar* mapName_ch = (const ev_wchar*)__env->GetStringChars(mapName_j,JNI_FALSE);
				const EVString mapName = mapName_ch;
				__env->ReleaseStringChars(mapName_j, (const jchar *)mapName_ch);
				#endif
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->getMap(mapName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_utilities_AppAtlas_deleteMap_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring mapName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* mapName_ch = (const ev_char*)__env->GetStringUTFChars(mapName_j,JNI_FALSE);
				const EVString mapName = mapName_ch;
				__env->ReleaseStringUTFChars(mapName_j, (const char *)mapName_ch);
				#else
				const ev_wchar* mapName_ch = (const ev_wchar*)__env->GetStringChars(mapName_j,JNI_FALSE);
				const EVString mapName = mapName_ch;
				__env->ReleaseStringChars(mapName_j, (const jchar *)mapName_ch);
				#endif
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				bool __values1 = pObjectX->deleteMap(mapName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_AppAtlas_createLayout_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring layoutName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* layoutName_ch = (const ev_char*)__env->GetStringUTFChars(layoutName_j,JNI_FALSE);
				const EVString layoutName = layoutName_ch;
				__env->ReleaseStringUTFChars(layoutName_j, (const char *)layoutName_ch);
				#else
				const ev_wchar* layoutName_ch = (const ev_wchar*)__env->GetStringChars(layoutName_j,JNI_FALSE);
				const EVString layoutName = layoutName_ch;
				__env->ReleaseStringChars(layoutName_j, (const jchar *)layoutName_ch);
				#endif
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				EarthView::World::Spatial::Carto::IPageLayout* __values1 = pObjectX->createLayout(layoutName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_utilities_AppAtlas_deleteLayout_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring layoutName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* layoutName_ch = (const ev_char*)__env->GetStringUTFChars(layoutName_j,JNI_FALSE);
				const EVString layoutName = layoutName_ch;
				__env->ReleaseStringUTFChars(layoutName_j, (const char *)layoutName_ch);
				#else
				const ev_wchar* layoutName_ch = (const ev_wchar*)__env->GetStringChars(layoutName_j,JNI_FALSE);
				const EVString layoutName = layoutName_ch;
				__env->ReleaseStringChars(layoutName_j, (const jchar *)layoutName_ch);
				#endif
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				bool __values1 = pObjectX->deleteLayout(layoutName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_utilities_AppAtlas_setLayerVisible_1ILayer_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j, jboolean visible_j)
			{
				EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
				bool visible = (bool) visible_j;
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				bool __values1 = pObjectX->setLayerVisible(layer, visible);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_utilities_AppAtlas_setLayerTheme_1ILayer_1ITheme(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j, jlong theme_j)
			{
				EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
				EarthView::World::Spatial::Theme::ITheme *theme = (EarthView::World::Spatial::Theme::ITheme*) theme_j;
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				bool __values1 = pObjectX->setLayerTheme(layer, theme);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_utilities_AppAtlas_move3DLayer_1EVString_1EVString_1LayerType3D_1int_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sceneName_j, jstring layerName_j, jint type_j, jint index_j, jint newIndex_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sceneName_ch = (const ev_char*)__env->GetStringUTFChars(sceneName_j,JNI_FALSE);
				const EVString sceneName = sceneName_ch;
				__env->ReleaseStringUTFChars(sceneName_j, (const char *)sceneName_ch);
				#else
				const ev_wchar* sceneName_ch = (const ev_wchar*)__env->GetStringChars(sceneName_j,JNI_FALSE);
				const EVString sceneName = sceneName_ch;
				__env->ReleaseStringChars(sceneName_j, (const jchar *)sceneName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* layerName_ch = (const ev_char*)__env->GetStringUTFChars(layerName_j,JNI_FALSE);
				const EVString layerName = layerName_ch;
				__env->ReleaseStringUTFChars(layerName_j, (const char *)layerName_ch);
				#else
				const ev_wchar* layerName_ch = (const ev_wchar*)__env->GetStringChars(layerName_j,JNI_FALSE);
				const EVString layerName = layerName_ch;
				__env->ReleaseStringChars(layerName_j, (const jchar *)layerName_ch);
				#endif
				EarthView::World::Utilities::AppAtlas::LayerType3D type = (EarthView::World::Utilities::AppAtlas::LayerType3D) type_j;
				int index = (int) index_j;
				int newIndex = (int) newIndex_j;
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				pObjectX->move3DLayer(sceneName, layerName, type, index, newIndex);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_utilities_AppAtlas_move3DLayer_1ILayer_1int_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong parentLayer_j, jint index_j, jint newIndex_j)
			{
				EarthView::World::Spatial::Atlas::ILayer *parentLayer = (EarthView::World::Spatial::Atlas::ILayer*) parentLayer_j;
				int index = (int) index_j;
				int newIndex = (int) newIndex_j;
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				pObjectX->move3DLayer(parentLayer, index, newIndex);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_utilities_AppAtlas_move2DLayer_1EVString_1int_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring mapName_j, jint index_j, jint newIndex_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* mapName_ch = (const ev_char*)__env->GetStringUTFChars(mapName_j,JNI_FALSE);
				const EVString mapName = mapName_ch;
				__env->ReleaseStringUTFChars(mapName_j, (const char *)mapName_ch);
				#else
				const ev_wchar* mapName_ch = (const ev_wchar*)__env->GetStringChars(mapName_j,JNI_FALSE);
				const EVString mapName = mapName_ch;
				__env->ReleaseStringChars(mapName_j, (const jchar *)mapName_ch);
				#endif
				int index = (int) index_j;
				int newIndex = (int) newIndex_j;
				EarthView::World::Utilities::AppAtlas *pObjectX = (EarthView::World::Utilities::AppAtlas*) pObjXXXX;
				pObjectX->move2DLayer(mapName, index, newIndex);
			}
		}
	}
}
