/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/obliquedataconvert.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace ModelManager
			{
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertObqXmlToIndexDB_ev_bool_CObliqueDBUtility_EVString(_in EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, _in const char* strTileXml )
				{
					EarthView::World::Core::ev_string strTileXml1 = strTileXml;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::convertObqXmlToIndexDB(dbUtility, strTileXml1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_queryMeshFilesByRegion_StringVector_CObliqueDBUtility_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(_in EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, _in ev_int32 level, _in ev_real64 minLon, _in ev_real64 minLat, _in ev_real64 maxLon, _in ev_real64 maxLat )
				{
					EarthView::World::Core::StringVector objXXXX = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::queryMeshFilesByRegion(dbUtility, level, minLon, minLat, maxLon, maxLat);
					EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_queryCpdStreamByRegion_MemoryDataStreamPtr_CObliqueDBUtility_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(_in EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, _in ev_int32 level, _in ev_real64 minLon, _in ev_real64 minLat, _in ev_real64 maxLon, _in ev_real64 maxLat )
				{
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::queryCpdStreamByRegion(dbUtility, level, minLon, minLat, maxLon, maxLat);
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_getCpdFileByRegion_EVString_CObliqueDBUtility_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(_in EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, _in ev_int32 level, _in ev_real64 minLon, _in ev_real64 minLat, _in ev_real64 maxLon, _in ev_real64 maxLat )
				{
					EVString objXXXX = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::getCpdFileByRegion(dbUtility, level, minLon, minLat, maxLon, maxLat);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertLodTreeExportXmlToDatabase_ev_bool_CObliqueDBUtility_EVString(_in EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, _in const char* strLodTreeExportXml )
				{
					EarthView::World::Core::ev_string strLodTreeExportXml1 = strLodTreeExportXml;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::convertLodTreeExportXmlToDatabase(dbUtility, strLodTreeExportXml1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertTopLodToDatabase_ev_bool_CObliqueDBUtility(_in EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::convertTopLodToDatabase(dbUtility);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertDemMetaInfoToDatabase_ev_bool_CObliqueDBUtility_EVString(_in EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, _in const char* strDemXml )
				{
					EarthView::World::Core::ev_string strDemXml1 = strDemXml;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::convertDemMetaInfoToDatabase(dbUtility, strDemXml1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_clearAllLodTab_ev_bool_CObliqueDBUtility(_in EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::clearAllLodTab(dbUtility);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertLodXmlToDatabase_ev_bool_CObliqueDBUtility_EVString(_in EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, _in const char* strTileXml )
				{
					EarthView::World::Core::ev_string strTileXml1 = strTileXml;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::convertLodXmlToDatabase(dbUtility, strTileXml1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertAllLodXmlToDatabase_ev_bool_CObliqueDBUtility_EVString(_in EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, _in const char* strTileXml )
				{
					EarthView::World::Core::ev_string strTileXml1 = strTileXml;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::convertAllLodXmlToDatabase(dbUtility, strTileXml1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_updateTileModelBound_ev_bool_CObliqueDBUtility_EVString(_in EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, _in const char* tileName )
				{
					EarthView::World::Core::ev_string tileName1 = tileName;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::updateTileModelBound(dbUtility, tileName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_updateTileModelBoundForMeshx_ev_bool_CObliqueDBUtility_EVString_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32(_in EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, _in const char* tileName, _out ev_real32& xmin, _out ev_real32& xmax, _out ev_real32& ymin, _out ev_real32& ymax, _out ev_real32& zmin, _out ev_real32& zmax )
				{
					EarthView::World::Core::ev_string tileName1 = tileName;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::updateTileModelBoundForMeshx(dbUtility, tileName1, xmin, xmax, ymin, ymax, zmin, zmax);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_updateDatasetBound_ev_bool_CObliqueDBUtility(_in EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::updateDatasetBound(dbUtility);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_generalAndUpdateModelBound_ev_bool_CObliqueDBUtility_EVString_EVString_CMeshPtr_ev_real32_ev_real32_ev_real32_ev_real32(_in EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, _in const char* tileName, _in const char* meshName, _in const void* meshPtr, _out ev_real32& xmin, _out ev_real32& xmax, _out ev_real32& zmin, _out ev_real32& zmax )
				{
					EarthView::World::Core::ev_string tileName1 = tileName;
					EarthView::World::Core::ev_string meshName1 = meshName;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::generalAndUpdateModelBound(dbUtility, tileName1, meshName1, *(EarthView::World::Graphic::CMeshPtr*)meshPtr, xmin, xmax, zmin, zmax);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_generalTextureCoordinate_void_CMeshPtr_ev_real32_ev_real32_ev_real32_ev_real32(_in const void* meshPtr, _in ev_real32 xmin, _in ev_real32 xmax, _in ev_real32 zmin, _in ev_real32 zmax )
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::generalTextureCoordinate(*(EarthView::World::Graphic::CMeshPtr*)meshPtr, xmin, xmax, zmin, zmax);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_updateLocalMatrix_ev_bool_CObliqueDBUtility_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(_in EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, _in ev_real64 posx, _in ev_real64 posy, _in ev_real64 posz, _in ev_real64 scalex, _in ev_real64 scaley, _in ev_real64 scalez, _in ev_real64 rotw, _in ev_real64 rotx, _in ev_real64 roty, _in ev_real64 rotz )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::updateLocalMatrix(dbUtility, posx, posy, posz, scalex, scaley, scalez, rotw, rotx, roty, rotz);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertTileLodToPackage7z_ev_bool_CObliqueDBUtility_EVString_EVString(_in EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, _in const char* tileName, _in const char* tileFolder )
				{
					EarthView::World::Core::ev_string tileName1 = tileName;
					EarthView::World::Core::ev_string tileFolder1 = tileFolder;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::convertTileLodToPackage7z(dbUtility, tileName1, tileFolder1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_generalLevelMapTable_ev_bool_CObliqueDBUtility_ev_uint32_CStringArray(_in EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, _in ev_uint32 maxLevel, _inout void* tileLodXmlVec )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::generalLevelMapTable(dbUtility, maxLevel, *(EarthView::World::Core::CStringArray*)tileLodXmlVec);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertMetaInfoToPackage7z_ev_bool_CObliqueDBUtility_EVString(_in EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, _in const char* destFolder )
				{
					EarthView::World::Core::ev_string destFolder1 = destFolder;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::convertMetaInfoToPackage7z(dbUtility, destFolder1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertMetaInfoToPackage7z_ev_bool_CObliqueDBUtility_EVString_MemoryDataStreamVector_ev_uint8(_in EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, _in const char* destFolder, _in const void* sharedTextureVec, _in ev_uint8 maxLevel )
				{
					EarthView::World::Core::ev_string destFolder1 = destFolder;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::convertMetaInfoToPackage7z(dbUtility, destFolder1, *(EarthView::World::Core::MemoryDataStreamVector*)sharedTextureVec, maxLevel);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertMetaInfoToPackage7z_ev_bool_CObliqueDBUtility_EVString_MemoryDataStreamVector_ev_uint8_OBQRecordInfoList(_in EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, _in const char* destFolder, _in const void* sharedTextureVec, _in ev_uint8 maxLevel, _in void* recordInfoList )
				{
					EarthView::World::Core::ev_string destFolder1 = destFolder;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert::convertMetaInfoToPackage7z(dbUtility, destFolder1, *(EarthView::World::Core::MemoryDataStreamVector*)sharedTextureVec, maxLevel, *(EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*)recordInfoList);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CUnifyMeshTool_setWorkParam_void_IObqDataset_TerrainRevisorVector(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::IObqDataset* pDataset, _in const void* terrainRevisors )
				{
					EarthView::World::Spatial3D::ModelManager::CUnifyMeshTool* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CUnifyMeshTool*) pObjectXXXX;
					ptrNativeObject->setWorkParam(pDataset, *(EarthView::World::Spatial3D::TerrainRevisorVector*)terrainRevisors);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CUnifyMeshTool_getIntersectTopTile_void_CStringArray_LodIndexVector(void *pObjectXXXX, _out void* outTileNames, _out void* topLodIndexVec )
				{
					EarthView::World::Spatial3D::ModelManager::CUnifyMeshTool* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CUnifyMeshTool*) pObjectXXXX;
					ptrNativeObject->getIntersectTopTile(*(EarthView::World::Core::CStringArray*)outTileNames, *(EarthView::World::Spatial3D::ModelManager::LodIndexVector*)topLodIndexVec);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CUnifyMeshTool_unifyAllMeshInTile_void_EVString_LodIndex(void *pObjectXXXX, _in const char* tileName, _in EarthView::World::Spatial3D::ModelManager::LodIndex* pTopLodIndex )
				{
					EarthView::World::Core::ev_string tileName1 = tileName;
					EarthView::World::Spatial3D::ModelManager::CUnifyMeshTool* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CUnifyMeshTool*) pObjectXXXX;
					ptrNativeObject->unifyAllMeshInTile(tileName1, pTopLodIndex);
				}
			}
		}
	}
}
