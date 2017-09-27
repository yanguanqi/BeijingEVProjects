/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/cmddatabase.h"
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
			namespace Atlas
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_CommandOperTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					COT_INSERT,
					COT_UPDATE,
					COT_DELETE
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_CmdDataBase_getLayer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataBase *pObjectX = (EarthView::World::Spatial3D::CCmdDataBase*) pObjXXXX;
				EarthView::World::Spatial3D::Atlas::IGlobeLayer* __values1 = pObjectX->getLayer();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_CmdDataBase_getID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataBase *pObjectX = (EarthView::World::Spatial3D::CCmdDataBase*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getID();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_CmdDataBase_getOperType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataBase *pObjectX = (EarthView::World::Spatial3D::CCmdDataBase*) pObjXXXX;
				EarthView::World::Spatial3D::CommandOperType __values1 = pObjectX->getOperType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataBase_setID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				EarthView::World::Spatial3D::CCmdDataBase *pObjectX = (EarthView::World::Spatial3D::CCmdDataBase*) pObjXXXX;
				pObjectX->setID(id);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataBase_setLayer_1IGlobeLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pLayer_j)
			{
				EarthView::World::Spatial3D::Atlas::IGlobeLayer *ref_pLayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) ref_pLayer_j;
				EarthView::World::Spatial3D::CCmdDataBase *pObjectX = (EarthView::World::Spatial3D::CCmdDataBase*) pObjXXXX;
				pObjectX->setLayer(ref_pLayer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataBase_setOperType_1CommandOperType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint operType_j)
			{
				EarthView::World::Spatial3D::CommandOperType operType = (EarthView::World::Spatial3D::CommandOperType) operType_j;
				EarthView::World::Spatial3D::CCmdDataBase *pObjectX = (EarthView::World::Spatial3D::CCmdDataBase*) pObjXXXX;
				pObjectX->setOperType(operType);
			}
		}
	}
}
