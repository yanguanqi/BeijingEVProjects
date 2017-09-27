/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/modelcommonutility.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
			}
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
			namespace ModelManager
			{
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelDatasetSpatialUtility_rebuildSpatialIndex_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->rebuildSpatialIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelDatasetSpatialUtility_rebuildSpatialIndex_start_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->rebuildSpatialIndex_start();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelDatasetSpatialUtility_rebuildSpatialIndex_hasNextRecord_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->rebuildSpatialIndex_hasNextRecord();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelDatasetSpatialUtility_rebuildSpatialIndex_execNextRecord_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->rebuildSpatialIndex_execNextRecord();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelDatasetSpatialUtility_rebuildSpatialIndex_save_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->rebuildSpatialIndex_save();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelDatasetSpatialUtility_rebuildSpatialIndex_stop_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool commitFlag )
				{
					EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->rebuildSpatialIndex_stop(commitFlag);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelDatasetSpatialUtility_updateSpatialIndex_ev_bool_EVAltitudeMode_ev_real64(void *pObjectXXXX, _in int altitudeMode, _in ev_real64 altitudeVal )
				{
					EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateSpatialIndex((EarthView::World::Spatial::Utility::EVAltitudeMode)altitudeMode, altitudeVal);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelDatasetSpatialUtility_updateSpatialIndex_start_ev_bool_EVAltitudeMode_ev_real64(void *pObjectXXXX, _in int altitudeMode, _in ev_real64 altitudeVal )
				{
					EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateSpatialIndex_start((EarthView::World::Spatial::Utility::EVAltitudeMode)altitudeMode, altitudeVal);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelDatasetSpatialUtility_updateSpatialIndex_hasNextRecord_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateSpatialIndex_hasNextRecord();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelDatasetSpatialUtility_updateSpatialIndex_execNextRecord_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateSpatialIndex_execNextRecord();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelDatasetSpatialUtility_updateSpatialIndex_save_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateSpatialIndex_save();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelDatasetSpatialUtility_updateSpatialIndex_stop_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool commitFlag )
				{
					EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateSpatialIndex_stop(commitFlag);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelDatasetSpatialUtility_getTransformAfterChangeAltitude_void_CAxisAlignedBox_CMatrix4_CMatrix4_EVAltitudeMode_ev_real64_ev_real64_CMatrix4_CMatrix4(_in const void* meshBound, _in const void* meshModelDBMatrix, _in const void* sceneMatrix, _in int altitudeMode, _in ev_real64 altitudeVal, _in ev_real64 dem, _out void* outSceneMatrix, _out void* outBoundMatrix )
				{
					EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility::getTransformAfterChangeAltitude(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)meshBound, *(EarthView::World::Spatial::Math::CMatrix4*)meshModelDBMatrix, *(EarthView::World::Spatial::Math::CMatrix4*)sceneMatrix, (EarthView::World::Spatial::Utility::EVAltitudeMode)altitudeMode, altitudeVal, dem, *(EarthView::World::Spatial::Math::CMatrix4*)outSceneMatrix, *(EarthView::World::Spatial::Math::CMatrix4*)outBoundMatrix);
				}
			}
		}
	}
}
