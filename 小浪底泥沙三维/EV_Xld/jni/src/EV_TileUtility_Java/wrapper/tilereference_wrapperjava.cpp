/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tilereference.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileReference_getTileRuleRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileReference *pObjectX = (EarthView::World::Spatial::CTileReference*) pObjXXXX;
				const EarthView::World::Spatial::CTileRule* __values1 = pObjectX->getTileRuleRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileReference_getLevelInfo_1ev_1int32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jlong dpiPerInch_j)
			{
				ev_int32 level = (ev_int32) level_j;
				ev_uint32 dpiPerInch = (ev_uint32) dpiPerInch_j;
				const 				EarthView::World::Spatial::CTileReference *pObjectX = (EarthView::World::Spatial::CTileReference*) pObjXXXX;
				EarthView::World::Spatial::CTileLevelInfo* __values1 = pObjectX->getLevelInfo(level, dpiPerInch);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileReference_getLevelInfo_1ev_1int32_1void_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jlong ptr1_j, jlong dpiPerInch_j)
			{
				ev_int32 level = (ev_int32) level_j;
				void *ptr1 = (void*) ptr1_j;
				ev_uint32 dpiPerInch = (ev_uint32) dpiPerInch_j;
				const 				EarthView::World::Spatial::CTileReference *pObjectX = (EarthView::World::Spatial::CTileReference*) pObjXXXX;
				EarthView::World::Spatial::CTileLevelInfo* __values1 = pObjectX->getLevelInfo(level, ptr1, dpiPerInch);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
