/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tilereferencefactory.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileReferenceFactory_createImageTileReferenceForWGS84_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Spatial::CTileReference* __values1 = EarthView::World::Spatial::CTileReferenceFactory::createImageTileReferenceForWGS84();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileReferenceFactory_createVectorTileReferenceForWGS84_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Spatial::CTileReference* __values1 = EarthView::World::Spatial::CTileReferenceFactory::createVectorTileReferenceForWGS84();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileReferenceFactory_createDEMTileReferenceForWGS84_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Spatial::CTileReference* __values1 = EarthView::World::Spatial::CTileReferenceFactory::createDEMTileReferenceForWGS84();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileReferenceFactory_createDEMTileReferenceForWGS84_1ev_1real64(JNIEnv *__env , jclass __clazz, jdouble spanofzero_j)
			{
				ev_real64 spanofzero = (ev_real64) spanofzero_j;
				EarthView::World::Spatial::CTileReference* __values1 = EarthView::World::Spatial::CTileReferenceFactory::createDEMTileReferenceForWGS84(spanofzero);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileReferenceFactory_createForWebMercator_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Spatial::CTileReference* __values1 = EarthView::World::Spatial::CTileReferenceFactory::createForWebMercator();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileReferenceFactory_destroyTileReference_1CTileReference(JNIEnv *__env , jclass __clazz, jlong tileReference_j)
			{
				const EarthView::World::Spatial::CTileReference *tileReference = (const EarthView::World::Spatial::CTileReference*) tileReference_j;
				EarthView::World::Spatial::CTileReferenceFactory::destroyTileReference(tileReference);
			}
		}
	}
}
