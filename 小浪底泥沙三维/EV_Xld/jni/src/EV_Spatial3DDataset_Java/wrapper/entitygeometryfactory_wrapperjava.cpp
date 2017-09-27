/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/entitygeometryfactory.h"
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
			namespace Dataset
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EntityGeometryFactory_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial3D::Dataset::CEntityGeometryFactory* __values1 = EarthView::World::Spatial3D::Dataset::CEntityGeometryFactory::getSingletonPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EntityGeometryFactory_releaseSingleton_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial3D::Dataset::CEntityGeometryFactory::releaseSingleton();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_EntityGeometryFactory_createInstance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CEntityGeometryFactory *pObjectX = (EarthView::World::Spatial3D::Dataset::CEntityGeometryFactory*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEntityGeometry* __values1 = pObjectX->createInstance();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_EntityGeometryFactory_releaseInstance_1CEntityGeometry(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geom_j)
				{
					EarthView::World::Spatial3D::Dataset::CEntityGeometry *geom = (EarthView::World::Spatial3D::Dataset::CEntityGeometry*) geom_j;
					EarthView::World::Spatial3D::Dataset::CEntityGeometryFactory *pObjectX = (EarthView::World::Spatial3D::Dataset::CEntityGeometryFactory*) pObjXXXX;
					pObjectX->releaseInstance(geom);
				}
			}
		}
	}
}
