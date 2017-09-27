/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialtheme/themefactory.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_ThemeFactory_getInstance_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial::Theme::CThemeFactory* __values1 = EarthView::World::Spatial::Theme::CThemeFactory::getInstance();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_ThemeFactory_createThemeFromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Theme::CThemeFactory *pObjectX = (EarthView::World::Spatial::Theme::CThemeFactory*) pObjXXXX;
					EarthView::World::Spatial::Theme::ITheme* __values1 = pObjectX->createThemeFromStream(stream);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_ThemeFactory_createThemeFromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Theme::CThemeFactory *pObjectX = (EarthView::World::Spatial::Theme::CThemeFactory*) pObjXXXX;
					EarthView::World::Spatial::Theme::ITheme* __values1 = pObjectX->createThemeFromXmlElement(element);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_ThemeFactory_destroyTheme_1ITheme(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pTheme_j)
				{
					EarthView::World::Spatial::Theme::ITheme *pTheme = (EarthView::World::Spatial::Theme::ITheme*) pTheme_j;
					EarthView::World::Spatial::Theme::CThemeFactory *pObjectX = (EarthView::World::Spatial::Theme::CThemeFactory*) pObjXXXX;
					pObjectX->destroyTheme(pTheme);
				}
			}
		}
	}
}
