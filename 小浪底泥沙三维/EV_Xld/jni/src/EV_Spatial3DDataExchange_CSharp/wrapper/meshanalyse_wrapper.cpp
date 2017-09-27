/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/meshanalyse.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshFileLoader_loadFiles_ev_bool_EVString(void *pObjectXXXX, _in const char* folder )
				{
					EarthView::World::Core::ev_string folder1 = folder;
					EarthView::World::Spatial3D::DataExchange::CMeshFileLoader* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshFileLoader*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->loadFiles(folder1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshFileLoader_unloadFiles_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshFileLoader* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshFileLoader*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->unloadFiles();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshFileLoader_getMeshFiles_void_CStringArray(void *pObjectXXXX, _inout void* files )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshFileLoader* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshFileLoader*) pObjectXXXX;
					ptrNativeObject->getMeshFiles(*(EarthView::World::Core::CStringArray*)files);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshFileLoader_findFile_ev_bool_EVString_CStringArray(void *pObjectXXXX, _in const char* filename, _inout void* files )
				{
					EarthView::World::Core::ev_string filename1 = filename;
					EarthView::World::Spatial3D::DataExchange::CMeshFileLoader* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshFileLoader*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->findFile(filename1, *(EarthView::World::Core::CStringArray*)files);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshFileLoader_getFilename_EVString_EVString(_in const char* file )
				{
					EarthView::World::Core::ev_string file1 = file;
					EVString objXXXX = EarthView::World::Spatial3D::DataExchange::CMeshFileLoader::getFilename(file1);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshFileLoader_getErrors_void_CStringArray(void *pObjectXXXX, _inout void* errors )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshFileLoader* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshFileLoader*) pObjectXXXX;
					ptrNativeObject->getErrors(*(EarthView::World::Core::CStringArray*)errors);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshAnalyse_open_ev_bool_EVString_EVString(void *pObjectXXXX, _in const char* meshName, _in const char* resourceGroup )
				{
					EarthView::World::Core::ev_string meshName1 = meshName;
					EarthView::World::Core::ev_string resourceGroup1 = resourceGroup;
					EarthView::World::Spatial3D::DataExchange::CMeshAnalyse* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshAnalyse*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->open(meshName1, resourceGroup1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshAnalyse_open_ev_bool_EVString_EVString_EVString(void *pObjectXXXX, _in const char* meshName, _in const char* resourcePath, _in const char* resourceGroup )
				{
					EarthView::World::Core::ev_string meshName1 = meshName;
					EarthView::World::Core::ev_string resourcePath1 = resourcePath;
					EarthView::World::Core::ev_string resourceGroup1 = resourceGroup;
					EarthView::World::Spatial3D::DataExchange::CMeshAnalyse* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshAnalyse*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->open(meshName1, resourcePath1, resourceGroup1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshAnalyse_close_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshAnalyse* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshAnalyse*) pObjectXXXX;
					ptrNativeObject->close();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshAnalyse_isExistGPU_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshAnalyse* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshAnalyse*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isExistGPU();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshAnalyse_getSkeleton_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshAnalyse* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshAnalyse*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getSkeleton();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshAnalyse_getMaterials_void_CStringArray(void *pObjectXXXX, _inout void* materials )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshAnalyse* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshAnalyse*) pObjectXXXX;
					ptrNativeObject->getMaterials(*(EarthView::World::Core::CStringArray*)materials);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshAnalyse_getTextures_void_CStringArray(void *pObjectXXXX, _inout void* textures )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshAnalyse* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshAnalyse*) pObjectXXXX;
					ptrNativeObject->getTextures(*(EarthView::World::Core::CStringArray*)textures);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshAnalyse_getGpus_void_CStringArray_CStringArray(void *pObjectXXXX, _inout void* gpus, _inout void* progs )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshAnalyse* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshAnalyse*) pObjectXXXX;
					ptrNativeObject->getGpus(*(EarthView::World::Core::CStringArray*)gpus, *(EarthView::World::Core::CStringArray*)progs);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshAnalyse_getBoundingBox_void_CAxisAlignedBox(void *pObjectXXXX, _out void* boundingbox )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshAnalyse* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshAnalyse*) pObjectXXXX;
					ptrNativeObject->getBoundingBox(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)boundingbox);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshResourceItem_getValidState_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getValidState();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshResourceItem_setValidState_void_ev_bool(void *pObjectXXXX, _in ev_bool state )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjectXXXX;
					ptrNativeObject->setValidState(state);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshResourceItem_getUploadState_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getUploadState();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshResourceItem_setUploadState_void_ev_bool(void *pObjectXXXX, _in ev_bool state )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjectXXXX;
					ptrNativeObject->setUploadState(state);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshResourceItem_getResourceName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getResourceName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshResourceItem_setResourceName_void_EVString(void *pObjectXXXX, _in const char* resourceName )
				{
					EarthView::World::Core::ev_string resourceName1 = resourceName;
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjectXXXX;
					ptrNativeObject->setResourceName(resourceName1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshResourceItem_getResourceFile_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getResourceFile();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshResourceItem_setResourceFile_void_EVString(void *pObjectXXXX, _in const char* filename )
				{
					EarthView::World::Core::ev_string filename1 = filename;
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjectXXXX;
					ptrNativeObject->setResourceFile(filename1);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshResourceItem_getType_MaterialResourceType(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::MaterialResourceType objXXXX = ptrNativeObject->getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshResourceItem_setType_void_MaterialResourceType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjectXXXX;
					ptrNativeObject->setType((EarthView::World::Spatial3D::Dataset::MaterialResourceType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshResourceItem_addRef_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjectXXXX;
					ptrNativeObject->addRef();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshResourceItem_delRef_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjectXXXX;
					ptrNativeObject->delRef();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshResourceItem_resetRef_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjectXXXX;
					ptrNativeObject->resetRef();
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshResourceItem_getRef_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshResourceItem_setRef_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 count )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshResourceItem* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*) pObjectXXXX;
					ptrNativeObject->setRef(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshResourceMap_getMeshNames_void_CStringArray(void *pObjectXXXX, _inout void* meshNames )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshResourceMap* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshResourceMap*) pObjectXXXX;
					ptrNativeObject->getMeshNames(*(EarthView::World::Core::CStringArray*)meshNames);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshResourceMap_addResItem_ev_bool_EVString_CMeshResourceItem(void *pObjectXXXX, _in const char* meshName, _in EarthView::World::Spatial3D::DataExchange::CMeshResourceItem* res )
				{
					EarthView::World::Core::ev_string meshName1 = meshName;
					EarthView::World::Spatial3D::DataExchange::CMeshResourceMap* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshResourceMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addResItem(meshName1, res);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshResourceMap_deleteResItem_ev_bool_EVString_CMeshResourceItem(void *pObjectXXXX, _in const char* meshName, _in EarthView::World::Spatial3D::DataExchange::CMeshResourceItem* res )
				{
					EarthView::World::Core::ev_string meshName1 = meshName;
					EarthView::World::Spatial3D::DataExchange::CMeshResourceMap* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshResourceMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->deleteResItem(meshName1, res);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshResourceMap_getResNum_ev_uint32_EVString(void *pObjectXXXX, _in const char* meshName )
				{
					EarthView::World::Core::ev_string meshName1 = meshName;
					EarthView::World::Spatial3D::DataExchange::CMeshResourceMap* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshResourceMap*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getResNum(meshName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshResourceMap_getResItem_ev_bool_EVString_ev_uint32_CMeshResourceItem(void *pObjectXXXX, _in const char* meshName, _in ev_uint32 index, _inout EarthView::World::Spatial3D::DataExchange::CMeshResourceItem* res )
				{
					EarthView::World::Core::ev_string meshName1 = meshName;
					EarthView::World::Spatial3D::DataExchange::CMeshResourceMap* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshResourceMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getResItem(meshName1, index, res);
					return objXXXX;
				}
			}
		}
	}
}
