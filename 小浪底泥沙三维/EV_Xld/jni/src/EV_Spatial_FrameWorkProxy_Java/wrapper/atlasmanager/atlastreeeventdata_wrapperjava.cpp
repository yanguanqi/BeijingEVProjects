/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/atlasmanager/atlastreeeventdata.h"
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_setType_1ActionType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint t_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ActionType t = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ActionType) t_j;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*) pObjXXXX;
					pObjectX->setType(t);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*) pObjXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ActionType __values1 = pObjectX->getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_get_1detialData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->detialData);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_set_1detialData_1LayerDetailData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					pObjectX->detialData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_get_1propertyData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->propertyData);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_set_1propertyData_1LayerPropertyData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					pObjectX->propertyData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerPropertyData*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_get_1kmlManageData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->kmlManageData);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_set_1kmlManageData_1KmlManageData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					pObjectX->kmlManageData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_get_1sceneDetailData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->sceneDetailData);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_set_1sceneDetailData_1SceneDetailData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					pObjectX->sceneDetailData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneDetailData*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_get_1scenePropertyData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->scenePropertyData);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_set_1scenePropertyData_1ScenePropertyData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					pObjectX->scenePropertyData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ScenePropertyData*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_get_1mapDetailData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mapDetailData);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_set_1mapDetailData_1MapDetailData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					pObjectX->mapDetailData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapDetailData*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_get_1mapPropertyData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mapPropertyData);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_set_1mapPropertyData_1MapPropertyData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					pObjectX->mapPropertyData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapPropertyData*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_get_1mapLayerRecordData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mapLayerRecordData);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_set_1mapLayerRecordData_1MapLayerRecordData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					pObjectX->mapLayerRecordData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapLayerRecordData*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_get_1sceneLayerRecordData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->sceneLayerRecordData);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_set_1sceneLayerRecordData_1SceneLayerRecordData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					pObjectX->sceneLayerRecordData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneLayerRecordData*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_get_1historyImageData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->historyImageData);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_set_1historyImageData_1HistoryImageData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					pObjectX->historyImageData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::HistoryImageData*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_get_1terrainSettingsData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->terrainSettingsData);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_set_1terrainSettingsData_1TerrainSettingsData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					pObjectX->terrainSettingsData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::TerrainSettingsData*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_get_1atmosphereTreeData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->atmosphereTreeData);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_set_1atmosphereTreeData_1AtmosphereTreeData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					pObjectX->atmosphereTreeData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::AtmosphereTreeData*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_get_1editableData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->editableData);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_set_1editableData_1LayerEditableChangedData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					pObjectX->editableData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerEditableChangedData*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_get_1selectableData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->selectableData);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEventData_set_1selectableData_1LayerSelectableChangedData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjXXXX;
					pObjectX->selectableData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerSelectableChangedData*) __values1_j;
				}
			}
		}
	}
}
