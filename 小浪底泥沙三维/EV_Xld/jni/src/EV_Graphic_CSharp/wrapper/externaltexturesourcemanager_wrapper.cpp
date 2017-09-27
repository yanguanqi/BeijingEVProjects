/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/externaltexturesourcemanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CExternalTextureSourceManager_getSingleton_CExternalTextureSourceManager( )
			{
				EarthView::World::Graphic::CExternalTextureSourceManager& objXXXX = EarthView::World::Graphic::CExternalTextureSourceManager::getSingleton();
				EarthView::World::Graphic::CExternalTextureSourceManager *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CExternalTextureSourceManager*  _stdcall EarthView_World_Graphic_CExternalTextureSourceManager_getSingletonPtr_CExternalTextureSourceManager( )
			{
				EarthView::World::Graphic::CExternalTextureSourceManager* objXXXX = EarthView::World::Graphic::CExternalTextureSourceManager::getSingletonPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CExternalTextureSourceManager_setCurrentPlugin_void_EVString(void *pObjectXXXX, _in const char* sTexturePlugInType )
			{
				EarthView::World::Core::ev_string sTexturePlugInType1 = sTexturePlugInType;
				EarthView::World::Graphic::CExternalTextureSourceManager* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSourceManager*) pObjectXXXX;
				ptrNativeObject->setCurrentPlugin(sTexturePlugInType1);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CExternalTextureSource*  _stdcall EarthView_World_Graphic_CExternalTextureSourceManager_getCurrentPlugin_CExternalTextureSource(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CExternalTextureSourceManager* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSourceManager*) pObjectXXXX;
				EarthView::World::Graphic::CExternalTextureSource* objXXXX = ptrNativeObject->getCurrentPlugin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CExternalTextureSourceManager_destroyAdvancedTexture_void_EVString_EVString(void *pObjectXXXX, _in const char* sTextureName, _in const char* groupName )
			{
				EarthView::World::Core::ev_string sTextureName1 = sTextureName;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CExternalTextureSourceManager* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSourceManager*) pObjectXXXX;
				ptrNativeObject->destroyAdvancedTexture(sTextureName1, groupName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CExternalTextureSourceManager_destroyAdvancedTexture_void_EVString(void *pObjectXXXX, _in const char* sTextureName )
			{
				EarthView::World::Core::ev_string sTextureName1 = sTextureName;
				EarthView::World::Graphic::CExternalTextureSourceManager* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSourceManager*) pObjectXXXX;
				ptrNativeObject->destroyAdvancedTexture(sTextureName1);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CExternalTextureSource*  _stdcall EarthView_World_Graphic_CExternalTextureSourceManager_getExternalTextureSource_CExternalTextureSource_EVString(void *pObjectXXXX, _in const char* sTexturePlugInType )
			{
				EarthView::World::Core::ev_string sTexturePlugInType1 = sTexturePlugInType;
				EarthView::World::Graphic::CExternalTextureSourceManager* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSourceManager*) pObjectXXXX;
				EarthView::World::Graphic::CExternalTextureSource* objXXXX = ptrNativeObject->getExternalTextureSource(sTexturePlugInType1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CExternalTextureSourceManager_setExternalTextureSource_void_EVString_CExternalTextureSource(void *pObjectXXXX, _in const char* sTexturePlugInType, _in EarthView::World::Graphic::CExternalTextureSource* ref_pTextureSystem )
			{
				EarthView::World::Core::ev_string sTexturePlugInType1 = sTexturePlugInType;
				EarthView::World::Graphic::CExternalTextureSourceManager* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSourceManager*) pObjectXXXX;
				ptrNativeObject->setExternalTextureSource(sTexturePlugInType1, ref_pTextureSystem);
			}
		}
	}
}
