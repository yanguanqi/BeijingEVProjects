/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/modelobjectfactory.h"
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
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
			}
			namespace ModelManager
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectFactory_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial3D::ModelManager::CModelObjectFactory* __values1 = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::getSingletonPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectFactory_releaseSingleton_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::releaseSingleton();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectFactory_setGroupName_1EVString(JNIEnv *__env , jclass __clazz, jstring group_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
					const EVString group = group_ch;
					__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
					#else
					const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
					const EVString group = group_ch;
					__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::setGroupName(group);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectFactory_getGroupName_1void(JNIEnv *__env , jclass __clazz)
				{
					EVString __values1 = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::getGroupName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectFactory_createModelObject_1CSceneManager_1EVString_1EVString(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jstring datasourceName_j, jstring meshName_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
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
					const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
					#else
					const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CManualModelObject* __values1 = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::createModelObject(pSceneManager, datasourceName, meshName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectFactory_createModelObject_1CSceneManager_1EVString_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jstring datasourceName_j, jlong meshID_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					ev_uint32 meshID = (ev_uint32) meshID_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject* __values1 = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::createModelObject(pSceneManager, datasourceName, meshID);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectFactory_createModelObject_1CSceneManager_1CModelDataSource_1EVString(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jlong pModelDataSource_j, jstring meshName_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
					EarthView::World::Spatial3D::Dataset::CModelDataSource *pModelDataSource = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pModelDataSource_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
					#else
					const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CManualModelObject* __values1 = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::createModelObject(pSceneManager, pModelDataSource, meshName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectFactory_createModelObject_1CSceneManager_1CModelDataSource_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jlong pModelDataSource_j, jlong meshID_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
					EarthView::World::Spatial3D::Dataset::CModelDataSource *pModelDataSource = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pModelDataSource_j;
					ev_uint32 meshID = (ev_uint32) meshID_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject* __values1 = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::createModelObject(pSceneManager, pModelDataSource, meshID);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectFactory_createModelObject_1CSceneManager_1EVString_1ev_1bool(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jstring modelfile_j, jboolean bFileDirAsGroup_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* modelfile_ch = (const ev_char*)__env->GetStringUTFChars(modelfile_j,JNI_FALSE);
					const EVString modelfile = modelfile_ch;
					__env->ReleaseStringUTFChars(modelfile_j, (const char *)modelfile_ch);
					#else
					const ev_wchar* modelfile_ch = (const ev_wchar*)__env->GetStringChars(modelfile_j,JNI_FALSE);
					const EVString modelfile = modelfile_ch;
					__env->ReleaseStringChars(modelfile_j, (const jchar *)modelfile_ch);
					#endif
					ev_bool bFileDirAsGroup = (ev_bool) bFileDirAsGroup_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject* __values1 = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::createModelObject(pSceneManager, modelfile, bFileDirAsGroup);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectFactory_createInstanceObject_1CSceneManager_1EVString_1EVString(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jstring datasourceName_j, jstring meshName_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
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
					const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
					#else
					const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* __values1 = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::createInstanceObject(pSceneManager, datasourceName, meshName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectFactory_createInstanceObject_1CSceneManager_1EVString_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jstring datasourceName_j, jlong meshID_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					ev_uint32 meshID = (ev_uint32) meshID_j;
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* __values1 = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::createInstanceObject(pSceneManager, datasourceName, meshID);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectFactory_createInstanceObject_1CSceneManager_1CModelDataSource_1EVString(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jlong pModelDataSource_j, jstring meshName_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
					EarthView::World::Spatial3D::Dataset::CModelDataSource *pModelDataSource = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pModelDataSource_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
					#else
					const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* __values1 = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::createInstanceObject(pSceneManager, pModelDataSource, meshName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectFactory_createInstanceObject_1CSceneManager_1CModelDataSource_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jlong pModelDataSource_j, jlong meshID_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
					EarthView::World::Spatial3D::Dataset::CModelDataSource *pModelDataSource = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pModelDataSource_j;
					ev_uint32 meshID = (ev_uint32) meshID_j;
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* __values1 = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::createInstanceObject(pSceneManager, pModelDataSource, meshID);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectFactory_createInstanceObject_1CSceneManager_1EVString_1ev_1bool(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jstring modelfile_j, jboolean bFileDirAsGroup_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* modelfile_ch = (const ev_char*)__env->GetStringUTFChars(modelfile_j,JNI_FALSE);
					const EVString modelfile = modelfile_ch;
					__env->ReleaseStringUTFChars(modelfile_j, (const char *)modelfile_ch);
					#else
					const ev_wchar* modelfile_ch = (const ev_wchar*)__env->GetStringChars(modelfile_j,JNI_FALSE);
					const EVString modelfile = modelfile_ch;
					__env->ReleaseStringChars(modelfile_j, (const jchar *)modelfile_ch);
					#endif
					ev_bool bFileDirAsGroup = (ev_bool) bFileDirAsGroup_j;
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* __values1 = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::createInstanceObject(pSceneManager, modelfile, bFileDirAsGroup);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectFactory_createSubEntityObject_1CModelBaseObject_1IntVector(JNIEnv *__env , jclass __clazz, jlong pModelObject_j, jlong subEntityIndexs_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pModelObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pModelObject_j;
					const EarthView::World::Core::IntVector &subEntityIndexs = *(EarthView::World::Core::IntVector*) subEntityIndexs_j;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* __values1 = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::createSubEntityObject(pModelObject, subEntityIndexs);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectFactory_destroyObject_1CModelBaseObject(JNIEnv *__env , jclass __clazz, jlong pModelObject_j)
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject *pModelObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pModelObject_j;
					EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::destroyObject(pModelObject);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectFactory_getMaxInstanceCountPerBatch_1void(JNIEnv *__env , jclass __clazz)
				{
					ev_uint16 __values1 = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::getMaxInstanceCountPerBatch();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectFactory_setMaxInstanceCountPerBatch_1ev_1uint16(JNIEnv *__env , jclass __clazz, jint count_j)
				{
					ev_uint16 count = (ev_uint16) count_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::setMaxInstanceCountPerBatch(count);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectFactory_checkHardwareInstanceCapability_1void(JNIEnv *__env , jclass __clazz)
				{
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::checkHardwareInstanceCapability();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectFactory_checkInstanceCapability_1CMeshPtr(JNIEnv *__env , jclass __clazz, jlong mesh_j)
				{
					EarthView::World::Graphic::CMeshPtr mesh = *(EarthView::World::Graphic::CMeshPtr*) mesh_j;
					EarthView::World::Graphic::InstanceTechniuqe __values1 = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::checkInstanceCapability(mesh);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectFactory_checkInstanceCapability_1CSceneManager_1CModelDataSource_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jlong pModelDataSource_j, jlong meshID_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
					EarthView::World::Spatial3D::Dataset::CModelDataSource *pModelDataSource = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pModelDataSource_j;
					ev_uint32 meshID = (ev_uint32) meshID_j;
					EarthView::World::Graphic::InstanceTechniuqe __values1 = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::checkInstanceCapability(pSceneManager, pModelDataSource, meshID);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectFactory_checkInstanceCapability_1CSceneManager_1CModelDataSource_1EVString(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jlong pModelDataSource_j, jstring meshName_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
					EarthView::World::Spatial3D::Dataset::CModelDataSource *pModelDataSource = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) pModelDataSource_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
					#else
					const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
					#endif
					EarthView::World::Graphic::InstanceTechniuqe __values1 = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::checkInstanceCapability(pSceneManager, pModelDataSource, meshName);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectFactory_checkInstanceCapability_1CSceneManager_1EVString_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jstring datasourceName_j, jlong meshID_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					ev_uint32 meshID = (ev_uint32) meshID_j;
					EarthView::World::Graphic::InstanceTechniuqe __values1 = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::checkInstanceCapability(pSceneManager, datasourceName, meshID);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectFactory_checkInstanceCapability_1CSceneManager_1EVString_1EVString(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jstring datasourceName_j, jstring meshName_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
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
					const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
					#else
					const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
					const EVString meshName = meshName_ch;
					__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
					#endif
					EarthView::World::Graphic::InstanceTechniuqe __values1 = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::checkInstanceCapability(pSceneManager, datasourceName, meshName);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectFactory_isInternalVertexProgram_1EVString(JNIEnv *__env , jclass __clazz, jstring strVertexProgramName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strVertexProgramName_ch = (const ev_char*)__env->GetStringUTFChars(strVertexProgramName_j,JNI_FALSE);
					const EVString strVertexProgramName = strVertexProgramName_ch;
					__env->ReleaseStringUTFChars(strVertexProgramName_j, (const char *)strVertexProgramName_ch);
					#else
					const ev_wchar* strVertexProgramName_ch = (const ev_wchar*)__env->GetStringChars(strVertexProgramName_j,JNI_FALSE);
					const EVString strVertexProgramName = strVertexProgramName_ch;
					__env->ReleaseStringChars(strVertexProgramName_j, (const jchar *)strVertexProgramName_ch);
					#endif
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::isInternalVertexProgram(strVertexProgramName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectFactory_isInternalFragmentProgram_1EVString(JNIEnv *__env , jclass __clazz, jstring strFragmentProgramName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strFragmentProgramName_ch = (const ev_char*)__env->GetStringUTFChars(strFragmentProgramName_j,JNI_FALSE);
					const EVString strFragmentProgramName = strFragmentProgramName_ch;
					__env->ReleaseStringUTFChars(strFragmentProgramName_j, (const char *)strFragmentProgramName_ch);
					#else
					const ev_wchar* strFragmentProgramName_ch = (const ev_wchar*)__env->GetStringChars(strFragmentProgramName_j,JNI_FALSE);
					const EVString strFragmentProgramName = strFragmentProgramName_ch;
					__env->ReleaseStringChars(strFragmentProgramName_j, (const jchar *)strFragmentProgramName_ch);
					#endif
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::isInternalFragmentProgram(strFragmentProgramName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
