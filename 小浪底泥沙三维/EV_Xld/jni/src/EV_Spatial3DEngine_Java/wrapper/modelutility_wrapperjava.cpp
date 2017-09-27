/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/modelutility.h"
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
		namespace Spatial3D
		{
			namespace Dataset
			{
			}
			namespace ModelManager
			{
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_readModelDataStream_1IDataset_1ev_1uint32_1ModelDataStream(JNIEnv *__env , jclass __clazz, jlong ds_j, jlong id_j, jlong modelDataStream_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataset *ds = (EarthView::World::Spatial::GeoDataset::IDataset*) ds_j;
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::ModelDataStream &modelDataStream = *(EarthView::World::Spatial3D::ModelDataStream*) modelDataStream_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::readModelDataStream(ds, id, modelDataStream);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_readModelDataStream_1db_1CEntityDataset_1ev_1uint32_1ModelDataStream(JNIEnv *__env , jclass __clazz, jlong ds_j, jlong id_j, jlong modelDataStream_j)
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset *ds = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) ds_j;
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::ModelDataStream &modelDataStream = *(EarthView::World::Spatial3D::ModelDataStream*) modelDataStream_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::readModelDataStream_db(ds, id, modelDataStream);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_readModelDataStream_1db_1CMeshTemplateDataset_1ev_1uint32_1ModelDataStream(JNIEnv *__env , jclass __clazz, jlong ds_j, jlong id_j, jlong modelDataStream_j)
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset *ds = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) ds_j;
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::ModelDataStream &modelDataStream = *(EarthView::World::Spatial3D::ModelDataStream*) modelDataStream_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::readModelDataStream_db(ds, id, modelDataStream);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_readModelDataStream_1web_1CWebEntityDataset_1ev_1uint32_1ModelDataStream(JNIEnv *__env , jclass __clazz, jlong ds_j, jlong id_j, jlong modelDataStream_j)
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset *ds = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) ds_j;
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::ModelDataStream &modelDataStream = *(EarthView::World::Spatial3D::ModelDataStream*) modelDataStream_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::readModelDataStream_web(ds, id, modelDataStream);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_readModelDataStream_1web_1CWebMeshTemplateDataset_1ev_1uint32_1ModelDataStream(JNIEnv *__env , jclass __clazz, jlong ds_j, jlong id_j, jlong modelDataStream_j)
				{
					EarthView::World::Spatial3D::Dataset::CWebMeshTemplateDataset *ds = (EarthView::World::Spatial3D::Dataset::CWebMeshTemplateDataset*) ds_j;
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::ModelDataStream &modelDataStream = *(EarthView::World::Spatial3D::ModelDataStream*) modelDataStream_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::readModelDataStream_web(ds, id, modelDataStream);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_readAniDataStream_1IDataset_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong ds_j, jlong meshID_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataset *ds = (EarthView::World::Spatial::GeoDataset::IDataset*) ds_j;
					ev_uint32 meshID = (ev_uint32) meshID_j;
					EarthView::World::Core::MemoryDataStreamPtr __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::readAniDataStream(ds, meshID);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_readAniDataStream_1EVString(JNIEnv *__env , jclass __clazz, jstring aniFile_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* aniFile_ch = (const ev_char*)__env->GetStringUTFChars(aniFile_j,JNI_FALSE);
					const EVString aniFile = aniFile_ch;
					__env->ReleaseStringUTFChars(aniFile_j, (const char *)aniFile_ch);
					#else
					const ev_wchar* aniFile_ch = (const ev_wchar*)__env->GetStringChars(aniFile_j,JNI_FALSE);
					const EVString aniFile = aniFile_ch;
					__env->ReleaseStringChars(aniFile_j, (const jchar *)aniFile_ch);
					#endif
					EarthView::World::Core::MemoryDataStreamPtr __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::readAniDataStream(aniFile);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_readAniDataStream_1db_1CEntityDataset_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong ds_j, jlong meshID_j)
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset *ds = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) ds_j;
					ev_uint32 meshID = (ev_uint32) meshID_j;
					EarthView::World::Core::MemoryDataStreamPtr __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::readAniDataStream_db(ds, meshID);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_readAniDataStream_1web_1CWebEntityDataset_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong ds_j, jlong meshID_j)
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset *ds = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) ds_j;
					ev_uint32 meshID = (ev_uint32) meshID_j;
					EarthView::World::Core::MemoryDataStreamPtr __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::readAniDataStream_web(ds, meshID);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_readAniDataStream_1db_1CMeshTemplateDataset_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong ds_j, jlong meshID_j)
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset *ds = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) ds_j;
					ev_uint32 meshID = (ev_uint32) meshID_j;
					EarthView::World::Core::MemoryDataStreamPtr __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::readAniDataStream_db(ds, meshID);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_readMeshFeature_1CEntityDataset_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong ds_j, jlong id_j)
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset *ds = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) ds_j;
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial::GeoDataset::IFeature* __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::readMeshFeature(ds, id);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_getMeshTmplID_1CMeshTemplateDataset_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong ds_j, jlong instID_j)
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset *ds = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) ds_j;
					ev_uint32 instID = (ev_uint32) instID_j;
					ev_uint32 __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::getMeshTmplID(ds, instID);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_loadModelResource_1CSceneManager_1ev_1uint32_1ModelDataStream_1EVString_1ev_1bool_1ev_1bool_1ModelResource(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jlong id_j, jlong modelDataStream_j, jstring groupname_j, jboolean bLoadOrigTexture_j, jboolean bLoadFromLayer_j, jlong modelResource_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
					ev_uint32 id = (ev_uint32) id_j;
					const EarthView::World::Spatial3D::ModelDataStream &modelDataStream = *(EarthView::World::Spatial3D::ModelDataStream*) modelDataStream_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* groupname_ch = (const ev_char*)__env->GetStringUTFChars(groupname_j,JNI_FALSE);
					const EVString groupname = groupname_ch;
					__env->ReleaseStringUTFChars(groupname_j, (const char *)groupname_ch);
					#else
					const ev_wchar* groupname_ch = (const ev_wchar*)__env->GetStringChars(groupname_j,JNI_FALSE);
					const EVString groupname = groupname_ch;
					__env->ReleaseStringChars(groupname_j, (const jchar *)groupname_ch);
					#endif
					ev_bool bLoadOrigTexture = (ev_bool) bLoadOrigTexture_j;
					ev_bool bLoadFromLayer = (ev_bool) bLoadFromLayer_j;
					EarthView::World::Spatial3D::ModelResource &modelResource = *(EarthView::World::Spatial3D::ModelResource*) modelResource_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::loadModelResource(pSceneManager, id, modelDataStream, groupname, bLoadOrigTexture, bLoadFromLayer, modelResource);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_loadModelResource_1CSceneManager_1ev_1uint32_1ModelDataStream_1EVString_1ev_1bool_1CMaterialResourceCache_1ev_1bool_1ModelResource(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jlong id_j, jlong modelDataStream_j, jstring groupname_j, jboolean bLoadOrigTexture_j, jlong pMaterialCache_j, jboolean bLoadFromLayer_j, jlong modelResource_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
					ev_uint32 id = (ev_uint32) id_j;
					const EarthView::World::Spatial3D::ModelDataStream &modelDataStream = *(EarthView::World::Spatial3D::ModelDataStream*) modelDataStream_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* groupname_ch = (const ev_char*)__env->GetStringUTFChars(groupname_j,JNI_FALSE);
					const EVString groupname = groupname_ch;
					__env->ReleaseStringUTFChars(groupname_j, (const char *)groupname_ch);
					#else
					const ev_wchar* groupname_ch = (const ev_wchar*)__env->GetStringChars(groupname_j,JNI_FALSE);
					const EVString groupname = groupname_ch;
					__env->ReleaseStringChars(groupname_j, (const jchar *)groupname_ch);
					#endif
					ev_bool bLoadOrigTexture = (ev_bool) bLoadOrigTexture_j;
					EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache *pMaterialCache = (EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache*) pMaterialCache_j;
					ev_bool bLoadFromLayer = (ev_bool) bLoadFromLayer_j;
					EarthView::World::Spatial3D::ModelResource &modelResource = *(EarthView::World::Spatial3D::ModelResource*) modelResource_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::loadModelResource(pSceneManager, id, modelDataStream, groupname, bLoadOrigTexture, pMaterialCache, bLoadFromLayer, modelResource);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_loadInstanceResource_1CSceneManager_1ev_1uint32_1ModelDataStream_1EVString_1ev_1bool_1ev_1bool_1ModelResource(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jlong id_j, jlong modelDataStream_j, jstring groupname_j, jboolean bLoadOrigTexture_j, jboolean bLoadFromLayer_j, jlong modelResource_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
					ev_uint32 id = (ev_uint32) id_j;
					const EarthView::World::Spatial3D::ModelDataStream &modelDataStream = *(EarthView::World::Spatial3D::ModelDataStream*) modelDataStream_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* groupname_ch = (const ev_char*)__env->GetStringUTFChars(groupname_j,JNI_FALSE);
					const EVString groupname = groupname_ch;
					__env->ReleaseStringUTFChars(groupname_j, (const char *)groupname_ch);
					#else
					const ev_wchar* groupname_ch = (const ev_wchar*)__env->GetStringChars(groupname_j,JNI_FALSE);
					const EVString groupname = groupname_ch;
					__env->ReleaseStringChars(groupname_j, (const jchar *)groupname_ch);
					#endif
					ev_bool bLoadOrigTexture = (ev_bool) bLoadOrigTexture_j;
					ev_bool bLoadFromLayer = (ev_bool) bLoadFromLayer_j;
					EarthView::World::Spatial3D::ModelResource &modelResource = *(EarthView::World::Spatial3D::ModelResource*) modelResource_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::loadInstanceResource(pSceneManager, id, modelDataStream, groupname, bLoadOrigTexture, bLoadFromLayer, modelResource);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_loadInstanceResource_1CSceneManager_1ev_1uint32_1ModelDataStream_1EVString_1ev_1bool_1CMaterialResourceCache_1ev_1bool_1ModelResource(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jlong id_j, jlong modelDataStream_j, jstring groupname_j, jboolean bLoadOrigTexture_j, jlong pMaterialCache_j, jboolean bLoadFromLayer_j, jlong modelResource_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
					ev_uint32 id = (ev_uint32) id_j;
					const EarthView::World::Spatial3D::ModelDataStream &modelDataStream = *(EarthView::World::Spatial3D::ModelDataStream*) modelDataStream_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* groupname_ch = (const ev_char*)__env->GetStringUTFChars(groupname_j,JNI_FALSE);
					const EVString groupname = groupname_ch;
					__env->ReleaseStringUTFChars(groupname_j, (const char *)groupname_ch);
					#else
					const ev_wchar* groupname_ch = (const ev_wchar*)__env->GetStringChars(groupname_j,JNI_FALSE);
					const EVString groupname = groupname_ch;
					__env->ReleaseStringChars(groupname_j, (const jchar *)groupname_ch);
					#endif
					ev_bool bLoadOrigTexture = (ev_bool) bLoadOrigTexture_j;
					EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache *pMaterialCache = (EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache*) pMaterialCache_j;
					ev_bool bLoadFromLayer = (ev_bool) bLoadFromLayer_j;
					EarthView::World::Spatial3D::ModelResource &modelResource = *(EarthView::World::Spatial3D::ModelResource*) modelResource_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::loadInstanceResource(pSceneManager, id, modelDataStream, groupname, bLoadOrigTexture, pMaterialCache, bLoadFromLayer, modelResource);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_loadModelResource_1CSceneManager_1EVString_1ev_1bool_1ModelResource_1MemoryDataStreamPtr(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jstring modelfile_j, jboolean bFileDirAsGroup_j, jlong modelResource_j, jlong modelAniDataStream_j)
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
					EarthView::World::Spatial3D::ModelResource &modelResource = *(EarthView::World::Spatial3D::ModelResource*) modelResource_j;
					EarthView::World::Core::MemoryDataStreamPtr &modelAniDataStream = *(EarthView::World::Core::MemoryDataStreamPtr*) modelAniDataStream_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::loadModelResource(pSceneManager, modelfile, bFileDirAsGroup, modelResource, modelAniDataStream);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_loadInstanceResource_1CSceneManager_1EVString_1ev_1bool_1ModelResource_1MemoryDataStreamPtr(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jstring modelfile_j, jboolean bFileDirAsGroup_j, jlong modelResource_j, jlong modelAniDataStream_j)
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
					EarthView::World::Spatial3D::ModelResource &modelResource = *(EarthView::World::Spatial3D::ModelResource*) modelResource_j;
					EarthView::World::Core::MemoryDataStreamPtr &modelAniDataStream = *(EarthView::World::Core::MemoryDataStreamPtr*) modelAniDataStream_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::loadInstanceResource(pSceneManager, modelfile, bFileDirAsGroup, modelResource, modelAniDataStream);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_unloadModelResource_1CSceneManager_1ev_1uint32_1EVString_1ModelResource(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jlong id_j, jstring groupname_j, jlong modelResource_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
					ev_uint32 id = (ev_uint32) id_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* groupname_ch = (const ev_char*)__env->GetStringUTFChars(groupname_j,JNI_FALSE);
					const EVString groupname = groupname_ch;
					__env->ReleaseStringUTFChars(groupname_j, (const char *)groupname_ch);
					#else
					const ev_wchar* groupname_ch = (const ev_wchar*)__env->GetStringChars(groupname_j,JNI_FALSE);
					const EVString groupname = groupname_ch;
					__env->ReleaseStringChars(groupname_j, (const jchar *)groupname_ch);
					#endif
					EarthView::World::Spatial3D::ModelResource &modelResource = *(EarthView::World::Spatial3D::ModelResource*) modelResource_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::unloadModelResource(pSceneManager, id, groupname, modelResource);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_unloadModelResource_1CSceneManager_1EVString_1ev_1bool_1ModelResource(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jstring modelfile_j, jboolean bFileDirAsGroup_j, jlong modelResource_j)
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
					EarthView::World::Spatial3D::ModelResource &modelResource = *(EarthView::World::Spatial3D::ModelResource*) modelResource_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::unloadModelResource(pSceneManager, modelfile, bFileDirAsGroup, modelResource);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_unloadModelResource_1CSceneManager_1ev_1uint32_1EVString_1ModelResource_1CMaterialResourceCache(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jlong id_j, jstring groupname_j, jlong modelResource_j, jlong pMaterialCache_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
					ev_uint32 id = (ev_uint32) id_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* groupname_ch = (const ev_char*)__env->GetStringUTFChars(groupname_j,JNI_FALSE);
					const EVString groupname = groupname_ch;
					__env->ReleaseStringUTFChars(groupname_j, (const char *)groupname_ch);
					#else
					const ev_wchar* groupname_ch = (const ev_wchar*)__env->GetStringChars(groupname_j,JNI_FALSE);
					const EVString groupname = groupname_ch;
					__env->ReleaseStringChars(groupname_j, (const jchar *)groupname_ch);
					#endif
					EarthView::World::Spatial3D::ModelResource &modelResource = *(EarthView::World::Spatial3D::ModelResource*) modelResource_j;
					EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache *pMaterialCache = (EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache*) pMaterialCache_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::unloadModelResource(pSceneManager, id, groupname, modelResource, pMaterialCache);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_createEntity_1CSceneManager_1EVString_1EVString_1EVString(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jstring entName_j, jstring meshFilename_j, jstring groupName_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* entName_ch = (const ev_char*)__env->GetStringUTFChars(entName_j,JNI_FALSE);
					const EVString entName = entName_ch;
					__env->ReleaseStringUTFChars(entName_j, (const char *)entName_ch);
					#else
					const ev_wchar* entName_ch = (const ev_wchar*)__env->GetStringChars(entName_j,JNI_FALSE);
					const EVString entName = entName_ch;
					__env->ReleaseStringChars(entName_j, (const jchar *)entName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* meshFilename_ch = (const ev_char*)__env->GetStringUTFChars(meshFilename_j,JNI_FALSE);
					const EVString meshFilename = meshFilename_ch;
					__env->ReleaseStringUTFChars(meshFilename_j, (const char *)meshFilename_ch);
					#else
					const ev_wchar* meshFilename_ch = (const ev_wchar*)__env->GetStringChars(meshFilename_j,JNI_FALSE);
					const EVString meshFilename = meshFilename_ch;
					__env->ReleaseStringChars(meshFilename_j, (const jchar *)meshFilename_ch);
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
					EarthView::World::Graphic::CEntity* __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::createEntity(pSceneManager, entName, meshFilename, groupName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_createEntity_1CSceneManager_1EVString_1EVString_1EVString_1IntVector(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jstring entName_j, jstring meshFilename_j, jstring groupName_j, jlong subEntityIndexs_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* entName_ch = (const ev_char*)__env->GetStringUTFChars(entName_j,JNI_FALSE);
					const EVString entName = entName_ch;
					__env->ReleaseStringUTFChars(entName_j, (const char *)entName_ch);
					#else
					const ev_wchar* entName_ch = (const ev_wchar*)__env->GetStringChars(entName_j,JNI_FALSE);
					const EVString entName = entName_ch;
					__env->ReleaseStringChars(entName_j, (const jchar *)entName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* meshFilename_ch = (const ev_char*)__env->GetStringUTFChars(meshFilename_j,JNI_FALSE);
					const EVString meshFilename = meshFilename_ch;
					__env->ReleaseStringUTFChars(meshFilename_j, (const char *)meshFilename_ch);
					#else
					const ev_wchar* meshFilename_ch = (const ev_wchar*)__env->GetStringChars(meshFilename_j,JNI_FALSE);
					const EVString meshFilename = meshFilename_ch;
					__env->ReleaseStringChars(meshFilename_j, (const jchar *)meshFilename_ch);
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
					const EarthView::World::Core::IntVector &subEntityIndexs = *(EarthView::World::Core::IntVector*) subEntityIndexs_j;
					EarthView::World::Graphic::CEntity* __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::createEntity(pSceneManager, entName, meshFilename, groupName, subEntityIndexs);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_destroyEntity_1CSceneManager_1CEntity(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jlong pEntity_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
					EarthView::World::Graphic::CEntity *pEntity = (EarthView::World::Graphic::CEntity*) pEntity_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::destroyEntity(pSceneManager, pEntity);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_createInstanceManager_1CSceneManager_1EVString_1CMeshPtr_1ev_1uint32_1EVString_1ev_1bool_1ev_1bool_1InstanceManagerVector(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jstring customName_j, jlong meshPtr_j, jlong numInstancesPerBatch_j, jstring groupname_j, jboolean aysncUpdateBuffer_j, jboolean strategyForCustomer_j, jlong instMngerVec_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* customName_ch = (const ev_char*)__env->GetStringUTFChars(customName_j,JNI_FALSE);
					const EVString customName = customName_ch;
					__env->ReleaseStringUTFChars(customName_j, (const char *)customName_ch);
					#else
					const ev_wchar* customName_ch = (const ev_wchar*)__env->GetStringChars(customName_j,JNI_FALSE);
					const EVString customName = customName_ch;
					__env->ReleaseStringChars(customName_j, (const jchar *)customName_ch);
					#endif
					const EarthView::World::Graphic::CMeshPtr &meshPtr = *(EarthView::World::Graphic::CMeshPtr*) meshPtr_j;
					ev_uint32 numInstancesPerBatch = (ev_uint32) numInstancesPerBatch_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* groupname_ch = (const ev_char*)__env->GetStringUTFChars(groupname_j,JNI_FALSE);
					const EVString groupname = groupname_ch;
					__env->ReleaseStringUTFChars(groupname_j, (const char *)groupname_ch);
					#else
					const ev_wchar* groupname_ch = (const ev_wchar*)__env->GetStringChars(groupname_j,JNI_FALSE);
					const EVString groupname = groupname_ch;
					__env->ReleaseStringChars(groupname_j, (const jchar *)groupname_ch);
					#endif
					ev_bool aysncUpdateBuffer = (ev_bool) aysncUpdateBuffer_j;
					ev_bool strategyForCustomer = (ev_bool) strategyForCustomer_j;
					EarthView::World::Spatial3D::InstanceManagerVector &instMngerVec = *(EarthView::World::Spatial3D::InstanceManagerVector*) instMngerVec_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::createInstanceManager(pSceneManager, customName, meshPtr, numInstancesPerBatch, groupname, aysncUpdateBuffer, strategyForCustomer, instMngerVec);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_destroyInstanceManager_1InstanceManagerVector(JNIEnv *__env , jclass __clazz, jlong instMngerVec_j)
				{
					const EarthView::World::Spatial3D::InstanceManagerVector &instMngerVec = *(EarthView::World::Spatial3D::InstanceManagerVector*) instMngerVec_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::destroyInstanceManager(instMngerVec);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_createInstanceEntity_1CMeshPtr_1InstanceManagerVector_1InstancedEntityVector(JNIEnv *__env , jclass __clazz, jlong meshPtr_j, jlong instMngerVec_j, jlong instEntVec_j)
				{
					EarthView::World::Graphic::CMeshPtr meshPtr = *(EarthView::World::Graphic::CMeshPtr*) meshPtr_j;
					const EarthView::World::Spatial3D::InstanceManagerVector &instMngerVec = *(EarthView::World::Spatial3D::InstanceManagerVector*) instMngerVec_j;
					EarthView::World::Spatial3D::InstancedEntityVector &instEntVec = *(EarthView::World::Spatial3D::InstancedEntityVector*) instEntVec_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::createInstanceEntity(meshPtr, instMngerVec, instEntVec);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_createInstanceEntity_1CMeshPtr_1InstanceManagerVector_1IntVector_1InstancedEntityVector(JNIEnv *__env , jclass __clazz, jlong meshPtr_j, jlong instMngerVec_j, jlong subEntityIndexs_j, jlong instEntVec_j)
				{
					EarthView::World::Graphic::CMeshPtr meshPtr = *(EarthView::World::Graphic::CMeshPtr*) meshPtr_j;
					const EarthView::World::Spatial3D::InstanceManagerVector &instMngerVec = *(EarthView::World::Spatial3D::InstanceManagerVector*) instMngerVec_j;
					const EarthView::World::Core::IntVector &subEntityIndexs = *(EarthView::World::Core::IntVector*) subEntityIndexs_j;
					EarthView::World::Spatial3D::InstancedEntityVector &instEntVec = *(EarthView::World::Spatial3D::InstancedEntityVector*) instEntVec_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::createInstanceEntity(meshPtr, instMngerVec, subEntityIndexs, instEntVec);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_destroyInstanceEntity_1CSceneManager_1InstancedEntityVector(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jlong instEntVec_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
					const EarthView::World::Spatial3D::InstancedEntityVector &instEntVec = *(EarthView::World::Spatial3D::InstancedEntityVector*) instEntVec_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::destroyInstanceEntity(pSceneManager, instEntVec);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_destroySceneNode_1CSceneManager_1CSceneNode(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j, jlong n_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
					EarthView::World::Graphic::CSceneNode *n = (EarthView::World::Graphic::CSceneNode*) n_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::destroySceneNode(pSceneManager, n);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_switchThumbTexture_1FeatureVector_1EVString_1ev_1bool_1TexturePtrVector(JNIEnv *__env , jclass __clazz, jlong thumbTextures_j, jstring groupname_j, jboolean bLoadFromLayer_j, jlong thumbTexturePtrVector_j)
				{
					const EarthView::World::Spatial3D::Dataset::FeatureVector &thumbTextures = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) thumbTextures_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* groupname_ch = (const ev_char*)__env->GetStringUTFChars(groupname_j,JNI_FALSE);
					const EVString groupname = groupname_ch;
					__env->ReleaseStringUTFChars(groupname_j, (const char *)groupname_ch);
					#else
					const ev_wchar* groupname_ch = (const ev_wchar*)__env->GetStringChars(groupname_j,JNI_FALSE);
					const EVString groupname = groupname_ch;
					__env->ReleaseStringChars(groupname_j, (const jchar *)groupname_ch);
					#endif
					ev_bool bLoadFromLayer = (ev_bool) bLoadFromLayer_j;
					EarthView::World::Spatial3D::TexturePtrVector &thumbTexturePtrVector = *(EarthView::World::Spatial3D::TexturePtrVector*) thumbTexturePtrVector_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::switchThumbTexture(thumbTextures, groupname, bLoadFromLayer, thumbTexturePtrVector);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_attachThumbTexture_1MaterialPtrVector_1TexturePtrVector_1TexturePtrVector_1EVString(JNIEnv *__env , jclass __clazz, jlong materialObjs_j, jlong textureObjs_j, jlong thumbTexturePtrVector_j, jstring groupname_j)
				{
					EarthView::World::Spatial3D::MaterialPtrVector &materialObjs = *(EarthView::World::Spatial3D::MaterialPtrVector*) materialObjs_j;
					EarthView::World::Spatial3D::TexturePtrVector &textureObjs = *(EarthView::World::Spatial3D::TexturePtrVector*) textureObjs_j;
					EarthView::World::Spatial3D::TexturePtrVector &thumbTexturePtrVector = *(EarthView::World::Spatial3D::TexturePtrVector*) thumbTexturePtrVector_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* groupname_ch = (const ev_char*)__env->GetStringUTFChars(groupname_j,JNI_FALSE);
					const EVString groupname = groupname_ch;
					__env->ReleaseStringUTFChars(groupname_j, (const char *)groupname_ch);
					#else
					const ev_wchar* groupname_ch = (const ev_wchar*)__env->GetStringChars(groupname_j,JNI_FALSE);
					const EVString groupname = groupname_ch;
					__env->ReleaseStringChars(groupname_j, (const jchar *)groupname_ch);
					#endif
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::attachThumbTexture(materialObjs, textureObjs, thumbTexturePtrVector, groupname);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_switchOrigTexture_1IDataset_1ModelType_1ev_1uint32_1FeatureVector_1EVString_1ev_1bool_1TexturePtrVector(JNIEnv *__env , jclass __clazz, jlong ds_j, jint type_j, jlong meshID_j, jlong origTextures_j, jstring groupname_j, jboolean bLoadFromLayer_j, jlong origTexturePtrVector_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataset *ds = (EarthView::World::Spatial::GeoDataset::IDataset*) ds_j;
					EarthView::World::Spatial3D::ModelType type = (EarthView::World::Spatial3D::ModelType) type_j;
					ev_uint32 meshID = (ev_uint32) meshID_j;
					const EarthView::World::Spatial3D::Dataset::FeatureVector &origTextures = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) origTextures_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* groupname_ch = (const ev_char*)__env->GetStringUTFChars(groupname_j,JNI_FALSE);
					const EVString groupname = groupname_ch;
					__env->ReleaseStringUTFChars(groupname_j, (const char *)groupname_ch);
					#else
					const ev_wchar* groupname_ch = (const ev_wchar*)__env->GetStringChars(groupname_j,JNI_FALSE);
					const EVString groupname = groupname_ch;
					__env->ReleaseStringChars(groupname_j, (const jchar *)groupname_ch);
					#endif
					ev_bool bLoadFromLayer = (ev_bool) bLoadFromLayer_j;
					EarthView::World::Spatial3D::TexturePtrVector &origTexturePtrVector = *(EarthView::World::Spatial3D::TexturePtrVector*) origTexturePtrVector_j;
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::switchOrigTexture(ds, type, meshID, origTextures, groupname, bLoadFromLayer, origTexturePtrVector);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelUtility_attachOrigTexture_1MaterialPtrVector_1TexturePtrVector_1TexturePtrVector_1EVString(JNIEnv *__env , jclass __clazz, jlong materialObjs_j, jlong textureObjs_j, jlong origTexturePtrVector_j, jstring groupname_j)
				{
					EarthView::World::Spatial3D::MaterialPtrVector &materialObjs = *(EarthView::World::Spatial3D::MaterialPtrVector*) materialObjs_j;
					EarthView::World::Spatial3D::TexturePtrVector &textureObjs = *(EarthView::World::Spatial3D::TexturePtrVector*) textureObjs_j;
					EarthView::World::Spatial3D::TexturePtrVector &origTexturePtrVector = *(EarthView::World::Spatial3D::TexturePtrVector*) origTexturePtrVector_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* groupname_ch = (const ev_char*)__env->GetStringUTFChars(groupname_j,JNI_FALSE);
					const EVString groupname = groupname_ch;
					__env->ReleaseStringUTFChars(groupname_j, (const char *)groupname_ch);
					#else
					const ev_wchar* groupname_ch = (const ev_wchar*)__env->GetStringChars(groupname_j,JNI_FALSE);
					const EVString groupname = groupname_ch;
					__env->ReleaseStringChars(groupname_j, (const jchar *)groupname_ch);
					#endif
					ev_bool __values1 = EarthView::World::Spatial3D::ModelManager::CModelUtility::attachOrigTexture(materialObjs, textureObjs, origTexturePtrVector, groupname);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
