/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/geoscenequery.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_RaySceneQueryResultSimple_queryObjIDAndComponent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::RaySceneQueryResultSimple *pObjectX = (EarthView::World::Spatial3D::RaySceneQueryResultSimple*) pObjXXXX;
				ev_bool __values1 = pObjectX->queryObjIDAndComponent();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_RaySceneQueryResultSimple_getComponent_1ev_1uint32_1ev_1uint32_1CComponent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong objID_j, jlong component_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				ev_uint32 &objID = *(ev_uint32*) objID_j;
				EarthView::World::Spatial3D::CComponent &component = *(EarthView::World::Spatial3D::CComponent*) component_j;
				EarthView::World::Spatial3D::RaySceneQueryResultSimple *pObjectX = (EarthView::World::Spatial3D::RaySceneQueryResultSimple*) pObjXXXX;
				ev_bool __values1 = pObjectX->getComponent(index, objID, component);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_RaySceneQueryResultSimple_getComponentsSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::RaySceneQueryResultSimple *pObjectX = (EarthView::World::Spatial3D::RaySceneQueryResultSimple*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getComponentsSize();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
