/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geometry3dextension/multigeometry3dextensiontool.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtensionTool_extensionPointToBillboard_1CMultiPoint3DExtension(JNIEnv *__env , jclass __clazz, jlong pointExtension_j)
			{
				const EarthView::World::Geometry3D::CMultiPoint3DExtension *pointExtension = (const EarthView::World::Geometry3D::CMultiPoint3DExtension*) pointExtension_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionTool::extensionPointToBillboard(pointExtension);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtensionTool_extensionPointToIcon_1CMultiPoint3DExtension(JNIEnv *__env , jclass __clazz, jlong pointExtension_j)
			{
				const EarthView::World::Geometry3D::CMultiPoint3DExtension *pointExtension = (const EarthView::World::Geometry3D::CMultiPoint3DExtension*) pointExtension_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionTool::extensionPointToIcon(pointExtension);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtensionTool_extensionPointToPhoto_1CMultiPoint3DExtension(JNIEnv *__env , jclass __clazz, jlong pointExtension_j)
			{
				const EarthView::World::Geometry3D::CMultiPoint3DExtension *pointExtension = (const EarthView::World::Geometry3D::CMultiPoint3DExtension*) pointExtension_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionTool::extensionPointToPhoto(pointExtension);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtensionTool_extensionPointToModel_1CMultiPoint3DExtension(JNIEnv *__env , jclass __clazz, jlong pointExtension_j)
			{
				const EarthView::World::Geometry3D::CMultiPoint3DExtension *pointExtension = (const EarthView::World::Geometry3D::CMultiPoint3DExtension*) pointExtension_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionTool::extensionPointToModel(pointExtension);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtensionTool_extensionLineToSquard_1CMultiPolyline3DExtension(JNIEnv *__env , jclass __clazz, jlong lineExtension_j)
			{
				const EarthView::World::Geometry3D::CMultiPolyline3DExtension *lineExtension = (const EarthView::World::Geometry3D::CMultiPolyline3DExtension*) lineExtension_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionTool::extensionLineToSquard(lineExtension);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtensionTool_extensionLineToSurface_1CMultiPolyline3DExtension(JNIEnv *__env , jclass __clazz, jlong lineExtension_j)
			{
				const EarthView::World::Geometry3D::CMultiPolyline3DExtension *lineExtension = (const EarthView::World::Geometry3D::CMultiPolyline3DExtension*) lineExtension_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionTool::extensionLineToSurface(lineExtension);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtensionTool_extensionLineToConduit_1CMultiPolyline3DExtension(JNIEnv *__env , jclass __clazz, jlong lineExtension_j)
			{
				const EarthView::World::Geometry3D::CMultiPolyline3DExtension *lineExtension = (const EarthView::World::Geometry3D::CMultiPolyline3DExtension*) lineExtension_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionTool::extensionLineToConduit(lineExtension);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtensionTool_extensionPolygonToCuboid_1CMultiPolygon3DExtension(JNIEnv *__env , jclass __clazz, jlong ploygonExtension_j)
			{
				const EarthView::World::Geometry3D::CMultiPolygon3DExtension *ploygonExtension = (const EarthView::World::Geometry3D::CMultiPolygon3DExtension*) ploygonExtension_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionTool::extensionPolygonToCuboid(ploygonExtension);
			}
		}
	}
}
