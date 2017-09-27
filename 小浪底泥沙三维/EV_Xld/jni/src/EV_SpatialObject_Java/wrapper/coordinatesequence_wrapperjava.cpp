/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/coordinatesequence.h"
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_OperatorAssign_1CCoordinateSequence(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong obj_j )
				{
					EarthView::World::Spatial::Geometry::CCoordinateSequence& pObjectX = *(EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::CCoordinateSequence &obj = *(EarthView::World::Spatial::Geometry::CCoordinateSequence*) obj_j;
					pObjectX = obj;
					EarthView::World::Spatial::Geometry::CCoordinateSequence& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_getCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_getCoordinate_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CCoordinate __values1 = pObjectX->getCoordinate(index);
					EarthView::World::Spatial::Geometry::CCoordinate *returnvalues = new EarthView::World::Spatial::Geometry::CCoordinate(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_getMaxX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getMaxX();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_getMinX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getMinX();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_getMaxY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getMaxY();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_getMinY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getMinY();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_getMaxZ_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getMaxZ();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_getMinZ_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getMinZ();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_getMaxM_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getMaxM();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_getMinM_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getMinM();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_add_1CCoordinate_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong coords_j, jint index_j)
				{
					const EarthView::World::Spatial::Geometry::CCoordinate &coords = *(EarthView::World::Spatial::Geometry::CCoordinate*) coords_j;
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->add(coords, index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_add_1CCoordinateSequence_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong coords_j, jint index_j)
				{
					const EarthView::World::Spatial::Geometry::CCoordinateSequence &coords = *(EarthView::World::Spatial::Geometry::CCoordinateSequence*) coords_j;
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->add(coords, index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_append_1CCoordinate(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong coords_j)
				{
					const EarthView::World::Spatial::Geometry::CCoordinate &coords = *(EarthView::World::Spatial::Geometry::CCoordinate*) coords_j;
					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->append(coords);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_append_1CCoordinateSequence(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong coords_j)
				{
					const EarthView::World::Spatial::Geometry::CCoordinateSequence &coords = *(EarthView::World::Spatial::Geometry::CCoordinateSequence*) coords_j;
					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->append(coords);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_insert_1CCoordinate_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong coords_j, jlong index_j)
				{
					const EarthView::World::Spatial::Geometry::CCoordinate &coords = *(EarthView::World::Spatial::Geometry::CCoordinate*) coords_j;
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->insert(coords, index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_insert_1CCoordinateSequence_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong coords_j, jlong index_j)
				{
					const EarthView::World::Spatial::Geometry::CCoordinateSequence &coords = *(EarthView::World::Spatial::Geometry::CCoordinateSequence*) coords_j;
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->insert(coords, index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_replace_1CCoordinate_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong coord_j, jlong index_j)
				{
					const EarthView::World::Spatial::Geometry::CCoordinate &coord = *(EarthView::World::Spatial::Geometry::CCoordinate*) coord_j;
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->replace(coord, index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_replace_1CCoordinateSequence_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong coords_j, jlong index_j)
				{
					const EarthView::World::Spatial::Geometry::CCoordinateSequence &coords = *(EarthView::World::Spatial::Geometry::CCoordinateSequence*) coords_j;
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->replace(coords, index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_remove_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong size_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					ev_uint32 size = (ev_uint32) size_j;
					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->remove(index, size);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_reserve_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					pObjectX->reserve();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_reverse_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					pObjectX->reverse();
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_queryCoordinate_1CCoordinate_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong coord_j, jdouble tolerance_j)
				{
					const EarthView::World::Spatial::Geometry::CCoordinate &coord = *(EarthView::World::Spatial::Geometry::CCoordinate*) coord_j;
					ev_real64 tolerance = (ev_real64) tolerance_j;
					const 					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					ev_int32 __values1 = pObjectX->queryCoordinate(coord, tolerance);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_isDirty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					ev_bool __values1 = pObjectX->isDirty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_update_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					pObjectX->update();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_recalculateBoundingbox_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					pObjectX->recalculateBoundingbox();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CCoordinateSequence* __values1 = pObjectX->clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_clone2_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CCoordinateSequence __values1 = pObjectX->clone2();
					EarthView::World::Spatial::Geometry::CCoordinateSequence *returnvalues = new EarthView::World::Spatial::Geometry::CCoordinateSequence(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_ev_1toString_1EVCoordinateType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Geometry::EVCoordinateType type = (EarthView::World::Spatial::Geometry::EVCoordinateType) type_j;
					const 					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					EVString __values1 = pObjectX->toString(type);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					pObjectX->toStream(stream);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_toStream_1CDataStream_1EVCoordinateType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jint type_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Geometry::EVCoordinateType type = (EarthView::World::Spatial::Geometry::EVCoordinateType) type_j;
					const 					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					pObjectX->toStream(stream, type);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_offset_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					ev_real64 z = (ev_real64) z_j;
					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					pObjectX->offset(x, y, z);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_rotate_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble xRef_j, jdouble yRef_j, jdouble zRef_j, jdouble xAngle_j, jdouble yAngle_j, jdouble zAngle_j)
				{
					ev_real64 xRef = (ev_real64) xRef_j;
					ev_real64 yRef = (ev_real64) yRef_j;
					ev_real64 zRef = (ev_real64) zRef_j;
					ev_real64 xAngle = (ev_real64) xAngle_j;
					ev_real64 yAngle = (ev_real64) yAngle_j;
					ev_real64 zAngle = (ev_real64) zAngle_j;
					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					pObjectX->rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_scale_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble xRef_j, jdouble yRef_j, jdouble zRef_j, jdouble x_j, jdouble y_j, jdouble z_j)
				{
					ev_real64 xRef = (ev_real64) xRef_j;
					ev_real64 yRef = (ev_real64) yRef_j;
					ev_real64 zRef = (ev_real64) zRef_j;
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					ev_real64 z = (ev_real64) z_j;
					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					pObjectX->scale(xRef, yRef, zRef, x, y, z);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_mirror_1CCoordinate_1CCoordinate(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong coord1_j, jlong coord2_j)
				{
					const EarthView::World::Spatial::Geometry::CCoordinate *coord1 = (const EarthView::World::Spatial::Geometry::CCoordinate*) coord1_j;
					const EarthView::World::Spatial::Geometry::CCoordinate *coord2 = (const EarthView::World::Spatial::Geometry::CCoordinate*) coord2_j;
					const 					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CCoordinateSequence* __values1 = pObjectX->mirror(coord1, coord2);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CoordinateSequence_mirror2_1CCoordinate_1CCoordinate(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong coord1_j, jlong coord2_j)
				{
					const EarthView::World::Spatial::Geometry::CCoordinate &coord1 = *(EarthView::World::Spatial::Geometry::CCoordinate*) coord1_j;
					const EarthView::World::Spatial::Geometry::CCoordinate &coord2 = *(EarthView::World::Spatial::Geometry::CCoordinate*) coord2_j;
					const 					EarthView::World::Spatial::Geometry::CCoordinateSequence *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CCoordinateSequence __values1 = pObjectX->mirror2(coord1, coord2);
					EarthView::World::Spatial::Geometry::CCoordinateSequence *returnvalues = new EarthView::World::Spatial::Geometry::CCoordinateSequence(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
		}
	}
}
