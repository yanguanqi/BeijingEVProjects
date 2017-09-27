/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/heightrange.h"
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
			namespace Effect3D
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_HeightRange_splitRandom_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint levels_j)
				{
					ev_int32 levels = (ev_int32) levels_j;
					EarthView::World::Spatial::Effect3D::CHeightRange *pObjectX = (EarthView::World::Spatial::Effect3D::CHeightRange*) pObjXXXX;
					pObjectX->splitRandom(levels);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_effect3d_HeightRange_subHeightRangeCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CHeightRange *pObjectX = (EarthView::World::Spatial::Effect3D::CHeightRange*) pObjXXXX;
					ev_int32 __values1 = pObjectX->subHeightRangeCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_HeightRange_getSubHeightRange_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Spatial::Effect3D::CHeightRange *pObjectX = (EarthView::World::Spatial::Effect3D::CHeightRange*) pObjXXXX;
					EarthView::World::Spatial::Effect3D::CHeightRange __values1 = pObjectX->getSubHeightRange(index);
					EarthView::World::Spatial::Effect3D::CHeightRange *returnvalues = new EarthView::World::Spatial::Effect3D::CHeightRange(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_effect3d_HeightRange_center_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CHeightRange *pObjectX = (EarthView::World::Spatial::Effect3D::CHeightRange*) pObjXXXX;
					ev_real32 __values1 = pObjectX->center();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_HeightRange_OperatorEquals_1CHeightRange(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Spatial::Effect3D::CHeightRange& pObjectX = *(EarthView::World::Spatial::Effect3D::CHeightRange*) pObjXXXX;
					const EarthView::World::Spatial::Effect3D::CHeightRange &other = *(EarthView::World::Spatial::Effect3D::CHeightRange*) other_j;
					ev_bool __values1 = (pObjectX == other);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_HeightRange_OperatorNotEquals_1CHeightRange(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Spatial::Effect3D::CHeightRange& pObjectX = *(EarthView::World::Spatial::Effect3D::CHeightRange*) pObjXXXX;
					const EarthView::World::Spatial::Effect3D::CHeightRange &other = *(EarthView::World::Spatial::Effect3D::CHeightRange*) other_j;
					ev_bool __values1 = (pObjectX != other);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_effect3d_HeightRange_get_1mfMaxHeight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CHeightRange *pObjectX = (EarthView::World::Spatial::Effect3D::CHeightRange*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mfMaxHeight);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_HeightRange_set_1mfMaxHeight_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial::Effect3D::CHeightRange *pObjectX = (EarthView::World::Spatial::Effect3D::CHeightRange*)pObjXXXX;
					pObjectX->mfMaxHeight = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_effect3d_HeightRange_get_1mfMinHeight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CHeightRange *pObjectX = (EarthView::World::Spatial::Effect3D::CHeightRange*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mfMinHeight);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_HeightRange_set_1mfMinHeight_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial::Effect3D::CHeightRange *pObjectX = (EarthView::World::Spatial::Effect3D::CHeightRange*)pObjXXXX;
					pObjectX->mfMinHeight = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_effect3d_HeightRange_get_1ZERO_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial::Effect3D::CHeightRange& __values1 = EarthView::World::Spatial::Effect3D::CHeightRange::ZERO;
					EarthView::World::Spatial::Effect3D::CHeightRange* returnvalues = new EarthView::World::Spatial::Effect3D::CHeightRange(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_HeightRange_isIntersect_1CHeightRange(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong range_j)
				{
					const EarthView::World::Spatial::Effect3D::CHeightRange &range = *(EarthView::World::Spatial::Effect3D::CHeightRange*) range_j;
					EarthView::World::Spatial::Effect3D::CHeightRange *pObjectX = (EarthView::World::Spatial::Effect3D::CHeightRange*) pObjXXXX;
					bool __values1 = pObjectX->isIntersect(range);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_effect3d_HeightRange_get_1DEFAULTHEIGHT_1void(JNIEnv *__env, jclass __clazz)
				{
					jdouble __values1_j = (jdouble)(EarthView::World::Spatial::Effect3D::CHeightRange::DEFAULTHEIGHT);
					return __values1_j;
				}
			}
		}
	}
}
