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
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_XldManager_CWaterConservancyManager_Initialise_void_CGlobeControl_EVString(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeControl* ref_globecontrol, _inout char*& runtimePath )
		{
			EarthView::World::Core::ev_string runtimePath1 = runtimePath;
			EarthView::XldManager::CWaterConservancyManager* ptrNativeObject = (EarthView::XldManager::CWaterConservancyManager*) pObjectXXXX;
			ptrNativeObject->Initialise(ref_globecontrol, runtimePath1);
			runtimePath=runtimePath1.makeBuffer();
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_XldManager_CWaterConservancyManager_SetExaggerationFactor_void_ev_real32(void *pObjectXXXX, _in const ev_real32& factor )
		{
			EarthView::XldManager::CWaterConservancyManager* ptrNativeObject = (EarthView::XldManager::CWaterConservancyManager*) pObjectXXXX;
			ptrNativeObject->SetExaggerationFactor(factor);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_XldManager_CWaterConservancyManager_CreateTerrain_void_EVString(void *pObjectXXXX, _in const char* grdFileName )
		{
			EarthView::World::Core::ev_string grdFileName1 = grdFileName;
			EarthView::XldManager::CWaterConservancyManager* ptrNativeObject = (EarthView::XldManager::CWaterConservancyManager*) pObjectXXXX;
			ptrNativeObject->CreateTerrain(grdFileName1);
		}
		extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_XldManager_CWaterConservancyManager_GetTerrainName_EVString_ev_int32(void *pObjectXXXX, _in const ev_int32 terrainIndex )
		{
			EarthView::XldManager::CWaterConservancyManager* ptrNativeObject = (EarthView::XldManager::CWaterConservancyManager*) pObjectXXXX;
			EVString objXXXX = ptrNativeObject->GetTerrainName(terrainIndex);
			return objXXXX.makeBuffer();
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
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_XldManager_CWaterConservancyManager_MarkPosistion_void_EVString_EVString_EVString_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in const char* name, _in const char* imgeFileName, _in const char* tip, _in ev_real64 longi, _in ev_real64 lati, _in ev_real64 alti )
		{
			EarthView::World::Core::ev_string name1 = name;
			EarthView::World::Core::ev_string imgeFileName1 = imgeFileName;
			EarthView::World::Core::ev_string tip1 = tip;
			EarthView::XldManager::CWaterConservancyManager* ptrNativeObject = (EarthView::XldManager::CWaterConservancyManager*) pObjectXXXX;
			ptrNativeObject->MarkPosistion(name1, imgeFileName1, tip1, longi, lati, alti);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_XldManager_CWaterConservancyManager_SetSectionQueryEnable_void_ev_bool(void *pObjectXXXX, _in const ev_bool& isEnable )
		{
			EarthView::XldManager::CWaterConservancyManager* ptrNativeObject = (EarthView::XldManager::CWaterConservancyManager*) pObjectXXXX;
			ptrNativeObject->SetSectionQueryEnable(isEnable);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_XldManager_CWaterConservancyManager_SetTerrainHeightQueryEnable_void_ev_bool(void *pObjectXXXX, _in const ev_bool& isEnable )
		{
			EarthView::XldManager::CWaterConservancyManager* ptrNativeObject = (EarthView::XldManager::CWaterConservancyManager*) pObjectXXXX;
			ptrNativeObject->SetTerrainHeightQueryEnable(isEnable);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_XldManager_CWaterConservancyManager_CreateWaterSurface_void_ev_real64(void *pObjectXXXX, _in const ev_real64& waterHeight )
		{
			EarthView::XldManager::CWaterConservancyManager* ptrNativeObject = (EarthView::XldManager::CWaterConservancyManager*) pObjectXXXX;
			ptrNativeObject->CreateWaterSurface(waterHeight);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_XldManager_CWaterConservancyManager_SetWaterSurfaceVisible_void_ev_bool(void *pObjectXXXX, _in const ev_bool& isVisible )
		{
			EarthView::XldManager::CWaterConservancyManager* ptrNativeObject = (EarthView::XldManager::CWaterConservancyManager*) pObjectXXXX;
			ptrNativeObject->SetWaterSurfaceVisible(isVisible);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_XldManager_CWaterConservancyManager_SetWaterLineHeight_void_ev_real64(void *pObjectXXXX, _in const ev_real64& waterLineHeight )
		{
			EarthView::XldManager::CWaterConservancyManager* ptrNativeObject = (EarthView::XldManager::CWaterConservancyManager*) pObjectXXXX;
			ptrNativeObject->SetWaterLineHeight(waterLineHeight);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_XldManager_CWaterConservancyManager_DeleteWaterSurface_void_ev_bool(void *pObjectXXXX, _in const ev_bool& isSure )
		{
			EarthView::XldManager::CWaterConservancyManager* ptrNativeObject = (EarthView::XldManager::CWaterConservancyManager*) pObjectXXXX;
			ptrNativeObject->DeleteWaterSurface(isSure);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_XldManager_CWaterConservancyManager_DrawRectBounds_void(void *pObjectXXXX )
		{
			EarthView::XldManager::CWaterConservancyManager* ptrNativeObject = (EarthView::XldManager::CWaterConservancyManager*) pObjectXXXX;
			ptrNativeObject->DrawRectBounds();
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_XldManager_CWaterConservancyManager_DrawPolylineBounds_void(void *pObjectXXXX )
		{
			EarthView::XldManager::CWaterConservancyManager* ptrNativeObject = (EarthView::XldManager::CWaterConservancyManager*) pObjectXXXX;
			ptrNativeObject->DrawPolylineBounds();
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
