/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdisplay/evbasiclabelengine.h"
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
			namespace Display
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Tagpoint_Create(JNIEnv *__env, jclass __clazz)
				{
					EarthView::World::Spatial::Display::tagPoint *pObjectX = new EarthView::World::Spatial::Display::tagPoint();
					return (jlong) pObjectX;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Tagpoint_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::tagPoint *pObjectX = (EarthView::World::Spatial::Display::tagPoint*)pObjXXXX;
					delete pObjectX;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_Tagpoint_get_1x_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::tagPoint *pObjectX = (EarthView::World::Spatial::Display::tagPoint*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->x);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Tagpoint_set_1x_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Display::tagPoint *pObjectX = (EarthView::World::Spatial::Display::tagPoint*)pObjXXXX;
					pObjectX->x = (double)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_Tagpoint_get_1y_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::tagPoint *pObjectX = (EarthView::World::Spatial::Display::tagPoint*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->y);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Tagpoint_set_1y_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Display::tagPoint *pObjectX = (EarthView::World::Spatial::Display::tagPoint*)pObjXXXX;
					pObjectX->y = (double)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Taggridmarker_Create(JNIEnv *__env, jclass __clazz)
				{
					EarthView::World::Spatial::Display::tagGridMarker *pObjectX = new EarthView::World::Spatial::Display::tagGridMarker();
					return (jlong) pObjectX;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Taggridmarker_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::tagGridMarker *pObjectX = (EarthView::World::Spatial::Display::tagGridMarker*)pObjXXXX;
					delete pObjectX;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_Taggridmarker_get_1dfPoint_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::tagGridMarker *pObjectX = (EarthView::World::Spatial::Display::tagGridMarker*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->dfPoint);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Taggridmarker_set_1dfPoint_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Display::tagGridMarker *pObjectX = (EarthView::World::Spatial::Display::tagGridMarker*)pObjXXXX;
					pObjectX->dfPoint = (double)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_Taggridmarker_get_1nRow_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::tagGridMarker *pObjectX = (EarthView::World::Spatial::Display::tagGridMarker*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->nRow);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Taggridmarker_set_1nRow_1int(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::Display::tagGridMarker *pObjectX = (EarthView::World::Spatial::Display::tagGridMarker*)pObjXXXX;
					pObjectX->nRow = (int)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_Taggridmarker_get_1nCol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::tagGridMarker *pObjectX = (EarthView::World::Spatial::Display::tagGridMarker*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->nCol);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Taggridmarker_set_1nCol_1int(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::Display::tagGridMarker *pObjectX = (EarthView::World::Spatial::Display::tagGridMarker*)pObjXXXX;
					pObjectX->nCol = (int)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Blockrangle_Create(JNIEnv *__env, jclass __clazz)
				{
					EarthView::World::Spatial::Display::blockRangle *pObjectX = new EarthView::World::Spatial::Display::blockRangle();
					return (jlong) pObjectX;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Blockrangle_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::blockRangle *pObjectX = (EarthView::World::Spatial::Display::blockRangle*)pObjXXXX;
					delete pObjectX;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_Blockrangle_get_1minVal_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::blockRangle *pObjectX = (EarthView::World::Spatial::Display::blockRangle*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->minVal);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Blockrangle_set_1minVal_1int(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::Display::blockRangle *pObjectX = (EarthView::World::Spatial::Display::blockRangle*)pObjXXXX;
					pObjectX->minVal = (int)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_Blockrangle_get_1maxVal_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::blockRangle *pObjectX = (EarthView::World::Spatial::Display::blockRangle*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->maxVal);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Blockrangle_set_1maxVal_1int(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::Display::blockRangle *pObjectX = (EarthView::World::Spatial::Display::blockRangle*)pObjXXXX;
					pObjectX->maxVal = (int)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_Blockrangle_get_1iD_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::blockRangle *pObjectX = (EarthView::World::Spatial::Display::blockRangle*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->iD);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Blockrangle_set_1iD_1int(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::Display::blockRangle *pObjectX = (EarthView::World::Spatial::Display::blockRangle*)pObjXXXX;
					pObjectX->iD = (int)__values1_j;
				}
			}
		}
	}
}
