/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/vertexboneassignment.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexBoneAssignment_Create(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Graphic::VertexBoneAssignment *pObjectX = new EarthView::World::Graphic::VertexBoneAssignment();
				return (jlong) pObjectX;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBoneAssignment_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::VertexBoneAssignment *pObjectX = (EarthView::World::Graphic::VertexBoneAssignment*)pObjXXXX;
				delete pObjectX;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexBoneAssignment_get_1vertexIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::VertexBoneAssignment *pObjectX = (EarthView::World::Graphic::VertexBoneAssignment*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->vertexIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBoneAssignment_set_1vertexIndex_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::VertexBoneAssignment *pObjectX = (EarthView::World::Graphic::VertexBoneAssignment*)pObjXXXX;
				pObjectX->vertexIndex = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_VertexBoneAssignment_get_1boneIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::VertexBoneAssignment *pObjectX = (EarthView::World::Graphic::VertexBoneAssignment*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->boneIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBoneAssignment_set_1boneIndex_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::VertexBoneAssignment *pObjectX = (EarthView::World::Graphic::VertexBoneAssignment*)pObjXXXX;
				pObjectX->boneIndex = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_VertexBoneAssignment_get_1weight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::VertexBoneAssignment *pObjectX = (EarthView::World::Graphic::VertexBoneAssignment*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->weight);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBoneAssignment_set_1weight_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::VertexBoneAssignment *pObjectX = (EarthView::World::Graphic::VertexBoneAssignment*)pObjXXXX;
				pObjectX->weight = (Real)__values1_j;
			}
		}
	}
}
