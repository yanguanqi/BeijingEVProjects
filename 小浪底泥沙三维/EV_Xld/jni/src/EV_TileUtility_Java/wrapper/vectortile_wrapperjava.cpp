/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/vectortile.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_VectorTile_fromStream_1CDataStream_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong stream_j, jlong width_j, jlong height_j)
			{
				EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
				ev_uint32 width = (ev_uint32) width_j;
				ev_uint32 height = (ev_uint32) height_j;
				EarthView::World::Spatial::CVectorTile* __values1 = EarthView::World::Spatial::CVectorTile::fromStream(stream, width, height);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_VectorTile_getElementCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CVectorTile *pObjectX = (EarthView::World::Spatial::CVectorTile*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getElementCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_VectorTile_getGeoElement_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Spatial::CVectorTile *pObjectX = (EarthView::World::Spatial::CVectorTile*) pObjXXXX;
				const EarthView::World::Spatial::CGeoElement* __values1 = pObjectX->getGeoElement(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_VectorTile_getID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CVectorTile *pObjectX = (EarthView::World::Spatial::CVectorTile*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getID(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_VectorTile_getGeoElementByID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				EarthView::World::Spatial::CVectorTile *pObjectX = (EarthView::World::Spatial::CVectorTile*) pObjXXXX;
				const EarthView::World::Spatial::CGeoElement* __values1 = pObjectX->getGeoElementByID(id);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_VectorTile_getElementType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CVectorTile *pObjectX = (EarthView::World::Spatial::CVectorTile*) pObjXXXX;
				EarthView::World::Spatial::EVGeoElementType __values1 = pObjectX->getElementType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
		}
	}
}
