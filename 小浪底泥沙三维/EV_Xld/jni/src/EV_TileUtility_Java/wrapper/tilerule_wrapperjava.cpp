/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tilerule.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileRule_getTileLevelRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileRule *pObjectX = (EarthView::World::Spatial::CTileRule*) pObjXXXX;
				const EarthView::World::Spatial::CTileLevel* __values1 = pObjectX->getTileLevelRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileRule_getTileOriginRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileRule *pObjectX = (EarthView::World::Spatial::CTileRule*) pObjXXXX;
				const EarthView::World::Spatial::CTileOrigin* __values1 = pObjectX->getTileOriginRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileRule_getTilePixelSizeRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileRule *pObjectX = (EarthView::World::Spatial::CTileRule*) pObjXXXX;
				const EarthView::World::Spatial::CTilePixelSize* __values1 = pObjectX->getTilePixelSizeRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_TileRule_getTileUnitsType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileRule *pObjectX = (EarthView::World::Spatial::CTileRule*) pObjXXXX;
				EarthView::World::Spatial::EVTileUnitsType __values1 = pObjectX->getTileUnitsType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileRule_setTileLevel_1CTileLevel(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tileLevel_j)
			{
				const EarthView::World::Spatial::CTileLevel &tileLevel = *(EarthView::World::Spatial::CTileLevel*) tileLevel_j;
				EarthView::World::Spatial::CTileRule *pObjectX = (EarthView::World::Spatial::CTileRule*) pObjXXXX;
				pObjectX->setTileLevel(tileLevel);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileRule_setTileOrigin_1CTileOrigin(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tileOrigin_j)
			{
				const EarthView::World::Spatial::CTileOrigin &tileOrigin = *(EarthView::World::Spatial::CTileOrigin*) tileOrigin_j;
				EarthView::World::Spatial::CTileRule *pObjectX = (EarthView::World::Spatial::CTileRule*) pObjXXXX;
				pObjectX->setTileOrigin(tileOrigin);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileRule_setTilePixelSize_1CTilePixelSize(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tilePixelSize_j)
			{
				const EarthView::World::Spatial::CTilePixelSize &tilePixelSize = *(EarthView::World::Spatial::CTilePixelSize*) tilePixelSize_j;
				EarthView::World::Spatial::CTileRule *pObjectX = (EarthView::World::Spatial::CTileRule*) pObjXXXX;
				pObjectX->setTilePixelSize(tilePixelSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileRule_setTileUnits_1EVTileUnitsType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
			{
				EarthView::World::Spatial::EVTileUnitsType type = (EarthView::World::Spatial::EVTileUnitsType) type_j;
				EarthView::World::Spatial::CTileRule *pObjectX = (EarthView::World::Spatial::CTileRule*) pObjXXXX;
				pObjectX->setTileUnits(type);
			}
		}
	}
}
