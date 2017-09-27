/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/modelcacheutility.h"
namespace EarthView
{
	namespace World
	{
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
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelCacheUtility_clearDataset_ev_bool_EVString_EVString_ev_bool(_in const char* datasourceName, _in const char* datasetName, _in ev_bool bTemplDataset )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::clearDataset(datasourceName1, datasetName1, bTemplDataset);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelCacheUtility_writeDatasetModel_ev_bool_EVString_EVString_EVString_IFeature_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector(_in const char* datasourceName, _in const char* datasetName, _in const char* octCode, _in const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, _in const void* thumbTextures, _in const void* origTextures, _in const void* cubeTextures, _in const void* materials, _in const void* progs, _in const void* gpus, _in const void* skeletons, _in const void* animation )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Core::ev_string octCode1 = octCode;
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::writeDatasetModel(datasourceName1, datasetName1, octCode1, pMeshFeature, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)thumbTextures, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)origTextures, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)cubeTextures, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)materials, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)progs, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)gpus, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)skeletons, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)animation);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelCacheUtility_writeTemplDBModel_ev_bool_EVString_EVString_EVString_IFeature_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector(_in const char* datasourceName, _in const char* datasetName, _in const char* octCode, _in const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, _in const void* thumbTextures, _in const void* origTextures, _in const void* cubeTextures, _in const void* materials, _in const void* progs, _in const void* gpus, _in const void* skeletons, _in const void* animation )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Core::ev_string octCode1 = octCode;
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::writeTemplDBModel(datasourceName1, datasetName1, octCode1, pMeshFeature, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)thumbTextures, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)origTextures, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)cubeTextures, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)materials, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)progs, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)gpus, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)skeletons, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)animation);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelCacheUtility_writeTemplEntity_ev_bool_EVString_EVString_EVString_IFeature(_in const char* datasourceName, _in const char* datasetName, _in const char* code, _in const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Core::ev_string code1 = code;
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::writeTemplEntity(datasourceName1, datasetName1, code1, pMeshFeature);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelCacheUtility_deleteDatasetModel_ev_bool_EVString_EVString_EVString_ev_uint32(_in const char* datasourceName, _in const char* datasetName, _in const char* octCode, _in ev_uint32 id )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Core::ev_string octCode1 = octCode;
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::deleteDatasetModel(datasourceName1, datasetName1, octCode1, id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelCacheUtility_deleteTemplDBModel_ev_bool_EVString_EVString_EVString_ev_uint32(_in const char* datasourceName, _in const char* datasetName, _in const char* octCode, _in ev_uint32 id )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Core::ev_string octCode1 = octCode;
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::deleteTemplDBModel(datasourceName1, datasetName1, octCode1, id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelCacheUtility_deleteTemplEntity_ev_bool_EVString_EVString_ev_uint32(_in const char* datasourceName, _in const char* datasetName, _in ev_uint32 id )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::deleteTemplEntity(datasourceName1, datasetName1, id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelCacheUtility_updateDatasetEntityInfo_ev_bool_EVString_EVString_EVString_IFeature(_in const char* datasourceName, _in const char* datasetName, _in const char* octCode, _in const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Core::ev_string octCode1 = octCode;
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::updateDatasetEntityInfo(datasourceName1, datasetName1, octCode1, pMeshFeature);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelCacheUtility_updateTemplDatasetEntityInfo_ev_bool_EVString_EVString_EVString_IFeature(_in const char* datasourceName, _in const char* datasetName, _in const char* octCode, _in const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Core::ev_string octCode1 = octCode;
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::updateTemplDatasetEntityInfo(datasourceName1, datasetName1, octCode1, pMeshFeature);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelCacheUtility_updateTemplDBInfo_ev_bool_EVString_EVString_IFeature(_in const char* datasourceName, _in const char* datasetName, _in const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::updateTemplDBInfo(datasourceName1, datasetName1, pMeshFeature);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelCacheUtility_readDatasetModel_ev_bool_CEntityDataset_EVString_ev_uint32_IFeature_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector(_in EarthView::World::Spatial3D::Dataset::CEntityDataset* pDataset, _in const char* octCode, _in ev_uint32 id, _out EarthView::World::Spatial::GeoDataset::IFeature*& pMeshFeature, _out void* thumbTextures, _out void* origTextures, _out void* cubeTextures, _out void* materials, _out void* progs, _out void* gpus, _out void* skeletons, _out void* animation )
				{
					EarthView::World::Core::ev_string octCode1 = octCode;
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::readDatasetModel(pDataset, octCode1, id, pMeshFeature, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)thumbTextures, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)origTextures, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)cubeTextures, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)materials, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)progs, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)gpus, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)skeletons, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)animation);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelCacheUtility_readTemplDBModel_ev_bool_CMeshTemplateDataset_EVString_EVString_EVString_ev_uint32_IFeature_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector(_in EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* pDataset, _in const char* datasourceName, _in const char* datasetName, _in const char* octCode, _in ev_uint32 id, _out EarthView::World::Spatial::GeoDataset::IFeature*& pMeshFeature, _out void* thumbTextures, _out void* origTextures, _out void* cubeTextures, _out void* materials, _out void* progs, _out void* gpus, _out void* skeletons, _out void* animatio )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Core::ev_string octCode1 = octCode;
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::readTemplDBModel(pDataset, datasourceName1, datasetName1, octCode1, id, pMeshFeature, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)thumbTextures, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)origTextures, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)cubeTextures, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)materials, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)progs, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)gpus, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)skeletons, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)animatio);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CModelCacheUtility_readTemplEntity_IFeature_CEntityDataset_ev_uint32_EVString(_in EarthView::World::Spatial3D::Dataset::CEntityDataset* pDataset, _in ev_uint32 id, _in const char* code )
				{
					EarthView::World::Core::ev_string code1 = code;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::readTemplEntity(pDataset, id, code1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelCacheUtility_readDatasetModelOrigTexture_ev_bool_EVString_EVString_EVString_FeatureVector_TextureStreamVector(_in const char* datasourceName, _in const char* datasetName, _in const char* octCode, _in const void* origFeatureVec, _out void* imgTextures )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Core::ev_string octCode1 = octCode;
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::readDatasetModelOrigTexture(datasourceName1, datasetName1, octCode1, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)origFeatureVec, *(EarthView::World::Spatial3D::Dataset::TextureStreamVector*)imgTextures);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelCacheUtility_readTemplDatasetOrigTexture_ev_bool_EVString_EVString_EVString_FeatureVector_TextureStreamVector(_in const char* datasourceName, _in const char* datasetName, _in const char* octCode, _in const void* origFeatureVec, _out void* texStreams )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Core::ev_string octCode1 = octCode;
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::readTemplDatasetOrigTexture(datasourceName1, datasetName1, octCode1, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)origFeatureVec, *(EarthView::World::Spatial3D::Dataset::TextureStreamVector*)texStreams);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CModelCacheUtility_readMeshTemplID_ev_uint32_EVString_EVString_ev_uint32(_in const char* datasourceName, _in const char* datasetName, _in ev_uint32 meshInstID )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					ev_uint32 objXXXX = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::readMeshTemplID(datasourceName1, datasetName1, meshInstID);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelCacheUtility_readDatasetAniDataStream_ev_bool_EVString_EVString_EVString_ev_uint32_MemoryDataStreamPtr(_in const char* datasourceName, _in const char* datasetName, _in const char* octCode, _in ev_uint32 meshID, _out void* stream )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Core::ev_string octCode1 = octCode;
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::readDatasetAniDataStream(datasourceName1, datasetName1, octCode1, meshID, *(EarthView::World::Core::MemoryDataStreamPtr*)stream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelCacheUtility_readTemplAniDataStream_ev_bool_EVString_EVString_ev_uint32_MemoryDataStreamPtr(_in const char* datasourceName, _in const char* datasetName, _in ev_uint32 meshID, _out void* stream )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::readTemplAniDataStream(datasourceName1, datasetName1, meshID, *(EarthView::World::Core::MemoryDataStreamPtr*)stream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelCacheUtility_writeDatasetModelOrigTexture_ev_bool_EVString_EVString_EVString_FeatureVector(_in const char* datasourceName, _in const char* datasetName, _in const char* octCode, _in const void* origFeatureVec )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Core::ev_string octCode1 = octCode;
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::writeDatasetModelOrigTexture(datasourceName1, datasetName1, octCode1, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)origFeatureVec);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelCacheUtility_writeTemplDatasetOrigTexture_ev_bool_EVString_EVString_EVString_FeatureVector(_in const char* datasourceName, _in const char* datasetName, _in const char* octCode, _in const void* origFeatureVec )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Core::ev_string octCode1 = octCode;
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::writeTemplDatasetOrigTexture(datasourceName1, datasetName1, octCode1, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)origFeatureVec);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelCacheUtility_updateAltitudeMode_void_EVString_EVString_EVDatasetType_EVAltitudeMode_ev_real64(_in const char* datasourceName, _in const char* datasetName, _in int type, _in int altitudeMode, _in ev_real64 altitudeValue )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial3D::Dataset::CModelCacheUtility::updateAltitudeMode(datasourceName1, datasetName1, (EarthView::World::Spatial::GeoDataset::EVDatasetType)type, (EarthView::World::Spatial::Utility::EVAltitudeMode)altitudeMode, altitudeValue);
				}
			}
		}
	}
}
