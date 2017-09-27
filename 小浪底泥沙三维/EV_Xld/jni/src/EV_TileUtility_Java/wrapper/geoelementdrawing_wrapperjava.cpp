/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/geoelementdrawing.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoElementDrawing_startDrawing_1ISpatialDisplay(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_display_j)
			{
				EarthView::World::Spatial::Display::ISpatialDisplay *ref_display = (EarthView::World::Spatial::Display::ISpatialDisplay*) ref_display_j;
				EarthView::World::Spatial::CGeoElementDrawing *pObjectX = (EarthView::World::Spatial::CGeoElementDrawing*) pObjXXXX;
				pObjectX->startDrawing(ref_display);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoElementDrawing_endDrawing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CGeoElementDrawing *pObjectX = (EarthView::World::Spatial::CGeoElementDrawing*) pObjXXXX;
				pObjectX->endDrawing();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoElementDrawing_setSymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
			{
				EarthView::World::Spatial::Display::ISymbol *pSymbol = (EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
				EarthView::World::Spatial::CGeoElementDrawing *pObjectX = (EarthView::World::Spatial::CGeoElementDrawing*) pObjXXXX;
				pObjectX->setSymbol(pSymbol);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_GeoElementDrawing_draw_1CGeoElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geoElement_j)
			{
				const EarthView::World::Spatial::CGeoElement *geoElement = (const EarthView::World::Spatial::CGeoElement*) geoElement_j;
				EarthView::World::Spatial::CGeoElementDrawing *pObjectX = (EarthView::World::Spatial::CGeoElementDrawing*) pObjXXXX;
				pObjectX->draw(geoElement);
			}
		}
	}
}
