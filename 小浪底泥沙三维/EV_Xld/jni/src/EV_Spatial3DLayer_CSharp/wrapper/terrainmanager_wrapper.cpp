/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dlayer/terrainmanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CTerrainManager_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 preTileResolution, _out ev_real64& altitude, _out ev_real64& tileResolution);
				class CTerrainManagerProxy : public EarthView::World::Spatial3D::Atlas::CTerrainManager
				{
				private:
					EarthView_World_Spatial3D_Atlas_CTerrainManager_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CTerrainManager_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
				public:
					CTerrainManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CTerrainManager(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CTerrainManager_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTerrainManager_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial3D_Atlas_CTerrainManager_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTerrainManager_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					virtual ev_bool getBestHeightAt(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 preTileResolution, _out ev_real64& altitude, _out ev_real64& tileResolution)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTerrainManager_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CTerrainManager_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(latitude, longitude, preTileResolution, altitude, tileResolution);
							return returnValue;
						}
						else
							return this->CTerrainManager::getBestHeightAt(latitude, longitude, preTileResolution, altitude, tileResolution);
					}
				};
				REGISTER_FACTORY_CLASS(CTerrainManagerProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CTerrainManager_addTerrainLayer_ev_bool_ITerrainLayer(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::ITerrainLayer* ref_pLayer )
				{
					EarthView::World::Spatial3D::Atlas::CTerrainManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addTerrainLayer(ref_pLayer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CTerrainManager_insertTerrainLayer_ev_bool_ev_uint32_ITerrainLayer(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Spatial3D::Atlas::ITerrainLayer* ref_pLayer )
				{
					EarthView::World::Spatial3D::Atlas::CTerrainManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->insertTerrainLayer(pos, ref_pLayer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CTerrainManager_removeTerrainLayer_ev_bool_ITerrainLayer(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::ITerrainLayer* pLayer )
				{
					EarthView::World::Spatial3D::Atlas::CTerrainManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeTerrainLayer(pLayer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CTerrainManager_moveTerrainLayer_ev_bool_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 index, _in ev_uint32 toWhere )
				{
					EarthView::World::Spatial3D::Atlas::CTerrainManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->moveTerrainLayer(index, toWhere);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CTerrainManager_clearTerrainLayers_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CTerrainManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjectXXXX;
					ptrNativeObject->clearTerrainLayers();
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Atlas_CTerrainManager_getTerrainLayerCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CTerrainManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getTerrainLayerCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Atlas_CTerrainManager_getTerrainLayerIndex_ev_int32_ITerrainLayer(void *pObjectXXXX, _in const EarthView::World::Spatial3D::Atlas::ITerrainLayer* pLayer )
				{
					const EarthView::World::Spatial3D::Atlas::CTerrainManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getTerrainLayerIndex(pLayer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::ITerrainLayer*  _stdcall EarthView_World_Spatial3D_Atlas_CTerrainManager_getTerrainLayer_ITerrainLayer_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Atlas::CTerrainManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::ITerrainLayer* objXXXX = ptrNativeObject->getTerrainLayer(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CTerrainManager_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 targetSamplesPerDegrees, _out ev_real64& altitude )
				{
					EarthView::World::Spatial3D::Atlas::CTerrainManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::AltitudeStatus objXXXX = ptrNativeObject->getHeightAt(latitude, longitude, targetSamplesPerDegrees, altitude);
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CTerrainManager_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64(void *pObjectXXXX, _in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 targetSamplesPerDegrees, _in int source, _out ev_real64& altitude )
				{
					EarthView::World::Spatial3D::Atlas::CTerrainManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::AltitudeStatus objXXXX = ptrNativeObject->getHeightAt(latitude, longitude, targetSamplesPerDegrees, (EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource)source, altitude);
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CTerrainManager_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64(void *pObjectXXXX, _in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 targetSamplesPerDegrees, _in int source, _in ev_int32 maxLivel, _out ev_real64& altitude )
				{
					EarthView::World::Spatial3D::Atlas::CTerrainManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::AltitudeStatus objXXXX = ptrNativeObject->getHeightAt(latitude, longitude, targetSamplesPerDegrees, (EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource)source, maxLivel, altitude);
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CTerrainManager_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 latitude, _in ev_real64 longitude, _out ev_real64& altitude )
				{
					EarthView::World::Spatial3D::Atlas::CTerrainManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getBestHeightAt(latitude, longitude, altitude);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CTerrainManager_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 preTileResolution, _out ev_real64& altitude, _out ev_real64& tileResolution )
				{
					EarthView::World::Spatial3D::Atlas::CTerrainManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjectXXXX;
					if (dynamic_cast<CTerrainManagerProxy*>((EarthView::World::Spatial3D::Atlas::CTerrainManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTerrainManager::getBestHeightAt(latitude, longitude, preTileResolution, altitude, tileResolution);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getBestHeightAt(latitude, longitude, preTileResolution, altitude, tileResolution);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainManager_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTerrainManager_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CTerrainManagerProxy* ptr = dynamic_cast<CTerrainManagerProxy*>((EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTerrainManager_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CTerrainManager_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 preTileResolution, _out ev_real64& altitude, _out ev_real64& tileResolution )
				{
					EarthView::World::Spatial3D::Atlas::CTerrainManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTerrainManager::getBestHeightAt(latitude, longitude, preTileResolution, altitude, tileResolution);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CTerrainManager_getTerrain_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 row, _in ev_int32 col, _in ev_int32 level )
				{
					EarthView::World::Spatial3D::Atlas::CTerrainManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjectXXXX;
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->getTerrain(row, col, level);
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CTerrainManager_getTerrainFromMemoryCache_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 row, _in ev_int32 col, _in ev_int32 level )
				{
					EarthView::World::Spatial3D::Atlas::CTerrainManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjectXXXX;
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->getTerrainFromMemoryCache(row, col, level);
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CTerrainManager_getTerrainFromDBCache_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 row, _in ev_int32 col, _in ev_int32 level )
				{
					EarthView::World::Spatial3D::Atlas::CTerrainManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjectXXXX;
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->getTerrainFromDBCache(row, col, level);
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CTerrainManager_getTerrainFromServer_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 row, _in ev_int32 col, _in ev_int32 level )
				{
					EarthView::World::Spatial3D::Atlas::CTerrainManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTerrainManager*) pObjectXXXX;
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->getTerrainFromServer(row, col, level);
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
		}
	}
}
