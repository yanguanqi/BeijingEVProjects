/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialtheme/themefactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Theme
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::CThemeFactory*  _stdcall EarthView_World_Spatial_Theme_CThemeFactory_getInstance_CThemeFactory( )
				{
					EarthView::World::Spatial::Theme::CThemeFactory* objXXXX = EarthView::World::Spatial::Theme::CThemeFactory::getInstance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial_Theme_CThemeFactory_createThemeFromStream_ITheme_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Theme::CThemeFactory* ptrNativeObject = (EarthView::World::Spatial::Theme::CThemeFactory*) pObjectXXXX;
					EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->createThemeFromStream(*(EarthView::World::Core::CDataStream*)stream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial_Theme_CThemeFactory_createThemeFromXmlElement_ITheme_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Theme::CThemeFactory* ptrNativeObject = (EarthView::World::Spatial::Theme::CThemeFactory*) pObjectXXXX;
					EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->createThemeFromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CThemeFactory_destroyTheme_void_ITheme(void *pObjectXXXX, _in EarthView::World::Spatial::Theme::ITheme* pTheme )
				{
					EarthView::World::Spatial::Theme::CThemeFactory* ptrNativeObject = (EarthView::World::Spatial::Theme::CThemeFactory*) pObjectXXXX;
					ptrNativeObject->destroyTheme(pTheme);
				}
			}
		}
	}
}
