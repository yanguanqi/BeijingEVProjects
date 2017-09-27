/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/pixelpoint.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_PixelPoint_getX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CPixelPoint *pObjectX = (EarthView::World::Spatial::CPixelPoint*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getX();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_PixelPoint_getY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CPixelPoint *pObjectX = (EarthView::World::Spatial::CPixelPoint*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getY();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
