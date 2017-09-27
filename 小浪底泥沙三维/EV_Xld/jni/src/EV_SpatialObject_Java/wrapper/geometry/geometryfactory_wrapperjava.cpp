/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/geometryfactory.h"
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
			namespace Geometry
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_GeometryFactory_getInstance_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial::Geometry::CGeometryFactory* __values1 = EarthView::World::Spatial::Geometry::CGeometryFactory::getInstance();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_GeometryFactory_createEmptyGeometry_1EVGeometryType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Geometry::EVGeometryType type = (EarthView::World::Spatial::Geometry::EVGeometryType) type_j;
					const 					EarthView::World::Spatial::Geometry::CGeometryFactory *pObjectX = (EarthView::World::Spatial::Geometry::CGeometryFactory*) pObjXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->createEmptyGeometry(type);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_GeometryFactory_createGeometryFromWKB_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Geometry::CGeometryFactory *pObjectX = (EarthView::World::Spatial::Geometry::CGeometryFactory*) pObjXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->createGeometryFromWKB(stream);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_GeometryFactory_createGeometryFromWKT_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring wkt_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* wkt_ch = (const ev_char*)__env->GetStringUTFChars(wkt_j,JNI_FALSE);
					EVString wkt = wkt_ch;
					__env->ReleaseStringUTFChars(wkt_j, (const char *)wkt_ch);
					#else
					const ev_wchar* wkt_ch = (const ev_wchar*)__env->GetStringChars(wkt_j,JNI_FALSE);
					EVString wkt = wkt_ch;
					__env->ReleaseStringChars(wkt_j, (const jchar *)wkt_ch);
					#endif
					const 					EarthView::World::Spatial::Geometry::CGeometryFactory *pObjectX = (EarthView::World::Spatial::Geometry::CGeometryFactory*) pObjXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->createGeometryFromWKT(wkt);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_GeometryFactory_createGeometryFromShapeFileBuffer_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Geometry::CGeometryFactory *pObjectX = (EarthView::World::Spatial::Geometry::CGeometryFactory*) pObjXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->createGeometryFromShapeFileBuffer(stream);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_GeometryFactory_createGeometryFromEVGeometryBuffer_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Geometry::CGeometryFactory *pObjectX = (EarthView::World::Spatial::Geometry::CGeometryFactory*) pObjXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->createGeometryFromEVGeometryBuffer(stream);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_GeometryFactory_destroyGeometry_1IGeometry(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geom_j)
				{
					const EarthView::World::Spatial::Geometry::IGeometry *geom = (const EarthView::World::Spatial::Geometry::IGeometry*) geom_j;
					EarthView::World::Spatial::Geometry::CGeometryFactory *pObjectX = (EarthView::World::Spatial::Geometry::CGeometryFactory*) pObjXXXX;
					pObjectX->destroyGeometry(geom);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_GeometryFactory_release_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Geometry::CGeometryFactory *pObjectX = (EarthView::World::Spatial::Geometry::CGeometryFactory*) pObjXXXX;
					pObjectX->release();
				}
			}
		}
	}
}
