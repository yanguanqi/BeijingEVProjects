/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/lodstrategymanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLodStrategyManager_addStrategy_void_CLodStrategy(void *pObjectXXXX, _in EarthView::World::Graphic::CLodStrategy* ref_strategy )
			{
				EarthView::World::Graphic::CLodStrategyManager* ptrNativeObject = (EarthView::World::Graphic::CLodStrategyManager*) pObjectXXXX;
				ptrNativeObject->addStrategy(ref_strategy);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CLodStrategy*  _stdcall EarthView_World_Graphic_CLodStrategyManager_removeStrategy_CLodStrategy_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CLodStrategyManager* ptrNativeObject = (EarthView::World::Graphic::CLodStrategyManager*) pObjectXXXX;
				EarthView::World::Graphic::CLodStrategy* objXXXX = ptrNativeObject->removeStrategy(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLodStrategyManager_removeAllStrategies_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CLodStrategyManager* ptrNativeObject = (EarthView::World::Graphic::CLodStrategyManager*) pObjectXXXX;
				ptrNativeObject->removeAllStrategies();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CLodStrategy*  _stdcall EarthView_World_Graphic_CLodStrategyManager_getStrategy_CLodStrategy_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CLodStrategyManager* ptrNativeObject = (EarthView::World::Graphic::CLodStrategyManager*) pObjectXXXX;
				EarthView::World::Graphic::CLodStrategy* objXXXX = ptrNativeObject->getStrategy(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLodStrategyManager_setDefaultStrategy_void_CLodStrategy(void *pObjectXXXX, _in EarthView::World::Graphic::CLodStrategy* ref_strategy )
			{
				EarthView::World::Graphic::CLodStrategyManager* ptrNativeObject = (EarthView::World::Graphic::CLodStrategyManager*) pObjectXXXX;
				ptrNativeObject->setDefaultStrategy(ref_strategy);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLodStrategyManager_setDefaultStrategy_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CLodStrategyManager* ptrNativeObject = (EarthView::World::Graphic::CLodStrategyManager*) pObjectXXXX;
				ptrNativeObject->setDefaultStrategy(name1);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CLodStrategy*  _stdcall EarthView_World_Graphic_CLodStrategyManager_getDefaultStrategy_CLodStrategy(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CLodStrategyManager* ptrNativeObject = (EarthView::World::Graphic::CLodStrategyManager*) pObjectXXXX;
				EarthView::World::Graphic::CLodStrategy* objXXXX = ptrNativeObject->getDefaultStrategy();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CLodStrategyManager_getSingleton_CLodStrategyManager( )
			{
				EarthView::World::Graphic::CLodStrategyManager& objXXXX = EarthView::World::Graphic::CLodStrategyManager::getSingleton();
				EarthView::World::Graphic::CLodStrategyManager *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CLodStrategyManager*  _stdcall EarthView_World_Graphic_CLodStrategyManager_getSingletonPtr_CLodStrategyManager( )
			{
				EarthView::World::Graphic::CLodStrategyManager* objXXXX = EarthView::World::Graphic::CLodStrategyManager::getSingletonPtr();
				return objXXXX;
			}
		}
	}
}
