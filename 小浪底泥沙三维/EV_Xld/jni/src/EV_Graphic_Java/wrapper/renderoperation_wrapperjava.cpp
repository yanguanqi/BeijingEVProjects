/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/renderoperation.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_RenderOperation_00024OperationTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CRenderOperation::OT_POINT_LIST,
					CRenderOperation::OT_LINE_LIST,
					CRenderOperation::OT_LINE_STRIP,
					CRenderOperation::OT_TRIANGLE_LIST,
					CRenderOperation::OT_TRIANGLE_STRIP,
					CRenderOperation::OT_TRIANGLE_FAN
				};
				jintArray array = __env->NewIntArray(6);
				__env->SetIntArrayRegion(array, 0, 6, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderOperation_get_1vertexData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderOperation *pObjectX = (EarthView::World::Graphic::CRenderOperation*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->vertexData);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderOperation_set_1vertexData_1CVertexData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CRenderOperation *pObjectX = (EarthView::World::Graphic::CRenderOperation*)pObjXXXX;
				pObjectX->vertexData = (EarthView::World::Graphic::CVertexData*) __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderOperation_get_1operationType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderOperation *pObjectX = (EarthView::World::Graphic::CRenderOperation*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->operationType);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderOperation_set_1operationType_1OperationType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CRenderOperation *pObjectX = (EarthView::World::Graphic::CRenderOperation*)pObjXXXX;
				pObjectX->operationType = (EarthView::World::Graphic::CRenderOperation::OperationType)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderOperation_get_1useIndexes_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderOperation *pObjectX = (EarthView::World::Graphic::CRenderOperation*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->useIndexes);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderOperation_set_1useIndexes_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CRenderOperation *pObjectX = (EarthView::World::Graphic::CRenderOperation*)pObjXXXX;
				pObjectX->useIndexes = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderOperation_get_1indexData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderOperation *pObjectX = (EarthView::World::Graphic::CRenderOperation*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->indexData);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderOperation_set_1indexData_1CIndexData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CRenderOperation *pObjectX = (EarthView::World::Graphic::CRenderOperation*)pObjXXXX;
				pObjectX->indexData = (EarthView::World::Graphic::CIndexData*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderOperation_get_1srcRenderable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderOperation *pObjectX = (EarthView::World::Graphic::CRenderOperation*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->srcRenderable);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderOperation_set_1srcRenderable_1CRenderable(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CRenderOperation *pObjectX = (EarthView::World::Graphic::CRenderOperation*)pObjXXXX;
				pObjectX->srcRenderable = (EarthView::World::Graphic::CRenderable*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderOperation_get_1numberOfInstances_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderOperation *pObjectX = (EarthView::World::Graphic::CRenderOperation*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->numberOfInstances);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderOperation_set_1numberOfInstances_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CRenderOperation *pObjectX = (EarthView::World::Graphic::CRenderOperation*)pObjXXXX;
				pObjectX->numberOfInstances = (size_t)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderOperation_get_1useGlobalInstancingVertexBufferIsAvailable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderOperation *pObjectX = (EarthView::World::Graphic::CRenderOperation*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->useGlobalInstancingVertexBufferIsAvailable);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderOperation_set_1useGlobalInstancingVertexBufferIsAvailable_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CRenderOperation *pObjectX = (EarthView::World::Graphic::CRenderOperation*)pObjXXXX;
				pObjectX->useGlobalInstancingVertexBufferIsAvailable = (bool)__values1_j;
			}
		}
	}
}
