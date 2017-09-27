/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/atlasmanager/atlasmanager.h"
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
			namespace Atlas
			{
			}
			namespace GeoDataset
			{
			}
			namespace Theme
			{
			}
		}
		namespace Spatial2D
		{
			namespace Controls
			{
			}
		}
		namespace Spatial3D
		{
			namespace Atlas
			{
			}
			namespace Controls
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace FrameWorkProxy
		{
			namespace AtlasManager
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace FrameWorkProxy
		{
			namespace AtlasManager
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_Evdatasettypeset_insert_1EVDatasetType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint val_j)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType val = (EarthView::World::Spatial::GeoDataset::EVDatasetType) val_j;
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet*) pObjXXXX;
					pObjectX->insert(val);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_Evdatasettypeset_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_Evdatasettypeset_erase_1EVDatasetType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType key = (EarthView::World::Spatial::GeoDataset::EVDatasetType) key_j;
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet*) pObjXXXX;
					ev_size_t __values1 = pObjectX->erase(key);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_Evdatasettypeset_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_Evdatasettypeset_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_Evdatasettypeset_count_1EVDatasetType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType key = (EarthView::World::Spatial::GeoDataset::EVDatasetType) key_j;
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet*) pObjXXXX;
					ev_size_t __values1 = pObjectX->count(key);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_Evdatasettypeset_max_1size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet*) pObjXXXX;
					ev_size_t __values1 = pObjectX->max_size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_Evdatasettypeset_swap_1EVDatasetTypeSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet &other = *(EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet*) other_j;
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet*) pObjXXXX;
					pObjectX->swap(other);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_Evdatasettypeset_get_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->get(index);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_LayerVector_push_1back_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *&t = *(EarthView::World::Spatial::Atlas::ILayer**) t_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_LayerVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_LayerVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer*& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_LayerVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer*& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_LayerVector_insert_1ev_1uint32_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial::Atlas::ILayer *&t = *(EarthView::World::Spatial::Atlas::ILayer**) t_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_LayerVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_LayerVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_LayerVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector& pObjectX = *(EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial::Atlas::ILayer*& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_LayerVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer*& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_LayerVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_LayerVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_LayerVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_LayerVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager& __values1 = EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager::getSingleton();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* __values1 = EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager::getSingletonPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_createMap_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->createMap(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_createScene_1EVString_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint tileType_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					int tileType = (int) tileType_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IScene* __values1 = pObjectX->createScene(name, tileType);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_createLayout_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->createLayout(name);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_setCurrentMap_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->setCurrentMap(map);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_setCurrentScene_1IScene(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scene_j)
				{
					EarthView::World::Spatial::Atlas::IScene *scene = (EarthView::World::Spatial::Atlas::IScene*) scene_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->setCurrentScene(scene);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_removeMap_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->removeMap(map);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_removeScene_1IScene(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scene_j)
				{
					EarthView::World::Spatial::Atlas::IScene *scene = (EarthView::World::Spatial::Atlas::IScene*) scene_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->removeScene(scene);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_removeLayout_1IPageLayout(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pLayout_j)
				{
					EarthView::World::Spatial::Carto::IPageLayout *pLayout = (EarthView::World::Spatial::Carto::IPageLayout*) pLayout_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->removeLayout(pLayout);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_destroyMap_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->destroyMap(map);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_destroyScene_1IScene(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scene_j)
				{
					EarthView::World::Spatial::Atlas::IScene *scene = (EarthView::World::Spatial::Atlas::IScene*) scene_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->destroyScene(scene);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_destroyLayout_1IPageLayout(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pLayout_j)
				{
					EarthView::World::Spatial::Carto::IPageLayout *pLayout = (EarthView::World::Spatial::Carto::IPageLayout*) pLayout_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->destroyLayout(pLayout);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_setLayerEditable_1ILayer_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j, jboolean editable_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					bool editable = (bool) editable_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->setLayerEditable(layer, editable);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_setLayerSelectable_1ILayer_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j, jboolean selectable_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					bool selectable = (bool) selectable_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->setLayerSelectable(layer, selectable);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_showAltitudeModeConfig_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->showAltitudeModeConfig(layer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_refurbishModelLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->refurbishModelLayer(layer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_showLayerDetail_1ILayer_1ILayer_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j, jlong parentLayer_j, jlong imap_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial::Atlas::ILayer *parentLayer = (EarthView::World::Spatial::Atlas::ILayer*) parentLayer_j;
					EarthView::World::Spatial::Atlas::IMap *imap = (EarthView::World::Spatial::Atlas::IMap*) imap_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->showLayerDetail(layer, parentLayer, imap);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_showLayerProperty_1ILayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j, jlong parentLayer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial::Atlas::ILayer *parentLayer = (EarthView::World::Spatial::Atlas::ILayer*) parentLayer_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->showLayerProperty(layer, parentLayer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_clearProperty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->clearProperty();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_showKmlManager_1ILayer_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j, jstring datasourceName_j, jstring datasetName_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
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
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->showKmlManager(layer, datasourceName, datasetName);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_clearKmlManager_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->clearKmlManager();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_showSceneDetail_1IScene(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scene_j)
				{
					EarthView::World::Spatial::Atlas::IScene *scene = (EarthView::World::Spatial::Atlas::IScene*) scene_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->showSceneDetail(scene);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_showSceneProperty_1IScene(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scene_j)
				{
					EarthView::World::Spatial::Atlas::IScene *scene = (EarthView::World::Spatial::Atlas::IScene*) scene_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->showSceneProperty(scene);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_showMapDetail_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong imap_j)
				{
					EarthView::World::Spatial::Atlas::IMap *imap = (EarthView::World::Spatial::Atlas::IMap*) imap_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->showMapDetail(imap);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_showMapProperty_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong imap_j)
				{
					EarthView::World::Spatial::Atlas::IMap *imap = (EarthView::World::Spatial::Atlas::IMap*) imap_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->showMapProperty(imap);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_showMapLayerReord_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ilayer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *ilayer = (EarthView::World::Spatial::Atlas::ILayer*) ilayer_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->showMapLayerReord(ilayer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_showSceneLayerReord_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ilayer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *ilayer = (EarthView::World::Spatial::Atlas::ILayer*) ilayer_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->showSceneLayerReord(ilayer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_showHistoryImage_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sceneName_j)
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
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->showHistoryImage(sceneName);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_createMapLayer_1IMap_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j, jstring datasourceName_j, jstring datasetName_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
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
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->createMapLayer(map, datasourceName, datasetName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_showTerrainSettings_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sceneName_j)
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
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->showTerrainSettings(sceneName);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_showAtmosphereTree_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sceneName_j)
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
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->showAtmosphereTree(sceneName);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_destroyLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->destroyLayer(layer);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_getSupportedType_1EVLayerType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint grouplayerType_j)
				{
					EarthView::World::Spatial::Atlas::EVLayerType grouplayerType = (EarthView::World::Spatial::Atlas::EVLayerType) grouplayerType_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet __values1 = pObjectX->getSupportedType(grouplayerType);
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet *returnvalues = new EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_createMapLayer_1EVString_1EVString_1IGroupLayer_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jstring datasetName_j, jlong pParentGroup_j, jlong map_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
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
					EarthView::World::Spatial::Atlas::IGroupLayer *pParentGroup = (EarthView::World::Spatial::Atlas::IGroupLayer*) pParentGroup_j;
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->createMapLayer(datasourceName, datasetName, pParentGroup, map);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_createMapLayer_1IGroupLayer_1IDataset_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pParentGrouplayer_j, jlong dataset_j, jlong map_j)
				{
					EarthView::World::Spatial::Atlas::IGroupLayer *pParentGrouplayer = (EarthView::World::Spatial::Atlas::IGroupLayer*) pParentGrouplayer_j;
					EarthView::World::Spatial::GeoDataset::IDataset *dataset = (EarthView::World::Spatial::GeoDataset::IDataset*) dataset_j;
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->createMapLayer(pParentGrouplayer, dataset, map);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_addMapLayer_1IMap_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j, jlong layer_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->addMapLayer(map, layer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_addMapLayer_1IGroupLayer_1ILayer_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pParentGroupLayer_j, jlong layer_j, jlong map_j)
				{
					EarthView::World::Spatial::Atlas::IGroupLayer *pParentGroupLayer = (EarthView::World::Spatial::Atlas::IGroupLayer*) pParentGroupLayer_j;
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->addMapLayer(pParentGroupLayer, layer, map);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_createMapGroupLayer_1IMap_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j, jstring groupName_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
					const EVString groupName = groupName_ch;
					__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
					#else
					const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
					const EVString groupName = groupName_ch;
					__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
					#endif
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IGroupLayer* __values1 = pObjectX->createMapGroupLayer(map, groupName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_createBaseMapGroupLayer_1IMap_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j, jstring groupName_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
					const EVString groupName = groupName_ch;
					__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
					#else
					const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
					const EVString groupName = groupName_ch;
					__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
					#endif
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IGroupLayer* __values1 = pObjectX->createBaseMapGroupLayer(map, groupName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_createMapGroupLayer_1IGroupLayer_1EVString_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pParentGrouplayer_j, jstring groupName_j, jlong map_j)
				{
					EarthView::World::Spatial::Atlas::IGroupLayer *pParentGrouplayer = (EarthView::World::Spatial::Atlas::IGroupLayer*) pParentGrouplayer_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
					const EVString groupName = groupName_ch;
					__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
					#else
					const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
					const EVString groupName = groupName_ch;
					__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
					#endif
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IGroupLayer* __values1 = pObjectX->createMapGroupLayer(pParentGrouplayer, groupName, map);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_createMapLayer_1IMap_1IDataset(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j, jlong dataset_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					EarthView::World::Spatial::GeoDataset::IDataset *dataset = (EarthView::World::Spatial::GeoDataset::IDataset*) dataset_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->createMapLayer(map, dataset);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_moveMapLayer_1IMap_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j, jlong oldIndex_j, jlong newIndex_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					ev_uint32 oldIndex = (ev_uint32) oldIndex_j;
					ev_uint32 newIndex = (ev_uint32) newIndex_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->moveMapLayer(map, oldIndex, newIndex);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_moveMapLayer_1IMap_1IGroupLayer_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j, jlong pParentGrouplayer_j, jlong oldIndex_j, jlong newIndex_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					EarthView::World::Spatial::Atlas::IGroupLayer *pParentGrouplayer = (EarthView::World::Spatial::Atlas::IGroupLayer*) pParentGrouplayer_j;
					ev_uint32 oldIndex = (ev_uint32) oldIndex_j;
					ev_uint32 newIndex = (ev_uint32) newIndex_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->moveMapLayer(map, pParentGrouplayer, oldIndex, newIndex);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_moveMapLayer_1IMap_1IGroupLayer_1ev_1uint32_1IGroupLayer_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMap_j, jlong dragGroupLayer_j, jlong dragIndex_j, jlong hoverGroupLayer_j, jlong hoverIndex_j)
				{
					EarthView::World::Spatial::Atlas::IMap *pMap = (EarthView::World::Spatial::Atlas::IMap*) pMap_j;
					EarthView::World::Spatial::Atlas::IGroupLayer *dragGroupLayer = (EarthView::World::Spatial::Atlas::IGroupLayer*) dragGroupLayer_j;
					ev_uint32 dragIndex = (ev_uint32) dragIndex_j;
					EarthView::World::Spatial::Atlas::IGroupLayer *hoverGroupLayer = (EarthView::World::Spatial::Atlas::IGroupLayer*) hoverGroupLayer_j;
					ev_uint32 hoverIndex = (ev_uint32) hoverIndex_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->moveMapLayer(pMap, dragGroupLayer, dragIndex, hoverGroupLayer, hoverIndex);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_removeMapLayer_1IMap_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j, jlong index_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->removeMapLayer(map, index);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_removeMapLayer_1IGroupLayer_1IMap_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pParentGrouplayer_j, jlong map_j, jlong index_j)
				{
					EarthView::World::Spatial::Atlas::IGroupLayer *pParentGrouplayer = (EarthView::World::Spatial::Atlas::IGroupLayer*) pParentGrouplayer_j;
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->removeMapLayer(pParentGrouplayer, map, index);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_changeMapName_1IMap_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j, jstring name_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->changeMapName(map, name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_changeLayerName_1ILayer_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j, jstring name_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->changeLayerName(layer, name);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_changeLayerVisible_1ILayer_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j, jboolean visible_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->changeLayerVisible(layer, visible);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_setMapMinScale_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->setMapMinScale(map);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_setMapMaxScale_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->setMapMaxScale(map);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_clearMapScale_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->clearMapScale(map);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_setLayerMinScale_1EVString_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring spatialControlName_j, jlong layer_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* spatialControlName_ch = (const ev_char*)__env->GetStringUTFChars(spatialControlName_j,JNI_FALSE);
					const EVString spatialControlName = spatialControlName_ch;
					__env->ReleaseStringUTFChars(spatialControlName_j, (const char *)spatialControlName_ch);
					#else
					const ev_wchar* spatialControlName_ch = (const ev_wchar*)__env->GetStringChars(spatialControlName_j,JNI_FALSE);
					const EVString spatialControlName = spatialControlName_ch;
					__env->ReleaseStringChars(spatialControlName_j, (const jchar *)spatialControlName_ch);
					#endif
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->setLayerMinScale(spatialControlName, layer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_setLayerMaxScale_1EVString_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring spatialControlName_j, jlong layer_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* spatialControlName_ch = (const ev_char*)__env->GetStringUTFChars(spatialControlName_j,JNI_FALSE);
					const EVString spatialControlName = spatialControlName_ch;
					__env->ReleaseStringUTFChars(spatialControlName_j, (const char *)spatialControlName_ch);
					#else
					const ev_wchar* spatialControlName_ch = (const ev_wchar*)__env->GetStringChars(spatialControlName_j,JNI_FALSE);
					const EVString spatialControlName = spatialControlName_ch;
					__env->ReleaseStringChars(spatialControlName_j, (const jchar *)spatialControlName_ch);
					#endif
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->setLayerMaxScale(spatialControlName, layer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_clearLayerScale_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->clearLayerScale(layer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_zoomToLayer_1EVString_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring spatialControlName_j, jlong layer_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* spatialControlName_ch = (const ev_char*)__env->GetStringUTFChars(spatialControlName_j,JNI_FALSE);
					const EVString spatialControlName = spatialControlName_ch;
					__env->ReleaseStringUTFChars(spatialControlName_j, (const char *)spatialControlName_ch);
					#else
					const ev_wchar* spatialControlName_ch = (const ev_wchar*)__env->GetStringChars(spatialControlName_j,JNI_FALSE);
					const EVString spatialControlName = spatialControlName_ch;
					__env->ReleaseStringChars(spatialControlName_j, (const jchar *)spatialControlName_ch);
					#endif
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->zoomToLayer(spatialControlName, layer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_removeMapLayersByDataSource_1IDataSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataSource_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource *pDataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) pDataSource_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->removeMapLayersByDataSource(pDataSource);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_removeMapLayersByDataset_1IDataSource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataSource_j, jstring datasetName_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource *pDataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) pDataSource_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->removeMapLayersByDataset(pDataSource, datasetName);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_isDatasetEditing_1IDataSource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jstring datasetName_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource *ds = (EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->isDatasetEditing(ds, datasetName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_isEditing_1IGroupLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong groupLayer_j)
				{
					EarthView::World::Spatial::Atlas::IGroupLayer *groupLayer = (EarthView::World::Spatial::Atlas::IGroupLayer*) groupLayer_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->isEditing(groupLayer);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_isEditing_1IScene(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scene_j)
				{
					EarthView::World::Spatial::Atlas::IScene *scene = (EarthView::World::Spatial::Atlas::IScene*) scene_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->isEditing(scene);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_isEditing_1IGlobeLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong featureGroupLayer_j)
				{
					EarthView::World::Spatial3D::Atlas::IGlobeLayer *featureGroupLayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) featureGroupLayer_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->isEditing(featureGroupLayer);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_referenceDatasetInScene_1EVString_1EVString_1IScene(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jstring datasetName_j, jlong pScene_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
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
					EarthView::World::Spatial::Atlas::IScene *pScene = (EarthView::World::Spatial::Atlas::IScene*) pScene_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->referenceDatasetInScene(datasourceName, datasetName, pScene);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_referenceDatasetInMap_1EVString_1EVString_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jstring datasetName_j, jlong pMap_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
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
					EarthView::World::Spatial::Atlas::IMap *pMap = (EarthView::World::Spatial::Atlas::IMap*) pMap_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->referenceDatasetInMap(datasourceName, datasetName, pMap);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_createSceneLayer_1IGlobeLayer_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong grouplayer_j, jstring datasourceName_j, jstring datasetName_j)
				{
					EarthView::World::Spatial3D::Atlas::IGlobeLayer *grouplayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) grouplayer_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
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
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::IGlobeLayer* __values1 = pObjectX->createSceneLayer(grouplayer, datasourceName, datasetName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_createSceneGroupLayer_1IGlobeLayer_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pParentGrouplayer_j, jstring groupName_j)
				{
					EarthView::World::Spatial3D::Atlas::IGlobeLayer *pParentGrouplayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) pParentGrouplayer_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
					const EVString groupName = groupName_ch;
					__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
					#else
					const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
					const EVString groupName = groupName_ch;
					__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
					#endif
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::IGlobeLayer* __values1 = pObjectX->createSceneGroupLayer(pParentGrouplayer, groupName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_moveSceneLayer_1IGlobeLayer_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pParentGrouplayer_j, jlong index_j, jlong pos_j)
				{
					EarthView::World::Spatial3D::Atlas::IGlobeLayer *pParentGrouplayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) pParentGrouplayer_j;
					ev_uint32 index = (ev_uint32) index_j;
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->moveSceneLayer(pParentGrouplayer, index, pos);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_switchSceneLayer_1IGlobeLayer_1ev_1uint32_1IGlobeLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pParentGrouplayer_j, jlong index_j, jlong newLayer_j)
				{
					EarthView::World::Spatial3D::Atlas::IGlobeLayer *pParentGrouplayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) pParentGrouplayer_j;
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial3D::Atlas::IGlobeLayer *newLayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) newLayer_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->switchSceneLayer(pParentGrouplayer, index, newLayer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_removeSceneLayer_1IGlobeLayer_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pParentGrouplayer_j, jlong index_j)
				{
					EarthView::World::Spatial3D::Atlas::IGlobeLayer *pParentGrouplayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) pParentGrouplayer_j;
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->removeSceneLayer(pParentGrouplayer, index);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_setSceneLayerVisible_1IGlobeLayer_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j, jboolean visible_j)
				{
					EarthView::World::Spatial3D::Atlas::IGlobeLayer *layer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) layer_j;
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->setSceneLayerVisible(layer, visible);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_setSceneLayerTheme_1IGlobeLayer_1ITheme(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j, jlong theme_j)
				{
					EarthView::World::Spatial3D::Atlas::IGlobeLayer *layer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) layer_j;
					EarthView::World::Spatial::Theme::ITheme *theme = (EarthView::World::Spatial::Theme::ITheme*) theme_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->setSceneLayerTheme(layer, theme);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_removeContainedLayers_1IMap_1IGroupLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong map_j, jlong grouplayer_j)
				{
					EarthView::World::Spatial::Atlas::IMap *map = (EarthView::World::Spatial::Atlas::IMap*) map_j;
					EarthView::World::Spatial::Atlas::IGroupLayer *grouplayer = (EarthView::World::Spatial::Atlas::IGroupLayer*) grouplayer_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->removeContainedLayers(map, grouplayer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_removeContainedLayers_1IScene_1IGlobeLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scene_j, jlong grouplayer_j)
				{
					EarthView::World::Spatial::Atlas::IScene *scene = (EarthView::World::Spatial::Atlas::IScene*) scene_j;
					EarthView::World::Spatial3D::Atlas::IGlobeLayer *grouplayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) grouplayer_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->removeContainedLayers(scene, grouplayer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_removeContainedLayers_1IScene_1IGlobeLayer_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scene_j, jlong grouplayer_j, jboolean updateScene_j)
				{
					EarthView::World::Spatial::Atlas::IScene *scene = (EarthView::World::Spatial::Atlas::IScene*) scene_j;
					EarthView::World::Spatial3D::Atlas::IGlobeLayer *grouplayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) grouplayer_j;
					ev_bool updateScene = (ev_bool) updateScene_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->removeContainedLayers(scene, grouplayer, updateScene);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_removeSceneLayersByDataSource_1IDataSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataSource_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource *pDataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) pDataSource_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->removeSceneLayersByDataSource(pDataSource);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_removeSceneLayersByDataset_1IDataSource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataSource_j, jstring datasetName_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource *pDataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) pDataSource_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					pObjectX->removeSceneLayersByDataset(pDataSource, datasetName);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_clearVectorLayerCacheData_1IDataSource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataSource_j, jstring datasetName_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource *pDataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) pDataSource_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->clearVectorLayerCacheData(pDataSource, datasetName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_getLayersByGroupLayer_1IGlobeLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong grouplayer_j)
				{
					EarthView::World::Spatial3D::Atlas::IGlobeLayer *grouplayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) grouplayer_j;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector __values1 = pObjectX->getLayersByGroupLayer(grouplayer);
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector *returnvalues = new EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasManager_openDataset_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jstring datasetName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
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
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->openDataset(datasourceName, datasetName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
