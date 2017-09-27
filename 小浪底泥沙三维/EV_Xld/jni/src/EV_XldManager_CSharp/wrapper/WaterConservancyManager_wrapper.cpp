/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "xld/WaterConservancyManager.h"
namespace EarthView
{
	namespace XldManager
	{
		extern "C" EV_DLL_EXPORT  EarthView::XldManager::CWaterConservancyManager*  _stdcall EarthView_XldManager_CWaterConservancyManager_GetSingletonPtr_CWaterConservancyManager( )
		{
			EarthView::XldManager::CWaterConservancyManager* objXXXX = EarthView::XldManager::CWaterConservancyManager::GetSingletonPtr();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_XldManager_CWaterConservancyManager_Initialise_void_CGlobeControl(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeControl* ref_globecontrol )
		{
			EarthView::XldManager::CWaterConservancyManager* ptrNativeObject = (EarthView::XldManager::CWaterConservancyManager*) pObjectXXXX;
			ptrNativeObject->Initialise(ref_globecontrol);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_XldManager_CWaterConservancyManager_CreateTerrain_void_EVString(void *pObjectXXXX, _in const char* grdFileName )
		{
			EarthView::World::Core::ev_string grdFileName1 = grdFileName;
			EarthView::XldManager::CWaterConservancyManager* ptrNativeObject = (EarthView::XldManager::CWaterConservancyManager*) pObjectXXXX;
			ptrNativeObject->CreateTerrain(grdFileName1);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_XldManager_CWaterConservancyManager_GetTerrainNames_void_ev_int32_EVString(void *pObjectXXXX, _in const ev_int32 terrainIndex, _out char*& terrainNames )
		{
			EarthView::World::Core::ev_string terrainNames1 = terrainNames;
			EarthView::XldManager::CWaterConservancyManager* ptrNativeObject = (EarthView::XldManager::CWaterConservancyManager*) pObjectXXXX;
			ptrNativeObject->GetTerrainNames(terrainIndex, terrainNames1);
			terrainNames=terrainNames1.makeBuffer();
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_XldManager_CWaterConservancyManager_SetTerrainVisible_void_EVString_ev_bool(void *pObjectXXXX, _in const char* terrainName, _in const ev_bool& isVisible )
		{
			EarthView::World::Core::ev_string terrainName1 = terrainName;
			EarthView::XldManager::CWaterConservancyManager* ptrNativeObject = (EarthView::XldManager::CWaterConservancyManager*) pObjectXXXX;
			ptrNativeObject->SetTerrainVisible(terrainName1, isVisible);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_XldManager_CWaterConservancyManager_SetTerrainOffset_void_EVString_ev_real64(void *pObjectXXXX, _in const char* terrainName, _in const ev_real64 offset )
		{
			EarthView::World::Core::ev_string terrainName1 = terrainName;
			EarthView::XldManager::CWaterConservancyManager* ptrNativeObject = (EarthView::XldManager::CWaterConservancyManager*) pObjectXXXX;
			ptrNativeObject->SetTerrainOffset(terrainName1, offset);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_XldManager_CWaterConservancyManager_MarkPosistion_void_EVString_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in const char* imgeFileName, _in ev_real64 longi, _in ev_real64 lati, _in ev_real64 alti )
		{
			EarthView::World::Core::ev_string imgeFileName1 = imgeFileName;
			EarthView::XldManager::CWaterConservancyManager* ptrNativeObject = (EarthView::XldManager::CWaterConservancyManager*) pObjectXXXX;
			ptrNativeObject->MarkPosistion(imgeFileName1, longi, lati, alti);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_XldManager_CWaterConservancyManager_CreateWaterSurface_void_ev_real64(void *pObjectXXXX, _in const ev_real64& waterHeight )
		{
			EarthView::XldManager::CWaterConservancyManager* ptrNativeObject = (EarthView::XldManager::CWaterConservancyManager*) pObjectXXXX;
			ptrNativeObject->CreateWaterSurface(waterHeight);
		}
		extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_XldManager_CWaterConservancyManager_GetTerrainCount_ev_uint64(void *pObjectXXXX )
		{
			EarthView::XldManager::CWaterConservancyManager* ptrNativeObject = (EarthView::XldManager::CWaterConservancyManager*) pObjectXXXX;
			ev_uint64 objXXXX = ptrNativeObject->GetTerrainCount();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CGlobeControl*  _stdcall Get_EarthView_XldManager_CWaterConservancyManager_mpGlobeControl( void *pObjectXXXX )
		{
			EarthView::XldManager::CWaterConservancyManager* ptrNativeObject = (EarthView::XldManager::CWaterConservancyManager*) pObjectXXXX;
			EarthView::World::Spatial3D::Controls::CGlobeControl* objXXXX = ptrNativeObject->mpGlobeControl;
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_XldManager_CWaterConservancyManager_mpGlobeControl( void *pObjectXXXX, EarthView::World::Spatial3D::Controls::CGlobeControl*  value )
		{
			((EarthView::XldManager::CWaterConservancyManager*)pObjectXXXX)->mpGlobeControl = value;
		}
	}
}
