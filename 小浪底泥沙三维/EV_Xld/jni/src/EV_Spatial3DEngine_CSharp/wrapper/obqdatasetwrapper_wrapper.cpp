/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/obqdatasetwrapper.h"
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
		namespace Spatial3D
		{
			namespace ModelManager
			{
				typedef int  ( _stdcall EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_getType_EVDatasetType_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_readInitData_ev_int32_OBQInitData_Callback)(_out void* initData);
				class CObqDatasetWrapperProxy : public EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper
				{
				private:
					EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_getType_EVDatasetType_Callback* m_EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_getType_EVDatasetType_Callback;
					EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_readInitData_ev_int32_OBQInitData_Callback* m_EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_readInitData_ev_int32_OBQInitData_Callback;
				public:
					CObqDatasetWrapperProxy(EarthView::World::Core::CNameValuePairList *pList) : CObqDatasetWrapper(pList)
					{
						m_EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_getType_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_readInitData_ev_int32_OBQInitData_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_getType_EVDatasetType(EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_getType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_getType_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_readInitData_ev_int32_OBQInitData(EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_readInitData_ev_int32_OBQInitData_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_readInitData_ev_int32_OBQInitData_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_getType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->CObqDatasetWrapper::getType();
					}
					virtual ev_int32 readInitData(_out EarthView::World::Spatial3D::ModelManager::OBQInitData& initData)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_readInitData_ev_int32_OBQInitData_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_readInitData_ev_int32_OBQInitData_Callback(&initData);
							return returnValue;
						}
						else
							return this->CObqDatasetWrapper::readInitData(initData);
					}
				};
				REGISTER_FACTORY_CLASS(CObqDatasetWrapperProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_getDataset_IDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_getType_EVDatasetType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjectXXXX;
					if (dynamic_cast<CObqDatasetWrapperProxy*>((EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_getType_EVDatasetType_Callback* pCallback )
				{
					CObqDatasetWrapperProxy* ptr = dynamic_cast<CObqDatasetWrapperProxy*>((EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_getType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_getType_EVDatasetType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_getGUID_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getGUID();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_initBILCache_void_ev_int32(void *pObjectXXXX, _in ev_int32 pointNumberPerSide )
				{
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjectXXXX;
					ptrNativeObject->initBILCache(pointNumberPerSide);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_readInitData_ev_int32_OBQInitData(void *pObjectXXXX, _out void* initData )
				{
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjectXXXX;
					if (dynamic_cast<CObqDatasetWrapperProxy*>((EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper::readInitData(*(EarthView::World::Spatial3D::ModelManager::OBQInitData*)initData);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->readInitData(*(EarthView::World::Spatial3D::ModelManager::OBQInitData*)initData);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_readInitData_ev_int32_OBQInitData( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_readInitData_ev_int32_OBQInitData_Callback* pCallback )
				{
					CObqDatasetWrapperProxy* ptr = dynamic_cast<CObqDatasetWrapperProxy*>((EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_readInitData_ev_int32_OBQInitData(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_readInitData_ev_int32_OBQInitData_NoVirtual(void *pObjectXXXX, _out void* initData )
				{
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper::readInitData(*(EarthView::World::Spatial3D::ModelManager::OBQInitData*)initData);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector(void *pObjectXXXX, _in const char* filename, _in const char* tileName, _in ev_uint32 lodID, _out void* meshStream, _out void* childIndexVec )
				{
					EarthView::World::Core::ev_string filename1 = filename;
					EarthView::World::Core::ev_string tileName1 = tileName;
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->readTileData(filename1, tileName1, lodID, *(EarthView::World::Spatial::MeshStream*)meshStream, *(EarthView::World::Spatial3D::ModelManager::LodIndexVector*)childIndexVec);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* filename, _in const char* tileName, _out void* meshStream )
				{
					EarthView::World::Core::ev_string filename1 = filename;
					EarthView::World::Core::ev_string tileName1 = tileName;
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->readTileMeshData(filename1, tileName1, *(EarthView::World::Core::MemoryDataStreamPtr*)meshStream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_readDem_ev_int32_ev_uint32_ev_uint32_ev_uint32_MemoryDataStreamPtr(void *pObjectXXXX, _in ev_uint32 level, _in ev_uint32 row, _in ev_uint32 col, _out void* bilStream )
				{
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->readDem(level, row, col, *(EarthView::World::Core::MemoryDataStreamPtr*)bilStream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_readMetaDataInfo_ev_bool_OBQMetaInfo(void *pObjectXXXX, _out void* info )
				{
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->readMetaDataInfo(*(EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)info);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_readDemMetaDataInfo_ev_bool_OBQDemMetaInfo(void *pObjectXXXX, _out void* info )
				{
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->readDemMetaDataInfo(*(EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)info);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_updateMetaDataInfo_ev_bool_ev_real64(void *pObjectXXXX, _in ev_real64 altitude )
				{
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateMetaDataInfo(altitude);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_updateMetaDataInfo_ev_bool_OBQMetaInfo(void *pObjectXXXX, _in const void* info )
				{
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateMetaDataInfo(*(EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)info);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial3D_ModelManager_CObqDatasetWrapper_getHeightFromBIL_ev_real32_ev_uint32_ev_real32_ev_real32(void *pObjectXXXX, _in ev_uint32 level, _in ev_real32 x, _in ev_real32 z )
				{
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getHeightFromBIL(level, x, z);
					return objXXXX;
				}
			}
		}
	}
}
