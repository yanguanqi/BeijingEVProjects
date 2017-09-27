/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/modeloctreemanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
		}
	}
}
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
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CModelOctreeManager*  _stdcall EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasourceModelOctreeManager_CModelOctreeManager_CSqlDatabase_EVString_CAxisAlignedBox_ev_uint32_ev_bool(_in const void* db, _in const char* datasourceName, _in const void* box, _in ev_uint32 maxDepth, _in ev_bool autoInit )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Spatial3D::Dataset::CModelOctreeManager* objXXXX = EarthView::World::Spatial3D::Dataset::CModelOctreeManager::newDatasourceModelOctreeManager(*(EarthView::World::Core::Database::CSqlDatabase*)db, datasourceName1, *(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, maxDepth, autoInit);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CModelOctreeManager*  _stdcall EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasourceModelOctreeManagerWithCache_CModelOctreeManager_CSqlDatabase_EVString_CAxisAlignedBox_ev_uint32_EVString_ev_bool(_in const void* db, _in const char* datasourceName, _in const void* box, _in ev_uint32 maxDepth, _in const char* cacheFolder, _in ev_bool autoInit )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string cacheFolder1 = cacheFolder;
					EarthView::World::Spatial3D::Dataset::CModelOctreeManager* objXXXX = EarthView::World::Spatial3D::Dataset::CModelOctreeManager::newDatasourceModelOctreeManagerWithCache(*(EarthView::World::Core::Database::CSqlDatabase*)db, datasourceName1, *(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, maxDepth, cacheFolder1, autoInit);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CModelOctreeManager*  _stdcall EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasourceModelOctreeManager_CModelOctreeManager_EVString_EVString_CAxisAlignedBox_ev_uint32_ev_bool(_in const char* web, _in const char* datasourceName, _in const void* box, _in ev_uint32 maxDepth, _in ev_bool autoInit )
				{
					EarthView::World::Core::ev_string web1 = web;
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Spatial3D::Dataset::CModelOctreeManager* objXXXX = EarthView::World::Spatial3D::Dataset::CModelOctreeManager::newDatasourceModelOctreeManager(web1, datasourceName1, *(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, maxDepth, autoInit);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CModelOctreeManager*  _stdcall EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasourceModelOctreeManagerWithCache_CModelOctreeManager_EVString_EVString_CAxisAlignedBox_ev_uint32_EVString_ev_bool(_in const char* web, _in const char* datasourceName, _in const void* box, _in ev_uint32 maxDepth, _in const char* cacheFolder, _in ev_bool autoInit )
				{
					EarthView::World::Core::ev_string web1 = web;
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string cacheFolder1 = cacheFolder;
					EarthView::World::Spatial3D::Dataset::CModelOctreeManager* objXXXX = EarthView::World::Spatial3D::Dataset::CModelOctreeManager::newDatasourceModelOctreeManagerWithCache(web1, datasourceName1, *(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, maxDepth, cacheFolder1, autoInit);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CModelOctreeManager*  _stdcall EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasetModelOctreeManager_CModelOctreeManager_CSqlDatabase_EVString_CAxisAlignedBox_ev_uint32_ev_bool(_in const void* db, _in const char* datasetAliasName, _in const void* box, _in ev_uint32 maxDepth, _in ev_bool autoInit )
				{
					EarthView::World::Core::ev_string datasetAliasName1 = datasetAliasName;
					EarthView::World::Spatial3D::Dataset::CModelOctreeManager* objXXXX = EarthView::World::Spatial3D::Dataset::CModelOctreeManager::newDatasetModelOctreeManager(*(EarthView::World::Core::Database::CSqlDatabase*)db, datasetAliasName1, *(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, maxDepth, autoInit);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CModelOctreeManager*  _stdcall EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasetModelOctreeManagerWithCache_CModelOctreeManager_CSqlDatabase_EVString_CAxisAlignedBox_ev_uint32_EVString_ev_bool(_in const void* db, _in const char* datasetAliasName, _in const void* box, _in ev_uint32 maxDepth, _in const char* cacheFolder, _in ev_bool autoInit )
				{
					EarthView::World::Core::ev_string datasetAliasName1 = datasetAliasName;
					EarthView::World::Core::ev_string cacheFolder1 = cacheFolder;
					EarthView::World::Spatial3D::Dataset::CModelOctreeManager* objXXXX = EarthView::World::Spatial3D::Dataset::CModelOctreeManager::newDatasetModelOctreeManagerWithCache(*(EarthView::World::Core::Database::CSqlDatabase*)db, datasetAliasName1, *(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, maxDepth, cacheFolder1, autoInit);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CModelOctreeManager*  _stdcall EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasetModelOctreeManager_CModelOctreeManager_EVString_EVString_CAxisAlignedBox_ev_uint32_ev_bool(_in const char* web, _in const char* datasetAliasName, _in const void* box, _in ev_uint32 maxDepth, _in ev_bool autoInit )
				{
					EarthView::World::Core::ev_string web1 = web;
					EarthView::World::Core::ev_string datasetAliasName1 = datasetAliasName;
					EarthView::World::Spatial3D::Dataset::CModelOctreeManager* objXXXX = EarthView::World::Spatial3D::Dataset::CModelOctreeManager::newDatasetModelOctreeManager(web1, datasetAliasName1, *(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, maxDepth, autoInit);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CModelOctreeManager*  _stdcall EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasetModelOctreeManagerWithCache_CModelOctreeManager_EVString_CEVSpatialServer_CEVBaseModelDataset_CAxisAlignedBox_ev_uint32_EVString_ev_bool(_in const char* web, _in EarthView::World::Spatial::CEVSpatialServer* pNetServer, _in EarthView::World::Spatial::CEVBaseModelDataset* pNetDataset, _in const void* box, _in ev_uint32 maxDepth, _in const char* cacheFolder, _in ev_bool autoInit )
				{
					EarthView::World::Core::ev_string web1 = web;
					EarthView::World::Core::ev_string cacheFolder1 = cacheFolder;
					EarthView::World::Spatial3D::Dataset::CModelOctreeManager* objXXXX = EarthView::World::Spatial3D::Dataset::CModelOctreeManager::newDatasetModelOctreeManagerWithCache(web1, pNetServer, pNetDataset, *(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, maxDepth, cacheFolder1, autoInit);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CModelOctreeManager*  _stdcall EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasetModelOctreeManagerWithCache_CModelOctreeManager_EVString_CEVSpatialServer_CEVBaseModelDataset_CEVBaseModelLayerInfo_CAxisAlignedBox_ev_uint32_EVString_ev_bool(_in const char* web, _in EarthView::World::Spatial::CEVSpatialServer* pNetServer, _in EarthView::World::Spatial::CEVBaseModelDataset* pNetDataset, _in EarthView::World::Spatial::CEVBaseModelLayerInfo* pNetDatasetInfo, _in const void* box, _in ev_uint32 maxDepth, _in const char* cacheFolder, _in ev_bool autoInit )
				{
					EarthView::World::Core::ev_string web1 = web;
					EarthView::World::Core::ev_string cacheFolder1 = cacheFolder;
					EarthView::World::Spatial3D::Dataset::CModelOctreeManager* objXXXX = EarthView::World::Spatial3D::Dataset::CModelOctreeManager::newDatasetModelOctreeManagerWithCache(web1, pNetServer, pNetDataset, pNetDatasetInfo, *(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, maxDepth, cacheFolder1, autoInit);
					return objXXXX;
				}
			}
		}
	}
}
