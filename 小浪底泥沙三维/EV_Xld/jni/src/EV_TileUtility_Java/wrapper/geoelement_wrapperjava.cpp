/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/geoelement.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_GeoElement_fromStream_1CDataStream_1EVGeoElementType_1ev_1uint32_1ev_1uint32_1ev_1int32(JNIEnv *__env , jclass __clazz, jlong stream_j, jint type_j, jlong width_j, jlong height_j, jint byteOrder_j)
			{
				EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
				EarthView::World::Spatial::EVGeoElementType type = (EarthView::World::Spatial::EVGeoElementType) type_j;
				ev_uint32 width = (ev_uint32) width_j;
				ev_uint32 height = (ev_uint32) height_j;
				ev_int32 byteOrder = (ev_int32) byteOrder_j;
				EarthView::World::Spatial::CGeoElement* __values1 = EarthView::World::Spatial::CGeoElement::fromStream(stream, type, width, height, byteOrder);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_GeoElement_fromTileStreamByID_1CDataStream_1ev_1uint32_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong stream_j, jlong id_j, jlong width_j, jlong height_j)
			{
				EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
				ev_uint32 id = (ev_uint32) id_j;
				ev_uint32 width = (ev_uint32) width_j;
				ev_uint32 height = (ev_uint32) height_j;
				EarthView::World::Spatial::CGeoElement* __values1 = EarthView::World::Spatial::CGeoElement::fromTileStreamByID(stream, id, width, height);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_GeoElement_fromTileStreamByIndex_1CDataStream_1ev_1uint32_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong stream_j, jlong index_j, jlong width_j, jlong height_j)
			{
				EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
				ev_uint32 index = (ev_uint32) index_j;
				ev_uint32 width = (ev_uint32) width_j;
				ev_uint32 height = (ev_uint32) height_j;
				EarthView::World::Spatial::CGeoElement* __values1 = EarthView::World::Spatial::CGeoElement::fromTileStreamByIndex(stream, index, width, height);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_GeoElement_getID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CGeoElement *pObjectX = (EarthView::World::Spatial::CGeoElement*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getID();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_GeoElement_getElementType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CGeoElement *pObjectX = (EarthView::World::Spatial::CGeoElement*) pObjXXXX;
				EarthView::World::Spatial::EVGeoElementType __values1 = pObjectX->getElementType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_GeoElement_getPartNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CGeoElement *pObjectX = (EarthView::World::Spatial::CGeoElement*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getPartNum();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_GeoElement_getPointNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CGeoElement *pObjectX = (EarthView::World::Spatial::CGeoElement*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getPointNum();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_GeoElement_getPointNumByPart_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CGeoElement *pObjectX = (EarthView::World::Spatial::CGeoElement*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getPointNumByPart(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_GeoElement_getMinX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CGeoElement *pObjectX = (EarthView::World::Spatial::CGeoElement*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getMinX();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_GeoElement_getMinY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CGeoElement *pObjectX = (EarthView::World::Spatial::CGeoElement*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getMinY();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_GeoElement_getMaxX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CGeoElement *pObjectX = (EarthView::World::Spatial::CGeoElement*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getMaxX();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_GeoElement_getMaxY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CGeoElement *pObjectX = (EarthView::World::Spatial::CGeoElement*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getMaxY();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_GeoElement_getPointRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CGeoElement *pObjectX = (EarthView::World::Spatial::CGeoElement*) pObjXXXX;
				const EarthView::World::Spatial::CPixelPoint* __values1 = pObjectX->getPointRef(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
