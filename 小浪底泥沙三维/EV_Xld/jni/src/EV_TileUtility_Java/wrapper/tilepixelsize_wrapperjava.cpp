/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tilepixelsize.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TilePixelSize_getWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTilePixelSize *pObjectX = (EarthView::World::Spatial::CTilePixelSize*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getWidth();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TilePixelSize_getHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTilePixelSize *pObjectX = (EarthView::World::Spatial::CTilePixelSize*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getHeight();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TilePixelSize_setWidth_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dWidth_j)
			{
				ev_uint32 dWidth = (ev_uint32) dWidth_j;
				EarthView::World::Spatial::CTilePixelSize *pObjectX = (EarthView::World::Spatial::CTilePixelSize*) pObjXXXX;
				pObjectX->setWidth(dWidth);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TilePixelSize_setHeight_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dHeight_j)
			{
				ev_uint32 dHeight = (ev_uint32) dHeight_j;
				EarthView::World::Spatial::CTilePixelSize *pObjectX = (EarthView::World::Spatial::CTilePixelSize*) pObjXXXX;
				pObjectX->setHeight(dHeight);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TilePixelSize_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTilePixelSize *pObjectX = (EarthView::World::Spatial::CTilePixelSize*) pObjXXXX;
				EarthView::World::Spatial::CTilePixelSize* __values1 = pObjectX->clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
