/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/modeldatasetevent.h"
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
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelDatasetEditEvent_setEventType_void_EntityDatasetEvent(void *pObjectXXXX, _in int evtype )
				{
					EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent*) pObjectXXXX;
					ptrNativeObject->setEventType((EarthView::World::Spatial3D::Dataset::EntityDatasetEvent)evtype);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CModelDatasetEditEvent_getEventType_EntityDatasetEvent(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::EntityDatasetEvent objXXXX = ptrNativeObject->getEventType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelDatasetEditEvent_setOperationType_void_EntityDatasetOperType(void *pObjectXXXX, _in int evtype )
				{
					EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent*) pObjectXXXX;
					ptrNativeObject->setOperationType((EarthView::World::Spatial3D::Dataset::EntityDatasetOperType)evtype);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CModelDatasetEditEvent_getOperationType_EntityDatasetOperType(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::EntityDatasetOperType objXXXX = ptrNativeObject->getOperationType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelDatasetEditEvent_setFeature_void_IFeature(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeature* f )
				{
					EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent*) pObjectXXXX;
					ptrNativeObject->setFeature(f);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDatasetEditEvent_getFeature_IFeature(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->getFeature();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelDatasetEditEvent_setNotifyOthersFlag_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent*) pObjectXXXX;
					ptrNativeObject->setNotifyOthersFlag(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelDatasetEditEvent_getNotifyOthersFlag_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getNotifyOthersFlag();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelDatasetEditEvent_getCommitID_void_ev_uint32_ev_uint32(void *pObjectXXXX, _inout ev_uint32& cacheID, _inout ev_uint32& dbID )
				{
					EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent*) pObjectXXXX;
					ptrNativeObject->getCommitID(cacheID, dbID);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelDatasetEditEvent_setCommitID_void_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 cacheID, _in ev_uint32 dbID )
				{
					EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent*) pObjectXXXX;
					ptrNativeObject->setCommitID(cacheID, dbID);
				}
			}
		}
	}
}
