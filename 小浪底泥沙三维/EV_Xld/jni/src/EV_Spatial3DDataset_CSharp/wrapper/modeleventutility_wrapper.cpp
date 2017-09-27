/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/modeleventutility.h"
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
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelEventUtility_sendStopRenderEvent_void_IDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* pDataset )
				{
					EarthView::World::Spatial3D::Dataset::CModelEventUtility::sendStopRenderEvent(pDataset);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelEventUtility_sendStartRenderEvent_void_IDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* pDataset )
				{
					EarthView::World::Spatial3D::Dataset::CModelEventUtility::sendStartRenderEvent(pDataset);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelEventUtility_sendRefreshAllModelEvent_void_IDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* pDataset )
				{
					EarthView::World::Spatial3D::Dataset::CModelEventUtility::sendRefreshAllModelEvent(pDataset);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelEventUtility_sendUpdateModelEvent_void_IDataset_IFeature_EntityDatasetOperType(_in EarthView::World::Spatial::GeoDataset::IDataset* pDataset, _in const EarthView::World::Spatial::GeoDataset::IFeature* info, _in int operType )
				{
					EarthView::World::Spatial3D::Dataset::CModelEventUtility::sendUpdateModelEvent(pDataset, info, (EarthView::World::Spatial3D::Dataset::EntityDatasetOperType)operType);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelEventUtility_sendUpdateAltitudeEvent_void_IDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* pDataset )
				{
					EarthView::World::Spatial3D::Dataset::CModelEventUtility::sendUpdateAltitudeEvent(pDataset);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelEventUtility_sendUpdateOctreeEvent_void_IDataset_IFeature_EntityDatasetOperType(_in EarthView::World::Spatial::GeoDataset::IDataset* pDataset, _in const EarthView::World::Spatial::GeoDataset::IFeature* info, _in int operType )
				{
					EarthView::World::Spatial3D::Dataset::CModelEventUtility::sendUpdateOctreeEvent(pDataset, info, (EarthView::World::Spatial3D::Dataset::EntityDatasetOperType)operType);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelEventUtility_sendRefreshOctreeEvent_void_IDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* pDataset )
				{
					EarthView::World::Spatial3D::Dataset::CModelEventUtility::sendRefreshOctreeEvent(pDataset);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelEventUtility_sendCommitIDEvent_void_IDataset_EntityDatasetOperType_ev_uint32_ev_uint32(_in EarthView::World::Spatial::GeoDataset::IDataset* pDataset, _in int operType, _in ev_uint32 cacheID, _in ev_uint32 dbID )
				{
					EarthView::World::Spatial3D::Dataset::CModelEventUtility::sendCommitIDEvent(pDataset, (EarthView::World::Spatial3D::Dataset::EntityDatasetOperType)operType, cacheID, dbID);
				}
			}
		}
	}
}
