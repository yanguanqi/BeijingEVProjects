/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/rendersystemcapabilitiesmanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilitiesManager_parseCapabilitiesFromArchive_void_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* filename, _in const char* archiveType, _in ev_bool recursive )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string archiveType1 = archiveType;
				EarthView::World::Graphic::CRenderSystemCapabilitiesManager* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilitiesManager*) pObjectXXXX;
				ptrNativeObject->parseCapabilitiesFromArchive(filename1, archiveType1, recursive);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilitiesManager_parseCapabilitiesFromArchive_void_EVString_EVString(void *pObjectXXXX, _in const char* filename, _in const char* archiveType )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string archiveType1 = archiveType;
				EarthView::World::Graphic::CRenderSystemCapabilitiesManager* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilitiesManager*) pObjectXXXX;
				ptrNativeObject->parseCapabilitiesFromArchive(filename1, archiveType1);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderSystemCapabilities*  _stdcall EarthView_World_Graphic_CRenderSystemCapabilitiesManager_loadParsedCapabilities_CRenderSystemCapabilities_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRenderSystemCapabilitiesManager* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilitiesManager*) pObjectXXXX;
				EarthView::World::Graphic::CRenderSystemCapabilities* objXXXX = ptrNativeObject->loadParsedCapabilities(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilitiesManager__addRenderSystemCapabilities_void_EVString_CRenderSystemCapabilities(void *pObjectXXXX, _in const char* name, _in EarthView::World::Graphic::CRenderSystemCapabilities* caps )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRenderSystemCapabilitiesManager* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilitiesManager*) pObjectXXXX;
				ptrNativeObject->_addRenderSystemCapabilities(name1, caps);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRenderSystemCapabilitiesManager_getSingleton_CRenderSystemCapabilitiesManager( )
			{
				EarthView::World::Graphic::CRenderSystemCapabilitiesManager& objXXXX = EarthView::World::Graphic::CRenderSystemCapabilitiesManager::getSingleton();
				EarthView::World::Graphic::CRenderSystemCapabilitiesManager *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderSystemCapabilitiesManager*  _stdcall EarthView_World_Graphic_CRenderSystemCapabilitiesManager_getSingletonPtr_CRenderSystemCapabilitiesManager( )
			{
				EarthView::World::Graphic::CRenderSystemCapabilitiesManager* objXXXX = EarthView::World::Graphic::CRenderSystemCapabilitiesManager::getSingletonPtr();
				return objXXXX;
			}
		}
	}
}
