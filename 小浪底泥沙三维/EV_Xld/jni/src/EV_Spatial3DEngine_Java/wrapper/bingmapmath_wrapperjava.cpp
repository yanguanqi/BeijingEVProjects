/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/bingmapmath.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_atlas_BingMapMath_Clip_1Real_1Real_1Real(JNIEnv *__env , jclass __clazz, jdouble n_j, jdouble minValue_j, jdouble maxValue_j)
				{
					Real n = (Real) n_j;
					Real minValue = (Real) minValue_j;
					Real maxValue = (Real) maxValue_j;
					Real __values1 = EarthView::World::Spatial3D::Atlas::CBingMapMath::Clip(n, minValue, maxValue);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_BingMapMath_MapSize_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong level_j)
				{
					ev_uint32 level = (ev_uint32) level_j;
					ev_uint32 __values1 = EarthView::World::Spatial3D::Atlas::CBingMapMath::MapSize(level);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_BingMapMath_LatLongToPixelXY_1Real_1Real_1ev_1uint32_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jclass __clazz, jdouble latitude_j, jdouble longitude_j, jlong levelOfDetail_j, jlong pixelX_j, jlong pixelY_j)
				{
					Real latitude = (Real) latitude_j;
					Real longitude = (Real) longitude_j;
					ev_uint32 levelOfDetail = (ev_uint32) levelOfDetail_j;
					ev_uint32 &pixelX = *(ev_uint32*) pixelX_j;
					ev_uint32 &pixelY = *(ev_uint32*) pixelY_j;
					EarthView::World::Spatial3D::Atlas::CBingMapMath::LatLongToPixelXY(latitude, longitude, levelOfDetail, pixelX, pixelY);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_BingMapMath_PixelXYToLatLong_1ev_1uint32_1ev_1uint32_1ev_1uint32_1Real_1Real(JNIEnv *__env , jclass __clazz, jlong pixelX_j, jlong pixelY_j, jlong levelOfDetail_j, jlong latitude_j, jlong longitude_j)
				{
					ev_uint32 pixelX = (ev_uint32) pixelX_j;
					ev_uint32 pixelY = (ev_uint32) pixelY_j;
					ev_uint32 levelOfDetail = (ev_uint32) levelOfDetail_j;
					Real &latitude = *(Real*) latitude_j;
					Real &longitude = *(Real*) longitude_j;
					EarthView::World::Spatial3D::Atlas::CBingMapMath::PixelXYToLatLong(pixelX, pixelY, levelOfDetail, latitude, longitude);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_BingMapMath_PixelXYToTileXY_1ev_1uint32_1ev_1uint32_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong pixelX_j, jlong pixelY_j, jlong tileX_j, jlong tileY_j)
				{
					ev_uint32 pixelX = (ev_uint32) pixelX_j;
					ev_uint32 pixelY = (ev_uint32) pixelY_j;
					ev_uint32 &tileX = *(ev_uint32*) tileX_j;
					ev_uint32 &tileY = *(ev_uint32*) tileY_j;
					EarthView::World::Spatial3D::Atlas::CBingMapMath::PixelXYToTileXY(pixelX, pixelY, tileX, tileY);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_BingMapMath_TileXYToPixelXY_1ev_1uint32_1ev_1uint32_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong tileX_j, jlong tileY_j, jlong pixelX_j, jlong pixelY_j)
				{
					ev_uint32 tileX = (ev_uint32) tileX_j;
					ev_uint32 tileY = (ev_uint32) tileY_j;
					ev_uint32 &pixelX = *(ev_uint32*) pixelX_j;
					ev_uint32 &pixelY = *(ev_uint32*) pixelY_j;
					EarthView::World::Spatial3D::Atlas::CBingMapMath::TileXYToPixelXY(tileX, tileY, pixelX, pixelY);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_atlas_BingMapMath_TileXYToQuadKey_1ev_1uint32_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong tileX_j, jlong tileY_j, jlong levelOfDetail_j)
				{
					ev_uint32 tileX = (ev_uint32) tileX_j;
					ev_uint32 tileY = (ev_uint32) tileY_j;
					ev_uint32 levelOfDetail = (ev_uint32) levelOfDetail_j;
					EVString __values1 = EarthView::World::Spatial3D::Atlas::CBingMapMath::TileXYToQuadKey(tileX, tileY, levelOfDetail);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_BingMapMath_QuadKeyToTileXY_1EVString_1ev_1uint32_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong quadKey_j, jlong tileX_j, jlong tileY_j, jlong levelOfDetail_j)
				{
					EVString &quadKey = *(EVString*) quadKey_j;
					ev_uint32 &tileX = *(ev_uint32*) tileX_j;
					ev_uint32 &tileY = *(ev_uint32*) tileY_j;
					ev_uint32 &levelOfDetail = *(ev_uint32*) levelOfDetail_j;
					EarthView::World::Spatial3D::Atlas::CBingMapMath::QuadKeyToTileXY(quadKey, tileX, tileY, levelOfDetail);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_atlas_BingMapMath_get_1MinLatitude_1void(JNIEnv *__env, jclass __clazz)
				{
					jdouble __values1_j = (jdouble)(EarthView::World::Spatial3D::Atlas::CBingMapMath::MinLatitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_atlas_BingMapMath_get_1MaxLatitude_1void(JNIEnv *__env, jclass __clazz)
				{
					jdouble __values1_j = (jdouble)(EarthView::World::Spatial3D::Atlas::CBingMapMath::MaxLatitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_atlas_BingMapMath_get_1MinLongitude_1void(JNIEnv *__env, jclass __clazz)
				{
					jdouble __values1_j = (jdouble)(EarthView::World::Spatial3D::Atlas::CBingMapMath::MinLongitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_atlas_BingMapMath_get_1MaxLongitude_1void(JNIEnv *__env, jclass __clazz)
				{
					jdouble __values1_j = (jdouble)(EarthView::World::Spatial3D::Atlas::CBingMapMath::MaxLongitude);
					return __values1_j;
				}
			}
		}
	}
}
