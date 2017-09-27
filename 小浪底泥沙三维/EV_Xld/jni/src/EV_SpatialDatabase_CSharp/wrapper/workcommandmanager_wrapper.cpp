/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdatabase/workcommandmanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CWorkCommandManager_canRedo_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CWorkCommandManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->canRedo();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CWorkCommandManager_canUndo_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CWorkCommandManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->canUndo();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_CWorkCommandManager_getCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CWorkCommandManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::CWorkCommand*  _stdcall EarthView_World_Spatial_GeoDataset_CWorkCommandManager_getCommand_CWorkCommand_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::GeoDataset::CWorkCommandManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::CWorkCommand* objXXXX = ptrNativeObject->getCommand(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_CWorkCommandManager_getUndoLimit_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CWorkCommandManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getUndoLimit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CWorkCommandManager_setUndoLimit_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 limit )
				{
					EarthView::World::Spatial::GeoDataset::CWorkCommandManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjectXXXX;
					ptrNativeObject->setUndoLimit(limit);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::CWorkCommand*  _stdcall EarthView_World_Spatial_GeoDataset_CWorkCommandManager_redo_CWorkCommand(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CWorkCommandManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::CWorkCommand* objXXXX = ptrNativeObject->redo();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::CWorkCommand*  _stdcall EarthView_World_Spatial_GeoDataset_CWorkCommandManager_undo_CWorkCommand(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CWorkCommandManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::CWorkCommand* objXXXX = ptrNativeObject->undo();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CWorkCommandManager_beginMacro_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CWorkCommandManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjectXXXX;
					ptrNativeObject->beginMacro();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CWorkCommandManager_endMacro_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CWorkCommandManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjectXXXX;
					ptrNativeObject->endMacro();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CWorkCommandManager_isInMacro_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CWorkCommandManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isInMacro();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CWorkCommandManager_abortMacro_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CWorkCommandManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjectXXXX;
					ptrNativeObject->abortMacro();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_CWorkCommandManager_getCurrentIndex_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CWorkCommandManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getCurrentIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::CWorkCommand*  _stdcall EarthView_World_Spatial_GeoDataset_CWorkCommandManager_push_CWorkCommand(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CWorkCommandManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::CWorkCommand* objXXXX = ptrNativeObject->push();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CWorkCommandManager_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CWorkCommandManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjectXXXX;
					ptrNativeObject->clear();
				}
			}
		}
	}
}
