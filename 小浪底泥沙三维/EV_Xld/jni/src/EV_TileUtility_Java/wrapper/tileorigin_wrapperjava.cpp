/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tileorigin.h"
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
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_TileOrigin_getX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileOrigin *pObjectX = (EarthView::World::Spatial::CTileOrigin*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getX();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_TileOrigin_getY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileOrigin *pObjectX = (EarthView::World::Spatial::CTileOrigin*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getY();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_TileOrigin_getWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileOrigin *pObjectX = (EarthView::World::Spatial::CTileOrigin*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getWidth();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_TileOrigin_getHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileOrigin *pObjectX = (EarthView::World::Spatial::CTileOrigin*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getHeight();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_TileOrigin_getOriginPosition_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileOrigin *pObjectX = (EarthView::World::Spatial::CTileOrigin*) pObjXXXX;
				EarthView::World::Spatial::EVOriginPositionType __values1 = pObjectX->getOriginPosition();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileOrigin_setX_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dValue_j)
			{
				ev_real64 dValue = (ev_real64) dValue_j;
				EarthView::World::Spatial::CTileOrigin *pObjectX = (EarthView::World::Spatial::CTileOrigin*) pObjXXXX;
				pObjectX->setX(dValue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileOrigin_setY_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dValue_j)
			{
				ev_real64 dValue = (ev_real64) dValue_j;
				EarthView::World::Spatial::CTileOrigin *pObjectX = (EarthView::World::Spatial::CTileOrigin*) pObjXXXX;
				pObjectX->setY(dValue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileOrigin_setWidth_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dWidth_j)
			{
				ev_real64 dWidth = (ev_real64) dWidth_j;
				EarthView::World::Spatial::CTileOrigin *pObjectX = (EarthView::World::Spatial::CTileOrigin*) pObjXXXX;
				pObjectX->setWidth(dWidth);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileOrigin_setHeight_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dHeight_j)
			{
				ev_real64 dHeight = (ev_real64) dHeight_j;
				EarthView::World::Spatial::CTileOrigin *pObjectX = (EarthView::World::Spatial::CTileOrigin*) pObjXXXX;
				pObjectX->setHeight(dHeight);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileOrigin_setOriginPosition_1EVOriginPositionType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
			{
				EarthView::World::Spatial::EVOriginPositionType type = (EarthView::World::Spatial::EVOriginPositionType) type_j;
				EarthView::World::Spatial::CTileOrigin *pObjectX = (EarthView::World::Spatial::CTileOrigin*) pObjXXXX;
				pObjectX->setOriginPosition(type);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TileOrigin_getGeographicExtent_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong left_j, jlong top_j, jlong right_j, jlong bottom_j)
			{
				ev_real64 &left = *(ev_real64*) left_j;
				ev_real64 &top = *(ev_real64*) top_j;
				ev_real64 &right = *(ev_real64*) right_j;
				ev_real64 &bottom = *(ev_real64*) bottom_j;
				EarthView::World::Spatial::CTileOrigin *pObjectX = (EarthView::World::Spatial::CTileOrigin*) pObjXXXX;
				pObjectX->getGeographicExtent(left, top, right, bottom);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TileOrigin_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTileOrigin *pObjectX = (EarthView::World::Spatial::CTileOrigin*) pObjXXXX;
				EarthView::World::Spatial::CTileOrigin* __values1 = pObjectX->clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
