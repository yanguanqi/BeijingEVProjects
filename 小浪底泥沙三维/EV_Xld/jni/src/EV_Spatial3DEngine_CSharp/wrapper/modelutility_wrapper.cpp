/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/modelutility.h"
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
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_readModelDataStream_ev_bool_IDataset_ev_uint32_ModelDataStream(_in EarthView::World::Spatial::GeoDataset::IDataset* ds, _in ev_uint32 id, _out void* modelDataStream )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::readModelDataStream(ds, id, *(EarthView::World::Spatial3D::ModelDataStream*)modelDataStream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_readModelDataStream_db_ev_bool_CEntityDataset_ev_uint32_ModelDataStream(_in EarthView::World::Spatial3D::Dataset::CEntityDataset* ds, _in ev_uint32 id, _out void* modelDataStream )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::readModelDataStream_db(ds, id, *(EarthView::World::Spatial3D::ModelDataStream*)modelDataStream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_readModelDataStream_db_ev_bool_CMeshTemplateDataset_ev_uint32_ModelDataStream(_in EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ds, _in ev_uint32 id, _out void* modelDataStream )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::readModelDataStream_db(ds, id, *(EarthView::World::Spatial3D::ModelDataStream*)modelDataStream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_readModelDataStream_web_ev_bool_CWebEntityDataset_ev_uint32_ModelDataStream(_in EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ds, _in ev_uint32 id, _out void* modelDataStream )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::readModelDataStream_web(ds, id, *(EarthView::World::Spatial3D::ModelDataStream*)modelDataStream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_readModelDataStream_web_ev_bool_CWebMeshTemplateDataset_ev_uint32_ModelDataStream(_in EarthView::World::Spatial3D::Dataset::CWebMeshTemplateDataset* ds, _in ev_uint32 id, _out void* modelDataStream )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::readModelDataStream_web(ds, id, *(EarthView::World::Spatial3D::ModelDataStream*)modelDataStream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_readAniDataStream_MemoryDataStreamPtr_IDataset_ev_uint32(_in EarthView::World::Spatial::GeoDataset::IDataset* ds, _in ev_uint32 meshID )
				{
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::readAniDataStream(ds, meshID);
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_readAniDataStream_MemoryDataStreamPtr_EVString(_in const char* aniFile )
				{
					EarthView::World::Core::ev_string aniFile1 = aniFile;
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::readAniDataStream(aniFile1);
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_readAniDataStream_db_MemoryDataStreamPtr_CEntityDataset_ev_uint32(_in EarthView::World::Spatial3D::Dataset::CEntityDataset* ds, _in ev_uint32 meshID )
				{
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::readAniDataStream_db(ds, meshID);
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_readAniDataStream_web_MemoryDataStreamPtr_CWebEntityDataset_ev_uint32(_in EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ds, _in ev_uint32 meshID )
				{
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::readAniDataStream_web(ds, meshID);
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_readAniDataStream_db_MemoryDataStreamPtr_CMeshTemplateDataset_ev_uint32(_in EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ds, _in ev_uint32 meshID )
				{
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::readAniDataStream_db(ds, meshID);
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_readMeshFeature_IFeature_CEntityDataset_ev_uint32(_in EarthView::World::Spatial3D::Dataset::CEntityDataset* ds, _in ev_uint32 id )
				{
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::readMeshFeature(ds, id);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_getMeshTmplID_ev_uint32_CMeshTemplateDataset_ev_uint32(_in EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ds, _in ev_uint32 instID )
				{
					ev_uint32 objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::getMeshTmplID(ds, instID);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_loadModelResource_ev_bool_CSceneManager_ev_uint32_ModelDataStream_EVString_ev_bool_ev_bool_ModelResource(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in ev_uint32 id, _in const void* modelDataStream, _in const char* groupname, _in ev_bool bLoadOrigTexture, _in ev_bool bLoadFromLayer, _out void* modelResource )
				{
					EarthView::World::Core::ev_string groupname1 = groupname;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::loadModelResource(pSceneManager, id, *(EarthView::World::Spatial3D::ModelDataStream*)modelDataStream, groupname1, bLoadOrigTexture, bLoadFromLayer, *(EarthView::World::Spatial3D::ModelResource*)modelResource);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_loadModelResource_ev_bool_CSceneManager_ev_uint32_ModelDataStream_EVString_ev_bool_CMaterialResourceCache_ev_bool_ModelResource(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in ev_uint32 id, _in const void* modelDataStream, _in const char* groupname, _in ev_bool bLoadOrigTexture, _in EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache* pMaterialCache, _in ev_bool bLoadFromLayer, _out void* modelResource )
				{
					EarthView::World::Core::ev_string groupname1 = groupname;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::loadModelResource(pSceneManager, id, *(EarthView::World::Spatial3D::ModelDataStream*)modelDataStream, groupname1, bLoadOrigTexture, pMaterialCache, bLoadFromLayer, *(EarthView::World::Spatial3D::ModelResource*)modelResource);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_loadInstanceResource_ev_bool_CSceneManager_ev_uint32_ModelDataStream_EVString_ev_bool_ev_bool_ModelResource(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in ev_uint32 id, _in const void* modelDataStream, _in const char* groupname, _in ev_bool bLoadOrigTexture, _in ev_bool bLoadFromLayer, _out void* modelResource )
				{
					EarthView::World::Core::ev_string groupname1 = groupname;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::loadInstanceResource(pSceneManager, id, *(EarthView::World::Spatial3D::ModelDataStream*)modelDataStream, groupname1, bLoadOrigTexture, bLoadFromLayer, *(EarthView::World::Spatial3D::ModelResource*)modelResource);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_loadInstanceResource_ev_bool_CSceneManager_ev_uint32_ModelDataStream_EVString_ev_bool_CMaterialResourceCache_ev_bool_ModelResource(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in ev_uint32 id, _in const void* modelDataStream, _in const char* groupname, _in ev_bool bLoadOrigTexture, _in EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache* pMaterialCache, _in ev_bool bLoadFromLayer, _out void* modelResource )
				{
					EarthView::World::Core::ev_string groupname1 = groupname;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::loadInstanceResource(pSceneManager, id, *(EarthView::World::Spatial3D::ModelDataStream*)modelDataStream, groupname1, bLoadOrigTexture, pMaterialCache, bLoadFromLayer, *(EarthView::World::Spatial3D::ModelResource*)modelResource);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_loadModelResource_ev_bool_CSceneManager_EVString_ev_bool_ModelResource_MemoryDataStreamPtr(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in const char* modelfile, _in ev_bool bFileDirAsGroup, _out void* modelResource, _out void* modelAniDataStream )
				{
					EarthView::World::Core::ev_string modelfile1 = modelfile;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::loadModelResource(pSceneManager, modelfile1, bFileDirAsGroup, *(EarthView::World::Spatial3D::ModelResource*)modelResource, *(EarthView::World::Core::MemoryDataStreamPtr*)modelAniDataStream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_loadInstanceResource_ev_bool_CSceneManager_EVString_ev_bool_ModelResource_MemoryDataStreamPtr(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in const char* modelfile, _in ev_bool bFileDirAsGroup, _out void* modelResource, _out void* modelAniDataStream )
				{
					EarthView::World::Core::ev_string modelfile1 = modelfile;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::loadInstanceResource(pSceneManager, modelfile1, bFileDirAsGroup, *(EarthView::World::Spatial3D::ModelResource*)modelResource, *(EarthView::World::Core::MemoryDataStreamPtr*)modelAniDataStream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_unloadModelResource_ev_bool_CSceneManager_ev_uint32_EVString_ModelResource(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in ev_uint32 id, _in const char* groupname, _inout void* modelResource )
				{
					EarthView::World::Core::ev_string groupname1 = groupname;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::unloadModelResource(pSceneManager, id, groupname1, *(EarthView::World::Spatial3D::ModelResource*)modelResource);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_unloadModelResource_ev_bool_CSceneManager_EVString_ev_bool_ModelResource(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in const char* modelfile, _in ev_bool bFileDirAsGroup, _inout void* modelResource )
				{
					EarthView::World::Core::ev_string modelfile1 = modelfile;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::unloadModelResource(pSceneManager, modelfile1, bFileDirAsGroup, *(EarthView::World::Spatial3D::ModelResource*)modelResource);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_unloadModelResource_ev_bool_CSceneManager_ev_uint32_EVString_ModelResource_CMaterialResourceCache(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in ev_uint32 id, _in const char* groupname, _inout void* modelResource, _in EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache* pMaterialCache )
				{
					EarthView::World::Core::ev_string groupname1 = groupname;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::unloadModelResource(pSceneManager, id, groupname1, *(EarthView::World::Spatial3D::ModelResource*)modelResource, pMaterialCache);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CEntity*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_createEntity_CEntity_CSceneManager_EVString_EVString_EVString(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in const char* entName, _in const char* meshFilename, _in const char* groupName )
				{
					EarthView::World::Core::ev_string entName1 = entName;
					EarthView::World::Core::ev_string meshFilename1 = meshFilename;
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::World::Graphic::CEntity* objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::createEntity(pSceneManager, entName1, meshFilename1, groupName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CEntity*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_createEntity_CEntity_CSceneManager_EVString_EVString_EVString_IntVector(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in const char* entName, _in const char* meshFilename, _in const char* groupName, _in const void* subEntityIndexs )
				{
					EarthView::World::Core::ev_string entName1 = entName;
					EarthView::World::Core::ev_string meshFilename1 = meshFilename;
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::World::Graphic::CEntity* objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::createEntity(pSceneManager, entName1, meshFilename1, groupName1, *(EarthView::World::Core::IntVector*)subEntityIndexs);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_destroyEntity_ev_bool_CSceneManager_CEntity(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in EarthView::World::Graphic::CEntity* pEntity )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::destroyEntity(pSceneManager, pEntity);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_createInstanceManager_ev_bool_CSceneManager_EVString_CMeshPtr_ev_uint32_EVString_ev_bool_ev_bool_InstanceManagerVector(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in const char* customName, _in const void* meshPtr, _in ev_uint32 numInstancesPerBatch, _in const char* groupname, _in ev_bool aysncUpdateBuffer, _in ev_bool strategyForCustomer, _out void* instMngerVec )
				{
					EarthView::World::Core::ev_string customName1 = customName;
					EarthView::World::Core::ev_string groupname1 = groupname;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::createInstanceManager(pSceneManager, customName1, *(EarthView::World::Graphic::CMeshPtr*)meshPtr, numInstancesPerBatch, groupname1, aysncUpdateBuffer, strategyForCustomer, *(EarthView::World::Spatial3D::InstanceManagerVector*)instMngerVec);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_destroyInstanceManager_ev_bool_InstanceManagerVector(_in const void* instMngerVec )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::destroyInstanceManager(*(EarthView::World::Spatial3D::InstanceManagerVector*)instMngerVec);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_createInstanceEntity_ev_bool_CMeshPtr_InstanceManagerVector_InstancedEntityVector(_in void* meshPtr, _in const void* instMngerVec, _out void* instEntVec )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::createInstanceEntity(*(EarthView::World::Graphic::CMeshPtr*)meshPtr, *(EarthView::World::Spatial3D::InstanceManagerVector*)instMngerVec, *(EarthView::World::Spatial3D::InstancedEntityVector*)instEntVec);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_createInstanceEntity_ev_bool_CMeshPtr_InstanceManagerVector_IntVector_InstancedEntityVector(_in void* meshPtr, _in const void* instMngerVec, _in const void* subEntityIndexs, _out void* instEntVec )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::createInstanceEntity(*(EarthView::World::Graphic::CMeshPtr*)meshPtr, *(EarthView::World::Spatial3D::InstanceManagerVector*)instMngerVec, *(EarthView::World::Core::IntVector*)subEntityIndexs, *(EarthView::World::Spatial3D::InstancedEntityVector*)instEntVec);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_destroyInstanceEntity_ev_bool_CSceneManager_InstancedEntityVector(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in const void* instEntVec )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::destroyInstanceEntity(pSceneManager, *(EarthView::World::Spatial3D::InstancedEntityVector*)instEntVec);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_destroySceneNode_ev_bool_CSceneManager_CSceneNode(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in EarthView::World::Graphic::CSceneNode* n )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::destroySceneNode(pSceneManager, n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_switchThumbTexture_ev_bool_FeatureVector_EVString_ev_bool_TexturePtrVector(_in const void* thumbTextures, _in const char* groupname, _in ev_bool bLoadFromLayer, _out void* thumbTexturePtrVector )
				{
					EarthView::World::Core::ev_string groupname1 = groupname;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::switchThumbTexture(*(EarthView::World::Spatial3D::Dataset::FeatureVector*)thumbTextures, groupname1, bLoadFromLayer, *(EarthView::World::Spatial3D::TexturePtrVector*)thumbTexturePtrVector);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_attachThumbTexture_ev_bool_MaterialPtrVector_TexturePtrVector_TexturePtrVector_EVString(_inout void* materialObjs, _inout void* textureObjs, _inout void* thumbTexturePtrVector, _in const char* groupname )
				{
					EarthView::World::Core::ev_string groupname1 = groupname;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::attachThumbTexture(*(EarthView::World::Spatial3D::MaterialPtrVector*)materialObjs, *(EarthView::World::Spatial3D::TexturePtrVector*)textureObjs, *(EarthView::World::Spatial3D::TexturePtrVector*)thumbTexturePtrVector, groupname1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_switchOrigTexture_ev_bool_IDataset_ModelType_ev_uint32_FeatureVector_EVString_ev_bool_TexturePtrVector(_in EarthView::World::Spatial::GeoDataset::IDataset* ds, _in int type, _in ev_uint32 meshID, _in const void* origTextures, _in const char* groupname, _in ev_bool bLoadFromLayer, _out void* origTexturePtrVector )
				{
					EarthView::World::Core::ev_string groupname1 = groupname;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::switchOrigTexture(ds, (EarthView::World::Spatial3D::ModelType)type, meshID, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)origTextures, groupname1, bLoadFromLayer, *(EarthView::World::Spatial3D::TexturePtrVector*)origTexturePtrVector);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelUtility_attachOrigTexture_ev_bool_MaterialPtrVector_TexturePtrVector_TexturePtrVector_EVString(_inout void* materialObjs, _inout void* textureObjs, _inout void* origTexturePtrVector, _in const char* groupname )
				{
					EarthView::World::Core::ev_string groupname1 = groupname;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelUtility::attachOrigTexture(*(EarthView::World::Spatial3D::MaterialPtrVector*)materialObjs, *(EarthView::World::Spatial3D::TexturePtrVector*)textureObjs, *(EarthView::World::Spatial3D::TexturePtrVector*)origTexturePtrVector, groupname1);
					return objXXXX;
				}
			}
		}
	}
}
