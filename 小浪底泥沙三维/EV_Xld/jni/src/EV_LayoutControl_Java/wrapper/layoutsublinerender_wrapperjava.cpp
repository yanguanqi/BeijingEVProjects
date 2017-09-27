/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "layoutcontrol/layoutsublinerender.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Layout
		{
			namespace Controls
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutSublineRender_drawSubline_1IGeometry_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pGeometry_j, jlong pSymbol_j)
				{
					EarthView::World::Spatial::Geometry::IGeometry *pGeometry = (EarthView::World::Spatial::Geometry::IGeometry*) pGeometry_j;
					EarthView::World::Spatial::Display::ISymbol *pSymbol = (EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Layout::Controls::CLayoutSublineRender *pObjectX = (EarthView::World::Layout::Controls::CLayoutSublineRender*) pObjXXXX;
					pObjectX->drawSubline(pGeometry, pSymbol);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutSublineRender_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Layout::Controls::CLayoutSublineRender *pObjectX = (EarthView::World::Layout::Controls::CLayoutSublineRender*) pObjXXXX;
					pObjectX->clear();
				}
			}
		}
	}
}
