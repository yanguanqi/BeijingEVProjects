/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geometry3d/geometry3dfactory.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_Geometry3DFactory_createBox_1CBox_1IColor(JNIEnv *__env , jclass __clazz, jlong box_j, jlong color_j)
			{
				const EarthView::World::Spatial::Geometry::CBox &box = *(EarthView::World::Spatial::Geometry::CBox*) box_j;
				const EarthView::World::Spatial::Display::IColor *color = (const EarthView::World::Spatial::Display::IColor*) color_j;
				EarthView::World::Geometry3D::CSimpleRenderableEx* __values1 = EarthView::World::Geometry3D::CGeometry3DFactory::createBox(box, color);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_Geometry3DFactory_createCone_1CCone_1IColor(JNIEnv *__env , jclass __clazz, jlong cone_j, jlong color_j)
			{
				const EarthView::World::Spatial::Geometry::CCone &cone = *(EarthView::World::Spatial::Geometry::CCone*) cone_j;
				const EarthView::World::Spatial::Display::IColor *color = (const EarthView::World::Spatial::Display::IColor*) color_j;
				EarthView::World::Geometry3D::CSimpleRenderableEx* __values1 = EarthView::World::Geometry3D::CGeometry3DFactory::createCone(cone, color);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_Geometry3DFactory_createColumn_1CColumn_1IColor(JNIEnv *__env , jclass __clazz, jlong column_j, jlong color_j)
			{
				const EarthView::World::Spatial::Geometry::CColumn &column = *(EarthView::World::Spatial::Geometry::CColumn*) column_j;
				const EarthView::World::Spatial::Display::IColor *color = (const EarthView::World::Spatial::Display::IColor*) color_j;
				EarthView::World::Geometry3D::CSimpleRenderableEx* __values1 = EarthView::World::Geometry3D::CGeometry3DFactory::createColumn(column, color);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_Geometry3DFactory_createEllipsoid_1CEllipsoid_1IColor(JNIEnv *__env , jclass __clazz, jlong ellipsoid_j, jlong color_j)
			{
				const EarthView::World::Spatial::Geometry::CEllipsoid &ellipsoid = *(EarthView::World::Spatial::Geometry::CEllipsoid*) ellipsoid_j;
				const EarthView::World::Spatial::Display::IColor *color = (const EarthView::World::Spatial::Display::IColor*) color_j;
				EarthView::World::Geometry3D::CSimpleRenderableEx* __values1 = EarthView::World::Geometry3D::CGeometry3DFactory::createEllipsoid(ellipsoid, color);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_Geometry3DFactory_createRing_1CRing_1IColor(JNIEnv *__env , jclass __clazz, jlong ring_j, jlong color_j)
			{
				const EarthView::World::Spatial::Geometry::CRing &ring = *(EarthView::World::Spatial::Geometry::CRing*) ring_j;
				const EarthView::World::Spatial::Display::IColor *color = (const EarthView::World::Spatial::Display::IColor*) color_j;
				EarthView::World::Geometry3D::CSimpleRenderableEx* __values1 = EarthView::World::Geometry3D::CGeometry3DFactory::createRing(ring, color);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_Geometry3DFactory_createVolume_1CRevolvingVolume_1CDegree_1IColor_1ev_1bool(JNIEnv *__env , jclass __clazz, jlong volume_j, jlong interval_j, jlong color_j, jboolean sideClosed_j)
			{
				const EarthView::World::Spatial::Geometry::CRevolvingVolume &volume = *(EarthView::World::Spatial::Geometry::CRevolvingVolume*) volume_j;
				const EarthView::World::Spatial::Math::CDegree &interval = *(EarthView::World::Spatial::Math::CDegree*) interval_j;
				const EarthView::World::Spatial::Display::IColor *color = (const EarthView::World::Spatial::Display::IColor*) color_j;
				ev_bool sideClosed = (ev_bool) sideClosed_j;
				EarthView::World::Geometry3D::CSimpleRenderableEx* __values1 = EarthView::World::Geometry3D::CGeometry3DFactory::createVolume(volume, interval, color, sideClosed);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_Geometry3DFactory_createVolumeFrame_1CRevolvingVolume_1CDegree_1IColor_1ev_1bool(JNIEnv *__env , jclass __clazz, jlong volume_j, jlong interval_j, jlong color_j, jboolean sideClosed_j)
			{
				const EarthView::World::Spatial::Geometry::CRevolvingVolume &volume = *(EarthView::World::Spatial::Geometry::CRevolvingVolume*) volume_j;
				const EarthView::World::Spatial::Math::CDegree &interval = *(EarthView::World::Spatial::Math::CDegree*) interval_j;
				const EarthView::World::Spatial::Display::IColor *color = (const EarthView::World::Spatial::Display::IColor*) color_j;
				ev_bool sideClosed = (ev_bool) sideClosed_j;
				EarthView::World::Geometry3D::CSimpleRenderableEx* __values1 = EarthView::World::Geometry3D::CGeometry3DFactory::createVolumeFrame(volume, interval, color, sideClosed);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_Geometry3DFactory_destroy_1CSimpleRenderableEx(JNIEnv *__env , jclass __clazz, jlong pRenderable_j)
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx *pRenderable = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pRenderable_j;
				EarthView::World::Geometry3D::CGeometry3DFactory::destroy(pRenderable);
			}
		}
	}
}
