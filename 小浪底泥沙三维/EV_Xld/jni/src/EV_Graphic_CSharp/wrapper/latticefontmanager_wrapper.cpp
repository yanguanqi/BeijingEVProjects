/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/latticefontmanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLatticeFontManager_destroySingleton_void( )
			{
				EarthView::World::Graphic::CLatticeFontManager::destroySingleton();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLatticeFontManager_create_void( )
			{
				EarthView::World::Graphic::CLatticeFontManager::create();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CLatticeFontManager_generateTextMaterial_CMaterialPtr_EVString_EVString(_in const char* materialName, _in const char* resgrpName )
			{
				EarthView::World::Core::ev_string materialName1 = materialName;
				EarthView::World::Core::ev_string resgrpName1 = resgrpName;
				EarthView::World::Graphic::CMaterialPtr objXXXX = EarthView::World::Graphic::CLatticeFontManager::generateTextMaterial(materialName1, resgrpName1);
				EarthView::World::Graphic::CMaterialPtr *pXXXX = new EarthView::World::Graphic::CMaterialPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CLatticeFontManager_getTextMaterial_CMaterialPtr_MaterialType(void *pObjectXXXX, _in int maType )
			{
				EarthView::World::Graphic::CLatticeFontManager* ptrNativeObject = (EarthView::World::Graphic::CLatticeFontManager*) pObjectXXXX;
				EarthView::World::Graphic::CMaterialPtr objXXXX = ptrNativeObject->getTextMaterial((EarthView::World::Graphic::CLatticeFontManager::MaterialType)maType);
				EarthView::World::Graphic::CMaterialPtr *pXXXX = new EarthView::World::Graphic::CMaterialPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CLatticeFontManager*  _stdcall EarthView_World_Graphic_CLatticeFontManager_getSingleton_CLatticeFontManager( )
			{
				EarthView::World::Graphic::CLatticeFontManager* objXXXX = EarthView::World::Graphic::CLatticeFontManager::getSingleton();
				return objXXXX;
			}
		}
	}
}
