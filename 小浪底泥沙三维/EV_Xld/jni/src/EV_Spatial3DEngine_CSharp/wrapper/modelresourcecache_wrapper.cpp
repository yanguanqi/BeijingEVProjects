/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/modelresourcecache.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace ModelManager
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CMaterialPriority_addItem_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::ModelManager::CMaterialPriority* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMaterialPriority*) pObjectXXXX;
					ptrNativeObject->addItem(id);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CMaterialPriority_removeItem_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::ModelManager::CMaterialPriority* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMaterialPriority*) pObjectXXXX;
					ptrNativeObject->removeItem(id);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_ModelManager_CMaterialPriority_getPriorityItem_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CMaterialPriority* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMaterialPriority*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getPriorityItem();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CMaterialPriority_updatePriority_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::ModelManager::CMaterialPriority* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMaterialPriority*) pObjectXXXX;
					ptrNativeObject->updatePriority(id);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CMaterialResourceCache_lock_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache*) pObjectXXXX;
					ptrNativeObject->lock();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CMaterialResourceCache_unlock_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache*) pObjectXXXX;
					ptrNativeObject->unlock();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CMaterialResourceCache_setGroupName_void_EVString(void *pObjectXXXX, _in const char* group )
				{
					EarthView::World::Core::ev_string group1 = group;
					EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache*) pObjectXXXX;
					ptrNativeObject->setGroupName(group1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CMaterialResourceCache_setMaterialCacheSize_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 size )
				{
					EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache*) pObjectXXXX;
					ptrNativeObject->setMaterialCacheSize(size);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_ModelManager_CMaterialResourceCache_getMaterialCacheSize_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getMaterialCacheSize();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CMaterialResourceCache_hasMaterialCache_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 modelID )
				{
					EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->hasMaterialCache(modelID);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CMaterialResourceCache_addMaterial_void_ev_uint32_MaterialPtrVector(void *pObjectXXXX, _in ev_uint32 modelID, _in const void* matPtrVec )
				{
					EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache*) pObjectXXXX;
					ptrNativeObject->addMaterial(modelID, *(EarthView::World::Spatial3D::MaterialPtrVector*)matPtrVec);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CMaterialResourceCache_removeMaterial_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 modelID )
				{
					EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache*) pObjectXXXX;
					ptrNativeObject->removeMaterial(modelID);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CMaterialResourceCache_removeAllMaterial_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache*) pObjectXXXX;
					ptrNativeObject->removeAllMaterial();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CMaterialResourceCache_unloadMaterial_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 modelID )
				{
					EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache*) pObjectXXXX;
					ptrNativeObject->unloadMaterial(modelID);
				}
			}
		}
	}
}
