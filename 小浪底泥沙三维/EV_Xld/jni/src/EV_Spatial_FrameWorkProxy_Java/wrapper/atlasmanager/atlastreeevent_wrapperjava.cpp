/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/atlasmanager/atlastreeevent.h"
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
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024ActionTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						AtlasTreeEvent::ProjectFilePreLoaded,
						AtlasTreeEvent::ProjectFilePostLoaded,
						AtlasTreeEvent::EveryLayerProperty,
						AtlasTreeEvent::KmlLayerProperty,
						AtlasTreeEvent::FeatureProperty,
						AtlasTreeEvent::ImageProperty,
						AtlasTreeEvent::TerrainProperty,
						AtlasTreeEvent::ClearProperty,
						AtlasTreeEvent::EveryLayerDetail,
						AtlasTreeEvent::KmlLayerDetial,
						AtlasTreeEvent::FeatureDetail,
						AtlasTreeEvent::ImageDetail,
						AtlasTreeEvent::TerrainDetail,
						AtlasTreeEvent::AmosphereDetail,
						AtlasTreeEvent::KmlManage,
						AtlasTreeEvent::ClearKmlManage,
						AtlasTreeEvent::SceneDetail,
						AtlasTreeEvent::MapDetail,
						AtlasTreeEvent::AltitudeModeConfig,
						AtlasTreeEvent::RefurbishModelLayer,
						AtlasTreeEvent::SceneProperty,
						AtlasTreeEvent::MapProperty,
						AtlasTreeEvent::MapLayerRecord,
						AtlasTreeEvent::SceneLayerRecord,
						AtlasTreeEvent::HistoryImageToolbar,
						AtlasTreeEvent::TerrainSettings,
						AtlasTreeEvent::AtmosphereTree,
						AtlasTreeEvent::LayerEditableChanged,
						AtlasTreeEvent::LayerSelectableChanged
					};
					jintArray array = __env->NewIntArray(29);
					__env->SetIntArrayRegion(array, 0, 29, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024SceneDetailData_get_1scene_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneDetailData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneDetailData*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->scene);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024SceneDetailData_set_1scene_1IScene(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneDetailData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneDetailData*)pObjXXXX;
					pObjectX->scene = (EarthView::World::Spatial::Atlas::IScene*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024ScenePropertyData_get_1groupStringInterface_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ScenePropertyData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ScenePropertyData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->groupStringInterface);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024ScenePropertyData_set_1groupStringInterface_1CGroupStringinterfaceMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ScenePropertyData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ScenePropertyData*)pObjXXXX;
					pObjectX->groupStringInterface = *(EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024MapDetailData_get_1imap_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapDetailData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapDetailData*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->imap);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024MapDetailData_set_1imap_1IMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapDetailData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapDetailData*)pObjXXXX;
					pObjectX->imap = (EarthView::World::Spatial::Atlas::IMap*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024MapPropertyData_get_1groupStringInterface_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapPropertyData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapPropertyData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->groupStringInterface);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024MapPropertyData_set_1groupStringInterface_1CGroupStringinterfaceMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapPropertyData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapPropertyData*)pObjXXXX;
					pObjectX->groupStringInterface = *(EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024KmlManageData_get_1datasourceName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->datasourceName;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024KmlManageData_set_1datasourceName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->datasourceName = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024KmlManageData_get_1datasetName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->datasetName;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024KmlManageData_set_1datasetName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->datasetName = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024KmlManageData_get_1layer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->layer);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024KmlManageData_set_1layer_1ILayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData*)pObjXXXX;
					pObjectX->layer = (EarthView::World::Spatial::Atlas::ILayer*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024LayerPropertyData_get_1groupStringInterface_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerPropertyData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerPropertyData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->groupStringInterface);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024LayerPropertyData_set_1groupStringInterface_1CGroupStringinterfaceMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerPropertyData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerPropertyData*)pObjXXXX;
					pObjectX->groupStringInterface = *(EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024LayerDetailData_get_1imap_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->imap);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024LayerDetailData_set_1imap_1IMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData*)pObjXXXX;
					pObjectX->imap = (EarthView::World::Spatial::Atlas::IMap*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024LayerDetailData_get_1layer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->layer);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024LayerDetailData_set_1layer_1ILayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData*)pObjXXXX;
					pObjectX->layer = (EarthView::World::Spatial::Atlas::ILayer*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024LayerDetailData_get_1parentLayer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->parentLayer);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024LayerDetailData_set_1parentLayer_1ILayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData*)pObjXXXX;
					pObjectX->parentLayer = (EarthView::World::Spatial::Atlas::ILayer*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024MapLayerRecordData_get_1layer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapLayerRecordData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapLayerRecordData*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->layer);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024MapLayerRecordData_set_1layer_1ILayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapLayerRecordData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapLayerRecordData*)pObjXXXX;
					pObjectX->layer = (EarthView::World::Spatial::Atlas::ILayer*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024SceneLayerRecordData_get_1layer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneLayerRecordData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneLayerRecordData*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->layer);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024SceneLayerRecordData_set_1layer_1ILayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneLayerRecordData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneLayerRecordData*)pObjXXXX;
					pObjectX->layer = (EarthView::World::Spatial::Atlas::ILayer*) __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024TerrainSettingsData_get_1sceneName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::TerrainSettingsData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::TerrainSettingsData*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->sceneName;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024TerrainSettingsData_set_1sceneName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::TerrainSettingsData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::TerrainSettingsData*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->sceneName = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024AtmosphereTreeData_get_1sceneName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::AtmosphereTreeData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::AtmosphereTreeData*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->sceneName;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024AtmosphereTreeData_set_1sceneName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::AtmosphereTreeData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::AtmosphereTreeData*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->sceneName = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024HistoryImageData_get_1sceneName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::HistoryImageData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::HistoryImageData*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->sceneName;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024HistoryImageData_set_1sceneName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::HistoryImageData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::HistoryImageData*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->sceneName = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024LayerEditableChangedData_get_1layer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerEditableChangedData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerEditableChangedData*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->layer);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024LayerEditableChangedData_set_1layer_1ILayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerEditableChangedData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerEditableChangedData*)pObjXXXX;
					pObjectX->layer = (EarthView::World::Spatial::Atlas::ILayer*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024LayerSelectableChangedData_get_1layer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerSelectableChangedData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerSelectableChangedData*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->layer);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_00024LayerSelectableChangedData_set_1layer_1ILayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerSelectableChangedData *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerSelectableChangedData*)pObjXXXX;
					pObjectX->layer = (EarthView::World::Spatial::Atlas::ILayer*) __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_getActionType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ActionType __values1 = pObjectX->getActionType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_getLayerDetailData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData __values1 = pObjectX->getLayerDetailData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData *returnvalues = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_getLayerPropertyData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerPropertyData __values1 = pObjectX->getLayerPropertyData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerPropertyData *returnvalues = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerPropertyData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_getKmlManageData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData __values1 = pObjectX->getKmlManageData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData *returnvalues = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_getSceneDetailData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneDetailData __values1 = pObjectX->getSceneDetailData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneDetailData *returnvalues = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneDetailData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_getScenePropertyData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ScenePropertyData __values1 = pObjectX->getScenePropertyData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ScenePropertyData *returnvalues = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ScenePropertyData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_getMapDetailData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapDetailData __values1 = pObjectX->getMapDetailData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapDetailData *returnvalues = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapDetailData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_getMapPropertyData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapPropertyData __values1 = pObjectX->getMapPropertyData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapPropertyData *returnvalues = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapPropertyData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_getMapLayerRecordData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapLayerRecordData __values1 = pObjectX->getMapLayerRecordData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapLayerRecordData *returnvalues = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapLayerRecordData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_getSceneLayerRecordData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneLayerRecordData __values1 = pObjectX->getSceneLayerRecordData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneLayerRecordData *returnvalues = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneLayerRecordData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_getHistoryImageData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::HistoryImageData __values1 = pObjectX->getHistoryImageData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::HistoryImageData *returnvalues = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::HistoryImageData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_getTerrainSettingsData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::TerrainSettingsData __values1 = pObjectX->getTerrainSettingsData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::TerrainSettingsData *returnvalues = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::TerrainSettingsData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_getAtmosphereTreeData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::AtmosphereTreeData __values1 = pObjectX->getAtmosphereTreeData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::AtmosphereTreeData *returnvalues = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::AtmosphereTreeData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_getLayerEditableChangedData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerEditableChangedData __values1 = pObjectX->getLayerEditableChangedData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerEditableChangedData *returnvalues = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerEditableChangedData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_getLayerSelectableChangedData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerSelectableChangedData __values1 = pObjectX->getLayerSelectableChangedData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerSelectableChangedData *returnvalues = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerSelectableChangedData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_atlasmanager_AtlasTreeEvent_data_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent *pObjectX = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData& __values1 = pObjectX->data();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
		}
	}
}
