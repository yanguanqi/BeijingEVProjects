/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/layer3deditormanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CLayer3DEditorManager*  _stdcall EarthView_World_Spatial3D_CLayer3DEditorManager_getSingletonPtr_CLayer3DEditorManager( )
			{
				EarthView::World::Spatial3D::CLayer3DEditorManager* objXXXX = EarthView::World::Spatial3D::CLayer3DEditorManager::getSingletonPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CLayer3DEditorManager_releaseSingleton_void( )
			{
				EarthView::World::Spatial3D::CLayer3DEditorManager::releaseSingleton();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CLayer3DEditor*  _stdcall EarthView_World_Spatial3D_CLayer3DEditorManager_getModelLayerEditor_CLayer3DEditor(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CLayer3DEditorManager* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditorManager*) pObjectXXXX;
				EarthView::World::Spatial3D::CLayer3DEditor* objXXXX = ptrNativeObject->getModelLayerEditor();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CLayer3DEditor*  _stdcall EarthView_World_Spatial3D_CLayer3DEditorManager_getEffectLayerEditor_CLayer3DEditor(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CLayer3DEditorManager* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditorManager*) pObjectXXXX;
				EarthView::World::Spatial3D::CLayer3DEditor* objXXXX = ptrNativeObject->getEffectLayerEditor();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CLayer3DEditor*  _stdcall EarthView_World_Spatial3D_CLayer3DEditorManager_getMeshxgLayerEditor_CLayer3DEditor(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CLayer3DEditorManager* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditorManager*) pObjectXXXX;
				EarthView::World::Spatial3D::CLayer3DEditor* objXXXX = ptrNativeObject->getMeshxgLayerEditor();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CLayer3DEditor*  _stdcall EarthView_World_Spatial3D_CLayer3DEditorManager_createModelLayerEditor_CLayer3DEditor(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CLayer3DEditorManager* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditorManager*) pObjectXXXX;
				EarthView::World::Spatial3D::CLayer3DEditor* objXXXX = ptrNativeObject->createModelLayerEditor();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CLayer3DEditorManager_destoryModelLayerEditor_void_CLayer3DEditor(void *pObjectXXXX, _in EarthView::World::Spatial3D::CLayer3DEditor* pEditor )
			{
				EarthView::World::Spatial3D::CLayer3DEditorManager* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditorManager*) pObjectXXXX;
				ptrNativeObject->destoryModelLayerEditor(pEditor);
			}
		}
	}
}
