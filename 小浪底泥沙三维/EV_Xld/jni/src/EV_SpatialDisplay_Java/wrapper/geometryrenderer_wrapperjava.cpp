/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdisplay/geometryrenderer.h"
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
			namespace Display
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_GeometryRenderer_startDraw_1ISpatialDisplay_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_display_j, jlong ref_pSymbol_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *ref_display = (EarthView::World::Spatial::Display::ISpatialDisplay*) ref_display_j;
					const EarthView::World::Spatial::Display::ISymbol *ref_pSymbol = (const EarthView::World::Spatial::Display::ISymbol*) ref_pSymbol_j;
					EarthView::World::Spatial::Display::CGeometryRenderer *pObjectX = (EarthView::World::Spatial::Display::CGeometryRenderer*) pObjXXXX;
					pObjectX->startDraw(ref_display, ref_pSymbol);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_GeometryRenderer_endDraw_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CGeometryRenderer *pObjectX = (EarthView::World::Spatial::Display::CGeometryRenderer*) pObjXXXX;
					pObjectX->endDraw();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_GeometryRenderer_drawGeometry_1IGeometry(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pGeometry_j)
				{
					const EarthView::World::Spatial::Geometry::IGeometry *pGeometry = (const EarthView::World::Spatial::Geometry::IGeometry*) pGeometry_j;
					EarthView::World::Spatial::Display::CGeometryRenderer *pObjectX = (EarthView::World::Spatial::Display::CGeometryRenderer*) pObjXXXX;
					pObjectX->drawGeometry(pGeometry);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_GeometryRenderer_drawEditingGeometry_1IGeometry_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pGeometry_j, jlong pVertexSymbol_j)
				{
					const EarthView::World::Spatial::Geometry::IGeometry *pGeometry = (const EarthView::World::Spatial::Geometry::IGeometry*) pGeometry_j;
					const EarthView::World::Spatial::Display::ISymbol *pVertexSymbol = (const EarthView::World::Spatial::Display::ISymbol*) pVertexSymbol_j;
					EarthView::World::Spatial::Display::CGeometryRenderer *pObjectX = (EarthView::World::Spatial::Display::CGeometryRenderer*) pObjXXXX;
					pObjectX->drawEditingGeometry(pGeometry, pVertexSymbol);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_GeometryRenderer_drawGeometryCenter_1IGeometry(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pGeometry_j)
				{
					const EarthView::World::Spatial::Geometry::IGeometry *pGeometry = (const EarthView::World::Spatial::Geometry::IGeometry*) pGeometry_j;
					EarthView::World::Spatial::Display::CGeometryRenderer *pObjectX = (EarthView::World::Spatial::Display::CGeometryRenderer*) pObjXXXX;
					pObjectX->drawGeometryCenter(pGeometry);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_GeometryRenderer_drawEnvelope_1IEnvelope_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pEnvelope_j, jlong pSymbol_j)
				{
					EarthView::World::Spatial::Geometry::IEnvelope *pEnvelope = (EarthView::World::Spatial::Geometry::IEnvelope*) pEnvelope_j;
					EarthView::World::Spatial::Display::ISymbol *pSymbol = (EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Spatial::Display::CGeometryRenderer *pObjectX = (EarthView::World::Spatial::Display::CGeometryRenderer*) pObjXXXX;
					pObjectX->drawEnvelope(pEnvelope, pSymbol);
				}
			}
		}
	}
}
